#include "genome.h"
#include <cassert>
#include <iostream>
#include <iostream>

using namespace std;

genome::genome() {
  // Constructor
  genes = NULL;
  nGenes = 0;
};

genome::~genome() {
  // Destructor
  delocate();
}; 

void genome::allocate(int nGenes) {
  // Take input as how many Pixels to store, 
  // allocates space for them, and initializes all the RGB Pixel values to zero
  if (this->genes != NULL) {
    delocate();
  }
  
  genes = new Pixel[nGenes];
  this->nGenes = nGenes;
}; 

void genome::delocate() {
  // free up the space that is pointed to by genes and sets nGenes to zero
  if (this->genes == NULL) {
    return;
  }
  
  delete[] this->genes;
  this->genes = NULL;
  this->nGenes = 0;
  
}; 


void genome::randomize() {
  // set random values between 0 and 256 for each of the Red, Blue, and Green 
  // variables for each Pixel in the genes array
  for (int i = 0; i < this->nGenes; i++) {
    setRed(i, rand() % 256 + 1);
    setGreen(i, rand() % 256 + 1);
    setBlue(i, rand() % 256 + 1);
  };
}; 

void genome::setRed(int index, int value) {
  // set Red color
  if (0 <= index && index < this->nGenes) {
    this->genes[index].red = value;
  }
}; 

void genome::setGreen(int index, int value) {
  // set Green color
  if (0 <= index && index < this->nGenes) {
    this->genes[index].green = value;
  }
}; 

void genome::setBlue(int index, int value) {
  // set Blue color
  if (0 <= index && index < this->nGenes) {
    this->genes[index].blue = value;
  }
}; 

int genome::getRed(int index) {
  // get Red
  if (0 <= index && index < this->nGenes) {
    return this->genes[index].red;
  }
  return -1;
}; 

int genome::getGreen(int index) {
  // get Green
  if (0 <= index && index < this->nGenes) {
    return this->genes[index].green;
  }
  return -1;
}; 

int genome::getBlue(int index) {
  // get Blue
  if (0 <= index && index < this->nGenes) {
    return this->genes[index].blue;
  }
  return -1;
}; 

void genome::print() {
  cout << "GENOME: " << this->nGenes << " genes" << endl;
   for (int i = 0; i < nGenes; i ++) {
    cout << "(" << this->genes[i].red << "," << this->genes[i].blue  << "," << this->genes[i].green << ")" << endl;
  };
  cout;
};

void genome::UnitTest() {
    // Unit Testing for created methods
    genome testGenome;
    testGenome.allocate(4);
    
    testGenome.setRed(0, 226);
    testGenome.setRed(3, 100);
    testGenome.setRed(2, 0);
    
    testGenome.setBlue(0, 56);
    testGenome.setBlue(3, 43);
    testGenome.setBlue(1, 9);
    
    testGenome.setGreen(2, 79);
    testGenome.setGreen(1, 3);
    testGenome.setGreen(0, 134);
    
    cout << "Test getRed()" << endl;
    cout << (226 == testGenome.getRed(0)) << endl;
    cout << (100 == testGenome.getRed(3)) << endl;
    cout << (0 == testGenome.getRed(2)) << endl;
    cout << (-1 == testGenome.getRed(7)) << endl;
    cout << endl;
    cout << "Test getBlue()" << endl;
    cout << (56 == testGenome.getBlue(0)) << endl;
    cout << (43 == testGenome.getBlue(3)) << endl;
    cout << (9 == testGenome.getBlue(1)) << endl;
    cout << (-1 == testGenome.getBlue(10)) << endl;
    cout << endl;
    cout << "Test getGreen()" << endl;
    cout << (79 == testGenome.getGreen(2)) << endl;
    cout << (3 == testGenome.getGreen(1)) << endl;
    cout << (134 == testGenome.getGreen(0)) << endl;
    cout << (-1 == testGenome.getGreen(10)) << endl;
    cout << endl;
    
};

