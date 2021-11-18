#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

int main(int argc,string key[])
{
    if(argc!=2)
    {
        printf("Check argument\n");        //setup
        return 1;
    }
    else if(strlen(key[1])<26||strlen(key[1])>26)
    {
        printf("Key must contain exactly 26 characters\n");
        return 1;
    }
    

    for(int i=0;i<26;i++)
    {
        char te=key[1][i];
        for(int j=i;j<26;j++)
        {
            if(toupper(te)==toupper(key[1][j+1]) || isalpha(key[1][j])==0)
            {
                printf("Error in key(Should not have repeating characters and contain only alphabets\n");
                return 1;           //setup
            }
        }
    }
    string locase="abcdefghijklmnopqrstuvwxyz";
    string plain=get_string("plaintext: ");
    char enc[strlen(plain)];
    for(int i=0;i<strlen(plain);i++)
    {
        if(isalpha(plain[i]))
        {
        if(isupper(plain[i]))
        {
            for(int j=0;j<strlen(locase);j++)
            {
                if(locase[j]==tolower(plain[i]))
                {
                    enc[i]=toupper(key[1][j]);
                    break;
                }
            }
        }
        else
        {
             for(int j=0;j<strlen(locase);j++)
            {
                if(locase[j]==plain[i])
                {
                    enc[i]=tolower(key[1][j]);
                    break;
                }
            }

        }
    }
        else
        {
            enc[i]=plain[i];
        }
    }
    printf("cyphertext: ");
    for(int i=0;i<strlen(plain);i++)
    {
    printf("%c",enc[i]);
    }
    printf("\n");
    return 0;
}
