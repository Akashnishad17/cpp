#include<iostream>
using namespace std;
int main()
{
    char s[5][15];
    int i;
    for (i=0;i<5;i++)
	{
		cout<<"Enter name of student "<<i+1<<" : ";
		cin.getline(s[i],15 );
	}
    cout<<"List of the student in 2-D array are : "<<endl;
	for(i=0;i<5;i++)
	{
		cout<<"Name of student "<<i+1<<" is "<<s[i]<<endl;
	}
	return 0;
}

