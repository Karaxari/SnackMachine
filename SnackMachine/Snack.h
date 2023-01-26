#pragma once
#include<iostream>
using namespace std;

namespace market {
	class Snack
	{
		const char *snackName;
		int snackCalory;
		double snackPrice;

	public:
		Snack() = default;
		Snack(const char* name);
		Snack(const char* name, int calory, double price);

		~Snack() = default;

		void operator=(const Snack* snack);
		friend ostream& operator<<(ostream& output, const Snack& snack);

		void setSnackName(const char* name);
		void setSnackCalory(int calory);
		void setSnackPrice(double price);

		const char *getSnackName() const;
		int getSnackCalory() const;
		double getSnackPrice() const;

	};
}

