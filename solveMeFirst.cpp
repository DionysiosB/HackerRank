#include <cstdio>
#include <iostream>

int solveMeFirst(int a, int b) {return a+b;}

int main() {
  int num1, num2;
    
  std::cin >> num1 >> num2;
  std::cout << solveMeFirst(num1, num2) << std::endl;
    
  return 0;
}
