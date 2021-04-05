
#include "ui.h"
#include <string.h>
#include <assert.h>
#include <curses.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

WINDOW *uiwindow = NULL;

int color_map[MAX_INTENSITY+1]= {1,2,2,3,3,3,4,4,4,4,4,5,3,6};

bool init_ui()
{

  //init curses
  uiwindow = initscr();
  if (uiwindow == NULL)return false;
  start_color();
  if(!has_colors() & !can_change_color())
  {
    printf("Error 1201 : \n");
    return false;
  }

  set_colors();
  return true;

}

void cleanup_ui()
{
    delwin(uiwindow);
    endwin();
    refresh();
}

void show_matrix()
{
  for (int x=0 ; x < MAXX; x++)
  {
    for(int y=0; y <MAXY; y++)
    {
        int intensity = matrix[x][y].intensity;
        color_set(color_map[intensity], NULL);
        mvaddch(y,x,matrix[x][y].char_value);
        refresh();
    }
   }
}
