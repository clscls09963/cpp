#include "Hari.hpp"

void Hari::complain(std::string _level)
{
	for (int i = 0; i < 4 ; i++)
	{
		if (stat[i].name == _level)
		{
			(this->*(stat[i].ptr))();
		}
	}
}

Hari::Hari(void)
{
	init();
}

void Hari::init(void)
{
	stat[0].name = "debug";
	stat[0].ptr = &Hari::debug;
	stat[1].name = "info";
	stat[1].ptr = &Hari::info;
	stat[2].name = "warning";
	stat[2].ptr = &Hari::warning;
	stat[3].name = "error";
	stat[3].ptr = &Hari::error;
}

void Hari::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Hari::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Hari::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Hari::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;

}