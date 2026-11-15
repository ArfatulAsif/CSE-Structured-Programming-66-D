#include <stdio.h>

double calculateBill(int units, double ratePerUnit, char connectionType) {
    double baseAmount = units * ratePerUnit;

    if(connectionType == 'C' ||  connectionType == 'c') {
    return baseAmount + (baseAmount * 0.15);
    }
    return baseAmount;
}

int main() {
    int unitUsed;
    double rate;
    char type;

    scanf("%d %lf %c", &unitUsed, &rate, &type);

    double payable = calculateBill(unitUsed, rate, type);
    printf("Total Payable Bill = %.2lf BDT\n", payable);
    return 0;
}