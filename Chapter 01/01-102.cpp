#include <iostream>

int main(void)
{
    char name[50];
    char number[50];

    std::cout<<"�̸��� �Է��Ͻÿ�: ";
    std::cin>>name;
    std::cout<<"��ȭ��ȣ�� �Է��Ͻÿ�: ";
    std::cin>>number;

    std::cout<<"����� �̸�: "<<name<<std::endl;
    std::cout<<"����� ��ȭ��ȣ: "<<number<<std::endl;
    return 0;
}