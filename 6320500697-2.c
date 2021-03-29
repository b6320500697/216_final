#include <stdio.h>
int main ()
{
    int n,i,max=0;
    scanf ("%d",&n);
    int score[n];
    if(n>=2&&n<=1000)
    {
        for(i=0; i<n; i++)
        {
            scanf ("%d",&score[i]);
        }
        for(i=0; i<n; i++)
        {
            if(score[i]>=max)
            {
                max=score[i];
            }
        }
        for(i=0; i<n; i++)
        {
            if(score[i]==max)
            {
                printf ("%d ",i+1);
            }
        }
    }
    return 0;
}
