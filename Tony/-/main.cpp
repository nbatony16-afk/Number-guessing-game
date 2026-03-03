#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

srand(time(0)); // Seed random generator
int secretNumber = rand() % 100 + 1; // Number between 1 and 100
int guess;
int attempts = 0;
cout << " Welcome to the Number Guessing Game!\n";
cout << "I have selected a number between 1 and 100.\n";
do {
cout << "\nEnter your guess: ";
cin >> guess;
attempts++;
if (guess > secretNumber) {
cout << "Too high! Try again.";
}
else if (guess < secretNumber) {
cout << "Too low! Try again.";
}
else {
cout << "\n--------- Correct! You guessed it in " << attempts << " attempts.\n";
}
} while (guess != secretNumber);
return 0;
}

