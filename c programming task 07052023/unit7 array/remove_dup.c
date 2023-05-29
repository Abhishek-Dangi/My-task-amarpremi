

void main()
{
    int num = 10;
    int arr[10] = {1, 1, 2, 3, 4, 4, 5, 5, 6, 7};
    char arr1[10] = {'a', 'b', 'h', 'i', 's', 'h', 'e', 'k'};
    int i, j, k;
    for (i = 0; i < num; i++)
    {
        for (j = i + 1; j < num; j++)
        {
            if (arr[i] == arr[j])
            {
                for (k = j; k < num; k++)
                {
                    arr[k] = arr[k + 1];
                }
                j--;
                num--;
            }
        }
        for (j = i + 1; j < num; j++)
        {
            if (arr1[i] == arr1[j])
            {
                for (k = j; k < num; k++)
                {
                    arr1[k] = arr1[k + 1];
                }
                j--;
                num--;
            }
        }
    }
    printf("after removing duplicate\n");

    for (i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (i = 0; i < num; i++)
    {
        printf("%c ", arr1[i]);
    }
}