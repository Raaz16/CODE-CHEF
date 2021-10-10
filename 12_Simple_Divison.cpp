#include<iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while (T--)
    {
        int n, x, y, arr[10], count=0;
        cin>>n>>x>>y;

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
      
        for (int i = 0; i < n; i++)
        {
             if((arr[i] <= x && (arr[i]%y) == 0))
              {
                  count++;
              }

        }
        cout<<count<<endl;
       
    }
    
}