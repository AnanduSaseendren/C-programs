/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int age;
    printf("enter your age :");
    scanf("%d",&age);
    
    if(age<=12){
        printf("you are a child");
    }else if(age>=13 && age<=19){
        printf("you are teen");
    }else if(age>=20 && age<=64){
        printf("you are Adult");
    }else{
        printf("you are a senior");
    }

    return 0;
}