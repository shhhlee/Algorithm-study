#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v(26);

    string s;
    cin >> s;

    for(int i = 0; i < s.length(); i++) {
        v[s[i]-'a'] += 1;
    }

    for(int i = 0; i < 26; i++) {
        cout << v[i] << " ";
    }
}