#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int b=n-1;b>i;b--){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int b=0;b<n-i;b++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}