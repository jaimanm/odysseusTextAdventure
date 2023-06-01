#include <iostream>

int main() {
  std::cout << "Hello World!\n";
	std::cout << "What is your name?\n";
	std::string userName;
	std::cin >> userName;
	std::cout << "Nice to meet you, " + userName + "!\n";
}