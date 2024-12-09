#include <iostream>

int main()
{
    char CharValue = '@';
    wchar_t Wchar_tValue = '##';
    int IntValue = 10;
    float FloatValue = 5.5;
    double DoubleValue = 10.25;
    bool BooleanValue = true;
    std::string StringValue = "Joao Vitor de Oliveira";
    std::cout << "Valor da variavel: " << StringValue << std::endl;

    ///////////////////////////////////////////////////////////////////////////
    std::cout << std::endl;
    ///////////////////////////////////////////////////////////////////////////

    const double PI = 3.14;
    std::cout << "Valor da constante: " << PI << std::endl;
   
    ///////////////////////////////////////////////////////////////////////////
    std::cout << std::endl;
    ///////////////////////////////////////////////////////////////////////////
    
    std::cout << "variables_and_constants program executed" << std::endl;
}
