#include "genome.h"

#include <iostream>

using namespace std;

struct Pixel {
  int red; 
  int blue;
  int green;
};

class genome {

  public:
    genome() {
      // Constructor
      genes = NULL;
      nGenes = 0;
    }; 

    ~genome() {
      // Destructor
      delocate()
    }; 
    
    void allocate(int nGenes) {
      // Take input as how many Pixels to store, 
      // allocates space for them, and initializes all the RGB Pixel values to zero
      if (this->genes != NULL) {
        delocate();
      }
      
      genes = new Pixel[nGenes];
      this->nGenes = nGenes;
    }; 

    void deallocate() {
      // free up the space that is pointed to by genes and sets nGenes to zero
      if (this->genes == NULL) {
        return;
      }
      this->genes = new Pixel;
      delete this->genes;
      this->genes = NULL;
      
      this->nGenes = new int;
      delete this->nGenes;
      this->nGenes = 0;
      
    }; 
    
    void randomize() {
      // set random values between 0 and 256 for each of the Red, Blue, and Green 
      // variables for each Pixel in the genes array
      for (int i = 0; i < this->nGenes; i++) {
        setRed(i, rand() % 256 + 1);
        setGreen(i, rand() % 256 + 1);
        setBlue(i, rand() % 256 + 1);
      };
    }; 
    
    void setRed(int index, int value) {
      // set Red color
      this->genes[index].red = value;
    }; 
    
    void setGreen(int index, int value) {
      // set Green color
      this->genes[index].green = value;
    }; 
    
    void setBlue(int index, int value) {
      // set Blue color
      this->genes[index].blue = value;
    }; 
    
    int getRed(int index) {
      // get Red
      return this->genes[index].red;
    }; 
    
    int getGreen(int index) {
      // get Green
      return this->genes[index].green;
    }; 
    
    int getBlue(int index) {
      // get Blue
      return this->genes[index].blue;
    }; 
    
    void print() {
      cout << this->nGenes << ' genes';
      for (int i = 0, i < nGenes, i ++) {
        cout << "(" << this->genes[i].red << "," << this->genes[i].blue  << "," << this->genes[i].green << ")" << endl;
      };
    }; 

  
  private:
    Pixel* genes;
    int nGenes;
    
};


