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
	printf("시  작 ");
	gotoxy(67,33);
	printf("무인도");
	gotoxy(18,3);
	printf("포르투칼");
	gotoxy(30,3);
	printf("네덜란드"); 
	gotoxy(42,3);
	printf("싱가포르"); 
	gotoxy(55,3);
	printf("필리핀"); 
	gotoxy(65,3);
	printf("  스페인"); 
	gotoxy(6,9);
	RED;
	printf("대한");
	BLUE;
	printf("민국"); 
	WHITE;
	gotoxy(65,9);
    printf("  호  주");
	gotoxy(7,15);
	printf("미  국"); 
	gotoxy(65,15);
	printf("  캐나다");
	gotoxy(7,21);
	printf("중  국");
	gotoxy(65,21);
	printf("  인  도 ");
	gotoxy(7,27);
	printf("일  본"); 
	gotoxy(65,27);
	printf("  러시아");
	gotoxy(7,33);
	printf("독  일"); 
	gotoxy(19,33);
	printf("프랑스"); 
	gotoxy(31,33);
	printf("영  국");
	gotoxy(43,33);
	printf("브라질");
	gotoxy(54,33);
	printf("이탈리아");
}


void dice_sound(int t){
	if(t == 12)
		sndPlaySoundA("주사위12.wav",SND_ASYNC|SND_NODEFAULT);
	if(t == 11)
		sndPlaySoundA("주사위11.wav",SND_ASYNC|SND_NODEFAULT);
	if(t == 10)
		sndPlaySoundA("주사위10.wav",SND_ASYNC|SND_NODEFAULT);
	if(t == 9)
		sndPlaySoundA("주사위9.wav",SND_ASYNC|SND_NODEFAULT);
	if(t == 8)
		sndPlaySoundA("주사위8.wav",SND_ASYNC|SND_NODEFAULT);
	if(t == 7)
		sndPlaySoundA("주사위7.wav",SND_ASYNC|SND_NODEFAULT);
	if(t == 6)
		sndPlaySoundA("주사위6.wav",SND_ASYNC|SND_NODEFAULT);
	if(t == 5)
		sndPlaySoundA("주사위5.wav",SND_ASYNC|SND_NODEFAULT);
	if(t == 4)
		sndPlaySoundA("주사위4.wav",SND_ASYNC|SND_NODEFAULT);
	if(t == 3)
		sndPlaySoundA("주사위3.wav",SND_ASYNC|SND_NODEFAULT);
	if(t == 2)
		sndPlaySoundA("주사위2.wav",SND_ASYNC|SND_NODEFAULT);

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
		printf(" 님이 파산하였습니다.");
		sndPlaySoundA("게임종료.wav",SND_ASYNC|SND_NODEFAULT);
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
		printf(" 님이 파산하였습니다.");
		sndPlaySoundA("게임종료.wav",SND_ASYNC|SND_NODEFAULT);
		fclose(fp);
		Sleep(5000);
		system("cls");
		exit(1);
	}
	
}


void baseball(){
	int a,b,c,tat=0,ttt=0;

	srand(time(NULL));
	printf("프로그램을 시작합니다\n");
	getch();

	while(1)
	{
		printf("야구 게임을 시작합니다\n");
		printf("1 2 \n");
		printf("스트라이크 여부 검사중.....\n");
		getch();
		a = rand()%2+1;
		b = rand()%2+1;
		
		if(a==b)
		{
			printf("스트라이크!!\n");
			getch();
			printf("스텍이 쌓입니다.\n");
			getch();
			tat++;
		}
		else
		{
			printf("볼...\n");
			getch();
			printf("스텍이 쌓입니다.\n");
			getch();
			ttt++;
		}
		printf("현재 스트라이크 스텍 %d\n", tat);
		printf("현재 볼 스텍 %d\n", ttt);
		getch();

		if(tat==3)
		{
			printf("스트라이크 아웃!!! 무인도를 나갑니다.\n");
			break;
		}
		system("cls");
	}
}
