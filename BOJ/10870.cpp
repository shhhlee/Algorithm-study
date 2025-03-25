#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;

    int f = 1;
    int ftmp = 0;
    int fftmp = 0;
    if (n==0 || n==1) {
        cout << n;
        return 0;
    }

    for (int i = 2; i <= n; i++) {
        fftmp = ftmp;
        ftmp = f;
        f = ftmp + fftmp;
    }
    cout << f;

}