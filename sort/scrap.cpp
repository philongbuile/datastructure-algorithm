#include <iostream>
namespace MyNameSpace
{
int x;
}
Chapter 31 Organizing COde169
namespace MySecondNameSpace
{
int x;
}
int main()
{
MyNameSpace::x = 123;
MySecondNameSpace::x = 456;
std::cout << "1st x: " << MyNameSpace::x << ", 2nd x: " <<
MySecondNameSpace::x;
}
