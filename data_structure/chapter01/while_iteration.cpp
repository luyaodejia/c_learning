//
// Created by lenovo on 2023/11/24.
//

#include "../util/common.h"

using namespace std;

int whileLoopII(int n);

int main() {
  int result = whileLoopII(9);
  cout << result <<endl;
}

int whileLoopII(int n){
    int res = 0;
    int i = 1;//初始化条件变量
    while (i<=n){
        res +=i;
        i++;
        i*=2;
    }
    return res;
}