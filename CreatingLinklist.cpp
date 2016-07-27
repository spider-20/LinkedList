#include "iostream"
using namespace std;
class node{
public:
    int data;
    node *next;
};
int main(int argc, char const *argv[])
{
    node *first,*second,*third;
    first=new node();
    second=new node();
    third=new node();
    first->data=1;
    second->data=2;
    third->data=3;

    first->next=second;
    second->next=third;
    third->next=NULL;

    node *p;
    p=first;
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }  
    int i;
    cout<<"Enter a node to be insertd in front";
    cin>>i;
    node *q;
    q=new node();
    q->data=i;
    q->next=first;
    p=q;
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    } 

    
    return 0;
}