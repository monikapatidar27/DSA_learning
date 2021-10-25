#include <stdio.h>
#include <conio.h>
#include <stdlib.h>



int checkWin(char square[]);
void drawBoard(char square[]);

int main(){
int again=1;
	while(again!=0){
char square[10] = {'o','1','2','3','4','5','6','7','8','9'};
	int player = 1, i ,choice;
	char ch; // X,O
	do {
		drawBoard(square);
		player = (player % 2) ? 1 : 2;
		printf("Player %d, enter the choice : ",player);
		scanf("%d",&choice);
		ch = (player == 1) ? 'X' : 'O';
		if(choice == 1 && square[1] == '1')
			square[1] = ch;
		else if(choice == 2 && square[2] == '2')
			square[2] = ch;
			else if(choice == 3 && square[3] == '3')
			square[3] = ch;
			else if(choice == 4 && square[4] == '4')
			square[4] = ch;
			else if(choice == 5 && square[5] == '5')
			square[5] = ch;
			else if(choice == 6 && square[6] == '6')
			square[6] = ch;
			else if(choice == 7 && square[7] == '7')
			square[7] = ch;
			else if(choice == 8 && square[8] == '8')
			square[8] = ch;
			else if(choice == 9 && square[9] == '9')
			square[9] = ch;
			
			else {
				printf("Invalid option !");
				player--;
				getch();
			}
			i = checkWin(square);
			player++;	
		
	}while(i == -1);
	
	drawBoard(square);
	if(i==1){
		printf("==>Player %d won",--player);
		
	}
	else {
		printf("==>Game draw");
	}
	printf("\n\t\tTo play again enter 1 and to exit the game 0\n");
	scanf("%d",&again);
	}
		getch();
		return 0;
}
int checkWin(char square[]){
	if(square[1] == square[2] && square[2] == square[3])
		return 1;
	else if (square[4] == square[5] && square[5] == square[6])
		return 1;
	else if(square[7] == square[8] && square[8] == square[9])
		return 1;
	else if(square[1] == square[4] && square[4] == square[7])
		return 1;
	else if(square[2] == square[5] && square[5] == square[8])
		return 1;
	else if(square[3] == square[6] && square[6] == square[9])
		return 1;
	else if(square[1] == square[5] && square[5] == square[9])
		return 1;
	else if(square[3] == square[5] && square[5] == square[7])
		return 1;
	else if(square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] !='4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
		return 0;
	else 
		return -1;	
}

void drawBoard(char square []){

	printf("\n\n\t Tic Tac Toe \n\n");
	printf("Player1 (X) - Player2 (O) \n\n\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",square[1],square[2],square[3]);
	printf("_____|_____|____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",square[4],square[5],square[6]);
	printf("_____|_____|____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",square[7],square[8],square[9]);
	printf("     |     |     \n");	
}