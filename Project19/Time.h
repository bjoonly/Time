#pragma once
#include<iostream>
using namespace std;
class Time{
	 int hours;
	 int minutes;
	int seconds;
	void Zero(int num)const;
	int ConvertToSeconds()const;
	void CorrectTime();
public:
	Time();
	explicit Time(int seconds);
	explicit Time( int hours , int minutes , int seconds );

	void Print()const;

	void AddSecond();

	Time operator+(const Time& t2)const;
	Time operator-(const Time& t2)const;

	Time operator*(const Time& t2)const;
	Time operator/(const Time& t2)const;

	bool operator>(const Time& t2)const;
	bool operator<(const Time& t2)const;

	bool operator>=(const Time& t2)const;
	bool operator<=(const Time& t2)const;

	bool operator==(const Time& t2)const;
	bool operator!=(const Time& t2)const;

	void SetHours(int hours);
	void SetMinutes(int minutes);
	void SetSeconds(int seconds);
	void SetAll(int hours, int minutes, int seconds);

	int GetHours()const;
	int GetMinutes()const;
	int GetSeconds()const;

};

