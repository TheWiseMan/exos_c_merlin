#include <stdio.h>

int fact(int n)
{
    int r = 1;
    for (int i=1; i<=n; i++)
    {
        r *= i ;
    }
    return r;
}

int main()
{
    int a;
    int n = 1;

    printf("entrez un nombre entier: ");
    scanf("%d", &a);

    while(n<a)
    {
        int s = fact(a-1);
        {
            if (s%a==0)
            {
                printf("%d\n", a);
                n++;
            }
        }
    }

    return 0;
}