#include <vector>
#include <string>
#include "organ.h"

organ::organ(){

}

organ::organ(const std::string &name_val, unsigned int bone_val, unsigned int muscle_val, \
	  unsigned int artery_val, unsigned int motorNerve_val,\
	  unsigned int sensoryNerve_val, unsigned int skin_val)\
  :name(name_val),bone(bone_val),muscle(muscle_val), artery(artery_val),\
   motorNerve(motorNerve_val), sensoryNerve(sensoryNerve_val), skin(skin_val){}
