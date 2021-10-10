#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, count = 0, count1 = 0;
        string s;
        cin >> n;
        cin >> s;
        bool ans = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != '(' || (s[i] != ')'))
            {
                ans = false;
            }
            if (s[i] == '(')
            {
                count++;
            }
            if (s[i] == ')')
            {
                count1++;
            }
        }
        if (ans = false)
        {
            cout << "0" << endl;
        }
        if (count >= count1)
        {
            cout << count1 * 2 << endl;
        }
        else
        {
            cout << count * 2 << endl;
        }
    }
}