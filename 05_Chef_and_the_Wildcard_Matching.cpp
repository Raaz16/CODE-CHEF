#include<iostream>
using namespace std;


int main()
{
    int T;
    cin>>T;
     
     string s, s1;
    while (T--)
    {
        int count = 0;
        cin>>s>>s1;
        for (int i = 0; i < s.size(); i++)
        {
           
                if (s[i] == s1[i])
                {
                    count++;
                }
                else if (s[i] =='?')
                {
                    count++;
                }
                
                else if (s1[i] =='?')
                {
                    count++;
                }
                
            
        }
        if (count == s.size())
        {
         cout<<"Yes"<<endl;
        }
        else
            cout<<"No"<<endl;    
    }
    return 0;
}