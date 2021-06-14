#include<bits/stdc++.h>
using namespace std;
void Permutations(string str, string ss, int visited[])
{
    if(str.size() == ss.size())
    {
        cout<<ss<<"\n";
        return;
    }
    for(int i=0; i<str.size(); i++)
    {
        if(visited[i] == 0)
        {
            visited[i] = 1;
            Permutations(str, ss+str[i], visited);
            visited[i] = 0;
        }
    }
}
int main()
{
    string str, ss="";
    cin>>str;
    int x = str.size();
    int visited[x] = {0};
    Permutations(str, ss, visited);
}
