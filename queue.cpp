#include<iostream>
#include<cstdlib>
using namespace std;
class QUEUE
{
    int q[5];
    int fron;
    int rear;
public:
    void getinput(int f,int r);
    void push(int elem);
    void pop();
    void display();
};
void QUEUE :: getinput(int f,int r)
{
    fron=f;
    rear=r;
}
void QUEUE :: push(int elem)
{
    if(rear==5-1)
    {
        cout<<"Overflow\n";
    }
    else if(fron==-1)
    {
        fron++;
        rear++;
        q[rear]=elem;
    }
    else
    {
        rear++;
        q[rear]=elem;
    }
}
void QUEUE :: pop()
{
   if(fron==-1 || fron>rear)
        cout<<"Underflow\n";
   else
    {
        cout<<"Deleted element is "<<q[fron];
        fron++;
    }
}
void QUEUE :: display()
{
    int i;
    if(fron==-1 || fron>rear)
        cout<<"Empty queue\n";
    else
    {
        for(i=fron;i<=rear;i++)
            cout<<q[i]<<"\n";
    }
}
int main()
{
    QUEUE q1;
    int choice,element;
    char ch;
    q1.getinput(-1,-1);
    cout<<"Implementation of Queue\n";
    do
    {
        cout<<"1 for add\n2 for remove\n3 for display\n4 for exit\n";
        cout<<"Enter your choice\n";
        cin>>choice;
        switch(choice)
        {
            case 1 :{ cout<<"Enter element to be inserted:";
                     cin>>element;
                     q1.push(element);
                     break;}
            case 2 :{ q1.pop();
                     cout<<"\n";
                     break;}
            case 3 :{ q1.display();
                     break;}
            case 4 : return 0;
            default: cout<<"Wrong choice\n";
        }
        cout<<"Do you want to continue :";
        cin>>ch;
        //system("cls");
    }
    while(ch=='Y' || ch=='y');
}
