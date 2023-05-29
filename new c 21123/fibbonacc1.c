int main()
{
    int i, N, FT, ST, NT;
    FT = -1;
    ST = 1;
    printf("Enter the limit");
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        NT = FT + ST;
        if (NT >= 50)
        {
            break;
        }
        printf("%d", NT);
        printf("/n");
        FT = ST;
        ST = NT;
    }
    return (0);
}