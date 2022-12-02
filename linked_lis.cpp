#include <iostream>
using namespace std;
class Node 
{
    Node* next;
    int data;
    public:
    Node();
    Node( int value);
    friend class linkedlist;
};
Node:: Node()
{
    this->next = NULL;
    this->data = 0;

}
Node:: Node(int value)
{
    this->next = NULL;
    this->data = value;
}
class linkedlist
{
  Node*head ;
    public:
    linkedlist();
   void  addbeg(int );
   void appened(int);
   void traverse();


};
linkedlist:: linkedlist()
{
    this->head=NULL;
}
 void linkedlist:: addbeg(int element)
{
   Node* ptr = new Node(element);
   if(this->head == NULL)
   {
    this->head = ptr;
    return;
   }
   ptr->next = this->head;
   this->head = ptr;
}
void linkedlist:: appened(int element)
{
    Node* ptr= new Node(element);
    if(this->head == NULL)
    {
        this->head = ptr;
        return;
    }
    Node* curr = this->head;
    while(curr ->next !=NULL)
    {
        curr = curr->next;
    }
    curr->next = ptr;
  

}
void linkedlist:: traverse()
{
    if(this->head == NULL)
    {
        return;
    }
    Node* ptr = this->head;
    while(ptr->next !=NULL)
    {
        ptr= ptr->next;
        cout << ptr->data << " ->";
    }
    cout << endl;
}
int main(){


linkedlist l;
l.appened(7);
l.appened(7);
l.appened(7);




l.traverse();
return 0;
}