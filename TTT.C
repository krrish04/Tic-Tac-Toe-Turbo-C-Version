
/*------------------------------------------------------------------------*/
/* -------------------        TIC TAC TOE        -------------------------*/
/*------------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int i,j,TURN=0;
char TTT[7][7],k;

void BEGIN()
{
	TTT[1][1]=TTT[1][3]=TTT[1][5]=TTT[3][1]=TTT[3][3]=TTT[3][5]=TTT[5][1]=TTT[5][3]=TTT[5][5]=' ';
}

void PRINT()
{
	printf("\n\n");
	for(i=0;i<7;i++)
	{
		for(j=0;j<7;j++)
		{
			printf("%c",TTT[i][j]);
		}
		printf("\n");
	}
}

void INITIALIZE()
{
	TTT[0][0]=218;TTT[0][6]=191;TTT[6][0]=192;TTT[6][6]=217;
	TTT[2][0]=TTT[4][0]=195;TTT[2][6]=TTT[4][6]=180;
	TTT[0][2]=TTT[0][4]=194;TTT[6][2]=TTT[6][4]=193;
	TTT[2][2]=TTT[2][4]=TTT[4][2]=TTT[4][4]=197;
	TTT[0][1]=TTT[0][3]=TTT[0][5]=TTT[2][1]=TTT[2][3]=TTT[2][5]=TTT[4][1]=TTT[4][3]=TTT[4][5]=TTT[6][1]=TTT[6][3]=TTT[6][5]=196;
	TTT[1][0]=TTT[1][2]=TTT[1][4]=TTT[1][6]=TTT[3][0]=TTT[3][2]=TTT[3][4]=TTT[3][6]=TTT[5][0]=TTT[5][2]=TTT[5][4]=TTT[5][6]=179;

	TTT[1][1]='1';TTT[1][3]='2';TTT[1][5]='3';TTT[3][1]='4';TTT[3][3]='5';
	TTT[3][5]='6';TTT[5][1]='7';TTT[5][3]='8';TTT[5][5]='9';

}

void INCHK(int k)
{
	switch(k)
	{
		case 49:
			if(TTT[1][1]==' ')
			{
				++TURN;
				if(TURN%2==0)
					TTT[1][1]='O';
				else
					TTT[1][1]='X';

				PRINT();
				break;
			}
			else
			{
				printf("\nPosition already acquired. Try again:\n");
				PRINT();
				break;
			}

		case 50:
			if(TTT[1][3]==' ')
			{
				++TURN;
				if(TURN%2==0)
					TTT[1][3]='O';
				else
					TTT[1][3]='X';

				PRINT(); break;
			}
			else
			{
				printf("\nPosition already acquired. Try again:\n");
				PRINT();   break;
			}
		case 51:
			if(TTT[1][5]==' ')
			{
				++TURN;
				if(TURN%2==0)
					TTT[1][5]='O';
				else
					TTT[1][5]='X';


				PRINT();
				break;
			}
			else
			{
				printf("\nPosition already acquired. Try again:\n"); PRINT(); break;
			}
		case 52:
			if(TTT[3][1]==' ')
			{
				++TURN;
				if(TURN%2==0)
					TTT[3][1]='O';
				else
					TTT[3][1]='X';


				PRINT();
				break;
			}
			else
			{
				printf("\nPosition already acquired. Try again:\n"); PRINT(); break;
			}
		case 53:
			if(TTT[3][3]==' ')
			{
				++TURN;
				if(TURN%2==0)
					TTT[3][3]='O';
				else
					TTT[3][3]='X';


				PRINT();
				break;
			}
			else
			{
				printf("\nPosition already acquired. Try again:\n"); PRINT(); break;
			}
		case 54:
			if(TTT[3][5]==' ')
			{
				++TURN;
				if(TURN%2==0)
					TTT[3][5]='O';
				else
					TTT[3][5]='X';


				PRINT();
				break;
			}
			else
			{
				printf("\nPosition already acquired. Try again:\n"); PRINT(); break;
			}
		case 55:
			if(TTT[5][1]==' ')
			{
				++TURN;
				if(TURN%2==0)
					TTT[5][1]='O';
				else
					TTT[5][1]='X';


				PRINT();
				break;
			}
			else
			{
				printf("\nPosition already acquired. Try again:\n");  PRINT(); break;
			}
		case 56:
			if(TTT[5][3]==' ')
			{
				++TURN;
				if(TURN%2==0)
					TTT[5][3]='O';
				else
					TTT[5][3]='X';


				PRINT();
				break;
			}
			else
			{
				printf("\nPosition already acquired. Try again:\n"); PRINT(); break;
			}
		case 57:
			if(TTT[5][5]==' ')
			{
				++TURN;
				if(TURN%2==0)
					TTT[5][5]='O';
				else
					TTT[5][5]='X';
				PRINT();
				break;
			}
			else
			{
				printf("\nPosition already acquired. Try again:\n"); PRINT(); break;
			}
		default:
			printf("\nEnter a valid Position no. Try again: \n");

	}
}

void WINCHK()
{
	if((TTT[1][1]==TTT[1][3] && TTT[1][3]==TTT[1][5] && TTT[1][1]!=' ' && TTT[1][3]!=' ' && TTT[1][5]!=' ') ||
	   (TTT[3][1]==TTT[3][3] && TTT[3][3]==TTT[3][5] && TTT[3][1]!=' ' && TTT[3][3]!=' ' && TTT[3][5]!=' ') ||
	   (TTT[5][1]==TTT[5][3] && TTT[5][3]==TTT[5][5] && TTT[5][5]!=' ' && TTT[5][1]!=' ' && TTT[5][3]!=' ') ||
	   (TTT[1][1]==TTT[3][1] && TTT[3][1]==TTT[5][1] && TTT[1][1]!=' ' && TTT[3][1]!=' ' && TTT[5][1]!=' ') ||
	   (TTT[1][3]==TTT[3][3] && TTT[3][3]==TTT[5][3] && TTT[1][3]!=' ' && TTT[3][3]!=' ' && TTT[5][3]!=' ') ||
	   (TTT[1][5]==TTT[3][5] && TTT[3][5]==TTT[5][5] && TTT[1][5]!=' ' && TTT[3][5]!=' ' && TTT[5][5]!=' ') ||
	   (TTT[1][1]==TTT[3][3] && TTT[3][3]==TTT[5][5] && TTT[3][3]!=' ' && TTT[1][1]!=' ' && TTT[5][5]!=' ') ||
	   (TTT[1][5]==TTT[3][3] && TTT[3][3]==TTT[5][1] && TTT[3][3]!=' ' && TTT[1][5]!=' ' && TTT[5][1]!=' '))
	{
		if((TURN+1)%2==0)
		{
			printf("\nPLayer 2 Wins.\nThanks....!!\n");
		}
		else
			printf("\nPLayer 1 Wins.\nThanks....!!\n");

		printf("\nPress any key to exit.\n");
		getch(); exit(0);
	}
}

int main()
{
	
	printf("\n\nWELCOME to TIC-TAC-TOE !!!\n\n");
	printf("\nFollowing Grid shows the position nos. Enter position no s to play:\n\n");
	INITIALIZE();
	PRINT();
	getch();
	BEGIN();
	PRINT();
	while(TURN<9)
	{
		if(TURN%2==0)
		{
			printf("\nSTEP:%d : PLayer 2's TURN: ",TURN+1);
			k=getch();
			if(k<1+48 || k>9+48)
				printf("\nEnter a valid position no. Try again: \n");
			else
			{
				INCHK(k); WINCHK();
			}
		}
		else
		{
			printf("\nSTEP:%d : PLayer 1's TURN: ",TURN+1);
			k=getch();
			if(k<1+48 || k>9+48)
				printf("\nEnter a valid position no. Try again: \n");
			else
			{
				INCHK(k); WINCHK();
			}
		}
	}


	return 0;

}
