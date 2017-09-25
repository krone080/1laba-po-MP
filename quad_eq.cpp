#include "quad_eq.h"
#include <cmath>

using namespace std;

namespace
 {
// Subsidiary function for execution of quadratic equation
// discrimenant
 double discr(const double* a)
  {
  return a[1]*a[1]-4*a[0]*a[2];
  }
 }

bool Quad_Eq::input()
 {
 cout<<"Input all coefficients of quadratic equation:\n\n";
 unsigned i=0;
 char c='a'-1;
 while(i<=2)
  {
  ++c;
  cout<<c<<'=';
// Validation of successful input
  if(!(cin>>coefs[i])||coefs[0]==0)
   {
   cerr<<"Invalid coeficient\n";
   return 0;
   }
  ++i;
  }
 return 1;
 }

double Quad_Eq::root(int i)
 {
 unsigned n=numOfRoots();
 if(n==0)
  {
  cout<<"This equation has no roots";
  return 0;
  }
 if(i==1&&coefs[0]!=0)
  return (-coefs[1]+sqrt(discr(coefs)))/(2*coefs[0]);
 if(i==2&&n>1&&coefs[0]!=0)
  return (-coefs[1]-sqrt(discr(coefs)))/(2*coefs[0]);
 cout<<"Invalid root index";
 return 0;
 }

unsigned Quad_Eq::numOfRoots()
 {
 double D=discr(coefs);
 if(D>0)
  return 2;
 if(D==0)
  return 1;
 return 0;
 }
