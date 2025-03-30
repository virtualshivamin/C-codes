//
//  main.c
//  Check a char
//
//  Created by SHIVAM SINGH on 20/02/22.
//

#include <stdio.h>

int main() {
    // insert code here...
    
    printf("Input a charactor :");
    char ch = getchar();
    int n = (int)ch;
    if ( n>=65 && n<= 90 || n>=97 && n<= 122 )
        printf("Inputed Charactor is an alphabet");
    else if(n>=48 && n<=57)
        printf("Inputed Charactor is digit");
    else
        printf("Inputed Charactor is special charactor");
    
    printf("\n");
    
//    printf("Hello, World!\n");
    return 0;
}
