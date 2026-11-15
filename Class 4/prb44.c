#include <stdio.h>
double calculateBill(int units, double ratePerunit, char connectionType)
{
    double baseAmount=units*ratePerunit;
    if (connectionType =='C' || connectionType == 'C')
    {
        return baseAmount+(baseAmount*0.15);
    }
    return baseAmount;
}
int main()
{
    int unitsUsed;
    double rate;
    char type;

    scanf("%d %lf %c", &unitsUsed, &rate, &type);
    double payable = calculateBill(unitsUsed, rate, type);
    printf("Total Payable Bill = %.2lf BDT\n", payable);

    return 0;
}