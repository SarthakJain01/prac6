#include <iostream>
#include <string>
#include <sstream>
#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"
using namespace std;
Individual * execute(Individual * indPtr, Mutator * mPtr, int k){
  Individual * temp = mPtr->mutate(indPtr, k);
  return temp;
}
int main()
{
return 0;


}
