#include <iostream>
#include <string>

using namespace std;

// Function prototypes
void startGame();
void jungle();
void river();
void mountain();
void endGame();

int main() {
    startGame();
    return 0;
}

void startGame() {
    int choice;

    cout << "Welcome to Jungle Adventure El Maestro!" << endl;
    cout << "You find yourself at the edge of a dense jungle." << endl;
    cout << "Do you want to go into the jungle or head back home?" << endl;
    cout << "1. Enter the jungle" << endl;
    cout << "2. Go back home" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        jungle();
    } else {
        cout << "You decided to go back home. Thanks for playing!" << endl;
        endGame();
    }
}

void jungle() {
    int choice;

    cout << "You are now deep in the jungle. You come across three paths." << endl;
    cout << "Do you want to:" << endl;
    cout << "1. Follow the path to the river" << endl;
    cout << "2. Climb the mountain" << endl;
    cout << "3. Explore the dense jungle further" << endl;
    cout << "Enter your choice (1, 2, or 3): ";
    cin >> choice;

    switch (choice) {
        case 1:
            river();
            break;
        case 2:
            mountain();
            break;
        case 3:
            cout << "You got lost in the jungle and couldn't find your way back. Game Over." << endl;
            endGame();
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
            jungle();
            break;
    }
}

void river() {
    int choice;

    cout << "You arrive at a beautiful river. You can either swim across or follow the river." << endl;
    cout << "Do you want to:" << endl;
    cout << "1. Swim across" << endl;
    cout << "2. Follow the river" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "You tried to swim across but the current was too strong. Game Over." << endl;
            endGame();
            break;
        case 2:
            cout << "Following the river, you find a hidden treasure! You won!" << endl;
            endGame();
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
            river();
            break;
    }
}

void mountain() {
    int choice;

    cout << "You start climbing the mountain. After a long climb, you see a cave entrance." << endl;
    cout << "Do you want to:" << endl;
    cout << "1. Enter the cave" << endl;
    cout << "2. Continue climbing" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Inside the cave, you find ancient artifacts. You won!" << endl;
            endGame();
            break;
        case 2:
            cout << "You continued climbing but couldn't reach the summit. Game Over." << endl;
            endGame();
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
            mountain();
            break;
    }
}

void endGame() {
    cout << "Thanks for playing Jungle Adventure El Maestro!" << endl;
}
void hiddenTemple();
void ancientBridge();
void hiddenTemple() {
    int choice;

    cout << "You find a hidden temple deep in the jungle. Inside, you see two doors." << endl;
    cout << "Do you want to:" << endl;
    cout << "1. Open the left door" << endl;
    cout << "2. Open the right door" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "The left door leads to a room full of ancient artifacts. You’ve discovered treasure and won the game!" << endl;
            endGame();
            break;
        case 2:
            cout << "The right door opens to a room with a trap. You fall into a pit and the game ends." << endl;
            endGame();
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
            hiddenTemple();
            break;
    }
}

void ancientBridge() {
    int choice;

    cout << "You come across an ancient bridge over a chasm. The bridge looks unstable." << endl;
    cout << "Do you want to:" << endl;
    cout << "1. Cross the bridge carefully" << endl;
    cout << "2. Find another way around" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "You cross the bridge carefully and reach the other side safely. You find a hidden path leading to a safe camp!" << endl;
            endGame();
            break;
        case 2:
            cout << "You spend hours looking for another way and get lost. Game Over." << endl;
            endGame();
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
            ancientBridge();
            break;
    }
}