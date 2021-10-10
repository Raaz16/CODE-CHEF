#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int m, x, y;
        cin>>m>>x>>y;
        int cop[m];
        
        for (int i = 0; i < m; i++)
        {
            cin >> cop[i];
        }

        bool copPresent[100] = {0};

        for (int j = 0; j < m; j++)
        {
            for (int i = cop[j]; i <= (cop[j] + (x * y)) && i<=100; i++)
            {
                copPresent[i - 1] = 1;
            }
            for (int i = cop[j]; i >= (cop[j] - (x * y))&&i>=0; i--)
            {
                copPresent[i - 1] = 1;
            }
        }
        int ans = 0;
        for (int i = 0; i < 100; i++)
        {
            if (copPresent[i] == 0)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
}