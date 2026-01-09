#include <iostream>
using namespace std;

/*
    Class Name: CatBoxing
    Description: Simulates a fictional cat boxing competition
*/
class CatBoxing {
public:
    // Displays the introduction
    void showIntroduction() {
        cout << "==============================" << endl;
        cout << "   CAT BOXING COMPETITION" << endl;
        cout << "==============================" << endl;
        cout << "A playful and fictional activity inspired by cats." << endl;
        cout << endl;
    }

    // Checks the behavior of the cat
    void checkBehavior(int behavior) {
        if (behavior == 1) {
            cout << "Behavior: Playful boxing (gentle swats)." << endl;
        } else if (behavior == 2) {
            cout << "Behavior: Aggressive! Stop the match immediately." << endl;
        } else {
            cout << "Behavior: Invalid input." << endl;
        }
    }

    // Displays the selected technique
    void showTechnique(int choice) {
        cout << "Technique Selected: ";
        switch (choice) {
            case 1:
                cout << "Quick Paw Swipe" << endl;
                break;
            case 2:
                cout << "Double-Paw Batting" << endl;
                break;
            case 3:
                cout << "Dodge and Step Back" << endl;
                break;
            default:
                cout << "Invalid technique." << endl;
        }
    }
};

int main() {
    CatBoxing cat;
    int behavior, technique;

    cat.showIntroduction();

    cout << "Enter behavior (1-Playful, 2-Aggressive): ";
    cin >> behavior;
    cat.checkBehavior(behavior);

    cout << endl;
    cout << "Choose technique:" << endl;
    cout << "1 - Quick Paw Swipe" << endl;
    cout << "2 - Double-Paw Batting" << endl;
    cout << "3 - Dodge and Step Back" << endl;
    cout << "Enter choice: ";
    cin >> technique;

    cat.showTechnique(technique);

    cout << endl << "Program finished successfully." << endl;
    return 0;
}