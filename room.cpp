#include <vector>
#include <random>
#include <math.h>
#include "room.h"

unsigned int coords(unsigned int x, unsigned int y, unsigned int sizeX){
  return x+y*sizeX;
}

tile::tile(){

}

tile::tile(const unsigned int x, const unsigned int y, const unsigned int z):brightness(x),colour(y),type(z){
}

room::room(){
  
}

tile room::getTile(const unsigned int x, const unsigned int y){
  return environment[coords(x,y,sqrt(environment.size()))];
}

room::room(const unsigned int size){
  for(unsigned int x=0;x<size*size;x++){//25^2
    environment.emplace_back(tile {0,0,rand()%6});
  }
}
