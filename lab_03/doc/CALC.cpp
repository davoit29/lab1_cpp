#include <iostream>

int power(int base, int  degree)
{
    int res = 1;
    for (int i =0; i<degree; ++i)
        res = res*base;
    return res;
}


int plus(int part_1, int part_2)
{
    return part_1 + part_2;
}


int minus(int part_1, int part_2)
{
    return part_1 - part_2;
}

int main(int argc, char* argv[]) // argc - кол-во входных аргументов,  char* argv[] - вектор строковых данных длиной 4
{
    if (argc != 4) {
        std::cout << "Не по правилам\n";
        return 1;
    }

    int operand_1 = std::atoi(argv[1]);  // std::atoi - строка в число
    int operand_2 = std::atoi(argv[2]);
    char oper = argv[3][0]; //первый символ 3 строки

    if (oper == '+')
        std::cout << plus(operand_1, operand_2) << std::endl;
    else if (oper == '-')
        std::cout << minus(operand_1, operand_2) <<std::endl;
    else if (oper == '^')
        std::cout << power(operand_1, operand_2) <<std::endl;
    else
        std::cout << "error: unknown operator\n";

    return 0;
}