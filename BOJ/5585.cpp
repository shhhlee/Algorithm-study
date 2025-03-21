#include <bits/stdc++.h>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int v[6] = {500,100,50,10,5,1};
    int c = 0;
    int a = 0;
    cin >> a;

    int b = 1000 - a;

    for (int i = 0; i < sizeof(v)/sizeof(*v); i++) {
        c += b/v[i];
        b %= v[i];
    }

    cout << c;
    
}