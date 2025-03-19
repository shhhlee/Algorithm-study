#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v(4);
    cin >> v[0] >> v[1] >> v[2] >> v[3];
    cout << (v[0]+v[1]+v[2]+v[3]) / 60 << "\n";
    cout << (v[0]+v[1]+v[2]+v[3]) % 60 << "\n";
    
    return 0;
}