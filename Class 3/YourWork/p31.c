#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a1[n],a2[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a1[i]);
        a2[i]=a1[i];
    }
     for (int i = 0; i < n; i++)
     {printf("%d ",a2[i]);}
    
}