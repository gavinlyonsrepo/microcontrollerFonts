
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <curses.h>
#include <unistd.h>
#include <stdbool.h>
#include "ui.h"

#define NUM_DRIPS 250
#define PROB_DRIP_SPAWN 0.65
#define PROB_DIM 0.55
#define PROB_CHANGE 0.95
#define RANDOM_PRINTABLE_CHARACTER (33) + rand()%80


typedef struct {
int x ,y;
bool live;
bool bright;
}drip;

cell matrix[MAXX][MAXY];
drip drips[NUM_DRIPS];

void init_drips()
{
    for(int i=0 ; i < NUM_DRIPS ; i ++)
    {
        drips[i].live = false;
    }
}

void matrix_init()
{
  //set all matrix to black
  for (int x=0 ; x < MAXX; x++)
  {
    for(int y=0; y <MAXY; y++)
    {
        matrix[x][y].char_value = 0;
        matrix[x][y].intensity = 0;
    }

  }

  //init drips
  init_drips();

}

double rand01()
{
    return (double)rand()/ (double)RAND_MAX;
}

void fade_n_change_matrix()
{
  for (int x=0 ; x < MAXX; x++)
  {
    for(int y=0; y <MAXY; y++)
    {
        //random change characters -- even invisible ones
        if ((rand01() < PROB_CHANGE) || (matrix[x][y].char_value ==0))
        {
            matrix[x][y].char_value = RANDOM_PRINTABLE_CHARACTER ;
        }
        //randomly dim cells
        if (rand01() < PROB_DIM)
        {
            if (matrix[x][y].intensity > 0)
            {
                matrix[x][y].intensity--;
            }
        }
    }
  }
}


void try_add_drips()
{
    for(int i=0;i < NUM_DRIPS;i++ )
    {
        if (drips[i].live == false)
        {
            drips[i].live = true;
            drips[i].x = rand() % MAXX;
            drips[i].y = 0; // rand() %% MAXY
            drips[i].bright =  rand() % 2;
            return ;
        }
    }
}

void update_drips()
{
   for(int i=0;i < NUM_DRIPS;i++ )
    {
        if (drips[i].live)
        {
            if (drips[i].bright)
            {
                matrix[drips[i].x][drips[i].y].intensity= MAX_INTENSITY;
            }else
            {
                matrix[drips[i].x][drips[i].y].intensity= MIN_INTENSITY;
            }
        }
    //drips to die when hit bottom of screen
    if (++drips[i].y>= MAXY)
    {
        drips[i].live  = false;
    }

    }

}

void matrix_update()
{
    if (rand01() < PROB_DRIP_SPAWN)
    {
        try_add_drips();
    }
    update_drips();
    fade_n_change_matrix();

}


void set_colors()
{
    for(int i =0 ; i<8 ; i++)
    {
        init_pair(i+1,i, COLOR_BLACK);
    }
    //set shades of green
    for(int i =0 ; i<=5 ; i++)
    {
        init_color(i,0, i*200,0);

    }
    init_color(6,800,1000,800);
}


