#include <iostream>
using namespace std;
string containsSeven(int numbers[], int size)
{
    string result="there is no 7 in the array";
    for(int i=0;i<size;i++)
    {
        if(numbers[i]==7||numbers[i]%10==7)
        {
            result="Boom!";
            break;
        }

    }
    return result;
}
main()
{
    int size;
    cout<<"Enter the size of Array: ";
    cin>>size;
    int numbers[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Enter Element "<<i+1<<": ";
        cin>>numbers[i];
    }
    cout<<containsSeven(numbers,size);
}