/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int Mark;
    printf("enter your Mark :");
    scanf("%d",&Mark);
    
    if(Mark>=90 && Mark<=100){
        printf("congradulations you are got A grade");
        
    }else if(Mark>=80 && Mark<=89){
        printf("congradulations you are got B grade");
    }else if(Mark>=70 && Mark<=79){
        printf("congradulations you are got C grade");
        
    }else if(Mark>=60 && Mark<=69){
        printf("congradulations you are got D grade");
    }else{
        printf("Sorry you are failed in the exam");
    }
    

    return 0;
}
