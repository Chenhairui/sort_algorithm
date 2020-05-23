#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0, j, n, tmp, *a;
    int right;

    printf("please input the array size :\n");
    scanf("%d", &n);
    a = (int *)malloc(sizeof(int) * n);
    printf("please input the %d array element :\n", n);

    while (i != n)
    {
        scanf("%d", a + i);
        i++;
    }

    for (i = n - 1; i > 0;)
    {
        right = 0;
        for (j = 0; j < i; j++)
        {
            if (a[j + 1] < a[j]) 
            {
                right = j;
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
        i = right;
    }

    printf("the sorted array is :\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}
