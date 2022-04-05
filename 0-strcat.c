#include<stdio.h>
#include<string.h>
int main()
{   int L1,L2,i;
    char s1[6]="joseph";
    char s2[5]="menza";
    /*strcat(s1,s2);*/
    L1=strlen(s1);
    L2=strlen(s2);
    for (i=0; i>=L2; i++)
    { s1[L1+i]=s2[i];
    }
    printf("string concatenation is:%s\n",s1);
    puts(s2);
}

