#include "quad_eq.h"
#include <cmath>
#include <iostream>

namespace
 {
 double discr(double a, double b, double c)
  {
  return b*b-4*a*c;
  }

 unsigned num_of_roots(double a, double b, double c)
  {
  double D=discr(a,b,c);
  if(D>0)
   return 2;
  if(D==0)
   return 1;
  return 0;
  }
 }

Quad_Eq::Quad_Eq(double a, double b, double c)
 {
 coefs[0]=a;
 coefs[1]=b;
 coefs[2]=c;
 n=num_of_roots(a,b,c);
 }

void Quad_Eq::input()
 {
 std::cout<<"Input all coefficients of quadratic equation:\n";
 unsigned i=0;
 char c='a'-1;
 while(i<=2)
  {
  ++c;
  again:
  std::cout<<c<<'=';
  if(!(std::cin>>coefs[i])||coefs[0]==0)
   {
   std::cerr<<"Invalid coeficient, try again:\n";   //Проверка ввода
   goto again;
   }
  ++i;
  }
 n=num_of_roots(coefs[0],coefs[1],coefs[2]);
 }

double Quad_Eq::root(int i)
 {
 if(n==0)
  {
  std::cout<<"This equation has no roots";
  return 0;
  }
 if(i==1&&coefs[0]!=0)
  return (-coefs[1]+std::sqrt(discr(coefs[0],coefs[1],coefs[2])))/(2*coefs[0]);                    // Проверка кол-ва корней
 if(i==2&&n>1&&coefs[0]!=0)
  return (-coefs[1]-std::sqrt(discr(coefs[0],coefs[1],coefs[2])))/(2*coefs[0]);
 std::cout<<"Invalid root index";
 return 0;
 }
