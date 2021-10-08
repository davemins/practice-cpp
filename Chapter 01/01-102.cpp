#include <iostream>

int main(void)
{
    char name[50];
    char number[50];

    std::cout<<"이름을 입력하시오: ";
    std::cin>>name;
    std::cout<<"전화번호를 입력하시오: ";
    std::cin>>number;

    std::cout<<"당신의 이름: "<<name<<std::endl;
    std::cout<<"당신의 전화번호: "<<number<<std::endl;
    return 0;
}