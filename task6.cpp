#include <iostream>
using namespace std;
int coloringTime(string cols[], int size)
{
    int count=2;
    for(int i=0;i<size-1;i++)
    {
        if(cols[i]==cols[i+1])
        {
            count=count+2;
        }
        else
        count=count+3;

    }
    return count;

}
main()
{
    int size;
    cout<<"Enter the size of Array: ";
    cin>>size;
    string cols[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Enter Element "<<i+1<<": ";
        cin>>cols[i];
    }
    cout<<"Time to color: "<<coloringTime(cols, size)<<" seconds";
}