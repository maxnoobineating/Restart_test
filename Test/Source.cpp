#include <iostream> 
using namespace std;

class book {
};

enum Action {
    STOP, RIGHT, LEFT, UP, DOWN
};

void play(Action action) {
    switch (action) {
    case Action::STOP:
        cout << "播放停止動畫" << endl;
        break;
    case Action::RIGHT:
        cout << "播放向右動畫" << endl;
        break;
    case Action::LEFT:
        cout << "播放向左動畫" << endl;
        break;
    case Action::UP:
        cout << "播放向上動畫" << endl;
        break;
    case Action::DOWN:
        cout << "播放向下動畫" << endl;
        break;
    default:
        cout << "不支援此動作" << endl;
    }
}

int main() {
    play(Action::RIGHT);
    play(LEFT);
    cout << Action::STOP << endl;
    cin.get();
    return 0;
}
