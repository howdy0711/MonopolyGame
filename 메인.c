#include "head.h"
int b_money1 = 50000 ,  b_money2 = 50000;
int arr1[18] = {0}, arr2[18] = {0}; //���󱸸ſ��� Ȯ�ι迭, ���򱸺й迭
int player1[18] = {0}, player2[18] = {0}; // �����1,2 �÷���c
char name1[20];
char name2[20];
int main(){
	int ch = 0 ; // ����Ư������ ��ȯ�� ���� (���ſ��� Ȯ��)
	int i, turn_check=0, tmp= 0;
	int rnd_return1 = 0; //�ֻ��� ������ ����
	int rnd_return2 = 0;
	int point_tmp = 0;
	int x = 0, y = 0, z = 0;
	int *p1,*p2,*p3,*p4,*p5,*p6,*p7;
	int Mflag[2] = {1 , 1}; //���ε� �÷���
	// *p1,*p2 ���� ����Ű�� ������
	// *p3,*p4 ��ǥ��ȣ, ���� 1p,2p �÷���
	// *p5; ���󱸸ſ��� Ȯ�� �÷���
	// *p6, *p7 1p , 2p ���ε� �÷��� 
	for(i=0; i<18; i++) { arr1[i] = i; }
	p1 = &b_money1;	p2 = &b_money2;
	p3 = &x; p4 = &y; p5 = &z;
	p6 = &Mflag[0]; p7 = &Mflag[1];
	START:
	system("mode con:cols=80 lines=38" );
	system("cls");
	start();

tmp = getch(); // �Է��Լ�
if(	tmp == 51 ){ system("cls"); help(); getch(); goto START; } // 2�� �Է½� ���� ���
if ( tmp == 50){ system("cls");end2();exit(1); } // 3�� �Է½� ��������
if ( tmp == 49){ //1���Է½� ���ӽ���
		create_id(name1,name2); // ID�����Լ�
		flag_effect(); // ���� ȿ�� �Լ�
		Game_Board(); // ������ �Լ� 
		board_text(b_money1,b_money2,p4,arr1,arr2,p5, player1,player2); // ������ �ؽ�Ʈ�Լ�
		*p5 = 0; //�⺻���� ���� �ƹ��� ������������ 
		gotoxy(8,4);YELLOW;printf("��"); //p1 ���۸�Ŀ
		gotoxy(11,4);GREEN;printf("��"); //p2 ���۸�Ŀ
		sndPlaySoundA("����.wav",SND_ASYNC|SND_NODEFAULT);	Sleep(900); // ���ۼҸ� ��� 0.9�ʵ���
		while(turn_check < 10){
			sndPlaySoundA("���ӼҸ�.wav",SND_ASYNC|SND_NODEFAULT);
			gotoxy(55,8);YELLOW;
			printf("�ϼ� %d", turn_check);WHITE;
			user1_message(); //����� �ȳ� �Լ�
			clear_marker1(rnd_return1); //��Ŀ�����Լ�
			turn_check++; //P1���� �� �ϼ�����
			rnd_return1 += dice_1(&point_tmp); // �ֻ��� �ֻ��� �Լ� ��ȯ��1:��������, ��ȯ��2:���糭��
			if(turn_check ==1)
				rnd_return1 = 10;
			dice_sound(point_tmp); //�ֻ��� ���ڿ����� �ٸ� �Ҹ� ����Լ�
			if(rnd_return1 >= 20) b_money1 += 5000; // �������� ������ ���� 5000��
			if(rnd_return1 > 20) {rnd_return1 -= 20;} // �ѹ��� ���� �ٵ��� �������� -20
			move_message(point_tmp); //  ���� ���� �̵� �޼��� ����Լ�
			gotoxy(8,4);printf("  ");// p1�⺻��Ŀ����
			user1_marker(rnd_return1); // �ֻ��� ���ڿ����� ��Ŀ�̵��Լ�
			Sleep(1000);
			ch = countryINFO1(rnd_return1,p2,p1,p3,arr1,player2,p6); // ���������� �����Լ�
			//1P�� ���󱸸�����, ������ ������ǥ����, �ٸ��÷��̾� �� ������ ������
			if(*p6 == 0) {*p1 -= 3000; *p6 = 1;} // ���ε� ���� �÷����Լ� ����Ǯ�̽��н� -3000��
			money_check(b_money1, b_money2); // ����� �Ļ꿩��Ȯ���Լ�
			if(ch == 49) *p5 = 1; // ch == 49�� �� ���� *p5�� ���� �����ߴ����� �����Լ�
			if(ch == 50) *p5 = 0; // ch == 50�̸� ���� x 
			gotoxy(55,8);YELLOW;
			printf("�ϼ� %d", turn_check);WHITE; // �ϼ� ���
			user1_marker(rnd_return1); // �ٽ�����1 ��Ŀ ����
			user2_marker(rnd_return2); // ������ ����2 ��Ŀ����
			board_text(b_money1,b_money2,p3,arr1,arr2,p5,player1,player2); // �������� ��� �ؽ�Ʈ �ٽ����
			//��ǥ��ȣ���´� ���򺯰�
			if(ch==49)Sleep(1000);
			sndPlaySoundA("���ӼҸ�.wav",SND_ASYNC|SND_NODEFAULT);
//////////////////////////// ����� 2 �÷��� ///////////////////////////////////////////////////////////////
			user2_message();
			clear_marker2(rnd_return2);
			rnd_return2 += dice_1(&point_tmp);
			turn_check++;
			if(rnd_return2 >= 20)b_money2 += 5000;
			if(rnd_return2 > 20) {rnd_return2 -= 20;}
			dice_sound(point_tmp);
			move_message(point_tmp); //  ���� ���� �̵� �޼��� ���
			gotoxy(11,4);printf("  "); // p2�⺻��Ŀ����
			user2_marker(rnd_return2);
			Sleep(1000);
			ch = countryINFO1(rnd_return2,p1,p2,p3,arr1,player1,p7);
			if(*p7 == 0){*p2 -= 3000; *p7 = 1;}
			money_check(b_money1, b_money2);
			if(ch == 49) *p5 = 2;
			if(ch == 50) *p5 = 0;
			gotoxy(55,8);YELLOW;
			printf("�ϼ� %d", turn_check);WHITE;
			user2_marker(rnd_return2);
			user1_marker(rnd_return1);
			board_text(b_money1,b_money2,p3,arr1,arr2,p5,  player1,player2);
			if(ch==49)Sleep(1000);
			sndPlaySoundA("���ӼҸ�.wav",SND_ASYNC|SND_NODEFAULT);
			}
}
system("cls");
turnlimit(b_money1,b_money2); // �ϼ��ʰ� ��µǴ� �Լ�
return 0;
}