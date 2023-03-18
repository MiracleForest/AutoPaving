#include "circlePaving.h"


//参考代码
/*
#include <iostream>
#include <cmath>

using namespace std;

const int MAP_SIZE = 20;

int map[MAP_SIZE][MAP_SIZE];

void generateMap(int A[5], float R) {
    int innerRadius = static_cast<int>(R);
    int outerRadius = static_cast<int>(R) + 5;
    int centerX = MAP_SIZE / 2;
    int centerY = MAP_SIZE / 2;

    for (int i = 0; i < MAP_SIZE; i++) {
        for (int j = 0; j < MAP_SIZE; j++) {
            int dx = i - centerX;
            int dy = j - centerY;
            float distance = sqrt(dx * dx + dy * dy);

            if (distance < innerRadius || distance >= outerRadius) {
                map[i][j] = 0;  // 空气方块
            }
            else {
                float angle = atan2(dy, dx);
                if (angle < 0) {
                    angle += 2 * M_PI;
                }

                int index = static_cast<int>((angle / (2 * M_PI)) * 5) % 5;
                map[i][j] = A[index];
            }
        }
    }
}

void printMap() {
    for (int i = 0; i < MAP_SIZE; i++) {
        for (int j = 0; j < MAP_SIZE; j++) {
            cout << map[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int A[5] = { 1, 2, 3, 4, 5 };
    float R = 6.0f;
    generateMap(A, R);
    printMap();
    return 0;
}
*/

CirclePaving::CirclePaving()
{
}

CirclePaving::~CirclePaving()
{
}
