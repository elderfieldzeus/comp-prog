#include <bits/stdc++.h>

using namespace std;

int main() {
    int ans = 0;
    vector<pair<int, int>> directions = {
        {0, 1}, {0, -1}, {1, 0}, {-1, 0}
    };
    int r, c;

    cin >> r >> c;

    vector<vector<int>>islands(r, vector<int>(c));

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> islands[i][j];


    queue<pair<int, int>> q;
    vector<vector<bool>>visited(r, vector<bool>(c, false));

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(islands[i][j] == 1 && visited[i][j] == false) {
                ans++;
                q.push({i, j});

                while(!q.empty()) {
                    int size = q.size();

                    for(int i = 0; i < size; i++) {
                        auto [a, b] = q.front();
                        q.pop();

                        visited[a][b] = true;

                        for(auto [x, y] : directions) {
                            if(a + x >= 0 && a + x < r && b + y >= 0 && b + y < c && !visited[a + x][b + y] && islands[a + x][b + y] == 1) {
                                q.push({a + x, b + y});
                            }
                        }
                    }
                }
            }
        }
    }

    cout << ans;
}