#include <stdio.h>
int main ()
{
    int n,i,j,k=0,max=0,max2,d;
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
                if(k>max)
                {
                    max=k;
                }
            }
            k=0;
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(score[i]==score[j])
                {
                    k++;
                }
            }
            if(k==max)
            {
                max2=score[i];
            }
            k=0;
        }
    }
    printf ("%d",max2);
    return 0;
}
