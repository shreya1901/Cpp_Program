#include<iostream>

using namespace std;

int main(){
    //size of different data types : program 1
    cout<<": SIZE CHART OF DIFFERENT DATA TYPES :"<<endl;
    cout<<"\nSize of char : "<<sizeof(char)<<"bytes"<<endl;
    cout<<"Size of int : "<<sizeof(int)<<"bytes"<<endl;
    cout<<"Size of float : "<<sizeof(float)<<"bytes"<<endl;
    cout<<"Size of double : "<<sizeof(double)<<"bytes"<<endl;

    //calculate the product of two numbers : program 2
    float a,b;
    cout<<"\nEnter Two numbers below for their product :\n"<<"Enter Number = ";
    cin>>a;
    cout<<"Enter Number = ";
    cin>>b;
    cout<<"product = "<<a*b;

    return 0;
}
