#include <iostream>

#include "settings.hpp"

int main()
{
	Settings settings;
	settings.width = 800;
	settings.height = 600;

	std::cout << settings << "\n";
}
