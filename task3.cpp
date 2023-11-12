#include <iostream>
using namespace std;
bool areAllElementsIdentical(string numbers[], int size)
{
    int count=0;
    while(count<size-1)
    {
        if(numbers[count]==numbers[count+1])
        {
            count++;
        }
        else
        return false;

    }
    return true;
}
main()
{
    int size;
    cout<<"Enter the size of Array: ";
    cin>>size;
    string numbers[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Enter Element "<<i+1<<": ";
        cin>>numbers[i];
    }
    cout<<areAllElementsIdentical(numbers,size);
}