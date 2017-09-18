#include "quad_eq.h"

namespace
 {
 double discr(double a, double b, double c)
  {
  return b*b-4*a*c;
  }
 }

Quad_Eq::Quad_Eq(a,b,c)
 :a(a),b(b),c(c)
 {};
Quad_Eq::input()
 {
 std::cout>>"Input all coefficients of quadratic equation:";
 std::size_t i=1;
 while(i<=2)
 std::cout>>"/nc">>;
 if(!std::cin>>a)
  std::cerr<<"Invalid coeficient, try again:";   //Проверка ввода
 }
Quad_Eq::solve()
 {
 delete roots;
 double D=discr(a,b,c);
 unsigned n;
 if(D>0)
  n=2;
 else
  {
  if(D=0)
   n=1;
  else
   n=0;
  }
 if(n=0)
  return;
 roots=new double[n];                     // Проверка кол-ва корней
 roots[1]=(b+std::sqrt(D))/(2*a);
 roots[2]=(b-std::sqrt(D))/(2*a);
 return;
 }
Quad_Eq::operator<<(ostream& cout)
 {
 cout<<roots[1]<<','<<roots[2];//Сколько корней выводить?
 return cout;
 }

