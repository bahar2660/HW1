#include<iostream>
#include"Queue.h"
#include <fstream>
#include<string>
Queue::Queue(std::string file) {
  std:: ifstream ifile{file,std::ios::app};
 
   ifile>>N;
   
   std::cout<<"The size of array is :"<<N<<std::endl;
    arr=new double [N];
    
    for(int i{} ;i<N ; i++)  
    {
      
      ifile>>arr[i]>>cama;
      
      
      if(arr[0] ==0)          //for not storing zeros in line 1 into array
	ifile>>arr[i]>>cama;

      if (arr[i] !=0 ){
      ReadPointer=i;
      WritePointer=i+1;
      
      if(WritePointer == N)  //end of line
	WritePointer=0;
                       }
    }
  std::cout<<std::endl;
  
 
 ifile.close();
 

}
void Queue::displayQueue(){

  std::cout<<"the numbers in array are : "<<std::endl;
  
  for (int i{} ; i<N ;i++)
   std::cout<<arr[i]<<"  ";
    std::cout<<std::endl;
  }

void Queue:: enQueue(double num){

  if(arr[WritePointer] !=0)    //it means it has not free space yet
    std::cout<<"sorry .The Line is full"<<std::endl;
  else {
    arr[WritePointer]=num;
    WritePointer++;
    
    ReadPointer++;
    if(WritePointer == N)  //end of line
	WritePointer=0;
        }
  
}

double Queue::deQueue(){
  double deletevalue{arr[ReadPointer]};
  if (deletevalue == 0)  //means array has been empty
    {
      std::cout<<"array is empty"<<std::endl;
      deletevalue = 0;
     
    }
  
  arr[ReadPointer] = 0;
  WritePointer = ReadPointer;
  ReadPointer --;
  return deletevalue;

  }
  

Queue::~Queue(){

  std::cout<<"Distructor"<<std::endl;
  delete [] arr;
  
}
