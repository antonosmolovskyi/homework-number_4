#include <iostream>

int main() {
  char arr[100];
  int number;
  std::cout << "How many symbols will be in your string?(to find the numbers betwen the letters) " << std::endl;
  std::cin >> number;
  for (int i = 0; i < number; ++i) {
    std::cin >> arr[i];
  }
  std::cout << "number is - ";
  for (int i = 0; i < number; ++i) {
    if (arr[i] > 48 && arr[i] < 57) {
      std::cout << arr[i] << ", ";
    }
  }
  return 0;
}