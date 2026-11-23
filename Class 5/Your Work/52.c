#include<stdio.h>
#include<string.h>
int main()
{
    char top[30]="Nusrat Jahan";
    char run[30]="Tanvir Hasan";
    char tem[30];
    printf("%s %s\n", top, run);
    strcpy(tem, top);
    strcpy(top, run);
    strcpy(run, tem);
    printf("%s %s\n", top, run);

    return 0;

}