#ifndef UNIT_H
#define UNIT_H

class unit{
 public:
  char symbol;
  short colour;
  int x;
  int y;
  unit(char, short, int, int);
};

unit::unit(char a, short b, int c, int d){//Change the names
  symbol=a;
  colour=b;
  x=c;
  y=d;
}

#endif
