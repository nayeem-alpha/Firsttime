#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter your number :"<<endl;
    cin>>n;
    int sum =0;
    for(i = 1;i<=n;i++)
    {
        sum = sum+i;
    }

    cout<<sum;
}