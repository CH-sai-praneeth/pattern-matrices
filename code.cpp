#include <iostream>
using namespace std;
void print(int n,int i)
{
    for(int j=0;j<((2*(n-i))-1);j++)
    cout<<n-i<<" ";
}
void pat(int i,int n)
{
    int k=i;
        for(int j=0;j<i;j++)
        cout<<n-j<<" ";
        print(n,i);
        while(k)
        {
            cout<<n-k+1<<" ";
            k--;
        }
        cout<<"\n";
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        pat(i,n);
        
    }
    for(int k=1;k<=n-1;k++)
    {
        int l=((2*n)-1)-(n+k);
        pat(l,n);
    }
    return 0;
}
