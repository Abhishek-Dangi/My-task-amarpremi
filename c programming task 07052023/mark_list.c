

void main()
{
    int n, m, i, j, roll_num, marks, total;

    printf("enter the number of student and subjects\n");
    scanf("%d %d", &n, &m);
    printf("\n");

    for (i = 1; i <= n; i++)
    {
        printf("enter the rollnumber");
        scanf("%d", &roll_num);
        total = 0;
        printf("\nenter the marks %d rollno %d", m, roll_num);

        for (j = 1; j <= m; j++)
        {
            scanf("%d", &marks);
            total += marks;
        }
        printf("total marks = %d", marks);
    }
}

// not complet