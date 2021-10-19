#include<header.h>
#include<header.h>//Accidentally include duplicant is okay
#include<header.h>//as long as there is header guard
int main()
{
    std::cout<<"-I option to specify the path of include file\n";
    return 0;
}