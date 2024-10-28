/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1,num2,choise,result;
    printf("enter a 2 number you want to calculate :");
    scanf("%d%d",&num1,&num2);
    
    printf("enter your choise\n 1-addition\n 2-multiplication\n 3-subtration\n 4-divition");
    scanf("%d",&choise);
    
    switch(choise){
        
        case 1:
        result=num1+num2;
        break;
        
        case 2:
         result=num1-num2;
        break;
        
        case 3:
         result=num1*num2;
        break;
        
        case 4:
         result=num1/num2;
        break;
        
        default:
        printf("invalid input");
    }
    
    printf("result : %d",result);
    

    return 0;
}
