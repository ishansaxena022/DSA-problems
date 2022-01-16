#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the row size:";
    int row_size;
    cin>>row_size;
    int in,out,p;
     for(out=1;out<=row_size;out++)
       {
           for(in=1;in<=row_size;in++)
           {
               if(in==out || in+out==row_size+1)
               {
               cout<<out;
                 }
               else
               {
                 cout<<" ";
               }
             }
            cout<<"\n";
     }
}
