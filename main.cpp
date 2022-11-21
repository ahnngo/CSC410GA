#include "genome.h"

#include <iostream>
#include "string.h"
#include <cstdio>

using namespace std;

int main() {
  genome myGenome;
  
  myGenome.print();
  cout << endl;
  
  cout << "Allocating 4 genes to the object" << endl;
  myGenome.allocate(4);
  myGenome.print();
  cout << endl;
  
  cout << "Randomizing the RGB of all genes in the object" << endl;
  myGenome.randomize();
  myGenome.print();
  cout << endl;
  
  cout << "Setting Blue at index 0 to 226" << endl;
  myGenome.setBlue(0, 226);
  myGenome.print();
  cout << endl;
  
  cout << "Calling unit testing" << endl;
  myGenome.UnitTest();
  
  return 0;
}
