#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll func(ll a, ll b, ll c) {
    if (b==1) {
        return a % c;
    }

    ll val = func(a,b/2,c);
    val = val * val % c;
    if (b%2==0) {
        return val;
    }
    else {
        return val * a % c;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll a,b,c;
    cin >> a >> b >> c;
    cout << func(a,b,c);

}