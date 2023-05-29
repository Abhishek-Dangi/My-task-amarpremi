

void main()
{
    char name[2][10] = {"Fan", "Motor"};
    char code[2][10] = {"67831", "450"};
    char price[2][10] = {"1234.50", "5786.70"};

    printf("Name\t\t Code\t\t Price\n");
    printf("%s\t\t %s\t %s\n", name[0], code[0], price[0]);
    printf("%s\t\t %s\t %s", name[1], code[1], price[1]);
}