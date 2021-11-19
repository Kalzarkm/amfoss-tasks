#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    int var[T],vir[T];
    for(int i=0;i<T;i++)
    {
        cin>>var[i];
    }

    for(int i=0;i<T;i++)
    {
        int a=0;
        for(int j=1;j<var[i];j++)
        {
            if (j%3==0 || j%5==0)
            {
              a=a+j;

            }
        }
        vir[i]=a;
    }
for (int i=0;i<T;i++)
{
    cout<<vir[i]<<"\n";
}
    
    return 0;
}
