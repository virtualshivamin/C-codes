//
//  main.c
//  StringsConcate
//
//  Created by SHIVAM SINGH on 25/02/22.
//




#include <stdio.h>
#include <string.h>
int main()
{
    printf("Enter Both of stings one by one\n");
    char string1[100];
    char string2[100];
    gets(string1);
    gets(string2);
    strcat(string1,string2);
    printf("strings after concatenation will look like:");
    puts(string1);
    return 0;
}

