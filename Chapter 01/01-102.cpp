#include <iostream>

int main(void)
{
    char name, number;

    std::cout<<"이름을 입력하시오: ";
    std::cin<<name;
    std::cout<<"전화번호를 입력하시오: ";
    std::cin<<number;

    std::cout<<"이름: "<<name;
    std::cout<<"전화번호: "<<number;

    return 0;
}