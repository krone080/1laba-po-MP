#include "quad_eq.h"
#include <iostream>
int main()
 {
 Quad_Eq eq1;
 eq1.input();
 std::cout<<"Found roots=";
 if(eq1.read_n()==0)
  std::cout<<"None";
 if(eq1.read_n()>=1)
  std::cout<<eq1.root(1);
 if(eq1.read_n()==2)
  std::cout<<" and "<<eq1.root(2);
 std::cout<<'\n';
 return 1;
 }
