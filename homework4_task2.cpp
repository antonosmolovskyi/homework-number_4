#include <iostream>

int main() {
  char arr[100];
  char arrTemp[100];
  int number;
  std::cout << "How many symbols will be in you string?(to uppercase her) " << std::endl;
  std::cin >> number;
  std::cout << "Enter your string" << std::endl;
  for (int i = 0; i < number; ++i) {
    std::cin >> arr[i];
    if (arr[i] >= 97 && arr[i] <= 122) {
      arrTemp[i] = arr[i] - 32;
    }
    else {
      arrTemp[i] = arr[i];
    }
  }
  for (int j = 0; j < number; ++j) {
    std::cout << arrTemp[j];
  }
  return 0;
}