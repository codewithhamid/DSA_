#include<iostream>
using namespace std;


class Node
{
    int data ;
    Node* next;
    public:
   
    Node();
    Node(int data);
    friend  class linked_list;

};
Node::Node(){
    this->next=NULL;
}
Node::Node(int data)
{
    this->next = NULL;
    this->data = data;
}
class linked_list
{
    Node* head;
    public: 
    linked_list();
    void appened(int data);
    void display();
    void addbeg(int data);
    void delbeg();
    void delend();
    Node *searchbyposition(int p);
    Node *searchbydata(int data);


};
linked_list::linked_list()
{
    this->head = NULL;

}
void linked_list::appened(int data)
{
    Node* ptr= new Node(data);
    Node* curr = head;
    if(head ==NULL)
    {
        head = ptr;
        return;
    }
    while(curr->next !=NULL)
    {
        curr= curr->next;
    }
    curr->next = ptr;
}
void linked_list::addbeg(int data)
{
    Node* ptr = new Node(data);
    if(this->head == NULL)
    { 
        this->head = ptr;
        return;
    }
    ptr->next = this->head;
    this->head = ptr;

}
void linked_list:: delbeg(){
    if(this->head == NULL)
    {
        return;
    }
   this->head = this->head->next;


}
void linked_list::delend()
{
    if(this->head==NULL)
    {
        return;
    }
    Node* ptr= this->head;
    while(ptr->next->next != NULL)
    {
        ptr= ptr->next;
    }
    ptr->next->next = ptr->next;
    ptr->next = NULL;

}
Node* linked_list::searchbyposition(int p)
{
    int index = 1;
    Node* ptr = this->head;
    while(ptr !=NULL)
    {
        if(index == p )
        return ptr;
       
        ptr= ptr->next;
        index++;
    }
    return NULL;
}
Node* linked_list:: searchbydata(int data)
{
    Node* ptr = this->head;
    while(ptr!=NULL)
    {
        if(ptr->data == data)
        return ptr;
        ptr= ptr->next;

    }
    return NULL;


}

void linked_list :: display()
{
    Node* ptr = this->head;
    while(ptr !=NULL)
    {
        cout << ptr->data<< " -> ";
        ptr = ptr->next;
    }
    cout << "NULL";
}
int main (){
    linked_list st;
    st.appened(7);
    st.appened(3);
    st.appened(8);
    st.addbeg(2);
  //  st.delbeg();
   st.delend();
    st.display();


}
