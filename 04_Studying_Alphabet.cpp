#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s, s1;
    cin >> s;
    int n;
    cin >> n;
    while (n--)
    {
        cin >> s1;
        int count = 0;
        for (int i = 0; i < s1.size(); i++)
        {
            for (int j = 0; j < s.size(); j++)
            {
                if (s1[i] == s[j])
                {
                    count++;
                }
            }
        }
        if (count == s1.size())
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}