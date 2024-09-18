/*
Title:  	Program 1
Author:		Aiden Pell
Date:		09/25/24	
Purpose:	This program uses information about flying saucers input by the user to determine if the user should blast the saucer or not.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string gameMaster;
    float saucerDistance = 0;
    float saucerSpeed = 0;
    float timeToCrowd = 0;
    int saucersShot = 0;
    char anotherSaucer;

    cout << setw(28) << setfill('*') << "" << endl;
    cout << "** ALIEN BLASTER SHOWDOWN **" << endl;
    cout << setw(28) << setfill('*') << "" << endl;

    cout << endl << "Enter your name as the Game Master: ";
    cin >> gameMaster;
    cout << endl << "Welcome, Game Master " << gameMaster << ", to the Alien Blaster Showdown!" << endl;
    while(true) {
        cout << endl << "Enter the distance of the alien saucer in meters: ";
        cin >> saucerDistance;
        cout << "Enter the speed of the alien saucer in meters per second: ";
        cin >> saucerSpeed;
        timeToCrowd = saucerDistance / saucerSpeed;
        cout << endl << "Alien saucer detected! Time until it reaches the crowd: " << fixed << setprecision(2) << timeToCrowd << " seconds." << endl;
        if (timeToCrowd < 5) {
            cout << "Blast it with foam cannons! It's zooming in too fast!";
            saucersShot++;
        }
        else if (timeToCrowd < 15) {
            cout << "Hold fire! Let's cheer for the saucer as it zooms by!";
        }
        else {
            cout << "No need to worry, it's just hovering around. Keep enjoying the show!";
        }
        cout << endl << "Is there another saucer approaching? (y/n): ";
        cin >> anotherSaucer;
        if (anotherSaucer == 'n') {
            break;
        }
    }
    cout << endl << endl << "The Alien Blaster Showdown has ended! You tracked " << saucersShot << " saucers.";
    if (saucersShot > 7) {
        cout << endl << "That was intense! The crowd loved it! 10/10 entertainment!";
    }
}