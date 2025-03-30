//
//  main.c
//  PalindromeNumber
//
//  Created by SHIVAM SINGH on 25/02/22.
//

#include <stdio.h>

int main()
{
    printf("Input a number : ");
    int n,temp,rev=0;
    scanf("%d",&n);
    temp = n;
    while (temp > 0)
    {
        rev = ( rev * 10 ) + (temp % 10);
        temp = temp/10;
    }
    if (n == rev)
    {
        printf("Palindrome Number");
    }
    else
    {
        printf("Not Palindrome Number");
    }
    // insert code here...
    printf("\n");
    return 0;
}
