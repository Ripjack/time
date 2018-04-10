#include <iostream>
#include <ctime>
int main()
{
	std::time_t unixTimeObj;
	struct std::tm * gmtTime;
	char buffer[20];
	std::time(&unixTimeObj);
	gmtTime = std::gmtime(&unixTimeObj);
	int yearDayUTC = gmtTime->tm_yday + 1;
	std::strftime(buffer, 20, "UTC: %H:%M:%S", gmtTime);
	std::cout << buffer << std::endl;
	std::cout << "Unix Time: " << unixTimeObj << std::endl;
	std::cout << "julian date: " << yearDayUTC << std::endl;
	return 0;
}
