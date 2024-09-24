#include <stdio.h>
float add(float, float);
int main()
{
    float num1, num2;
    printf("enter the of num1,num2");
    scanf("%f %f", &num1, &num2);
    float c;
    c = add(num1, num2);
    printf("the addition of that number %f", c);
    return 0;
}
float add(float x, float y)
{
    float z;
    z = x + y;
    return (z);
}