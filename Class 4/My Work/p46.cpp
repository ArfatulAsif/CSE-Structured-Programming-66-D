#include<bits/stdc++.h>
using namespace std;

void GraceMarks(int marks[], int n, int bonus) {
    for (int i = 0; i < n; i++) {
        if (marks[i] >= 35 && marks[i] < 40) {
            marks[i] += bonus;
        }
    }
}

int main() {
    int n, marks[100], gracePoints = 5;
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin>>marks[i];
    }
    GraceMarks(marks, n, gracePoints);
    cout<<"Grace Points variable in main: "<<gracePoints<<endl;
    cout<<"Updated Marks: ";

    for (int i = 0; i < n; i++) {
        cout<<marks[i]<<" ";
    }
    cout<<endl;
    return 0;





}