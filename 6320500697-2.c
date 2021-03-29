#include <stdio.h>
int main ()
{
    int n,i,j,k=0,d=0;
    scanf ("%d",&n);
    int score[n];
    if(n>=2&&n<=1000)
    {
        for(i=0; i<n; i++)
        {
            scanf ("%d",&score[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(score[i]==score[j])
                {
                    k++;
                }
                else
                {
                    d++;
                }
            }
        }
    }
    printf ("%d %d",k,d);
    return 0;
}
