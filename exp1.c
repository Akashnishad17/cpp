#include<iostrem>
using namespace std;
class distance
{
private:
    float input_in;
    float output_in,output_ft;
public:
    void get_input(float k)
    {
        input_in=k;
    }
    void calculate()
    {
        output_ft=input_in/12;
        output_in=input_in%12;
        cout<<"The result is"<<output_in<<out_ft;
    }
};
int main()
{
    Distance d;
    int a;
    cin>>a;
    d.get_input(a);
    return 0;
}
