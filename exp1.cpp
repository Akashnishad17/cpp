#include<iostream>
#include<cstdio>
using namespace std;
class Distance
{
private:
    float input_in;
    float output_in,output_ft;
public:
    Distance()
    {
    }
    void get_input(float k)
    {
        input_in=k;
    }
    void calculate()
    {   int s;
        output_ft=input_in/12;
        s=output_ft;
        output_in= (output_ft-s)*12;
        cout<<"The result in feet "<<s;
        cout<<"\nThe result in inches "<<output_in;
    }
};
int main()
{
    Distance d;
    int a;
    cout<<"Enter the distance in inches : ";
    cin>>a;
    d.get_input(a);
    d.calculate();
    return 0;
}
