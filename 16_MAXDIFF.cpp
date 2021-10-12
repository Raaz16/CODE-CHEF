#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
         if (k > n / 2)
        {
            k = n - k;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int sum1 = 0, sum2 = 0;
       

        for (int i = 0; i < k; i++)
        {
            sum1 += arr[i];
        }
        
        for (int i = k; i < n; i++)
        {
           
            sum2 += arr[i];
        }

        cout<<(sum2-sum1)<<endl;
    }
}