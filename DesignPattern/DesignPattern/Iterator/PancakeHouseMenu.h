#pragma once
#include "MenuItem.h"
#include <vector>
#include <string>

class PancakeHouseMenu
{
	PancakeHouseMenu();

	void addItem(const std::string& itemname, const std::string& desc, bool vege, double price);

	std::vector<MenuItem> getMenuItems() const;

	~PancakeHouseMenu();
public:
private:
	std::vector<MenuItem> m_MenuItems;
};

