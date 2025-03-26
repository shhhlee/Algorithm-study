#include <bits/stdc++.h>
#include <queue>

using namespace std;


int m,n;
int visited[100001] = {0};

void bfs(int v) {
    queue<pair<int, int>> q;
    q.push(make_pair(v,0));

    while (!q.empty()) {
        int next = q.front().first;
        int cnt = q.front().second;
        q.pop();
        if (next == n) {
            cout << cnt;
            break;
        }

        if ((0 <= next + 1 && next + 1 < 100001) && !visited[next+1]) {
            visited[next+1] = 1;
            q.push(make_pair(next+1,cnt+1));
        }
        
        if ((0 <= next - 1 && next - 1 < 100001) && !visited[next-1]) {
            visited[next-1] = 1;
            q.push(make_pair(next-1,cnt+1));
        }

        if ((0 <= next*2 && next*2 < 100001) && !visited[next*2]) {
            visited[next*2] = 1;
            q.push(make_pair(next*2,cnt+1));
        }
    }
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> m >> n;

    visited[m] = 1;

    bfs(m);
    return 0;
}