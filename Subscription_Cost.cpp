#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) 
    {
        int n,x,y;
        cin >> n >> x >> y;
        int ans = 0;
        for(int i=1; i<=n; i++) 
        {
            if(i <= 3)
            {
                ans = ans+x;
            }
            else
            {
                ans = ans+y;
            }
        }
        cout << ans << endl;
    }
    return 0;
}