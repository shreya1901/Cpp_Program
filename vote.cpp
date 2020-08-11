#include<iostream>

using namespace std;

int main(){

    int age;

    cout<<"Enter your Age : ";
    //validation of input
    while(!(cin>>age))
    {
        cout<<"Error : Please Enter valid AGE.\nEnter your Age : ";
        cin.clear();
        cin.ignore(123,'\n');

    }
    //checking voting eligibility
    if(age>=18 && age<=123)
    {
        cout<<"you are eligible for voting.\nUse your right of voting wisely."<<endl;
    }
    else if(age<18 && age>=0)
    {
        cout<<"sorry you are not eligible for voting.\nPlease wait for "<<18-age<<" year(s) to vote."<<endl;
    }
    else if(age<0)
    {
        cout<<"you are not born yet.\nPlease Enter valid age."<<endl;
    }
    else if(age>123 && age<150)
    {
        cout<<"you made world record of longest life span.\nYou can vote."<<endl;
    }
    else
    {
        cout<<"Invalid input. TRy again latter"<<endl;
    }

}
