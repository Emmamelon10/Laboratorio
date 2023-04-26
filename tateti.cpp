#include<stdio.h>
#include<iostream>
#include<stdbool.h>  

int x,i,j,a,b,j1,j2,e;
char t[3][3]={' ',' ',' ',' ',' ',' ',' ',' ',' '},m[2]={'X','O'};
void tablero()
{
	for(i=0;i<3;i++)
	{
		printf("\t");
		for(j=0;j<2;j++)
		{
			printf(" %c |",t[i][j]);
		}
		printf(" %c  %d\n\t---+---+---\n",t[i][2],i+1);
	}
	printf("\t 1   2   3");
}
main()
{
	//Bienvenida
	printf("BIENVENIDO A TA TE TI...\n\n\n\tPara hacer tu jugada pon tu coordenada en formato X Y(con un espacio entre medio) porfavor\n\nLISTO PARA JUGAAAR? :D\n");
	system("pause");
	system("cls");
	while(j1==0 && j2==0)
	{
		for(x=0;x<2;x++)  //condicional de victoria
		{
			if(j1!=0 || j2!=0)
			{
				continue;
			}
			do
			{
				system("cls");
				if(e==1)
				{
					printf("ERROR: Ponga valores entre 1 y 3!!\n\n");
					}
					else if(e==2)
					{
						printf("ERROR: Esa casilla ya esta ocupada!!\n\n");
					}
					e=0;
					tablero();
					printf("\n\nJUGADOR %d!!: ",x+1);			//turno del primer jugador
					scanf("%d %d",&b,&a);
					if(a>3 || a<1 || b>3 || b<1)
					{
						e=1;       // sistema de error
					}
					if(t[a-1][b-1]!=' ')
						{
						e=2;
					}
				}
				while(e!=0);
				t[a-1][b-1]=("%c",m[x]);
				tablero();
			if(t[0][0]=='X'&&t[0][1]=='X'&&t[0][2]=='X')		//condicionales de victorias del J1
			{
				j1++;
			}
			if(t[1][0]=='X'&&t[1][1]=='X'&&t[1][2]=='X')
			{
				j1++;
			}
			if(t[2][0]=='X'&&t[2][1]=='X'&&t[2][2]=='X')
			{
				j1++;
			}
			if(t[0][0]=='X'&&t[1][0]=='X'&&t[2][0]=='X')
			{
				j1++;
			}
			if(t[0][1]=='X'&&t[1][1]=='X'&&t[2][1]=='X')
			{
				j1++;
			}
			if(t[0][2]=='X'&&t[1][2]=='X'&&t[2][2]=='X')
			{
				j1++;
			}
			if(t[0][0]=='X'&&t[1][1]=='X'&&t[2][2]=='X')
			{
				j1++;
			}
			if(t[2][0]=='X'&&t[1][1]=='X'&&t[0][2]=='X')
			{
				j1++;
			}
			if(t[0][0]=='O'&&t[0][1]=='O'&&t[0][2]=='O')		//condiciones de victoria J2
			{
				j2++;
			}
			if(t[1][0]=='O'&&t[1][1]=='O'&&t[1][2]=='O')
			{
				j2++;
			}
			if(t[2][0]=='O'&&t[2][1]=='O'&&t[2][2]=='O')
			{
				j2++;
			}
			if(t[0][0]=='O'&&t[1][0]=='O'&&t[2][0]=='O')
			{
				j2++;
			}
			if(t[0][1]=='O'&&t[1][1]=='O'&&t[2][1]=='O')
			{
				j2++;
			}
			if(t[0][2]=='O'&&t[1][2]=='O'&&t[2][2]=='O')
			{
				j2++;
			}
			if(t[0][0]=='O'&&t[1][1]=='O'&&t[2][2]=='O')
			{
				j2++;
			}
			if(t[2][0]=='O'&&t[1][1]=='O'&&t[0][2]=='O')
			{
				j2++;
			}
		}
	}			//final del juego y textos de victoria
		if(j1!=0)
		{
			printf("\n\nEL JUGADOR 1 GANO!! :D\n");
		}
		else
		{
			printf("\n\nEL JUGADOR 2 GANO!! :D\n");
		}
}
