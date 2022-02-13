/**
 * @file rock-spock.c
 * @author Gabe Turner
 * @date 09-10-21
 * @brief Play Rock-paper-scissors-lizard-Spock against the machine
 * @bug none
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

/*these are the function protocols*/
int winner(int computer, int player);
void print_winner(int winner, int comp_move, int player_move);
int nrand(int range);
void seed();


int main(void)
{
	/*the variables that are needed in this
	 * computer is the computers move
	 * player is the player move
	 * tmp is the temp variable used to transfer the input to the players move
	*/
	int computer;
	int player;
    int tmp;

	/* set up the seed value for the random number generator */
	/* call only once */
	seed();
	/* this while will cause the code to go until 'Q' is pressed */
	while (tmp != 'Q'){ 
    	printf("Enter a move:\n");
		printf("R for ROCK\n");
		printf("P for PAPER\n");
		printf("S for SCISSORS\n");
		printf("L for LIZARD\n");
		printf("V for SPOCK\n");
		printf("Q to have SPOCK eat a ROCK while chasing a LIZARD and quit\n");
		printf("Move: ");

		/*this just is the user input section and transfers the input to player */
		while ((tmp = getchar()) != '\n')
    		player = tmp;
		
		/*this prints what the player chose by using the input from the user*/
		switch(player) {
		case ROCK:
			printf("players move is ROCK\n");
			break;
		case PAPER:
			printf("players move is PAPER\n");
			break;
		case SCISSORS:
			printf("players move is SCISSORS\n");
			break;
		case SPOCK:
			printf("players move is SPOCK\n");
			break;
		case LIZARD:
			printf("players move is LIZARD\n");
			break;
		case 'Q':
			/*causes code to terminate if Q is pressed*/
			return 0;
		default:
			/* happens when there is an incorrect input*/
			/* prints an error message then restarts the code*/ 
			printf("unknown value try again.\n");
			continue;
		}

		/* 
		 * uses a random value between 0-4
		 * it then uses this value and decides a random choice for the computer
		*/
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

		/* prints what the computer chose by using the random choice above*/
		printf("computers move is ");
		switch(computer) {
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
	
		/* calls upon the print_winner function*/
		/* this uses the result of winner and uses the computer and player choices*/
		print_winner(winner(computer,player), computer, player);
	}
	return 0;
	
}

/**
 * determines the winner either COMPUTER or PLAYER
 * @param computer the computer's move
 * @param player the player's move
 * @return the winner of the game
 */
int winner(int computer, int player) 
{
	/*
	 * This switch statement below will determine the players move
	 * Knowing the players move it then looks at the computers move
	 * From both of these pieces of information it then finds who won the match
	 * This then returns either PLAYER, COMPUTER, or the move they both chose
	 * PLAYER means player wins and COMPUTER means computer wins
	 * The move they both did will result in a tie
	*/
	switch(player)
	{
	case ROCK:
		switch (computer)
		{
		case ROCK:
			return ROCK;
			break;
		case PAPER:
			return COMPUTER;
			break;
		case SCISSORS:
			return PLAYER;
			break;
		case LIZARD:
			return PLAYER;
			break;
		case SPOCK:
			return COMPUTER;
			break;
		}
	break;
	case PAPER:
		switch (computer)
		{
		case ROCK:
			return PLAYER;
			break;
		case PAPER:
			return PAPER;
			break;
		case SCISSORS:
			return COMPUTER;
			break;
		case LIZARD:
			return COMPUTER;
			break;
		case SPOCK:
			return PLAYER;
			break;
		}
	break;
	case SCISSORS:
		switch (computer)
		{
		case ROCK:
			return COMPUTER;
			break;
		case PAPER:
			return PLAYER;
			break;
		case SCISSORS:
			return SCISSORS;
			break;
		case LIZARD:
			return PLAYER;
			break;
		case SPOCK:
			return COMPUTER;
			break;
		}
	break;
	case LIZARD:
		switch (computer)
		{
		case ROCK:
			return COMPUTER;
			break;
		case PAPER:
			return PLAYER;
			break;
		case SCISSORS:
			return COMPUTER;
			break;
		case LIZARD:
			return LIZARD;
			break;
		case SPOCK:
			return PLAYER;
			break;
		}
	break;
	case SPOCK:
		switch (computer)
		{
		case ROCK:
			return PLAYER;
			break;
		case PAPER:
			return COMPUTER;
			break;
		case SCISSORS:
			return PLAYER;
			break;
		case LIZARD:
			return COMPUTER;
			break;
		case SPOCK:
			return SPOCK;
			break;
		}
	break;
	}
	/* 
	 * this only happens in the weird case that the error check doesn't work
	 * in this off chance it will cause the computer to be the winner 
	 * basically its a little anti hacking thingy
	*/
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
	/* Uses the results from @param winner to print who won the match */
	switch (winner)
	{
	case COMPUTER:
		printf("Computer Wins!\n");
		break;
	case PLAYER:
		printf("Player Wins!\n");
		break;
	default:
		printf("Tie!\n");
	}
	/*
	 * This switch statement below will determine the players move
	 * Knowing the players move it then looks at the computers move
	 * From both of these pieces of information it then determines how the match was won
	 * It then will print the resulting information of how they won.
	*/
	switch(player_move)
	{
		case ROCK:
			switch (comp_move)
			{
				case PAPER:
					printf("Paper covers rock\n");
					break;
				case SCISSORS:
					printf("Rock crushes scissors\n");
					break;
				case LIZARD:
					printf("Rock crushes lizard\n");
					break;
				case SPOCK:
					printf("Spock vaporizes rock\n");
			}
			break;
		case PAPER:
			switch (comp_move)
			{
			case ROCK:
				printf("Paper covers rock\n");
				break;
			case SCISSORS:
				printf("Scissors cuts paper\n");
				break;
			case LIZARD:
				printf("Lizard eats paper\n");
				break;
			case SPOCK:
				printf("Paper disproves Spock\n");
			}
		break;
		case SCISSORS:
			switch (comp_move)
			{
			case ROCK:
				printf("Rock crushes scissors\n");
				break;
			case PAPER:
				printf("Scissors cuts paper\n");
				break;
			case LIZARD:
				printf("Scissors decapitates lizard\n");
				break;
			case SPOCK:
				printf("Spock smashes scissors\n");
			}
		break;
		case LIZARD:
			switch (comp_move)
			{
			case ROCK:
				printf("Rock crushes lizard\n");
				break;
			case PAPER:
				printf("Lizard eats paper\n");
				break;
			case SCISSORS:
				printf("Scissors decapitates lizard\n");
				break;
			case SPOCK:
				printf("Lizard poisons Spock\n");
			}
		break;
		case SPOCK:
			switch (comp_move)
			{
			case ROCK:
				printf("Spock vaporizes rock\n");
				break;
			case PAPER:
				printf("Paper disproves Spock\n");
				break;
			case SCISSORS:
				printf("Spock smashes scissors\n");
				break;
			case LIZARD:
				printf("Lizard poisons Spock\n");
				break;
			}
		break;
	}
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
