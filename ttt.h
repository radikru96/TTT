const int SIZE=3;
int step;
char board[SIZE][SIZE]{{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
char game; //: ,X,O

char Over (char boardx[][SIZE]){
    if (boardx[0][0]=='X'||boardx[0][0]=='O'){
        if (boardx[0][0]==boardx[0][1]&&boardx[0][1]==boardx[0][2])
        {return boardx[0][0];}
        if (boardx[0][0]==boardx[1][0]&&boardx[1][0]==boardx[2][0])
        {return boardx[0][0];}
        if (boardx[0][0]==boardx[1][1]&&boardx[1][1]==boardx[2][2])
        {return boardx[0][0];}
    }
    if (boardx[1][1]=='X'||boardx[1][1]=='O'){
        if (boardx[1][0]==boardx[1][1]&&boardx[1][1]==boardx[1][2])
        {return boardx[1][1];}
        if (boardx[0][1]==boardx[1][1]&&boardx[1][1]==boardx[2][1])
        {return boardx[1][1];}
        if (boardx[0][2]==boardx[1][1]&&boardx[1][1]==boardx[2][0])
        {return boardx[1][1];}
    }
    if (boardx[2][2]=='X'||boardx[2][2]=='O'){
        if (boardx[0][2]==boardx[1][2]&&boardx[1][2]==boardx[2][2])
        {return boardx[2][2];}
        if (boardx[2][0]==boardx[2][1]&&boardx[2][1]==boardx[2][2])
        {return boardx[2][2];}
    }
    return ' ';
}

void Show_board (const char boardx[][SIZE]){
    cout << "y" << endl;
    cout << "2 " << boardx [0][2] << boardx [1][2] << boardx [2][2] << endl;
    cout << "1 " << boardx [0][1] << boardx [1][1] << boardx [2][1] << endl;
    cout << "0 " << boardx [0][0] << boardx [1][0] << boardx [2][0] << endl;
    cout << endl << "  012x" << endl;
}

void Command (char boardx[][SIZE], char &gamex, const int &sizex) {
    Show_board(boardx);
    int x,y;
    cout << "Enter x" << endl;
    cin >> x;
    cout << "Enter y" << endl;
    cin >> y;
    if ((0<=x)&&(x<sizex)&&(0<=y)&&(y<sizex)&&(boardx[x][y]==' ')){boardx[x][y]=gamex;}
    else { Command(boardx,gamex,sizex);}
}

void Clear_board (char boardx[][SIZE], const int &sizex){
    for (int i=0;i<sizex;++i){
        for (int j=0;j<sizex;++j){
        boardx[i][j]=' ';
    }
    }
}

void Change_game (char &gamex){
    switch (gamex)
    {
    case 'O':
    gamex='X';
        break;
    case 'X':
    gamex='O';
        break;    
    default:
    cout << "Ch_g ERROR!" << endl;
    }
}