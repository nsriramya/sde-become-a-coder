#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s="madm";
   int  i=0;
   int  j=s.length()-1;
   int c=0;
    while(i<j)
    {
        if(s[i]==s[j])
        {
            c++;
        }
        i++;
        j--;
    }
    if(c==(s.length())/2)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    
    return 0;
}
