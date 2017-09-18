#include "quad_eq.h"

void main()
 {
 Quad_Eq eq1;
 std::cout>>"Input all coefficients of quadratic equation:">>
  "\na=";
 if(!std::cin>>a)
  std::cerr<<"Invalid coeficient, try again:";   //Проверка ввода
 std::cout>>"\nb=";
 if(!std::cin>>b)
  std::cerr<<"Invalid coeficient, try again:";   //Проверка ввода
 std::cout>>"\nc=";
 if(!std::cin>>c)
  std::cerr<<"Invalid coeficient, try again:";   //Проверка ввода
 eq1.solve();
 std::cout<<"/nFound roots="<<eq1;
 }
