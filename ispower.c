#include <stdio.h>
#include <math.h>

char *ispower(int num)
{
    while (num % 2 == 0)
    {
        int pow = 0;
        while (num % 2 == 0)
        {
            num /= 2;
            pow++;
        }
        if (pow == 1)
        {
            return "false";
        }
    }
    for (int factor = 3; factor <= sqrt(num); factor = factor + 2)
    {
        int pow = 0;
        while (num % factor == 0)
        {
            num = num / factor;
            pow++;
        }

        if (pow == 1)
        {
            return "false";
        }
    }

    if (num == 1)
    {
        return "true";
    }
    else
    {
        return "false";
    }
}

int main()
{
    int userInput;
    printf("Enter a string: \n");
    scanf("%d", &userInput);
    printf("%s\n", ispower(userInput));

    return 0;
}
