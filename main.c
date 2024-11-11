/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
   char str[100];
   int length, isPalindrome = 1;

   printf("enter a string");
   scanf("%s",str);
    length = strlen(str);

    for(int i=0;i<length/2;i++){
        if (str[i] != str[length - i - 1]){
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    }else{
         printf("The string is not a palindrome.\n");

    }


    return 0;
}