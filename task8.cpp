#include <iostream>
using namespace std;
string findBrokenKeys(string correctPhrase, string actualTyped)
{
    string result;
    for(int i=0;correctPhrase[i]!='\0';i++)
    {
        int count=0;
        for(int n=0;n<i;n++)
        {
            
            if(result[n]==correctPhrase[i])
            {
                count++;
            }
        }
        if(correctPhrase[i]!=actualTyped[i] && count==0)
        {
            result=result+correctPhrase[i];
        }
    }
    return result;
}
main()
{
    string correctPhrase,actualTyped;
    cout<<"Enter the correct phrase: ";
    getline(cin,correctPhrase);
    cout<<"Enter what you actually typed: ";
    getline(cin,actualTyped);
    cout<<"Broken keys: "<<findBrokenKeys(correctPhrase, actualTyped);
}