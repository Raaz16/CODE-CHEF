#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       int n, k;
        int r = 0;
        cin >> n >> k;
        for (int i = 1; i <= k; i++)
        {
            if (n % i > r)
            {
                r = n % i;
            }
        }
        cout << r << endl;
    }
    
    return 0;
}
