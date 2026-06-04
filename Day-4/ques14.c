#include<stdio.h>
int main()
 {
    int n, i;
    long long a = 0, b = 1, c;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n == 0)
 {
        printf("The %dth Fibonacci term is %lld\n", n, a);
    }

    else if (n == 1) 
{
        printf("The %dth Fibonacci term is %lld\n", n, b);
    }
    else 
{
        for (i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        printf("The %dth Fibonacci term is %lld\n", n, b);
    }

    return 0;
}