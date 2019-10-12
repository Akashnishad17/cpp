#include<iostream>
using namespace std;
class Account1  //static class
{
    int balance;
    static int roi;
};
class Account2  //non static class
{
    int balance;
    int roi;
};
int main()
{
    cout<<"Size of static object "<< sizeof(Account1);  //output is 4
    cout<<"\nSize of non static object "<< sizeof(Account2);    //output is 8
}

//Here the size of static and non static objects are different because the static data members
//are meant to be globally declared and it's single copy is shared by all the objects of  the class.
//In C++, static members don't belong to the instances of class.
//They don't increase the size of class even by 1 bit.
