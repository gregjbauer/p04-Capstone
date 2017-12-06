//Greg Bauer Connect Four
#include<string>
#include<iostream>
#include<vector>
#include<cstdlib>

using namespace std;


int main()
{
        string playerOne;
        string playerTwo;
        vector<vector<char> > board;
        int row;
        int col;


        cout<<"Welcome to 2 player Connect Four."<<endl;
        cout<<"What would you like to name Player One?"<<endl;
        cin>>playerOne;
        cout<<"What would you like to name Player Two?"<<endl;
        cin>>playerTwo;
        cout<<"Time to flip a coin to see who goes first."<<endl;
        cout<<"Heads means Player One starts, Tails means Player Two starts"<<endl;

                
        srand(time(NULL));
        if((rand()%2 == 1))
        {
                cout<<"Heads, so "<<playerOne<<" starts"<<endl;
        }
        else
        {
                cout<<"Tails, so "<<playerTwo<<" starts"<<endl;
        }
        
        
        row = 6;
        col = 7;
        
        for(int r = 0; r < board.size(); r++)
        {
            board.resize(row);
            for(int c = 0; c < board[r].size(); c++)
            {
                board[r].resize(col);
                cout<<" - ";
            }
            cout<<endl;
        }

        return 0;
}
