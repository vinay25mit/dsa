#include<bits/stdc++.h>
using namespace std;
 typedef long long int ll;
 int main()
 {
 	int t;
 	cin >> t;
 	while (t--)
 	{
 		int n;
 		cin >> n;
 		int arr[n + 1];
 		for (int i = 0; i < n; i++)
 		{
 			cin >> arr[i + 1];
 		}
 		sort(arr + 1, arr + n + 1);
 		int dp[n + 2];
 		memset(dp, 0, sizeof(dp));
 		ll ans = 0;
 		dp[0] = 0;
 		for (int i = 1; i <= n; i++)
 		{
 			int a = arr[i];
 			if (i - a >= 0)
                dp[i] = max(dp[i - 1], dp[i - a] + 1);
 			else
                dp[i] = dp[i - 1];
 		}
 		cout << dp[n] << endl;
 	}
 }
