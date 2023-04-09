#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;


class NumberGame {
    public:
    int easyN;
    int mediumN;
    int hardN;
    static int highestScore;

    NumberGame(){
    srand(time(NULL));
    easyN = rand() % 15 + 1;
    mediumN = rand() % 20 + 1;
    hardN = rand() % 40 + 1;
    }

    void easyNumber(){
    int guess;
    int numberOfGuesses = 0;
    cout << ".......\n";
    cout << "Instructions\n";
    cout << "1-Guess the number between the range of 1 to 15.\n";
    cout << "2-You have total of 5 chances.\n";
    cout << "3-You can only make one guess at a time.\n";
    cout << ".......\n";

    for(int i=0; i<5; i++){
        cout << "Guess the number:\n";
        cin >> guess;
        numberOfGuesses++;

        if(guess == easyN){
            cout << "Congrats my guy!\n";
            if (numberOfGuesses < this->highestScore) {
                this->highestScore = numberOfGuesses;
            } 
            break;
        } else if(guess < easyN){
            cout << "Your guess is too low.. (You have " << (5-numberOfGuesses) <<" guesses left.)";
        } else {
            cout << "Your guess is too much.. (You have " << (5-numberOfGuesses) <<" guesses left.)";
        }
    }
    }

    void mediumNumber(){
    int guess;
    int numberOfGuesses = 0;
    cout << ".......\n";
    cout << "Instructions\n";
    cout << "1-Guess the number between the range of 1 to 20.\n";
    cout << "2-You have total of 4 chances.\n";
    cout << "3-You can only make one guess at a time.\n";
    cout << ".......\n";

    for(int i=0; i<4; i++){
        cout << "Guess the number:\n";
        cin >> guess;
        numberOfGuesses++;

        if(guess == mediumN){
            cout << "Congrats my guy!\n";
            if (numberOfGuesses < this->highestScore) {
                this->highestScore = numberOfGuesses;
            } 
            break;
        } else if(guess < mediumN){
            cout << "Your guess is too low.. (You have " << (4-numberOfGuesses) <<" guesses left.)";
        } else {
            cout << "Your guess is too much.. (You have " << (4-numberOfGuesses) <<" guesses left.)";
        }
    }
    }

    void hardNumber(){
    int guess;
    int numberOfGuesses = 0;
    cout << ".......\n";
    cout << "Instructions\n";
    cout << "1-Guess the number between the range of 1 to 40.\n";
    cout << "2-You have total of 3 chances.\n";
    cout << "3-You can only make one guess at a time.\n";
    cout << ".......\n";

    for(int i=0; i<3; i++){
        cout << "Guess the number:\n";
        cin >> guess;
        numberOfGuesses++;

        if(guess == hardN){
            cout << "Congrats my guy!\n";
            if (numberOfGuesses < this->highestScore) {
                this->highestScore = numberOfGuesses;
            } 
            break;
        } else if(guess < hardN){
            cout << "Your guess is too low.. (You have " << (3-numberOfGuesses) <<" guesses left.)";
        } else {
            cout << "Your guess is too much.. (You have " << (3-numberOfGuesses) <<" guesses left.)";
        }
    }
    }

    static int getHighestScore(){
    return highestScore;
    }
};

class LetterGame {
    public:
    int easyL;
    int mediumL;
    int hardL;
    static int highestScore;

    LetterGame(){
    srand(time(NULL));
    this->easyL = (rand() % 5);
    this->mediumL = (rand() % 20);
    this->hardL = (rand() % 25);
    }

    void easyLetter(){  
    string guess;
    int numberOfGuesses = 0;
    int index = 0;
    cout << ".......\n";
    cout << "Instructions\n";
    cout << "1-Guess the vowel letter.\n";
    cout << "2-You have total of 2 chances.\n";
    cout << "3-You can only make one guess at a time.\n";
    cout << ".......\n";
    string vowels[] = {"a", "e", "i", "o", "u", "y"};
    string secretVowel = vowels[this->easyL];
        
    for(int i=0; i<2; i++){
        cout << "Guess the letter: \n";
        cin >> guess;
        numberOfGuesses++;

        for(int j=0; j<6; j++){
            if(guess.compare(vowels[j]) == 0){
                index = j;
            }
        }

            if(guess.compare(secretVowel) == 0){
                cout <<"Congrats!\n";
                if (numberOfGuesses < this->highestScore) {
                    this->highestScore = numberOfGuesses;
                }    
                break;
            } else if(index<this->easyL){
                cout <<"Your guess is too low! (You have " << 2-numberOfGuesses <<" guesses left.)";
            } else{
                cout <<"Your guess is too much! (You have " << 2-numberOfGuesses <<" guesses left.)";
            }            
    }
    }

    void mediumLetter(){
    string guess;
    int numberOfGuesses = 0;
    int index = 0;
    cout << ".......\n";
    cout << "Instructions\n";
    cout << "1-Guess the consonant letter.\n";
    cout << "2-You have total of 4 chances.\n";
    cout << "3-You can only make one guess at a time.\n";
    cout << ".......\n";
    string consonants[] = {"b","c","d","f","g","h","j","k","l","m","n","p","q","r","s","t","v","w","x","y","z"};
    string secretConsonant = consonants[this->mediumL];
        
    for(int i=0; i<4; i++){
        cout << "Guess the letter: \n";
        cin >> guess;
        numberOfGuesses++;

        for(int j=0; j<21; j++){
            if(guess.compare(consonants[j]) == 0){
                index = j;
                }
            }

            if(guess.compare(secretConsonant) == 0){
                cout <<"Congrats!\n";
                if (numberOfGuesses < this->highestScore) {
                    this->highestScore = numberOfGuesses;
                } 
                break;
            } else if(index<this->mediumL){
                cout <<"Your guess is too low! (You have " << 4-numberOfGuesses <<" guesses left.)";
            } else{
                cout <<"Your guess is too much! (You have " << 4-numberOfGuesses <<" guesses left.)";
            }            
    }
    }

    void hardLetter(){
    string guess;
    int numberOfGuesses = 0;
    int index = 0;
    cout << ".......\n";
    cout << "Instructions\n";
    cout << "1-Guess the alphabet letter.\n";
    cout << "2-You have total of 5 chances.\n";
    cout << "3-You can only make one guess at a time.\n";
    cout << ".......\n";
    string letters[] = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
    string secretLetter = letters[this->hardL];
        
    for(int i=0; i<5; i++){
        cout << "Guess the letter: \n";
        cin >> guess;
        numberOfGuesses++;

        for(int j=0; j<26; j++){
            if(guess.compare(letters[j]) == 0){
                index = j;
                }
            }

            if(guess.compare(secretLetter) == 0){
                cout <<"Congrats!\n";
                if (numberOfGuesses < this->highestScore) {
                    this->highestScore = numberOfGuesses;
                } 
                break;
            } else if(index<this->hardL){
                cout <<"Your guess is too low! (You have " << 5-numberOfGuesses <<" guesses left.)";
            } else{
                cout <<"Your guess is too much! (You have " << 5-numberOfGuesses <<" guesses left.)";
            }
    }
    }

    static int getHighestScore(){
    return highestScore;
    }
    
};

int LetterGame::highestScore = 100;
int NumberGame::highestScore = 100;

int main() {
    NumberGame yes;
    LetterGame no;
    int choice;
    while (true) {
        cout << "MENU\n";
        cout << ".......\n";
        cout << "1-Number Guess\n";
        cout << "2-Letter Guess\n";
        cout << "3-Highest Scores\n";
        cout << "4-Credits\n";
        cout << "5-Exit\n";
        cout << ".......\n";
        cout << "Your Choice -> ";
        cin >> choice;
        switch (choice) {
            case 1: {
                while (true) {
                    cout << "Select the difficulty.\n";
                    cout << ".......\n";
                    cout << "1-Easy\n";
                    cout << "2-Medium\n";
                    cout << "3-Hard\n";
                    cout << "4-Go back\n";
                    cout << ".......\n";
                    cout << "Your Choice -> ";
                    cin >> choice;
                    switch (choice) {
                        case 1:
                            yes.easyNumber();
                            break;
                        case 2:
                            yes.mediumNumber();
                            break;
                        case 3:
                            yes.hardNumber();
                            break;
                        case 4:
                            break;
                        default:
                            cout << "Invalid choice. Please try again.\n";
                            break;
                    }
                    if (choice == 4) {
                        break;
                    }
                }
                break;
            }
            case 2: {
                while (true) {
                    cout << "Select the difficulty.\n";
                    cout << ".......\n";
                    cout << "1-Easy\n";
                    cout << "2-Medium\n";
                    cout << "3-Hard\n";
                    cout << "4-Go back\n";
                    cout << ".......\n";
                    cout << "Your Choice -> ";
                    cin >> choice;
                    switch (choice) {
                        case 1:
                            no.easyLetter();
                            break;
                        case 2:
                            no.mediumLetter();
                            break;
                        case 3:
                            no.hardLetter();
                            break;
                        case 4:
                            break;
                        default:
                            cout << "Invalid choice. Please try again.\n";
                            break;
                    }
                    if (choice == 4) {
                        break;
                    }
                }
                break;
            }
            case 3: {
                if(yes.highestScore != 100){
                    cout << "\"Number Guess\" Best Score: " << yes.highestScore << " chances used up.\n";
                }else{
                    cout << "\"Number Guess\" has not played yet.\n";
                }
                if(no.highestScore != 100){
                    cout << "\"Letter Guess\" Best Score: " << no.highestScore << " chances used up.\n";
                }else{
                    cout << "\"Letter Guess\" has not played yet.\n";
                }
                break;
            }
            case 4: {
             // Credits you can add your name.
                break;
            }    
            case 5: {
                return 0;
            }
            default: {
                // Invalid choice
                cout << "Invalid choice. Please try again.\n";
                break;
            }
        }
    }
}
