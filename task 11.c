/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int temp;
    printf("enter the tembrature :");
    scanf("%d",&temp);
    
    if(temp<=15){
        printf("the tembrature is COLD");
    }else if(temp>=15 && temp<=25){
        printf("the tembrature is WARM");
    }else{
        printf("the tembratureis HOT");
    }

    return 0;
}
