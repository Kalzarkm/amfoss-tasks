#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int N,M,s=2,i,j;
     cin>>N>>M;
    vector<int> nos={1};
    for(i=2;i<=M;i++)
    {
        if(i!=N && i!=1 )
        {
        for(j=2;j<=(i/2);j++)
        {
            if(i%j==0 )
            {
                j=i;
                break;
            }
            
        }

        if(j!=i)
        {
                
            s++;
            nos.push_back(i);
        }

        }
       
    }
      nos.push_back(M-1);

    cout<<s<<"\n";
    
    for(int i=0;i<nos.size();i++)
    {
        cout<<nos[i]<<" ";
    }

     
    return 0;
}


