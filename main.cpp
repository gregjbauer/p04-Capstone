//Greg Bauer Connect Four
#include<string>
#include<iostream>
#include<vector>
#include<cstdlib>
#include"player.h"

using namespace std;

void display();
char place[6][7];
int drop(int x, char player);

int main()
{
        string playerOne;
        string playerTwo;
        char place[6][7];
        bool gameOver = false;
        char player1;
        char player2;
        char player = 5;
        int p1move;
        int p2move;

        cout<<"---------------------------------"<<endl;
        cout<<"Welcome to 2 player Connect Four."<<endl;
        cout<<"---------------------------------"<<endl;
        cout<<"What would you like to name Player One?"<<endl;
        cin>>playerOne;
        cout<<"What would you like to name Player Two?"<<endl;
        cin>>playerTwo;
        
        //        cout<<"Time to flip a coin to see who goes first."<<endl;


        /*        srand(time(NULL));
                  if((rand()%2 == 1))
                  {
                  cout<<"Heads, so "<<playerOne<<" starts"<<endl;
                  }
                  else
                  {
                  cout<<"Tails, so "<<playerTwo<<" starts"<<endl;
                  }
         */

        while(!gameOver)
        {
        if(player == 5)
        {
            cout<<playerOne<<": what row?"<<endl;
            cin>>p1move;
        }
        else
        {
            cout<<playerTwo<<": what row?"<<endl;
            cin>>p2move;
        }
        for(int r = 0; r < 6; r++)
        {
                for(int c = 0; c < 7; c++)
                {
                        place[r][c] = ' ';
                }
        }

        void display();
        int hold;
        int hold2;
        int drop(int r, char player);

     return 0;
}

void display()
{
        vector<vector<char> > board;
        int row;
        int col;

        row = 6;
        col = 7;


        cout<<"  1    2    3    4    5    6    7"<<endl;
        cout<<"  -------------------------------  "<<endl;
        board.resize(row);
        for(int r = 0; r < row; r++)
        {
                board[r].resize(col);
                for(int c = 0; c < col; c++)
                {
                        cout<<"  O  ";
                }
                cout<<endl;
        }
}

int drop(int r, char player)
{
        if(r >= 0 && r <=6)
        {
                if(place[0][r] == ' ')
                {
                        for(int x = 0; place[x][r] == ' '; x++)
                        {
                                if(x == 5)
                                {
                                        place[x][r] = player;
                                        return x;
                                }
                                x--;
                                place[x][r] = player;
                                return x;
                        }
                }
                else
                {
                        return -1;
                }
        }
        else
        {
                return -1;
        }
}


bool check(int r, int c)
{

        int vertical = 1;
        int horizontal = 1;
        char player = place[r][c];

        for(int i = r + 1; place[i][c] == player && i < 6; i++, vertical++);
        for(int i = r - 1; place[i][c] == player && i > 0; i--, vertical++);
        if(vertical >= 4) 
        {
                return true;
        }
        for(int ii = c - 1; place[r][ii] == player && ii >= 0; ii--, horizontal++);
        for(int ii = c + 1; place[r][ii] == player && ii < 7; ii++, horizontal++);
        if( horizontal >= 4) 
        {
                return true;
        }

    return false;
}
