#include<iostream>
//In this file there is no inclusion of the header contain glb_var
extern int glb_var;//tell the compiler there is existed var with this name, look for it instead of allocation new var

void changingVar(int &var)
{
    var=5;
}