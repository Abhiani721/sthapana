#include <stdio.h>
int solve(int m,int n);
int main()
{
    int m,n,sum;
    printf("Enter the value of m and n\n");
    scanf("%d%d",&m,&n);
   sum=solve(m,n);
    printf("The answer is %d\n",sum);
    return 0;
}

int solve(int m,int n)
{
    if(m==0)
        return n+1;

     if(m!=0&&n==0)
     return solve(m-1,1);

    if(m!=0&&n!=0)
        return solve(m-1,solve(m,n-1));


}
