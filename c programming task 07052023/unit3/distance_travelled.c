#define acc 9.8

void main()
{
    int u, t, distance, a;
    a = acc;
    printf("enter time t and intial velocity u");
    scanf("%d %d", &t, &u);

    distance = (u * t) + (a * (t * t)) / 2;
    printf("the distance is : %d km", distance);
}