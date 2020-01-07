#include<stdio.h>
int main()
{
    char s1[128],s2[128]; 
    int i,j,m;
    gets(s1);
    for(m=0;s1[m]!='\0';m++)
    {
        i++;
    }
    for(m=0,j=i;s1[m]!='\0';m++,j--)
    s2[j-1]=s1[m];
    s2[m]!='\0';
    puts(s2);
    return 0;
}