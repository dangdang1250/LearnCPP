#include "MenuItem.h"

MenuItem::MenuItem(std::string name, std::string desc, bool vege, double price)
	:m_Name(name), m_Description(desc), m_Vegetarian(vege), m_Price(price)
{
}

std::string MenuItem::getName() const
{
	return m_Name;
}

std::string MenuItem::getDesciption() const
{
	return m_Description;
}

double MenuItem::getPrice() const
{
	return m_Price;
}

bool MenuItem::isVegetarain() const
{
	return m_Vegetarian;
}
