#include<fstream>
#include<string>

class Queue {

 public:
  

  Queue (std::ifstream &ifile);    //constructor
  
  ~Queue();                        //Distructor

  void displayQueue ();
  void enQueue( double num);      //Inserting in array
  double deQueue();               //deleting from array
  


 private:
  int N;
  double num;
  double* arr;
  char cama;    //,
  int ReadPointer;
  int WritePointer;
  std::ifstream ifile;

};
