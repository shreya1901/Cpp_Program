#include<iostream>

using namespace std;

int main(){
    int i,n;
    int a[50];
    int*p;
    cout<<"Enter Total Number you want to Enter = ";
    cin>>n;
    cout<<"Enter Numbers below :"<<endl;
    //for loop for data entry
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //for loop for printing data
    cout<<"You Entered following Numbers:"<<endl;
    p=a;
    for(i=0;i<n;i++)
    {
        cout<<*p<<endl;
        p++;
    }
    return 0;
}
