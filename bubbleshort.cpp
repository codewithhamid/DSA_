#include<iostream>
using namespace std;
void bubleshort(int *arr,int no_of_element)
{
    for(int i=0;i< no_of_element -1;i++)
    {
        for(int j=0;j< no_of_element;j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main()
{
    int arr[4]={4,3,2,1};
    bubleshort(arr,4);
    for(int i=0;i<4;i++)
    {
        cout<< arr[i];

    }
    cout << endl;
    return 0;
}
