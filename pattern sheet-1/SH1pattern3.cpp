#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int b=0;b<n-i;b++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}