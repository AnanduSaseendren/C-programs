/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num;
    printf("Enter A number");
    scanf("%d",&num);
    
    if(num>0){
        printf("the number is positive:\n");
        if(num*2==0){
            printf("the number is a even number");
        }else{
            printf("the number is even number");
        }
    }else if(num<0){
        printf("the number  is negative");
    }else{
        printf("the  number is Zero");
    }

    return 0;
}
