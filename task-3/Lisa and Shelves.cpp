#include <iostream>
using namespace std;

int main()
{
    int nobook;
    int s=1;
    cin>>nobook;

    for(int i=0;i<=nobook/2;i++)
    {
        if(i!=0 && nobook%i==0)
        {
            s+=1;
        }

    }
    cout<<s<<"\n";
    
    return 0;
}
