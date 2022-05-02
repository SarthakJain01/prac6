#include <iostream>
#include <string>
#include "Individual.h"
#include "Mutator.h"
#include "Rearrange.h"
using namespace std;

Individual * Rearrange::mutate(Individual * Child1, int k){
  string str = "";
  string end = "";
  int n = (k-1)%Child1->getLength();
  for (int i = n; i<Child1 -> getLength(); i++) {
    str += to_string(Child1 -> getBit(i));
  }
  for (int j = 0; j<n; j++) {
    end += to_string(Child1 ->getBit(j));
  }
  Individual * temp = new Individual(str+end);
  return temp;
}