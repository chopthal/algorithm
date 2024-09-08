#include <iostream>

using namespace std;

const int MAX_N = 10;
const int MAX_COUNT = 10;
const char WALL = '#';
const char HOLE = 'O';
const char RED_BALL = 'R';
const char BLUE_BALL = 'B';
char board[MAX_N][MAX_N];


pair<int, int> red, blue;
int is_visited;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int move() {
    for(int dir=0; dir<4; dir++){
        int cnt = 0;
        while(true){
            int red_x = red.first + dx[dir];
            int red_y = red.second + dy[dir];
            int blue_x = blue.first + dx[dir];
            int blue_y = blue.second + dy[dir];

            if (board[red_x][red_y]==WALL && board[blue_x][blue_y]==WALL){
                break;
            }

            cnt++;
        }
    }

    return 0;
}


int bfs() { 
    return 0;
}

int main() {
    int N, M;
    cin >> N >> M;

    for(int i=0; i<N; i++){
        for (int j=0; j<M; j++){
            cin >> board[i][j];

            if (board[i][j] == 'R'){
                red.first = i;
                red.second = j;
            }
            else if (board[i][j] == 'B')
            {
                blue.first = i;
                blue.second = j;
            }
        }
    }
    cout << red.first << red.second << blue.first << blue.second << endl;
}