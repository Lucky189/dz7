#include <iostream>

void Function() 
{
    static int a = 0;
    a++;
    std::cout << a << std::endl;

}

int main() 
{
    for (int i = 0; i < 3; i++) 
    {
        Function();
    }

    return 0;
}
