/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2023-2024
*
* @file desinflado.cc
* @author Luz Shakira Brito De la Rosa alu0101549392@ull.edu.es
* @date 16/10/2023
* @brief Este programa covierte una letra mayúscula dada por el
* usuario en su equivalente en minúscula
* @bug There are no known bugs
* @see https://github.com/IB-2023-2024/P05-expressions/blob/main/expressions.md
*/

#include <iostream>

int main() {

  char letra_mayuscula;

  std::cout << "Introduzca una letra mayúscula: " << std::endl;
  std::cin >> letra_mayuscula;

  int valor_letra_mayuscula = static_cast<int>(letra_mayuscula);

    if (valor_letra_mayuscula >= 65 && valor_letra_mayuscula <= 90) {
      int valor_letra_minuscula{valor_letra_mayuscula + 32};
      char letra_minuscula{static_cast<char>(valor_letra_minuscula)};
      std::cout << letra_minuscula << std::endl;
    
    } else {
      std::cout << "No es una letra mayúscula" << std::endl;
    
    }
  return 0;              
}
