#include<iostream>
#include<stdlib.h>
using namespace std;
class tree
{
    struct node
    {
        int info;
        struct node* left;
        struct node* right;
    };
    struct node* root=NULL;
public:
    void create();
    void search();
    void display();
};
void tree :: create()
{
    struct node *temp;
    temp=new node;
    cout<<"Enter data to the node : ";
    cin>>temp->info;
    temp->left=NULL;
    temp->right=NULL;
    if(root==NULL)
        root=temp;
    else
    {
        struct node* p;
        p=root;
        while(p->left!=NULL || p->right!=NULL)
        {
            if(temp->info <= p->info)
                p=p->left;
            else
                p=p->right;
        }
        if(temp->info <= p->info)
            p->left=temp;
        else
            p->right=temp;
    }
}
void tree :: search()
{
   struct node* temp;
   temp=root;
   if(temp==NULL)
   {
       cout<<"Nodes are not created yet"<<endl;
       exit (1);
   }
   else
   {
       int data;
       cout<<"Enter data to be searched : ";
       cin>>data;
       while(temp->right!=NULL || temp->left)
       {
           if(data==temp->info)
           {
               cout<<"Element is found"<<endl;
               exit (1);
           }
           else if(data < temp->info)
           {
                temp=temp->left;
                //cout<<temp->info;
           }
           else
           {
               temp=temp->right;
               //cout<<temp->info;
           }
           cout<<"In"<<endl;
       }
       cout<<"Element not found"<<endl;
   }
}
void tree :: display()
{
    struct node* temp;
    temp=root;
    if(temp==NULL)
    {
        cout<<"No nodes created yet"<<endl;
        exit (1);
    }
    else
    {
        while(temp!=NULL)
        {
            cout<<temp->info<<endl;
            temp=temp->left;
        }
    }
}
int main()
{
    tree t;
    int i;
    for(i=1;i<=5;i++)
        t.create();
    t.search();
    //t.display();
}

