#include <iostream>
#include <string>
#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
using namespace std;


Individual * BitFlip::mutate(Individual * Child1, int k){
  Individual * temporary = Child1;
    temporary -> flipBit((k-1)%temporary ->getLength());
    return temporary;
}
