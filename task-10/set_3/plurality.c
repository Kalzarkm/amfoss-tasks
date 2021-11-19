#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct
{
    string name;
    int vote;
}
content;

int main(int argc,string con[])
{
    if(argc==2)
    {
        printf("%s\n",con[1]);
        return 0;
    }
    if (argc> 9 || argc<2)
    {
        return 1;
    }
    content voter[argc-1];
    string n,temp;
    int m=0,k=0;
    int large;
    int v=get_int("Number of voters: ");
    string nam[v];
    for (int i=0;i<argc-1;i++)      //enter data
    {
        voter[i].name=con[i+1];
        voter[i].vote=0;

    }
    for (int i=0;i<v;i++)       //finding number of votes
    {
        nam[i]=get_string("Vote: ");
        {    
        for (int j=0;j<argc-1;j++)
        {
        if (strcmp(nam[i],voter[j].name)!=0)
        {
            voter[j].vote+=1;
        }
        
    }
            
    }
    }
    
    for (int z;z<argc-1;z++)
    {
        if (voter[z].vote>large)
        {
            large=voter[z].vote;
            temp=voter[z].name; 
            printf("%s\n",temp);
         }
         if ((voter[z].vote == large) &&((strcmp(voter[z].name,temp)!=0)))
         {
             printf("%s\n",voter[z].name);
         }
    }
                    

}
