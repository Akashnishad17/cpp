#include<iostream>
 main()
{
int x;
x=10;
bool b=true;
if(x<10)
{
b=false;
}
if(b==false)
{
cout<<"wrong Value"<<endl;
}
else
{
cout<<"true value"<<endl;
}
cout<<sizeof(b);
}
