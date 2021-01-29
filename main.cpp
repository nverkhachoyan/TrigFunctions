#include <iostream>
#include <cmath>

int main() {
  char oneMore = 'Y';
  char valueType;
  const double PI = 3.14159265359;
  double value;


  do {
    std::cout << "Degrees or Radians? (D/R):  ";
    std::cin >> valueType;
    std::cout << "Type your value: ";
    std::cin >> value;

    if (toupper(valueType) == 'D') {
      std::cout << std::fixed << sin(value*PI/180) << '\n';
    } else if (toupper(valueType) == 'R') {
      std::cout << std::fixed << sin(value) << '\n';
    }


    std::cout << "\x1b[32m Another one? (Y/N): \x1b[0m ";
    std::cin >> oneMore;
  } while(toupper(oneMore) == 'Y');

  return 0;
}
