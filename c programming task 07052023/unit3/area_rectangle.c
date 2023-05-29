
void main()
{
    int l, w, area, peri;
    printf("enter the length and width\n");
    scanf("%d %d", &l, &w);
    peri = 2 * (l + w);
    area = w * l;

    printf("perimeter of rectangle is %d\n", peri);
    printf("area of rectangle is %d", area);
}