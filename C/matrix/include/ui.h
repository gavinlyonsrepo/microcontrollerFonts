#ifndef _UI_H_
#define _UI_H_

#include <stdbool.h>

#define MAXX 160
#define MAXY 50


#define MAX_INTENSITY 13
#define MIN_INTENSITY 4

typedef struct {
    char char_value;
    int intensity;
}cell;

//extern defined in matrix
extern   cell matrix[MAXX][MAXY];


//prototypes
bool init_ui();
void cleanup_ui();
void show_matrix();
void set_colors();

#endif
