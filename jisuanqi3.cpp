#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2;

    // 输入操作符和两个数字
    cout << "输入操作符 (+, -, *, /): ";
    cin >> op;
    cout << "输入两个数字: ";
    cin >> num1 >> num2;

    // 根据操作符计算结果
    switch (op) {
        case '+':
            cout << "结果: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "结果: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "结果: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "结果: " << num1 / num2 << endl;
            else
                cout << "错误：除数不能为零！" << endl;
            break;
        default:
            cout << "错误：无效的操作符！" << endl;
            break;
    }

    return 0;
}
