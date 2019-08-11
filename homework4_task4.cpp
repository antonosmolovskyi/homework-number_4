#include <iostream>

int main() {
  char arr[100];
  char arrTemp[100];
  int number;
  std::cout << "How many symbols will be in you string?(to reverse her) " << std::endl;
  std::cin >> number;
  int number1 = number;
  std::cout << "Enter your string " << std::endl;
  int i;
  for (i = 0; i < number; ++i) {
    std::cin >> arr[i];
  }
  for (int j = 0; j < i; ++j, --i) {
    char temp = arr[i - 1];
    arr[i - 1] = arr[j];
    arr[j] = temp;
  }
  for (int k = 0; k < number1; ++k) {
    std::cout << arr[k];
  }
  std::cout << std::endl;
  return 0;
}