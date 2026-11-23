#include <stdio.h>
#include <string.h>
int main() {
    char topScorer[30] = "Hritwika roy";
    char runnerUp[30] = "Anika atia";
    char temp[30];

    printf("Before Swap -> 1st: %s | 2nd: %s\n", topScorer, runnerUp);

strcpy(temp, topScorer);
    strcpy(topScorer, runnerUp);
    strcpy(runnerUp, temp);
printf("After Swap  -> 1st: %s | 2nd: %s\n", topScorer, runnerUp);
 }
