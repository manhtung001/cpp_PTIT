

#include <bits/stdc++.h>
 
using namespace std;
 
int stringToNum(char c)    
{
    return c - '0';
}
 
char numToString(int n)  
{
    return (char)(n+48);
}

void format(string &a, string &b) 
{
    int l1 = a.length(), l2 = b.length();
    if (l1 >= l2)
    {
        b.insert(0, l1-l2, '0'); 
    }
    else
    {
        a.insert(0, l2-l1, '0');   
    }
}
 
string sum(string a, string b)  
{
    string s = "";
    format(a,b);    
    int l = a.length();
     
    int temp = 0;
    for (int i=l-1; i>=0; i--)  
    {
        temp = stringToNum(a[i]) + stringToNum(b[i]) + temp; 
        s.insert(0,1,numToString(temp%10));       
        temp = temp/10; 
    }
    if (temp>0)
    {
        s.insert(0,1,numToString(temp));
    } 
    return s;
}

string multiNum(char a, string b)    
{
    string s = "";
    int temp = 0;
    for (int i=b.length()-1; i>=0; i--)      
    {
        temp = stringToNum(a) * stringToNum(b[i]) + temp;
        s.insert(0,1,numToString(temp%10));
        temp = temp/10;
    }
     
    if (temp>0)
    {
        s.insert(0,1,numToString(temp));
    } 
    return s;
}
 
string multiply(string a, string b)    
{
    string s = "";
    int l = a.length();
    string s1[l];
     
    for (int i=l-1; i>=0; i--)   
    {
        s1[i] = multiNum(a[i], b);   
        s1[i].insert(s1[i].length(), l-i-1, '0');   
        s = sum(s, s1[i]);  
    }
    return s;
}
 
int main()
{
    string a, b, s;
    int t;
    cin >> t;
    fflush(stdin);
    while(t--){
    	cin >> a;
	    cin >> b;
	     
	    s = multiply(a,b);
	    cout<<s<<endl;
	}
    return 0; 
}


