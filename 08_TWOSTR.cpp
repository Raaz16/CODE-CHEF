#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        int sum =0;
        cin >> s1 >> s2;
        for (int i = 0; i < s1.length(); i++)
        {
            if ((s1[i] == s2[i]))
                sum++;
            else if ((s1[i] == '?'))
                sum++;
            else if ((s2[i] == '?'))
                sum++;
        }
        if (sum == s1.length())
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}