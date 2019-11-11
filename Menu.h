
#ifndef SERVICES_H
#define SERVICES_H
#include<string>

class Menu 
{
	private:
		int getDisplayInputWithString(const std::string& input);

	public:
		Menu();
		int displayMenu();
		int displayRegisterpet();
		int displayReleasepet();
		int displayfeed();
		int displaywalk();
		int displayspeak();
};

#endif // MENU_H