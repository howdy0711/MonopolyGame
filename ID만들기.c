#include "head.h"
void create_id(char *name1, char *name2){
	int i;
	FILE *fp = NULL;
	system("cls");

	gotoxy(0,8);
	X:
	gotoxy(0,8);
	character();
	WHITE;
	gotoxy(53,10);
	printf("  Create Your Name\n");
	gotoxy(53,11);
	printf("───────────\n");
	gotoxy(53,12);
	YELLOW;
	printf("  User1:\n");
	WHITE;
	gotoxy(53,13);
	printf("───────────\n");
		
	gotoxy(53,22);
	printf("  Create Your Name\n");
	gotoxy(53,23);
	printf("───────────\n");
	gotoxy(53,24);
	YELLOW;
	printf("  User2:\n");
	WHITE;
	gotoxy(53,25);
	printf("───────────\n");

	gotoxy(62,12);
	scanf("%s",name1);
	fp = fopen("name1.txt","w");
	fprintf(fp, "%s\n", name1);
	fclose(fp);


	gotoxy(62,24);
	scanf("%s",name2);
	fp = fopen("name2.txt","w");
	fprintf(fp, "%s\n", name2);


	if( strcmp(name1,name2) == 0){
		system("cls");
		gotoxy(26,17);
		YELLOW;
		printf("사용자 ID는 같을 수 없습니다\n");
		Sleep(1500);
		gotoxy(26,17);
		printf("                             \n");
		goto X;
	}
	
	else{
	Sleep(700);
	fclose(fp);
	}
	system("cls");
}


void character(){

	BLACK printf("■■■■"); SKY_BLUE printf("■■"); BLACK printf("■■■■■■■"); SKY_BLUE printf("■"); BLACK printf("■"); GOLD printf("■■"); BLACK printf("■■■■■"); GOLD printf("■■\n");
	BLACK printf("■■■■"); SKY_BLUE printf("■"); PLUM printf("■"); SKY_BLUE printf("■"); BLACK printf("■■■■■"); SKY_BLUE printf("■"); PLUM printf("■"); SKY_BLUE printf("■"); GOLD printf("■■■■■■■■■■\n");
	BLACK printf("■■■■"); SKY_BLUE printf("■"); ORIGINAL printf("■■■■■■■■■"); SKY_BLUE printf("■"); GOLD printf("■■■■■■■■■■■\n");
	BLACK printf("■■■■"); GRAY printf("■■■■■■■■■■■"); GOLD printf("■■■■■■■■■■■\n");
	BLACK printf("■■■"); GRAY printf("■■■■■■■■■■■■■"); GOLD printf("■■■■■■■■■\n");
	BLACK printf("■■"); GRAY printf("■■■"); WHITE printf("■■■■■■■■■■■"); GRAY printf("■"); WHITE printf("■■■■■■■■■■\n");
	BLACK printf("■■"); GRAY printf("■■■"); WHITE printf("■"); BLUE printf("■■■■"); WHITE printf("■"); RED printf("■■■■"); WHITE printf("■"); GRAY printf("■"); BLUE printf("■■■■"); WHITE printf("■"); RED printf("■■■■"); WHITE printf("■\n");
	BLACK printf("■■"); GRAY printf("■■■"); WHITE printf("■"); BLUE printf("■■■"); WHITE printf("■"); GRAY printf("■"); WHITE printf("■"); RED printf("■■■"); WHITE printf("■"); GRAY printf("■"); BLUE printf("■■■"); WHITE printf("■"); GRAY printf("■"); WHITE printf("■"); RED printf("■■■"); WHITE printf("■\n");
	BLACK printf("■■"); GRAY printf("■■■"); SKY_BLUE printf("■"); WHITE printf("■■■■"); GRAY printf("■"); WHITE printf("■■■■"); GRAY printf("■■"); WHITE printf("■■■"); GRAY printf("■■■"); WHITE printf("■■■\n");
	BLACK printf("■■"); GRAY printf("■■■"); SKY_BLUE printf("■■■"); WHITE printf("■■"); SKY_BLUE printf("■"); WHITE printf("■■"); SKY_BLUE printf("■■"); GRAY printf("■■"); GOLD printf("■■■■"); GRAY printf("■"); GOLD printf("■■■■\n");
	BLACK printf("■■■");  SKY_BLUE printf("■■■■■■■■■■■■■"); GOLD printf("■■■■■■■■■■\n");
	BLACK printf("■■■■"); SKY_BLUE printf("■■■■■■■■■■■"); GOLD printf("■■■■■"); GRAY printf("■■■"); GOLD printf("■■■\n");
	BLACK printf("■■■■■"); SKY_BLUE printf("■■■■■■■■■");GOLD printf("■■■■■■■■■■■\n");
	BLACK printf("■■■■■■"); SKY_BLUE printf("■■■■■■■"); BLACK printf("■■"); GOLD printf("■■■■■■■■■\n");
	BLACK printf("■■■■■"); SKY_BLUE printf("■■■■■■■■■"); BLACK printf("■");RED printf("■■■■■■■■■■\n");
	BLACK printf("■■■■■"); SKY_BLUE printf("■■■■■■■■■■");  GOLD printf("■■■■■"); GREEN printf("■"); GRAY printf("■"); GOLD printf("■■■\n");
	BLACK printf("■■■■"); SKY_BLUE printf("■■■■■"); WHITE printf("■■■"); SKY_BLUE printf("■■■"); GOLD printf("■■■■■"); GRAY printf("■"); GREEN printf("■"); GOLD printf("■■■■\n");
	BLACK printf("■■■■"); SKY_BLUE printf("■■■■"); WHITE printf("■■"); YELLOW printf("■"); WHITE printf("■■"); SKY_BLUE printf("■■"); GOLD printf("■■■■■"); GREEN printf("■"); GRAY printf("■"); GOLD printf("■■■■\n");
	WHITE printf("■"); GRAY printf("■"); BLACK printf("■■");  SKY_BLUE printf("■■■■"); WHITE printf("■"); YELLOW printf("■■■■"); SKY_BLUE printf("■■"); GOLD printf("■■■■■■■■■■■\n");
	GRAY printf("■"); WHITE printf("■"); BLACK printf("■■"); SKY_BLUE printf("■■■■");  WHITE printf("■"); YELLOW printf("■■■■■"); SKY_BLUE printf("■"); GOLD printf("■■■■■■■■■■■\n");
	BLACK printf("■"); WHITE printf("■"); BLACK printf("■■"); SKY_BLUE printf("■■■■"); WHITE printf("■"); BLUE printf("■■■■■"); SKY_BLUE printf("■"); GOLD printf("■■■■■■■■■■\n");
	BLACK printf("■"); BLOOD printf("■■■"); SKY_BLUE printf("■■■■"); WHITE printf("■"); BLUE printf("■■■■■"); WHITE printf("■");  GOLD printf("■■■■■■■■■\n");
	BLACK printf("■"); BLOOD printf("■■■"); BLACK printf("■"); SKY_BLUE printf("■■■■"); WHITE printf("■■"); BLUE printf("■■■"); WHITE printf("■"); GOLD printf("■■■■■■■■■\n");
	BLACK printf("■■■■■■"); SKY_BLUE printf("■■■"); WHITE printf("■■"); BLUE printf("■■■"); BLACK printf("■");GOLD printf("■■■■■■■■■\n");

}


