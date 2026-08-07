#include <iostream>

int main()
{
    double num1, num2;

    std::cout << "=== CALCULADORA BASICA ===" << std::endl;
    std::cout << "Introduce el primer numero: \n";
    std::cin >> num1;

    std::cout << "Introduce el segundo numero: \n";
    std::cin >> num2;

    std::cout << "\nResultados: " << std::endl;
    std::cout << "Suma: " << (num1 + num2) << std::endl;
    std::cout << "Resta: " << (num1 - num2) << std::endl;
    std::cout << "Multiplicación: " << (num1 * num2) << std::endl;

    if (num2 != 0)
    {
        std::cout << "División: " << (num1 / num2) << std::endl;
    }
    else
    {
        std::cout << "División: Error (No se puede dividir por 0)" << std::endl;
    }
    return 0;
}