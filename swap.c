#include<stdio.h>
void sp(int x, int y);
int main()
{
    int a, b;
    printf("enter the value of a and b");
    scanf("%d,%d", &a, &b);
    sp(a,b);
    return 0;
}
void sp(int x,int y)
{
    int z;
    z=x;
    x=y;
    y=z;
    printf("the swap value is %d \n",x);
    printf("the swap value is %d \n",y);

}
