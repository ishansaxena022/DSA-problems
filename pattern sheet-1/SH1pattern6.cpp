#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int s=0;
    for(int i=1;i<=n;i++)
    {   
        int a=i+s;
        for(int b=n-1;b>=i;b--)
            cout<<" ";
        for(int j=1;j<=i;j++){
            cout<<a--;
        }
        s++;
        for(int j=1;j<i;j++){
            cout<<a--;
        }
        cout<<endl;   
    }
}