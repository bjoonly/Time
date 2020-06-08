#include "Time.h"

void Time::Zero(int num) const{
	if (num < 10)
		cout << 0;
}

int Time::ConvertToSeconds() const{
	return hours * 3600 + minutes * 60 + seconds;

}

void Time::CorrectTime() {
	if (seconds > 59){
		minutes += seconds / 60;
		seconds %= 60;
	}

	if (minutes > 59) {
		hours += minutes / 60;
		minutes %= 60;
	}
	if(hours>23)
	hours %= 24;
}

Time::Time():hours(0),minutes(0),seconds(0){}

Time::Time(int seconds){
	if (seconds < 0)
		seconds = 0;
	hours = seconds / 3600;
	minutes = (seconds - hours * 3600) / 60;
	this->seconds = seconds - hours * 3600 - minutes * 60;
	CorrectTime();
}

 Time::Time(int hours, int minutes, int seconds){

	 if (hours < 0)
		 hours = 0;
	 this->hours = hours;

	 if (minutes < 0)
		 minutes = 0;
	 this->minutes = minutes;

	 if (seconds < 0)
		 seconds = 0;
	this->seconds = seconds;

	CorrectTime();
}

void Time::Print() const{
	Zero(hours);
	cout << hours << ":";
	Zero(minutes);
	cout << minutes << ":";
	Zero(seconds);
	cout << seconds << endl;
}

void Time::AddSecond(){
	++seconds;
	CorrectTime();
}

Time Time::operator+(const Time& t2) const{
	return Time(ConvertToSeconds() + t2.ConvertToSeconds());
}

Time Time::operator-(const Time& t2) const{
	int sec = ConvertToSeconds() - t2.ConvertToSeconds();
	if (sec < 0)
		sec = 86400 + sec;
	Time res(sec);
	return res;
}

Time Time::operator*(const Time& t2) const{
	return Time(ConvertToSeconds() * t2.ConvertToSeconds());
}

Time Time::operator/(const Time& t2) const{
	if (t2.ConvertToSeconds() == 0)
		return Time();
	    return Time(ConvertToSeconds() / t2.ConvertToSeconds());

}

bool Time::operator>(const Time& t2) const{
	return ConvertToSeconds() > t2.ConvertToSeconds();
}

bool Time::operator<(const Time& t2) const{
	return ConvertToSeconds() < t2.ConvertToSeconds();
}

bool Time::operator>=(const Time& t2) const{
	return ConvertToSeconds() >= t2.ConvertToSeconds();
}

bool Time::operator<=(const Time& t2) const{
	return ConvertToSeconds() <= t2.ConvertToSeconds();
}

bool Time::operator==(const Time& t2) const{
	return ConvertToSeconds() == t2.ConvertToSeconds();
}

bool Time::operator!=(const Time& t2) const{
	return ConvertToSeconds() != t2.ConvertToSeconds();
}

void Time::SetHours(int hours){
	this->hours = hours;
	CorrectTime();
}

void Time::SetMinutes(int minutes){
	this->minutes = minutes;
	CorrectTime();
}

void Time::SetSeconds(int seconds){
	this->seconds = seconds;
	CorrectTime();
}

void Time::SetAll(int hours, int minutes, int seconds){
	SetHours(hours);
	SetMinutes(minutes);
	SetSeconds(seconds);
}

int Time::GetHours() const{
	return hours;
}

int Time::GetMinutes() const{
	return minutes;
}

int Time::GetSeconds() const{
	return seconds;
}
