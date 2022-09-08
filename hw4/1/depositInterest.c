#include <stdio.h>

int main()
{
    double ammount;
    printf("Enter initial ammount: ");
    scanf("%lf", &ammount);
    unsigned int years;
    double finalAmmount = ammount;

    // After 5 years

    for (int i = 0; i < 5; i++)
    {
        finalAmmount += (finalAmmount / 100) * 5;
    }

    printf("Final ammount after 5 years: %.2lf$\n", finalAmmount);

    // After n years

    printf("Enter initial ammount: ");
    scanf("%lf", &ammount);
    int period;
    printf("Enter years: ");
    scanf("%d", &period);
    finalAmmount = ammount;

    for (int i = 0; i < period; i++)
    {
        finalAmmount += (finalAmmount / 100) * 5;
    }

    printf("Final ammount after %d years: %.2lf$\n", period, finalAmmount);

    // After ammount > then limit

    printf("Enter initial ammount: ");
    scanf("%lf", &ammount);

    double limit;
    printf("Select limit: ");
    scanf("%lf", &limit);

    finalAmmount = ammount;
    int yearsCounter;
    while (finalAmmount < limit)
    {
        finalAmmount += (finalAmmount / 100) * 5;
        yearsCounter++;
    }

    printf("Tooks %d years to reach %.2lf$ (finalAmmount: %.2lf$)\n", yearsCounter, limit, finalAmmount);

    return 0;
}