#include<iostream>
using namespace std;
class student
{
    string name,course;
    int roll_no;
public:
    void input_student()
    {
        cout<<"Name : ";
        cin>>name;
        cout<<"Course : ";
        cin>>course;
        cout<<"Roll number : ";
        cin>>roll_no;
    }
    void display_student()
    {
        cout<<"\t\tRoll Number : "<<roll_no<<" Name : "<<name<<" Course : "<<course<<endl;
    }
};
class exam : public student
{
    float marks1,marks2,marks3;
public:
    void input_marks()
    {
        cout<<"Enter the marks :\n";
        cin>>marks1>>marks2>>marks3;
    }
    void display_result()
    {
        float total=marks1+marks2+marks3;
        cout<<"\t\tTotal : "<<total<<" Percentage : "<<total*100/300<<"%\n\n";
    }
};
int main()
{
    exam e[5];
    int i;
    for(i=0;i<2;i++)
    {
        cout<<"Enter data for student "<<i+1<<endl;
        e[i].input_student();
        e[i].input_marks();
    }
    for(i=0;i<2;i++)
    {
        cout<<"Record for student "<<i+1<<endl;
        e[i].display_student();
        e[i].display_result();
    }
    return 0;
}
