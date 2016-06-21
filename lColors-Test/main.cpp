#include <iostream>
#include <lColors\lColors.h>

int main() {
	std::cout << "tak" << std::endl;
	lColors::SetColor(lColors::BLUE, lColors::BLACK);
	std::cout << "tak" << std::endl;

	lColors::SetDefaultColor();
	system("PAUSE");
	return 0;
}