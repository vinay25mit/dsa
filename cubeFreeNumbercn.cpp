#include<bits/stdc++.h>
using namespace std;
int cubic_square(long long a,string b,int m)
{
    long long  result = 1;
    
    for(int i=b.length()-1;i>=0;i--)
    {
        // if(b[i]=='0')
        // {
        //     continue;
        // }
        if(b[i]=='1')
        {
            result = (result*a%m)%m;
        }
        else if(b[i]=='2')
        {
            result = ((result*a%m)*a)%m;
        }
        a = ((a*a)%m*a)%m;
    }
    return (result);
}


int main(){
    
    // write your code here
    int t;
    cin>>t;
    while(t--)
    {
        long long a;
        cin>>a;
        string b;
        cin>>b;
        int m;
        cin>>m;
        // int m = pow(10,9)+7;
        cout<<cubic_square(a,b,m)<<endl;
    }
    return 0;
}
