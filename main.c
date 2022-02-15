/*
simple calculator project
by alice kinona
last updated on 5th feb
c89
mit lincense
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variable declaration
    char name [100];
    int quot;
    printf("simple calculator!\n");

    // input
    printf("enter your name:");
    gets(name);
    Printf("enter two integers:");
    scanf("%d,%d",&nd,&n2);

    //COMPUTATIONS
    sum=n1+n2;
    diff=n1-n2;
    product=n1*n2;
    qout=("float")n1/n2;

    //OUTPUT
    Printf("hey %s,here are the results:\n",name);
    printf("%d+%d=%d",n1,n2,sum);
    printf("%d-%d=%d",n1,n2,diff);
    printf("%d*%d=%d",n1,n2,product);
    printf("%d/%d=%f",n1,n2,quot)


    return 0;
}
