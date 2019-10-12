#include<iostream>
using namespace std;
class patient
{
    string name;
    string address;
    class prescription
    {
        string prename;
        float charge;
    public:
        void getdata(string p,float c)
        {
            prename=p;
            charge=c;
        }
        void printdata()
        {
            cout<<"Prescription is "<<prename<<endl;
            cout<<"Charge is "<<charge<<endl;
        }
    };
    public:
    void get_data(string n,string a)
    {
        name=n;
        address=a;
    }
    void print_data()
    {
        cout<<"Name of the patient is "<<name<<endl;
        cout<<"Address is "<<address<<endl;
    }
    void access(string p,float c)
    {
        prescription d;
        d.getdata(p,c);
        d.printdata();
    }
};
int main()
{
    patient p;
    p.get_data("Aman","Dehradun");
    p.access("Blood Test",250);
    p.print_data();
}
