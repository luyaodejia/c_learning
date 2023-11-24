//
// Created by lenovo on 2023/11/24.
//
#include "../util/common.h"

//递归
int recur(int n) {
    //终止条件
    if (n == 1)
        return 1;
    //递：递归调用
    int res = recur(n - 1);
    //归：返回结果
    return n + res;
}

//使用迭代模拟递归
int forLoopRecur(int n) {
    //使用一个显示的栈来模拟系统调用栈
    stack<int> stack;
    int res = 0;
    //递：递归调用
    for (int i = n; i > 0; i--) {
        //通过入栈操作模拟递
        stack.push(i);
    }
    //归:返回结果
    while (!stack.empty()) {
        //通过出栈操作模拟归
        res += stack.top();
        stack.pop();
    }
    return res;
}

/**
 * 尾递归
 * @return
 */
int tailRecur(int n, int res) {
    //终止条件
    if (n == 0)
        return res;
    //尾递归调用
    return tailRecur(n - 1, res + n);
}

/**
 * 斐波那契数列：递归
 * @return
 */
int fib(int n) {
    // 终止条件 f(1) = 0, f(2) = 1
    if (n == 1 || n == 2)
        return n - 1;
    // 递归调用 f(n) = f(n-1) + f(n-2)
    int res = fib(n - 1) + fib(n - 2);
    // 返回结果 f(n)
    return res;
}


int main() {
    int n = 5;
    int res;

    res = recur(n);
    cout << "\n递归函数的求和结果 res=" << res << endl;

    res = forLoopRecur(n);
    cout << "\n使用迭代模拟递归求和结果 res = " << res << endl;

    res = tailRecur(n, 0);
    cout << "\n尾递归函数的求和结果 res =" << res << endl;

    res = fib(n);
    cout << "\n斐波那契数列的求和结果 res =" << res << endl;

    return 0;
}