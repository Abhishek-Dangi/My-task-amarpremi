#include <math.h>

void main()
{
    int demand_rate, setup_costs, holing_cost, temp, temp1, temp3;
    float eoq, tbo;
    printf("enter the demand_rate\n");
    scanf("%d", &demand_rate);
    printf("enter the setup_costs \n");
    scanf("%d", &setup_costs);
    printf("enter the holing_cost\n");
    scanf("%d", &holing_cost);

    temp = 2 * demand_rate * setup_costs;
    temp1 = temp / holing_cost;
    eoq = sqrt(temp1);

    printf("%f\n", eoq);

    temp3 = (2 * (setup_costs)) / (demand_rate * holing_cost);
    tbo = sqrt(temp3);
    printf("%f", tbo);
}