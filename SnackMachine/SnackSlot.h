#pragma once
#include "Snack.h"

namespace market {
	class SnackSlot
	{
		int snackCount;
		Snack *snackSlot;
		int sizeSlot;

	public:
		SnackSlot() = default;
		SnackSlot(int count);
		~SnackSlot() = default;

		void operator=(const SnackSlot* snackSlot);
		void addSnack(const Snack* snack);
		bool deleteSnack(const char* nameSnack);
		void outSnack();
		const Snack& getSnack(int index);
		const Snack& getSnack(const char *nameSnack);
		const int& getSizeSlot();
		const int& getSnackCount();
	};
}

