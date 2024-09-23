#include <stdio.h>
int add(int x, int y);
int main()
{
    int a, b, c;
    printf("enter the value of a and b");
    scanf("%d %d", &a, &b);
    c = add(a, b);
    printf("the addition of perticular value %d", c);
    return 0;
}
int add(int x,int y)
{
    int r;
    r=x+y;
    return (r);
}
