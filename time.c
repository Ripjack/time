#include <stdio.h>
#include <time.h>
int main()
{	
	char buffer[20];
	time_t nowObject;
	struct tm * utcTime;
	int yearDayUTC;
	time(&nowObject);
	utcTime = gmtime(&nowObject);
	yearDayUTC = utcTime->tm_yday+1;
	printf("UNIX: %d\n", nowObject);
	strftime(buffer, 20, "UTC: %H:%M:%S", utcTime);
	printf("%s\n", buffer);
	printf("julian date: %d\n", yearDayUTC);
	return 0;
}
