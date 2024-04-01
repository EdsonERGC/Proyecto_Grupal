#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

enum Choice {
    ROCK, PAPER, SCISSORS,
};

const string choice_names[] = {"piedra", "papel", "tijeras"};

Choice get_random_choice() {
    return static_cast<Choice>(rand() % 3);
}

int main() {
    srand(time(0));

    int user_choice;

    while (true) {
        cout << "\nElige entre piedra (0), papel (1), o tijeras (2): ";

        if (!(cin >> user_choice) || user_choice < 0 || user_choice > 2) {
            cout << "Opción inválida. Intente nuevamente..." << endl;
            cin.ignore();
            continue;
        }
        break;
    }

    Choice computer_choice = get_random_choice();
    string computer_choice_name = choice_names[computer_choice];

    string user_choice_name = choice_names[user_choice];

    if (user_choice == static_cast<int>(computer_choice)) {
        cout << "Empate. Usted ha elegido " << user_choice_name << " y la computadora ha elegido " << computer_choice_name << "." << endl;
    } else if ((user_choice - computer_choice + 3) % 3 == 2) {
        cout << "¡Ganaste! Has elegido " << user_choice_name << " y la computadora ha elegido " << computer_choice_name << "." << endl;
    } else {
        cout << "Perdiste. Has elegido " << user_choice_name << " y la computadora ha elegido " << computer_choice_name << "." << endl;
    }

    return 0;
}
