#include <iostream>

void func();

int main(){
	std::cout << "Hello world!" << std::endl;
	std::cout << "Goodbye world!" << std::endl;

	func();

	return 0;
}
void func(){
	std::cout << "Hm..." << std::endl;
}
