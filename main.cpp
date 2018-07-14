#include <ncurses.h>
#include <vector>
#include <string>
#include "room.h"
#include "unit.h"

WINDOW *createNewWin(const int height, const int width, const int starty, const int startx){
  WINDOW *localWin;
  localWin = newwin(height, width, starty, startx);
  box(localWin, 0 , 0);
  wrefresh(localWin);
  return localWin;
}

void destroyWin(WINDOW *localWin){
  wborder(localWin, ' ', ' ', ' ',' ',' ',' ',' ',' ');
  wrefresh(localWin);
  delwin(localWin);
}

char interpretTile(const tile &input){
  if(input.type==0){
    return 'T'; //Tree
  }
  else{
    return '.';
  }
}

//0=black,1=red,2=green,3=yellow,4=blue,5=magenta,6=cyan,7=white
void wPrintText(const WINDOW &window,const std::string &input , unsigned short color=7) {
  if (!has_colors()) {wprintw(window,input); return;}
  switch (color) {
  case 0:
	init_pair(0,COLOR_BLACK,COLOR_BLACK);
  case 1:
	init_pair(0,COLOR_RED,COLOR_BLACK);
  case 2:
	init_pair(0,COLOR_GREEN,COLOR_BLACK);
  case 3:
	init_pair(0,COLOR_YELLOW,COLOR_BLACK);
  case 4:
	init_pair(0,COLOR_BLUE,COLOR_BLACK);
  case 5:
	init_pair(0,COLOR_MAGENTA,COLOR_BLACK);
  case 6:
	init_pair(0,COLOR_CYAN,COLOR_BLACK);
  default:
	init_pair(0,COLOR_WHITE,COLOR_BLACK);
  }
  attron(COLOR_PAIR(0));
  wprintw(window,input);
  attroff(COLOR_PAIR(0));
}



int main(){
  room bedroomTutorial(50);
  WINDOW *winMenu;
  WINDOW *winViewer;
  initscr();
  cbreak();
  keypad(stdscr, TRUE);
  noecho();
  curs_set(0);
  refresh();
  unit player={'@',1,5,5};

  winViewer=createNewWin(LINES,COLS/3+COLS/3,0,COLS/3);
  winMenu=createNewWin(LINES,COLS/3,0,0);
  mvwaddch(winViewer, player.y, player.x, ' ');
  wrefresh(winViewer);
  refresh();

  for(unsigned int x=1;x<COLS/3+COLS/3-1;x++){
    for(unsigned int y=1;y<LINES-1;y++){
      
    }
  }
  
  while(getch() != KEY_F(1)){
    if(getch()==KEY_LEFT){
      mvwaddch(winViewer, player.y, player.x, ' ');
      player.x--;
      mvwaddch(winViewer, player.y, player.x, player.symbol);
      wrefresh(winViewer);
    }
    else if(getch()==KEY_RIGHT){
      mvwaddch(winViewer, player.y, player.x, ' ');
      player.x++;
      mvwaddch(winViewer, player.y, player.x, player.symbol);
      wrefresh(winViewer);
    }
    else if(getch()==KEY_UP){
      mvwaddch(winViewer, player.y, player.x, ' ');
      player.y--;
      mvwaddch(winViewer, player.y, player.x, player.symbol);
      wrefresh(winViewer);
    }
    else if(getch()==KEY_DOWN){
      mvwaddch(winViewer, player.y, player.x, ' ');
      player.y++;
      mvwaddch(winViewer, player.y, player.x, player.symbol);
      wrefresh(winViewer);
    }
  }

  endwin(); // End curses mode
  return 0;
}
