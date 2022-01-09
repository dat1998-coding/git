#include<iostream>
#include<extern_ex.h>//this file contain .h file-> use everything in header

//in this file, the compiler don't let us redefine the var, but also want us to declare with extern for both obj and funct
//int glb_var;


int main()
{
    Print_in_header();
    glb_var=1;
    std::cout<<"Addr of glb_var:"<<&glb_var<<"And value:"<<glb_var<<std::endl;//we check to see if this var is the same glb_var
    changingVar(glb_var);
    std::cout<<"Addr of glb_var:"<<&glb_var<<"And value:"<<glb_var<<std::endl;

}