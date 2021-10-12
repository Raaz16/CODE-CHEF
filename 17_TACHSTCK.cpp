#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, D;
    cin >> n >> D;
    int arr[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n-1;)
    {
        if(abs(arr[i] - arr[i+1]) <= D)
        {
        count++;
        i+=2;
        }
        else
        i++;

    }
    cout<<count<<endl;
}
