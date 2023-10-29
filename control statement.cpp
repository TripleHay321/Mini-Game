#include <iostream>
#include<cstdlib>
using namespace std;

int main() {
    int points = 0;
    int k = 0;
    int a[5][3] = {
        {rand() % 100, rand() % 100, rand() % 100},
        {rand() % 100, rand() % 100, rand() % 100},
        {rand() % 100, rand() % 100, rand() % 100},
        {rand() % 100, rand() % 100, rand() % 100},
        {rand() % 100, rand() % 100, rand() % 100}
    };
    int user_input;
    while (k < 3) {
        cout << "Each Win equals 5 points\nEnter a number:    ";
        cin >> user_input;
        int first_check = 0;
        if (user_input == a[0][first_check]) {
            points += 5;
            cout << "You Won\nYou've " << points << " points\n\n";
        }
        else if (user_input == a[0][first_check + 1]) {
            points += 5;
            cout << "You Won\nYou've " << points << " points\n\n";
        }
        else if (user_input == a[0][first_check + 2]) {
            points += 5;
            cout << "You Won\nYou've " << points << " points\n\n";
        }
        else if (user_input == a[1][first_check]) {
            points += 5;
            cout << "You Won\nYou've " << points << " points\n\n";
        }
        else if (user_input == a[1][first_check + 1]) {
            points += 5;
            cout << "You Won\nYou've " << points << " points\n\n";
        }
        else if (user_input == a[1][first_check + 2]) {
            points += 5;
            cout << "You Won\nYou've " << points << " points\n\n";
        }
        else if (user_input == a[2][first_check]) {
            points += 5;
            cout << "You Won\nYou've " << points << " points\n\n";
        }
        else if (user_input == a[2][first_check + 1]) {
            points += 5;
            cout << "You Won\nYou've " << points << " points\n\n";
        }
        else if (user_input == a[2][first_check + 2]) {
            points += 5;
            cout << "You Won\nYou've " << points << " points\n\n";
        }
        else if (user_input == a[3][first_check]) {
            points += 5;
            cout << "You Won\nYou've " << points << " points\n\n";
        }
        else if (user_input == a[3][first_check + 1]) {
            points += 5;
            cout << "You Won\nYou've " << points << " points\n\n";
        }
        else if (user_input == a[3][first_check + 2]) {
            points += 5;
            cout << "You Won\nYou've " << points << " points\n\n";
        }
        else if (user_input == a[4][first_check]) {
            points += 5;
            cout << "You Won\nYou've " << points << " points\n\n";
        }
        else if (user_input == a[4][first_check + 1]) {
            points += 5;
            cout << "You Won\nYou've " << points << " points\n\n";
        }
        else if (user_input == a[4][first_check + 2]) {
            points += 5;
            cout << "You Won\nYou've " << points << " points\n\n";
        }
        else {
            cout << "You lost\n\n";
        }
        k += 1;
    }
    cout << "Total Points = " << points << endl;
}
