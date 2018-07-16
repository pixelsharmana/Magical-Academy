#include <vector>
#include <string>
#include "organ.h"
#include "human.h"

human::human(){

}

human::human(const std::string &name_val, const bool sex_val):name(name_val),sex(sex_val){
  organs.push_back("Upper Body",1,1,1,1,1,1);
  organs.push_back("Lower Body",1,1,1,1,1,1);
}
