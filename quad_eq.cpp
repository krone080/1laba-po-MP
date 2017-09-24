#include "quad_eq.h"
#include <cmath>
#include <iostream>

using namespace std;

namespace
 {
 double discr(const double* a)
  {
  return a[1]*a[1]-4*a[0]*a[2];
  }
 }

Quad_Eq::Quad_Eq(const double& a, const double& b, const double& c)
 {
 coefs[0]=a;
 coefs[1]=b;
 coefs[2]=c;
 }

void Quad_Eq::input()
 {
 cout<<"Input all coefficients of quadratic equation:\n";
 unsigned i=0;
 char c='a'-1;
 while(i<=2)
  {
  ++c;
  cout<<c<<'=';
  if((cin>>coefs[i],!cin.good())||
          coefs[0]==0)
   {
   bool s=cin.rdstate();
   cin.clear();
   bool s=cin.rdstate();
   cerr<<"Invalid coeficient, try again:\n";
   --c;
   continue;
   }
  ++i;
  }
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
  return (-coefs[1]+sqrt(discr(coefs)))/(2*coefs[0]);                    // Проверка кол-ва корней
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
