

void main()
{
    int n, sum;
    n = 10;
loop:
    if (n == 10)
    {
        printf("n= 0 program goes to print statment\n");
        goto print;
    }
    else
    {
        n++;
        printf("while is false condition goes to loop %d\n", n);
        goto loop;
    }
print:
    printf("end this excution");
}
