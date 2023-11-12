#include <iostream>
using namespace std;
int commonCharacters(string s1, string s2)
{
    int count = 0;
    for (int i = 0; s1[i] != '\0'; i++)
    {
        for (int n = 0; s2[n] != '\0'; n++)
        {
            if (s1[i] == s2[n])
            {
                count++;
                break;
            }
        }
    }
    return count;
}
main()
{
    string s1, s2;
    cout << "Enter the first string: ";
    cin >> s1;
    cout << "Enter the second string: ";
    cin >> s2;
    cout << "Number of common characters: " << commonCharacters(s1, s2);
}