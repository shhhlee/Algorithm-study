#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a;
    int b = 1;
    cin >> a;

    for(int i = 1; i <= a; i++) {
        b *= i;
    }

    cout << b;
}