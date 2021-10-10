#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t,A[2];
    cin>>t;
    while (t--)
    {
        for (int i = 0; i < 3; i++)
        {
            cin>>A[i];
        }
        int temp = A[0];
        for (int i = 0; i < 3; i++)
        {
           for (int j = 0; j < 3; j++)
           {
               if (A[i] > A[j])
               {
                   temp = A[i];
                   A[i] = A[j];
                   A[j] = temp;
               }
           }
           
            
        }
        cout<<A[1]<<endl;
        
    }
    
}