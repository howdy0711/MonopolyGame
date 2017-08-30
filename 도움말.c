#include "head.h"

void help(){
	system("mode con:cols=80 lines=30" );
	YELLOW;
	gotoxy(28,2);
	printf("■　■　■■　■　　■■\n");
	gotoxy(28,3);
	printf("■■■　■**　■　　■■\n");
	gotoxy(28,4);
	printf("■　■　■■　■■　■\n\n");

	GOLD;
	printf("　　　　　　　　　　　　　　　 　 땅 따 먹 기\n");
	printf("　　　　　　　　　　　　　　 　　가격 : 무료\n");
	printf("　　　　　　　　　　　　　　 　장르 : 보드게임\n");
	printf("　　　　　　　　　　　　 　 개발자 : 팀 부르주아\n\n");

	WHITE; printf(" 1)게임소개\n");
	GRAY; printf("　 세계 나라를 사고파는 인기 보드 게임의 재미를\n　가족, 친구 동료 등 전 연령층이 함께 즐길 수 있는 "); WHITE; printf("가족용 게임\n");
	GRAY; printf("　 2명이 즐길 수 있는 "); WHITE; printf("개인전 게임\n");
	GRAY; printf("　 게임을 통해 이용자들이 전 세계 나라정보 습득 할 수 있는"); WHITE; printf(" 기능성 교육 게임\n\n");

	WHITE; printf(" 2)게임방법\n");
	GRAY; printf("　ⓐuser를 생성하고 게임 시작합니다.\n");
	printf("　 ⓑenter키를 통해 주사위 두 개를 던지고 나온 숫자의 합만큼 말이 이동합니다.\n");
	printf("　 ⓒ도착한 나라에 주인이 없다면 해당 나라를 구매할 수 있습니다.\n");
	printf("　　<< 주인이 있다면 통행료를 지불해야 합니다.\n");
	printf("　 ⓓ상대 이용자가 파산하거나 제한 턴(20번)이 초과되면 게임이 종료됩니다.\n\n");

	WHITE; printf(" 3)게임규칙\n");
	printf("　 팀은 "); RED; printf("레드팀"); GRAY; printf("과 "); BLUE printf("블루팀"); GRAY printf("으로 구성되어 있습니다.\n");
	printf("　 제한 턴이 초과되어 게임이 종료될 시, 더 많은 돈을 가진 이용자가 승리합니다.\n");
	
}