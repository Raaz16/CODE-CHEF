#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int array[n];
        int start = 0, last = n - 1;
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        bool check = true;   
        if (array[0] != 1)
        {
            check = false;
        }
        
        while (start < last)
        {
            if (array[start] != array[last])
            {
                check = false;
                break;
            }

            if (array[start] != array[start + 1] && array[start + 1] != array[start] + 1)
            {
                check = false;
                break;
            }
            last--;
            start++;
        }
        if (array[start] != 7)
        {
            check = false;
        }
        if (check)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;

        }
    }
}
