#include <stdio.h>
int main ()
{
    int n,i,j,k=0,max=0,max2,min=0,d=0;
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
                for(d=0;d<n;d++)
                {
                    if(score[d]==score[i])
                    {
                        printf ("%d",score[d]);
                    }
                }
            }
            k=0;
        }
    }

    return 0;
}
