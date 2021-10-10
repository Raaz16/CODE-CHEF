#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l;
        string s, temp;
        cin >> l;
        cin >> s;
        for (int i = 0; i < l; i++)
        {
            if (s[i] != '.')
            {

                temp += s[i];
            }
        }
        bool ans = true;
        if (temp.length() % 2 != 0)
            ans = false;

        else
        {
            for (int i = 0; i < temp.length(); i++)
            {
                if (i % 2 == 0)
                {
                    if (temp[i] == 'T')
                    {
                        ans = false;
                    }
                }
                else
                {
                    if (temp[i] == 'H')
                    {
                        ans = false;
                    }
                }
            }
        }
        if (ans)
            cout << "Valid" << endl;
        else
            cout << "Invalid" << endl;
    }
}