#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        int count = 0;
        cin >> s;
        int l = s.size();
        int mid = l / 2;
        if (l % 2 == 0)
        {
            for (int i = 0; i < mid; i++)
            {
                for (int j = mid; j < l; j++)
                {
                    if (s[i] == s[j])
                    {
                        count++;
                    }
                }
            }
        }
        else
        {
            for (int i = 0; i < mid; i++)
            {
                for (int j = mid + 1; j < l; j++)
                {
                    if (s[i] == s[j])
                    {
                        count++;
                    }
                }
            }
        }
        if (count == mid)
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }
}