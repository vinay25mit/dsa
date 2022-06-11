#include<bits/stdc++.h>
#define int         int64_t
#define pb          push_back
#define endl        '\n'
#define pll         pair<int,int>
#define vll          vector<int>
#define all(a)      (a).begin(),(a).end()
#define x           first
#define y           second
#define sz(x)       (int)x.size()
#define hell        1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mi        map<int,int>
#define gcd(a,b)    __gcd((a),(b))
#define lcm(a,b)    ((a)*(b)) / gcd((a),(b))
#define rep(i,a,b)  for(int i=a;i<b;i++)
#define ios     ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>v(k);
    for(int i=0;i<k;i++)
    {
    	cin>>v[i];
    }
    int total=1<<k;
    int d=n;
    for(int i=1;i<total;i++)
    {
    	int nb=0;
    	int val=1;
    	for(int j=0;j<k;j++)
    	{
    		if(i&(1<<j))
    		{
    			nb++;
    			val=val*v[j]/(__gcd(val,v[j]));
    			
    		}
    	}
    	if(nb&1)
    	{
    		n-=d/val;
    	}
    	else{
    		n+=d/val;
    	}
    }
    cout<<n<<"\n";

}
signed main(){
    ios
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif 
        
    int test=1;
    //cin>>test;
    while(test--){
        solve();
    }    
    return 0;
}
