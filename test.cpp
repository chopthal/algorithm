#include <iostream>
#include <queue>
using namespace std;

struct State {
    int red_x, red_y;
    int blue_x, blue_y;
    int moves;
};

int bfs(pair<int, int> red, pair<int, int> blue){
    queue<State> q;
    q.push( {red.first, red.second, blue.first, blue.second, 0 });

    while(!q.empty()) {
        State current = q.front();
        q.pop();

        cout << current.moves << endl;
        

        q.push({ 3, 3, 4, 4, current.moves + 1 });
        current = q.front();
        cout << current.moves << endl;


    }

    return 0;
}

int main() {
    pair<int, int> red, blue;
    red = {1, 1};
    blue = {2, 2};
    int result = bfs(red, blue);
    return 0;
}