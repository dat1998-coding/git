#ifndef EXTERN_EX_H 
#define EXTERN_EX_H
#include<iostream>
int glb_var;//this is declaration for a global var
void changingVar(int &);
void Print_in_header()
{
    std::cout<<"Addr of glb_var in the header:"<<&glb_var<<std::endl;
}
#endif
