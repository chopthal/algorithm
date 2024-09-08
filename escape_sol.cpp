#include <iostream>
#include <vector>
#include <queue>
#include <tuple>

using namespace std;

const int MAX_N = 10; // 최대 노드 수
const char WALL = '#'; // 벽을 나타내는 문자
const char HOLE = 'O'; // 구멍을 나타내는 문자

int N, M; // 보드의 크기
char board[MAX_N][MAX_N]; // 보드
bool visited[MAX_N][MAX_N][MAX_N][MAX_N]; // 방문 여부
int dx[4] = { -1, 1, 0, 0 }; // 상하좌우 이동을 위한 배열
int dy[4] = { 0, 0, -1, 1 }; // 상하좌우 이동을 위한 배열

struct State {
    int red_x, red_y; // 빨간 구슬의 위치
    int blue_x, blue_y; // 파란 구슬의 위치
    int moves; // 이동 횟수
};

bool isValid(int x, int y) {
    return x >= 0 && x < N && y >= 0 && y < M; // 유효한 위치인지 확인
}

bool move(int &x, int &y, int dir) {
    while (isValid(x + dx[dir], y + dy[dir]) && board[x + dx[dir]][y + dy[dir]] != WALL) {
        x += dx[dir];
        y += dy[dir];
        if (board[x][y] == HOLE) return true; // 구멍에 도착
    }
    return false; // 구멍에 도착하지 않음
}

int bfs(pair<int, int> red, pair<int, int> blue) {
    queue<State> q; // 상태를 저장할 큐
    q.push({ red.first, red.second, blue.first, blue.second, 0 }); // 시작 상태 추가
    visited[red.first][red.second][blue.first][blue.second] = true; // 방문 처리

    while (!q.empty()) {
        State current = q.front(); // 큐에서 상태 꺼내기
        q.pop();

        // 최대 10번 이동
        if (current.moves > 10) return -1;

        for (int dir = 0; dir < 4; dir++) {
            int new_red_x = current.red_x;
            int new_red_y = current.red_y;
            int new_blue_x = current.blue_x;
            int new_blue_y = current.blue_y;

            bool red_hole = move(new_red_x, new_red_y, dir); // 빨간 구슬 이동
            bool blue_hole = move(new_blue_x, new_blue_y, dir); // 파란 구슬 이동

            // 파란 구슬이 구멍에 들어가면 무시
            if (blue_hole) continue;

            // 빨간 구슬이 구멍에 들어가면 성공
            if (red_hole) return current.moves + 1;

            // 두 구슬이 같은 위치에 있을 경우
                if (new_red_x == new_blue_x && new_red_y == new_blue_y) {
                // 더 멀리 이동한 구슬을 한 칸 뒤로 이동
                if (abs(new_red_x - current.red_x) + abs(new_red_y - current.red_y) > abs(new_blue_x - current.blue_x) + abs(new_blue_y - current.blue_y)) {
                    new_red_x -= dx[dir];
                    new_red_y -= dy[dir];
                } else {
                    new_blue_x -= dx[dir];
                    new_blue_y -= dy[dir];
                }
            }

            // 방문 여부 체크
            if (!visited[new_red_x][new_red_y][new_blue_x][new_blue_y]) {
                visited[new_red_x][new_red_y][new_blue_x][new_blue_y] = true;
                q.push({ new_red_x, new_red_y, new_blue_x, new_blue_y, current.moves + 1 });
            }
        }
    }

    return -1; // 구멍에 도달하지 못한 경우
}

int main() {
    cin >> N >> M; // 보드의 크기 입력
    pair<int, int> red, blue; // 빨간 구슬과 파란 구슬의 위치

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> board[i][j]; // 보드의 각 칸 입력
            if (board[i][j] == 'R') {
                red = { i, j }; // 빨간 구슬 위치 저장
            } else if (board[i][j] == 'B') {
                blue = { i, j }; // 파란 구슬 위치 저장
            }
        }
    }

    int result = bfs(red, blue); // BFS 수행
    cout << result << endl; // 결과 출력

    return 0; // 프로그램 종료
}