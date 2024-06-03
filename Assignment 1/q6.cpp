//Q6
#include<iostream>
using namespace std;
int main()
{

int x ,y,temp;
cout<<"Enter the numbers X and Y : ";
cin>>x>>y;
cout<<"Before Swap: "<<endl;
cout<<"X = "<<x<<endl;
cout<<"Y = "<<y<<endl;

temp=x;
x=y;
y=temp;
cout<<"After Swap: "<<endl;
cout<<"X = "<<x<<endl;
cout<<"Y = "<<y<<endl;

return 0;
}