#include "quad_eq.h"
#include <iostream>

int main()
 {
 Quad_Eq eq1;
 for(;;)
  {
  if(!(eq1.input()))
   {
    std::cout<<'\n';
    continue;
   }
  const unsigned n=eq1.numOfRoots();
  std::cout<<"Found roots: ";
  if(n==3)
   {
   std::cout<<"Infinite number of roots\n\n";
   continue;
   }
  if(n==0)
   std::cout<<"None";
  if(n>=1)
   std::cout<<eq1.root(1);
  if(n==2)
   std::cout<<" and "<<eq1.root(2);
  std::cout<<"\n\n";
  }
 return 1;
 }
