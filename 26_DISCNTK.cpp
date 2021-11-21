#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_cases;
    cin >> test_cases;
    while (test_cases--)
    {
        int i, size, k, j;
        cin >> size >> k;
        int arr[size];
        for (i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        map<int, int> mp;
        for (i = 0; i < k; i++)
            mp[arr[i]]++;
        cout << mp.size() << " ";
        for (i = k; i < size; i++)
        {
            if (mp[arr[i - k]] == 1)
                mp.erase(arr[i - k]);
            else
                mp[arr[i - k]]--;
            mp[arr[i]]++;
            cout << mp.size() << " ";
        }
        cout << endl;
    }
}
