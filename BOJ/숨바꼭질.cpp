#include <bits/stdc++.h>
#include <iostream>
#include <queue>

using namespace std;

int a,b;
int visited[100001] = {0};

void bfs(int a) {
    queue<pair<int, int> > q;
    q.push(make_pair(a,0));
    while(!q.empty()) {
        int x = q.front().first;
        int cnt = q.front().second;
        q.pop();
        if(x==b) {
            cout << cnt;
        }
        if(x+1 >= 0 && x+1 < 100001) {
            if(!visited[x+1]) {
                visited[x+1] = 1;
                q.push(make_pair(x+1, cnt + 1));
            }
        }
        if(x-1 >= 0 && x-1 < 100001) {
            if(!visited[x-1]) {
                visited[x-1] = 1;
                q.push(make_pair(x-1, cnt + 1));
            }
        }
        if(x*2 >= 0 && x*2 < 100001) {
            if(!visited[x*2]) {
                visited[x*2] = 1;
                q.push(make_pair(x*2, cnt + 1));
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> a >> b;
    visited[a] = 1;
    bfs(a);
}