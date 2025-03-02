#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // 输入两个数
    cout << "请输入第一个数: ";
    cin >> num1;
    cout << "请输入第二个数: ";
    cin >> num2;

    // 比较两个数的大小
    if (num1 > num2) {
        cout << "较大的数是: " << num1 << endl;
    } else if (num2 > num1) {
        cout << "较大的数是: " << num2 << endl;
    } else {
        cout << "两个数相等。" << endl;
    }

    return 0;
}
