#include <stdio.h>
int main ()
{
    int n,i;
    scanf ("%d",&n);
    int score[n];
    for(i=0;i<n;i++)
    {
        scanf ("%d",&score[i]);
    }
    for(i=0;i<n;i++)
    {
        printf ("%d",score[i]);
    }
    return 0;
}
