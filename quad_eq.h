#ifndef QUAD_EQ_H
#define QUAD_EQ_H
#include <iostream>

// Class for any quadratic equation (except the case with a=0 because
// that equation is not quadratic, it just should be remembered)
//
// a*x^2+b*x+c==0
class Quad_Eq
 {
 public:
// Default constructor
// Quad_Eq()=default;

// Member function for an assignment a value to every coefficient of
// quadratic equation by user input. When input was without fails,
// returns true otherwise false with output of "Invalid coefficient"
  bool input();

// Returns a root of quadratic equation with index i which range of
// values is 1 and 2. If input data do not conform with number of
// equation roots (index>number of roots) member function return 0
// with notification of fail output
  double root(int i=1);

// Simple member function returning number of equation roots
  unsigned numOfRoots();

 private:
// Array determining coefficients of monomials this way
// a=coefs[1], b=coefs[2], c=coefs[3]
  double coefs[3];
 };

#endif // QUAD_EQ_H
