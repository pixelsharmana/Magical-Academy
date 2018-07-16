#ifndef HUMAN_H
#define HUMAN_H
#include "organ.h"

class human{
 private:
  std::vector<organ> organs;
  std::string name;
  unsigned int thirst;
  unsigned int hunger;
  unsigned int fatigue;
  bool sex;//0 for girl, 1 for boy
  //add soul
  //add some sort of knowledge tree
 public:
  human();
  human(const std::string&, const bool);
};

#endif
