#ifndef QUAD_EQ_H
#define QUAD_EQ_H
#include <iostream>

class Quad_Eq
 {
 public:
  Quad_Eq(double a=0,double b=0,double c=0);
  void input();
  double root(int i=1);
  unsigned read_n()
   {return n;}
 private:
  double coefs[3];
  unsigned n;
 };

#endif // QUAD_EQ_H
