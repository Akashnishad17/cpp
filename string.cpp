#include<iostream>
#include<string>
using namespace std;
class STRING
{
    string a,b;
public:
    void getString(string s1,string s2)
    {
        a=s1;
        b=s2;
    }
    void addString()
    {
        cout<<"Added string is "<<a+b<<endl;
    }
    void equateString()
    {
        if (a==b)
            cout<<"Strings are equal"<<endl;
        else
            cout<<"Strings are not equal"<<endl;
    }
};
int main()
{
    STRING s;
    s.getString("Hello","Hello");
    s.addString();
    s.equateString();
    return 0;
}
