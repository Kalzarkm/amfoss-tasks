#include <iostream>

using namespace std;

int main()
{
    long long int T,a,b,c,d,N;
    long long int t_day,p_day,temp;
    cin>>T;
    cin>>a>>b>>c>>d>>N;

    for(int i=0;i<N-2;i++)
    {
                t_day=a*c;
        p_day=b*d;
        temp=b;
        b=t_day+p_day;
        a=temp;

    }

    cout<<b;

    return 0;
}
