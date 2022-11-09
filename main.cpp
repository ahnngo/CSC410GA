#include "genome.h"

int main() {
  genome myGenome;
  
  myGenome.print();
  
  myGenome.allocate(4);
  
  myGenome.print();
  
  myGenome.randomize();
  
  myGenome.print();
  
  myGenome.setBlue(0, 226);
  
  myGenome.print();
  
  return 0;
}
