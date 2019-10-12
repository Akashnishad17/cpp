#include<iostream>
using namespace std;
class list
{
    struct Node
    {
        int Info;
        struct Node *PTR;
    }*START=NULL,*T;
public:
    void create_list(int a)
    {
        struct Node *P;
        P=new Node;
        //cout<<"Enter data :";
        //cin>>P->Info;
        P->Info=a;
        P->PTR=NULL;
        if(START==NULL)
            START=P;
        else
        {
            struct Node *temp;
            temp=START;
            while(temp->PTR!=NULL)
                temp=temp->PTR;
            temp->PTR=P;
        }
    }
    int display_list()
    {
        struct Node *P;
        P=START;
        int c=0;
        while(P!=NULL)
        {
            cout<<P->Info<<"\n";
            P=P->PTR;
            c++;
        }
        return c;

    }
    void reverse_list(int count)
    {
        struct Node *P;
        P=START;
        int i,j,temp=count;
        for(i=1;i<=count;i++)
        {
            for(j=1;j<temp;j++)
            {
                P=P->PTR;
            }
            cout<<P->Info<<"\n";
            temp--;
            P=START;
        }
    }
    list()
    {

    }
    list(list &l)
    {
        l.reverse_list(l.display_list());
    }
};
int main()
{
    list l1;
    int i,c;
    for(i=1;i<=5;i++)
    l1.create_list(i);
    cout<<"Original List :"<<endl;
    // c=l1.display_list();
    //cout<<"Reversed List : "<<endl;
    list  l2(l1);
    //l2.reverse_list(c);
    return 0;
}

