#ifndef QUAD_EQ_H
#define QUAD_EQ_H
#include <iostream>

class Quad_Eq
 {
 public:
  Quad_Eq(const double& a=0,const double& b=0,const double& c=0);
  bool input();
  double root(int i=1);
  unsigned numOfRoots();
 private:
  double coefs[3];
 };

#endif // QUAD_EQ_H
