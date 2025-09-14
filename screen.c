#include <ncurses.h>
#include "screen.h"

#define PIC_LINES 20
#define PIC_COLS 44
#define PIC_COL_MARGIN 5

#define COLOR_PAIR_ID 1
#define BORDER_CHARS '|', '|', '-', '-', '-', '-', '-', '-'

static int screen_lines, screen_cols;
static WINDOW *window_lyrics, *window_lyrics_inner, *window_credits, *window_pic;

static void draw_lyrics_border(WINDOW*);
static void draw_credits_border(WINDOW*);
static void destroy_windows(void);

screen_result_t screen_init(void)
{
  initscr();
  
  start_color();
  init_pair(COLOR_PAIR_ID, COLOR_YELLOW, COLOR_BLACK);
  
  getmaxyx(stdscr, screen_lines, screen_cols);

  int lyrics_lines = screen_lines - 2,
      lyrics_cols = screen_cols - PIC_COLS - PIC_COL_MARGIN * 2;
  if ((window_lyrics = newwin(lyrics_lines, lyrics_cols, 0, 0)) == NULL)
  {
    destroy_windows();
    endwin();
    return SCREEN_FAILURE;
  }

  if ((window_lyrics_inner = derwin(window_lyrics, lyrics_lines - 4, lyrics_cols - 4, 2, 2)) == NULL)
  {
    destroy_windows();
    endwin();
    return SCREEN_FAILURE;
  }

  if ((window_credits = newwin(screen_lines - PIC_LINES, PIC_COLS + PIC_COL_MARGIN * 2, 0, screen_cols - PIC_COLS - PIC_COL_MARGIN * 2)) == NULL)
  {
    destroy_windows();
    endwin();
    return SCREEN_FAILURE;
  }

  if ((window_pic = newwin(PIC_LINES, PIC_COLS, screen_lines - PIC_LINES, screen_cols - PIC_COLS - PIC_COL_MARGIN)) == NULL)
  {
    destroy_windows();
    endwin();
    return SCREEN_FAILURE;
  }
  
  bkgd(COLOR_PAIR(COLOR_PAIR_ID));
  refresh();

  wbkgd(window_lyrics, COLOR_PAIR(COLOR_PAIR_ID));
  wbkgd(window_lyrics_inner, COLOR_PAIR(COLOR_PAIR_ID));
  wbkgd(window_credits, COLOR_PAIR(COLOR_PAIR_ID));
  wbkgd(window_pic, COLOR_PAIR(COLOR_PAIR_ID));

  draw_lyrics_border(window_lyrics);
  draw_credits_border(window_credits);

  wrefresh(window_lyrics);
  wrefresh(window_credits);
  wrefresh(window_pic);
  wrefresh(window_lyrics_inner); // refresh at the end to focus the cursor to the window

  return SCREEN_SUCCESS;
}

void screen_lyrics_put_char(char c)
{
  waddch(window_lyrics_inner, c);
  wrefresh(window_lyrics_inner);
}

void screen_lyrics_clear(void)
{
  werase(window_lyrics_inner);
  wrefresh(window_lyrics_inner);
}

void screen_pic_set(const char *s)
{
  werase(window_pic);
  if (s != NULL)
    waddstr(window_pic, s);
  wrefresh(window_pic);
}

void screen_cleanup(void)
{
  destroy_windows();
  endwin();
}

static void draw_lyrics_border(WINDOW *window)
{
  int lines, cols;
  getmaxyx(window, lines, cols);
  wborder(window, BORDER_CHARS);
  mvwaddch(window, 0, cols - 1, ' ');
}

static void draw_credits_border(WINDOW *window)
{
  int lines, cols;
  getmaxyx(window, lines, cols);
  wborder(window, BORDER_CHARS);
  mvwaddch(window, 0, 0, ' ');
  mvwaddch(window, 0, cols - 1, ' ');
  mvwaddch(window, lines - 1, 0, ' ');
  mvwaddch(window, lines - 1, cols - 1, ' ');
}

static void destroy_windows(void)
{
  if (window_lyrics_inner != NULL) delwin(window_lyrics_inner);
  if (window_lyrics != NULL) delwin(window_lyrics);
  if (window_credits != NULL) delwin(window_credits);
  if (window_pic != NULL) delwin(window_pic);
}
