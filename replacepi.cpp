// Change in the given string itself. So no need to return or print anything
#include<bits/stdc++.h>
#include<string.h>

// void testfunc(char* outStr){
//   char str[10];
//   for(int i=0; i < 10; ++i){
//     outStr[i] = str[i];
//   }
// }
void solve(char input[],int n,int i,char q[],int &j){
    if(i==n)
        return ;
    if(n==1){
        // string m = "";
        // q+=input[i];
        q[j++]=input[i];
        // j+=1;
        // return m;
        return;
    }
    // string s="";
    if(i<n-1 && input[i]=='p' && input[i+1]=='i'){
        // q+= "3.14";
        q[j++]='3';
        q[j++]='.';
        q[j++]='1',
        q[j++]='4',

        solve(input , n , i+2,q,j);
    }
    else{
        q[j++]=input[i];
        solve(input , n , i+1,q,j);
    }
        // return s;
}
void replacePi(char input[]) {
   
    int n = strlen(input);
    char q[150];
   int j=0;
    solve(input , n , 0,q,j);
    // for(char x: s)
    // {
    //     cout<<x<<"\n";
    // }
    
for(int i=0; i<j; i++)
    {
    input[i]=q[i];
    }
    input[j]='\0';
}


