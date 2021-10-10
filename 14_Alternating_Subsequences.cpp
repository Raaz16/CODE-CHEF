#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int arr[n];
        int sum = 0, sum2 = 0;

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        

        for (int i = 0; i < n; i+=2)
        {
            sum += arr[i];
        }
        for (int i = 1; i <= n-1; i+=2)
        {
             sum2 += arr[i];
        }
        cout<<max(sum,sum2)<<endl;
    }
}