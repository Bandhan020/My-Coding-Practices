// C program to reverse a string without
// using variable and library function
#include <stdio.h>

//Utility function to calculate length of string
size_t findLength(char str[])
{
    int i, len = 0;
    for(i=0; str[i]; ++i)
        ++len;
    return len;
}

void reverseString(char str[])
{
    // Find length of string
    int len = findLength(str);
    // Initialize variable
    int i;
     // Swap ith to (len - i -1)th character
    for(i=0; i < len/2; ++i)
    {
        //Use str[len] as temp variable
        str[len] = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = str[len];
    }

    //Assign null character back
    str[len] = '\0';
}

//Driver code
int main()
{
    char str[] = "Quora";
    // Call a function to reverse a string
    reverseString(str);

    printf("%s",str);

    return 0;
}

