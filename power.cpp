#include<iostream>
using namespace std;
int main()
{
    int n,pow,i;
    cout<<"Enter your Number : "<<endl;
    cin>>n;
    cout<<"Enter the power : "<<endl;
    cin>>pow;
    int num = n;
    for(i = 1;i<pow;i=i+1)
    {
        num = num*n;
    }
    cout<<"Your expected answer is :"<<num<<endl;

}