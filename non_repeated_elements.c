#include<stdio.h>

int main()
{
    int arr[20], n, i, j, count, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Non-repeated elements: ");
    for(i = 0; i < n; i++)
    {
        count = 0;
        for(j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }
        if(count == 1)
        {
            printf("%d ", arr[i]);
            found = 1;
        }
    }

    if(!found)
    {
        printf("No non-repeated elements found.");
    }

    printf("\n");
    return 0;
}

