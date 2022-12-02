#include<iostream>
using namespace std;
#define n 20
class queue
{
  int* arr;
  int front;
  int back;
  public:

  queue()
  {
    arr =new int[n];
    int front = -1;
    int back =-1;
  }

 void enqueue(int x)
{
  if(back == n-1)
  {
    cout<< "queue is fuLL"<<endl;
    return;
  }
  back++;
  arr[back]= x;


  if(front == -1)
  front ++;
  
}
void dequeue()
{
  if(front == -1)
  {
    cout << "queueis empty"<<endl;
    return;
  }
  front++;
}
int display()
{
   if(front == -1)
  {
    cout << "queueis empty"<<endl;
    return -1;
  }
  return arr[front];

}
};
int main()
{
  queue q;
  q.enqueue(8);
  q.enqueue(7);
  q.enqueue(3);
  q.enqueue(5);
  
  cout<< q.display();
  q.dequeue();
}



