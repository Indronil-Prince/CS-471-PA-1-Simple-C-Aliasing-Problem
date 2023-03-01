/*
Name: Indronil Bhattacharjee
Date: 02-06-2023
Input: Hexadeximal values for characters of the name
Output: Name will be printed as string
*/

#include <stdio.h>

int main()
{
    int A[100];
    char *S;

    A[0] = 0x72646e49; 
    A[1] = 0x6c696e6f; 
    A[2] = 0x61684220; 
    A[3] = 0x63617474; 
    A[4] = 0x6a726168; 
    A[5] = 0x6565; 
    A[6] = 0; //Terminate the string with 0
    

    S = (char*)A;
    printf("My name is %s\n", S);

    return 0;
}