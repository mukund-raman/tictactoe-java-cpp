import java.util.*;

public class TicTacToeGame
{
  Scanner input = new Scanner (System.in);

  protected char numboard[][] =
    { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };
  private char player = 'X';

  public void DrawBoard ()
  {
    System.out.println ("------------");
    for (int i = 0; i < 3; ++i)
      {
	for (int j = 0; j < 3; ++j)
	  {
	    System.out.print("|" + numboard[i][j] + "| ");

	  }
	System.out.println ("\n------------");

      }


  }

  void changePlayer ()
  {
    if (player == 'X')
      {
	player = 'O';
      }
    else if (player == 'O')
      {
	player = 'X';
      }
  }

  public void Input (char input)
  {

    if (input == '1')
      {
	numboard[0][0] = player;
      }
    else if (input == '2')
      {
	numboard[0][1] = player;
      }
    else if (input == '3')
      {
	numboard[0][2] = player;
      }
    else if (input == '4')
      numboard[1][0] = player;
    else if (input == '5')
      numboard[1][1] = player;
    else if (input == '6')
      numboard[1][2] = player;
    else if (input == '7')
      numboard[2][0] = player;
    else if (input == '8')
      numboard[2][1] = player;
    else if (input == '9')
      numboard[2][2] = player;
    changePlayer ();
  }

  public void checkIfWinner ()
  {

    if (numboard[0][0] == 'X' && numboard[0][1] == 'X'
	&& numboard[0][2] == 'X')
      {
	System.out.println ("Player X has won!");
	System.exit (0);
      }
    else if (numboard[0][0] == 'X' && numboard[1][0] == 'X'
	     && numboard[2][0] == 'X')
      {
	System.out.println ("Player X has won");
	System.exit (0);
      }
    else if (numboard[0][1] == 'X' && numboard[1][1] == 'X'
	     && numboard[2][1] == 'X')
      {
	System.out.println ("Player X has won");
	System.exit (0);
      }
    else if (numboard[0][2] == 'X' && numboard[1][2] == 'X'
	     && numboard[2][2] == 'X')
      {
	System.out.println ("Player X has won");
	System.exit (0);
      }
    else if (numboard[1][0] == 'X' && numboard[1][1] == 'X'
	     && numboard[1][2] == 'X')
      {
	System.out.println ("Player X has won");
	System.exit (0);
      }
    else if (numboard[2][0] == 'X' && numboard[2][1] == 'X'
	     && numboard[2][2] == 'X')
      {
	System.out.println ("Player X has won");
	System.exit (0);
      }
    else if (numboard[0][0] == 'X' && numboard[1][1] == 'X'
	     && numboard[2][2] == 'X')
      {
	System.out.println ("Player X has won");
	System.exit (0);
      }
    else if (numboard[0][2] == 'X' && numboard[1][1] == 'X'
	     && numboard[2][0] == 'X')
      {
	System.out.println ("Player X has won");
	System.exit (0);
      }

    else if (numboard[0][0] == 'O' && numboard[0][1] == 'O'
	     && numboard[0][2] == 'O')
      {
	System.out.println ("Player O has won");
	System.exit (0);
      }
    else if (numboard[0][0] == 'O' && numboard[1][0] == 'O'
	     && numboard[2][0] == 'O')
      {
	System.out.println ("Player O has won");
	System.exit (0);
      }
    else if (numboard[0][1] == 'O' && numboard[1][1] == 'O'
	     && numboard[2][1] == 'O')
      {
	System.out.println ("Player O has won");
	System.exit (0);
      }
    else if (numboard[0][2] == 'O' && numboard[1][2] == 'O'
	     && numboard[2][2] == 'O')
      {
	System.out.println ("Player O has won");
	System.exit (0);
      }
    else if (numboard[1][0] == 'O' && numboard[1][1] == 'O'
	     && numboard[1][2] == 'O')
      {
	System.out.println ("Player O has won");
	System.exit (0);
      }
    else if (numboard[2][0] == 'O' && numboard[2][1] == 'O'
	     && numboard[2][2] == 'O')
      {
	System.out.println ("Player O has won");
	System.exit (0);
      }
    else if (numboard[0][0] == 'O' && numboard[1][1] == 'O'
	     && numboard[2][2] == 'O')
      {
	System.out.println ("Player O has won");
	System.exit (0);
      }
    else if (numboard[0][2] == 'O' && numboard[1][1] == 'O'
	     && numboard[2][0] == 'O')
      {
	System.out.println ("Player O has won");
	System.exit (0);
      }

  }

  public void checkIfTaken (char num, char array[][], int x, int y)
  {

    if (array[x][y] != num)
      {
	System.out.println ("This square is already taken");
      }

  }


}
