#include "head.h"

void turnlimit(int b_money1, int b_money2){

	FILE *fp = NULL;
	char name1[20];
	char name2[20];
		
if(b_money1 < b_money2)
{
	fp = fopen("name1.txt","r");
	fscanf(fp, "%s\n", name1);
	fp = fopen("name2.txt","r");
	fscanf(fp, "%s\n", name2);
		system("cls");
		gotoxy(30,17);
		YELLOW;
		printf("%s", name1);
		WHITE;
		printf(" 님잔액 :%d",b_money1);
		gotoxy(30,18);
		Sleep(600);
		GREEN;
		printf("%s", name2);
		WHITE;
		printf(" 님잔액 :%d",b_money2);
		WHITE;
		gotoxy(22,20);
		printf("턴수가 제한되여 게임을 종료합니다.");
		gotoxy(26,21);
		Sleep(600);
		YELLOW;
		printf("%s님이 ",name1); 
		WHITE;
		printf("패배하였습니다.");

		sndPlaySoundA("게임종료.wav",SND_ASYNC|SND_NODEFAULT);
		Sleep(5000);
		fclose(fp);
		system("cls");
		exit(1);
}
if( b_money1 > b_money2);
{
	fp = fopen("name1.txt","r");
	fscanf(fp, "%s\n", name1);
	fp = fopen("name2.txt","r");
	fscanf(fp, "%s\n", name2);
		system("cls");
		gotoxy(30,17);
		YELLOW;
		printf("%s", name1);
		WHITE;
		printf(" 님잔액 :%d",b_money1);
		gotoxy(30,18);
		Sleep(600);
		GREEN;
		printf("%s", name2);
		WHITE;
		printf(" 님잔액 :%d",b_money2);
		WHITE;
		gotoxy(22,20);
		printf("턴수가 제한되여 게임을 종료합니다.");
		Sleep(600);
		gotoxy(26,21);
		GREEN;
		printf("%s님이 ",name2); 
		WHITE;
		printf("패배하였습니다.");

		sndPlaySoundA("게임종료.wav",SND_ASYNC|SND_NODEFAULT);
		Sleep(5000);
		fclose(fp);
		system("cls");
		exit(1);
}

if ( b_money1 == b_money2)
{
	fp = fopen("name1.txt","r");
	fscanf(fp, "%s\n", name1);
	fp = fopen("name2.txt","r");
	fscanf(fp, "%s\n", name2);
		system("cls");
		gotoxy(30,17);
		YELLOW;
		printf("%s", name1);
		WHITE;
		printf(" 님잔액 :%d",b_money1);
		gotoxy(30,18);
		Sleep(600);
		GREEN;
		printf("%s", name2);
		WHITE;
		printf(" 님잔액 :%d",b_money2);
		WHITE;
		gotoxy(22,20);
		Sleep(600);
		printf("턴수가 제한되여 게임을 종료합니다.");
		gotoxy(24,21);
		Sleep(600);
		printf("비겼습니다.",name2);

		sndPlaySoundA("게임종료.wav",SND_ASYNC|SND_NODEFAULT);
		Sleep(5000);
		fclose(fp);
		system("cls");
		exit(1);
}
}

void user1_message(){
	FILE *fp = NULL;
	char name1[20];
			gotoxy(30,18);
			fp = fopen("name1.txt","r");
			YELLOW;
			fscanf(fp, "%s\n", name1);
			printf("%s", name1);
			WHITE;
			printf("님 차례입니다.");
			inputdata();
			gotoxy(30,18);
			printf("                    ");

}

void user2_message(){
	FILE *fp = NULL;
	char name2[20];
			gotoxy(30,18);
			fp = fopen("name2.txt","r");
			GREEN;
			fscanf(fp, "%s\n", name2);
			printf("%s", name2);
			WHITE;
			printf("님 차례입니다.");
			inputdata();
			gotoxy(30,18);
			printf("                    ");
}

