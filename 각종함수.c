#include "head.h"
FILE *fp = NULL;
void gotoxy(int x, int y)
{
 COORD CursorPosition = {x,y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), CursorPosition);
}

void settextcolor(int color, int bgcolor)
{
  color &= 0xF;
  bgcolor &=0xF;
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (bgcolor<<4|color));
} 

void timer(){
	int i = 0;
	int j = 0;
	
		gotoxy(45,10);
		printf(" 0");
	while(1){
		WHITE;
	for(i=1; ;i++){
			gotoxy(46,10);
			Sleep(1000);
			printf("%d",i);
			if(59 == i){ break;
			}
		}
		i = 0;
		j++;
		gotoxy(44,10);
		printf("%0d:",j);
		gotoxy(46,10);
		printf("  ");

		for(i=1; ;i++){
			gotoxy(46,10);
			Sleep(1000);
			printf("%d",i);
			if(59 == i){ break;
			}
		}

		i = 0;
		j++;
		gotoxy(44,10);
		printf("%0d:",j);
		gotoxy(46,10);
		printf("  ");
	}
}


int inputdata(){
	int tmp;
	tmp = getch();
			if(tmp == 27){
				system("cls");
				exit(1);
			}
		
	return tmp;
}


void firstText(){
	gotoxy(7,3);                                                                               
	printf("��  �� ");
	gotoxy(67,33);
	printf("���ε�");
	gotoxy(18,3);
	printf("������Į");
	gotoxy(30,3);
	printf("�״�����"); 
	gotoxy(42,3);
	printf("�̰�����"); 
	gotoxy(55,3);
	printf("�ʸ���"); 
	gotoxy(65,3);
	printf("  ������"); 
	gotoxy(6,9);
	RED;
	printf("����");
	BLUE;
	printf("�α�"); 
	WHITE;
	gotoxy(65,9);
    printf("  ȣ  ��");
	gotoxy(7,15);
	printf("��  ��"); 
	gotoxy(65,15);
	printf("  ĳ����");
	gotoxy(7,21);
	printf("��  ��");
	gotoxy(65,21);
	printf("  ��  �� ");
	gotoxy(7,27);
	printf("��  ��"); 
	gotoxy(65,27);
	printf("  ���þ�");
	gotoxy(7,33);
	printf("��  ��"); 
	gotoxy(19,33);
	printf("������"); 
	gotoxy(31,33);
	printf("��  ��");
	gotoxy(43,33);
	printf("�����");
	gotoxy(54,33);
	printf("��Ż����");
}


void dice_sound(int t){
	if(t == 12)
		sndPlaySoundA("�ֻ���12.wav",SND_ASYNC|SND_NODEFAULT);
	if(t == 11)
		sndPlaySoundA("�ֻ���11.wav",SND_ASYNC|SND_NODEFAULT);
	if(t == 10)
		sndPlaySoundA("�ֻ���10.wav",SND_ASYNC|SND_NODEFAULT);
	if(t == 9)
		sndPlaySoundA("�ֻ���9.wav",SND_ASYNC|SND_NODEFAULT);
	if(t == 8)
		sndPlaySoundA("�ֻ���8.wav",SND_ASYNC|SND_NODEFAULT);
	if(t == 7)
		sndPlaySoundA("�ֻ���7.wav",SND_ASYNC|SND_NODEFAULT);
	if(t == 6)
		sndPlaySoundA("�ֻ���6.wav",SND_ASYNC|SND_NODEFAULT);
	if(t == 5)
		sndPlaySoundA("�ֻ���5.wav",SND_ASYNC|SND_NODEFAULT);
	if(t == 4)
		sndPlaySoundA("�ֻ���4.wav",SND_ASYNC|SND_NODEFAULT);
	if(t == 3)
		sndPlaySoundA("�ֻ���3.wav",SND_ASYNC|SND_NODEFAULT);
	if(t == 2)
		sndPlaySoundA("�ֻ���2.wav",SND_ASYNC|SND_NODEFAULT);

}


void money_check(int p1_m, int p2_m){
		FILE *fp = NULL;
	char name1[20];
	char name2[20];


	if( p1_m <= 0){
		
	fp = fopen("name1.txt","r");
	fscanf(fp, "%s\n", name1);
		system("cls");
		gotoxy(30,18);
		YELLOW;
		printf("%s",name1);
		WHITE;
		printf(" ���� �Ļ��Ͽ����ϴ�.");
		sndPlaySoundA("��������.wav",SND_ASYNC|SND_NODEFAULT);
		Sleep(5000);
		fclose(fp);
		system("cls");
		exit(1);
	}

if( p2_m <= 0){
	system("cls");
	fp = fopen("name2.txt","r");
	fscanf(fp, "%s\n", name2);
		gotoxy(30,18);
		GREEN;
		printf("%s",name2);
		WHITE;
		printf(" ���� �Ļ��Ͽ����ϴ�.");
		sndPlaySoundA("��������.wav",SND_ASYNC|SND_NODEFAULT);
		fclose(fp);
		Sleep(5000);
		system("cls");
		exit(1);
	}
	
}


void baseball(){
	int a,b,c,tat=0,ttt=0;

	srand(time(NULL));
	printf("���α׷��� �����մϴ�\n");
	getch();

	while(1)
	{
		printf("�߱� ������ �����մϴ�\n");
		printf("1 2 \n");
		printf("��Ʈ����ũ ���� �˻���.....\n");
		getch();
		a = rand()%2+1;
		b = rand()%2+1;
		
		if(a==b)
		{
			printf("��Ʈ����ũ!!\n");
			getch();
			printf("������ ���Դϴ�.\n");
			getch();
			tat++;
		}
		else
		{
			printf("��...\n");
			getch();
			printf("������ ���Դϴ�.\n");
			getch();
			ttt++;
		}
		printf("���� ��Ʈ����ũ ���� %d\n", tat);
		printf("���� �� ���� %d\n", ttt);
		getch();

		if(tat==3)
		{
			printf("��Ʈ����ũ �ƿ�!!! ���ε��� �����ϴ�.\n");
			break;
		}
		system("cls");
	}
}
