/* -------- Header -------- */
/*
* File: main.c
* Description: 
* Author: Gavin Lyons.
* Complier: xc8 v2.10 compiler
* PIC: 
* IDE:  MPLAB X v5.30
* Created
* Description: See URL for full details.
* URL: 
*/

/* -------- libraries -------- */
#include "mcc_generated_files/mcc.h"


/*---------------- Globals---------*/

   
/* ----------- Defines -----------*/
#define INIT_DELAY 1000

/* -------- Function prototypes -------- */
void Setup(void);

/* --------- Main Loop ---------- */
void main(void)
{ 
    Setup();
    while (1)
    {
		__nop();
    }
}
/* --------- End of Main ---------- */


/* ------------ Function Space -------- */

// Function System Setup
void Setup(void)
{
    SYSTEM_Initialize();
}

/* End of File */
