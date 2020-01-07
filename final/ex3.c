#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
   double  a[200];
    int k=0,j=0;
    for(k=1;k<argc;k++,j++)
    {
        a[j]=atof(argv[k]);
        }
    int i;
    double min=a[1];
    for(i=1;i<argc-2;i++,j++)
    {
        if(a[i]<min){
            min=a[i];
        }
    }
   printf("Min parameter is %d\n",min);
   if(a[i]=' ') {
       printf("The program needs at least one integer parameter to run!");
       return 0;
   }else{
       printf("The parameter has to be an integer format!");
       return 0;
   }
}