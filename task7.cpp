#include <iostream>
using namespace std;
int wordsCounter(string pin)
{
    
    int count=0;
    for(int n=0;pin[n]!='\0';n++)
    {
        count++;
    }
    return count;
}
void convertPINToDance(string pin)
{
    string arr[10]={"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    for(int i=0;i<4;i++)
    {
        int a=i;
        for(char n='0';n<='9';n++)
        {
            if(pin[i]==n)
            {
                if(a==10)
                {a=0;}
                if(a==11)
                {a=1;}
                if(a==12)
                {a=2;}
                
                cout<<arr[a]<<", ";
            }
            a++;
        }


    }
    // char n='3';
    // if(pin[0]==n)
    // {
    //       cout<<arr[6];
    //  }
    // cout<<arr[3];
}
bool check(string pin)
{
    int count=0;
    bool result=false;
    for(int i=0;i<4;i++)
    {
        for(char n='a';n<='z';n++)
        {
        if(pin[i]==n)
        {
            count++;
        }
        
        }
    }
    if(count!=0)
    {
    result=true;
    }
    return result;
}

main()
{
    string pin;
    cout << "Enter your PIN (4 digits): ";
    cin >> pin;
    if(wordsCounter(pin)!=4||check(pin)==true)
    {
        cout <<"Invalid input";
    }
    else
    {
        convertPINToDance(pin);
    }
}