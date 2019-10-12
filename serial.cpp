#include<iostream>
using namespace std;
class serial
{
    int sno;
    static int count;
public:
    serial()
    {
        count++;
        sno=count;
    }
    report()
    {
        cout<<"I am object number "<<sno<<endl;
    }
};
int serial :: count=0;
int main()
{
    serial s1,s2,s3;
    s1.report();
    s2.report();
    s3.report();
    return 0;
}
