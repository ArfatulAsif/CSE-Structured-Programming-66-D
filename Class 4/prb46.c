#include <stdio.h>
void attemptBonusReset(int bonus)
{
    bonus=0;
}
void applyGraceMarks(int marks[], int n, int bonus)
{
    for (int i=0; i<n; i++)
    {
         if (marks[i]>=35 && marks[i]<40)
         {
            marks[i] += bonus;
         }
    }
}
int main()
{
    int n, marks[100], gracePoints=5;
    scanf("%d", &n);
    for (int i=0; i<n; i++)
    {
        scanf("%d", &marks[i]);
    }
    attemptBonusReset(gracePoints);
    applyGraceMarks(marks, n, gracePoints);
    
    printf("Grace Points variable in main: %d\n", gracePoints);
    printf("Updated Marks: ");
    for (int i=0; i<n; i++)
    {
        printf("%d ", marks[i]);
    }
    printf("\n");
    return 0;
}