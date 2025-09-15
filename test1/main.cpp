#include <iostream>
 int main() {
   int year = 2025;                 // 整數（沒有小數點）
   double price = 10.99;            // 浮點數（有小數點）
   double gpa = 2.5, temperature = 25.1; // 同行可宣告多個
   std::cout << "year=" << year << "\n";
   std::cout << "price=" << price << "\n";
   std::cout << "gpa=" << gpa << ", temp=" << temperature << "\n";
   return 0;
 }
