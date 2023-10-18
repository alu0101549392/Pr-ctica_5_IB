/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file arithmetic_operators.cc 
  * @author Luz Shakira Brito De la Rosa alu0101549392@ull.edu.es
  * @date 16/10/2023
  * @brief Este programa calcula todas las operaciones aritméticas 
  * y de comparación posibles entre dos grupos de números: dos números
  * enteros y dos números decimales
  * @bug There are no known bugs
  * @see https://github.com/IB-2023-2024/P05-expressions/blob/main/expressions.md
  */

#include <iostream>

int main() {
    int numero1{20};
    int numero2{30};
    double numero3{10.5};
    double numero4{2.1};

    std::cout << numero1 << " + " << numero2 << " = " << numero1 + numero2 << std::endl;
    std::cout << numero1 << " - " << numero2 << " = " << numero1 - numero2 << std::endl;
    std::cout << numero1 << " * " << numero2 << " = " << numero1 * numero2 << std::endl;
    std::cout << numero1 << " / " << numero2 << " = " << numero1 / numero2 << std::endl;
    std::cout << numero3 << " + " << numero4 << " = " << numero3 + numero4 << std::endl;
    std::cout << numero3 << " - " << numero4 << " = " << numero3 - numero4 << std::endl;
    std::cout << numero3 << " * " << numero4 << " = " << numero3 * numero4 << std::endl;
    std::cout << numero3 << " / " << numero4 << " = " << numero3 / numero4 << std::endl;

    std::cout << numero1 << " == " << numero2 << " = " << (numero1 == numero2) << std::endl;
    std::cout << numero1 << " != " << numero2 << " = " << (numero1 != numero2) << std::endl;
    std::cout << numero1 << " > " << numero2 << " = " << (numero1 > numero2) << std::endl;
    std::cout << numero1 << " < " << numero2 << " = " << (numero1 < numero2) << std::endl;
    std::cout << numero1 << " >= " << numero2 << " = " << (numero1 >= numero2) << std::endl;
    std::cout << numero1 << " <= " << numero2 << " = " << (numero1 <= numero2) << std::endl;
    std::cout << numero3 << " == " << numero4 << " = " << (numero3 == numero4) << std::endl;
    std::cout << numero3 << " != " << numero4 << " = " << (numero3 != numero4) << std::endl;
    std::cout << numero3 << " > " << numero4 << " = " << (numero3 > numero4) << std::endl;
    std::cout << numero3 << " < " << numero4 << " = " << (numero3 < numero4) << std::endl;
    std::cout << numero3 << " >= " << numero4 << " = " << (numero3 >= numero4) << std::endl;
    std::cout << numero3 << " <= " << numero4 << " = " << (numero3 <= numero4) << std::endl;

  return 0;
}
