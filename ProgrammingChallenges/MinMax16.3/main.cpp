#include <iostream>

// Template for minimum function
template <typename T>
T minimum(T a, T b)
{
  return (a < b) ? a : b;
}

// Template for maximum function
template <typename T>
T maximum(T a, T b)
{
  return (a > b) ? a : b;
}

int main()
{
  // Test with integers
  int int_a = 4, int_b = 7;
  std::cout << "Minimum of " << int_a << " and " << int_b << " is: " << minimum(int_a, int_b) << std::endl;
  std::cout << "Maximum of " << int_a << " and " << int_b << " is: " << maximum(int_a, int_b) << std::endl;

  // Test with floating-point numbers
  double double_a = 5.5, double_b = 2.3;
  std::cout << "Minimum of " << double_a << " and " << double_b << " is: " << minimum(double_a, double_b) << std::endl;
  std::cout << "Maximum of " << double_a << " and " << double_b << " is: " << maximum(double_a, double_b) << std::endl;

  // Test with characters
  char char_a = 'a', char_b = 'z';
  std::cout << "Minimum of '" << char_a << "' and '" << char_b << "' is: '" << minimum(char_a, char_b) << "'" << std::endl;
  std::cout << "Maximum of '" << char_a << "' and '" << char_b << "' is: '" << maximum(char_a, char_b) << "'" << std::endl;

  return 0;
}
