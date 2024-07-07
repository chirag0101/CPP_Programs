#include<stdio.h>
int fun();

int main()
{
    int i;
    printf("%d ",i);
    while(i)
    {
        fun();
        main();
    }
    printf("Hello\n");
    return 0;
}
int fun()
{
    printf("Hi");
}