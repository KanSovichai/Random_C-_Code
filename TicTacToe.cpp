#include <iostream>
#include <ctime>

void Board(char *spaces);
void PlayerMove(char *spaces, char Player1);
void PlayerMove2(char *spaces, char Player2);
void ComputerMove(char *spaces, char computer);
bool CheckWinner(char *spaces, char Player1, char computer);
bool CheckWinnerPVP(char *spaces, char Player1, char Player2);
bool CheckTie(char *spaces);
int main()
{
a:
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char Player1 = 'X';
    char Player2 = 'O';
    char Option;
    char computer = 'O';
    bool running = true;
    std::string Ans;
    std::cout << "Type 1 to play with a computer\n";
    std::cout << "Type 2 to play pvp\n";
    std::cin >> Option;
    Board(spaces);
    while (running)
    {
        if (Option == '1')
        {
            PlayerMove(spaces, Player1);
            Board(spaces);
            if (CheckWinner(spaces, Player1, computer))
            {
                running = false;
                break;
            }
            else if (CheckTie(spaces))
            {
                std::cout << "TIE\n";
                running = false;
                break;
            }
        }
        else if (Option == '2')
        {
            PlayerMove(spaces, Player1);
            Board(spaces);
            if (CheckWinnerPVP(spaces, Player1, Player2))
            {
                running = false;
                break;
            }
            else if (CheckTie(spaces))
            {
                std::cout << "TIE\n";
                running = false;
                break;
            }
        }
        if (Option == '1')
        {
            ComputerMove(spaces, computer);
            Board(spaces);
            if (CheckWinner(spaces, Player1, computer))
            {
                running = false;
                break;
            }
            else if (CheckTie(spaces))
            {
                std::cout << "TIE\n";
                running = false;
                break;
            }
        }
        else if (Option == '2')
        {
            PlayerMove2(spaces, Player2);
            Board(spaces);
            if (CheckWinnerPVP(spaces, Player1, Player2))
            {
                running = false;
                break;
            }
            else if (CheckTie(spaces))
            {
                running = false;
                break;
            }
        }
    }
    std::cout << "Play again?\n";
    std::cin >> Ans;
    if (Ans == "Yes" || Ans == "yes")
    {
        Ans == "Yes" || Ans == "yes" ? std::cout << "Goodluck\n" : std::cout << "Its a yes or no question\n";
        system("cls");
        goto a;
    }
    else if (Ans == "No" || Ans == "no")
    {
        system("cls");
        Ans == "No" || Ans == "no" ? std::cout << "Thanks for playing\n" : std::cout << "Its a yes or no question\n";
    }

    return 0;
}
void Board(char *spaces)
{
    char player;
    std::cout << "\n";
    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << spaces[0] << "  |" << "  " << spaces[1] << "  |" << "  " << spaces[2] << "  " << std::endl;
    std::cout << "_____|_____|_____" << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << spaces[3] << "  |" << "  " << spaces[4] << "  |" << "  " << spaces[5] << "  " << std::endl;
    std::cout << "_____|_____|_____" << std::endl;
    std::cout << "  " << spaces[6] << "  |" << "  " << spaces[7] << "  |" << "  " << spaces[8] << "  " << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "\n";
}
void PlayerMove(char *spaces, char Player1)
{
    int player;
    do
    {
    A:
        std::cout << "(Player 1)Enter a spot to mark(1-9): ";
        std::cin >> player;
        player--;
        if (spaces[player] == ' ')
        {
            spaces[player] = Player1;
            break;
        }
        else if (spaces[player] == 'O' || spaces[player] == 'X')
        {
            std::cout << "Spot taken\n";
            goto A;
        }
        else
        {
            std::cout << "Invalid spot\n";
            goto A;
        }
    } while (!player > 0 || !player < 8);
}
void PlayerMove2(char *spaces, char Player2)
{
    int move;
    do
    {
    B:
        std::cout << "(Player 2)Enter a spot to mark(1-9): ";
        std::cin >> move;
        move--;

        if (spaces[move] == ' ')
        {
            spaces[move] = Player2;
            break;
        }
        else if (spaces[move] == 'X' || spaces[move] == 'O')
        {
            std::cout << "Spot taken\n";
            goto B;
        }
        else
        {
            std::cout << "Invalid spot\n";
            goto B;
        }
    } while (!move > 0 || !move < 8);
}
void ComputerMove(char *spaces, char computer)
{
    int move;

    srand(time(0));
    while (true)
    {
        move = rand() % 9;
        if (spaces[move] == ' ')
        {
            spaces[move] = computer;
            break;
        }
    }
}
bool CheckWinner(char *spaces, char Player1, char computer)
{
    if ((spaces[0] != ' ') && (spaces[0] == spaces[1]) && (spaces[1] == spaces[2]))
    {
        spaces[0] == Player1 ? std::cout << "You won\n" : std::cout << "You lost\n";
    }
    else if ((spaces[3] != ' ') && (spaces[3] == spaces[4]) && (spaces[4] == spaces[5]))
    {
        spaces[3] == Player1 ? std::cout << "You won\n" : std::cout << "You lost\n";
    }
    else if ((spaces[6] != ' ') && (spaces[6] == spaces[7]) && (spaces[7] == spaces[8]))
    {
        spaces[6] == Player1 ? std::cout << "You won\n" : std::cout << "You lost\n";
    }
    else if ((spaces[0] != ' ') && (spaces[0] == spaces[3]) && (spaces[3] == spaces[6]))
    {
        spaces[0] == Player1 ? std::cout << "You won\n" : std::cout << "You lost\n";
    }
    else if ((spaces[1] != ' ') && (spaces[1] == spaces[4]) && (spaces[4] == spaces[7]))
    {
        spaces[1] == Player1 ? std::cout << "You won\n" : std::cout << "You lost\n";
    }
    else if ((spaces[2] != ' ') && (spaces[2] == spaces[5]) && (spaces[5] == spaces[8]))
    {
        spaces[2] == Player1 ? std::cout << "You won\n" : std::cout << "You lost\n";
    }
    else if ((spaces[0] != ' ') && (spaces[0] == spaces[4]) && (spaces[4] == spaces[8]))
    {
        spaces[0] == Player1 ? std::cout << "You won\n" : std::cout << "You lost\n";
    }
    else if ((spaces[2] != ' ') && (spaces[2] == spaces[4]) && (spaces[4] == spaces[6]))
    {
        spaces[2] == Player1 ? std::cout << "You won\n" : std::cout << "\033[031m" << "You lost" << "\033[0m" << std::endl;
    }
    else
    {
        return false;
    }
    return true;
}
bool CheckWinnerPVP(char *spaces, char Player1, char Player2)
{
    if ((spaces[0] != ' ') && (spaces[0] == spaces[1]) && (spaces[1] == spaces[2]))
    {
        spaces[0] == Player1 ? std::cout << "Player 1 win\n" : std::cout << "Player 2 win\n";
    }
    else if (spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5])
    {
        spaces[3] == Player1 ? std::cout << "Player 1 win\n" : std::cout << "Player 2 win\n";
    }
    else if (spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8])
    {
        spaces[6] == Player1 ? std::cout << "Player 1 win\n" : std::cout << "Player 2 win\n";
    }
    else if (spaces[0] != ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6])
    {
        spaces[0] == Player1 ? std::cout << "Player 1 win\n" : std::cout << "Player 2 win\n";
    }
    else if (spaces[1] != ' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7])
    {
        spaces[1] == Player1 ? std::cout << "Player 1 win\n" : std::cout << "Player 2 win\n";
    }
    else if (spaces[2] != ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8])
    {
        spaces[2] == Player1 ? std::cout << "Player 1 win\n" : std::cout << "Player 2 win\n";
    }
    else if (spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8])
    {
        spaces[0] == Player1 ? std::cout << "Player 1 win\n" : std::cout << "Player 2 win\n";
    }
    else if (spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6])
    {
        spaces[2] == Player1 ? std::cout << "Player 1 win\n" : std::cout << "Player 2 win\n";
    }
    else
    {
        return false;
    }
    return true;
}
bool CheckTie(char *spaces)
{
    for (int i = 0; i < 8; i++)
    {
        if (spaces[i] == ' ')
        {
            return false;
        }
    }
    return true;
}