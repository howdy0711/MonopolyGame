#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <string.h>
#include <mmsystem.h>
#include <process.h>
#include <string.h>
#include<MMSystem.h>
#include<conio.h>
#pragma comment(lib,"Winmm.lib")

void gotoxy(int x, int y);
void settextcolor(int color, int bgcolor);
void end();
int input();

void flag_effect();
void Game_Board();
void board_effect();
void board_text(int m1, int m2, int *p3, int arr1[], int arr2[],int *p5, int p1[], int p2[]);
void end_menu(int);
void start();
void create_id(char *name1, char *name2);
void help();
void start_menu(int);
void end2();
int dice_1(int *p);
void move_message(int);
void user1_marker(int);
void user2_marker(int);
void clear_marker1(int move);
void clear_marker2(int move);
void timer();
int inputdata();
void dice_sound(int t); 
void money_check(int p1_m, int p2_m);
void baseball();
void turnlimit(int b_money1, int b_money2);
void user1_message();
void user2_message();


void India();
void singapore();
void USA();
void canada();
void korea();
void australia();
void philippines();
void france();
void portugal();
void china();
void japan();
void italy();
void united_kingdom();
void brazil();
void spain();
void uninhabited();

int countryINFO1(int n,int *p2, int *p1 , int *p3 , int arr1[], int player[],int *p6);
void koreaINFO();
void USAINFO();
void IndiaINFO();
void singaporeINFO();
void canadaINFO();
void australiaINFO();
void philippinesINFO();
void franceINFO();
void portugalINFO();
void chinaINFO();
void japanINFO();
void italyINFO();
void united_kingdomINFO();
void brazilINFO();
void spainINFO();
void russiaINFO();
void germanyINFO();
void netherlandsINFO();
void uninhabitedINFO(int *p);


void character();

#define COL GetStdHandle(STD_OUTPUT_HANDLE)        // �ܼ�â�� �ڵ����� �ޱ�
#define BLACK SetConsoleTextAttribute(COL, 0x0000);        // ������
#define DARK_BLUE SetConsoleTextAttribute(COL, 0x0001);        // �Ķ���
#define GREEN SetConsoleTextAttribute(COL, 0x0002);        // ���
#define BLUE_GREEN SetConsoleTextAttribute(COL, 0x0003);        // û���
#define BLOOD SetConsoleTextAttribute(COL, 0x0004);        // �˺�����
#define PURPLE SetConsoleTextAttribute(COL, 0x0005);        // �����
#define GOLD SetConsoleTextAttribute(COL, 0x0006);        // �ݻ�
#define ORIGINAL SetConsoleTextAttribute(COL, 0x0007);        // ���� ȸ�� (ORIGINAL CONSOLE COLOR)
#define GRAY SetConsoleTextAttribute(COL, 0x0008);        // ȸ��
#define BLUE SetConsoleTextAttribute(COL, 0x0009);        // �Ķ���
#define HIGH_GREEN SetConsoleTextAttribute(COL, 0x000a);        // ���λ�
#define SKY_BLUE SetConsoleTextAttribute(COL, 0x000b);        // �ϴû�
#define RED SetConsoleTextAttribute(COL, 0x000c);        // ������
#define PLUM SetConsoleTextAttribute(COL, 0x000d);        // ���ֻ�
#define YELLOW SetConsoleTextAttribute(COL, 0x000e);        // �����
#define WHITE SetConsoleTextAttribute(COL, 0x000f);        // ���




