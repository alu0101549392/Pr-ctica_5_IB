/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2023-2024
*
* @file boolean_operators.cc
* @author Luz Shakira Brito De la Rosa alu0101549392@ull.edu.es
* @date 16/10/2023
* @brief Este programa calcula las tablas de verdad de todos los 
* operadores lógicos a partir de la operación entre dos variables 
* booleanas
* @bug There are no known bugs
* @see https://github.com/IB-2023-2024/P05-expressions/blob/main/expressions.md
*/

#include <iostream>

int main() {

  bool p{true}, q{false};

  std::cout << "\n~p y ~q:\n" << std::endl;
  
  std::cout << "!p = " << !p << std::endl;
  std::cout << "!q = " << !q << std::endl;
 
  std::cout << "\nF y T:\n" << std::endl;

  std::cout << "Opq = " << !p << std::endl;
  std::cout << "Vpq = " << p <<std::endl;
 
  std::cout << "\nAND:\n" << std::endl;

  std::cout << "q && q = " << (q && q) << std::endl;
  std::cout << "q && p = " << (q && p) << std::endl;
  std::cout << "p && q = " << (p && q) << std::endl;
  std::cout << "p && p = " << (p && p) << std::endl;

  std::cout << "\nNAND:\n" << std::endl;

  std::cout << "!(q && q) = " << !(q && q) << std::endl;
  std::cout << "!(q && p) = " << !(q && p) << std::endl;
  std::cout << "!(p && q) = " << !(p && q) << std::endl;
  std::cout << "!(p && p) = " << !(p && p) << std::endl;
  
  std::cout << "\nOR:\n" << std::endl;

  std::cout << "q || q = " << (q || q) << std::endl;
  std::cout << "q || p = " << (q || p) << std::endl;
  std::cout << "p || q = " << (p || q) << std::endl;
  std::cout << "p || p = " << (p || p) << std::endl;

  std::cout << "\nNOR:\n" << std::endl;
  
  std::cout << "!(q || q) = " << !(q || q) << std::endl;
  std::cout << "!(q || p) = " << !(q || p) << std::endl;
  std::cout << "!(p || q) = " << !(p || q) << std::endl;
  std::cout << "!(p || p) = " << !(p || p) << std::endl;

  std::cout << "\nXOR:\n" << std::endl;

  std::cout << "q ^ q = " << (q ^ q) << std::endl;
  std::cout << "q ^ p = " << (q ^ p) << std::endl;
  std::cout << "p ^ q = " << (p ^ q) << std::endl;
  std::cout << "p ^ p = " << (p ^ p) << std::endl;
  
  std::cout << "\nXNOR:\n" << std::endl;

  std::cout << "!(q ^ q) = " << !(q ^ q) << std::endl;
  std::cout << "!(q ^ p) = " << !(q ^ p) << std::endl;
  std::cout << "!(p ^ q) = " << !(p ^ q) << std::endl;
  std::cout << "!(p ^ p) = " << !(p ^ p) << std::endl;

  std::cout << "\nIMPLY:\n" << std::endl;

  std::cout << "(!p → q)  = " << (!p || !q) << std::endl;
  std::cout << "(!p → !q) = " << (p || !q) << std::endl;
  std::cout << "(p → q)   = " << (!p || q) << std::endl;
  std::cout << "(p → !q)  = " << (p || !q) << std::endl;
  
  std::cout << "\nNIMPLY:\n" << std::endl;

  std::cout << "!(!p → q)  = " << (!p && q) << std::endl;
  std::cout << "!(!p → !q) = " << (!p && !q) << std::endl;
  std::cout << "!(p → q)   = " << (p && !q) << std::endl;
  std::cout << "!(p → !q)  = " << !(p && !q) << std::endl;
  
  std::cout << "\n←:\n" << std::endl;
  
  std::cout << "(!p ← q)  = " << (!p && q) << std::endl;
  std::cout << "(!p ← !q) = " << !(!p && q) << std::endl;
  std::cout << "(p ← q)   = " << (!p && !q) << std::endl;
  std::cout << "(p ← !q)  = " << (p && q) << std::endl;
  
  std::cout << "\n~←:\n" << std::endl;

  std::cout << "!(!p ← q)  = " << !(!p && q) << std::endl;
  std::cout << "!(!p ← !q) = " << (!p && q) << std::endl;
  std::cout << "!(p ← q)   = " << !(!p && !q) << std::endl;
  std::cout << "!(p ← !q)  = " << !(p && q) << std::endl;

  std::cout << " " << std::endl;

  return 0;
}
