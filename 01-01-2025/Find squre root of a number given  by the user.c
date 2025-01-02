/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float x,r=1.0;
    int y,i;
    printf("Enter a number : ");
    scanf("%f",&x);
    
    printf("Enter a second number : ");
    scanf("%d",&y);
    
    if(y>=0){
        for(i=0;i<y;i++){
            r=r*x;
        }
    }
    else{
        for(i=0;i<-y;i++){
            r=r*x;
        }
    }
    
    printf("the ans is %f",r);
    
    

    return 0;
}
