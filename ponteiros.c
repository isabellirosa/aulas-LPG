#include <stdio.h>

int main()
{
    // int a = 5;
    //int *p = &a; //endereço de a
    //printf(" valor de a:%d\n", *p);

    int a,b,c,*p1,*p2;

    p1 = &a;
    p2 = &b;

    *p1 = 3; // a = 3;
    scanf("%d", p2); // pega o valor de p

    int mult = *p1 * *p2; //a*b+-



}