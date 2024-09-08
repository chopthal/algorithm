#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int bfs(const vector<vector<int>>& grid) {
    int res;
    int N = grid.size();
    int M = grid[0].size();
    int x, y;
    vector<vector<bool>> visited(N, vector<bool>(M, false));

    queue<pair<int, int>> q;
    q.push({0, 0});
    visited[0][0] = true;

    while(!q.empty()){

        q.pop();
        auto [x, y] = q.front();
        int size = q.size();

        for(int i=0; i<size; i++){
            for(int dir=0; dir<4; dir++){

                int new_x = x + dx[dir];
                int new_y = y + dy[dir];

                if(new_x >= 0 && new_x < N && new_y >=0 && new_y < M){
                    if(grid[new_x][new_y] == 0){
                        
                    }
                }

            }
        }
            
    }

    

    


    return -1;
}

int main() {
    vector<vector<int>> grid = {
        {0, 0, 0, 0},
        {0, 1, 1, 0},
        {0, 0, 0, 0},
        {1, 1, 0, 0}
    };

    int result = bfs(grid);

    if(result == -1){
        cout << "최단 거리 찾기 실패!" << result << endl;
    }
    else {
        cout << "최단 거리는 : " << result << endl;
    }

   return 0;
}