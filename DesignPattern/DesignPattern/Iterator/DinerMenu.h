#pragma once
// Different aproach
#include "MenuItem.h"
#include <array>
#include <string>

class DinerMenu
{
public:
	static const int MAX_ITEMS = 6;

private:
	int numberOfItems = 0;
	std::array<MenuItem> m_MenuItems;
};

