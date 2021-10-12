#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, temp, ans = 10000000;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

       sort(arr, arr+n);
       
        for (int i = 0; i < n; i++)
        {
            temp = arr[i+1] - arr[i];
            if(ans > temp)
            ans = temp;
        }
        cout<<ans<<endl;
    }
}