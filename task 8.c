/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1,num2;
    printf("enter a integer value");
    scanf("%d",&num1);
    printf("enter second integer value");
    scanf("%d",&num2);
    
    if(num1==num2){
        printf("you are entered equal numbers");
        
    }else{
        printf("the numbers are not equal");
    }

    return 0;
}
