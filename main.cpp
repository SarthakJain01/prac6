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
string input;
getline(cin, input);
string array[4];
int i = 0;
stringstream ssin(input);
while (ssin.good() && i < 4){
  ssin >> array[i];
  ++i;
}
Individual * binarystringvalue1 = new Individual(array[0]);
Individual * binarystringvalue2 = new Individual(array[2]);
int k1 = stoi(array[1]);
int k2 = stoi(array[3]);
Mutator * flippedvalue = new BitFlip();
Mutator * rearrangedvalue = new Rearrange();
binarystringvalue1 = flippedvalue -> mutate(binarystringvalue1,k1);
binarystringvalue2 = rearrangedvalue -> mutate(binarystringvalue2, k2);
cout<<binarystringvalue1->getString()<<" "<<binarystringvalue2->getString()<<" "<<binarystringvalue2->getMaxOnes()<<endl;
return 0;


}
