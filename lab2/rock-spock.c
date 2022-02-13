/**
 * @file rock-spock.c
 * @author Madison Mejia
 * @date 2/9/2022
 * @brief Play Rock-paper-scissors-lizard-Spock against the machine
 * @bug None found so far
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>


#define COMPUTER 8088
#define PLAYER 1000

#define CHOICES 5

#define ROCK 'R'
#define PAPER 'P'
#define SCISSORS 'S'
#define LIZARD 'L'
#define SPOCK 'V'
#define QUIT 'Q'

///function prototypes
void move(int who, int move);
int winner(int computer, int player);
void print_winner(int winner, int comp_move, int player_move);
int nrand(int range);
void seed();


int main(void)
{
	int computer;
	int player;
        int tmp;

	///sets up the seed value for RNG 
	seed();

	///Prompts user to chose from the following options
	printf("Enter a move:\n");
	printf("R for ROCK\n");
	printf("P for PAPER\n");
	printf("S for SCISSORS\n");
	printf("L for LIZARD\n");
	printf("V for SPOCK\n");
	printf("Q to have SPOCK eat a ROCK while chasing a LIZARD and quit\n");
	printf("Move: ");

	/**
	 * stores user input in tmp to check for the newline character
	 * then stores the value in the player variable
	 */
	while ((tmp = getchar()) != '\n')
		player = tmp;
	
	/**
	 * will execute move function unless Q or some other 
	 * unrecognized character is entered
	 */
	switch (player) {
	case ROCK:
	case PAPER:
	case SCISSORS:
	case SPOCK:
	case LIZARD:
		move(PLAYER, player);
		break;
	case QUIT:
		printf("SPOCK eats a ROCK while chasing a LIZARD.\n");
		return 0;
	default:
		printf("The value is unknown. Try again.\n");
		return 0;
	}

        ///generates random number for computer's play 
        switch(nrand(CHOICES)) {
        case 0:
        	computer = ROCK;
        	break;
        case 1:
        	computer = PAPER;
        	break;
        case 2:
        	computer = SCISSORS;
        	break;
        case 3:
        	computer = LIZARD;
        	break;
        case 4:
        	computer = SPOCK;
        	break;
        }

	///calls the move function for the computer
	move(COMPUTER, computer);

	///prints the winner using the winner function
	print_winner(winner(computer, player), computer, player);	

	return 0;
}


/** prints the player's or computer's move to stdin
 * used in debugging
 * @param who is it the computer or the player's move?
 * @param move what move did they make
 * @return void
 */
void move(int who, int move)
{
	if (who == COMPUTER)
		printf("Computer's play is ");
	else
		printf("Player's play is ");


	switch(move) {
	case ROCK:
		printf("ROCK\n");
		break;
	case PAPER:
		printf("PAPER\n");
		break;
	case SCISSORS:
		printf("SCISSORS\n");
		break;
	case SPOCK:
		printf("SPOCK\n");
		break;
	case LIZARD:
		printf("LIZARD\n");
		break;
    	}
}


/**
 * determines the winner either COMPUTER or PLAYER using switch statements
 * @param computer the computer's move
 * @param player the player's move
 * @return the winner of the game or the result of a tie
 */
int winner(int computer, int player)
{
	switch (player) {
	case ROCK:
		switch (computer) {
		case ROCK:
			return ROCK;
			break;
		case PAPER:
		case SPOCK:
			return COMPUTER;
			break;
		default:
			return PLAYER;
		} 
		break;
	case PAPER:
		switch (computer) {
		case PAPER:
			return PAPER;
			break;
		case SCISSORS:
		case LIZARD:
			return COMPUTER;
			break;
		default:
			return PLAYER;
		}
		break;
	case SCISSORS:
		switch (computer) {
		case SCISSORS:
			return SCISSORS;
			break;
		case ROCK:
		case SPOCK:
			return COMPUTER;
			break;
		default: 
			return PLAYER;
		}
		break;
	case LIZARD:
		switch (computer) {
		case LIZARD:
			return LIZARD;
		case ROCK:
		case SPOCK:
			return COMPUTER;
		default:
			return PLAYER;
		}
		break;
	case SPOCK:
		switch (computer) {
		case SPOCK:
			return SPOCK;
		case LIZARD:
		case PAPER:
			return COMPUTER;
		default:
			return PLAYER;
		}
		break;
	}

	///returns computer as winner if something is buggy
	return COMPUTER;
}

/**
 * prints the winner of the game to stdin
 * @param winner who won the computer or player
 * @param comp_move what move did the computer make
 * @param play_move what move did the player make
 * @return void
 */
void print_winner(int winner, int comp_move, int player_move)
{   
	///switch statement uses winner variable to determine result
	switch (winner) {
	case COMPUTER:
		printf("Computer Wins!\n");
		break;
	case PLAYER:
		printf("Player Wins!\n");
		break;
	default:
		printf("Tie!\n");

	}

	/**
	* switch statement determines how the match was won 
	* using the values for the computer's move and player's move
	*/
	switch(comp_move) {
	case ROCK:
		switch (player_move) {
		case PAPER:
			printf("Paper covers rock\n");
			break;
		case LIZARD:
			printf("Rock crushes lizard\n");
			break;
		case SCISSORS:
			printf("Rock crushes scissors\n");
			break;
		case SPOCK:
			printf("Spock vaporizes rock\n");
		}
		break;
	case PAPER:
		switch (player_move) {
		case SCISSORS:
			printf("Scissors cuts paper\n");
			break;
		case ROCK:
			printf("Paper covers rock\n");
			break;
		case LIZARD:
			printf("Lizard eats paper\n");
			break;
		case SPOCK:
			printf("Paper disproves Spock\n");
		}
		break;
	case SCISSORS:
		switch (player_move) {
		case PAPER:
			printf("Scissors cuts paper\n");
			break;
		case SPOCK:
			printf("Spock smashes scissors\n");
			break;
		case LIZARD:
			printf("Scissors decapitates lizard\n");
			break;
		case ROCK:
			printf("Rock crushes scissors\n");
		}
		break;
	case LIZARD:
		switch (player_move) {
		case ROCK:
			printf("Rock crushes lizard\n");
			break;
		case SPOCK:
			printf("Lizard poisons Spock\n");
			break;
		case SCISSORS:
			printf("Scissors decaptitates lizard\n");
			break;
		case PAPER:
			printf("Lizard eats paper\n");
		}
		break;
	case SPOCK:
		switch (player_move) {
		case LIZARD:
			printf("Lizard poisons Spock\n");
			break;
		case SCISSORS:
			printf("Spock smashes scissors\n");
			break;
		case PAPER:
			printf("Paper disproves Spock\n");
			break;
		case ROCK:
			printf("Spock vaporizes rock");
		}		
		break;
	}

}

/**
 * returns a uniform random integer n, between 0 <= n < range
 * @param range defines the range of the random number [0,range)
 * @return the generated random number (RNG)
 */
int nrand(int range)
{
	return rand() % range;
}

/**
 * calls this to seed RNG rand()
 * uses a simple seed -- the number of seconds since the epoch
 * calls once before using nrand and similar functions that call rand()
 */
void seed(void)
{
  	srand((unsigned int)time(NULL));
}

