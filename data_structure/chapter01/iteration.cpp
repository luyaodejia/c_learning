//
// Created by lenovo on 2023/11/24.
//
#include "../util/common.h"

using namespace std;

int forLoop(int n);

int main() {
    forLoop(9);
}

int forLoop(int n) {
    int res = 0;
    for (int i = 1; i < n; ++i) {
        res += i;
        cout << res <<endl;
    }
    return res;
}