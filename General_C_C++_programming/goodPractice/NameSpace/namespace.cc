//this file contain examples for namespace

#include<iostream>

//two class same name different namespace (1)
namespace first
{
    class foo
    {
        public:
        foo(){std::cout<<"This is first foo\n";}
    };
}

namespace second
{
    class foo
    {
    public:
        foo(){std::cout<<"This is second foo\n";}
    };
    
}

//inline namespace (2)
namespace outer
{
    inline namespace inner
    {
        void foo(){std::cout<<"Inline namespace\n";}
    }
}
int main()
{
    //Test (1): Global scope divide into different scope
    /*first::foo a;
    second::foo b;*/

    //Test (2): inline namespace give their scope to enclosing scope 
    outer::inner::foo();
    outer::foo();
    return 1;
}