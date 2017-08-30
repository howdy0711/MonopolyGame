#include "head.h"
int b_money1 = 50000 ,  b_money2 = 50000;
int arr1[18] = {0}, arr2[18] = {0}; //나라구매여부 확인배열, 색깔구분배열
int player1[18] = {0}, player2[18] = {0}; // 사용자1,2 플래그c
char name1[20];
char name2[20];
int main(){
	int ch = 0 ; // 나라특성에서 반환값 받음 (구매여부 확인)
	int i, turn_check=0, tmp= 0;
	int rnd_return1 = 0; //주사위 랜덤수 리턴
	int rnd_return2 = 0;
	int point_tmp = 0;
	int x = 0, y = 0, z = 0;
	int *p1,*p2,*p3,*p4,*p5,*p6,*p7;
	int Mflag[2] = {1 , 1}; //무인도 플래그
	// *p1,*p2 돈을 가리키는 포인터
	// *p3,*p4 좌표번호, 구분 1p,2p 플래그
	// *p5; 나라구매여부 확인 플래그
	// *p6, *p7 1p , 2p 무인도 플래그 
	for(i=0; i<18; i++) { arr1[i] = i; }
	p1 = &b_money1;	p2 = &b_money2;
	p3 = &x; p4 = &y; p5 = &z;
	p6 = &Mflag[0]; p7 = &Mflag[1];
	START:
	system("mode con:cols=80 lines=38" );
	system("cls");
	start();

tmp = getch(); // 입력함수
if(	tmp == 51 ){ system("cls"); help(); getch(); goto START; } // 2번 입력시 도움말 출력
if ( tmp == 50){ system("cls");end2();exit(1); } // 3번 입력시 게임종료
if ( tmp == 49){ //1번입력시 게임시작
		create_id(name1,name2); // ID생성함수
		flag_effect(); // 국기 효과 함수
		Game_Board(); // 게임판 함수 
		board_text(b_money1,b_money2,p4,arr1,arr2,p5, player1,player2); // 게임판 텍스트함수
		*p5 = 0; //기본으로 땅은 아무도 구매하지않음 
		gotoxy(8,4);YELLOW;printf("●"); //p1 시작마커
		gotoxy(11,4);GREEN;printf("●"); //p2 시작마커
		sndPlaySoundA("시작.wav",SND_ASYNC|SND_NODEFAULT);	Sleep(900); // 시작소리 출력 0.9초동안
		while(turn_check < 10){
			sndPlaySoundA("게임소리.wav",SND_ASYNC|SND_NODEFAULT);
			gotoxy(55,8);YELLOW;
			printf("턴수 %d", turn_check);WHITE;
			user1_message(); //사용자 안내 함수
			clear_marker1(rnd_return1); //마커지움함수
			turn_check++; //P1시작 전 턴수증가
			rnd_return1 += dice_1(&point_tmp); // 주사위 주사위 함수 반환값1:누적난수, 반환값2:현재난수
			if(turn_check ==1)
				rnd_return1 = 10;
			dice_sound(point_tmp); //주사위 숫자에따른 다른 소리 출력함수
			if(rnd_return1 >= 20) b_money1 += 5000; // 시작지를 지날시 월급 5000원
			if(rnd_return1 > 20) {rnd_return1 -= 20;} // 한바퀴 맵을 다돌면 누적난수 -20
			move_message(point_tmp); //  값에 따른 이동 메세지 출력함수
			gotoxy(8,4);printf("  ");// p1기본마커지움
			user1_marker(rnd_return1); // 주사위 숫자에따른 마커이동함수
			Sleep(1000);
			ch = countryINFO1(rnd_return1,p2,p1,p3,arr1,player2,p6); // 나라정보에 대한함수
			//1P의 나라구매정보, 구매한 나라좌표정보, 다른플레이어 땅 밟음시 돈감소
			if(*p6 == 0) {*p1 -= 3000; *p6 = 1;} // 무인도 여부 플래그함수 문제풀이실패시 -3000원
			money_check(b_money1, b_money2); // 사용자 파산여부확인함수
			if(ch == 49) *p5 = 1; // ch == 49면 땅 구매 *p5는 누가 구매했는지에 대한함수
			if(ch == 50) *p5 = 0; // ch == 50이면 구매 x 
			gotoxy(55,8);YELLOW;
			printf("턴수 %d", turn_check);WHITE; // 턴수 출력
			user1_marker(rnd_return1); // 다시유저1 마커 찍음
			user2_marker(rnd_return2); // 지워진 유저2 마커찍음
			board_text(b_money1,b_money2,p3,arr1,arr2,p5,player1,player2); // 게임판의 모든 텍스트 다시출력
			//좌표번호에맞는 색깔변경
			if(ch==49)Sleep(1000);
			sndPlaySoundA("게임소리.wav",SND_ASYNC|SND_NODEFAULT);
//////////////////////////// 사용자 2 플레이 ///////////////////////////////////////////////////////////////
			user2_message();
			clear_marker2(rnd_return2);
			rnd_return2 += dice_1(&point_tmp);
			turn_check++;
			if(rnd_return2 >= 20)b_money2 += 5000;
			if(rnd_return2 > 20) {rnd_return2 -= 20;}
			dice_sound(point_tmp);
			move_message(point_tmp); //  값에 따른 이동 메세지 출력
			gotoxy(11,4);printf("  "); // p2기본마커지움
			user2_marker(rnd_return2);
			Sleep(1000);
			ch = countryINFO1(rnd_return2,p1,p2,p3,arr1,player1,p7);
			if(*p7 == 0){*p2 -= 3000; *p7 = 1;}
			money_check(b_money1, b_money2);
			if(ch == 49) *p5 = 2;
			if(ch == 50) *p5 = 0;
			gotoxy(55,8);YELLOW;
			printf("턴수 %d", turn_check);WHITE;
			user2_marker(rnd_return2);
			user1_marker(rnd_return1);
			board_text(b_money1,b_money2,p3,arr1,arr2,p5,  player1,player2);
			if(ch==49)Sleep(1000);
			sndPlaySoundA("게임소리.wav",SND_ASYNC|SND_NODEFAULT);
			}
}
system("cls");
turnlimit(b_money1,b_money2); // 턴수초과 출력되는 함수
return 0;
}