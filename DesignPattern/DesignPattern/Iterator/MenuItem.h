#pragma once
#include <string>
class MenuItem
{
public:
	MenuItem() = delete;
	MenuItem(std::string name, std::string desc, bool vege, double price);

	std::string getName() const;
	std::string getDesciption() const;
    double getPrice() const;

	bool isVegetarain() const;


private:
	std::string m_Name;
	std::string m_Description;
	bool m_Vegetarian;
	double m_Price;
};

