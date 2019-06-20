#include "PancakeHouseMenu.h"

PancakeHouseMenu::PancakeHouseMenu() {
	addItem("K&B's Pancake Breakfast", "Pancakes with scrambled eggs, and toast", true, 2.99);
	addItem("Regular Pancake Breakfast", "Pancakes with fried eggs, sausage", false, 2.99);
	addItem("Blueberry Pancake", "Pancakes made with fresh blueberries", true, 3.49);
	addItem("Waffles", "Waffles, with your choice of blueberries or strawberries", true, 3.59);
}

void PancakeHouseMenu::addItem(const std::string& itemname, const std::string& desc, bool vege, double price)
{
	MenuItem menuItem(itemname, desc, vege, price);
	m_MenuItems.push_back(menuItem);
}

std::vector<MenuItem> PancakeHouseMenu::getMenuItems() const
{
	return m_MenuItems;
}

PancakeHouseMenu::~PancakeHouseMenu()
{
}
