#include "VendingMachine.h"

using namespace market;

int main()
{
    setlocale(LC_ALL, "rus");
    Snack *snack1 = new Snack("Snikers", 128, 5.5);
    Snack *snack2 = new Snack("Mars", 116, 5.2);
    Snack *snack3 = new Snack("Baunty", 98, 4.8);

    //std::cout << *snack1;
    //snack1 = snack2;
    //std::cout << *snack1;

    SnackSlot *snackSlot1 = new SnackSlot(10);
    snackSlot1->addSnack(snack1);
    snackSlot1->addSnack(snack2);
    snackSlot1->addSnack(snack1);
    snackSlot1->addSnack(snack2);

    SnackSlot *snackSlot2 = new SnackSlot(8);
    snackSlot2->addSnack(snack1);
    snackSlot2->addSnack(snack2);
    snackSlot2->addSnack(snack3);

    SnackSlot* snackSlot3 = new SnackSlot(6);
    snackSlot3->addSnack(snack1);
    snackSlot3->addSnack(snack2);

    VendingMachine *machine = new VendingMachine(4);
    machine->addSlot(snackSlot1);
    machine->addSlot(snackSlot2);
    machine->addSlot(snackSlot3);

    machine->getQuantitativeInformation();
    cout << "\n --------------------------------------------------------- \n";

    machine->outSnack(0);
    machine->deleteSnack("Mars");
    machine->deleteSnack("Mars");
    machine->outSnack(0);
    cout << "\n --------------------------------------------------------- \n";

    //snackSlot2->getSnack("Baunty");
    machine->getSnack("Baunty");

    //cout << machine->getSizeMachine() << endl;
    //cout << machine->getCountSnack() << endl;

    machine->getQuantitativeInformation();

    delete machine;
    delete snackSlot1;
    delete snackSlot2;
    delete snackSlot3;
    delete snack1;
    delete snack2;
    delete snack3;
}