#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

	// Checking for including "ncurses.h"
   if (!initscr())
   {
       fprintf(stderr, "Error initialising ncurses.\n");
       exit(1);
   }

	initscr();
	refresh();
	
   WINDOW *output = newwin(20, 32, 0, 0);
	WINDOW *input = newwin(3, 32, 19, 0);
    
   box(output, 0, 0);
	box(input, 0, 0);

	wrefresh(input);
	wrefresh(output);
   getch();

   delwin(output);
	delwin(input);

	endwin();
}
