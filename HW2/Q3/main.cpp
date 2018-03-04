
#include <iomanip>
#include<iostream>
#include <fstream>
#include"Queue.h"
#include<string>


int main(){
<<<<<<< HEAD
  

 Queue q{"Queue.txt"};
=======
<<<<<<< HEAD
  

 Queue q{"Queue.txt"};
=======
std::ifstream ifile{"Queue.txt",std::ios::app};

 Queue q{ifile};
>>>>>>> 58ddcff5eb8c090836b93f6021e0d647b0aaf79d
>>>>>>> 2e537ec67b02f126773617f78b2e12e53c15bf8f

    // Display elements present in Circular Queue
   q.displayQueue();

    // Inserting elements in Circular Queue
     q.enQueue(15.5);
     q.enQueue(-6);

   q.displayQueue();
 
    // Deleting elements from Circular Queue
   
     std::cout<<"Deleted value = "<< q.deQueue() << std::endl;
     std::cout<<"Deleted value = "<< q.deQueue() << std::endl;
     
 
      q.displayQueue();
  

     return 0;
}
