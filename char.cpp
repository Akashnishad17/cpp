#include<iostream>
using namespace std;
class range
{
    int a;
public:
    void calc(int a)
    {
        a=a*8;
        int b=1;
        while(a!=0)
        {
            b=b*2;
            --a;
        }
        cout<<"Range of char is "<<a<<" to "<<b;
    }
};
int main()
{
    range obj;
    obj.calc(sizeof(char));
    return 0;
}
