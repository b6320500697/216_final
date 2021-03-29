#include <stdio.h>
int main ()
{
    int n,i,j,k,max=0;
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
                    printf ("%d",k);
                }
                max=k;
            }
            k=0;
        }
    }
    printf("%d",max);
    return 0;
}
