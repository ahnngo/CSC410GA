#include "genome.h"

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
  this->genes[index].red = value;
}; 

void genome::setGreen(int index, int value) {
  // set Red color
  this->genes[index].green = value;
}; 

void genome::setBlue(int index, int value) {
  // set Red color
  this->genes[index].blue = value;
}; 

int genome::getRed(int index) {
  // get Red
  return this->genes[index].red;
}; 

int genome::getGreen(int index) {
  // get Red
  return this->genes[index].green;
}; 

int genome::getBlue(int index) {
  // get Red
  return this->genes[index].blue;
}; 

void genome::print() {
  cout << "GENOME: " << this->nGenes << " genes" << endl;
   for (int i = 0; i < nGenes; i ++) {
    cout << "(" << this->genes[i].red << "," << this->genes[i].blue  << "," << this->genes[i].green << ")" << endl;
  };
  cout;
}; 



