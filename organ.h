#ifndef ORGAN_H
#define ORGAN_H

class organ{
 private:
  std::vector<organ> insides;
  std::string name;

  enum class damage{none, minor, inhibited, functionLoss, broken, missing};
  //Torn skin, muscle, cut skin, broken nail or bone, ect
  enum class damageFlavour{none, tear, bruise, cut, broken, torn};

  //Two bit values, 0 means never were ther to begin with, 1 is present,
  //2 is damaged, 3 means should be present, but removed (Like a bone teleported out)
  unsigned int bone:2;
  unsigned int muscle:2;
  unsigned int artery:2;
  unsigned int motorNerve:2;
  unsigned int sensoryNerve:2;
  unsigned int skin:2;

public:
  //damageOrgan(damage);
  addOrgan(organ);
  organ();
  organ(const std::string&, unsigned int, unsigned int, unsigned int, unsigned int,\
		unsigned int, unsigned int);
};

#endif
