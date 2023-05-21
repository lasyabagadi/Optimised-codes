#include<iostream>
using namespace std;
int main()
{
    int m;
    cin>>m;
    int count=0;
    long int n=100001;
    long int sieve[n+1];
    long int i,j;
    for(i=0;i<=n;i++)
    sieve[i]=1;
    sieve[0]=sieve[1]=0;
    for(i=2;i*i<=m;i++)
    if(sieve[i]==1)
    for(j=i*i;j<=m;j=j+i)
    sieve[j]=0;
    for(i=2;i<=m;i++)
    {
        if(sieve[i]==1)
        count++;
    }
    cout<<count;
}
