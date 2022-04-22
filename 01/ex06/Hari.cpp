#include "Hari.hpp"

void Hari::complain(std::string _level)
{
	int i = 0;
	while (i < 4)
	{
		if (stat[i].name == _level)
			break;
		i++;
	}

	if (i == 4)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	else
	{
		switch (i)
		{
			case 0:
				(this->*(stat[i].ptr))();
				i++;
			case 1:
				(this->*(stat[i].ptr))();
				i++;
			case 2:
				(this->*(stat[i].ptr))();
				i++;
			case 3:
				(this->*(stat[i].ptr))();
			break;
		}
	}
}

Hari::Hari(void)
{
	init();
}

void Hari::init(void)
{
	stat[0].name = "DEBUG";
	stat[0].ptr = &Hari::debug;
	stat[1].name = "INFO";
	stat[1].ptr = &Hari::info;
	stat[2].name = "WARNING";
	stat[2].ptr = &Hari::warning;
	stat[3].name = "ERROR";
	stat[3].ptr = &Hari::error;
}

void Hari::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl << std::endl;
}

void Hari::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl << std::endl;
}

void Hari::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl << std::endl;
}

void Hari::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl << std::endl;
}