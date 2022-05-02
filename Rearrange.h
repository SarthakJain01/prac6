#ifndef REARRANGE_H
#define REARRANGE_H
#include "Mutator.h"

class Rearrange:public Mutator{
public:
  Individual * mutate(Individual * Child1, int k);
};
#endif