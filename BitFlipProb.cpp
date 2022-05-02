#include <iostream>
#include <string>
#include "Individual.h"
#include "Mutator.h"
#include "BitFlipProb.h"
using namespace std;

BitFlipProb::BitFlipProb(double prob){
  p = prob;
}
Individual * BitFlipProb::mutate(Individual * Child1, int k){
  return Child1;
}
