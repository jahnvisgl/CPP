#include<stdio.h>
#include<limits.h>
 
int MCM(int *p, int n)
{
    int m[n][n];
    int i, j, k, l, q;
 
    for (i=1; i<n; i++)
        m[i][i] = 0;    
 
    
    for (l=2; l<n; l++)
    {
        for (i=1; i<n-l+1; i++)
        {
            j = i+l-1;
            m[i][j] = INT_MAX; 
 
            for (k=i; k<=j-1; k++)
            {
                q = m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j];
                if (q < m[i][j])
                {
                    m[i][j] = q;
                }
            }
        }
    }
 return m[1][n-1]; 
 
}
 
int main()
{
    int n,i;
    printf("Enter number of matrices:\n");
    scanf("%d",&n);
    int a[n];
 
    printf("Enter dimensions: \n");
 
    for(i=0;i<n;i++)
    {
        printf("Enter d%d: ",i);
        scanf("%d",&a[i]);
    }
 
    int size = sizeof(a)/sizeof(a[0]);
 
    printf("Minimum number of multiplications is %d ", MCM(a, size));
 
    return 0;
}