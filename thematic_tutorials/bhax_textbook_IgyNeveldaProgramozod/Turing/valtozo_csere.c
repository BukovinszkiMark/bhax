#include <stdio.h>

int main()
{

int a;
int b;

printf("Enter two numbers: \n");

scanf("%d",&a);
scanf("%d",&b);

    printf("%s","a=");
    printf("%d",a);

    printf("%s","   ");

    printf("%s","b=");
    printf("%d",b);

    printf("%s","\n");       
    printf("%s","\n");

    b = b - a;
    a = a + b;
    b = a - b;

    printf("%s","a=");
    printf("%d",a);

    printf("%s","   ");

    printf("%s","b=");
    printf("%d",b);

    printf("%s","\n");       
    printf("%s","\n");

    a = a * b;        
    b = a / b;       
    a = a / b;          

    printf("%s","a=");
    printf("%d",a);

    printf("%s","   ");

    printf("%s","b=");
    printf("%d",b);

    printf("%s","\n");       
    printf("%s","\n");

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("%s","a=");
    printf("%d",a);

    printf("%s","   ");

    printf("%s","b=");
    printf("%d",b);

    printf("%s","\n");       
    printf("%s","\n");

return 0;

}

