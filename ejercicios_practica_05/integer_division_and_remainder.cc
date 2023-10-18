/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file integer_division_and_remainder.cc
  * @author Luz Shakira Brito De la Rosa alu0101549392@ull.edu.es
  * @date 18/10/2023
  * @brief Este programa calcula el cociente y el resto de dos
  * números naturales dados por el usuario
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107
  */

#include <iostream>

int main() {
  int numero_1, numero_2;
  std::cin >> numero_1 >> numero_2;

  int cociente{numero_1 / numero_2};
  int resto{numero_1 % numero_2};

  std::cout << cociente << ' ' << resto << std::endl;
  return 0;
}
