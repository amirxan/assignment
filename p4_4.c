#include <stdio.h>
#include <stdbool.h>

bool isGreatNumber(int n)
{
    if (n < 2)
        return false;   

    int sum = 1;      

   
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
            if (i != n / i)
                sum += n / i;
        }
    }

    return sum == n;
}

int main()
{
    int limit;

    scanf_s("%d", &limit);

    for (int i = 1; i <= limit; i++)
    {
        if (isGreatNumber(i))
            printf("%d\n", i);
    }

    return 0;
}