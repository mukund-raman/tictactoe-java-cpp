/*

   TicTacToe in C++
   By: Mukund Raman
   
   Version: 1.0.0
   Date: Jan 11, 2019

*/

#include <iostream> 
#include <string>

using namespace std;

// Create class for handling TicTacToe Board
class TicTacToe {
    
    // Declare all private variables
    private:
      
      string ticTacToeArr[3][3] = {{"", "", ""}, {"", "", ""}, {"", "", ""}};
      int x;
      int y;
      
    // Declare all public methods
    public:
      
      // Starts the TicTacToe Game
      void StartGame() {
          
          // Description of Game
          cout << "TicTacToe\n" << "Version 1.0.0\nBy: Mukund Raman\n";
          PrintBoard();
          
          // While nobody has won, do...
          while(checkIfWon() == false) {
              
            // Asks Player 1 to enter where they would like to place ‘X’
            cout << "\nPlease enter where you want to place ‘X’ (x, y): \n";
            cin >> x >> y;
            ticTacToeArr[x][y] = "X";
            PrintBoard();
            
            // Checks if Player X has won
            if(checkIfWon() == true) {
                exit(0);
            }
            
            //Checks if there was a tie
            if(checkIfTie() == true) {
                cout << "Tie Game!";
                exit(0);
            }
            
            // Asks Player 2 to enter where they would like to place ‘O’
            cout << "\nPlease enter where you want to place ‘O’ (x, y): \n";
            cin >> x >> y;
            ticTacToeArr[x][y] = "O";
            PrintBoard();
            
          }
          
          
      }
      
      // Checks if the game was a tie
      bool checkIfTie() {
          int counter = 0;
          for(int i = 0; i < 3; i++) {
              for(int j = 0; j < 3; j++) {
                  if(ticTacToeArr[i][j] != "") {
                    counter++;
                  }
              }
          }
          
          if(counter == 9) {
              return true;
          }
          else {
              return false;
          }
      }
      
      // Checks if either player has won the game yet
      bool checkIfWon() {
          if (ticTacToeArr[0][0] == "X" && ticTacToeArr[0][1] == "X"
	&& ticTacToeArr[0][2] == "X")
      {
	    cout << "Player X has won!";
	    return true;
      }
    else if (ticTacToeArr[0][0] == "X" && ticTacToeArr[1][0] == "X"
	     && ticTacToeArr[2][0] == "X")
      {
	    cout << "Player X has won";
	    return true;
      }
    else if (ticTacToeArr[0][1] == "X" && ticTacToeArr[1][1] == "X"
	     && ticTacToeArr[2][1] == "X")
      {
	    cout << "Player X has won";
	    return true;
      }
    else if (ticTacToeArr[0][2] == "X" && ticTacToeArr[1][2] == "X"
	     && ticTacToeArr[2][2] == "X")
      {
	    cout << "Player X has won";
	    return true;
      }
    else if (ticTacToeArr[1][0] == "X" && ticTacToeArr[1][1] == "X"
	     && ticTacToeArr[1][2] == "X")
      {
	    cout << "Player X has won";
	    return true;
      }
    else if (ticTacToeArr[2][0] == "X" && ticTacToeArr[2][1] == "X"
	     && ticTacToeArr[2][2] == "X")
      {
	    cout << "Player X has won";
	    return true;
      }
    else if (ticTacToeArr[0][0] == "X" && ticTacToeArr[1][1] == "X"
	     && ticTacToeArr[2][2] == "X")
      {
	    cout << "Player X has won";
	    return true;
      }
    else if (ticTacToeArr[0][2] == "X" && ticTacToeArr[1][1] == "X"
	     && ticTacToeArr[2][0] == "X")
      {
	    cout << "Player X has won";
	    return true;
      }

    else if (ticTacToeArr[0][0] == "O" && ticTacToeArr[0][1] == "O"
	     && ticTacToeArr[0][2] == "O")
      {
	    cout << "Player O has won";
	    return true;
      }
    else if (ticTacToeArr[0][0] == "O" && ticTacToeArr[1][0] == "O"
	     && ticTacToeArr[2][0] == "O")
      {
	    cout << "Player O has won";
	    return true;
      }
    else if (ticTacToeArr[0][1] == "O" && ticTacToeArr[1][1] == "O"
	     && ticTacToeArr[2][1] == "O")
      {
	    cout << "Player O has won";
	    return true;
      }
    else if (ticTacToeArr[0][2] == "O" && ticTacToeArr[1][2] == "O"
	     && ticTacToeArr[2][2] == "O")
      {
	    cout << "Player O has won";
	    return true;
      }
    else if (ticTacToeArr[1][0] == "O" && ticTacToeArr[1][1] == "O"
	     && ticTacToeArr[1][2] == "O")
      {
	    cout << "Player O has won";
	    return true;
      }
    else if (ticTacToeArr[2][0] == "O" && ticTacToeArr[2][1] == "O"
	     && ticTacToeArr[2][2] == "O")
      {
	    cout << "Player O has won";
	    return true;
      }
    else if (ticTacToeArr[0][0] == "O" && ticTacToeArr[1][1] == "O"
	     && ticTacToeArr[2][2] == "O")
      {
	    cout << "Player O has won";
	    return true;
      }
    else if (ticTacToeArr[0][2] == "O" && ticTacToeArr[1][1] == "O"
	     && ticTacToeArr[2][0] == "O")
      {
	    cout << "Player O has won";
	    return true;
      }
        else {
            return false;
        }
          
      }
      
      // Prints the TicTacToe Board
      void PrintBoard() {
          cout << "-—-—-—-----——" << endl;
          cout << "| " << ticTacToeArr[0][0] << " | ";
          cout << ticTacToeArr[0][1] << " | ";
          cout << ticTacToeArr[0][2] << " |" << endl;
          cout << "-—-—-—-—-—-—-" << endl;
          cout << "| " << ticTacToeArr[1][0] << " | ";
          cout << ticTacToeArr[1][1] << " | ";
          cout << ticTacToeArr[1][2] << " |" << endl;
          cout << "-—-—-—-—-—-—-" << endl;
          cout << "| " << ticTacToeArr[2][0] << " | ";
          cout << ticTacToeArr[2][1] << " | ";
          cout << ticTacToeArr[2][2] << " |" << endl;
      }

};

// Main function
int main()
{

  // Instantiate an object of class TicTacToe
  TicTacToe t;
  
  // Starts the TicTacToe Game
  t.StartGame();

    
}







