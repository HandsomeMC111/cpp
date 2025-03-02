#include <bits/stdc++.h>
using namespace std;
int main()
{
    double g, t, s = 0;
    for (;;)
    {
        cout << "请输入您的身高，体重:" << endl;
        cin >> g >> t;
        s = t / (g * g);
        cout << "你的BMI指数：" << s << endl;
        if (s < 18.5)
        {
            cout << "消瘦" << endl;
        }
        else if (s <= 24)
        {
            cout << "正常" << endl;
        }
        else
        {
            cout << "偏胖" << endl;
        }
    }
    return 0;
}