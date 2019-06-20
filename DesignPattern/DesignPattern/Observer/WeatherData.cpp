#include "WeatherData.h"

WeatherData::WeatherData() : 
	m_Observers(), m_Tempearture(0.0),m_Humidty(0.0),m_Pressure(0.0)
{
}

void WeatherData::registerObserver(std::shared_ptr<IObserver> p)
{
}

void WeatherData::removeObserver(std::shared_ptr<IObserver> p)
{
}

void WeatherData::notifyObserver()
{
}

float WeatherData::getTemperature() const
{
	return 0.0f;
}

float WeatherData::getHumidty() const
{
	return 0.0f;
}

float WeatherData::getPressure() const
{
	return 0.0f;
}

void WeatherData::measturentsChanged()
{
}

WeatherData::~WeatherData()
{
}


