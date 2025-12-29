#include <stdio.h>

int main(){
    int n;
    int a[50];
    int i;
    printf("enter your quantity of numbers: ");
    scanf("%d", &n);
    printf("enter your numbers: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] % 6 == 0)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }

        if (i < n - 1)
        {
            printf(" ");
        }
    }

    return 0;
}

