/* Write a program which accept name from user and print that name.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{   char Name[30];
    printf("Enter Name : ");
    scanf("%[^'\n']s",Name); //special scanf
    printf("Your name is : %s",Name);
    return EXIT_SUCCESS;
}