#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main()
{
  ofstream myfile;
  string l;
  string name,s="";
  int i;
  cout<<"Enter username : ";
  cin>>name;
  for(i=0;i<3;i++)
  {
      s=s+name[i];
  }
  s=s+".dat";
  myfile.open(s.c_str());
  /*myfile<<"Hello My name is Akash Nishad";
  myfile.seekp(0,ios::beg);
  while(getline(myfile,l))
  {
    cout<<l<<endl;
  }*/
  myfile.close();
  return 0;
}
