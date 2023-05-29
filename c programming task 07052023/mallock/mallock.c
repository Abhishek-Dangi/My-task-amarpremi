

void main()
{
    int n, i, *ptr;
    printf("enter the elements\n");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    printf("enter the elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr + 1);
    }
    for (i = 0; i < n; i++)
    {
        printf("%p\n", (void *)ptr);
    }
}