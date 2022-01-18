//Fibonacci Series using Recursion
#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
	if (n <= 1)
		return n;
	return fib(n-1) + fib(n-2);
}

int main ()
{
    int n;
    cin>>n;
    int a=1;
	for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<fib(a)<<" ";
            a++;
        }
        cout<<endl;
    }
	cout << fib(n);
	return 0;
}

