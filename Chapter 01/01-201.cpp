#include <iostream>

void swap(int * point1, int * point2)
{
    int point3 = *point1;

    *point1 = *point2;
    *point2 = point3;

}

void swap(char * point1, char * point2)
{
    char point3 = *point1;

    *point1 = *point2;
    *point2 = point3;

}

void swap(double * point1, double * point2)
{
    double point3 = *point1;

    *point1 = *point2;
    *point2 = point3;

}

int main(void)
{
    int num1=20, num2=30;
    swap(&num1, &num2);
    std::cout<<num1<<' '<<num2<<std::endl;

    char ch1='A', ch2='Z';
    swap(&ch1, &ch2);
    std::cout<<ch1<<' '<<ch2<<std::endl;

    double dbl1=1.111, dbl2=5.555;
    swap(&dbl1, &dbl2);
    std::cout<<dbl1<<' '<<dbl2<<std::endl;
    return 0;
}