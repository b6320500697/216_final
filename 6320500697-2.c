#include <stdio.h>
int main ()
{
    int n,i,max=0;
    scanf ("%d",&n);
    int score[n];
    for(i=0;i<n;i++)
    {
        scanf ("%d",&score[i]);
    }
    for(i=0;i<n;i++)
    {
       if(score[i]>=max)
       {
           max=score[i];
       }
    }
    for(i=0;i<n;i++)
    {
       if(score[i]==max)
       {
           printf ("%d ",i);
       }
    }
    return 0;
}
