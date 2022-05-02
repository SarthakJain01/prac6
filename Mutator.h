#ifndef Mutator_H
#define Mutator_H
#include "Individual.h"
class Mutator{
public:
virtual Individual*mutate(Individual*Copy1, int k) = 0;
};
#endif