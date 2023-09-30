
/*
age in seconds 
*/
#include <stdio.h>

int main ()

{
    int a,y ;
    
    printf ("enter your in years\n");
     scanf ("%d",&y);
     
     a=y*365*24*60*60;
     printf ("the age in sec. is %d\n",a);
     return 0;
}

