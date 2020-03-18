#include <stdio.h>
#include <curses.h>
#include <unistd.h>

int
main ( void )
{
    WINDOW *ablak;
    ablak = initscr ();

    int x = 0;
    int y = 0;

    int xnov = 1;
    int ynov = 1;

    int mx;
    int my;


    for ( ;; ) {

        getmaxyx ( ablak, my , mx );

        mvprintw ( y, x, "O" );


        refresh ();
        usleep ( 100000 );

	//clear();



        x = x + xnov;
        y = y + ynov;


for (int i=x;i+xnov>mx-1;i-1)
{
xnov=-xnov;
}

for (int i=x;i+xnov<0;i+1)
{
xnov=-xnov;
}

for (int i=y;i+ynov>my-1;i-1)
{
ynov=-ynov;
}

for (int i=y;i+ynov<0;i+1)
{
ynov=-ynov;
}




	}
    

    return 0;
}
