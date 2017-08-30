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

#define COL GetStdHandle(STD_OUTPUT_HANDLE)        // 콘솔창의 핸들정보 받기
#define BLACK SetConsoleTextAttribute(COL, 0x0000);        // 검정색
#define DARK_BLUE SetConsoleTextAttribute(COL, 0x0001);        // 파란색
#define GREEN SetConsoleTextAttribute(COL, 0x0002);        // 녹색
#define BLUE_GREEN SetConsoleTextAttribute(COL, 0x0003);        // 청녹색
#define BLOOD SetConsoleTextAttribute(COL, 0x0004);        // 검붉은색
#define PURPLE SetConsoleTextAttribute(COL, 0x0005);        // 보라색
#define GOLD SetConsoleTextAttribute(COL, 0x0006);        // 금색
#define ORIGINAL SetConsoleTextAttribute(COL, 0x0007);        // 밝은 회색 (ORIGINAL CONSOLE COLOR)
#define GRAY SetConsoleTextAttribute(COL, 0x0008);        // 회색
#define BLUE SetConsoleTextAttribute(COL, 0x0009);        // 파란색
#define HIGH_GREEN SetConsoleTextAttribute(COL, 0x000a);        // 연두색
#define SKY_BLUE SetConsoleTextAttribute(COL, 0x000b);        // 하늘색
#define RED SetConsoleTextAttribute(COL, 0x000c);        // 빨간색
#define PLUM SetConsoleTextAttribute(COL, 0x000d);        // 자주색
#define YELLOW SetConsoleTextAttribute(COL, 0x000e);        // 노란색
#define WHITE SetConsoleTextAttribute(COL, 0x000f);        // 흰색




