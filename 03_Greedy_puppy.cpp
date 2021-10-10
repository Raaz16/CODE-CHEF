#include <iostream>
using namespace std;

int main()
{
    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int r = n % k;
        cout << r << endl;
    }
}