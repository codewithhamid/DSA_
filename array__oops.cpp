#include <iostream>
using namespace std;


class Array
{
    int *arr;
    int size;

    public:
     Array();
        Array(int size);
        void take_input();
        void display();
         Array add(Array temp);

};
Array::Array(int size)
{
    arr = new int[size];
    this->size = size;
}

Array::Array()
{
    size =10;
    arr = new int (size);
}
void Array::take_input()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "enter the value "<< i ;
        cin >> arr[i];
        
    }
    
}
void Array::display()
{
    for(int i=0;i<10;i++)
    {
        cout << arr[i];
    }
}
 Array  Array::add(Array temp)
{
    Array res(this->size);
    for(int i=0;i< temp.size;i++)
    {
        res.arr[i]=this->arr[i]+temp.arr[i];

    }
    return res;


}



int main ()
{
    
    int size_array;

    cout << "enter the size: ";
    cin >> size_array;

    Array a1(size_array);
    Array a2(size_array);
    Array res(size_array);

    a1.take_input();
    cout << "A1 INPUT OVER" << endl;
    a2.take_input();
    cout << "A2 INTPUT OVER" << endl;

    res = a1.add(a2);

    res.display();


}
