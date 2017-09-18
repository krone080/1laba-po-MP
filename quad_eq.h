#ifndef QUAD_EQ_H
#define QUAD_EQ_H
#include <iostream>

class Quad_Eq
 {
 public:
  Quad_Eq(a=0,b=0,c=0);
  void input();
  void solve();
  ostream& operator<<(ostream& cout);
 private:
  double* coefs,roots;
 };

#endif // QUAD_EQ_H
