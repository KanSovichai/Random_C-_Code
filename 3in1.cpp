#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
using std::cin;
using std::cout;
using std::setw;
void Load()
{
    for (int l = 0; l <= 430; l++)
    {
        cout << "  ";
    }
    cout << "LOADING";
    usleep(500000);
    cout << ".";
    usleep(500000);
    cout << ".";
    usleep(500000);
    cout << ".";
    system("cls");
}
void Wait()
{
    for (int l = 0; l <= 430; l++)
    {
        cout << "  ";
    }
    cout << "PLEASE WAIT";
    usleep(500000);
    cout << ".";
    usleep(500000);
    cout << ".";
    usleep(500000);
    cout << ".";
    system("cls");
}
// guessing game
int ComGuess();
int PlayerGuess();
bool CheckGuess(int Player, int Computer);
class Prices
{
public:
    void Reward1()
    {
        cout << "You Won 100$\n";
    }
    void Reward2()
    {
        cout << "You Won 200$\n";
    }
    void Reward3()
    {
        cout << "You Won 300$\n";
    }
    void Reward4()
    {
        cout << "You Won 400$\n";
    }
    void Reward5()
    {
        cout << "You Won 500$\n";
    }
};
// bank
double
Deposit(double balance);
double Withdraw(double balance);
// Tic Tac Toe
void Board(char *spaces);
char Player1Move(char *spaces, char Player1);
char Player2Move(char *spaces, char Player2);
char ComputerMove(char *spaces, char Computer);
bool CheckWinner(char *spaces, char Player1);
bool CheckWinnerPVP(char *spaces, char Player1);
bool CheckTie(char *spaces);
// Timer
bool Timer(int HH, int MM, int SS);
int main()
{
    for (int p = 0; p <= 390; p++)
    {
        cout << "  ";
    }
    system("color 1f");
    cout << setw(90) << "Starting Up";
    usleep(500000);
    cout << " . ";
    usleep(500000);
    cout << " . ";
    usleep(500000);
    cout << " . " << std::endl;

    char Choice;
    double balance = 0;
    system("cls");
    system("Color 07");
C:
    do
    {
        cout << "-----------------------------------" << std::endl;
        cout << "1 to play Number Guessing game\n";
        cout << "2 to play Tic Tac Toe game\n";
        cout << "3 to open Bank Account\n";
        cout << "4 to open clock timer\n";
        cout << "5 to exit\n";

        cin >> Choice;
        system("cls");

        switch (Choice)
        {

        case '1':
            // guessing game
            system("cls");
            Load();
            char Option;
            do
            {
            B:
                cout << "--------------------------------" << std::endl;
                cout << setw(80) << "WELCOME TO NUMBER GUESSING GAME\n";
                cout << "1 to play(15$ per bet)" << std::endl;
                cout << "2 to exit\n";
                cin >> Option;

                if (Option == '1' && balance >= 15)
                {
                A:
                    balance -= 15;
                    int Player = PlayerGuess();
                    int Computer = ComGuess();
                    cout << "The number is " << ComGuess() << std::endl;
                    CheckGuess(Player, Computer);
                    if (CheckGuess(Player, Computer))
                    {
                        srand(time(0));
                        int Reward = rand() % 5 + 1;
                        Prices reward;
                        switch (Reward)
                        {
                        case 1:
                            reward.Reward1();
                            balance += 100;
                            break;
                        case 2:
                            reward.Reward2();
                            balance += 200;
                            break;
                        case 3:
                            reward.Reward3();
                            balance += 300;
                            break;
                        case 4:
                            reward.Reward4();
                            balance += 400;
                            break;
                        case 5:
                            reward.Reward5();
                            balance += 500;
                            break;
                        }
                    }
                    else
                    {
                        cout << "You Lose\n";
                    }
                    cout << "Play Again?\n";
                    std::string Ans;
                    cin >> Ans;
                    if (Ans == "yes" || Ans == "y" && balance >= 15)
                    {
                        system("cls");
                        cout << "Goodluck\n";
                        goto A;
                    }
                    else if (Ans == "no")
                    {
                        system("cls");
                        cout << "Thanks for playing\n";
                        goto B;
                    }
                    else if (Ans == "yes" || Ans == "y" && balance < 15)
                    {
                        system("cls");
                        cout << "\033[031m" << "Insufficient Funds\n"
                             << "\033[0m";
                        goto B;
                    }
                }
                else if (Option == '2')
                {
                    system("cls");
                    Load();
                    goto C;
                    break;
                }
                else if (Option == '1' && balance < 15)
                {
                    system("cls");
                    cout << "\033[031m" << "Insufficient Funds\n"
                         << "\033[0m";
                    goto B;
                }
                else
                {
                    system("cls");
                    cout << "Invalid Option\n";
                    goto B;
                }
            } while (Option != 2);
            break;
        case '2':
        {
        TTT:
            system("cls");
            Load();
            char TTT;
            std::string ans;
            cout << "------------TIC TAC TOE--------------" << std::endl;
            cout << "1 to play with a computer\n";
            cout << "2 to play PVP\n";
            cout << "3 to exit" << std::endl;
            cin >> TTT;
        ttt:
            char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
            char Player1 = 'X', Player2 = 'O', Computer = 'O';
            bool running = true;

            switch (TTT)
            {

            case '1':
            {

                system("cls");
                Load();
                Board(spaces);
                while (running)
                {
                    Player1Move(spaces, Player1);
                    Board(spaces);
                    if (CheckWinner(spaces, Player1))
                    {
                        running = false;
                        break;
                    }
                    else if (CheckTie(spaces))
                    {
                        running = false;
                        cout << "TIE\n";
                        break;
                    }
                    ComputerMove(spaces, Computer);
                    Board(spaces);
                    if (CheckWinner(spaces, Player1))
                    {
                        running = false;
                        break;
                    }
                    else if (CheckTie(spaces))
                    {
                        running = false;
                        cout << "TIE\n";
                        break;
                    }
                }
                cout << "Having Fun? Wanna play again?" << std::endl;
                cin >> ans;
                if (ans == "No" || ans == "no" || ans == "n" || ans == "N")
                {
                    system("cls");
                    goto TTT;
                    break;
                }
                else if (ans == "yes")
                {
                    goto ttt;
                    break;
                }
            }
            break;
            case '2':
            {

                system("cls");
                Load();
                Board(spaces);
                while (running)
                {
                    Player1Move(spaces, Player1);
                    Board(spaces);
                    if (CheckWinnerPVP(spaces, Player1))
                    {
                        running = false;
                        break;
                    }
                    else if (CheckTie(spaces))
                    {
                        running = false;
                        cout << "TIE\n";
                        break;
                    }
                    Player2Move(spaces, Player2);
                    Board(spaces);
                    if (CheckWinnerPVP(spaces, Player1))
                    {
                        running = false;
                        break;
                    }
                    else if (CheckTie(spaces))
                    {
                        running = false;
                        cout << "TIE\n";
                        break;
                    }
                }
                cout << "Having Fun? Wanna play again?" << std::endl;
                cin >> ans;
                if (ans == "No" || ans == "no" || ans == "n" || ans == "N")
                {
                    system("cls");
                    goto TTT;
                    break;
                }
                else if (ans == "yes" || ans == "y" || ans == "Yes")
                {
                    goto ttt;
                }
            }

            case '3':
                system("cls");
                Load();
                cout << setw(50) << "Thanks for playing\n";
                goto C;
                break;
            }
            break;
        }
        break;
        case '3':
            system("cls");
            Load();
            char choice;

        BANK:
            cout << "---------------------------------\n";
            cout << setw(80) << "WELCOME TO THE BANK\n";
            cout << "1 to check balance\n";
            cout << "2 to deposit money" << std::endl;
            cout << "3 to withdraw money\n";
            cout << "4 to exit\n";
            cin >> choice;
            switch (choice)
            {
            case '1':
                system("cls");
                cout << "Your balance is $" << balance << "\n";
                goto BANK;
                break;
            case '2':
                system("cls");
                balance += Deposit(balance);

                goto BANK;
                break;
            case '3':
                system("cls");
                balance -= Withdraw(balance);
                goto BANK;
                break;
            case '4':
                system("cls");
                Load();
                goto C;
            default:
                cout << "Invalid Input\n";
                goto BANK;
                break;
            }
        case '4':
        {
            int HH, MM, SS;
            bool end;
            system("cls");
            cout << "Enter the Hour: ";
            cin >> HH;
            cout << "Enter the Minute: ";
            cin >> MM;
            cout << "Enter the Second: ";
            cin >> SS;
            cout << "------------------------\n";
            end = Timer(HH, MM, SS);
            if(end = true){
                goto C;
                break;
            }
            break;
        }
        case '5':
            system("cls");
            for (int s = 0; s <= 500; s++)
            {
                cout << "  ";
            }
            cout << "SHUTTING DOWN";
            usleep(500000);
            cout << " . ";
            usleep(500000);
            cout << " . ";
            usleep(500000);
            cout << " . ";
            system("cls");
            break;
        default:
            system("cls");
            cout << "Invalid Input\n";
            break;
        }
    } while (Choice != '1' && Choice != '2' && Choice != '3' && Choice != '4' && Choice != '5');
    return 0;
}
// guess game
int ComGuess()
{
    srand(time(0));
    int Num = rand() % 15 + 1;
    return Num;
}
int PlayerGuess()
{
A:
    int Guess;
    cout << "Please enter a number between 1 - 15" << std::endl;
    cin >> Guess;
    if (Guess > 0 && Guess <= 15)
    {
        return Guess;
    }
    else
    {
        cout << "Invalid Number\n";
        goto A;
    }
}
bool CheckGuess(int Player, int Computer)
{
    return (Player == Computer) ? true : false;
}
// bank
double Deposit(double balance)
{
    double amount;
    do
    {
        cout << "Please enter the amount you want to deposit\n";
        cin >> amount;
    } while (amount <= 0);
    system("cls");
    Wait();
    cout << "\033[032m" << amount << "$ has been succesfully deposit\n"
         << "\033[0m";
    return amount;
}
double Withdraw(double balance)
{
    double amount;
    do
    {
        cout << "Please enter the amount you want to withdraw\n";
        cin >> amount;

    } while (amount <= 0);
    if (amount <= balance)
    {
        system("cls");
        Wait();
        cout << "\033[032m" << amount << "$ has been succesfully withdraw\n"
             << "\033[0m";

        return amount;
    }
    else
    {
        cout << "\033[031m" << "Insufficient Funds\n"
             << "\033[0m";
        return 0;
    }
}
// tic tac toe
void Board(char *spaces)
{
    cout << "     |" << "     |" << "     " << std::endl;
    cout << "  " << spaces[0] << "  |" << "  " << spaces[1] << "  |" << "  " << spaces[2] << "  " << std::endl;
    cout << "_____|" << "_____|" << "_____" << std::endl;
    cout << "     |" << "     |" << "     " << std::endl;
    cout << "  " << spaces[3] << "  |" << "  " << spaces[4] << "  |" << "  " << spaces[5] << "  " << std::endl;
    cout << "_____|" << "_____|" << "_____" << std::endl;
    cout << "     |" << "     |" << "     " << std::endl;
    cout << "  " << spaces[6] << "  |" << "  " << spaces[7] << "  |" << "  " << spaces[8] << "  " << std::endl;
    cout << "     |" << "     |" << "     " << std::endl;
}
char Player1Move(char *spaces, char Player1)
{
    int spot;
    do
    {
        cout << "(Player 1 )Enter a spot to place(1-9): ";
        cin >> spot;
        if (spaces[spot - 1] == ' ')
        {
            return spaces[spot - 1] = Player1;
        }
        else if (spot > 9 || spot < 1)
        {
            cout << "Invalid Spot\n";
        }
        else
        {
            cout << "Spot taken please choose another one!\n";
        }
    } while (spaces[spot - 1] != ' ');
    return 0;
}
char Player2Move(char *spaces, char Player2)
{
    int spot;
    do
    {
        cout << "(Player 2 )Enter the spot to mark: ";
        cin >> spot;
        if (spaces[spot - 1] == ' ')
        {
            return spaces[spot - 1] = Player2;
        }
        else
        {
            cout << "Spot taken please choose another spot\n";
        }
    } while (spaces[spot - 1] != ' ');
    return 0;
}
char ComputerMove(char *spaces, char Computer)
{
    int com;
    do
    {
        com = rand() % 9;
        if (spaces[com] == ' ')
        {
            break;
        }
    } while (spaces[com] != ' ');
    return spaces[com] = Computer;
}
bool CheckWinner(char *spaces, char Player1)
{
    if (spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2])
    {
        spaces[0] == Player1 ? cout << "You Win\n" : cout << "You Lose\n";
        return true;
    }
    else if (spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5])
    {
        spaces[3] == Player1 ? cout << "You Win\n" : cout << "You Lose\n";
        return true;
    }
    else if (spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8])
    {
        spaces[6] == Player1 ? cout << "You Win\n" : cout << "You Lose\n";
        return true;
    }
    else if (spaces[0] != ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6])
    {
        spaces[0] == Player1 ? cout << "You Win\n" : cout << "You Lose\n";
        return true;
    }
    else if (spaces[1] != ' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7])
    {
        spaces[1] == Player1 ? cout << "You Win\n" : cout << "You Lose\n";
        return true;
    }
    else if (spaces[2] != ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8])
    {
        spaces[2] == Player1 ? cout << "You Win\n" : cout << "You Lose\n";
        return true;
    }
    else if (spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8])
    {
        spaces[0] == Player1 ? cout << "You Win\n" : cout << "You Lose\n";
        return true;
    }
    else if (spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6])
    {
        spaces[0] == Player1 ? cout << "You Win\n" : cout << "You Lose\n";
        return true;
    }
    else
    {
        return false;
    }
}
bool CheckWinnerPVP(char *spaces, char Player1)
{
    if (spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2])
    {
        spaces[0] == Player1 ? cout << "Player 1 Win\n" : cout << "Player 2 Win\n";
        return true;
    }
    else if (spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5])
    {
        spaces[3] == Player1 ? cout << "Palyer 1 Win\n" : cout << "Player 2 Win\n";
        return true;
    }
    else if (spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8])
    {
        spaces[6] == Player1 ? cout << "Player 1 Win\n" : cout << "Player 2 Win\n";
        return true;
    }
    else if (spaces[0] != ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6])
    {
        spaces[0] == Player1 ? cout << "Player 1 Win\n" : cout << "Player 2 Win\n";
        return true;
    }
    else if (spaces[1] != ' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7])
    {
        spaces[1] == Player1 ? cout << "Player 1 Win\n" : cout << "Player 2 Win\n";
        return true;
    }
    else if (spaces[2] != ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8])
    {
        spaces[2] == Player1 ? cout << "Player 1 Win\n" : cout << "Player 2 Win\n";
        return true;
    }
    else if (spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8])
    {
        spaces[0] == Player1 ? cout << "Player 1 Win\n" : cout << "Player 2 Win\n";
        return true;
    }
    else if (spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6])
    {
        spaces[0] == Player1 ? cout << "Player 1 Win\n" : cout << "Player 2 Win\n";
        return true;
    }
    else
    {
        return false;
    }
}
bool CheckTie(char *spaces)
{
    for (int i = 0; i <= 8; i++)
    {
        if (spaces[i] == ' ')
        {
            return false;
        }
    }
    return true;
}
bool Timer(int HH, int MM, int SS)
{

    for (int i = HH; i >= 0; i--)
    {
        for (int j = MM; j >= 0; j--)
        {
            for (int k = SS; k >= 0; k--)
            {
                system("cls");
                cout << i << ":" << j << ":" << k<<std::endl;
                usleep(1000000);
                if (HH == 0 && MM == 0 && SS == 0)
                {
                    return true;
                }
            }
            SS = 59;
        }
        MM = 59;
    }
    return false;
}
