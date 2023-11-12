#include <iostream>
using namespace std;
bool isLengthEven(string string)
{
    int count=0;
    for(int i=0;string[i]!='\0';i++)
    {
        count++;
    }
    if(count%2==0)
    return true;
    if(count%2!=0)
    return false;
}
main()
{
    string string;
    cout<<"Enter a string: ";
    cin>>string;
    cout<<isLengthEven(string);
    
}