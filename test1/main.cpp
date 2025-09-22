#include <iostream>

int main() {
    double celsius;       // 攝氏溫度變數
    double fahrenheit;    // 華氏溫度變數
    
    std::cout << "請輸入華氏溫度!\n";   // 請使用者輸入華氏溫度
    std::cin >> fahrenheit;            // 讀取華氏溫度
    
    celsius = (fahrenheit - 32) / 9 * 5;  // 計算攝氏溫度
    std::cout << "攝氏溫度為: " << celsius << " 度\n";  // 輸出結果
    
    return 0;
}
