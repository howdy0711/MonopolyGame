#include "head.h"
void print_m(int);

void print_m(int n){
	int rnd =  0;
	int i;
	for(i=0; i<5; i++)
		rnd = rand()%3+1;

	if(rnd == 1)
	sndPlaySoundA("�ٸ���1.wav",SND_ASYNC|SND_NODEFAULT);
	if(rnd == 2)
	sndPlaySoundA("�ٸ���2.wav",SND_ASYNC|SND_NODEFAULT);
	if(rnd == 3)
	sndPlaySoundA("�ٸ���3.wav",SND_ASYNC|SND_NODEFAULT);
	system("cls");
	gotoxy(26,18);
	YELLOW;
	printf("�ٸ� �÷��̾ ������ ���� ��ҽ��ϴ�\n");
	Sleep(1500);
	system("cls");
	gotoxy(26,18);
	YELLOW;
	printf("%d�� ��ŭ ����� �ܾ��� �����մϴ�.\n",n);
	Sleep(1500);
	WHITE;
}


int countryINFO1(int n,int *p2, int *p1 , int *p3 , int arr1[], int player[], int *p6){
	int ch = 0;
	FILE *fp = NULL;

	system("mode con:cols=85 lines=38" );
	// �̰����� p1 ����, p2���� ���� �÷��׿�, ����� ���ο����� �÷��װ� �ʿ��ϴ�.
	if(n == 1){
		if(player[n-1] != 0){
		*p1 -= 2000;
		*p2 += 2000;
		print_m(2000); goto X;
		}
		portugalINFO();
		sndPlaySoundA("��������.wav",SND_ASYNC|SND_NODEFAULT);
		ch = _getch();
		if(ch == 49){
			if(*p1 <= 2000){
				system("cls");
				gotoxy(28,18);
				YELLOW;
				printf("�ܾ��� �����Ͽ� ������ �� �����ϴ�.\n");
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
		sndPlaySoundA("�״�����.wav",SND_ASYNC|SND_NODEFAULT);
		ch = _getch();
		if(ch == 49){
			if(*p1 <= 3000){
				system("cls");
				gotoxy(28,18);
				YELLOW;
				printf("�ܾ��� �����Ͽ� ������ �� �����ϴ�.\n");
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
		sndPlaySoundA("�̰���.wav",SND_ASYNC|SND_NODEFAULT);
		ch = _getch();
		if(ch == 49){
			if(*p1 <= 4000){
				system("cls");
				gotoxy(28,18);
				YELLOW;
				printf("�ܾ��� �����Ͽ� ������ �� �����ϴ�.\n");
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
		sndPlaySoundA("�ʸ���.wav",SND_ASYNC|SND_NODEFAULT);
		ch = _getch();
		if(ch == 49){
			if(*p1 <= 5000){
				system("cls");
				gotoxy(28,18);
				YELLOW;
				printf("�ܾ��� �����Ͽ� ������ �� �����ϴ�.\n");
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
		sndPlaySoundA("������.wav",SND_ASYNC|SND_NODEFAULT);
		ch = _getch();
		if(ch == 49){
			if(*p1 <= 6000){
				system("cls");
				gotoxy(28,18);
				YELLOW;
				printf("�ܾ��� �����Ͽ� ������ �� �����ϴ�.\n");
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
		sndPlaySoundA("ȣ��.wav",SND_ASYNC|SND_NODEFAULT);
		ch = _getch();
		if(ch == 49){
			if(*p1 <= 7000){
				system("cls");
				gotoxy(28,18);
				YELLOW;
				printf("�ܾ��� �����Ͽ� ������ �� �����ϴ�.\n");
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
		sndPlaySoundA("ĳ����.wav",SND_ASYNC|SND_NODEFAULT);
		ch = _getch();
		if(ch == 49){
			if(*p1 <= 8000){
				system("cls");
				gotoxy(28,18);
				YELLOW;
				printf("�ܾ��� �����Ͽ� ������ �� �����ϴ�.\n");
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
		sndPlaySoundA("�ε�.wav",SND_ASYNC|SND_NODEFAULT);
		ch = _getch();
		if(ch == 49){
			if(*p1 <= 9000){
				system("cls");
				gotoxy(28,18);
				YELLOW;
				printf("�ܾ��� �����Ͽ� ������ �� �����ϴ�.\n");
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
		sndPlaySoundA("���þ�.wav",SND_ASYNC|SND_NODEFAULT);
		ch = _getch();
		if(ch == 49){
			if(*p1 <= 10000){
				system("cls");
				gotoxy(28,18);
				YELLOW;
				printf("�ܾ��� �����Ͽ� ������ �� �����ϴ�.\n");
				Sleep(1500);
				goto X;
			}
			*p1 -= 10000;
			*p3 = 8;
		}
		if(ch == 50)
			goto X;
	}
	if(n == 10){ //���ε�
		sndPlaySoundA("���ε�.wav",SND_ASYNC|SND_NODEFAULT);
		uninhabitedINFO(p6);
	}
	if(n == 11){
		if(player[n-2] != 0){
		*p1 -= 11000;
		*p2 += 11000;
		print_m(11000); goto X;
		}
		italyINFO();	
		sndPlaySoundA("��Ż����.wav",SND_ASYNC|SND_NODEFAULT);
		ch = _getch();
		if(ch == 49){
			if(*p1 <= 11000){
				system("cls");
				gotoxy(28,18);
				YELLOW;
				printf("�ܾ��� �����Ͽ� ������ �� �����ϴ�.\n");
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
		sndPlaySoundA("�����.wav",SND_ASYNC|SND_NODEFAULT);
		ch = _getch();
		if(ch == 49){
			if(*p1 <= 12000){
				system("cls");
				gotoxy(28,18);
				YELLOW;
				printf("�ܾ��� �����Ͽ� ������ �� �����ϴ�.\n");
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
		sndPlaySoundA("����.wav",SND_ASYNC|SND_NODEFAULT);
		ch = _getch();
		if(ch == 49){
			if(*p1 <= 13000){
				system("cls");
				gotoxy(28,18);
				YELLOW;
				printf("�ܾ��� �����Ͽ� ������ �� �����ϴ�.\n");
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
		sndPlaySoundA("������.wav",SND_ASYNC|SND_NODEFAULT);
		ch = _getch();
		if(ch == 49){
			if(*p1 <= 14000){
				system("cls");
				gotoxy(28,18);
				YELLOW;
				printf("�ܾ��� �����Ͽ� ������ �� �����ϴ�.\n");
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
		sndPlaySoundA("����.wav",SND_ASYNC|SND_NODEFAULT);
		ch = _getch();
		if(ch == 49){
			if(*p1 <= 15000){
				system("cls");
				gotoxy(28,18);
				YELLOW;
				printf("�ܾ��� �����Ͽ� ������ �� �����ϴ�.\n");
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
		sndPlaySoundA("�Ϻ�.wav",SND_ASYNC|SND_NODEFAULT);
		ch = _getch();
		if(ch == 49){
			if(*p1 <= 16000){
				system("cls");
				gotoxy(28,18);
				YELLOW;
				printf("�ܾ��� �����Ͽ� ������ �� �����ϴ�.\n");
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
		sndPlaySoundA("�߱�.wav",SND_ASYNC|SND_NODEFAULT);
		ch = _getch();
		if(ch == 49){
			if(*p1 <= 17000){
				system("cls");
				gotoxy(28,18);
				YELLOW;
				printf("�ܾ��� �����Ͽ� ������ �� �����ϴ�.\n");
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
		sndPlaySoundA("�̱�.wav",SND_ASYNC|SND_NODEFAULT);
		ch = _getch();
		if(ch == 49){
			if(*p1 <= 18000){
				system("cls");
				gotoxy(28,18);
				YELLOW;
				printf("�ܾ��� �����Ͽ� ������ �� �����ϴ�.\n");
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
		sndPlaySoundA("�ѱ�.wav",SND_ASYNC|SND_NODEFAULT);
		ch = _getch();
		if(ch == 49){
			if(*p1 <= 20000){
				system("cls");
				gotoxy(28,18);
				YELLOW;
				printf("�ܾ��� �����Ͽ� ������ �� �����ϴ�.\n");
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
	sndPlaySoundA("�����μ�.wav",SND_ASYNC|SND_NODEFAULT);
	}
	if(ch == 49 && arr1[*p3] == 0 ){ // 0���� �Ǿ������� ���ð� �����μ� �� ��
		system("cls");
		gotoxy(32,18);
		YELLOW;
		printf("�̹� ������ ���Դϴ�.\n");
			Sleep(1000);
	}
	
		if(n >= 20){
		sndPlaySoundA("�����Ҹ�2.wav",SND_ASYNC|SND_NODEFAULT);
		YELLOW;
		gotoxy(34,18);
		printf("������� �������ϴ�\n");
		Sleep(1000);
		gotoxy(30,18);
		printf("���� 5000���� �־����ϴ�.\n");
		Sleep(3000);
		WHITE;
	}

	X:
	system("cls");
	system("mode con:cols=80 lines=38" );
	Game_Board();
	return ch;
}

void koreaINFO(){ //�ѱ� ���� 31 ���� 22
	system("cls");
	gotoxy(13, 3);
	WHITE printf("��������������������������������\n");
	gotoxy(13, 4);
	WHITE printf("����������"); BLACK printf("��"); WHITE printf("������������"); BLACK printf("��"); WHITE printf("����������\n");
	gotoxy(13, 5);
	WHITE printf("���������"); BLACK printf("��"); WHITE printf("��"); BLACK printf("��"); WHITE printf("����������"); BLACK printf("��"); WHITE printf("��"); BLACK printf("��"); WHITE printf("���������\n");
	gotoxy(13, 6);
	WHITE printf("��������"); BLACK printf("��"); WHITE printf("��"); BLACK printf("��"); WHITE printf("��"); BLACK printf("��"); WHITE printf("��������"); BLACK printf("��"); WHITE printf("��"); BLACK printf("��"); WHITE printf("����������\n");
	gotoxy(13, 7);
	WHITE printf("�������"); BLACK printf("��"); WHITE printf("��"); BLACK printf("��"); WHITE printf("��"); BLACK printf("��"); WHITE printf("���"); RED printf("������"); WHITE printf("���"); BLACK printf("��"); WHITE printf("��"); BLACK printf("��"); WHITE printf("��");  BLACK printf("��"); WHITE printf("�������\n");
	gotoxy(13, 8);
	WHITE printf("������");  BLACK printf("��"); WHITE printf("��"); BLACK printf("��"); WHITE printf("��"); BLACK printf("��"); WHITE printf("��"); RED printf("����������");  WHITE printf("����");  BLACK printf("��"); WHITE printf("��"); BLACK printf("��"); WHITE printf("������\n");
	gotoxy(13, 9);
	WHITE printf("�������"); BLACK printf("��"); WHITE printf("��"); BLACK printf("��"); WHITE printf("��"); RED printf("������������"); WHITE printf("��"); BLACK printf("��"); WHITE printf("��"); BLACK printf("��"); WHITE printf("�������\n");
	gotoxy(13, 10);
	WHITE printf("��������");  BLACK printf("��"); WHITE printf("��"); RED printf("��������������"); WHITE printf("��"); BLACK printf("��"); WHITE printf("��������\n");
	gotoxy(13, 11);
	WHITE printf("����������"); RED printf("���������"); BLUE printf("���"); RED printf("����"); WHITE printf("����������\n");
	gotoxy(13, 12);
	WHITE printf("����������"); RED printf("��������"); BLUE printf("�����"); RED printf("���"); WHITE printf("����������\n");
	gotoxy(13, 13);
	WHITE printf("����������"); BLUE printf("���"); RED printf("�����"); BLUE printf("�������"); RED printf("��"); WHITE printf("����������\n");
	gotoxy(13, 14);
	WHITE printf("����������"); BLUE printf("��������������"); WHITE printf("����������\n");
	gotoxy(13, 15);
	WHITE printf("����������"); BLUE printf("��������������"); WHITE printf("����������\n");
	gotoxy(13, 16);
	WHITE printf("��������"); BLACK printf("��"); WHITE printf("���"); BLUE printf("������������"); WHITE printf("���"); BLACK printf("��"); WHITE printf("��������\n");
	gotoxy(13, 17);
	WHITE printf("�������");  BLACK printf("��"); WHITE printf("��"); BLACK printf("��"); WHITE printf("���"); BLUE printf("����������"); WHITE printf("���"); BLACK printf("��"); WHITE printf("��"); BLACK printf("��"); WHITE printf("�������\n");
	gotoxy(13, 18);
	WHITE printf("������"); BLACK printf("��"); WHITE printf("��"); BLACK printf("��"); WHITE printf("��"); BLACK printf("��"); WHITE printf("����"); BLUE printf("������"); WHITE printf("������"); BLACK printf("��"); WHITE printf("��"); BLACK printf("��"); WHITE printf("������\n");
	gotoxy(13, 19);
	WHITE printf("�������"); BLACK printf("��"); WHITE printf("����"); BLACK printf("��"); WHITE printf("����������"); BLACK printf("��"); WHITE printf("����"); BLACK printf("��"); WHITE printf("�������\n");
	gotoxy(13, 20);
	WHITE printf("��������"); BLACK printf("��"); WHITE printf("��"); BLACK printf("��"); WHITE printf("��"); BLACK printf("��"); WHITE printf("��������"); BLACK printf("��"); WHITE printf("��"); BLACK printf("��"); WHITE printf("����������\n");
	gotoxy(13, 21);
	WHITE printf("���������"); BLACK printf("��"); WHITE printf("��"); BLACK printf("��"); WHITE printf("����������"); BLACK printf("��"); WHITE printf("��"); BLACK printf("��"); WHITE printf("���������\n");
	gotoxy(13, 22);
	WHITE printf("����������"); BLACK printf("��"); WHITE printf("������������"); BLACK printf("��"); WHITE printf("����������\n");
	gotoxy(13, 23);
	WHITE printf("��������������������������������\n");
	YELLOW;
	gotoxy(13, 25);
	printf("���� : �ѱ�");
	gotoxy(13, 26);
	printf("��� : �ѱ���");
	gotoxy(13, 27);
	printf("���� : ����");
	gotoxy(13, 28);
	printf("���� : 99,720�� ����109�� ");
	gotoxy(13, 29);
	printf("�α� : �� 51,395,238��");
	gotoxy(13, 30);
	printf("GDP : 1�� 4,495��$ ����13��");
	gotoxy(13, 31);
	RED;
	printf("����: 20000��");
	gotoxy(13, 32);
	YELLOW;
	printf("1. �����ϱ� 2. ������");
}


void USAINFO(){  //�̱�
	system("cls");
	gotoxy(13, 3);
	WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); RED; printf("����������������\n");
	gotoxy(13, 4);
	DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); WHITE; printf("����������������\n");
	gotoxy(13, 5);
	WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); RED; printf("����������������\n");
	gotoxy(13, 6);
	DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); WHITE; printf("����������������\n");
	gotoxy(13, 7);
	WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); RED; printf("����������������\n");
	gotoxy(13, 8);
	DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); WHITE; printf("����������������\n");
	gotoxy(13, 9);
	WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); RED; printf("����������������\n");
	gotoxy(13, 10);
	DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); WHITE; printf("����������������\n");
	gotoxy(13, 11);
	WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); RED; printf("����������������\n");
	gotoxy(13, 12);
	DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); WHITE; printf("����������������\n");
	gotoxy(13, 13);
	WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); RED; printf("����������������\n");
	gotoxy(13, 14);
	DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); DARK_BLUE; printf("��"); WHITE; printf("��"); WHITE; printf("����������������\n");
	gotoxy(13, 15);
	RED; printf("��������������������������\n");
	gotoxy(13, 16);
	WHITE; printf("��������������������������\n");
	gotoxy(13, 17);
	RED; printf("��������������������������\n");
	gotoxy(13, 18);
	WHITE; printf("��������������������������\n");
	gotoxy(13, 19);
	RED; printf("��������������������������\n");
	gotoxy(13, 20);
	WHITE; printf("��������������������������\n");
	gotoxy(13, 21);
	RED; printf("��������������������������\n");
	gotoxy(13, 22);
	WHITE; printf("��������������������������\n");
	YELLOW;
	gotoxy(13, 25);
	printf("���� : �̱�"); 
	gotoxy(13, 26);
	printf("��� : ����"); 
	gotoxy(13, 27);
	printf("���� : ������");
	gotoxy(13, 28);
	printf("���� : 9,826,675�� ����3��");
	gotoxy(13, 29);
	printf("�α� : �� 318,892,103�� ����3�� ");
	gotoxy(13, 30);
	printf("GDP : 17�� 4,163��$ ����1��");
	gotoxy(13, 31);
	RED;
	printf("����: 18000��");
	gotoxy(13, 32);
	YELLOW;
	printf("1. �����ϱ� 2. ������");

}  //�̱�



void IndiaINFO(){
	system("cls");
	gotoxy(13, 5);
	YELLOW; printf("��������������������������\n");
	gotoxy(13, 6);
	YELLOW; printf("��������������������������\n");
	gotoxy(13, 7);
	YELLOW; printf("��������������������������\n");
	gotoxy(13, 8);
	YELLOW; printf("��������������������������\n");
	gotoxy(13, 9);
	YELLOW; printf("��������������������������\n");
	gotoxy(13, 10);
	WHITE; printf("��������������������������\n");
	gotoxy(13, 11);
	WHITE; printf("������������"); BLUE; printf("����"); WHITE; printf("������������\n");
	gotoxy(13, 12);
	WHITE; printf("�����������"); BLUE; printf("��ʢȢɡ�"); WHITE; printf("�����������\n");
	gotoxy(13, 13);
	WHITE; printf("�����������"); BLUE; printf("��ǡܢǡ�"); WHITE; printf("�����������\n");
	gotoxy(13, 14);
	WHITE; printf("�����������"); BLUE; printf("��ɢȢʡ�"); WHITE; printf("�����������\n");
	gotoxy(13, 15);
	WHITE; printf("������������"); BLUE; printf("����"); WHITE; printf("������������\n");
	gotoxy(13, 16);
	WHITE; printf("��������������������������\n");
	gotoxy(13, 17);
	GREEN; printf("��������������������������\n");
	gotoxy(13, 18);
	GREEN; printf("��������������������������\n");
	gotoxy(13, 19);
	GREEN; printf("��������������������������\n");
	gotoxy(13, 20);
	GREEN; printf("��������������������������\n");
	gotoxy(13, 21);
	GREEN; printf("��������������������������\n");
	gotoxy(13, 22);
	GREEN; printf("��������������������������\n");
	YELLOW;
	gotoxy(13, 25);
	printf("���� : �ε�");
	gotoxy(13, 26);
	printf("��� : �����(40%)�� 14�� �����, ����(����)");
	gotoxy(13, 27);
	printf("���� : ������");
	gotoxy(13, 28);
	printf("���� : 3,287,263�� ����7��"); 
	gotoxy(13, 29);
	printf("�α� : �� 1,236,344,631�� ����2��");
	gotoxy(13, 30);
	printf("GDP : 2�� 478��$ ����10"); 
	gotoxy(13, 31);
	RED;
	printf("����: 9000��");
	YELLOW;
	gotoxy(13, 32);
	printf("1. �����ϱ� 2. ������");

} //�ε�


void singaporeINFO(){ //�̰�����
	system("cls");
	gotoxy(13, 3);
	RED; printf("��������������������������������\n");
	gotoxy(13, 4);
	RED; printf("������"); WHITE; printf("����"); RED; printf("������������������������\n");
	gotoxy(13, 5);
	RED; printf("����"); WHITE; printf("�����"); RED; printf("�������������������������\n");
	gotoxy(13, 6);
	RED; printf("���"); WHITE; printf("�����"); RED; printf("�����"); WHITE; printf("��"); RED; printf("���������������������\n");
	gotoxy(13, 7);
	RED; printf("���"); WHITE; printf("����"); RED; printf("������"); RED; printf("����������������������\n");
	gotoxy(13, 8);
	RED; printf("���"); WHITE; printf("����"); RED; printf("����"); WHITE; printf("��"); RED; printf("����"); WHITE; printf("��"); RED; printf("�������������������\n");
	gotoxy(13, 9);
	RED; printf("���"); WHITE; printf("�����"); RED; printf("��������������������������\n");
	gotoxy(13, 10);
	RED; printf("����"); WHITE; printf("�����"); RED; printf("���"); WHITE; printf("��"); RED; printf("��"); WHITE; printf("��"); RED; printf("��������������������\n");
	gotoxy(13, 11);
	RED; printf("������"); WHITE; printf("����"); RED; printf("������������������������\n");
	gotoxy(13, 12);
	RED; printf("��������������������������������\n");
	gotoxy(13, 13);
	WHITE; printf("��������������������������������\n");
	gotoxy(13, 14);
	WHITE; printf("��������������������������������\n");
	gotoxy(13, 15);
	WHITE; printf("��������������������������������\n");
	gotoxy(13, 16);
	WHITE; printf("��������������������������������\n");
	gotoxy(13, 17);
	WHITE; printf("��������������������������������\n");
	gotoxy(13, 18);
	WHITE; printf("��������������������������������\n");
	gotoxy(13, 19);
	WHITE; printf("��������������������������������\n");
	gotoxy(13, 20);
	WHITE; printf("��������������������������������\n");
	gotoxy(13, 21);
	WHITE; printf("��������������������������������\n");
	YELLOW;
	gotoxy(13, 25);
	printf("���� : �̰�����");
	gotoxy(13, 26);
	printf("��� : �����̾�, �߱���, ����, Ÿ�о�");
	gotoxy(13, 27);
	printf("���� : �̰�����");
	gotoxy(13, 28);
	printf("���� : 697�� ����192��"); 
	gotoxy(13, 29);
	printf("�α� : �� 5,567,301�� ����115��");
	gotoxy(13, 30);
	printf("GDP : 3,071��$ ����36��"); 
	gotoxy(13, 31);
	RED;
	printf("����: 4000��");
	YELLOW;
	gotoxy(13, 32);
	printf("1. �����ϱ� 2. ������");

} //�̰�����


void canadaINFO(){  //ĳ����
	system("cls");
	gotoxy(13, 3);
	RED; printf("�����"); WHITE; printf("�������������"); WHITE; printf("������������"); RED; printf("�����\n");
	gotoxy(13, 4);
	RED; printf("�����"); WHITE; printf("������������"); RED; printf("��"); WHITE; printf("������������"); RED; printf("�����\n");
	gotoxy(13, 5);
	RED; printf("�����"); WHITE; printf("�����������"); RED; printf("����"); WHITE; printf("�����������"); RED; printf("�����\n");
	gotoxy(13, 6);
	RED; printf("�����"); WHITE; printf("��������"); RED; printf("��"); WHITE; printf("���"); RED; printf("����"); WHITE; printf("���"); RED; printf("��"); WHITE; printf("��������"); RED; printf("�����\n");
	gotoxy(13, 7);
	RED; printf("�����"); WHITE; printf("�������"); RED; printf("������������"); WHITE; printf("�������"); RED; printf("�����\n");
	gotoxy(13, 8);
	RED; printf("�����"); WHITE; printf("�������"); RED; printf("������������"); WHITE; printf("�������"); RED; printf("�����\n");
	gotoxy(13, 9);
	RED; printf("�����"); WHITE; printf("��������"); RED; printf("����������"); WHITE; printf("��������"); RED; printf("�����\n");
	gotoxy(13, 10);
	RED; printf("�����"); WHITE; printf("����"); RED; printf("���"); WHITE; printf("����"); RED; printf("��������"); WHITE; printf("����"); RED; printf("���"); WHITE; printf("����"); RED; printf("�����\n");
	gotoxy(13, 11);
	RED; printf("�����"); WHITE; printf("���"); RED; printf("��������������������"); WHITE; printf("���"); RED; printf("�����\n");
	gotoxy(13, 12);
	RED; printf("�����"); WHITE; printf("����"); RED; printf("������������������"); WHITE; printf("����"); RED; printf("�����\n");
	gotoxy(13, 13);
	RED; printf("�����"); WHITE; printf("�����"); RED; printf("����������������"); WHITE; printf("�����"); RED; printf("�����\n");
	gotoxy(13, 14);
	RED; printf("�����"); WHITE; printf("������"); RED; printf("��������������"); WHITE; printf("������"); RED; printf("�����\n");
	gotoxy(13, 15);
	RED; printf("�����"); WHITE; printf("�����"); RED; printf("����������������"); WHITE; printf("�����"); RED; printf("�����\n");
	gotoxy(13, 16);
	RED; printf("�����"); WHITE; printf("����"); RED; printf("������������������"); WHITE; printf("����"); RED; printf("�����\n");
	gotoxy(13, 17);
	RED; printf("�����"); WHITE; printf("������������"); RED; printf("��"); WHITE; printf("������������"); RED; printf("�����\n");
	gotoxy(13, 18);
	RED; printf("�����"); WHITE; printf("������������"); RED; printf("��"); WHITE; printf("������������"); RED; printf("�����\n");
	gotoxy(13, 19);
	RED; printf("�����"); WHITE; printf("������������"); RED; printf("��"); WHITE; printf("������������"); RED; printf("�����\n");
	gotoxy(13, 20);
	RED; printf("�����"); WHITE; printf("������������"); RED; printf("��"); WHITE; printf("������������"); RED; printf("�����\n");
	gotoxy(13, 21);
	RED; printf("�����"); WHITE; printf("������������"); RED; printf("��"); WHITE; printf("������������"); RED; printf("�����\n");
	gotoxy(13, 22);
	RED; printf("�����"); WHITE; printf("�������������"); WHITE; printf("������������"); RED; printf("�����\n");
	YELLOW;
	gotoxy(13, 25);
	printf("���� : ĳ����");
	gotoxy(13, 26);
	printf("��� : ��������, ����");
	gotoxy(13, 27);
	printf("���� : ��Ÿ��");
	gotoxy(13, 28);
	printf("���� : 9,984,670�� ����2��"); 
	gotoxy(13, 29);
	printf("�α� : �� 34,834,841�� ����37�� ");
	gotoxy(13, 30);
	printf("GDP : 1�� 7,938��$ ����11��"); 
	gotoxy(13, 31);
	RED;
	printf("����: 8000��");
	YELLOW;
	gotoxy(13, 32);
	printf("1. �����ϱ� 2. ������");

} //ĳ����

void australiaINFO() { //ȣ��(����Ʈ���ϸ���) ����	31 ���� 19
	system("cls");
	gotoxy(13, 3);
	BLUE printf("��"); WHITE printf("��"); RED printf("��"); WHITE printf("��"); BLUE printf("���"); WHITE printf("��"); RED printf("����"); WHITE printf("��"); BLUE printf("���"); WHITE printf("��"); RED printf("��"); WHITE printf("��"); BLUE printf("����������������\n");
	gotoxy(13, 4);
	BLUE printf("��"); WHITE printf("��"); RED printf("��"); WHITE printf("��"); BLUE printf("���"); WHITE printf("��"); RED printf("����"); WHITE printf("��"); BLUE printf("���"); WHITE printf("��"); RED printf("��"); WHITE printf("��"); BLUE printf("����������������\n");
	gotoxy(13, 5);
	BLUE printf("���"); WHITE printf("��"); RED printf("��"); WHITE printf("��"); BLUE printf("��");  WHITE printf("��"); RED printf("����"); WHITE printf("��"); BLUE printf("��"); WHITE printf("��"); RED printf("��"); WHITE printf("��"); BLUE printf("������������"); WHITE printf("��"); BLUE printf("�����\n");
	gotoxy(13, 6);
	BLUE printf("���"); WHITE printf("��"); RED printf("��"); WHITE printf("��"); BLUE printf("��");  WHITE printf("��"); RED printf("����"); WHITE printf("��"); BLUE printf("��"); WHITE printf("��"); RED printf("��"); WHITE printf("��"); BLUE printf("�����������"); WHITE printf("����"); BLUE printf("����\n");
	gotoxy(13, 7);
	WHITE printf("��������"); RED printf("����"); WHITE printf("��������"); BLUE printf("����������"); WHITE printf("��"); BLUE printf("�����\n");
	gotoxy(13, 8);
	RED printf("������������������"); BLUE printf("���������������\n");
	gotoxy(13, 9);
	RED printf("������������������"); BLUE printf("������"); WHITE printf("��"); BLUE printf("���������\n");
	gotoxy(13, 10);
	WHITE printf("��������"); RED printf("����"); WHITE printf("��������"); BLUE printf("�����"); WHITE printf("����");BLUE printf("��������\n");
	gotoxy(13, 11);
	BLUE printf("���"); WHITE printf("��"); RED printf("��"); WHITE printf("��"); BLUE printf("��"); WHITE printf("��"); RED printf("����"); WHITE printf("��"); BLUE printf("��"); WHITE printf("��"); RED printf("��"); WHITE printf("��"); BLUE printf("��������"); WHITE printf("��"); BLUE printf("���������\n");
	gotoxy(13, 12);
	BLUE printf("���"); WHITE printf("��"); RED printf("��"); WHITE printf("��"); BLUE printf("��");  WHITE printf("��"); RED printf("����"); WHITE printf("��"); BLUE printf("��"); WHITE printf("��"); RED printf("��"); WHITE printf("��"); BLUE printf("�����������������\n");
	gotoxy(13, 13);
	BLUE printf("��"); WHITE printf("��"); RED printf("��"); WHITE printf("��"); BLUE printf("���"); WHITE printf("��"); RED printf("����"); WHITE printf("��"); BLUE printf("���"); WHITE printf("��"); RED printf("��"); WHITE printf("��"); BLUE printf("������������"); WHITE printf("��"); BLUE printf("����\n");
	gotoxy(13, 14);
	BLUE printf("��"); WHITE printf("��"); RED printf("��"); WHITE printf("��"); BLUE printf("���"); WHITE printf("��"); RED printf("����"); WHITE printf("��");  BLUE printf("���"); WHITE printf("��"); RED printf("��"); WHITE printf("��"); BLUE printf("�����������"); WHITE printf("����");BLUE printf("���\n");
	gotoxy(13, 15);
	BLUE printf("����������������������������"); WHITE printf("��"); BLUE printf("����\n");
	gotoxy(13, 16);
	BLUE printf("���������������������"); WHITE printf("��"); BLUE printf ("�����������\n");
	gotoxy(13, 17);
	BLUE printf("����������"); WHITE printf("��"); BLUE printf("����������"); WHITE printf("����"); BLUE printf("����������\n");
	gotoxy(13, 18);
	BLUE printf("���������"); WHITE printf("����"); BLUE printf("����������"); WHITE printf("��"); BLUE printf("�����"); WHITE printf("��"); BLUE printf("������\n");
	gotoxy(13, 19);
	BLUE printf("����������"); WHITE printf("��"); BLUE printf("����������������������\n");
	gotoxy(13, 20);
	BLUE printf("��������������������������������\n");
	gotoxy(13, 21);
	BLUE printf("��������������������������������\n");
	YELLOW;
	gotoxy(13, 25);
	printf("���� : ȣ��");
	gotoxy(13, 26);
	printf("��� : ����");
	gotoxy(13, 27);
	printf("���� : ĵ����");
	gotoxy(13, 28);
	printf("���� : 7,741,220�� ����6��"); 
	gotoxy(13, 29);
	printf("�α� : �� 22,507,617�� ����55�� ");
	gotoxy(13, 30);
	printf("GDP : 1�� 4,825��$ ����12��"); 
	gotoxy(13, 31);
	RED;
	printf("����: 8000��");
	YELLOW;
	gotoxy(13, 32);
	printf("1. �����ϱ� 2. ������");

}

void philippinesINFO(){  //�ʸ��� ���� 30 ���� 20
	system("cls");
	gotoxy(13, 3);
	WHITE printf("���");BLUE printf("�����������������������������\n");
	gotoxy(13, 4);
	WHITE printf("�����"); BLUE printf("���������������������������\n");
	gotoxy(13, 5);
	WHITE printf("������");BLUE printf("��������������������������\n");
	gotoxy(13, 6);
	WHITE printf("��������");BLUE printf("������������������������\n");
	gotoxy(13, 7);
	WHITE printf("���������"); BLUE printf("�����������������������\n");
	gotoxy(13, 8);
	WHITE printf("���"); YELLOW printf("��"); WHITE printf("��������"); BLUE printf("���������������������\n");
	gotoxy(13, 9);
	WHITE printf("������������"); BLUE printf("��������������������\n");
	gotoxy(13, 10);
	WHITE printf("������"); YELLOW printf("��"); WHITE printf("��������");BLUE printf("������������������\n");
	gotoxy(13, 11);
	WHITE printf("����"); YELLOW printf("��"); WHITE printf("��"); YELLOW printf("��"); WHITE printf("��"); YELLOW printf("��"); WHITE printf("�������");BLUE printf("�����������������\n");
	gotoxy(13, 12);
	WHITE printf("�����");  YELLOW printf("����"); WHITE printf("����"); YELLOW printf("��"); WHITE printf("������");BLUE printf("���������������\n");
	gotoxy(13, 13);
	WHITE printf("�����");  YELLOW printf("����"); WHITE printf("����������"); RED printf("���������������\n");
	gotoxy(13, 14);
	WHITE printf("����"); YELLOW printf("��"); WHITE printf("��"); YELLOW printf("��"); WHITE printf("��"); YELLOW printf("��"); WHITE printf("�������"); RED printf("�����������������\n");
	gotoxy(13, 15);
	WHITE printf("������"); YELLOW printf("��"); WHITE printf("��������"); RED printf("������������������\n");
	gotoxy(13, 16);
	WHITE printf("������������"); RED printf("��������������������\n");
	gotoxy(13, 17);
	WHITE printf("���"); YELLOW printf("��"); WHITE printf("��������"); RED printf("���������������������\n");
	gotoxy(13, 18);
	WHITE printf("���������"); RED printf("�����������������������\n");
	gotoxy(13, 19);
	WHITE printf("��������"); RED printf("������������������������\n");
	gotoxy(13, 20);
	WHITE printf("������");RED printf("��������������������������\n");
	gotoxy(13, 21);
	WHITE printf("�����"); RED printf("���������������������������\n");
	gotoxy(13, 22);
	WHITE printf("���"); RED printf("�����������������������������\n");
	YELLOW;
	gotoxy(13, 25);
	printf("���� : �ʸ���");
	gotoxy(13, 26);
	printf("��� : Ÿ���α׾�, ����");
	gotoxy(13, 27);
	printf("���� : ���Ҷ�");
	gotoxy(13, 28);
	printf("���� : 300,000�� ����73��"); 
	gotoxy(13, 29);
	printf("�α� : �� 107,668,231�� ����12�� ");
	gotoxy(13, 30);
	printf("GDP : 2,897��$ ����39��"); 
	gotoxy(13, 31);
	RED;
	printf("����: 5000��");
	YELLOW;
	gotoxy(13, 32);
	printf("1. �����ϱ� 2. ������");

}



void franceINFO() { //������ ����30 ���� 21
	system("cls");
	gotoxy(13, 3);
	BLUE printf("�����������"); WHITE printf("�����������"); RED printf("�����������\n");
	gotoxy(13, 4);
	BLUE printf("�����������"); WHITE printf("�����������"); RED printf("�����������\n");
	gotoxy(13, 5);
	BLUE printf("�����������"); WHITE printf("�����������"); RED printf("�����������\n");
	gotoxy(13, 6);
	BLUE printf("�����������"); WHITE printf("�����������"); RED printf("�����������\n");
	gotoxy(13, 7);
	BLUE printf("�����������"); WHITE printf("�����������"); RED printf("�����������\n");
	gotoxy(13, 8);
	BLUE printf("�����������"); WHITE printf("�����������"); RED printf("�����������\n");
	gotoxy(13, 9);
	BLUE printf("�����������"); WHITE printf("�����������"); RED printf("�����������\n");
	gotoxy(13, 10);
	BLUE printf("�����������"); WHITE printf("�����������"); RED printf("�����������\n");
	gotoxy(13, 11);
	BLUE printf("�����������"); WHITE printf("�����������"); RED printf("�����������\n");
	gotoxy(13, 12);
	BLUE printf("�����������"); WHITE printf("�����������"); RED printf("�����������\n");
	gotoxy(13, 13);
	BLUE printf("�����������"); WHITE printf("�����������"); RED printf("�����������\n");
	gotoxy(13, 14);
	BLUE printf("�����������"); WHITE printf("�����������"); RED printf("�����������\n");
	gotoxy(13, 15);
	BLUE printf("�����������"); WHITE printf("�����������"); RED printf("�����������\n");
	gotoxy(13, 16);
	BLUE printf("�����������"); WHITE printf("�����������"); RED printf("�����������\n");
	gotoxy(13, 17);
	BLUE printf("�����������"); WHITE printf("�����������"); RED printf("�����������\n");
	gotoxy(13, 18);
	BLUE printf("�����������"); WHITE printf("�����������"); RED printf("�����������\n");
	gotoxy(13, 19);
	BLUE printf("�����������"); WHITE printf("�����������"); RED printf("�����������\n");
	gotoxy(13, 20);
	BLUE printf("�����������"); WHITE printf("�����������"); RED printf("�����������\n");
	gotoxy(13, 21);
	BLUE printf("�����������"); WHITE printf("�����������"); RED printf("�����������\n");
	gotoxy(13, 22);
	BLUE printf("�����������"); WHITE printf("�����������"); RED printf("�����������\n");
	gotoxy(13, 23);
	BLUE printf("�����������"); WHITE printf("�����������"); RED printf("�����������\n");
	YELLOW;
	gotoxy(13, 25);
	printf("���� : ������");
	gotoxy(13, 26);
	printf("��� : ��������");
	gotoxy(13, 27);
	printf("���� : �ĸ�");
	gotoxy(13, 28);
	printf("���� : 643,801�� ����43��"); 
	gotoxy(13, 29);
	printf("�α� : �� 66,259,012�� ����21�� ");
	gotoxy(13, 30);
	printf("GDP : 2�� 9,023��$ ����5��"); 
	gotoxy(13, 31);
	RED;
	printf("����: 14000��");
	YELLOW;
	gotoxy(13, 32);
	printf("1. �����ϱ� 2. ������");

}

void portugalINFO(){ //�������� ���� 30 ���� 20
	system("cls");
	gotoxy(13, 3);
	GREEN printf("�����������"); BLOOD printf("���������������������\n");
	gotoxy(13, 4);
	GREEN printf("�����������"); BLOOD printf("���������������������\n");
	gotoxy(13, 5);
	GREEN printf("�����������"); BLOOD printf("���������������������\n");
	gotoxy(13, 6);
	GREEN printf("�����������"); BLOOD printf("���������������������\n");
	gotoxy(13, 7);
	GREEN printf("�����������"); BLOOD printf("���������������������\n");
	gotoxy(13, 8);
	GREEN printf("�����������"); BLOOD printf("���������������������\n");
	gotoxy(13, 9);
	GREEN printf("��������"); YELLOW printf("������"); BLOOD printf("�������������������\n");
	gotoxy(13, 10);
	GREEN printf("�������"); YELLOW printf("����"); GREEN printf("��"); YELLOW printf("�����"); BLOOD printf("�����������������\n");
	gotoxy(13, 11);
	GREEN printf("������"); YELLOW printf("��"); GREEN printf("����"); BLOOD printf("���"); YELLOW printf("��"); BLOOD printf("���"); YELLOW printf("��"); BLOOD printf("����������������\n");
	gotoxy(13, 12);
	GREEN printf("������"); YELLOW printf("����"); BLOOD printf("��"); WHITE printf("���"); BLOOD printf("��"); YELLOW printf("��"); BLOOD printf("��"); YELLOW printf("��"); BLOOD printf("����������������\n");
	gotoxy(13, 13);
	GREEN printf("������"); YELLOW printf("��"); GREEN printf("���"); BLOOD printf("��"); WHITE printf("���"); BLOOD printf("��"); YELLOW printf("����"); BLOOD printf("����������������\n");
	gotoxy(13, 14);
	GREEN printf("������"); YELLOW printf("��"); GREEN printf("���"); YELLOW printf("��"); BLOOD printf("���"); YELLOW printf("��"); BLOOD printf("���"); YELLOW printf("��"); BLOOD printf("����������������\n");
	gotoxy(13, 15);
	GREEN printf("�������"); YELLOW printf("���"); GREEN printf("���"); BLOOD printf("���"); YELLOW printf("���"); BLOOD printf("�����������������\n");
	gotoxy(13, 16);
	GREEN printf("���������"); YELLOW printf("�����"); BLOOD printf("�������������������\n");
	gotoxy(13, 17);
	GREEN printf("�����������"); BLOOD printf("���������������������\n");
	gotoxy(13, 18);
	GREEN printf("�����������"); BLOOD printf("���������������������\n");
	gotoxy(13, 19);
	GREEN printf("�����������"); BLOOD printf("���������������������\n");
	gotoxy(13, 20);
	GREEN printf("�����������"); BLOOD printf("���������������������\n");
	gotoxy(13, 21);
	GREEN printf("�����������"); BLOOD printf("���������������������\n");
	gotoxy(13, 22);
	GREEN printf("�����������"); BLOOD printf("���������������������\n");
	YELLOW;
	gotoxy(13, 25);
	printf("���� : ��������");
	gotoxy(13, 26);
	printf("��� : ����������");
	gotoxy(13, 27);
	printf("���� : ������");
	gotoxy(13, 28);
	printf("���� : 92,090�� ����111��"); 
	gotoxy(13, 29);
	printf("�α� : �� 10,813,834�� ����79�� ");
	gotoxy(13, 30);
	printf("GDP : 2,282��$ ����46��"); 
	gotoxy(13, 31);
	RED;
	printf("����: 2000��");
	YELLOW;
	gotoxy(13, 32);
	printf("1. �����ϱ� 2. ������");

}

void chinaINFO() { //�߱� ���� 30 ���� 20
	system("cls");
	gotoxy(13, 3);
	RED printf("�������������������������������\n");
	gotoxy(13, 4);
	RED printf("�������������������������������\n");
	gotoxy(13, 5);
	RED printf("�������������"); YELLOW printf("��"); RED printf("������������������\n");
	gotoxy(13, 6);
	RED printf("������"); YELLOW printf("��"); RED printf("�������������������������\n");
	gotoxy(13, 7);
	RED printf("������"); YELLOW printf("��"); RED printf("�������������������������\n");
	gotoxy(13, 8);
	RED printf("���"); YELLOW printf("��"); RED printf("��"); YELLOW printf("�ڡڡ�"); RED printf("��"); YELLOW printf("��"); RED printf("������"); YELLOW printf("��"); RED printf("����������������\n");
	gotoxy(13, 9);
	RED printf("����"); YELLOW printf("�ڡڡڡڡ�");RED printf("�����������������������\n");
	gotoxy(13, 10);
	RED printf("�����"); YELLOW printf("�ڡڡ�");RED printf("������������������������\n");
	gotoxy(13, 11);
	RED printf("�����"); YELLOW printf("��"); RED printf("��"); YELLOW printf("��"); RED printf("������������������������\n");
	gotoxy(13, 12);
	RED printf("����"); YELLOW printf("��"); RED printf("����"); YELLOW printf("��"); RED printf("�������"); YELLOW printf("��"); RED printf("����������������\n");
	gotoxy(13, 13);
	RED printf("�������������������������������\n");
	gotoxy(13, 14);
	RED printf("�������������������������������\n");
	gotoxy(13, 15);
	RED printf("�������������"); YELLOW printf("��"); RED printf("������������������\n");
	gotoxy(13, 16);
	RED printf("�������������������������������\n");
	gotoxy(13, 17);
	RED printf("�������������������������������\n");
	gotoxy(13, 18);
	RED printf("�������������������������������\n");
	gotoxy(13, 19);
	RED printf("�������������������������������\n");
	gotoxy(13, 20);
	RED printf("�������������������������������\n");
	gotoxy(13, 21);
	RED printf("�������������������������������\n");
	gotoxy(13, 22);
	RED printf("�������������������������������\n");
	YELLOW;
	gotoxy(13, 25);
	printf("���� : �߱�");
	gotoxy(13, 26);
	printf("��� : �߱���");
	gotoxy(13, 27);
	printf("���� : ����¡");
	gotoxy(13, 28);
	printf("���� : 9,596,961�� ����4��"); 
	gotoxy(13, 29);
	printf("�α� : �� 1,355,692,576�� ����1�� ");
	gotoxy(13, 30);
	printf("GDP : 10�� 3,554��$ ����2��"); 
	gotoxy(13, 31);
	RED;
	printf("����: 17000��");
	gotoxy(13, 32);
	YELLOW;
	printf("1. �����ϱ� 2. ������");
}

void japanINFO()//�Ϻ� ���� 30 ���� 20
{   
	system("cls");
	gotoxy(13, 3);
	WHITE printf("�������������������������������\n");
	gotoxy(13, 4);
	WHITE printf("�������������������������������\n");
	gotoxy(13, 5);
	WHITE printf("�������������������������������\n");
	gotoxy(13, 6);
	WHITE printf("�������������"); RED printf("�������"); WHITE; printf("�������������\n");
	gotoxy(13, 7);
	WHITE printf("������������"); RED printf("���������");WHITE printf("������������\n");
	gotoxy(13, 8);
	WHITE printf("�����������"); RED printf("�����������");WHITE printf("�����������\n");
	gotoxy(13, 9);
	WHITE printf("����������"); RED printf("�������������");WHITE printf("����������\n");
	gotoxy(13, 10);
	WHITE printf("����������"); RED printf("�������������");WHITE printf("����������\n");
	gotoxy(13, 11);
	WHITE printf("����������"); RED printf("�������������");WHITE printf("����������\n");
	gotoxy(13, 12);
	WHITE printf("����������"); RED printf("�������������"); WHITE printf("����������\n");
	gotoxy(13, 13);
	WHITE printf("����������"); RED printf("�������������"); WHITE printf("����������\n");
	gotoxy(13, 14);
	WHITE printf("����������"); RED printf("�������������"); WHITE printf("����������\n");
	gotoxy(13, 15);
	WHITE printf("����������"); RED printf("�������������"); WHITE printf("����������\n");
	gotoxy(13, 16);
	WHITE printf("����������"); RED printf("�������������"); WHITE printf("����������\n");
	gotoxy(13, 17);
	WHITE printf("�����������"); RED printf("�����������"); WHITE printf("�����������\n");
	gotoxy(13, 18);
	WHITE printf("������������"); RED printf("���������"); WHITE printf("������������\n");
	gotoxy(13, 19);
	WHITE printf("�������������"); RED printf("�������"); WHITE printf("�������������\n");
	gotoxy(13, 20);
	WHITE printf("�������������������������������\n");
	gotoxy(13, 21);
	WHITE printf("�������������������������������\n");
	gotoxy(13, 22);
	WHITE printf("�������������������������������\n");
	YELLOW;
	gotoxy(13, 25);
	printf("���� : �Ϻ�");
	gotoxy(13, 26);
	printf("��� : �Ϻ���");
	gotoxy(13, 27);
	printf("���� : ����");
	gotoxy(13, 28);
	printf("���� : 377,915�� ����62��"); 
	gotoxy(13, 29);
	printf("�α� : �� 127,103,388�� ����10��");
	gotoxy(13, 30);
	printf("GDP : 4�� 7,698��$ ����3��"); 
	gotoxy(13, 31);
	RED;
	printf("����: 16000��");
	gotoxy(13, 32);
	YELLOW;
	printf("1. �����ϱ� 2. ������");

}

void italyINFO() { // ��Ż���� ����30 ���� 21
	system("cls");
	gotoxy(13, 3);
	GREEN printf("�����������"); WHITE printf("�����������"); RED printf("�����������\n");
	gotoxy(13, 4);
	GREEN printf("�����������"); WHITE printf("�����������"); RED printf("�����������\n");
	gotoxy(13, 5);
	GREEN printf("�����������"); WHITE printf("�����������"); RED printf("�����������\n");
	gotoxy(13, 6);
	GREEN printf("�����������"); WHITE printf("�����������"); RED printf("�����������\n");
	gotoxy(13, 7);
	GREEN printf("�����������"); WHITE printf("�����������"); RED printf("�����������\n");
	gotoxy(13, 8);
	GREEN printf("�����������"); WHITE printf("�����������"); RED printf("�����������\n");
	gotoxy(13, 9);
	GREEN printf("�����������"); WHITE printf("�����������"); RED printf("�����������\n");
	gotoxy(13, 10);
	GREEN printf("�����������"); WHITE printf("�����������"); RED printf("�����������\n");
	gotoxy(13, 11);
	GREEN printf("�����������"); WHITE printf("�����������"); RED printf("�����������\n");
	gotoxy(13, 12);
	GREEN printf("�����������"); WHITE printf("�����������"); RED printf("�����������\n");
	gotoxy(13, 13);
	GREEN printf("�����������"); WHITE printf("�����������"); RED printf("�����������\n");
	gotoxy(13, 14);
	GREEN printf("�����������"); WHITE printf("�����������"); RED printf("�����������\n");
	gotoxy(13, 15);
	GREEN printf("�����������"); WHITE printf("�����������"); RED printf("�����������\n");
	gotoxy(13, 16);
	GREEN printf("�����������"); WHITE printf("�����������"); RED printf("�����������\n");
	gotoxy(13, 17);
	GREEN printf("�����������"); WHITE printf("�����������"); RED printf("�����������\n");
	gotoxy(13, 18);
	GREEN printf("�����������"); WHITE printf("�����������"); RED printf("�����������\n");
	gotoxy(13, 19);
	GREEN printf("�����������"); WHITE printf("�����������"); RED printf("�����������\n");
	gotoxy(13, 20);
	GREEN printf("�����������"); WHITE printf("�����������"); RED printf("�����������\n");
	gotoxy(13, 21);
	GREEN printf("�����������"); WHITE printf("�����������"); RED printf("�����������\n");
	gotoxy(13, 22);
	GREEN printf("�����������"); WHITE printf("�����������"); RED printf("�����������\n");
	gotoxy(13, 23);
	GREEN printf("�����������"); WHITE printf("�����������"); RED printf("�����������\n");
	YELLOW;
	gotoxy(13, 25);
	printf("���� : ��Ż����");
	gotoxy(13, 26);
	printf("��� : ��Ż���ƾ�");
	gotoxy(13, 27);
	printf("���� : �θ�");
	gotoxy(13, 28);
	printf("���� : 301,340�� ����72��"); 
	gotoxy(13, 29);
	printf("�α� : �� 127,103,388�� ����10��");
	gotoxy(13, 30);
	printf("GDP : 4�� 7,698��$ ����3��"); 
	gotoxy(13, 31);
	RED;
	printf("����: 11000��");
	gotoxy(13, 32);
	YELLOW;
	printf("1. �����ϱ� 2. ������");

}

void united_kingdomINFO(){ //���� ����31 ���� 17
	system("cls");
	gotoxy(13, 3);
	RED printf("���"); WHITE printf("���"); BLUE printf("���������"); WHITE printf("��"); RED printf("������"); WHITE printf("��"); BLUE printf("���������"); WHITE printf("���"); RED printf("���\n");
	gotoxy(13, 4);
	WHITE printf("���"); RED printf("���"); WHITE printf("���"); BLUE printf("�������"); WHITE printf("��"); RED printf("������"); WHITE printf("��"); BLUE printf("�������"); WHITE printf("���"); RED printf("���"); WHITE printf("���\n");
	gotoxy(13, 5);
	BLUE printf("���"); WHITE printf("���"); RED printf("���"); WHITE printf("���"); BLUE printf("�����"); WHITE printf("��"); RED printf("������"); WHITE printf("��"); BLUE printf("�����"); WHITE printf("���"); RED printf("���"); WHITE printf("���"); BLUE printf("���\n");
	gotoxy(13, 6);
	BLUE printf("�����"); WHITE printf("���"); RED printf("���"); WHITE printf("����");	BLUE printf("��"); WHITE printf("��"); RED printf("������"); WHITE printf("��"); BLUE printf("��"); WHITE("��");  WHITE printf("����"); RED printf("���");  WHITE printf("���"); BLUE printf("�����\n");
	gotoxy(13, 7);
	BLUE printf("�������"); WHITE printf("���"); RED printf("���"); WHITE printf("��"); BLUE printf("��"); WHITE printf("��"); RED printf("������");  WHITE printf("��");  BLUE printf("��"); WHITE printf("��"); RED printf("���"); WHITE printf("���"); BLUE printf("�������\n");
	gotoxy(13, 8);
	WHITE printf("��������������"); RED printf("������"); WHITE printf("��������������\n");
	gotoxy(13, 9);
	RED printf("��������������������������������\n");
	gotoxy(13, 10);
	RED printf("��������������������������������\n");
	gotoxy(13, 11);	
	RED printf("��������������������������������\n");
	gotoxy(13, 12);
	RED printf("��������������������������������\n");
	gotoxy(13, 13);
	RED printf("��������������������������������\n");
	gotoxy(13, 14);
	WHITE printf("��������������"); RED printf("������"); WHITE printf("��������������\n");
	gotoxy(13, 15);
	BLUE printf("�������"); WHITE printf("���"); RED printf("���"); WHITE printf("��"); BLUE printf("��"); WHITE printf("��"); RED printf("������"); WHITE printf("��");  BLUE printf("��"); WHITE printf("��"); RED printf("���"); WHITE printf("���"); BLUE printf("�������\n");
	gotoxy(13, 16);
	BLUE printf("�����"); WHITE printf("���"); RED printf("���"); WHITE printf("����");	BLUE printf("��"); WHITE printf("��"); RED printf("������"); WHITE printf("��"); BLUE printf("��"); WHITE("��");  WHITE printf("����"); RED printf("���");  WHITE printf("���"); BLUE printf("�����\n");
	gotoxy(13, 17);
	BLUE printf("���"); WHITE printf("���"); RED printf("���"); WHITE printf("���"); BLUE printf("�����"); WHITE printf("��"); RED printf("������"); WHITE printf("��"); BLUE printf("�����"); WHITE printf("���"); RED printf("���"); WHITE printf("���"); BLUE printf("���\n");
	gotoxy(13, 18);
	WHITE printf("���"); RED printf("���"); WHITE printf("���"); BLUE printf("�������"); WHITE printf("��"); RED printf("������"); WHITE printf("��"); BLUE printf("�������"); WHITE printf("���"); RED printf("���"); WHITE printf("���\n");
	gotoxy(13, 19);
	RED printf("���"); WHITE printf("���"); BLUE printf("���������"); WHITE printf("��"); RED printf("������"); WHITE printf("��"); BLUE printf("���������"); WHITE printf("���"); RED printf("���\n");
	gotoxy(13, 20);
	YELLOW;
	gotoxy(13, 25);
	printf("���� : ����");
	gotoxy(13, 26);
	printf("��� : ����");
	gotoxy(13, 27);
	printf("���� : ����");
	gotoxy(13, 28);
	printf("���� : 243,610�� ����80��"); 
	gotoxy(13, 29);
	printf("�α� : �� 63,742,977�� ����22��");
	gotoxy(13, 30);
	printf("GDP : 2�� 8,476��$ ����6��"); 
	gotoxy(13, 31);
	RED;
	printf("����: 13000��");
	gotoxy(13, 32);
	YELLOW;
	printf("1. �����ϱ� 2. ������");


}


void brazilINFO(){ //����� ���� 30 ���� 19
	system("cls");
	gotoxy(13, 3);
	GREEN printf("�������������������������������\n");
	gotoxy(13, 4);
	GREEN printf("�������������������������������\n");
	gotoxy(13, 5);
	GREEN printf("���������������"); YELLOW printf("���"); GREEN printf("���������������\n");
	gotoxy(13, 6);
	GREEN printf("�������������"); YELLOW printf("�������"); GREEN printf("�������������\n");
	gotoxy(13, 7);
	GREEN printf("������������"); YELLOW printf("���������"); GREEN printf("������������\n");
	gotoxy(13, 8);
	GREEN printf("����������"); YELLOW printf("������"); BLUE printf("���"); YELLOW printf("������"); GREEN printf("����������\n");
	gotoxy(13, 9);
	GREEN printf("���������"); YELLOW printf("������"); BLUE printf("�����"); YELLOW printf("������");GREEN printf("���������\n");
	gotoxy(13, 10);
	GREEN printf("�������"); YELLOW printf("�������"); BLUE printf("�������"); YELLOW printf("�������");GREEN printf("�������\n");
	gotoxy(13, 11);
	GREEN printf("������"); YELLOW printf("�������"); BLUE printf("��"); WHITE printf("����"); BLUE printf("�����"); YELLOW printf("�������");GREEN printf("������\n");
	gotoxy(13, 12);
	GREEN printf("�����"); YELLOW printf("�������"); BLUE printf("���"); WHITE printf("��");BLUE printf("���"); WHITE printf("��"); BLUE printf("��"); WHITE printf("��");BLUE printf("���"); YELLOW printf("�������");GREEN printf("�����\n");
	gotoxy(13, 13);
	GREEN printf("������"); YELLOW printf("�������"); BLUE printf("������"); WHITE printf("���"); BLUE printf("��"); YELLOW printf("�������"); GREEN printf("������\n");
	gotoxy(13, 14);
	GREEN printf("�������"); YELLOW printf("�������"); BLUE printf("��"); WHITE printf("��"); BLUE printf("���"); WHITE printf("��"); BLUE printf("��"); YELLOW printf("�������"); GREEN printf("�������\n");
	gotoxy(13, 15);
	GREEN printf("���������"); YELLOW printf("������"); BLUE printf("���"); WHITE printf("��");BLUE printf("��"); YELLOW printf("������"); GREEN printf("���������\n");
	gotoxy(13, 16);
	GREEN printf("����������"); YELLOW printf("������"); BLUE printf("���"); YELLOW printf("������");GREEN printf("����������\n");
	gotoxy(13, 17);
	GREEN printf("������������"); YELLOW printf("���������"); GREEN printf("������������\n");
	gotoxy(13, 18);
	GREEN printf("�������������"); YELLOW printf("�������"); GREEN printf("�������������\n");
	gotoxy(13, 19);
	GREEN printf("���������������"); YELLOW printf("���"); GREEN printf("���������������\n");
	gotoxy(13, 20);
	GREEN printf("�������������������������������\n");
	gotoxy(13, 21);
	GREEN printf("�������������������������������\n");
	YELLOW;
	gotoxy(13, 25);
	printf("���� : �����");
	gotoxy(13, 26);
	printf("��� : ����������");
	gotoxy(13, 27);
	printf("���� : ���������");
	gotoxy(13, 28);
	printf("���� : 8,514,877�� ����5��"); 
	gotoxy(13, 29);
	printf("�α� : �� 202,656,788�� ����5��");
	gotoxy(13, 30);
	printf("GDP : 2�� 2,441��$ ����7��"); 
	gotoxy(13, 31);
	RED;
	printf("����: 12000��");
	gotoxy(13, 32);
	YELLOW;
	printf("1. �����ϱ� 2. ������");

}


void spainINFO(){ //������ ���� 30 ���� 19
	system("cls");
	gotoxy(13, 3);
	RED printf("�������������������������������\n");
	gotoxy(13, 4);
	RED printf("�������������������������������\n");
	gotoxy(13, 5);
	RED printf("�������������������������������\n");
	gotoxy(13, 6);
	RED printf("�������������������������������\n");
	gotoxy(13, 7);
	YELLOW printf("�������������������������������\n");
	gotoxy(13, 8);
	YELLOW printf("�������������������������������\n");
	gotoxy(13, 9);
	YELLOW printf("�������"); RED printf("����"); YELLOW printf("��"); RED printf("����"); YELLOW printf("��"); RED printf("����"); YELLOW printf("��"); RED printf("��"); YELLOW printf("��"); RED printf("��"); YELLOW printf("���"); RED printf("��"); YELLOW printf("�������\n");
	gotoxy(13, 10);
	YELLOW printf("�������"); RED printf("��"); YELLOW printf("����"); RED printf("��"); YELLOW printf("��"); RED printf("��"); YELLOW printf("��"); RED printf("��"); YELLOW printf("��"); RED printf("��"); YELLOW printf("��"); RED printf("��"); YELLOW printf("��"); RED printf("��"); YELLOW printf("���"); RED printf("��"); YELLOW printf("�������\n");
	gotoxy(13, 11);
	YELLOW printf("�������"); RED printf("��"); YELLOW printf("����"); RED printf("��"); YELLOW printf("��"); RED printf("��"); YELLOW printf("��"); RED printf("��"); YELLOW printf("��"); RED printf("��"); YELLOW printf("��"); RED printf("��"); YELLOW printf("��"); RED printf("��"); YELLOW printf("���"); RED printf("��"); YELLOW printf("�������\n");
	gotoxy(13, 12);
	YELLOW printf("�������"); RED printf("����");  YELLOW printf("��"); RED printf("����"); YELLOW printf("��"); RED printf("����");  YELLOW printf("��"); RED printf("��"); YELLOW printf("��"); RED printf("���"); YELLOW printf("��"); RED printf("��"); YELLOW printf("�������\n");
	gotoxy(13, 13);
	YELLOW printf("���������"); RED printf("��"); YELLOW printf("��"); RED printf("��"); YELLOW printf("����"); RED printf("��");  YELLOW printf("��"); RED printf("��");  YELLOW printf("��"); RED printf("��");  YELLOW printf("��"); RED printf("��");  YELLOW printf("��"); RED printf("���");YELLOW printf("�������\n");
	gotoxy(13, 14);
	YELLOW printf("���������"); RED printf("��"); YELLOW printf("��"); RED printf("��"); YELLOW printf("����"); RED printf("��"); YELLOW printf("��"); RED printf("��"); YELLOW printf("��"); RED printf("��"); YELLOW printf("��"); RED printf("��"); YELLOW printf("���"); RED printf("��"); YELLOW printf("�������\n");
	gotoxy(13, 15);
	YELLOW printf("�������"); RED printf("����"); YELLOW printf("��"); RED printf("��"); YELLOW printf("����"); RED printf("��"); YELLOW printf("��"); RED printf("��"); YELLOW printf("��"); RED printf("��"); YELLOW printf("��"); RED printf("��"); YELLOW printf("���"); RED printf("��"); YELLOW printf("�������\n");
	gotoxy(13, 16);
	YELLOW printf("�������������������������������\n");
	gotoxy(13, 17);
	YELLOW printf("�������������������������������\n");
	gotoxy(13, 18);
	RED printf("�������������������������������\n");
	gotoxy(13, 19);
	RED printf("�������������������������������\n");
	gotoxy(13, 20);
	RED printf("�������������������������������\n");
	gotoxy(13, 21);
	RED printf("�������������������������������\n");
	YELLOW;
	gotoxy(13, 25);
	printf("���� : ������");
	gotoxy(13, 26);
	printf("��� : �����ĳľ�");
	gotoxy(13, 27);
	printf("���� : ���帮��");
	gotoxy(13, 28);
	printf("���� : 505,370�� ����52��"); 
	gotoxy(13, 29);
	printf("�α� : �� 47,737,941�� ����28��");
	gotoxy(13, 30);
	printf("GDP : 1�� 4,005��$ ����14��"); 
	gotoxy(13, 31);
	RED;
	printf("����: 6000��");
	gotoxy(13, 32);
	YELLOW;
	printf("1. �����ϱ� 2. ������");


}
void russiaINFO() { //���þ� ����30 ���� 21
	system("cls");
	gotoxy(13, 3);
	WHITE printf("�������������������������������\n");
	gotoxy(13, 4);
	WHITE printf("�������������������������������\n");
	gotoxy(13, 5);
	WHITE printf("�������������������������������\n");
	gotoxy(13, 6);
	WHITE printf("�������������������������������\n");
	gotoxy(13, 7);
	WHITE printf("�������������������������������\n");
	gotoxy(13, 8);
	WHITE printf("�������������������������������\n");
	gotoxy(13, 9);
	BLUE printf("�������������������������������\n");
	gotoxy(13, 10);
	BLUE printf("�������������������������������\n");
	gotoxy(13, 11);
	BLUE printf("�������������������������������\n");
	gotoxy(13, 12);
	BLUE printf("�������������������������������\n");
	gotoxy(13, 13);
	BLUE printf("�������������������������������\n");
	gotoxy(13, 14);
	BLUE printf("�������������������������������\n");
	gotoxy(13, 15);
	BLUE printf("�������������������������������\n");
	gotoxy(13, 16);
	BLUE printf("�������������������������������\n");
	gotoxy(13, 17);
	RED printf("�������������������������������\n");
	gotoxy(13, 18);
	RED printf("�������������������������������\n");
	gotoxy(13, 19);
	RED printf("�������������������������������\n");
	gotoxy(13, 20);
	RED printf("�������������������������������\n");
	gotoxy(13, 21);
	RED printf("�������������������������������\n");
	gotoxy(13, 22);
	RED printf("�������������������������������\n");
	gotoxy(13, 23);
	RED printf("�������������������������������\n");
	YELLOW;
	gotoxy(13, 25);
	printf("���� : ���þ�");
	gotoxy(13, 26);
	printf("��� : ���þƾ�");
	gotoxy(13, 27);
	printf("���� : ��ũ��");
	gotoxy(13, 28);
	printf("���� : 17,098,242�� ����1��"); 
	gotoxy(13, 29);
	printf("�α� : �� 142,470,272�� ����9��");
	gotoxy(13, 30);
	printf("GDP : 2�� 573��$ ����9��"); 
	gotoxy(13, 31);
	RED;
	printf("����: 10000��");
	YELLOW;
	gotoxy(13, 32);
	printf("1. �����ϱ� 2. ������");

}
void netherlandsINFO(){ //�״����� ���� 30 ���� 21
	system("cls");
	gotoxy(13, 3);
	RED printf("�������������������������������\n");
	gotoxy(13, 4);
	RED printf("�������������������������������\n");
	gotoxy(13, 5);
	RED printf("�������������������������������\n");
	gotoxy(13, 6);
	RED printf("�������������������������������\n");
	gotoxy(13, 7);
	RED printf("�������������������������������\n");
	gotoxy(13, 8);
	RED printf("�������������������������������\n");
	gotoxy(13, 9);
	RED printf("�������������������������������\n");
	gotoxy(13, 10);
	WHITE printf("�������������������������������\n");
	gotoxy(13, 11);
	WHITE printf("�������������������������������\n");
	gotoxy(13, 12);
	WHITE printf("�������������������������������\n");
	gotoxy(13, 13);
	WHITE printf("�������������������������������\n");
	gotoxy(13, 14);
	WHITE printf("�������������������������������\n");
	gotoxy(13, 15);
	WHITE printf("�������������������������������\n");
	gotoxy(13, 16);
	WHITE printf("�������������������������������\n");
	gotoxy(13, 17);
	BLUE printf("�������������������������������\n");
	gotoxy(13, 18);
	BLUE printf("�������������������������������\n");
	gotoxy(13, 19);
	BLUE printf("�������������������������������\n");
	gotoxy(13, 20);
	BLUE printf("�������������������������������\n");
	gotoxy(13, 21);
	BLUE printf("�������������������������������\n");
	gotoxy(13, 22);
	BLUE printf("�������������������������������\n");
	gotoxy(13, 23);
	BLUE printf("�������������������������������\n");
	YELLOW;
	gotoxy(13, 25);
	printf("���� : �״�����");
	gotoxy(13, 26);
	printf("��� : �״������");
	gotoxy(13, 27);
	printf("���� : �Ͻ��׸���");
	gotoxy(13, 28);
	printf("���� : 41,543�� ����135��"); 
	gotoxy(13, 29);
	printf("�α� : �� 16,877,351�� ����65��");
	gotoxy(13, 30);
	printf("GDP : 8,804��$ ����16��"); 
	gotoxy(13, 31);
	RED;
	printf("����: 3000��");
	YELLOW;
	gotoxy(13, 32);
	printf("1. �����ϱ� 2. ������");

}
void germanyINFO(){ //���� ���� 30 ���� 21
	system("cls");
	gotoxy(13, 3);
	GRAY printf("�������������������������������\n");
	gotoxy(13, 4);
	GRAY printf("�������������������������������\n");
	gotoxy(13, 5);
	GRAY printf("�������������������������������\n");
	gotoxy(13, 6);
	GRAY printf("�������������������������������\n");
	gotoxy(13, 7);
	GRAY printf("�������������������������������\n");
	gotoxy(13, 8);
	GRAY printf("�������������������������������\n");
	gotoxy(13, 9);
	RED printf("�������������������������������\n");
	gotoxy(13, 10);
	RED printf("�������������������������������\n");
	gotoxy(13, 11);
	RED printf("�������������������������������\n");
	gotoxy(13, 12);
	RED printf("�������������������������������\n");
	gotoxy(13, 13);
	RED printf("�������������������������������\n");
	gotoxy(13, 14);
	RED printf("�������������������������������\n");
	gotoxy(13, 15);
	RED printf("�������������������������������\n");
	gotoxy(13, 16);
	RED printf("�������������������������������\n");
	gotoxy(13, 17);
	YELLOW printf("�������������������������������\n");
	gotoxy(13, 18);
	YELLOW printf("�������������������������������\n");
	gotoxy(13, 19);
	YELLOW printf("�������������������������������\n");
	gotoxy(13, 20);
	YELLOW printf("�������������������������������\n");
	gotoxy(13, 21);
	YELLOW printf("�������������������������������\n");
	gotoxy(13, 22);
	YELLOW printf("�������������������������������\n");
	gotoxy(13, 23);
	YELLOW printf("�������������������������������\n");
	YELLOW;
	gotoxy(13, 25);
	printf("���� : ����");
	gotoxy(13, 26);
	printf("��� : ���Ͼ�");
	gotoxy(13, 27);
	printf("���� : ������");
	gotoxy(13, 28);
	printf("���� : 357,022�� ����63��"); 
	gotoxy(13, 29);
	printf("�α� : �� 80,996,685�� ����17��");
	gotoxy(13, 30);
	printf("GDP : 3�� 8,205��$ ����4��"); 
	gotoxy(13, 31);
	RED;
	printf("����: 15000��");
	YELLOW;
	gotoxy(13, 32);
	printf("1. �����ϱ� 2. ������");

}


void uninhabitedINFO(int *p){
	int tmp = 0;
	char ccna[100] = "192.168.123.64";
	char answer[100] = {0};
	int ans = 0;
	char cL[100] = "�����";
	

	system("mode con:cols=85 lines=38" );
	gotoxy(13,3);
	WHITE printf("�������������������������������\n");
	gotoxy(13,4);
	WHITE printf("��������������������"); BLACK printf("��"); WHITE printf("�����������\n");
	gotoxy(13,5);
	WHITE printf("�������������������"); BLACK printf("��"); GREEN printf("��"); BLACK printf("��"); WHITE printf("����������\n");
	gotoxy(13,6);
	WHITE printf("�������������������"); BLACK printf("��"); GREEN printf("��"); BLACK printf("��"); WHITE printf("����������\n");
	gotoxy(13,7);
	WHITE printf("���������������"); BLACK printf("����"); WHITE printf("��"); BLACK printf("��"); GREEN printf("��"); BLACK printf("��"); WHITE printf("��"); BLACK printf("����"); WHITE printf("������\n");
	gotoxy(13,8);
	WHITE printf("��������������"); BLACK printf("��"); GREEN printf("����");  BLACK printf("���"); GREEN printf("��"); BLACK printf("���"); GREEN printf("����"); BLACK printf("��"); WHITE printf("�����\n");
	gotoxy(13,9);
	WHITE printf("���������������"); BLACK printf("���"); GREEN printf("���"); BLACK printf("��"); GREEN printf("��"); BLACK printf("��"); GREEN printf("���"); BLACK printf("���"); WHITE printf("������\n");
	gotoxy(13,10);
	WHITE printf("�����������������"); BLACK printf("��"); GREEN printf("���"); BLACK printf("��"); GREEN printf("���"); BLACK printf("��"); WHITE printf("��������\n");
	gotoxy(13,11);
	WHITE printf("��������"); RED printf("���"); WHITE printf("���������"); BLACK printf("��"); GREEN printf("��"); BLACK printf("��"); GREEN printf("��"); BLACK printf("��"); WHITE printf("���������\n");
	gotoxy(13,12);
	WHITE printf("�������"); RED printf("�����"); WHITE printf("���������"); BLACK printf("����"); WHITE printf("����������\n");
	gotoxy(13,13);
	WHITE printf("�������"); RED printf("�����"); WHITE printf("����������"); BLACK printf("��"); WHITE printf("�����������\n");
	gotoxy(13,14);
	WHITE printf("��������"); RED printf("���"); WHITE printf("�����������"); BLACK printf("��"); WHITE printf("�����������\n");
	gotoxy(13,15);
	WHITE printf("��������������������"); BLACK printf("��");WHITE printf("�����������\n");
	gotoxy(13,16);
	WHITE printf("��������������������"); BLACK printf("��"); WHITE printf("�����������\n");
	gotoxy(13,17);
	WHITE printf("��������������������"); BLACK printf("��"); WHITE printf("�����������\n");
	gotoxy(13,18);
	WHITE printf("��������������������"); BLACK printf("��"); WHITE printf("�����������\n");
	gotoxy(13,19);
	WHITE printf("����������������"); BLACK printf("���"); GOLD printf("������"); BLACK printf("���"); WHITE printf("�������\n");
	gotoxy(13,20);
	WHITE printf("��"); BLACK printf("��"); WHITE printf("��"); BLACK printf("��"); WHITE printf("��"); BLACK printf("��"); WHITE printf("��"); BLACK printf("��"); WHITE printf("��"); BLACK printf("��"); WHITE printf("��"); BLACK printf("��"); WHITE printf("��"); BLACK printf("���"); GOLD printf("����������"); BLACK printf("�����"); WHITE printf("���\n");
	gotoxy(13,21);
	BLACK printf("��"); BLUE printf("��"); BLACK printf("��"); BLUE printf("��"); BLACK printf("��"); BLUE printf("��"); BLACK printf("��"); BLUE printf("��"); BLACK printf("��"); BLUE printf("��"); BLACK printf("��"); BLUE printf("��"); BLACK printf("��"); GOLD printf("����������������"); BLACK printf("���\n");
	gotoxy(13,22);
	BLUE printf("��������������"); GOLD printf("������������������\n");

	YELLOW;
	gotoxy(13,24);
	printf("���ε��� ���Խ��ϴ�.");
	Sleep(1000);
	gotoxy(13,25);
	printf("����� ���ؼ��� ��� Ǯ����մϴ�.");
	gotoxy(13,26);
	WHITE;
	Sleep(1000);
	printf("1. CCNA  2. Java  3. C���");
	tmp = getch();
	if(tmp == 49){
		system("cls");
		gotoxy(30,18);
		printf("���� �ϱ����� �������� �غ��ϼ��� ^^");
		Sleep(1500);
		gotoxy(30,18);
		printf("                                         ");
		YELLOW;
		gotoxy(10,13);
		printf("������� �����Դϴ�");
		Sleep(1500);
		WHITE;
		gotoxy(10,14);
		printf("192.168.123.0 /24 �ּҸ� ������� �Ͽ� ��Ʈ��ũ 5���̻����γ�����,");
		gotoxy(10,15);
		printf("3��° ��Ʈ��ũ �ּҸ� ���Ͻÿ�.");
		gotoxy(22,16);
		printf("=============================================");
		gotoxy(22,17);
		printf("��");
		gotoxy(65,17);
		printf("��");
		gotoxy(22,18);
		printf("=============================================");
		gotoxy(24,17);
		YELLOW;
		printf("���� : ");
		WHITE;
		gotoxy(32, 17);
		scanf("%s",answer);

		if(strcmp(answer,ccna) == 0){
			gotoxy(40,19);
			YELLOW;
			printf("�����Դϴ�");
			*p  = 1 ;
		
		}
		else
		{
			gotoxy(40,19);
			YELLOW;
			printf("Ʋ�Ƚ��ϴ�");
			*p  = 0 ;
		}
		WHTIE:
		getch();

	}
		if(tmp == 50)
		{
				system("cls");
				gotoxy(30,18);
				printf("�ڹ� ���� ���� �ϼ̳���? ^^");
				system("cls");
				Sleep(1500);
				gotoxy(30,18);
				printf("                                         ");
				YELLOW;
				gotoxy(10,13);
				printf("�������⿡�� Ʋ�� ���� ���ÿ�");
				Sleep(1500);
				WHITE;
				gotoxy(10,15);
				printf("1. �����ڰ� �ϳ��� ���ǵǾ� ������ ����Ʈ �����ڴ� ��������� �ʴ´�.");
				gotoxy(10,16);
				printf("2. ����� �ʵ�� ��ӵǾ �� �ʵ�� ���� ����.");
				gotoxy(10,17);
				printf("3. superŰ����� �θ� Ŭ������ �޼ҵ带 �������Ҷ� ���ȴ�.");
				gotoxy(10,18);
				printf("4. �����ڸ� �ߺ������ϸ� ������ ����.");

				gotoxy(22,19);
				printf("=============================================");
				gotoxy(22,20);
				printf("��");
				gotoxy(65,20);
				printf("��");
				gotoxy(22,21);
				printf("=============================================");
				gotoxy(24,20);
				YELLOW;
				printf("���� : ");
				WHITE;
				gotoxy(32, 20);
				scanf("%d",&ans);

			if(ans == 4){
				gotoxy(40,22);
				YELLOW;
				printf("�����Դϴ�");
				*p  = 1 ;
			}
			else
			{
				gotoxy(40,22);
				YELLOW;
				printf("Ʋ�Ƚ��ϴ�");
				*p  = 0 ;
			}
			WHITE;
			getch();
		}
		


if(tmp == 51)
		{
				system("cls");
				gotoxy(30,18);
				printf("�����ܾ� �����Դϴ�. ^^");
				system("cls");
				Sleep(1500);
				gotoxy(30,18);
				printf("                                         ");
				YELLOW;
				gotoxy(15,13);
				printf("���� ������ �а� ���� �Է��ϼ���");
				Sleep(1500);
				WHITE;
				gotoxy(15,15);
				printf("���� �պκ�(����), �޺κ�(��)���� ������.");
				gotoxy(15,16);
				printf("�� �κ��� ä�����ٰ� ������ �޸𸮰� ������ �ȴ�.");
				gotoxy(15,17);
				printf("�̶� �޸𸮰� ���� �������� �ʴ»��¸� �����̶�� �ϴ°�?");
		

				gotoxy(22,18);
				printf("=============================================");
				gotoxy(22,19);
				printf("��");
				gotoxy(65,19);
				printf("��");
				gotoxy(22,20);
				printf("=============================================");
				gotoxy(24,19);
				YELLOW;
				printf("���� : ");
				WHITE;
				gotoxy(32, 19);
				scanf("%s",answer);

			if(strcmp(answer,cL) == 0){
				gotoxy(40,21);
				YELLOW;
				printf("�����Դϴ�");
				*p  = 1 ;
			}
			else
			{
				gotoxy(40,21);
				YELLOW;
				printf("Ʋ�Ƚ��ϴ�");
				*p  = 0 ;
			}
			WHITE;
			getch();
		}

}
