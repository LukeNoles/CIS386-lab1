#include <stdio.h>
#include <math.h>
double area(int side1, int side2, int side3)
{
    float semi = (side1 + side2 + side3) / 2;
    double heron = semi * (semi - side1) * (semi - side2) * (semi - side3);
    double ans = sqrt(heron);
    return ans;
}
int main()
{
    int side1, side2, side3;

    printf("Enter side 1:");
    scanf("%d", &side1);
    printf("\nYou entered %d\n", side1);
    printf("Enter side 2:");
    scanf("%d", &side2);
    printf("\nYou entered %d\n", side2);
    printf("Enter side 3:");
    scanf("%d", &side3);
    printf("\nYou entered %d\n", side3);

    if (((side1 + side2) > side3) || ((side1 + side3) > side2) || ((side2 + side3) > side1))
    {
        printf("Impossible\n");
    }
    else if (side1 == side2 && side2 == side3)
    {
        printf("Equilateral\n");
        printf("Isosceles\n");
    }
    else if (side1 == side2 || side2 == side3 || side3 == side1)
    {
        printf("Isosceles\n");
    }
    else
    {
        printf("Scalene\n");
    }

    printf("%f\n", area(side1, side2, side3));

    return 0;
}