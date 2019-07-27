#pragma once
#include "Subject.h"
#include <vector>

class WeatherData : public ISubject
{
public:
	WeatherData();

	void registerObserver(std::shared_ptr<IObserver> p) override;
	void removeObserver(std::shared_ptr<IObserver> p) override;
	void notifyObserver() override;

	float getTemperature() const;
	float getHumidty() const;
	float getPressure() const;

	void measturentsChanged();

	~WeatherData();

private:
	std::vector<std::shared_ptr<IObserver> > m_Observers;

	float m_Tempearture;
	float m_Humidty;
	float m_Pressure;
};

