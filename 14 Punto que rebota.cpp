#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int main() {
    int x = 0;
    int y = 0;
    int dx = 1;
    int dy = 1;

    while (true) {
        cout << "\033[2J";
        x = (x + dx) % 80;
        y = (y + dy) % 25;

        if (x == 0 || x == 79) {
            dx *= -1;
        }
        if (y == 0 || y == 24) {
            dy *= -1;
        }

        cout << "\033[" << y + 1 << ";" << x + 1 << "H*";
        cout.flush();
        this_thread::sleep_for(chrono::milliseconds(100));
    }

    return 0;
}
