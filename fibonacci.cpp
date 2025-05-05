#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter your number :"<<endl;
    cin>>n;
    int curr=0,pre=1,last=0;

    for(i=0;i<=n;i++)
    {
      if(i==0)
      {
        cout<<curr<<" ";
        continue;
      }

      if(i==2)
      {
        cout<<pre<<" ";
        continue;
      }
      last = pre+curr;
      curr =pre;
      pre =last;

      cout<<last<<" ";

    }
return 0;

}
