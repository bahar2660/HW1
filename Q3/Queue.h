#include<fstream>
#include<string>

class Queue {

 public:
  

<<<<<<< HEAD
  Queue (std::string file);    //constructor
=======
<<<<<<< HEAD
  Queue (std::string file);    //constructor
=======
  Queue (std::ifstream &ifile);    //constructor
>>>>>>> 58ddcff5eb8c090836b93f6021e0d647b0aaf79d
>>>>>>> 2e537ec67b02f126773617f78b2e12e53c15bf8f
  
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
