#include <bits/stdc++.h>
using namespace std;

int calculateTotal(int quiz, int mid, int final) {
    return quiz + mid + final;
}
double calculatepercent(int total, int max) {
    return ((double)total / max) * 100.0;
}
char assignGrade(double percent) {
    if (percent >= 80.0) return 'A';
    if (percent >= 65.0) return 'B';
    if (percent >= 50.0) return 'C';
    return 'F';
}
int main()
{
    int quiz, mid, final;
    cin>>quiz>>mid>>final;

    int total = calculateTotal(quiz, mid, final);
    double pct = calculatepercent(total, 100);
    char grade = assignGrade(pct);

    cout<<"Total: "<<total<<"/100 | percent: "<<pct<<"% | Grade: "<<grade<<endl;
    return 0;
}