/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int rows=5;
    int i,j,k;
    
    
    for (i = 0; i < rows; i++){
        for (j = 0; j < 2 * (rows - i) - 1; j++){
            printf(" ");
        }
        for (k = 0; k < 2 * i + 1; k++) {
            printf("* ");
        }
        
        printf("\n");
    }

    return 0;
}
