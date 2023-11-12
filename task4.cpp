#include <iostream>
using namespace std;
void evenOddTransform(int arr[], int size, int n)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==1)
        {
            arr[i]=arr[i]+2*n;
        }
        else
        arr[i]=arr[i]-2*n;
    }
    cout<<"[";
    for(int i=0;i<size-1;i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<arr[size-1]<<"]";
}
main()
{
    int size,n;
    cout<<"Enter the size of Array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Enter Element "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<"Enter number of times even-odd transformation need to be done: ";
    cin>>n;
    evenOddTransform(arr,size,n);
}