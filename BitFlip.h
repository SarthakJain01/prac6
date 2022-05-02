#include <iostream>
#include <string>
#include "Individual.h"
#include "Mutator.h"

#ifndef BITFLIP_H
#define BITFLIP_H


class BitFlip:public Mutator{
    public:
        Individual * mutate(Individual * Child1, int k);
};

#endif