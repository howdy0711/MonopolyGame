#include "head.h"
void print_m(int);

void print_m(int n){
	int rnd =  0;
	int i;
	for(i=0; i<5; i++)
		rnd = rand()%3+1;

	if(rnd == 1)
	sndPlaySoundA("다른땅1.wav",SND_ASYNC|SND_NODEFAULT);
	if(rnd == 2)
	sndPlaySoundA("다른땅2.wav",SND_ASYNC|SND_NODEFAULT);
	if(rnd == 3)
	sndPlaySoundA("다른땅3.wav",SND_ASYNC|SND_NODEFAULT);
	system("cls");
	gotoxy(26,18);
	YELLOW;
	printf("다른 플레이어가 구매한 땅을 밟았습니다\n");
	Sleep(1500);
	system("cls");
	gotoxy(26,18);
	YELLOW;
	printf("%d원 만큼 당신의 잔액이 감소합니다.\n",n);
	Sleep(1500);
	WHITE;
}


int countryINFO1(int n,int *p2, int *p1 , int *p3 , int arr1[], int player[], int *p6){
	int ch = 0;
	FILE *fp = NULL;

	system("mode con:cols=85 lines=38" );
	// 이곳에서 p1 인지, p2인지 대한 플래그와, 샀는지 여부에대한 플래그가 필요하다.
	if(n == 1){
		if(player[n-1] != 0){
		*p1 -= 2000;
		*p2 += 2000;
		print_m(2000); goto X;
		}
		portugalINFO();
		sndPlaySoundA("포르투갈.wav",SND_ASYNC|SND_NODEFAULT);
		ch = _getch();
		if(ch == 49){
			if(*p1 <= 2000){
				system("cls");
				gotoxy(28,18);
				YELLOW;
				printf("잔액이 부족하여 구매할 수 없습니다.\n");
				Sleep(1500);
				goto X;
			}
			*p1 -= 2000;
			*p3 = 0; 
		}
		if(ch == 50)
			goto X;
	}

	if(n == 2){
		if(player[n-1] != 0){
		*p1 -= 3000;
		*p2 += 3000;
		print_m(3000); goto X;
		}
		netherlandsINFO();
		sndPlaySoundA("네덜란드.wav",SND_ASYNC|SND_NODEFAULT);
		ch = _getch();
		if(ch == 49){
			if(*p1 <= 3000){
				system("cls");
				gotoxy(28,18);
				YELLOW;
				printf("잔액이 부족하여 구매할 수 없습니다.\n");
				Sleep(1500);
				goto X;
			}
			*p1 -= 3000;
			*p3 = 1;
		}
		if(ch == 50)
			goto X;
	}

	if(n == 3){
		if(player[n-1] != 0){
		*p1 -= 4000;
		*p2 += 4000;
		print_m(4000); goto X;
		}
		singaporeINFO();
		sndPlaySoundA("싱가폴.wav",SND_ASYNC|SND_NODEFAULT);
		ch = _getch();
		if(ch == 49){
			if(*p1 <= 4000){
				system("cls");
				gotoxy(28,18);
				YELLOW;
				printf("잔액이 부족하여 구매할 수 없습니다.\n");
				Sleep(1500);
				goto X;
			}
			*p1 -= 4000;
			*p3 = 2;
		}
		if(ch == 50)
			goto X;
	
	}
	if(n == 4){
		if(player[n-1] != 0){
		*p1 -= 5000;
		*p2 += 5000;
		print_m(5000); goto X;
		}
		philippinesINFO();
		sndPlaySoundA("필리핀.wav",SND_ASYNC|SND_NODEFAULT);
		ch = _getch();
		if(ch == 49){
			if(*p1 <= 5000){
				system("cls");
				gotoxy(28,18);
				YELLOW;
				printf("잔액이 부족하여 구매할 수 없습니다.\n");
				Sleep(1500);
				goto X;
			}
			*p1 -= 5000;
			*p3 = 3;
		}
		if(ch == 50)
			goto X;
	}
	if(n == 5){
		if(player[n-1] != 0){
		*p1 -= 6000;
		*p2 += 6000;
		print_m(6000); goto X;
		}
		spainINFO();
		sndPlaySoundA("스페인.wav",SND_ASYNC|SND_NODEFAULT);
		ch = _getch();
		if(ch == 49){
			if(*p1 <= 6000){
				system("cls");
				gotoxy(28,18);
				YELLOW;
				printf("잔액이 부족하여 구매할 수 없습니다.\n");
				Sleep(1500);
				goto X;
			}
			*p1 -= 6000;
			*p3 = 4;
		}
		if(ch == 50)
			goto X;
	}
	if(n == 6){
		if(player[n-1] != 0){
		*p1 -= 7000;
		*p2 += 7000;
		print_m(7000); goto X;
		}
		australiaINFO();
		sndPlaySoundA("호주.wav",SND_ASYNC|SND_NODEFAULT);
		ch = _getch();
		if(ch == 49){
			if(*p1 <= 7000){
				system("cls");
				gotoxy(28,18);
				YELLOW;
				printf("잔액이 부족하여 구매할 수 없습니다.\n");
				Sleep(1500);
				goto X;
			}
			*p1 -= 7000;
			*p3 = 5;
		}
		if(ch == 50)
			goto X;
	}
	if(n == 7){
		if(player[n-1] != 0){
		*p1 -= 8000;
		*p2 += 8000;
		print_m(8000); goto X;
		}
		canadaINFO();	
		sndPlaySoundA("캐나다.wav",SND_ASYNC|SND_NODEFAULT);
		ch = _getch();
		if(ch == 49){
			if(*p1 <= 8000){
				system("cls");
				gotoxy(28,18);
				YELLOW;
				printf("잔액이 부족하여 구매할 수 없습니다.\n");
				Sleep(1500);
				goto X;
			}
			*p1 -= 8000;
			*p3 = 6;
		}
		if(ch == 50)
			goto X;
	}
	if(n == 8){
		if(player[n-1] != 0){
		*p1 -= 9000;
		*p2 += 9000;
		print_m(9000); goto X;
		}
		IndiaINFO();	
		sndPlaySoundA("인도.wav",SND_ASYNC|SND_NODEFAULT);
		ch = _getch();
		if(ch == 49){
			if(*p1 <= 9000){
				system("cls");
				gotoxy(28,18);
				YELLOW;
				printf("잔액이 부족하여 구매할 수 없습니다.\n");
				Sleep(1500);
				goto X;
			}
			*p1 -= 9000;
			*p3 = 7;
		}
		if(ch == 50)
			goto X;
	}
	if(n == 9){
		if(player[n-1] != 0){
		*p1 -= 10000;
		*p2 += 10000;
		print_m(10000); goto X;
		}
		russiaINFO();	
		sndPlaySoundA("러시아.wav",SND_ASYNC|SND_NODEFAULT);
		ch = _getch();
		if(ch == 49){
			if(*p1 <= 10000){
				system("cls");
				gotoxy(28,18);
				YELLOW;
				printf("잔액이 부족하여 구매할 수 없습니다.\n");
				Sleep(1500);
				goto X;
			}
			*p1 -= 10000;
			*p3 = 8;
		}
		if(ch == 50)
			goto X;
	}
	if(n == 10){ //무인도
		sndPlaySoundA("무인도.wav",SND_ASYNC|SND_NODEFAULT);
		uninhabitedINFO(p6);
	}
	if(n == 11){
		if(player[n-2] != 0){
		*p1 -= 11000;
		*p2 += 11000;
		print_m(11000); goto X;
		}
		italyINFO();	
		sndPlaySoundA("이탈리아.wav",SND_ASYNC|SND_NODEFAULT);
		ch = _getch();
		if(ch == 49){
			if(*p1 <= 11000){
				system("cls");
				gotoxy(28,18);
				YELLOW;
				printf("잔액이 부족하여 구매할 수 없습니다.\n");
				Sleep(1500);
				goto X;
			}
			*p1 -= 11000;
			*p3 = 9;
		}
		if(ch == 50)
			goto X;
	
	}
	if(n == 12){
		if(player[n-2] != 0){
		*p1 -= 12000;
		*p2 += 12000;
		print_m(12000); goto X;
		}
		brazilINFO();
		sndPlaySoundA("브라질.wav",SND_ASYNC|SND_NODEFAULT);
		ch = _getch();
		if(ch == 49){
			if(*p1 <= 12000){
				system("cls");
				gotoxy(28,18);
				YELLOW;
				printf("잔액이 부족하여 구매할 수 없습니다.\n");
				Sleep(1500);
				goto X;
			}
			*p1 -= 12000;
			*p3 = 10;

		}
		if(ch == 50)
			goto X;
	}
	if(n == 13){
		if(player[n-2] != 0){
		*p1 -= 13000;
		*p2 += 13000;
		print_m(13000); goto X;
		}
		united_kingdomINFO();
		sndPlaySoundA("영국.wav",SND_ASYNC|SND_NODEFAULT);
		ch = _getch();
		if(ch == 49){
			if(*p1 <= 13000){
				system("cls");
				gotoxy(28,18);
				YELLOW;
				printf("잔액이 부족하여 구매할 수 없습니다.\n");
				Sleep(1500);
				goto X;
			}
			*p1 -= 13000;
			*p3 = 11;
		}
		if(ch == 50)
			goto X;

	}
	if(n == 14){
		if(player[n-2] != 0){
		*p1 -= 14000;
		*p2 += 14000;
		print_m(14000); goto X;
		}
		franceINFO();
		sndPlaySoundA("프랑스.wav",SND_ASYNC|SND_NODEFAULT);
		ch = _getch();
		if(ch == 49){
			if(*p1 <= 14000){
				system("cls");
				gotoxy(28,18);
				YELLOW;
				printf("잔액이 부족하여 구매할 수 없습니다.\n");
				Sleep(1500);
				goto X;
			}
			*p1 -= 14000;
			*p3 = 12;
		}
		if(ch == 50)
			goto X;

	}
	if(n == 15){
		if(player[n-2] != 0){
		*p1 -= 15000;
		*p2 += 15000;
		print_m(15000); goto X;
		}
		germanyINFO();
		sndPlaySoundA("독일.wav",SND_ASYNC|SND_NODEFAULT);
		ch = _getch();
		if(ch == 49){
			if(*p1 <= 15000){
				system("cls");
				gotoxy(28,18);
				YELLOW;
				printf("잔액이 부족하여 구매할 수 없습니다.\n");
				Sleep(1500);
				goto X;
			}
			*p1 -= 15000;
			*p3 = 13;
		}
		if(ch == 50)
			goto X;
	}
	if(n == 16){
		if(player[n-2] != 0){
		*p1 -= 16000;
		*p2 += 16000;
		print_m(16000); goto X;
		}
		japanINFO();
		sndPlaySoundA("일본.wav",SND_ASYNC|SND_NODEFAULT);
		ch = _getch();
		if(ch == 49){
			if(*p1 <= 16000){
				system("cls");
				gotoxy(28,18);
				YELLOW;
				printf("잔액이 부족하여 구매할 수 없습니다.\n");
				Sleep(1500);
				goto X;
			}
			*p1 -= 16000;
			*p3 = 14;
		}
		if(ch == 50)
			goto X;
	}
	if(n == 17){
		if(player[n-2] != 0){
		*p1 -= 17000;
		*p2 += 17000;
		print_m(17000); goto X;
		}
		chinaINFO();
		sndPlaySoundA("중국.wav",SND_ASYNC|SND_NODEFAULT);
		ch = _getch();
		if(ch == 49){
			if(*p1 <= 17000){
				system("cls");
				gotoxy(28,18);
				YELLOW;
				printf("잔액이 부족하여 구매할 수 없습니다.\n");
				Sleep(1500);
				goto X;
			}
			*p1 -= 17000;
			*p3 = 15;
		}
		if(ch == 50)
			goto X;
	}
	if(n == 18){
		if(player[n-2] != 0){
		*p1 -= 18000;
		*p2 += 18000;
		print_m(18000); goto X;
		}
		USAINFO();
		sndPlaySoundA("미국.wav",SND_ASYNC|SND_NODEFAULT);
		ch = _getch();
		if(ch == 49){
			if(*p1 <= 18000){
				system("cls");
				gotoxy(28,18);
				YELLOW;
				printf("잔액이 부족하여 구매할 수 없습니다.\n");
				Sleep(1500);
				goto X;
			}
			*p1 -= 18000;;
			*p3 = 16;
		}
		if(ch == 50)
			goto X;
	}
	if(n == 19){
		if(player[n-2] != 0){
		*p1 -= 20000;
		*p2 += 20000;
		print_m(20000); goto X;
		}
		koreaINFO();
		sndPlaySoundA("한국.wav",SND_ASYNC|SND_NODEFAULT);
		ch = _getch();
		if(ch == 49){
			if(*p1 <= 20000){
				system("cls");
				gotoxy(28,18);
				YELLOW;
				printf("잔액이 부족하여 구매할 수 없습니다.\n");
				Sleep(1500);
				goto X;
			}
			*p1 -= 20000;
			*p3 = 17;
		}
		if(ch == 50)
			goto X;
		
	}
	if(ch== 49 && arr1[*p3] != 0){
	sndPlaySoundA("도시인수.wav",SND_ASYNC|SND_NODEFAULT);
	}
	if(ch == 49 && arr1[*p3] == 0 ){ // 0으로 되어있으면 도시가 누가인수 한 것
		system("cls");
		gotoxy(32,18);
		YELLOW;
		printf("이미 구매한 땅입니다.\n");
			Sleep(1000);
	}
	
		if(n >= 20){
		sndPlaySoundA("동전소리2.wav",SND_ASYNC|SND_NODEFAULT);
		YELLOW;
		gotoxy(34,18);
		printf("출발지를 지났습니다\n");
		Sleep(1000);
		gotoxy(30,18);
		printf("월급 5000원이 주어집니다.\n");
		Sleep(3000);
		WHITE;
	}

	X:
	system("cls");
	system("mode con:cols=80 lines=38" );
	Game_Board();
	return ch;
}

void koreaINFO(){ //한국 가로 31 세로 22
	system("cls");
	gotoxy(13, 3);
	WHITE printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 4);
	WHITE printf("■■■■■■■■■"); BLACK printf("■"); WHITE printf("■■■■■■■■■■■"); BLACK printf("■"); WHITE printf("■■■■■■■■■\n");
	gotoxy(13, 5);
	WHITE printf("■■■■■■■■"); BLACK printf("■"); WHITE printf("■"); BLACK printf("■"); WHITE printf("■■■■■■■■■"); BLACK printf("■"); WHITE printf("■"); BLACK printf("■"); WHITE printf("■■■■■■■■\n");
	gotoxy(13, 6);
	WHITE printf("■■■■■■■"); BLACK printf("■"); WHITE printf("■"); BLACK printf("■"); WHITE printf("■"); BLACK printf("■"); WHITE printf("■■■■■■■"); BLACK printf("■"); WHITE printf("■"); BLACK printf("■"); WHITE printf("■■■■■■■■■\n");
	gotoxy(13, 7);
	WHITE printf("■■■■■■"); BLACK printf("■"); WHITE printf("■"); BLACK printf("■"); WHITE printf("■"); BLACK printf("■"); WHITE printf("■■"); RED printf("■■■■■"); WHITE printf("■■"); BLACK printf("■"); WHITE printf("■"); BLACK printf("■"); WHITE printf("■");  BLACK printf("■"); WHITE printf("■■■■■■\n");
	gotoxy(13, 8);
	WHITE printf("■■■■■");  BLACK printf("■"); WHITE printf("■"); BLACK printf("■"); WHITE printf("■"); BLACK printf("■"); WHITE printf("■"); RED printf("■■■■■■■■■");  WHITE printf("■■■");  BLACK printf("■"); WHITE printf("■"); BLACK printf("■"); WHITE printf("■■■■■\n");
	gotoxy(13, 9);
	WHITE printf("■■■■■■"); BLACK printf("■"); WHITE printf("■"); BLACK printf("■"); WHITE printf("■"); RED printf("■■■■■■■■■■■"); WHITE printf("■"); BLACK printf("■"); WHITE printf("■"); BLACK printf("■"); WHITE printf("■■■■■■\n");
	gotoxy(13, 10);
	WHITE printf("■■■■■■■");  BLACK printf("■"); WHITE printf("■"); RED printf("■■■■■■■■■■■■■"); WHITE printf("■"); BLACK printf("■"); WHITE printf("■■■■■■■\n");
	gotoxy(13, 11);
	WHITE printf("■■■■■■■■■"); RED printf("■■■■■■■■"); BLUE printf("■■"); RED printf("■■■"); WHITE printf("■■■■■■■■■\n");
	gotoxy(13, 12);
	WHITE printf("■■■■■■■■■"); RED printf("■■■■■■■"); BLUE printf("■■■■"); RED printf("■■"); WHITE printf("■■■■■■■■■\n");
	gotoxy(13, 13);
	WHITE printf("■■■■■■■■■"); BLUE printf("■■"); RED printf("■■■■"); BLUE printf("■■■■■■"); RED printf("■"); WHITE printf("■■■■■■■■■\n");
	gotoxy(13, 14);
	WHITE printf("■■■■■■■■■"); BLUE printf("■■■■■■■■■■■■■"); WHITE printf("■■■■■■■■■\n");
	gotoxy(13, 15);
	WHITE printf("■■■■■■■■■"); BLUE printf("■■■■■■■■■■■■■"); WHITE printf("■■■■■■■■■\n");
	gotoxy(13, 16);
	WHITE printf("■■■■■■■"); BLACK printf("■"); WHITE printf("■■"); BLUE printf("■■■■■■■■■■■"); WHITE printf("■■"); BLACK printf("■"); WHITE printf("■■■■■■■\n");
	gotoxy(13, 17);
	WHITE printf("■■■■■■");  BLACK printf("■"); WHITE printf("■"); BLACK printf("■"); WHITE printf("■■"); BLUE printf("■■■■■■■■■"); WHITE printf("■■"); BLACK printf("■"); WHITE printf("■"); BLACK printf("■"); WHITE printf("■■■■■■\n");
	gotoxy(13, 18);
	WHITE printf("■■■■■"); BLACK printf("■"); WHITE printf("■"); BLACK printf("■"); WHITE printf("■"); BLACK printf("■"); WHITE printf("■■■"); BLUE printf("■■■■■"); WHITE printf("■■■■■"); BLACK printf("■"); WHITE printf("■"); BLACK printf("■"); WHITE printf("■■■■■\n");
	gotoxy(13, 19);
	WHITE printf("■■■■■■"); BLACK printf("■"); WHITE printf("■■■"); BLACK printf("■"); WHITE printf("■■■■■■■■■"); BLACK printf("■"); WHITE printf("■■■"); BLACK printf("■"); WHITE printf("■■■■■■\n");
	gotoxy(13, 20);
	WHITE printf("■■■■■■■"); BLACK printf("■"); WHITE printf("■"); BLACK printf("■"); WHITE printf("■"); BLACK printf("■"); WHITE printf("■■■■■■■"); BLACK printf("■"); WHITE printf("■"); BLACK printf("■"); WHITE printf("■■■■■■■■■\n");
	gotoxy(13, 21);
	WHITE printf("■■■■■■■■"); BLACK printf("■"); WHITE printf("■"); BLACK printf("■"); WHITE printf("■■■■■■■■■"); BLACK printf("■"); WHITE printf("■"); BLACK printf("■"); WHITE printf("■■■■■■■■\n");
	gotoxy(13, 22);
	WHITE printf("■■■■■■■■■"); BLACK printf("■"); WHITE printf("■■■■■■■■■■■"); BLACK printf("■"); WHITE printf("■■■■■■■■■\n");
	gotoxy(13, 23);
	WHITE printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	YELLOW;
	gotoxy(13, 25);
	printf("나라 : 한국");
	gotoxy(13, 26);
	printf("언어 : 한국어");
	gotoxy(13, 27);
	printf("수도 : 서울");
	gotoxy(13, 28);
	printf("면적 : 99,720㎢ 세계109위 ");
	gotoxy(13, 29);
	printf("인구 : 약 51,395,238명");
	gotoxy(13, 30);
	printf("GDP : 1조 4,495억$ 세계13위");
	gotoxy(13, 31);
	RED;
	printf("가격: 20000원");
	gotoxy(13, 32);
	YELLOW;
	printf("1. 구매하기 2. 나가기");
}


void USAINFO(){  //미국
	system("cls");
	gotoxy(13, 3);
	WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); RED; printf("■■■■■■■■■■■■■■■\n");
	gotoxy(13, 4);
	DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); WHITE; printf("■■■■■■■■■■■■■■■\n");
	gotoxy(13, 5);
	WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); RED; printf("■■■■■■■■■■■■■■■\n");
	gotoxy(13, 6);
	DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); WHITE; printf("■■■■■■■■■■■■■■■\n");
	gotoxy(13, 7);
	WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); RED; printf("■■■■■■■■■■■■■■■\n");
	gotoxy(13, 8);
	DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); WHITE; printf("■■■■■■■■■■■■■■■\n");
	gotoxy(13, 9);
	WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); RED; printf("■■■■■■■■■■■■■■■\n");
	gotoxy(13, 10);
	DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); WHITE; printf("■■■■■■■■■■■■■■■\n");
	gotoxy(13, 11);
	WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); RED; printf("■■■■■■■■■■■■■■■\n");
	gotoxy(13, 12);
	DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); WHITE; printf("■■■■■■■■■■■■■■■\n");
	gotoxy(13, 13);
	WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); RED; printf("■■■■■■■■■■■■■■■\n");
	gotoxy(13, 14);
	DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); DARK_BLUE; printf("■"); WHITE; printf("★"); WHITE; printf("■■■■■■■■■■■■■■■\n");
	gotoxy(13, 15);
	RED; printf("■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 16);
	WHITE; printf("■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 17);
	RED; printf("■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 18);
	WHITE; printf("■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 19);
	RED; printf("■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 20);
	WHITE; printf("■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 21);
	RED; printf("■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 22);
	WHITE; printf("■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	YELLOW;
	gotoxy(13, 25);
	printf("나라 : 미국"); 
	gotoxy(13, 26);
	printf("언어 : 영어"); 
	gotoxy(13, 27);
	printf("수도 : 워싱턴");
	gotoxy(13, 28);
	printf("면적 : 9,826,675㎢ 세계3위");
	gotoxy(13, 29);
	printf("인구 : 약 318,892,103명 세계3위 ");
	gotoxy(13, 30);
	printf("GDP : 17조 4,163억$ 세계1위");
	gotoxy(13, 31);
	RED;
	printf("가격: 18000원");
	gotoxy(13, 32);
	YELLOW;
	printf("1. 구매하기 2. 나가기");

}  //미국



void IndiaINFO(){
	system("cls");
	gotoxy(13, 5);
	YELLOW; printf("■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 6);
	YELLOW; printf("■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 7);
	YELLOW; printf("■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 8);
	YELLOW; printf("■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 9);
	YELLOW; printf("■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 10);
	WHITE; printf("■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 11);
	WHITE; printf("■■■■■■■■■■■"); BLUE; printf("■■■"); WHITE; printf("■■■■■■■■■■■\n");
	gotoxy(13, 12);
	WHITE; printf("■■■■■■■■■■"); BLUE; printf("■▧▥▨■"); WHITE; printf("■■■■■■■■■■\n");
	gotoxy(13, 13);
	WHITE; printf("■■■■■■■■■■"); BLUE; printf("■▤●▤■"); WHITE; printf("■■■■■■■■■■\n");
	gotoxy(13, 14);
	WHITE; printf("■■■■■■■■■■"); BLUE; printf("■▨▥▧■"); WHITE; printf("■■■■■■■■■■\n");
	gotoxy(13, 15);
	WHITE; printf("■■■■■■■■■■■"); BLUE; printf("■■■"); WHITE; printf("■■■■■■■■■■■\n");
	gotoxy(13, 16);
	WHITE; printf("■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 17);
	GREEN; printf("■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 18);
	GREEN; printf("■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 19);
	GREEN; printf("■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 20);
	GREEN; printf("■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 21);
	GREEN; printf("■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 22);
	GREEN; printf("■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	YELLOW;
	gotoxy(13, 25);
	printf("나라 : 인도");
	gotoxy(13, 26);
	printf("언어 : 힌디어(40%)외 14개 공용어, 영어(상용어)");
	gotoxy(13, 27);
	printf("수도 : 뉴델리");
	gotoxy(13, 28);
	printf("면적 : 3,287,263㎢ 세계7위"); 
	gotoxy(13, 29);
	printf("인구 : 약 1,236,344,631명 세계2위");
	gotoxy(13, 30);
	printf("GDP : 2조 478억$ 세계10"); 
	gotoxy(13, 31);
	RED;
	printf("가격: 9000원");
	YELLOW;
	gotoxy(13, 32);
	printf("1. 구매하기 2. 나가기");

} //인도


void singaporeINFO(){ //싱가포르
	system("cls");
	gotoxy(13, 3);
	RED; printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 4);
	RED; printf("■■■■■"); WHITE; printf("■■■"); RED; printf("■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 5);
	RED; printf("■■■"); WHITE; printf("■■■■"); RED; printf("■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 6);
	RED; printf("■■"); WHITE; printf("■■■■"); RED; printf("■■■■"); WHITE; printf("★"); RED; printf("■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 7);
	RED; printf("■■"); WHITE; printf("■■■"); RED; printf("■■■■■"); RED; printf("■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 8);
	RED; printf("■■"); WHITE; printf("■■■"); RED; printf("■■■"); WHITE; printf("★"); RED; printf("■■■"); WHITE; printf("★"); RED; printf("■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 9);
	RED; printf("■■"); WHITE; printf("■■■■"); RED; printf("■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 10);
	RED; printf("■■■"); WHITE; printf("■■■■"); RED; printf("■■"); WHITE; printf("★"); RED; printf("■"); WHITE; printf("★"); RED; printf("■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 11);
	RED; printf("■■■■■"); WHITE; printf("■■■"); RED; printf("■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 12);
	RED; printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 13);
	WHITE; printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 14);
	WHITE; printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 15);
	WHITE; printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 16);
	WHITE; printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 17);
	WHITE; printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 18);
	WHITE; printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 19);
	WHITE; printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 20);
	WHITE; printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 21);
	WHITE; printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	YELLOW;
	gotoxy(13, 25);
	printf("나라 : 싱가포르");
	gotoxy(13, 26);
	printf("언어 : 말레이어, 중국어, 영어, 타밀어");
	gotoxy(13, 27);
	printf("수도 : 싱가포르");
	gotoxy(13, 28);
	printf("면적 : 697㎢ 세계192위"); 
	gotoxy(13, 29);
	printf("인구 : 약 5,567,301명 세계115위");
	gotoxy(13, 30);
	printf("GDP : 3,071억$ 세계36위"); 
	gotoxy(13, 31);
	RED;
	printf("가격: 4000원");
	YELLOW;
	gotoxy(13, 32);
	printf("1. 구매하기 2. 나가기");

} //싱가포르


void canadaINFO(){  //캐나다
	system("cls");
	gotoxy(13, 3);
	RED; printf("■■■■"); WHITE; printf("■■■■■■■■■■■■"); WHITE; printf("■■■■■■■■■■■"); RED; printf("■■■■\n");
	gotoxy(13, 4);
	RED; printf("■■■■"); WHITE; printf("■■■■■■■■■■■"); RED; printf("■"); WHITE; printf("■■■■■■■■■■■"); RED; printf("■■■■\n");
	gotoxy(13, 5);
	RED; printf("■■■■"); WHITE; printf("■■■■■■■■■■"); RED; printf("■■■"); WHITE; printf("■■■■■■■■■■"); RED; printf("■■■■\n");
	gotoxy(13, 6);
	RED; printf("■■■■"); WHITE; printf("■■■■■■■"); RED; printf("■"); WHITE; printf("■■"); RED; printf("■■■"); WHITE; printf("■■"); RED; printf("■"); WHITE; printf("■■■■■■■"); RED; printf("■■■■\n");
	gotoxy(13, 7);
	RED; printf("■■■■"); WHITE; printf("■■■■■■"); RED; printf("■■■■■■■■■■■"); WHITE; printf("■■■■■■"); RED; printf("■■■■\n");
	gotoxy(13, 8);
	RED; printf("■■■■"); WHITE; printf("■■■■■■"); RED; printf("■■■■■■■■■■■"); WHITE; printf("■■■■■■"); RED; printf("■■■■\n");
	gotoxy(13, 9);
	RED; printf("■■■■"); WHITE; printf("■■■■■■■"); RED; printf("■■■■■■■■■"); WHITE; printf("■■■■■■■"); RED; printf("■■■■\n");
	gotoxy(13, 10);
	RED; printf("■■■■"); WHITE; printf("■■■"); RED; printf("■■"); WHITE; printf("■■■"); RED; printf("■■■■■■■"); WHITE; printf("■■■"); RED; printf("■■"); WHITE; printf("■■■"); RED; printf("■■■■\n");
	gotoxy(13, 11);
	RED; printf("■■■■"); WHITE; printf("■■"); RED; printf("■■■■■■■■■■■■■■■■■■■"); WHITE; printf("■■"); RED; printf("■■■■\n");
	gotoxy(13, 12);
	RED; printf("■■■■"); WHITE; printf("■■■"); RED; printf("■■■■■■■■■■■■■■■■■"); WHITE; printf("■■■"); RED; printf("■■■■\n");
	gotoxy(13, 13);
	RED; printf("■■■■"); WHITE; printf("■■■■"); RED; printf("■■■■■■■■■■■■■■■"); WHITE; printf("■■■■"); RED; printf("■■■■\n");
	gotoxy(13, 14);
	RED; printf("■■■■"); WHITE; printf("■■■■■"); RED; printf("■■■■■■■■■■■■■"); WHITE; printf("■■■■■"); RED; printf("■■■■\n");
	gotoxy(13, 15);
	RED; printf("■■■■"); WHITE; printf("■■■■"); RED; printf("■■■■■■■■■■■■■■■"); WHITE; printf("■■■■"); RED; printf("■■■■\n");
	gotoxy(13, 16);
	RED; printf("■■■■"); WHITE; printf("■■■"); RED; printf("■■■■■■■■■■■■■■■■■"); WHITE; printf("■■■"); RED; printf("■■■■\n");
	gotoxy(13, 17);
	RED; printf("■■■■"); WHITE; printf("■■■■■■■■■■■"); RED; printf("■"); WHITE; printf("■■■■■■■■■■■"); RED; printf("■■■■\n");
	gotoxy(13, 18);
	RED; printf("■■■■"); WHITE; printf("■■■■■■■■■■■"); RED; printf("■"); WHITE; printf("■■■■■■■■■■■"); RED; printf("■■■■\n");
	gotoxy(13, 19);
	RED; printf("■■■■"); WHITE; printf("■■■■■■■■■■■"); RED; printf("■"); WHITE; printf("■■■■■■■■■■■"); RED; printf("■■■■\n");
	gotoxy(13, 20);
	RED; printf("■■■■"); WHITE; printf("■■■■■■■■■■■"); RED; printf("■"); WHITE; printf("■■■■■■■■■■■"); RED; printf("■■■■\n");
	gotoxy(13, 21);
	RED; printf("■■■■"); WHITE; printf("■■■■■■■■■■■"); RED; printf("■"); WHITE; printf("■■■■■■■■■■■"); RED; printf("■■■■\n");
	gotoxy(13, 22);
	RED; printf("■■■■"); WHITE; printf("■■■■■■■■■■■■"); WHITE; printf("■■■■■■■■■■■"); RED; printf("■■■■\n");
	YELLOW;
	gotoxy(13, 25);
	printf("나라 : 캐나다");
	gotoxy(13, 26);
	printf("언어 : 프랑스어, 영어");
	gotoxy(13, 27);
	printf("수도 : 오타와");
	gotoxy(13, 28);
	printf("면적 : 9,984,670㎢ 세계2위"); 
	gotoxy(13, 29);
	printf("인구 : 약 34,834,841명 세계37위 ");
	gotoxy(13, 30);
	printf("GDP : 1조 7,938억$ 세계11위"); 
	gotoxy(13, 31);
	RED;
	printf("가격: 8000원");
	YELLOW;
	gotoxy(13, 32);
	printf("1. 구매하기 2. 나가기");

} //캐나다

void australiaINFO() { //호주(오스트레일리아) 가로	31 세로 19
	system("cls");
	gotoxy(13, 3);
	BLUE printf("■"); WHITE printf("■"); RED printf("■"); WHITE printf("■"); BLUE printf("■■"); WHITE printf("■"); RED printf("■■■"); WHITE printf("■"); BLUE printf("■■"); WHITE printf("■"); RED printf("■"); WHITE printf("■"); BLUE printf("■■■■■■■■■■■■■■■\n");
	gotoxy(13, 4);
	BLUE printf("■"); WHITE printf("■"); RED printf("■"); WHITE printf("■"); BLUE printf("■■"); WHITE printf("■"); RED printf("■■■"); WHITE printf("■"); BLUE printf("■■"); WHITE printf("■"); RED printf("■"); WHITE printf("■"); BLUE printf("■■■■■■■■■■■■■■■\n");
	gotoxy(13, 5);
	BLUE printf("■■"); WHITE printf("■"); RED printf("■"); WHITE printf("■"); BLUE printf("■");  WHITE printf("■"); RED printf("■■■"); WHITE printf("■"); BLUE printf("■"); WHITE printf("■"); RED printf("■"); WHITE printf("■"); BLUE printf("■■■■■■■■■■■"); WHITE printf("■"); BLUE printf("■■■■\n");
	gotoxy(13, 6);
	BLUE printf("■■"); WHITE printf("■"); RED printf("■"); WHITE printf("■"); BLUE printf("■");  WHITE printf("■"); RED printf("■■■"); WHITE printf("■"); BLUE printf("■"); WHITE printf("■"); RED printf("■"); WHITE printf("■"); BLUE printf("■■■■■■■■■■"); WHITE printf("■■■"); BLUE printf("■■■\n");
	gotoxy(13, 7);
	WHITE printf("■■■■■■■"); RED printf("■■■"); WHITE printf("■■■■■■■"); BLUE printf("■■■■■■■■■"); WHITE printf("■"); BLUE printf("■■■■\n");
	gotoxy(13, 8);
	RED printf("■■■■■■■■■■■■■■■■■"); BLUE printf("■■■■■■■■■■■■■■\n");
	gotoxy(13, 9);
	RED printf("■■■■■■■■■■■■■■■■■"); BLUE printf("■■■■■"); WHITE printf("■"); BLUE printf("■■■■■■■■\n");
	gotoxy(13, 10);
	WHITE printf("■■■■■■■"); RED printf("■■■"); WHITE printf("■■■■■■■"); BLUE printf("■■■■"); WHITE printf("■■■");BLUE printf("■■■■■■■\n");
	gotoxy(13, 11);
	BLUE printf("■■"); WHITE printf("■"); RED printf("■"); WHITE printf("■"); BLUE printf("■"); WHITE printf("■"); RED printf("■■■"); WHITE printf("■"); BLUE printf("■"); WHITE printf("■"); RED printf("■"); WHITE printf("■"); BLUE printf("■■■■■■■"); WHITE printf("■"); BLUE printf("■■■■■■■■\n");
	gotoxy(13, 12);
	BLUE printf("■■"); WHITE printf("■"); RED printf("■"); WHITE printf("■"); BLUE printf("■");  WHITE printf("■"); RED printf("■■■"); WHITE printf("■"); BLUE printf("■"); WHITE printf("■"); RED printf("■"); WHITE printf("■"); BLUE printf("■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 13);
	BLUE printf("■"); WHITE printf("■"); RED printf("■"); WHITE printf("■"); BLUE printf("■■"); WHITE printf("■"); RED printf("■■■"); WHITE printf("■"); BLUE printf("■■"); WHITE printf("■"); RED printf("■"); WHITE printf("■"); BLUE printf("■■■■■■■■■■■"); WHITE printf("■"); BLUE printf("■■■\n");
	gotoxy(13, 14);
	BLUE printf("■"); WHITE printf("■"); RED printf("■"); WHITE printf("■"); BLUE printf("■■"); WHITE printf("■"); RED printf("■■■"); WHITE printf("■");  BLUE printf("■■"); WHITE printf("■"); RED printf("■"); WHITE printf("■"); BLUE printf("■■■■■■■■■■"); WHITE printf("■■■");BLUE printf("■■\n");
	gotoxy(13, 15);
	BLUE printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■"); WHITE printf("■"); BLUE printf("■■■\n");
	gotoxy(13, 16);
	BLUE printf("■■■■■■■■■■■■■■■■■■■■"); WHITE printf("■"); BLUE printf ("■■■■■■■■■■\n");
	gotoxy(13, 17);
	BLUE printf("■■■■■■■■■"); WHITE printf("■"); BLUE printf("■■■■■■■■■"); WHITE printf("■■■"); BLUE printf("■■■■■■■■■\n");
	gotoxy(13, 18);
	BLUE printf("■■■■■■■■"); WHITE printf("■■■"); BLUE printf("■■■■■■■■■"); WHITE printf("■"); BLUE printf("■■■■"); WHITE printf("■"); BLUE printf("■■■■■\n");
	gotoxy(13, 19);
	BLUE printf("■■■■■■■■■"); WHITE printf("■"); BLUE printf("■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 20);
	BLUE printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 21);
	BLUE printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	YELLOW;
	gotoxy(13, 25);
	printf("나라 : 호주");
	gotoxy(13, 26);
	printf("언어 : 영어");
	gotoxy(13, 27);
	printf("수도 : 캔버라");
	gotoxy(13, 28);
	printf("면적 : 7,741,220㎢ 세계6위"); 
	gotoxy(13, 29);
	printf("인구 : 약 22,507,617명 세계55위 ");
	gotoxy(13, 30);
	printf("GDP : 1조 4,825억$ 세계12위"); 
	gotoxy(13, 31);
	RED;
	printf("가격: 8000원");
	YELLOW;
	gotoxy(13, 32);
	printf("1. 구매하기 2. 나가기");

}

void philippinesINFO(){  //필리핀 가로 30 세로 20
	system("cls");
	gotoxy(13, 3);
	WHITE printf("■■");BLUE printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 4);
	WHITE printf("■■■■"); BLUE printf("■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 5);
	WHITE printf("■■■■■");BLUE printf("■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 6);
	WHITE printf("■■■■■■■");BLUE printf("■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 7);
	WHITE printf("■■■■■■■■"); BLUE printf("■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 8);
	WHITE printf("■■"); YELLOW printf("★"); WHITE printf("■■■■■■■"); BLUE printf("■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 9);
	WHITE printf("■■■■■■■■■■■"); BLUE printf("■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 10);
	WHITE printf("■■■■■"); YELLOW printf("■"); WHITE printf("■■■■■■■");BLUE printf("■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 11);
	WHITE printf("■■■"); YELLOW printf("■"); WHITE printf("■"); YELLOW printf("■"); WHITE printf("■"); YELLOW printf("■"); WHITE printf("■■■■■■");BLUE printf("■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 12);
	WHITE printf("■■■■");  YELLOW printf("■■■"); WHITE printf("■■■"); YELLOW printf("★"); WHITE printf("■■■■■");BLUE printf("■■■■■■■■■■■■■■\n");
	gotoxy(13, 13);
	WHITE printf("■■■■");  YELLOW printf("■■■"); WHITE printf("■■■■■■■■■"); RED printf("■■■■■■■■■■■■■■\n");
	gotoxy(13, 14);
	WHITE printf("■■■"); YELLOW printf("■"); WHITE printf("■"); YELLOW printf("■"); WHITE printf("■"); YELLOW printf("■"); WHITE printf("■■■■■■"); RED printf("■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 15);
	WHITE printf("■■■■■"); YELLOW printf("■"); WHITE printf("■■■■■■■"); RED printf("■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 16);
	WHITE printf("■■■■■■■■■■■"); RED printf("■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 17);
	WHITE printf("■■"); YELLOW printf("★"); WHITE printf("■■■■■■■"); RED printf("■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 18);
	WHITE printf("■■■■■■■■"); RED printf("■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 19);
	WHITE printf("■■■■■■■"); RED printf("■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 20);
	WHITE printf("■■■■■");RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 21);
	WHITE printf("■■■■"); RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 22);
	WHITE printf("■■"); RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	YELLOW;
	gotoxy(13, 25);
	printf("나라 : 필리핀");
	gotoxy(13, 26);
	printf("언어 : 타갈로그어, 영어");
	gotoxy(13, 27);
	printf("수도 : 마닐라");
	gotoxy(13, 28);
	printf("면적 : 300,000㎢ 세계73위"); 
	gotoxy(13, 29);
	printf("인구 : 약 107,668,231명 세계12위 ");
	gotoxy(13, 30);
	printf("GDP : 2,897억$ 세계39위"); 
	gotoxy(13, 31);
	RED;
	printf("가격: 5000원");
	YELLOW;
	gotoxy(13, 32);
	printf("1. 구매하기 2. 나가기");

}



void franceINFO() { //프랑스 가로30 세로 21
	system("cls");
	gotoxy(13, 3);
	BLUE printf("■■■■■■■■■■"); WHITE printf("■■■■■■■■■■"); RED printf("■■■■■■■■■■\n");
	gotoxy(13, 4);
	BLUE printf("■■■■■■■■■■"); WHITE printf("■■■■■■■■■■"); RED printf("■■■■■■■■■■\n");
	gotoxy(13, 5);
	BLUE printf("■■■■■■■■■■"); WHITE printf("■■■■■■■■■■"); RED printf("■■■■■■■■■■\n");
	gotoxy(13, 6);
	BLUE printf("■■■■■■■■■■"); WHITE printf("■■■■■■■■■■"); RED printf("■■■■■■■■■■\n");
	gotoxy(13, 7);
	BLUE printf("■■■■■■■■■■"); WHITE printf("■■■■■■■■■■"); RED printf("■■■■■■■■■■\n");
	gotoxy(13, 8);
	BLUE printf("■■■■■■■■■■"); WHITE printf("■■■■■■■■■■"); RED printf("■■■■■■■■■■\n");
	gotoxy(13, 9);
	BLUE printf("■■■■■■■■■■"); WHITE printf("■■■■■■■■■■"); RED printf("■■■■■■■■■■\n");
	gotoxy(13, 10);
	BLUE printf("■■■■■■■■■■"); WHITE printf("■■■■■■■■■■"); RED printf("■■■■■■■■■■\n");
	gotoxy(13, 11);
	BLUE printf("■■■■■■■■■■"); WHITE printf("■■■■■■■■■■"); RED printf("■■■■■■■■■■\n");
	gotoxy(13, 12);
	BLUE printf("■■■■■■■■■■"); WHITE printf("■■■■■■■■■■"); RED printf("■■■■■■■■■■\n");
	gotoxy(13, 13);
	BLUE printf("■■■■■■■■■■"); WHITE printf("■■■■■■■■■■"); RED printf("■■■■■■■■■■\n");
	gotoxy(13, 14);
	BLUE printf("■■■■■■■■■■"); WHITE printf("■■■■■■■■■■"); RED printf("■■■■■■■■■■\n");
	gotoxy(13, 15);
	BLUE printf("■■■■■■■■■■"); WHITE printf("■■■■■■■■■■"); RED printf("■■■■■■■■■■\n");
	gotoxy(13, 16);
	BLUE printf("■■■■■■■■■■"); WHITE printf("■■■■■■■■■■"); RED printf("■■■■■■■■■■\n");
	gotoxy(13, 17);
	BLUE printf("■■■■■■■■■■"); WHITE printf("■■■■■■■■■■"); RED printf("■■■■■■■■■■\n");
	gotoxy(13, 18);
	BLUE printf("■■■■■■■■■■"); WHITE printf("■■■■■■■■■■"); RED printf("■■■■■■■■■■\n");
	gotoxy(13, 19);
	BLUE printf("■■■■■■■■■■"); WHITE printf("■■■■■■■■■■"); RED printf("■■■■■■■■■■\n");
	gotoxy(13, 20);
	BLUE printf("■■■■■■■■■■"); WHITE printf("■■■■■■■■■■"); RED printf("■■■■■■■■■■\n");
	gotoxy(13, 21);
	BLUE printf("■■■■■■■■■■"); WHITE printf("■■■■■■■■■■"); RED printf("■■■■■■■■■■\n");
	gotoxy(13, 22);
	BLUE printf("■■■■■■■■■■"); WHITE printf("■■■■■■■■■■"); RED printf("■■■■■■■■■■\n");
	gotoxy(13, 23);
	BLUE printf("■■■■■■■■■■"); WHITE printf("■■■■■■■■■■"); RED printf("■■■■■■■■■■\n");
	YELLOW;
	gotoxy(13, 25);
	printf("나라 : 프랑스");
	gotoxy(13, 26);
	printf("언어 : 프랑스어");
	gotoxy(13, 27);
	printf("수도 : 파리");
	gotoxy(13, 28);
	printf("면적 : 643,801㎢ 세계43위"); 
	gotoxy(13, 29);
	printf("인구 : 약 66,259,012명 세계21위 ");
	gotoxy(13, 30);
	printf("GDP : 2조 9,023억$ 세계5위"); 
	gotoxy(13, 31);
	RED;
	printf("가격: 14000원");
	YELLOW;
	gotoxy(13, 32);
	printf("1. 구매하기 2. 나가기");

}

void portugalINFO(){ //포르투갈 가로 30 세로 20
	system("cls");
	gotoxy(13, 3);
	GREEN printf("■■■■■■■■■■"); BLOOD printf("■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 4);
	GREEN printf("■■■■■■■■■■"); BLOOD printf("■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 5);
	GREEN printf("■■■■■■■■■■"); BLOOD printf("■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 6);
	GREEN printf("■■■■■■■■■■"); BLOOD printf("■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 7);
	GREEN printf("■■■■■■■■■■"); BLOOD printf("■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 8);
	GREEN printf("■■■■■■■■■■"); BLOOD printf("■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 9);
	GREEN printf("■■■■■■■"); YELLOW printf("■■■■■"); BLOOD printf("■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 10);
	GREEN printf("■■■■■■"); YELLOW printf("■■■"); GREEN printf("■"); YELLOW printf("■■■■"); BLOOD printf("■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 11);
	GREEN printf("■■■■■"); YELLOW printf("■"); GREEN printf("■■■"); BLOOD printf("■■"); YELLOW printf("■"); BLOOD printf("■■"); YELLOW printf("■"); BLOOD printf("■■■■■■■■■■■■■■■\n");
	gotoxy(13, 12);
	GREEN printf("■■■■■"); YELLOW printf("■■■"); BLOOD printf("■"); WHITE printf("■■"); BLOOD printf("■"); YELLOW printf("■"); BLOOD printf("■"); YELLOW printf("■"); BLOOD printf("■■■■■■■■■■■■■■■\n");
	gotoxy(13, 13);
	GREEN printf("■■■■■"); YELLOW printf("■"); GREEN printf("■■"); BLOOD printf("■"); WHITE printf("■■"); BLOOD printf("■"); YELLOW printf("■■■"); BLOOD printf("■■■■■■■■■■■■■■■\n");
	gotoxy(13, 14);
	GREEN printf("■■■■■"); YELLOW printf("■"); GREEN printf("■■"); YELLOW printf("■"); BLOOD printf("■■"); YELLOW printf("■"); BLOOD printf("■■"); YELLOW printf("■"); BLOOD printf("■■■■■■■■■■■■■■■\n");
	gotoxy(13, 15);
	GREEN printf("■■■■■■"); YELLOW printf("■■"); GREEN printf("■■"); BLOOD printf("■■"); YELLOW printf("■■"); BLOOD printf("■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 16);
	GREEN printf("■■■■■■■■"); YELLOW printf("■■■■"); BLOOD printf("■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 17);
	GREEN printf("■■■■■■■■■■"); BLOOD printf("■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 18);
	GREEN printf("■■■■■■■■■■"); BLOOD printf("■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 19);
	GREEN printf("■■■■■■■■■■"); BLOOD printf("■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 20);
	GREEN printf("■■■■■■■■■■"); BLOOD printf("■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 21);
	GREEN printf("■■■■■■■■■■"); BLOOD printf("■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 22);
	GREEN printf("■■■■■■■■■■"); BLOOD printf("■■■■■■■■■■■■■■■■■■■■\n");
	YELLOW;
	gotoxy(13, 25);
	printf("나라 : 포르투갈");
	gotoxy(13, 26);
	printf("언어 : 포르투갈어");
	gotoxy(13, 27);
	printf("수도 : 리스본");
	gotoxy(13, 28);
	printf("면적 : 92,090㎢ 세계111위"); 
	gotoxy(13, 29);
	printf("인구 : 약 10,813,834명 세계79위 ");
	gotoxy(13, 30);
	printf("GDP : 2,282억$ 세계46위"); 
	gotoxy(13, 31);
	RED;
	printf("가격: 2000원");
	YELLOW;
	gotoxy(13, 32);
	printf("1. 구매하기 2. 나가기");

}

void chinaINFO() { //중국 가로 30 세로 20
	system("cls");
	gotoxy(13, 3);
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 4);
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 5);
	RED printf("■■■■■■■■■■■■"); YELLOW printf("★"); RED printf("■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 6);
	RED printf("■■■■■"); YELLOW printf("★"); RED printf("■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 7);
	RED printf("■■■■■"); YELLOW printf("★"); RED printf("■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 8);
	RED printf("■■"); YELLOW printf("★"); RED printf("■"); YELLOW printf("★★★"); RED printf("■"); YELLOW printf("★"); RED printf("■■■■■"); YELLOW printf("★"); RED printf("■■■■■■■■■■■■■■■\n");
	gotoxy(13, 9);
	RED printf("■■■"); YELLOW printf("★★★★★");RED printf("■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 10);
	RED printf("■■■■"); YELLOW printf("★★★");RED printf("■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 11);
	RED printf("■■■■"); YELLOW printf("★"); RED printf("■"); YELLOW printf("★"); RED printf("■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 12);
	RED printf("■■■"); YELLOW printf("★"); RED printf("■■■"); YELLOW printf("★"); RED printf("■■■■■■"); YELLOW printf("★"); RED printf("■■■■■■■■■■■■■■■\n");
	gotoxy(13, 13);
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 14);
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 15);
	RED printf("■■■■■■■■■■■■"); YELLOW printf("★"); RED printf("■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 16);
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 17);
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 18);
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 19);
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 20);
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 21);
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 22);
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	YELLOW;
	gotoxy(13, 25);
	printf("나라 : 중국");
	gotoxy(13, 26);
	printf("언어 : 중국어");
	gotoxy(13, 27);
	printf("수도 : 베이징");
	gotoxy(13, 28);
	printf("면적 : 9,596,961㎢ 세계4위"); 
	gotoxy(13, 29);
	printf("인구 : 약 1,355,692,576명 세계1위 ");
	gotoxy(13, 30);
	printf("GDP : 10조 3,554억$ 세계2위"); 
	gotoxy(13, 31);
	RED;
	printf("가격: 17000원");
	gotoxy(13, 32);
	YELLOW;
	printf("1. 구매하기 2. 나가기");
}

void japanINFO()//일본 가로 30 세로 20
{   
	system("cls");
	gotoxy(13, 3);
	WHITE printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 4);
	WHITE printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 5);
	WHITE printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 6);
	WHITE printf("■■■■■■■■■■■■"); RED printf("■■■■■■"); WHITE; printf("■■■■■■■■■■■■\n");
	gotoxy(13, 7);
	WHITE printf("■■■■■■■■■■■"); RED printf("■■■■■■■■");WHITE printf("■■■■■■■■■■■\n");
	gotoxy(13, 8);
	WHITE printf("■■■■■■■■■■"); RED printf("■■■■■■■■■■");WHITE printf("■■■■■■■■■■\n");
	gotoxy(13, 9);
	WHITE printf("■■■■■■■■■"); RED printf("■■■■■■■■■■■■");WHITE printf("■■■■■■■■■\n");
	gotoxy(13, 10);
	WHITE printf("■■■■■■■■■"); RED printf("■■■■■■■■■■■■");WHITE printf("■■■■■■■■■\n");
	gotoxy(13, 11);
	WHITE printf("■■■■■■■■■"); RED printf("■■■■■■■■■■■■");WHITE printf("■■■■■■■■■\n");
	gotoxy(13, 12);
	WHITE printf("■■■■■■■■■"); RED printf("■■■■■■■■■■■■"); WHITE printf("■■■■■■■■■\n");
	gotoxy(13, 13);
	WHITE printf("■■■■■■■■■"); RED printf("■■■■■■■■■■■■"); WHITE printf("■■■■■■■■■\n");
	gotoxy(13, 14);
	WHITE printf("■■■■■■■■■"); RED printf("■■■■■■■■■■■■"); WHITE printf("■■■■■■■■■\n");
	gotoxy(13, 15);
	WHITE printf("■■■■■■■■■"); RED printf("■■■■■■■■■■■■"); WHITE printf("■■■■■■■■■\n");
	gotoxy(13, 16);
	WHITE printf("■■■■■■■■■"); RED printf("■■■■■■■■■■■■"); WHITE printf("■■■■■■■■■\n");
	gotoxy(13, 17);
	WHITE printf("■■■■■■■■■■"); RED printf("■■■■■■■■■■"); WHITE printf("■■■■■■■■■■\n");
	gotoxy(13, 18);
	WHITE printf("■■■■■■■■■■■"); RED printf("■■■■■■■■"); WHITE printf("■■■■■■■■■■■\n");
	gotoxy(13, 19);
	WHITE printf("■■■■■■■■■■■■"); RED printf("■■■■■■"); WHITE printf("■■■■■■■■■■■■\n");
	gotoxy(13, 20);
	WHITE printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 21);
	WHITE printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 22);
	WHITE printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	YELLOW;
	gotoxy(13, 25);
	printf("나라 : 일본");
	gotoxy(13, 26);
	printf("언어 : 일본어");
	gotoxy(13, 27);
	printf("수도 : 도쿄");
	gotoxy(13, 28);
	printf("면적 : 377,915㎢ 세계62위"); 
	gotoxy(13, 29);
	printf("인구 : 약 127,103,388명 세계10위");
	gotoxy(13, 30);
	printf("GDP : 4조 7,698억$ 세계3위"); 
	gotoxy(13, 31);
	RED;
	printf("가격: 16000원");
	gotoxy(13, 32);
	YELLOW;
	printf("1. 구매하기 2. 나가기");

}

void italyINFO() { // 이탈리아 가로30 세로 21
	system("cls");
	gotoxy(13, 3);
	GREEN printf("■■■■■■■■■■"); WHITE printf("■■■■■■■■■■"); RED printf("■■■■■■■■■■\n");
	gotoxy(13, 4);
	GREEN printf("■■■■■■■■■■"); WHITE printf("■■■■■■■■■■"); RED printf("■■■■■■■■■■\n");
	gotoxy(13, 5);
	GREEN printf("■■■■■■■■■■"); WHITE printf("■■■■■■■■■■"); RED printf("■■■■■■■■■■\n");
	gotoxy(13, 6);
	GREEN printf("■■■■■■■■■■"); WHITE printf("■■■■■■■■■■"); RED printf("■■■■■■■■■■\n");
	gotoxy(13, 7);
	GREEN printf("■■■■■■■■■■"); WHITE printf("■■■■■■■■■■"); RED printf("■■■■■■■■■■\n");
	gotoxy(13, 8);
	GREEN printf("■■■■■■■■■■"); WHITE printf("■■■■■■■■■■"); RED printf("■■■■■■■■■■\n");
	gotoxy(13, 9);
	GREEN printf("■■■■■■■■■■"); WHITE printf("■■■■■■■■■■"); RED printf("■■■■■■■■■■\n");
	gotoxy(13, 10);
	GREEN printf("■■■■■■■■■■"); WHITE printf("■■■■■■■■■■"); RED printf("■■■■■■■■■■\n");
	gotoxy(13, 11);
	GREEN printf("■■■■■■■■■■"); WHITE printf("■■■■■■■■■■"); RED printf("■■■■■■■■■■\n");
	gotoxy(13, 12);
	GREEN printf("■■■■■■■■■■"); WHITE printf("■■■■■■■■■■"); RED printf("■■■■■■■■■■\n");
	gotoxy(13, 13);
	GREEN printf("■■■■■■■■■■"); WHITE printf("■■■■■■■■■■"); RED printf("■■■■■■■■■■\n");
	gotoxy(13, 14);
	GREEN printf("■■■■■■■■■■"); WHITE printf("■■■■■■■■■■"); RED printf("■■■■■■■■■■\n");
	gotoxy(13, 15);
	GREEN printf("■■■■■■■■■■"); WHITE printf("■■■■■■■■■■"); RED printf("■■■■■■■■■■\n");
	gotoxy(13, 16);
	GREEN printf("■■■■■■■■■■"); WHITE printf("■■■■■■■■■■"); RED printf("■■■■■■■■■■\n");
	gotoxy(13, 17);
	GREEN printf("■■■■■■■■■■"); WHITE printf("■■■■■■■■■■"); RED printf("■■■■■■■■■■\n");
	gotoxy(13, 18);
	GREEN printf("■■■■■■■■■■"); WHITE printf("■■■■■■■■■■"); RED printf("■■■■■■■■■■\n");
	gotoxy(13, 19);
	GREEN printf("■■■■■■■■■■"); WHITE printf("■■■■■■■■■■"); RED printf("■■■■■■■■■■\n");
	gotoxy(13, 20);
	GREEN printf("■■■■■■■■■■"); WHITE printf("■■■■■■■■■■"); RED printf("■■■■■■■■■■\n");
	gotoxy(13, 21);
	GREEN printf("■■■■■■■■■■"); WHITE printf("■■■■■■■■■■"); RED printf("■■■■■■■■■■\n");
	gotoxy(13, 22);
	GREEN printf("■■■■■■■■■■"); WHITE printf("■■■■■■■■■■"); RED printf("■■■■■■■■■■\n");
	gotoxy(13, 23);
	GREEN printf("■■■■■■■■■■"); WHITE printf("■■■■■■■■■■"); RED printf("■■■■■■■■■■\n");
	YELLOW;
	gotoxy(13, 25);
	printf("나라 : 이탈리아");
	gotoxy(13, 26);
	printf("언어 : 이탈리아어");
	gotoxy(13, 27);
	printf("수도 : 로마");
	gotoxy(13, 28);
	printf("면적 : 301,340㎢ 세계72위"); 
	gotoxy(13, 29);
	printf("인구 : 약 127,103,388명 세계10위");
	gotoxy(13, 30);
	printf("GDP : 4조 7,698억$ 세계3위"); 
	gotoxy(13, 31);
	RED;
	printf("가격: 11000원");
	gotoxy(13, 32);
	YELLOW;
	printf("1. 구매하기 2. 나가기");

}

void united_kingdomINFO(){ //영국 가로31 세로 17
	system("cls");
	gotoxy(13, 3);
	RED printf("■■"); WHITE printf("■■"); BLUE printf("■■■■■■■■"); WHITE printf("■"); RED printf("■■■■■"); WHITE printf("■"); BLUE printf("■■■■■■■■"); WHITE printf("■■"); RED printf("■■\n");
	gotoxy(13, 4);
	WHITE printf("■■"); RED printf("■■"); WHITE printf("■■"); BLUE printf("■■■■■■"); WHITE printf("■"); RED printf("■■■■■"); WHITE printf("■"); BLUE printf("■■■■■■"); WHITE printf("■■"); RED printf("■■"); WHITE printf("■■\n");
	gotoxy(13, 5);
	BLUE printf("■■"); WHITE printf("■■"); RED printf("■■"); WHITE printf("■■"); BLUE printf("■■■■"); WHITE printf("■"); RED printf("■■■■■"); WHITE printf("■"); BLUE printf("■■■■"); WHITE printf("■■"); RED printf("■■"); WHITE printf("■■"); BLUE printf("■■\n");
	gotoxy(13, 6);
	BLUE printf("■■■■"); WHITE printf("■■"); RED printf("■■"); WHITE printf("■■■");	BLUE printf("■"); WHITE printf("■"); RED printf("■■■■■"); WHITE printf("■"); BLUE printf("■"); WHITE("■");  WHITE printf("■■■"); RED printf("■■");  WHITE printf("■■"); BLUE printf("■■■■\n");
	gotoxy(13, 7);
	BLUE printf("■■■■■■"); WHITE printf("■■"); RED printf("■■"); WHITE printf("■"); BLUE printf("■"); WHITE printf("■"); RED printf("■■■■■");  WHITE printf("■");  BLUE printf("■"); WHITE printf("■"); RED printf("■■"); WHITE printf("■■"); BLUE printf("■■■■■■\n");
	gotoxy(13, 8);
	WHITE printf("■■■■■■■■■■■■■"); RED printf("■■■■■"); WHITE printf("■■■■■■■■■■■■■\n");
	gotoxy(13, 9);
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 10);
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 11);	
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 12);
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 13);
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 14);
	WHITE printf("■■■■■■■■■■■■■"); RED printf("■■■■■"); WHITE printf("■■■■■■■■■■■■■\n");
	gotoxy(13, 15);
	BLUE printf("■■■■■■"); WHITE printf("■■"); RED printf("■■"); WHITE printf("■"); BLUE printf("■"); WHITE printf("■"); RED printf("■■■■■"); WHITE printf("■");  BLUE printf("■"); WHITE printf("■"); RED printf("■■"); WHITE printf("■■"); BLUE printf("■■■■■■\n");
	gotoxy(13, 16);
	BLUE printf("■■■■"); WHITE printf("■■"); RED printf("■■"); WHITE printf("■■■");	BLUE printf("■"); WHITE printf("■"); RED printf("■■■■■"); WHITE printf("■"); BLUE printf("■"); WHITE("■");  WHITE printf("■■■"); RED printf("■■");  WHITE printf("■■"); BLUE printf("■■■■\n");
	gotoxy(13, 17);
	BLUE printf("■■"); WHITE printf("■■"); RED printf("■■"); WHITE printf("■■"); BLUE printf("■■■■"); WHITE printf("■"); RED printf("■■■■■"); WHITE printf("■"); BLUE printf("■■■■"); WHITE printf("■■"); RED printf("■■"); WHITE printf("■■"); BLUE printf("■■\n");
	gotoxy(13, 18);
	WHITE printf("■■"); RED printf("■■"); WHITE printf("■■"); BLUE printf("■■■■■■"); WHITE printf("■"); RED printf("■■■■■"); WHITE printf("■"); BLUE printf("■■■■■■"); WHITE printf("■■"); RED printf("■■"); WHITE printf("■■\n");
	gotoxy(13, 19);
	RED printf("■■"); WHITE printf("■■"); BLUE printf("■■■■■■■■"); WHITE printf("■"); RED printf("■■■■■"); WHITE printf("■"); BLUE printf("■■■■■■■■"); WHITE printf("■■"); RED printf("■■\n");
	gotoxy(13, 20);
	YELLOW;
	gotoxy(13, 25);
	printf("나라 : 영국");
	gotoxy(13, 26);
	printf("언어 : 영어");
	gotoxy(13, 27);
	printf("수도 : 런던");
	gotoxy(13, 28);
	printf("면적 : 243,610㎢ 세계80위"); 
	gotoxy(13, 29);
	printf("인구 : 약 63,742,977명 세계22위");
	gotoxy(13, 30);
	printf("GDP : 2조 8,476억$ 세계6위"); 
	gotoxy(13, 31);
	RED;
	printf("가격: 13000원");
	gotoxy(13, 32);
	YELLOW;
	printf("1. 구매하기 2. 나가기");


}


void brazilINFO(){ //브라질 가로 30 세로 19
	system("cls");
	gotoxy(13, 3);
	GREEN printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 4);
	GREEN printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 5);
	GREEN printf("■■■■■■■■■■■■■■"); YELLOW printf("■■"); GREEN printf("■■■■■■■■■■■■■■\n");
	gotoxy(13, 6);
	GREEN printf("■■■■■■■■■■■■"); YELLOW printf("■■■■■■"); GREEN printf("■■■■■■■■■■■■\n");
	gotoxy(13, 7);
	GREEN printf("■■■■■■■■■■■"); YELLOW printf("■■■■■■■■"); GREEN printf("■■■■■■■■■■■\n");
	gotoxy(13, 8);
	GREEN printf("■■■■■■■■■"); YELLOW printf("■■■■■"); BLUE printf("■■"); YELLOW printf("■■■■■"); GREEN printf("■■■■■■■■■\n");
	gotoxy(13, 9);
	GREEN printf("■■■■■■■■"); YELLOW printf("■■■■■"); BLUE printf("■■■■"); YELLOW printf("■■■■■");GREEN printf("■■■■■■■■\n");
	gotoxy(13, 10);
	GREEN printf("■■■■■■"); YELLOW printf("■■■■■■"); BLUE printf("■■■■■■"); YELLOW printf("■■■■■■");GREEN printf("■■■■■■\n");
	gotoxy(13, 11);
	GREEN printf("■■■■■"); YELLOW printf("■■■■■■"); BLUE printf("■"); WHITE printf("■■■"); BLUE printf("■■■■"); YELLOW printf("■■■■■■");GREEN printf("■■■■■\n");
	gotoxy(13, 12);
	GREEN printf("■■■■"); YELLOW printf("■■■■■■"); BLUE printf("■■"); WHITE printf("★");BLUE printf("■■"); WHITE printf("■"); BLUE printf("■"); WHITE printf("★");BLUE printf("■■"); YELLOW printf("■■■■■■");GREEN printf("■■■■\n");
	gotoxy(13, 13);
	GREEN printf("■■■■■"); YELLOW printf("■■■■■■"); BLUE printf("■■■■■"); WHITE printf("■■"); BLUE printf("■"); YELLOW printf("■■■■■■"); GREEN printf("■■■■■\n");
	gotoxy(13, 14);
	GREEN printf("■■■■■■"); YELLOW printf("■■■■■■"); BLUE printf("■"); WHITE printf("★"); BLUE printf("■■"); WHITE printf("★"); BLUE printf("■"); YELLOW printf("■■■■■■"); GREEN printf("■■■■■■\n");
	gotoxy(13, 15);
	GREEN printf("■■■■■■■■"); YELLOW printf("■■■■■"); BLUE printf("■■"); WHITE printf("★");BLUE printf("■"); YELLOW printf("■■■■■"); GREEN printf("■■■■■■■■\n");
	gotoxy(13, 16);
	GREEN printf("■■■■■■■■■"); YELLOW printf("■■■■■"); BLUE printf("■■"); YELLOW printf("■■■■■");GREEN printf("■■■■■■■■■\n");
	gotoxy(13, 17);
	GREEN printf("■■■■■■■■■■■"); YELLOW printf("■■■■■■■■"); GREEN printf("■■■■■■■■■■■\n");
	gotoxy(13, 18);
	GREEN printf("■■■■■■■■■■■■"); YELLOW printf("■■■■■■"); GREEN printf("■■■■■■■■■■■■\n");
	gotoxy(13, 19);
	GREEN printf("■■■■■■■■■■■■■■"); YELLOW printf("■■"); GREEN printf("■■■■■■■■■■■■■■\n");
	gotoxy(13, 20);
	GREEN printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 21);
	GREEN printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	YELLOW;
	gotoxy(13, 25);
	printf("나라 : 브라질");
	gotoxy(13, 26);
	printf("언어 : 포르투갈어");
	gotoxy(13, 27);
	printf("수도 : 브라질리아");
	gotoxy(13, 28);
	printf("면적 : 8,514,877㎢ 세계5위"); 
	gotoxy(13, 29);
	printf("인구 : 약 202,656,788명 세계5위");
	gotoxy(13, 30);
	printf("GDP : 2조 2,441억$ 세계7위"); 
	gotoxy(13, 31);
	RED;
	printf("가격: 12000원");
	gotoxy(13, 32);
	YELLOW;
	printf("1. 구매하기 2. 나가기");

}


void spainINFO(){ //스폐인 가로 30 세로 19
	system("cls");
	gotoxy(13, 3);
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 4);
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 5);
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 6);
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 7);
	YELLOW printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 8);
	YELLOW printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 9);
	YELLOW printf("■■■■■■"); RED printf("■■■"); YELLOW printf("■"); RED printf("■■■"); YELLOW printf("■"); RED printf("■■■"); YELLOW printf("■"); RED printf("■"); YELLOW printf("■"); RED printf("■"); YELLOW printf("■■"); RED printf("■"); YELLOW printf("■■■■■■\n");
	gotoxy(13, 10);
	YELLOW printf("■■■■■■"); RED printf("■"); YELLOW printf("■■■"); RED printf("■"); YELLOW printf("■"); RED printf("■"); YELLOW printf("■"); RED printf("■"); YELLOW printf("■"); RED printf("■"); YELLOW printf("■"); RED printf("■"); YELLOW printf("■"); RED printf("■"); YELLOW printf("■■"); RED printf("■"); YELLOW printf("■■■■■■\n");
	gotoxy(13, 11);
	YELLOW printf("■■■■■■"); RED printf("■"); YELLOW printf("■■■"); RED printf("■"); YELLOW printf("■"); RED printf("■"); YELLOW printf("■"); RED printf("■"); YELLOW printf("■"); RED printf("■"); YELLOW printf("■"); RED printf("■"); YELLOW printf("■"); RED printf("■"); YELLOW printf("■■"); RED printf("■"); YELLOW printf("■■■■■■\n");
	gotoxy(13, 12);
	YELLOW printf("■■■■■■"); RED printf("■■■");  YELLOW printf("■"); RED printf("■■■"); YELLOW printf("■"); RED printf("■■■");  YELLOW printf("■"); RED printf("■"); YELLOW printf("■"); RED printf("■■"); YELLOW printf("■"); RED printf("■"); YELLOW printf("■■■■■■\n");
	gotoxy(13, 13);
	YELLOW printf("■■■■■■■■"); RED printf("■"); YELLOW printf("■"); RED printf("■"); YELLOW printf("■■■"); RED printf("■");  YELLOW printf("■"); RED printf("■");  YELLOW printf("■"); RED printf("■");  YELLOW printf("■"); RED printf("■");  YELLOW printf("■"); RED printf("■■");YELLOW printf("■■■■■■\n");
	gotoxy(13, 14);
	YELLOW printf("■■■■■■■■"); RED printf("■"); YELLOW printf("■"); RED printf("■"); YELLOW printf("■■■"); RED printf("■"); YELLOW printf("■"); RED printf("■"); YELLOW printf("■"); RED printf("■"); YELLOW printf("■"); RED printf("■"); YELLOW printf("■■"); RED printf("■"); YELLOW printf("■■■■■■\n");
	gotoxy(13, 15);
	YELLOW printf("■■■■■■"); RED printf("■■■"); YELLOW printf("■"); RED printf("■"); YELLOW printf("■■■"); RED printf("■"); YELLOW printf("■"); RED printf("■"); YELLOW printf("■"); RED printf("■"); YELLOW printf("■"); RED printf("■"); YELLOW printf("■■"); RED printf("■"); YELLOW printf("■■■■■■\n");
	gotoxy(13, 16);
	YELLOW printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 17);
	YELLOW printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 18);
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 19);
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 20);
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 21);
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	YELLOW;
	gotoxy(13, 25);
	printf("나라 : 스페인");
	gotoxy(13, 26);
	printf("언어 : 에스파냐어");
	gotoxy(13, 27);
	printf("수도 : 마드리드");
	gotoxy(13, 28);
	printf("면적 : 505,370㎢ 세계52위"); 
	gotoxy(13, 29);
	printf("인구 : 약 47,737,941명 세계28위");
	gotoxy(13, 30);
	printf("GDP : 1조 4,005억$ 세계14위"); 
	gotoxy(13, 31);
	RED;
	printf("가격: 6000원");
	gotoxy(13, 32);
	YELLOW;
	printf("1. 구매하기 2. 나가기");


}
void russiaINFO() { //러시아 가로30 세로 21
	system("cls");
	gotoxy(13, 3);
	WHITE printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 4);
	WHITE printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 5);
	WHITE printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 6);
	WHITE printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 7);
	WHITE printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 8);
	WHITE printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 9);
	BLUE printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 10);
	BLUE printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 11);
	BLUE printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 12);
	BLUE printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 13);
	BLUE printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 14);
	BLUE printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 15);
	BLUE printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 16);
	BLUE printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 17);
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 18);
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 19);
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 20);
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 21);
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 22);
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 23);
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	YELLOW;
	gotoxy(13, 25);
	printf("나라 : 러시아");
	gotoxy(13, 26);
	printf("언어 : 러시아어");
	gotoxy(13, 27);
	printf("수도 : 모스크바");
	gotoxy(13, 28);
	printf("면적 : 17,098,242㎢ 세계1위"); 
	gotoxy(13, 29);
	printf("인구 : 약 142,470,272명 세계9위");
	gotoxy(13, 30);
	printf("GDP : 2조 573억$ 세계9위"); 
	gotoxy(13, 31);
	RED;
	printf("가격: 10000원");
	YELLOW;
	gotoxy(13, 32);
	printf("1. 구매하기 2. 나가기");

}
void netherlandsINFO(){ //네덜란드 가로 30 세로 21
	system("cls");
	gotoxy(13, 3);
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 4);
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 5);
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 6);
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 7);
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 8);
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 9);
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 10);
	WHITE printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 11);
	WHITE printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 12);
	WHITE printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 13);
	WHITE printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 14);
	WHITE printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 15);
	WHITE printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 16);
	WHITE printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 17);
	BLUE printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 18);
	BLUE printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 19);
	BLUE printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 20);
	BLUE printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 21);
	BLUE printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 22);
	BLUE printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 23);
	BLUE printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	YELLOW;
	gotoxy(13, 25);
	printf("나라 : 네덜란드");
	gotoxy(13, 26);
	printf("언어 : 네덜란드어");
	gotoxy(13, 27);
	printf("수도 : 암스테르담");
	gotoxy(13, 28);
	printf("면적 : 41,543㎢ 세계135위"); 
	gotoxy(13, 29);
	printf("인구 : 약 16,877,351명 세계65위");
	gotoxy(13, 30);
	printf("GDP : 8,804억$ 세계16위"); 
	gotoxy(13, 31);
	RED;
	printf("가격: 3000원");
	YELLOW;
	gotoxy(13, 32);
	printf("1. 구매하기 2. 나가기");

}
void germanyINFO(){ //독일 가로 30 세로 21
	system("cls");
	gotoxy(13, 3);
	GRAY printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 4);
	GRAY printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 5);
	GRAY printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 6);
	GRAY printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 7);
	GRAY printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 8);
	GRAY printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 9);
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 10);
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 11);
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 12);
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 13);
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 14);
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 15);
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 16);
	RED printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 17);
	YELLOW printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 18);
	YELLOW printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 19);
	YELLOW printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 20);
	YELLOW printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 21);
	YELLOW printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 22);
	YELLOW printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13, 23);
	YELLOW printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	YELLOW;
	gotoxy(13, 25);
	printf("나라 : 독일");
	gotoxy(13, 26);
	printf("언어 : 독일어");
	gotoxy(13, 27);
	printf("수도 : 베를린");
	gotoxy(13, 28);
	printf("면적 : 357,022㎢ 세계63위"); 
	gotoxy(13, 29);
	printf("인구 : 약 80,996,685명 세계17위");
	gotoxy(13, 30);
	printf("GDP : 3조 8,205억$ 세계4위"); 
	gotoxy(13, 31);
	RED;
	printf("가격: 15000원");
	YELLOW;
	gotoxy(13, 32);
	printf("1. 구매하기 2. 나가기");

}


void uninhabitedINFO(int *p){
	int tmp = 0;
	char ccna[100] = "192.168.123.64";
	char answer[100] = {0};
	int ans = 0;
	char cL[100] = "데드락";
	

	system("mode con:cols=85 lines=38" );
	gotoxy(13,3);
	WHITE printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	gotoxy(13,4);
	WHITE printf("■■■■■■■■■■■■■■■■■■■"); BLACK printf("■"); WHITE printf("■■■■■■■■■■\n");
	gotoxy(13,5);
	WHITE printf("■■■■■■■■■■■■■■■■■■"); BLACK printf("■"); GREEN printf("■"); BLACK printf("■"); WHITE printf("■■■■■■■■■\n");
	gotoxy(13,6);
	WHITE printf("■■■■■■■■■■■■■■■■■■"); BLACK printf("■"); GREEN printf("■"); BLACK printf("■"); WHITE printf("■■■■■■■■■\n");
	gotoxy(13,7);
	WHITE printf("■■■■■■■■■■■■■■"); BLACK printf("■■■"); WHITE printf("■"); BLACK printf("■"); GREEN printf("■"); BLACK printf("■"); WHITE printf("■"); BLACK printf("■■■"); WHITE printf("■■■■■\n");
	gotoxy(13,8);
	WHITE printf("■■■■■■■■■■■■■"); BLACK printf("■"); GREEN printf("■■■");  BLACK printf("■■"); GREEN printf("■"); BLACK printf("■■"); GREEN printf("■■■"); BLACK printf("■"); WHITE printf("■■■■\n");
	gotoxy(13,9);
	WHITE printf("■■■■■■■■■■■■■■"); BLACK printf("■■"); GREEN printf("■■"); BLACK printf("■"); GREEN printf("■"); BLACK printf("■"); GREEN printf("■■"); BLACK printf("■■"); WHITE printf("■■■■■\n");
	gotoxy(13,10);
	WHITE printf("■■■■■■■■■■■■■■■■"); BLACK printf("■"); GREEN printf("■■"); BLACK printf("■"); GREEN printf("■■"); BLACK printf("■"); WHITE printf("■■■■■■■\n");
	gotoxy(13,11);
	WHITE printf("■■■■■■■"); RED printf("■■"); WHITE printf("■■■■■■■■"); BLACK printf("■"); GREEN printf("■"); BLACK printf("■"); GREEN printf("■"); BLACK printf("■"); WHITE printf("■■■■■■■■\n");
	gotoxy(13,12);
	WHITE printf("■■■■■■"); RED printf("■■■■"); WHITE printf("■■■■■■■■"); BLACK printf("■■■"); WHITE printf("■■■■■■■■■\n");
	gotoxy(13,13);
	WHITE printf("■■■■■■"); RED printf("■■■■"); WHITE printf("■■■■■■■■■"); BLACK printf("■"); WHITE printf("■■■■■■■■■■\n");
	gotoxy(13,14);
	WHITE printf("■■■■■■■"); RED printf("■■"); WHITE printf("■■■■■■■■■■"); BLACK printf("■"); WHITE printf("■■■■■■■■■■\n");
	gotoxy(13,15);
	WHITE printf("■■■■■■■■■■■■■■■■■■■"); BLACK printf("■");WHITE printf("■■■■■■■■■■\n");
	gotoxy(13,16);
	WHITE printf("■■■■■■■■■■■■■■■■■■■"); BLACK printf("■"); WHITE printf("■■■■■■■■■■\n");
	gotoxy(13,17);
	WHITE printf("■■■■■■■■■■■■■■■■■■■"); BLACK printf("■"); WHITE printf("■■■■■■■■■■\n");
	gotoxy(13,18);
	WHITE printf("■■■■■■■■■■■■■■■■■■■"); BLACK printf("■"); WHITE printf("■■■■■■■■■■\n");
	gotoxy(13,19);
	WHITE printf("■■■■■■■■■■■■■■■"); BLACK printf("■■"); GOLD printf("■■■■■"); BLACK printf("■■"); WHITE printf("■■■■■■\n");
	gotoxy(13,20);
	WHITE printf("■"); BLACK printf("■"); WHITE printf("■"); BLACK printf("■"); WHITE printf("■"); BLACK printf("■"); WHITE printf("■"); BLACK printf("■"); WHITE printf("■"); BLACK printf("■"); WHITE printf("■"); BLACK printf("■"); WHITE printf("■"); BLACK printf("■■"); GOLD printf("■■■■■■■■■"); BLACK printf("■■■■"); WHITE printf("■■\n");
	gotoxy(13,21);
	BLACK printf("■"); BLUE printf("■"); BLACK printf("■"); BLUE printf("■"); BLACK printf("■"); BLUE printf("■"); BLACK printf("■"); BLUE printf("■"); BLACK printf("■"); BLUE printf("■"); BLACK printf("■"); BLUE printf("■"); BLACK printf("■"); GOLD printf("■■■■■■■■■■■■■■■"); BLACK printf("■■\n");
	gotoxy(13,22);
	BLUE printf("■■■■■■■■■■■■■"); GOLD printf("■■■■■■■■■■■■■■■■■\n");

	YELLOW;
	gotoxy(13,24);
	printf("무인도에 들어왔습니다.");
	Sleep(1000);
	gotoxy(13,25);
	printf("벗어나기 위해서는 퀴즈를 풀어야합니다.");
	gotoxy(13,26);
	WHITE;
	Sleep(1000);
	printf("1. CCNA  2. Java  3. C언어");
	tmp = getch();
	if(tmp == 49){
		system("cls");
		gotoxy(30,18);
		printf("시작 하기전에 연습장을 준비하세요 ^^");
		Sleep(1500);
		gotoxy(30,18);
		printf("                                         ");
		YELLOW;
		gotoxy(10,13);
		printf("서브넷팅 문제입니다");
		Sleep(1500);
		WHITE;
		gotoxy(10,14);
		printf("192.168.123.0 /24 주소를 서브넷팅 하여 네트워크 5개이상으로나누고,");
		gotoxy(10,15);
		printf("3번째 네트워크 주소를 구하시오.");
		gotoxy(22,16);
		printf("=============================================");
		gotoxy(22,17);
		printf("│");
		gotoxy(65,17);
		printf("│");
		gotoxy(22,18);
		printf("=============================================");
		gotoxy(24,17);
		YELLOW;
		printf("정답 : ");
		WHITE;
		gotoxy(32, 17);
		scanf("%s",answer);

		if(strcmp(answer,ccna) == 0){
			gotoxy(40,19);
			YELLOW;
			printf("정답입니다");
			*p  = 1 ;
		
		}
		else
		{
			gotoxy(40,19);
			YELLOW;
			printf("틀렸습니다");
			*p  = 0 ;
		}
		WHTIE:
		getch();

	}
		if(tmp == 50)
		{
				system("cls");
				gotoxy(30,18);
				printf("자바 공부 많이 하셨나요? ^^");
				system("cls");
				Sleep(1500);
				gotoxy(30,18);
				printf("                                         ");
				YELLOW;
				gotoxy(10,13);
				printf("다음보기에서 틀린 것을 고르시오");
				Sleep(1500);
				WHITE;
				gotoxy(10,15);
				printf("1. 생성자가 하나라도 정의되어 있으면 디폴트 생성자는 만들어지지 않는다.");
				gotoxy(10,16);
				printf("2. 비공개 필드는 상속되어도 그 필드는 쓸수 없다.");
				gotoxy(10,17);
				printf("3. super키워드는 부모 클래스의 메소드를 쓰고자할때 사용된다.");
				gotoxy(10,18);
				printf("4. 생성자를 중복지정하면 오류가 난다.");

				gotoxy(22,19);
				printf("=============================================");
				gotoxy(22,20);
				printf("│");
				gotoxy(65,20);
				printf("│");
				gotoxy(22,21);
				printf("=============================================");
				gotoxy(24,20);
				YELLOW;
				printf("정답 : ");
				WHITE;
				gotoxy(32, 20);
				scanf("%d",&ans);

			if(ans == 4){
				gotoxy(40,22);
				YELLOW;
				printf("정답입니다");
				*p  = 1 ;
			}
			else
			{
				gotoxy(40,22);
				YELLOW;
				printf("틀렸습니다");
				*p  = 0 ;
			}
			WHITE;
			getch();
		}
		


if(tmp == 51)
		{
				system("cls");
				gotoxy(30,18);
				printf("전공단어 문제입니다. ^^");
				system("cls");
				Sleep(1500);
				gotoxy(30,18);
				printf("                                         ");
				YELLOW;
				gotoxy(15,13);
				printf("다음 설명을 읽고 답을 입력하세요");
				Sleep(1500);
				WHITE;
				gotoxy(15,15);
				printf("램은 앞부분(스택), 뒷부분(힙)으로 나뉜다.");
				gotoxy(15,16);
				printf("두 부분이 채워지다가 만나면 메모리가 꽉차게 된다.");
				gotoxy(15,17);
				printf("이때 메모리가 꽉차 동작하지 않는상태를 무엇이라고 하는가?");
		

				gotoxy(22,18);
				printf("=============================================");
				gotoxy(22,19);
				printf("│");
				gotoxy(65,19);
				printf("│");
				gotoxy(22,20);
				printf("=============================================");
				gotoxy(24,19);
				YELLOW;
				printf("정답 : ");
				WHITE;
				gotoxy(32, 19);
				scanf("%s",answer);

			if(strcmp(answer,cL) == 0){
				gotoxy(40,21);
				YELLOW;
				printf("정답입니다");
				*p  = 1 ;
			}
			else
			{
				gotoxy(40,21);
				YELLOW;
				printf("틀렸습니다");
				*p  = 0 ;
			}
			WHITE;
			getch();
		}

}
