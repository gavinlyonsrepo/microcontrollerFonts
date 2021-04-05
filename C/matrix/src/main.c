#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <curses.h>
#include "ui.h"
#include "matrix.h"
#include <stdbool.h>

#define ITERATIONS 300
#define REFRESH_DELAY 50000L

int main()
{
    if (!init_ui())
    {
        return EXIT_FAILURE;
    }

    matrix_init();

    for (int i=0; i <ITERATIONS; i++)
    {
        matrix_update();
        show_matrix();
        usleep(REFRESH_DELAY);
    }

    cleanup_ui();
    return EXIT_SUCCESS;
}
