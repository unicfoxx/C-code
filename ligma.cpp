#include <iostream>
#include <string>
#include <thread>
#include <chrono>
using namespace std;

int main()
{
    int number1;
    int number2;
    int bankID;
    string bankDetails;
    string talkabout;
    string notPlayingThat;
    string stfu;
    string opinion;
    string difficulty;
    char isALittleChild;
    char wannaPlayAGame;
    char operatr;

    cout << "***************************************" << endl;
    cout << "*                                     *" << endl;
    cout << "*    WELCOME TO THE CHAT VRO          *" << endl;
    cout << "*         CALCULATOR                  *" << endl;
    cout << "*                                     *" << endl;
    cout << "***************************************" << endl;
    cout << "© 2024 Vro and Associates. No rights reserved" << endl;
    cout << endl;
    cout << endl;
    cout << "Hi, Vro \n Could u enter first number:";
    cin >> number1;

    cout << "Enter the second number now pls:";
    cin >> number2;

    cout << "U can also choose ur operator vro ( +,-,*,/):";
    cin >> operatr;

    cout << "Thank you for submitting the numbers but.." << endl
         << "You'll have to do something in return if" << endl
         << "you want me to calculate your numbers." << endl;

    cout << "Enter bank ID:" << endl;
    cin >> bankID;

    cin.ignore();

    cout << "Enter other bank details (login info, etc):" << endl;
    getline(cin, bankDetails);

    cout << "Thank you for supporting us!\n";
    if (operatr == '+')
    {
        cout << "here is the calculated number:" << number1 + number2 << endl;
    }
    else if (operatr == '-')
    {
        cout << "here is the calculated number:" << number1 - number2 << endl;
    }
    else if (operatr == '*')
    {
        cout << "here is the calculated number:" << number1 * number2 << endl;
    }
    else if (operatr == '/')
    {
        cout << "here is the calculated number:" << number1 / number2 << endl;
    }

    this_thread::sleep_for(chrono::seconds(7));

    cout << "Btw do you like prime and skibidi toilet? (yes[y] no[n]):" << endl;
    cin >> isALittleChild;

    if (isALittleChild == 'y')
    {
        cout << "Get tf outta here kid, \n this discord shit is serious";
        return 0;
    }
    else if (isALittleChild == 'n')
    {
        cout << "Okay vro, you passed the prime test" << endl;
    }
    else
    {
        cout << "ERROR \n Input not valid";
        return 1;
    }

    cin.ignore();

    cout << "the kids are gone, now it's just me and you vro ♥ \n so what u wanna talk about?:";
    getline(cin, talkabout);

    cout << "oh so you wanna yapp about " << talkabout << "\n well I dunno about dat.. \n how about we play a game, \n you in? (yes[y] no[n]):";
    cin >> wannaPlayAGame;

    if (wannaPlayAGame == 'y')
    {

        cout << "yayy, let's hab funnies \n so what game do u wanna play?:";
        cin >> notPlayingThat;

        cout << "hmm, well that does sound like a good game vro, \n but I don't have " << notPlayingThat << "\n Ig we'll just have to play my game:";
        getline(cin, stfu);

        cout << "did I ask for your opinion b??:";
        getline(cin, opinion);
        
        this_thread::sleep_for(chrono::seconds(2));
        cout << "sorry vro, I'm a lil angy today," << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "let's just play the game" << endl;
        cout << "***************************************" << endl;
        cout << "*                                     *" << endl;
        cout << "*      WELCOME TO THE GUESS THE       *" << endl;
        cout << "*           NUMBER GAME               *" << endl;
        cout << "*                                     *" << endl;
        cout << "***************************************" << endl;
        cout << "© 2024 Vro and Associates. No rights reserved" << endl;
        cout << endl;
        cout << endl;
        cout << "vro, you need to choose a difficulty, cro just chose a difficulty (easy, medium, hard, NIGHTMARE):";
        cin >> difficulty;

        if (difficulty == "easy")
        {

            cout << "Game Dificulty set (easy) = 30 numbers " << endl;

            srand(time(0));
            int guessnumber = 1 + (rand() % 30);
            int playercin;
            int choices = 10;
            for (int i = 10; i > 0; i--)
            {

                cout << "choices = " << i << endl;
                cout << "guess the number:" << endl;
                cin >> playercin;

                if (playercin == guessnumber)
                {
                    cout << "YAY, u won cro! ♥";
                    break;
                }
                else
                {
                    cout << "aw, " << playercin << " is da wrong number vro..." << endl;
                    cout << "Choices Left: " << choices-- << endl;
                    cout << "guess again cro:" << endl;
                }
                if (choices == 0)
                {
                    cout << "sorry vro, u lost the game. Better luck next time ♥";
                }
            }
        } else if (difficulty == "medium") {
        cout << "Game Dificulty set (medium)";

        srand(time(0));
        int guessnumber = 1 + (rand() % 100);
        int playercin;
        int choices = 7;
        for (int i = 7; i > 1; i--)
        {

            cout << "choices = " << i;
            cout << "guess the number:" << endl;
            cin >> playercin;

            if (playercin == guessnumber)
            {
                cout << "YAY, u won cro! ♥";
                break;
            }
            else
            {
                cout << "aw," << playercin << " is da wrong number vro..."
                                              "Choices Left:"
                     << choices--;
            }
            if (choices == 0)
            {
                cout << "sorry vro, u lost the game. Better luck next time ♥";
            }
        }
        } else if (difficulty == "hard") {
            cout << "Game Dificulty set (hard)";

        srand(time(0));
        int guessnumber = 1 + (rand() % 300);
        int playercin;
        int choices = 5;
        for (int i = 5; i > 1; i--)
        {

            cout << "choices = " << i;
            cout << "guess the number:" << endl;
            cin >> playercin;

            if (playercin == guessnumber)
            {
                cout << "YAY, u won cro! ♥";
                break;
            }
            else
            {
                cout << "aw," << playercin << " is da wrong number vro..."
                                              "Choices Left:"
                     << choices--;
            }
            if (choices == 0)
            {
                cout << "sorry vro, u lost the game. Better luck next time ♥";
            }
        }
    } else if (difficulty == "NIGHTMARE") {

        cout << "Game Dificulty set (NIGHTMARE)";

        srand(time(0));
        int guessnumber = 1 + (rand() % 1000);
        int playercin;
        int choices = 1;
        for (int i = 1; i > 1; i--)
        {

            cout << "choices = " << i;
            cout << "guess the number:" << endl;
            cin >> playercin;

            if (playercin == guessnumber)
            {
                cout << "YAY, u won cro! ♥";
                break;
            }
            else
            {
                cout << "aw," << playercin << " is da wrong number vro..."
                                              "Choices Left:"
                     << choices--;
            }
            if (choices == 0)
            {
                cout << "sorry vro, u lost the game. Better luck next time ♥";
            }
        }
    } else {
        cout << "ERROR \n Input not valid";
        return 1;
    }
}
else if (wannaPlayAGame == 'n')
{
    cout << "okay, fuck u too ig.";
}
else
{
    cout << "ERROR \n Input not valid";
    return 1;
}

return 0;
}
