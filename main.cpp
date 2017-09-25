#include "quad_eq.h"
#include <iostream>

int main()
 {
 Quad_Eq eq1;
 if(!(eq1.input()))
  return 0;
 const unsigned n=eq1.numOfRoots();
 std::cout<<"Found roots: ";
 if(n==0)
  std::cout<<"None";
 if(n>=1)
  std::cout<<eq1.root(1);
 if(n==2)
  std::cout<<" and "<<eq1.root(2);
 std::cout<<"\n\n";
 return 1;
 }
