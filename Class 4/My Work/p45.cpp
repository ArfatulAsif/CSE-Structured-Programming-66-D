#include<bits/stdc++.h>
using namespace std;

int HighestScore(int scores[], int n) {
    int max = scores[0];
    for (int i = 1; i < n; i++) {
        if (scores[i] > max) {
            max = scores[i];
        }
    }
    return max;
}

double ClassAverage(int scores[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += scores[i];
    }
    return sum / n;
}

int main() {
    int n, scores[100];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    cout<<"Highest Score = "<<HighestScore(scores, n)<<endl;
    cout<<"Class Average = "<<ClassAverage(scores, n)<<endl;

    return 0;
}
