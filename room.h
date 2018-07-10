#ifndef ROOM_H
#define ROOM_H

unsigned int coords(unsigned int x, unsigned int y, unsigned int sizeX);

class tile{
  //private:
 public:
  unsigned int brightness:2;
  unsigned int colour:3;
  unsigned int type:3;
 public:
  tile();
  tile(const unsigned int, const unsigned int, const unsigned int);
};

class room{
 private:
  //time for noon, dark, day, ect
  //weather maybe
  //temperature, this affect tamagotchis and maybe the trees and fruits
  //neuralCore caretaker; //Each station has it's own caretaker ai;
  //vector<tamagotchi> zoo;
  std::vector<tile> environment;
 public:
  tile getTile(const unsigned int, const unsigned int);
  room();
  room(const unsigned int);
};

#endif
