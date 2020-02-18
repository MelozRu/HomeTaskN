#pragma once
#include <iostream>
#include <clocale>        
using namespace std;
class Time
{
private:
  int hours;
  int minutes;
  int seconds;

public:
  void getTime(void);
  void putTime(void);
  void addTime(Time T1, Time T2);
};

void Time::getTime(void)
{
  cout << "Введите время:" << endl;
  cout << "Часы? ";    cin >> hours;
  cout << "Минуты? ";  cin >> minutes;
  cout << "Секунды? ";  cin >> seconds;
}

void Time::putTime(void)
{
  cout << endl;
  cout << "Время после сложения: ";
  cout << hours << ":" << minutes << ":" << seconds << endl;
}

void Time::addTime(Time T1, Time T2)
{

  this->seconds = T1.seconds + T2.seconds;
  this->minutes = T1.minutes + T2.minutes + this->seconds / 60;;
  this->hours = T1.hours + T2.hours + (this->minutes / 60);
  this->minutes %= 60;
  this->seconds %= 60;
}
