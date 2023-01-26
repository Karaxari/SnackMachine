#pragma once
#include "SnackSlot.h"

namespace market 
{
	class VendingMachine
	{
		int slotCount;
		SnackSlot* machine;
		int sizeMachine;

	public:
		VendingMachine() = default;
		VendingMachine(int count);
		~VendingMachine() = default;

		void addSlot(const SnackSlot* snackSlot);
		void deleteSnack(const char* nameSnack);
		void outSnack();
		void outSnack(const int index);
		const Snack& getSnack(const char* nameSnack);
		const int& getSizeMachine();
		const int& getCountSnack();
		void getQuantitativeInformation();
	};
}

