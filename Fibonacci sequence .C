#include <stdio.h>

main ()

{
    int a=1,b=1,c=0,i;
    
    printf ("%d\t %d\t",a,b);
    for (int i=0;i<=11;i++)
    {
        c=a+b;
        
        if (c<150)
        {
            printf("%d\t",c);
            
        }
        a=b;
        b=c;
    }
