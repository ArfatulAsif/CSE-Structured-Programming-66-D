#include <bits/stdc++.h>
using namespace std;
double calculateBill(int units, double ratePerUnit, char ct) {
    double ba = units * ratePerUnit;

    if (ct == 'C' || ct == 'c') {
        return ba + (ba * 0.15);
    }
    return ba;
}
int main() {
    int unitsUsed;
    double rate;
    char type;

    cin>>unitsUsed>>rate>>type;

    double payable = calculateBill(unitsUsed, rate, type);
    cout<<"Total Payable Bill = "<<payable<<" BDT\n";

    return 0;
}