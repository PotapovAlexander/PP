#pragma once
class time
{
private:
	long hours;
	unsigned char minutes; 
public:
	void setTime(long nHours, unsigned char nMinutes) 
	{
		hours = nHours;
		minutes = nMinutes;
	};
	time operator+ (time& plusTime);
	time operator- (time& minTime);
	time operator* (const int& umTime);
	bool operator<(time& Time);
	bool operator>(time& Time);
	void print();
};

