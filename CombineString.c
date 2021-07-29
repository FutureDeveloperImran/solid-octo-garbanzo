/* C program to concatenate two strings using pointer */
#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size

int main() // Main Function
{
    char str1[MAX_SIZE], str2[MAX_SIZE];  /* Declares two strings of size 100 */

    // Declare two pointer that points to String
    char * s1 = str1;
    char * s2 = str2;
    // Inputting 2 strings from user
    printf("Enter 1st string: ");
    gets(str1);
    printf("Enter 2nd string: ");
    gets(str2);
    // Moving till the end of str1
    while(*(++s1));
    // Coping str2 to str1
    while(*(s1++) = *(s2++));

    printf("Concatenated string: %s", str1); //Print the Final Result

    return 0;
}
