#include<iostream.h>
int wincheck(char pos[4][4]);
void main(void)
{
    int wincheck(char pos[4][4]);
	int col,row,turn=0;
	char pos[4][4];


	//Initializing with " " the whole array
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			pos[i][j]=' ';
		}
	}


	while(turn<16)
	{				//Turn is no of turn of the game.

		if(turn%2==0)			//If turn is even then it's Player1's turn
			cout<<"Player1's Turn (X)\n";
		else
			cout<<"Player2's Turn (O)\n";


		do
		{

			cout<<"Row : ";					//Getting row
			cin>>row;

			cout<<"Column : ";				//Getting column
			cin>>col;

			if(col>4||row>4||pos[row-1][col-1]!=' ')
				cout<<"Wrong entry. Please Re-Enter\n";		//Checking the validation of entry
			

		}
		while(col>4||row>4||pos[row-1][col-1]!=' ');



		if(turn%2==0)
			pos[row-1][col-1]='X';
		else
			pos[row-1][col-1]='O';


		cout<<"\n\n";

		for(i=0;i<4;i++)
		{
			for(int j=0;j<4;j++)
			{
				if(j!=0)
					cout<<"  |  ";
				cout<<pos[i][j];
			
			}
			if(i<3)
				cout<<"\n---------------------";
			cout<<"\n\n";
		
		}


		turn++;
		int re =wincheck(pos);
		if(re ==1&&turn%2!=0)
		{
			cout<<"Player1 won the game"<<endl;
			cout<<"Total turns: "<<turn<<endl;
			break;
		}
	
		if(turn==16)
		{
			cout<<"The game is drawn";
		}
	}
}	



int wincheck(char pos[4][4])
{

	for(int i=0;i<4;i++)
	{
		for(int j=1;j<4;j++)
		{
			if(pos[i][j]!=pos[i][j-1]||pos[i][j-1]==' ')
				break;
		}
		if(j==4)
			return 1;
	}

	for(i=0;i<4;i++)
	{
		for(int j=1;j<4;j++)
		{
			if(pos[j][i]!=pos[j-1][i]||pos[j-1][i]==' ')
				break;
		}
		if(j==4)
			return 1;
	}

	for(i=1;i<4;i++)
	{
		if(pos[i][i]!=pos[i-1][i-1]||pos[i-1][i-1]==' ')
			break;
	}

	if(i==4)
	{
		return 1;
	}

	for(i=0;i<3;i++)
	{
		if(pos[i][3-i]!=pos[i+1][3-i-1]||pos[i][3-i]==' ')
			break;
		
	}

	if(i==3)
	{
		return 1;
	}

	return 0;

}
