#include <stdio.h>
void main()
 {
int x, y, a, b;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
if (x > y) 
{
    printf("x should be less than or equal to y.\n");       
    }

    printf("Numbers between %d and %d that are divisible by %d and %d:\n", x, y, a, b);
for (int i = x; i <= y; i++)
 {
if (i % a == 0 && i % b == 0) 
{
    printf("%d\n", i);
        }
    }

    }
