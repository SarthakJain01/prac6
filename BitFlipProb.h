#ifndef BITFLIPPROB_H
#define BITFLIPPROB_H
#include "Mutator.h"


class BitFlipProb:public Mutator{
    private:
        double p;
    public:
        BitFlipProb(double prob);
        Individual * mutate(Individual * Child1, int k);
};
#endif