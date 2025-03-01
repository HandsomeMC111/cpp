#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2;
    cout << "请输入操作符 (+, -, *, /): ";
    cin >> op;

    cout << "请输入两个数字: ";
    cin >> num1 >> num2;

    switch(op) {
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
