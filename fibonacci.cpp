#include <stdio.h>
int main()
{
    int n;
    printf("Enter n :");
    scanf("%d", &n);

    int nexterm;
    int t1 = 0, t2 = 1;

    for (int i = 1; i < n; i++)
    {
        // printf("%d ", t1);

        nexterm = t1 + t2;
        t1 = t2;
        t2 = nexterm;
    }
    printf("%d ", t1);
}