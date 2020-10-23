#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Function returns the lcm of first n numbers
long long lcm(long long n)
{
    long long ans = 1;
    for (long long i = 1; i <= n; i++)
        ans = (ans * i)/(__gcd(ans, i));
    return ans;
}

//Driver program to test the above function
int main()
{
    int ch;
    do
    {
    long long n = 0;
    cout<<"Enter max number up to which any number should be divisible equally : ";
    cin>>n;
    cout << lcm(n);
    cout<<"\n\nEnter 1 to continue and 0 to exit\nEnter your choice :";
    cin>>ch;
    }
    while(ch==1);
    return 0;
}
