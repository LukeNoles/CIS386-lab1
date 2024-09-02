#include <stdio.h>
#include <string.h>

char *isPalindrome(char userInput[])
{
    int first = 0;
    int last = strlen(userInput) - 1;
    while (first < last)
    {
        if (userInput[first] != userInput[last])
        {
            return "False";
        }
        first++;
        last--;
    }
    return "True";
}

int main()
{
    char userInput[100];
    printf("Enter a string: \n");
    scanf("%s", userInput);
    printf("You entered %s. \n", userInput);
    printf("%s\n", isPalindrome(userInput));

    return 0;
}