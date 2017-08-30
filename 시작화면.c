#include "head.h"
void start() {
	YELLOW;
	sndPlaySoundA("시작화면.wav",SND_ASYNC|SND_NODEFAULT);
	gotoxy(2,9);
	printf("　　　　　　■\n");
	gotoxy(2,10);
	printf("■■■■■　■\n");
	gotoxy(2,11);
	printf("■　■　　　■■■\n");
	gotoxy(2,12);
	printf("■　■　　　■\n");
	gotoxy(2,13);
	printf("■■■■■　■\n");
	gotoxy(2,14);
	printf("　　　　　　■\n");
	gotoxy(2,16);
	printf("　　　　　■■\n");
	gotoxy(2,17);
	printf("　　　　■　　■\n");
	gotoxy(2,18);
	printf("　　　　■　　■\n");
	gotoxy(2,19);
	printf("　　　　　■■\n");

	PLUM;
	gotoxy(22,5);
	printf("　　　　　　■\n");
	gotoxy(22,6);
	printf("■■■■■　■\n");
	gotoxy(22,7);
	printf("■　■　　　■\n");
	gotoxy(22,8);
	printf("■　■　　　■\n");
	gotoxy(22,9);
	printf("■　■　　　■■■\n");
	gotoxy(22,10);
	printf("■　■　　　■\n");
	gotoxy(22,11);
	printf("■　■　　　■\n");
	gotoxy(22,12);
	printf("■■■■■　■\n");
	gotoxy(22,13);
	printf("　　　　　　■\n");

	YELLOW;
	gotoxy(42,9);
	printf("　　　　　　　■\n");
	gotoxy(42,10);
	printf("■■■■　　　■\n");
	gotoxy(42,11);
	printf("■　　■　■■■\n");
	gotoxy(42,12);
	printf("■　　■　　　■\n");
	gotoxy(42,13);
	printf("■■■■　　　■\n");
	gotoxy(42,14);
	printf("　　　　　　　■\n");
	gotoxy(42,16);
	printf("　　　■■■■■\n");
	gotoxy(42,17);
	printf("　　　　　　　■\n");
	gotoxy(42,18);
	printf("　　　　　　　■\n");
	gotoxy(42,19);
	printf("　　　　　　　■\n");

	PLUM;
	gotoxy(62,5);
	printf("　　　　　　　■\n");
	gotoxy(62,6);
	printf("■■■■■■　■\n");
	gotoxy(62,7);	
	printf("　　　　　■　■\n");
	gotoxy(62,8);
	printf("　　　　■　　■\n");
	gotoxy(62,9);
	printf("　　　■　　　■\n");
	gotoxy(62,10);
	printf("　　■　　　　■\n");
	gotoxy(62,11);
	printf("　■　　　　　■\n");
	gotoxy(62,12);
	printf("■　　　　　　■\n");
	gotoxy(62,13);
	printf("　　　　　　　■\n");
	
	
	settextcolor(5,14);
	gotoxy(4,25);
	printf("┌─────────┐\n");
	gotoxy(4,26);
	printf("│　　　　　　　　　│\n");
	gotoxy(4,27);
	printf("│　　　　　　　　　│\n");
	gotoxy(4,28);
	printf("│  1. 게 임 시 작  │\n");
	gotoxy(4,29);
	printf("│　　　　　　　　　│\n");
	gotoxy(4,30);
	printf("│　　　　　　　　　│\n");
	gotoxy(4,31);
	printf("└─────────┘\n");

	

	gotoxy(29,25);
	printf("┌─────────┐\n");
	gotoxy(29,26);
	printf("│　　　　　　　　　│\n");
	gotoxy(29,27);
	printf("│　　　　　　　　　│\n");
	gotoxy(29,28);
	printf("│  2. 게 임 종 료  │\n");
	gotoxy(29,29);
	printf("│　　　　　　　　　│\n");
	gotoxy(29,30);
	printf("│　　　　　　　　　│\n");
	gotoxy(29,31);
	printf("└─────────┘\n");


	gotoxy(54,25);
	printf("┌─────────┐\n");
	gotoxy(54,26);
	printf("│　　　　　　　　　│\n");
	gotoxy(54,27);
	printf("│　　　　　　　　　│\n");
	gotoxy(54,28);
	printf("│   3. 도 움 말    │\n");
	gotoxy(54,29);
	printf("│　　　　　　　　　│\n");
	gotoxy(54,30);
	printf("│　　　　　　　　　│\n");
	gotoxy(54,31);
	printf("└─────────┘\n");
	WHITE;
}