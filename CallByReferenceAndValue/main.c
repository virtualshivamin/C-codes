//
//  main.c
//  CallByReferenceAndValue
//
//  Created by SHIVAM SINGH on 25/02/22.
//

#include <stdio.h>

void print(int a)
{
    printf("%d \n",a);
}

int main() {
    int a = 10;
    print(a);
    print(&a);
    // insert code here...
    printf("\n");
    return 0;
}
