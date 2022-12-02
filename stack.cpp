#include <iostream>
using namespace std;
#define n 10
class stack
{
   
    int *arr;
    int top;
    public:
    stack(){
        arr= new int{n};
        top= -1;
     }




void push(int x)
{
    if(top == n-1)
    {
        return;
    }
    top++;
    arr[top]= x;
}
void pop()
{
    if(top == -1)
    {
        cout << "stack is empty"<<endl;
        return;
    }
    top--;

}
int display()
{
     if(top == -1)
    {
        cout << "stack is empty"<<endl;
        return -1;
    }
    return arr[top];

}
};
int main()
{
    stack st;
    st.push(7);
    st.push(8);
    cout << st.display();
    return 0;
}
 