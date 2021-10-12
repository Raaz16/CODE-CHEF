#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        int count = 0;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            if (arr[n - 1] == arr[i])
                count++;
        }
        if (count > 1)
        {
            cout << "fight:(" << endl;
        }
        else
            cout << "peace:)" << endl;
    }
    return 0;
}