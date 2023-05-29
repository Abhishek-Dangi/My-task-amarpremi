
void main()
{
    int num;
    printf("enter the number to cheack even or odd\n");
    scanf("%d", &num);
    // printf("%d", (num % 2));
    if (num % 2 == 0)
        printf("NUMBER IS EVEN");
    if (num % 2 != 0)
        printf("NUMBER IS ODD");
}

// without else statment