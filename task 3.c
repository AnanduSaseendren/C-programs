/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float maths,science;
    printf("Enter your mark got is maths:\n");
    scanf("%f",&maths);
    printf("Enter your mark got is science:\n");
    scanf("%f",&science);
    
    if(maths>=50 && science>=50){
        printf("you are passed in the exam");
    }else{
        printf("your are failed in the exam");
    }

    return 0;
}
