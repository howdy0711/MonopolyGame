#include "head.h"


int dice_1(int *p){
int i;
int s = 30;
int x =43;
int rnd;
int rnd1;



for(i=0;i<15;i++){
	rnd = rand()%6+1;
	rnd1 = rand()%6+1;

	
sndPlaySoundA("�ֻ���������3.wav",SND_ASYNC|SND_NODEFAULT);
if(rnd == 1){
settextcolor(0,15);
gotoxy(25,15);
printf(" ������������ ");
gotoxy(25,16);
printf("��          ��");
gotoxy(25,17);
printf("��          ��");
gotoxy(25,18);
printf("��          ��");
gotoxy(25,19);
printf("��          ��");
gotoxy(25,20);
printf("��          ��");
gotoxy(25,21);
printf(" ������������ ");
gotoxy(31,18);
printf("��");
Sleep(s);

WHITE;

}


if(rnd == 2){
settextcolor(0,15);
gotoxy(25,15);
printf(" ������������ ");
gotoxy(25,16);
printf("��          ��");
gotoxy(25,17);
printf("��          ��");
gotoxy(25,18);
printf("��          ��");
gotoxy(25,19);
printf("��          ��");
gotoxy(25,20);
printf("��          ��");
gotoxy(25,21);
printf(" ������������ ");
gotoxy(29,18);
printf("��");
gotoxy(33,18);
printf("��");
Sleep(s);
WHITE;
}

if(rnd == 3){
settextcolor(0,15);
gotoxy(25,15);
printf(" ������������ ");
gotoxy(25,16);
printf("��          ��");
gotoxy(25,17);
printf("��          ��");
gotoxy(25,18);
printf("��          ��");
gotoxy(25,19);
printf("��          ��");
gotoxy(25,20);
printf("��          ��");
gotoxy(25,21);
printf(" ������������ ");
gotoxy(27,16);
printf("��");
gotoxy(31,18);
printf("��");
gotoxy(35,20);
printf("��");
Sleep(s);
WHITE;
}

if(rnd == 4){
settextcolor(0,15);
gotoxy(25,15);
printf(" ������������ ");
gotoxy(25,16);
printf("��          ��");
gotoxy(25,17);
printf("��          ��");
gotoxy(25,18);
printf("��          ��");
gotoxy(25,19);
printf("��          ��");
gotoxy(25,20);
printf("��          ��");
gotoxy(25,21);
printf(" ������������ ");;
gotoxy(29,17);
printf("��");
gotoxy(29,19);
printf("��");
gotoxy(33,17);
printf("��");
gotoxy(33,19);
printf("��");
Sleep(s);
WHITE;
}

if(rnd==5){
settextcolor(0,15);
gotoxy(25,15);
printf(" ������������ ");
gotoxy(25,16);
printf("��          ��");
gotoxy(25,17);
printf("��          ��");
gotoxy(25,18);
printf("��          ��");
gotoxy(25,19);
printf("��          ��");
gotoxy(25,20);
printf("��          ��");
gotoxy(25,21);
printf(" ������������ ");;
gotoxy(28,16);
printf("��");
gotoxy(28,20);
printf("��");
gotoxy(34,16);
printf("��");
gotoxy(34,20);
printf("��");
gotoxy(31,18);
printf("��");
Sleep(s);
WHITE;

}
if(rnd == 6){
settextcolor(0,15);
gotoxy(25,15);
printf(" ������������ ");
gotoxy(25,16);
printf("��          ��");
gotoxy(25,17);
printf("��          ��");
gotoxy(25,18);
printf("��          ��");
gotoxy(25,19);
printf("��          ��");
gotoxy(25,20);
printf("��          ��");
gotoxy(25,21);
printf(" ������������ ");
gotoxy(29,16);


printf("��");
gotoxy(29,18);
printf("��");
gotoxy(29,20);
printf("��");
gotoxy(33,16);
printf("��");
gotoxy(33,18);
printf("��");
gotoxy(33,20);
printf("��");
Sleep(s);
WHITE;
}

if(rnd1 == 1){
settextcolor(0,15);
gotoxy(x,15);
printf(" ������������ ");
gotoxy(x,16);
printf("��          ��");
gotoxy(x,17);
printf("��          ��");
gotoxy(x,18);
printf("��          ��");
gotoxy(x,19);
printf("��          ��");
gotoxy(x,20);
printf("��          ��");
gotoxy(x,21);
printf(" ������������ ");
gotoxy(49,18);
printf("��");
Sleep(s);
WHITE;

}


if(rnd1 == 2){
settextcolor(0,15);
gotoxy(x,15);
printf(" ������������ ");
gotoxy(x,16);
printf("��          ��");
gotoxy(x,17);
printf("��          ��");
gotoxy(x,18);
printf("��          ��");
gotoxy(x,19);
printf("��          ��");
gotoxy(x,20);
printf("��          ��");
gotoxy(x,21);
printf(" ������������ ");
gotoxy(47,18);
printf("��");
gotoxy(51,18);
printf("��");
Sleep(s);
WHITE;
}

if(rnd1 == 3){
settextcolor(0,15);
gotoxy(x,15);
printf(" ������������ ");
gotoxy(x,16);
printf("��          ��");
gotoxy(x,17);
printf("��          ��");
gotoxy(x,18);
printf("��          ��");
gotoxy(x,19);
printf("��          ��");
gotoxy(x,20);
printf("��          ��");
gotoxy(x,21);
printf(" ������������ ");
gotoxy(45,16);
printf("��");
gotoxy(49,18);
printf("��");
gotoxy(53,20);
printf("��");
Sleep(s);
WHITE;
}

if(rnd1 == 4){
settextcolor(0,15);
gotoxy(x,15);
printf(" ������������ ");
gotoxy(x,16);
printf("��          ��");
gotoxy(x,17);
printf("��          ��");
gotoxy(x,18);
printf("��          ��");
gotoxy(x,19);
printf("��          ��");
gotoxy(x,20);
printf("��          ��");
gotoxy(x,21);
printf(" ������������ ");;
gotoxy(47,17);
printf("��");
gotoxy(47,19);
printf("��");
gotoxy(51,17);
printf("��");
gotoxy(51,19);
printf("��");
Sleep(s);
WHITE;
}

if(rnd1==5){
settextcolor(0,15);
gotoxy(x,15);
printf(" ������������ ");
gotoxy(x,16);
printf("��          ��");
gotoxy(x,17);
printf("��          ��");
gotoxy(x,18);
printf("��          ��");
gotoxy(x,19);
printf("��          ��");
gotoxy(x,20);
printf("��          ��");
gotoxy(x,21);
printf(" ������������ ");;
gotoxy(46,16);
printf("��");
gotoxy(46,20);
printf("��");
gotoxy(52,16);
printf("��");
gotoxy(52,20);
printf("��");
gotoxy(49,18);
printf("��");
Sleep(s);
WHITE;

}

if(rnd1 == 6){
settextcolor(0,15);
gotoxy(x,15);
printf(" ������������ ");
gotoxy(x,16);
printf("��          ��");
gotoxy(x,17);
printf("��          ��");
gotoxy(x,18);
printf("��          ��");
gotoxy(x,19);
printf("��          ��");
gotoxy(x,20);
printf("��          ��");
gotoxy(x,21);
printf(" ������������ ");

gotoxy(47,16);
printf("��");
gotoxy(47,18);
printf("��");
gotoxy(47,20);
printf("��");
gotoxy(51,16);
printf("��");
gotoxy(51,18);
printf("��");
gotoxy(51,20);
printf("��");
Sleep(s);
WHITE;
}

}

Sleep(1000);
*p = rnd1+rnd;

return rnd1+ rnd;
}

void move_message(int rnd){
int i;
for(i=0; i<7; i++){
gotoxy(25,15+i);
printf("                                   ");
}


YELLOW;
gotoxy(30,18);
if(rnd == 2) 
printf("�� ĭ �̵� �մϴ�.\n");

if(rnd == 3) 
printf("�� ĭ �̵� �մϴ�.\n");

if(rnd  == 4) 
printf("�� ĭ �̵� �մϴ�.\n");

if(rnd  == 5) 
printf("�ټ� ĭ �̵� �մϴ�.\n");

if(rnd  == 6) 
printf("���� ĭ �̵� �մϴ�.\n");

if(rnd == 7) 
printf("�ϰ� ĭ �̵� �մϴ�.\n");

if(rnd  == 8) 
printf("���� ĭ �̵� �մϴ�.\n");

if(rnd  == 9) 
printf("��ȩ ĭ �̵� �մϴ�.\n");

if(rnd  == 10) 
printf("��ĭ �̵� �մϴ�.\n");

if(rnd == 11) 
printf("�� ��ĭ �̵� �մϴ�.\n");

if(rnd  == 12) 
printf("�� ��ĭ �̵� �մϴ�.\n");
WHITE;

Sleep(1000);
gotoxy(30,18);
printf("                     \n");
}