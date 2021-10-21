class Solution {
public:
    string rever(string s)
{
    int l=0;
    int h=s.length()-1;
    while(l<h)
    {
        swap(s[l],s[h]);
        l++;
        h--;
    }
    return s;
}
string inver(string str)
{
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='0')
            str[i]='1';
        else if(str[i]=='1')
            str[i]='0';
    }
    return str;
}
string bit(int n)
{
      if(n>1)
      {
          string s=bit(n-1);
         return  s+"1"+rever(inver(s));
      }
       return "0";
}
    char findKthBit(int n, int k) {
        string sem=bit(n);
        return sem[k-1];
    }
}; 
