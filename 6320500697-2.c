#include <stdio.h>
int main ()
{
    int n,i,m=0;
    scanf ("%d",&n);
    int score[n];
    for(i=0;i<n;i++)
    {
        scanf ("%d",&score[i]);
    }
    for(i=0;i<n;i++)
    {
       if(score[i]>=m)
       {
           m=score[i];
       }
    }
    printf ("%d",m);
    return 0;
}
