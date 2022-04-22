#include <iostream>
using namespace std;

class Hari{
	typedef struct s_status
	{
		std::string name;
		void(Hari::*ptr)(void);
	}	t_status;
public:
	void complain(std::string _level);
	Hari(void);

private:
	t_status stat[4];
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

	void init(void);
};
