#include <iostream>
using namespace std;
int main()
{
    
    int s=0;
    int a;
    for(int i=1;i<=20;i++)
    {
        if (i==12)
            break;
        if (i%2 !=0)
            continue;
            cout<<i<<endl;
    }
    cout<<s<<endl;


}