#include<iostream>

inline int add(int a,int b)
{
    return a+b;
}

int main()
{
    int a=1,b=2;
    std::cout<<add(a,b);// this replace cout<< 1+2 without need for calling function 
    return 0;
}