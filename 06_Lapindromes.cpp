#include <iostream>
using namespace std;

// CONCEPT OF FREQUENCY ARRAY IS USED
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin>>s;
        int left[26] = {0};
        int right[26] = {0};
        int len = s.length();
        for (int i = 0; i < len / 2; i++)
        {
            int index = s[i] - 'a';
            left[index]++;
        }
        for (int i = (len + 1) / 2; i < len; i++)
        {
            int index = s[i] - 'a';
            right[index]++;
        }
        int Case = 0;
        for (int i = 0; i < 26; i++)
        {
            if (left[i] != right[i])
                Case = 1;
        }
        if (Case == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
