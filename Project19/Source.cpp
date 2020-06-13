#include<iostream>
#include"Time.h"
using namespace std;


int main() {
	Time t1(22,13,47), t2(26, 50, 85), t3(5555),t4(259400), t6;
	cout << "T1: ";
	t1.Print();
	cout << "\nT2: ";
	t2.Print();
	cout << "\nT3: ";
	t3.Print();
	cout << "\nT4: ";
	t4.Print();
	t6 = t1 + t4;
	cout << "\nT1 + T4: ";
	t6.Print();
	t6 = t1 - t4;
	cout << "\nT1 - T4: ";
	t6.Print();
	t6 = t4 - t1;
	cout << "\nT4 - T1: ";
	t6.Print();
	t6 = t2 / t4;
	cout << "\nT2 / T4: ";
	t6.Print();
	t6 = t2 * t4;
	cout << "\nT2 * T4: ";
	t6.Print();
	cout << "\nT1 == T2? " << boolalpha << (t1 == t2) << endl;
	cout << "\nT3 != T4? " << boolalpha << (t3 != t4) << endl;
	cout << "\nT3 > T1? " << boolalpha << (t3 > t1) << endl;
	cout << "\nT2 < T1? " << boolalpha << (t2 < t1) << endl;
	cout << "\nT1 >= T2? " << boolalpha << (t1 >= t2) << endl;
	cout << "\nT2 <= T3? " << boolalpha << (t2 <= t3) << endl;

	return 0;
}