struct Pixel {
  int red; 
  int blue;
  int green;
};

class genome {

  public:
    genome(); // Constructor
    ~genome(); // Destructor
    void allocate(int nGenes); // Take input as how many Pixels to store, allocates space for them, and initializes all the RGB Pixel values to zero
    void delocate(); // free up the space that is pointed to by genes and sets nGenes to zero
    void randomize(); // set random values between 0 and 256 for each of the Red, Blue, and Green variables for each Pixel in the genes array
    void setRed(int index, int value); // set Red color
    void setGreen(int index, int value); // set Green color
    void setBlue(int index, int value); // set Blue color
    int getRed(int index); // get Red
    int getGreen(int index); // get Green
    int getBlue(int index); // get Blue
    void print(); // print out the genes
  
  private:
    Pixel* genes;
    int nGenes;
};