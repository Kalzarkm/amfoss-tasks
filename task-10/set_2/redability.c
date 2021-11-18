#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int main()
{
  
    string text= get_string("Text: ");
    int tlen=strlen(text);
    int letters=0;
    int words=1;
    int sentence=0;
    float L,S;
    float grade;

    for(int i=0; i<tlen; i++)
    {
        if(text[i]==' '||text[i]=='\n')
        {
            words=1+words;
        }
        else if(isdigit(text[i])==1 || isalnum(text[i])==0)
        {
             if(text[i]=='.' || text[i]=='?' || text[i]=='!')
        {
            sentence=1+sentence;
        }

        } 
        else {
        letters=1+letters;
        }
    }
     
    L=(float)(letters*100)/words;
    S=(float)(sentence*100)/words;
    
    grade=((0.0588*L)-(0.296*S)-(15.8));

    if(grade<1)
    {
        printf("Before Grade 1\n");
    }

    else if(grade>=16)
    {
        printf("Grade 16+\n");
    }

    else
    {
    printf("Grade %i\n",(int)(round(grade)));
    }
    return 0;
}

