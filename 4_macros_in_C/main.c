#include <stdio.h>

#define HI "hi"
#define Square(x) ((x)*(x))

int square(int x)
{
    return x*x;
}

int main()
{    
    printf("Hello world %s\n", HI);
    printf("Hello world %d\n", Square(3));
    printf("Hello world %d\n", 3*3);
    printf("Hello world %d\n", square(3));
    return 0;
}