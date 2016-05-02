#include <iostream>
#include <lColors\lColors.h>

int main() {
	std::cout << "tak" << std::endl;
	lColors::SetColor(lColors::YELLOW, lColors::BLACK, 1, 0);
	std::cout << "tak" << std::endl;

	lColors::SetDefaultColor();
	system("PAUSE");
	return 0;
}