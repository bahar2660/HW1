#include<iostream>
#include<iomanip>

int main(){
  char a{'a'};
  const char* name{"Amir jahanshahi"};
  std::cout<<name<<std::endl;
  const char* p1{name};
  std::cout<<*p1<<*(p1+1)<<*(p1+2)<<std::endl;
  p1=&a;
  std::cout<<*p1<<*(p1+1)<<*(p1+2)<<std::endl;
  p1=name;
  std::cout<<p1<<std::endl;
  char* p2{name};
  

  return 0;
}
