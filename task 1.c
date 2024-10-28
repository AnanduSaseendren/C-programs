/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int price;
    printf("Enter the price :");
    scanf("%d",&price);
    if(price>100){
        printf("Congradulations you have got 10 persentage off");
    }else if(price>=50 && price<=100){
        printf("Congradulations you have got 5 persentage off");
    }else{
        printf("Sorry no discouns for you");
    }

    return 0;
}
