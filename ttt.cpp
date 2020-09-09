#include <iostream>
using namespace std;
#include "ttt.h"

int main()
{
    Clear_board(board,SIZE);
    game = 'X';
    step=0;
    while (Over(board)==' '&&step<9)
    {    
        Command(board,game,SIZE);
        Change_game(game);
        ++step;
        cout << "Step-" << step << endl;
    }
    Show_board(board);
    if (Over(board)==' '){cout << "Over." << endl;}
    else {cout << Over(board) << " Winner!" << endl;}
    return 0;
}

