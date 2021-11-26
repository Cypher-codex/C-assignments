#include<stdio.h>

int main()
{
    int num, count = 1;

    printf("Enter a number:");
    scanf("%d", &num);

    printf("Factors of %d are:\n", num);

    while(count <= num)
    {
        if(num % count == 0)
        {
            printf("%d\n", count);
        }
        count++;
    }

    return 0;
}
