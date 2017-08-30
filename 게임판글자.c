#include "head.h"

void board_text(int m1, int m2, int *p3, int arr1[], int arr2[],int *p5, int p1[], int p2[]){
	FILE *fp = NULL;
	char name1[10];
	char name2[10];
	int color[18] = {0};
	int i;

	for(i=0; i<18; i++){
		if(arr1[i] == *p3){ //나라번호를 확인해서 해당되는 나라의 나라색깔을 바꾼다.
			arr1[i] = 0;
				if(*p5 == 1){ //사용자구분 사용자가 1이면 노란색
					arr2[i] = 1;
					p1[i] = 1; //p1의 i번나라 구매여부 체크
					break;
				}
				if(*p5 == 2){  //2이면 초록색
					arr2[i] = 2;
					p2[i] = 1; //p2의 i번나라 구매여부 체크
					break;
				}
				if(*p5 == 0){  //기본 흰색
					arr2[i] = 0;
					break;
				}
	
		}
		
	}
	fp = fopen("name1.txt","r");

	fscanf(fp, "%s\n", name1);
	gotoxy(18,8);
	YELLOW;
	printf("%s",name1);
	WHITE;
	printf("님 현재잔액: %d원",m1);
	fclose(fp);

	fp = fopen("name2.txt","r");
	fscanf(fp, "%s\n", name2);
	gotoxy(18,9);
	GREEN;
	printf("%s",name2);
	WHITE;
	printf("님 현재잔액: %d원",m2);
	fclose(fp);

	//이곳에 조건을 걸어서 찍힌곳에 색깔이 변해야한다. 삿다는 것을 어떻게 입력받나 p1,p2인지 
//누적으로 찍힌 판이 필요하다.
//////////////////////////////	


	WHITE;
	gotoxy(7,3);                                                                               
	printf("시  작 ");
	gotoxy(67,33);
	printf("무인도");
	
	if(arr2[0] == 0 )
		color[0] = WHITE;
	if(arr2[0] == 1 && arr1[0] == 0 )
		color[0] = YELLOW;
	if(arr2[0] == 2 && arr1[0] == 0 )
		color[0] = GREEN;

	color[0];
	gotoxy(18,3);
	printf("포르투칼");
	WHITE;

	if(arr2[1] == 0 )
		color[1] = WHITE;
	if(arr2[1] == 1 && arr1[0] == 0 )
		color[1] = YELLOW;
	if(arr2[1] == 2 && arr1[0] == 0 )
		color[1] = GREEN;
	
	color[1];
	gotoxy(30,3);
	printf("네덜란드");
	WHITE;

	if(arr2[2] == 0 )
		color[2] = WHITE;
	if(arr2[2] == 1 && arr1[0] == 0 )
		color[2] = YELLOW;
	if(arr2[2] == 2 && arr1[0] == 0 )
		color[2] = GREEN;

	color[2];
	gotoxy(42,3);
	printf("싱가포르");
	WHITE;

	if(arr2[3] == 0 )
		color[3] = WHITE;
	if(arr2[3] == 1 && arr1[0] == 0 )
		color[3] = YELLOW;
	if(arr2[3] == 2 && arr1[0] == 0 )
		color[3] = GREEN;

	color[3];
	gotoxy(55,3);
	printf("필리핀"); 
	WHITE;

	if(arr2[4] == 0 )
		color[4] = WHITE;
	if(arr2[4] == 1 && arr1[0] == 0 )
		color[4] = YELLOW;
	if(arr2[4] == 2 && arr1[0] == 0 )
		color[4] = GREEN;
		
		color[4];
		gotoxy(65,3);
		printf("  스페인"); 
		WHITE;
	
	if(arr2[5] == 0 )
		color[5] = WHITE;
	if(arr2[5] == 1 && arr1[0] == 0 )
		color[5] = YELLOW;
	if(arr2[5] == 2 && arr1[0] == 0 )
		color[5] = GREEN;
		
		color[5];
		gotoxy(65,9);
		printf("  호  주");
		WHITE;

	
	if(arr2[6] == 0 )
		color[6] = WHITE;
	if(arr2[6] == 1 && arr1[0] == 0 )
		color[6] = YELLOW;
	if(arr2[6] == 2 && arr1[0] == 0 )
		color[6] = GREEN;
		gotoxy(65,15);
		printf("  캐나다");
		WHITE;

	if(arr2[7] == 0 )
		color[7] = WHITE;
	if(arr2[7] == 1 && arr1[0] == 0 )
		color[7] = YELLOW;
	if(arr2[7] == 2 && arr1[0] == 0 )
		color[7] = GREEN;
	color[7];
	gotoxy(65,21);
	printf("  인  도 ");
	WHITE;

	if(arr2[8] == 0 )
		color[8] = WHITE;
	if(arr2[8] == 1 && arr1[0] == 0 )
		color[8] = YELLOW;
	if(arr2[8] == 2 && arr1[0] == 0 )
		color[8] = GREEN;
	color[8];
	gotoxy(65,27);
	printf("  러시아");
	WHITE;

	if(arr2[9] == 0 )
		color[9] = WHITE;
	if(arr2[9] == 1 && arr1[0] == 0 )
		color[9] = YELLOW;
	if(arr2[9] == 2 && arr1[0] == 0 )
		color[9] = GREEN;

	color[9];
	gotoxy(54,33);
	printf("이탈리아");
	WHITE;

	if(arr2[10] == 0 )
		color[10] = WHITE;
	if(arr2[10] == 1 && arr1[0] == 0 )
		color[10] = YELLOW;
	if(arr2[10] == 2 && arr1[0] == 0 )
		color[10] = GREEN;

	color[10];
	gotoxy(43,33);
	printf("브라질");
	WHITE;

	if(arr2[11] == 0 )
		color[11] = WHITE;
	if(arr2[11] == 1 && arr1[0] == 0 )
		color[11] = YELLOW;
	if(arr2[11] == 2 && arr1[0] == 0 )
		color[11] = GREEN;

	color[11];
	gotoxy(31,33);
	printf("영  국");
	WHITE;

	if(arr2[12] == 0 )
		color[12] = WHITE;
	if(arr2[12] == 1 && arr1[0] == 0 )
		color[12] = YELLOW;
	if(arr2[12] == 2 && arr1[0] == 0 )
		color[12] = GREEN;
	color[12];
	gotoxy(19,33);
	printf("프랑스"); 
	WHITE;

	if(arr2[13] == 0 )
		color[13] = WHITE;
	if(arr2[13] == 1 && arr1[0] == 0 )
		color[13] = YELLOW;
	if(arr2[13] == 2 && arr1[0] == 0 )
		color[13] = GREEN;
	gotoxy(7,33);
	printf("독  일"); 
	WHITE;

	
	if(arr2[14] == 0 )
		color[14] = WHITE;
	if(arr2[14] == 1 && arr1[0] == 0 )
		color[14] = YELLOW;
	if(arr2[14] == 2 && arr1[0] == 0 )
		color[14] = GREEN;
	gotoxy(7,27);
	printf("일  본");
	WHITE;


	if(arr2[15] == 0 )
		color[15] = WHITE;
	if(arr2[15] == 1 && arr1[0] == 0 )
		color[15] = YELLOW;
	if(arr2[15] == 2 && arr1[0] == 0 )
		color[15] = GREEN;

	color[15];
	gotoxy(7,21);
	printf("중  국");
	WHITE;
	
	if(arr2[16] == 0 )
		color[16] = WHITE;
	if(arr2[16] == 1 && arr1[0] == 0 )
		color[16] = YELLOW;
	if(arr2[16] == 2 && arr1[0] == 0 )
		color[16] = GREEN;
	gotoxy(7,15);
	printf("미  국"); 
		WHITE;

	if(arr2[17] == 0 )
		color[17] = WHITE;
	if(arr2[17] == 1 && arr1[0] == 0 )
		color[17] = YELLOW;
	if(arr2[17] == 2 && arr1[0] == 0 )
		color[17] = GREEN;

	color[17];
	gotoxy(6,9);
	printf("대한민국");
	WHITE;


}