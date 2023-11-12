#include <iostream>
using namespace std;
int wordsCounter(string check)
{
    
    int count=0;
    for(int n=0;check[n]!='\0';n++)
    {
        count++;
    }
    return count;
}
string longest7SegmentWord(string word[], int size)
{
    string check[size];
    for (int i = 0; i < size; i++)
    {
        string name = word[i];
        int count = 0;
        for (int n = 0; name[n] != '\0'; n++)
        {
            if (name[n] == 'k' || name[n] == 'm' || name[n] == 'v' || name[n] == 'w' || name[n] == 'x')
            {
                count++;
            }
        }
        if (count == 0)
        {
            check[i] = name;
        }
        else
            check[i] = '\0';
    }
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        arr[i]=wordsCounter(check[i]);
    }
    for (int i = 0; i < size; i++)
    {
        if(arr[0]<arr[i])
        {
            arr[0]=arr[i];
            check[0]=check[i];
        }
    }
    return check[0];
}

main()
{
    int size;
    cout << "Enter the number of words: ";
    cin >> size;
    string word[size];
    cout << "Enter the words, one by one: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> word[i];
    }
    cout << "Longest 7-segment word: " << longest7SegmentWord(word, size);
}