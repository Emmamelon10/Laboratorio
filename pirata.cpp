#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>

int x,y,i,j,a,b,s,w,l,lf=1,e=0;

void insertartablero()
{
	char tablero[x][y];
	srand(time(NULL));
	i=x-1;
	j=y-1;
	a=2+rand()%(i-2);
	b=2+rand()%(j-2);
	do
	{
	s=2+rand()%(i-2);
	w=2+rand()%(j-2);
	}
	while(s==a || w==b);
	for(j=0;j<y;j++)
	{
		for(i=0;i<x;i++)
		{
			if((i==0 || i==x-1) || (j==0 || j==y-1))
			{
				tablero[i][j]=247;
			}
			else
			{
				tablero[i][j]=176;
			}
			if((i==x-1 && j==0)||(i==0 && j==y-1))
			{
				tablero[i][j]=223;
			}
			if((s==1 && w==y-2)&& x>=7)
			{
				tablero[1][y-1]='P';
				tablero[2][y-1]='r';
				tablero[3][y-1]='e';
				tablero[4][y-1]='s';
				tablero[5][y-1]='s';
				tablero[6][y-1]='Z';
			}
			else if((s==x-2 && w==1)&& x>=7)
			{
				tablero[x-7][0]='P';
				tablero[x-6][0]='r';
				tablero[x-5][0]='e';
				tablero[x-4][0]='s';
				tablero[x-3][0]='s';
				tablero[x-2][0]='Z';
			}
			tablero[a][b]=6;
			if(e==2)
			{
				tablero[a][b]= 127;
				if(tablero[s+1][w]==127)
				{
					tablero[s][w-1]='!';
				}
				else
				{
					tablero[s+1][w]='!';
				}
			}
			tablero[s][w]=2;
		}
	}
	
}
void imprimirtablero()
{
	char tablero[x][y];
	for(j=0;j<y;j++)
	{
		printf("\t\t||");
		for(i=0;i<x;i++)
		{
			if((i==0 || i==x-1) || (j==0 || j==y-1))
			{
				tablero[i][j]=247;
			}
			else
			{
				tablero[i][j]=176;
			}
			if((i==x-1 && j==0)||(i==0 && j==y-1))
			{
				tablero[i][j]=223;
			}
			if((s==1 && w==y-2)&& x>=7)
			{
				tablero[1][y-1]='P';
				tablero[2][y-1]='r';
				tablero[3][y-1]='e';
				tablero[4][y-1]='s';
				tablero[5][y-1]='s';
				tablero[6][y-1]='Z';
			}
			else if((s==x-2 && w==1)&& x>=7)
			{
				tablero[x-7][0]='P';
				tablero[x-6][0]='r';
				tablero[x-5][0]='e';
				tablero[x-4][0]='s';
				tablero[x-3][0]='s';
				tablero[x-2][0]='Z';
			}
			if(e==2)
			{
				tablero[a][b]= 127;
				if(tablero[s+1][w]==127)
				{
					tablero[s][w-1]='!';
				}
				else
				{
					tablero[s+1][w]='!';
				}
			}
			tablero[s][w]=2;
			printf(" %c ",tablero[i][j]);
		}
		printf("||\n");
	}
	if(((s==1 && w==y-2)&& x<7)||((s==x-2 && w==1)&& x<7))
	{
		printf("\t\tPresione Z\n");
	}
}

main()
{
start:
	printf(" ________  ___  ________  ________  _________  _______           _________   \n|\\   __  \\|\\  \\|\\   __  \\|\\   __  \\|\\___   ___\\\\  ___ \\         |\\___   ___\\ \n\\ \\  \\|\\  \\ \\  \\ \\  \\|\\  \\ \\  \\|\\  \\|___ \\  \\_\\ \\   __/|        \\|___ \\  \\_| \n \\ \\   ____\\ \\  \\ \\   _  _\\ \\   __  \\   \\ \\  \\ \\ \\  \\_|/__           \\ \\  \\  \n  \\ \\  \\___|\\ \\  \\ \\  \\\\  \\\\ \\  \\ \\  \\   \\ \\  \\ \\ \\  \\_|\\ \\           \\ \\  \\ \n   \\ \\__\\    \\ \\__\\ \\__\\\\ _\\\\ \\__\\ \\__\\   \\ \\__\\ \\ \\_______\\           \\ \\__\\\n    \\|__|     \\|__|\\|__|\\|__|\\|__|\\|__|    \\|__|  \\|_______|            \\|__|\n\nBIENVENID@\n\n\n\n\tCantidad de columnas: ");
	scanf("%d",&x);
	printf("\tCantidad de filas: ");
	scanf("%d",&y);
	insertartablero();
	do
	{
		l++;
		si:
			system("cls");
			printf(" ________  ___  ________  ________  _________  _______           _________   \n|\\   __  \\|\\  \\|\\   __  \\|\\   __  \\|\\___   ___\\\\  ___ \\         |\\___   ___\\ \n\\ \\  \\|\\  \\ \\  \\ \\  \\|\\  \\ \\  \\|\\  \\|___ \\  \\_\\ \\   __/|        \\|___ \\  \\_| \n \\ \\   ____\\ \\  \\ \\   _  _\\ \\   __  \\   \\ \\  \\ \\ \\  \\_|/__           \\ \\  \\  \n  \\ \\  \\___|\\ \\  \\ \\  \\\\  \\\\ \\  \\ \\  \\   \\ \\  \\ \\ \\  \\_|\\ \\           \\ \\  \\ \n   \\ \\__\\    \\ \\__\\ \\__\\\\ _\\\\ \\__\\ \\__\\   \\ \\__\\ \\ \\_______\\           \\ \\__\\\n    \\|__|     \\|__|\\|__|\\|__|\\|__|\\|__|    \\|__|  \\|_______|            \\|__|\n\n\n\ns=%d\nw=%d\n\n\t\tTienes %d movimientos restantes!!\n",s,w,50-l);
			imprimirtablero();
			i=getch();
			switch(i)
			{
				case 115:
					w++;
					if(a==s && w==b)
					{
						w--;
						e=2;
					}
					break;
				case 97:
					s--;
					if(a==s && w==b)
					{
						s++;
						e=2;
					}
					break;
				case 100:
					s++;
					if(a==s && w==b)
					{
						s--;
						e=2;
					}
					break;
				case 119:
					w--;
					if(a==s && w==b)
					{
						w++;
						e=2;
					}
					break;
				case 122:
					if(s==x-2 && w==1)
					{
						s=1;
						w=y-2;
						if(a==s && w==b)
						{	
							s++;
							e=2;
						}
					}
					else if(s==1 && w==y-2)
					{
						s=x-2;
						w=1;
						if(a==s && w==b)
						{	
							s--;
							e=2;
						}
					}
					break;
				default:
					system("cls");
					printf(" ________  ___  ________  ________  _________  _______           _________   \n|\\   __  \\|\\  \\|\\   __  \\|\\   __  \\|\\___   ___\\\\  ___ \\         |\\___   ___\\ \n\\ \\  \\|\\  \\ \\  \\ \\  \\|\\  \\ \\  \\|\\  \\|___ \\  \\_\\ \\   __/|        \\|___ \\  \\_| \n \\ \\   ____\\ \\  \\ \\   _  _\\ \\   __  \\   \\ \\  \\ \\ \\  \\_|/__           \\ \\  \\  \n  \\ \\  \\___|\\ \\  \\ \\  \\\\  \\\\ \\  \\ \\  \\   \\ \\  \\ \\ \\  \\_|\\ \\           \\ \\  \\ \n   \\ \\__\\    \\ \\__\\ \\__\\\\ _\\\\ \\__\\ \\__\\   \\ \\__\\ \\ \\_______\\           \\ \\__\\\n    \\|__|     \\|__|\\|__|\\|__|\\|__|\\|__|    \\|__|  \\|_______|            \\|__|\n\n\tERROR:Seleccione una opcion correcta\n\n\n\n");
					goto si;
					break;
			}
			if((s==0 || s==x-1) || (w==0 || w==y-1))
			{
				e=1;
			}
	}
	while(l<50 && e==0);
	system("cls");
	printf(" ________  ___  ________  ________  _________  _______           _________   \n|\\   __  \\|\\  \\|\\   __  \\|\\   __  \\|\\___   ___\\\\  ___ \\         |\\___   ___\\ \n\\ \\  \\|\\  \\ \\  \\ \\  \\|\\  \\ \\  \\|\\  \\|___ \\  \\_\\ \\   __/|        \\|___ \\  \\_| \n \\ \\   ____\\ \\  \\ \\   _  _\\ \\   __  \\   \\ \\  \\ \\ \\  \\_|/__           \\ \\  \\  \n  \\ \\  \\___|\\ \\  \\ \\  \\\\  \\\\ \\  \\ \\  \\   \\ \\  \\ \\ \\  \\_|\\ \\           \\ \\  \\ \n   \\ \\__\\    \\ \\__\\ \\__\\\\ _\\\\ \\__\\ \\__\\   \\ \\__\\ \\ \\_______\\           \\ \\__\\\n    \\|__|     \\|__|\\|__|\\|__|\\|__|\\|__|    \\|__|  \\|_______|            \\|__|\n\n\n\n\n\n");
	imprimirtablero();
	if(e==2)
	{
		printf("   ______                          __              __ __\n  / ____/____ _ ____   ____ _ ____/ /____   _____ / // /\n / / __ / __ `// __ \\ / __ `// __  // __ \\ / ___// // / \n/ /_/ // /_/ // / / // /_/ // /_/ // /_/ // /   /_//_/  \n\\____/ \\__,_//_/ /_/ \\__,_/ \\__,_/ \\____//_/   (_)(_)");
	}
	else
	{
	system("cls");
	printf("\n\t\t\t  _  _    _                                             _          _ \n\t\t\t (_)| |  | |                                           | |        | |\n\t\t\t | || |__| |  __ _  ___   _ __ ___   _   _   ___  _ __ | |_  ___  | |\n\t\t\t | ||  __  | / _` |/ __| | '_ ` _ \\ | | | | / _ \\| '__|| __|/ _ \\ | |\n\t\t\t | || |  | || (_| |\\__ \\ | | | | | || |_| ||  __/| |   | |_| (_) ||_|\n\t\t\t |_||_|  |_| \\__,_||___/ |_| |_| |_| \\__,_| \\___||_|    \\__|\\___/ (_)\n\n\t\t\t\t\t\tJugador se ahog%c\n\t\t\t\t\t\t  Puntuaci%cn:0\n\n\n\n\n",162,162);
	printf("\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\t\t\t\t\t%c           Reaparecer           %c\n\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187,186,186,200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
	printf("\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\t\t\t\t\t%c         Menu Principal         %c\n\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n",218,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,184,179,179,192,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
	while((i = getch()) != EOF )
	{
		died:
			i=getch();
			switch(i)
			{
				case 72:
					system("cls");
					printf("\n\t\t\t  _  _    _                                             _          _ \n\t\t\t (_)| |  | |                                           | |        | |\n\t\t\t | || |__| |  __ _  ___   _ __ ___   _   _   ___  _ __ | |_  ___  | |\n\t\t\t | ||  __  | / _` |/ __| | '_ ` _ \\ | | | | / _ \\| '__|| __|/ _ \\ | |\n\t\t\t | || |  | || (_| |\\__ \\ | | | | | || |_| ||  __/| |   | |_| (_) ||_|\n\t\t\t |_||_|  |_| \\__,_||___/ |_| |_| |_| \\__,_| \\___||_|    \\__|\\___/ (_)\n\n\t\t\t\t\t\tJugador se ahog%c\n\t\t\t\t\t\t  Puntuaci%cn:0\n\n\n\n\n",162,162);
					printf("\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\t\t\t\t\t%c           Reaparecer           %c\n\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187,186,186,200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
					printf("\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\t\t\t\t\t%c         Menu Principal         %c\n\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n",218,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,184,179,179,192,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
					lf=1;
					break;
				case 80:
				system("cls");
					printf("\n\t\t\t  _  _    _                                             _          _ \n\t\t\t (_)| |  | |                                           | |        | |\n\t\t\t | || |__| |  __ _  ___   _ __ ___   _   _   ___  _ __ | |_  ___  | |\n\t\t\t | ||  __  | / _` |/ __| | '_ ` _ \\ | | | | / _ \\| '__|| __|/ _ \\ | |\n\t\t\t | || |  | || (_| |\\__ \\ | | | | | || |_| ||  __/| |   | |_| (_) ||_|\n\t\t\t |_||_|  |_| \\__,_||___/ |_| |_| |_| \\__,_| \\___||_|    \\__|\\___/ (_)\n\n\t\t\t\t\t\tJugador se ahog%c\n\t\t\t\t\t\t  Puntuaci%cn:0\n\n\n\n\n",162,162);
					printf("\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\t\t\t\t\t%c           Reaparecer           %c\n\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n",218,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,184,179,179,192,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
					printf("\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\t\t\t\t\t%c         Menu Principal         %c\n\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187,186,186,200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
					lf=2;
					break;
				case 13:
					goto flan;
					break;
				default:
					goto died;
					break;
			}

	}
	flan:
	if(lf==1)
	{
		e=0;
		l=0;
		system("cls");
		goto start;
	}
	else
		return 0;
}
	}
