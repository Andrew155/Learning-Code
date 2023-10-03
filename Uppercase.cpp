#include <iostream>
#include <string>
#include <locale> // Để sử dụng std::toupper
using namespace std;
int main() {
    string paragraph;

    // Đọc cả đoạn văn từ người dùng
    while (true) {
        string line;
        getline(cin, line);
        
        if (line.empty()) {
            break; // Kết thúc khi người dùng nhập dòng trống
        }

        paragraph += line + '\n'; // Thêm dòng vào đoạn văn
    }

    // Chuyển đổi cả đoạn văn sang in hoa
    for (int i = 0; i < paragraph.length(); i++) {
        paragraph[i] = toupper(paragraph[i]);
        
    }

    // In ra đoạn văn sau khi đã chuyển đổi sang in hoa
    std::cout << paragraph << std::endl;

    return 0;
}
