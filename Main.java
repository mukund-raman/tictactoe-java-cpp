import java.util.*;
public class Main extends TicTacToeGame {

	public static void main(String[] args) {

		Main game = new Main();
		Scanner input = new Scanner(System.in);
		
		for(int i = 0; i < 15; i++) {
			game.DrawBoard();
			System.out.println("Please enter a spot (Don't enter a spot if already taken!)");
			char input1 = input.next().charAt(0);
			game.Input(input1);
			if(i < 15) {
				game.checkIfWinner();
					
					if(input1 == '1') {
					    //game.checkIfTaken(input1, game.numboard, 0, 0);
					    
					}
					
			}
			else {
				System.out.println("This game is a tie");
			}
		}
		
	}

}
