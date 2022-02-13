/**
 * @file rock-spock.c
 * @author Madison Mejia
 * @date 2/9/2022
 * @brief Play Rock-paper-scissors-lizard-Spock against the machine
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

	/* set up the seed value for the random number generator */
	/* call only once */
	seed();

        /* todo - add a while loop to keep playing */

	while (tmp != 'Q') {
		printf("Enter a move:\n");
		printf("R for ROCK\n");
		printf("P for PAPER\n");
		printf("S for SCISSORS\n");
		printf("L for LIZARD\n");
		printf("V for SPOCK\n");
		printf("Q to have SPOCK eat a ROCK while chasing a LIZARD and quit\n");
		printf("Move: ");

		while ((tmp = getchar()) != '\n')
                	player = tmp;


        /* todo - error check input */
	/* todo -- exit from program when player selects 5 */
	/* otherwise play a game of rock-paper-scissors-lizard-spock */

        /* debug -- you don't need move() to play game  */
		move(PLAYER, player);

        /* generate random number for computers play */
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

	/*debug -- you don't need this to play the game */
		move(COMPUTER, computer);


        /* todo --implement function winner() */
        /* todo --implement function print_winner() */
		

	}

	return 0;
}


/** prints the player's or computer's  move to stdin
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
 * determines the winner either COMPUTER or PLAYER
 * @param computer the computer's move
 * @param player the player's move
 * @return the winner of the game
 */
int winner(int computer, int player)
{
	switch (player) {
	case ROCK:
		switch (computer) {
		case PAPER:
		case SPOCK:
			return COMPUTER;
			break;
		default:
			return PLAYER;
		}
	case PAPER:
		switch (computer) {
		case SCISSORS:
		case LIZARD:
			return COMPUTER;
			break;
		default:
			return PLAYER;
		}
	case SCISSORS:
		switch (computer) {
		case ROCK:
		case SPOCK:
			return COMPUTER;
			break;
		default: 
			return PLAYER;
	
		}
	case LIZARD:
		switch (computer) {
		case ROCK:
		case SPOCK:
			return COMPUTER;
		default:
			return PLAYER;
		}
	case SPOCK:
		switch (computer) {
		case LIZARD:
		case PAPER:
			return COMPUTER;
		default:
			return PLAYER;
		}
	case 'Q':
		printf("SPOCK eats a ROCK while chasing a LIZARD.\n");
		return 0;
	default:
		printf("The entered value is unknown. Try again.\n");
	}
	/* todo - determine the winner; use switch statements */
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
			switch (comp_move) {
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


	/*todo - use a switch statement


    print Computer Wins! or Player Wins!

    And how they won. Use the phrases below

    Scissors cuts paper
    Paper covers rock
    Rock crushes lizard
    Lizard poisons Spock
    Spock smashes scissors
    Scissors decapitates lizard
    Lizard eats paper
    Paper disproves Spock
    Spock vaporizes rock
    Rock crushes scissors
*/
}

/**
 * returns a uniform random integer n, between 0 <= n < range
 * @param range defines the range of the random number [0,range)
 * @return the generated random number
 */
int nrand(int range)
{
	return rand() % range;
}

/**
 * call this to seed the random number generator rand()
 * uses a simple seed -- the number of seconds since the epoch
 * call once before using nrand and similar functions that call rand()
 */
void seed(void)
{
  	srand((unsigned int)time(NULL));
}

