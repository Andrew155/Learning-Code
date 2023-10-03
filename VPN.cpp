#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string now;
    getline(cin, now);
    string hhStr, mmStr, ssStr;

    // Tách giờ, phút và giây từ chuỗi đầu vào
    stringstream n(now);
    getline(n, hhStr, ':');
    getline(n, mmStr, ':');
    getline(n, ssStr);

    // Chuyển đổi thành số nguyên
    int hh, mm, ss;
    stringstream(hhStr) >> hh;
    stringstream(mmStr) >> mm;
    stringstream(ssStr) >> ss;

    if (hhStr.length() == 2 && mmStr.length() == 2 && ssStr.length() == 2) {
        if (hh >= 0 && hh <= 23 && mm >= 0 && mm <= 59 && ss >= 0 && ss <= 59) {
            int totalSeconds = hh * 3600 + mm * 60 + ss;
            cout << totalSeconds << endl;
        } else {
            cout << "INCORRECT" << endl;
        }
    } else {
        cout << "INCORRECT" << endl;
    }

    return 0;
}
