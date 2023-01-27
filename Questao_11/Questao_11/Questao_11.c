#include <stdio.h>
#include <string.h>

char* reversingString(char str[], int start, int end)
{
    // Iterate loop upto start not equal to end
    while (start < end)
    {
        // XOR for swapping the variable
        str[start] ^= str[end];
        str[end] ^= str[start];
        str[start] ^= str[end];

        ++start;
        --end;
    }
    return str;
}

// Driver Code
int main()
{
    char s[] = "Gabriel";
    printf("%s", reversingString(s, 0, strlen(s)-1));
    return 0;
}