#include<iostream>>
#include<cstdlib>
using namespace std;
class STACK
{
    int s[5];
    int TOP;
public:
    getinput(int top);
    push(int elem);
    pop();
    display();
} ;
STACK :: getinput(int top)
{
    TOP=top;
}
STACK :: push(int elem)
{
    if(TOP==5-1)
        cout<<"Stack is full\n";
    else
    {
        TOP++;
        s[TOP]=elem;
    }
}
STACK :: pop()
{
    if(TOP==-1)
        cout<<"Stack is empty\n";
    else
    {
        cout<<"Deleted element is "<<s[TOP]<<"\n";
        TOP--;
    }
}
STACK :: display()
{
    int i;
    if(TOP==-1)
        cout<<"Stack is empty\n";
    else
    {
        for(i=TOP;i>=0;i--)
        cout<<s[i]<<"\n";
    }
}
main()
{
    STACK s1;
    int choice,element;
    char ch;
    s1.getinput(-1);
    do
    {
        cout<<"Implementation of STACK\n1 for add\n2 for remove\n3 for display\n4 for exit\n";
        cout<<"Enter your choice\n";
        cin>>choice;
        switch(choice)
        {
            case 1:{cout<<"Enter element to be inserted: ";
                    cin>>element;
                    s1.push(element);
                    break;}
            case 2:{s1.pop();
                    break;}
            case 3:{s1.display();
                    break;}
            case 4:return 0;
            default:cout<<"Wrong choice\n";
        }
    cout<<"Do you want to continue: ";
    cin>>ch;
    //system("cls");
    }
    while(ch=='y' || ch=='y');
}

