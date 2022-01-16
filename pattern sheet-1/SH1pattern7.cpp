#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter ";
    cin>>n;
    for(int i=0;i<=n;i++){
        int b=n;
        for(int j=0;j<=i;j++)
            cout<<b--<<" ";
        cout<<endl;    
    }
    for(int i=n;i>=1;i--){
        int b=n;
        for(int j=i;j>=1;j--)
            cout<<b--<<" ";
        cout<<endl;
    }
}