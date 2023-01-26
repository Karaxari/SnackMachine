#include "SnackSlot.h"

namespace market {
	SnackSlot::SnackSlot(int count) {
		snackCount = count;
		sizeSlot = 0;
		snackSlot = new Snack[count];
	}


	void SnackSlot::operator=(const SnackSlot* slot) {
		this->snackCount = slot->snackCount;
		this->sizeSlot = slot->sizeSlot;
		this->snackSlot = slot->snackSlot;
	}

	void SnackSlot::addSnack(const Snack* snack) {
		if (sizeSlot < snackCount) {
			snackSlot[sizeSlot] = snack;
			sizeSlot++;
		}
		else {
			cout << "Слот переполнен, попробуйте добавить новый слот! \n";
			delete& snack;
		}
	}

	bool SnackSlot::deleteSnack(const char* nameSnack) {
		int index = 0;
		for (; index < sizeSlot; index++) {
			if (snackSlot[index].getSnackName() == nameSnack) {
				cout << "Снек " << nameSnack << " удален по индексу " << index << "\n\n";

				Snack* tmpSnackSlot = new Snack[sizeSlot - 1];

				int j = 0;
				for (int i=0; i < sizeSlot; i++) {
					if (i == index)
						continue;

					tmpSnackSlot[j] = snackSlot[i];
					j++;
				}

				delete snackSlot;
				snackSlot = tmpSnackSlot;
				sizeSlot--;
				return true;
			}
		}
		return false;
	}

	const Snack& SnackSlot::getSnack(int index) {
		if (index > -1 && index < snackCount) {
			if (index <= sizeSlot) {
				cout << "Вы выбрали снек под индексом: " << index << endl;
				cout << snackSlot[index];
				return snackSlot[index];
			}
			else {
				cout << "Слот под идексом: " << index << " В данный момент пуст \n\n";
			}
		}
		else {
			cout << "В автомате не существует слот под идексом: " << index << "\n\n";
		}
		return nullptr;
	}

	const Snack& SnackSlot::getSnack(const char* nameSnack) {
		for (int index = 0; index < sizeSlot; index++) {
			if (snackSlot[index].getSnackName() == nameSnack) {
				cout << "В слоте имеется данный снек под индексом: " << index << endl;
				cout << snackSlot[index];
				return snackSlot[index];
			}
		}

		cout << "В слоте не найден данный снек " << nameSnack << "\n\n";
		return nullptr;
	}

	const int& SnackSlot::getSizeSlot() {
		return sizeSlot;
	}

	const int& SnackSlot::getSnackCount() {
		return snackCount;
	}

	void SnackSlot::outSnack() {
		for (int i = 0; i < sizeSlot; i++) {
			cout << snackSlot[i];
		}
	}
}
