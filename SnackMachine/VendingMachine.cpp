#include "VendingMachine.h"

namespace market 
{
	VendingMachine::VendingMachine(int count) {
		slotCount = count;
		sizeMachine = 0;
		machine = new SnackSlot[count];
	}

	void VendingMachine::addSlot(const SnackSlot* snackSlot) {
		if (sizeMachine < slotCount) {
			machine[sizeMachine] = snackSlot;
			sizeMachine++;
		}
		else {
			cout << "������� ����������, ��� ����� ��� ����� ������! \n";
			delete& snackSlot;
		}
	}

	void VendingMachine::deleteSnack(const char* nameSnack) {
		for (int i = 0; i < sizeMachine; i++) {
			int index = 0;
			for (; index < machine[i].getSizeSlot(); index++) {
				if (machine[i].deleteSnack(nameSnack))
					return;
			}
		}
	}

	const Snack& VendingMachine::getSnack(const char* nameSnack) {
		for (int i = 0; i < sizeMachine; i++) {
			cout << "����� ����� � " << i << " �� ����� ������� \n";
			machine[i].getSnack(nameSnack);
		}

		//cout << "� ����� �� ������ ������ ���� " << nameSnack << endl;
		return nullptr;
	}

	const int& VendingMachine::getSizeMachine() {
		return sizeMachine;
	}

	const int& VendingMachine::getCountSnack() {
		int count = 0;
		for (int i = 0; i < sizeMachine; i++) {
			count += machine[i].getSizeSlot();
		}
		return count;
	}

	void VendingMachine::getQuantitativeInformation() {
		int countSnack = 0;
		int numberOfSlots = 0;
		for (int i = 0; i < sizeMachine; i++) {
			countSnack += machine[i].getSizeSlot();
			numberOfSlots += machine[i].getSnackCount();
		}

		cout << "\n� ������� ������� " << countSnack << " ������ �� " << numberOfSlots << " ���������! \n\n";
	}

	void VendingMachine::outSnack() {
		for (int i = 0; i < sizeMachine; i++) {
			machine[i].outSnack();
		}
	}

	void VendingMachine::outSnack(const int index) {
		if (index > -1 && index < sizeMachine) {
			machine[index].outSnack();
		}
		else {
			cout << "������ ������������ ������! \n";
		}
	}
}
