

void main()
{
    int ar[10];
    int i, j, count = 0, sum = 0;
    printf("enter the elements\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (i = 0; i < 10; i++)
    {

        sum += ar[i];
        // printf("%d \t", ar[i]);
    }
    printf("\narray sum : %d ", sum);
}