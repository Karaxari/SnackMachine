#include "Snack.h"

namespace market {
	Snack::Snack(const char* name) {
		snackName = name;
	}

	Snack::Snack(const char* name, int calory, double price) {
		snackName = name;
		snackCalory = calory;
		snackPrice = price;
	}

	void Snack::setSnackName(const char* name) {
		snackName = name;
	}
	void Snack::setSnackCalory(int calory) {
		snackCalory = calory;
	}
	void Snack::setSnackPrice(double price) {
		snackPrice = price;
	}

	const char *Snack::getSnackName() const
	{
		return snackName;
	}

	int Snack::getSnackCalory() const
	{
		return snackCalory;
	}

	double Snack::getSnackPrice() const
	{
		return snackPrice;
	}

	void Snack::operator=(const Snack* snack) {
		this->snackName = snack->snackName;
		this->snackCalory = snack->snackCalory;
		this->snackPrice = snack->snackPrice;
	}

	ostream& operator<<(ostream& output, const Snack& snack) {
		output << "Наименование снека: " << snack.snackName << endl
			<< "Количество калорий: " << snack.snackCalory << endl
			<< "Цена за штуку: " << snack.snackPrice << "\n\n";
		return output;
	}
}
