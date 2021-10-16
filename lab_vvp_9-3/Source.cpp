#include <stdio.h>

int main(void)
{
    int K, N;
    printf("Enter day of that year 'K': ");
    scanf("%i", &K);
    if ((K < 1) || (K > 365))
    {
        printf("Your number should be (K < 1) || (K > 365)!");
    }
    else
    {
        printf("Enter day of that week (1st January) 'N': ");
        scanf("%i", &N);
        N -= 1;
        printf("That day of the week is: ");
        printf("%i\n", K % 7 + N);
    }
}