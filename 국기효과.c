#include "head.h"
void flag_effect(){
	
	int i;
	int rnd;
	int s = 100;
	for(i=0;i<20;i++){
	rnd=rand()%15+1;
	system("mode con:cols=85 lines=30" );
	if(rnd==1){
	system("cls");
	India();
	Sleep(s);
	}
	if(rnd==2){
	system("cls");
	singapore();
	Sleep(s);
	}

	if(rnd==3){
	system("cls");
	USA();
	Sleep(s);
	}
	if(rnd==4){
	system("cls");
	canada();
	Sleep(s);
	}
	if(rnd==5){
	system("cls");
	korea();
	Sleep(s);
	}


	////////////////
	if(rnd==6){
	system("cls");
	china();
	Sleep(s);
	}
	if(rnd==7){
	system("cls");
	portugal();
	Sleep(s);
	}
	if(rnd==8){
	system("cls");
	france();
	Sleep(s);
	}
	if(rnd==9){
	system("cls");
	philippines();
	Sleep(s);
	}
	if(rnd==10){
	system("cls");
	australia();
	Sleep(s);
	}
	

	if(rnd==11){
	system("cls");
	spain();
	Sleep(s);
	}
	if(rnd==12){
	system("cls");
	united_kingdom();
	Sleep(s);
	}
	if(rnd==13){
	system("cls");
	brazil();
	Sleep(s);
	}
	if(rnd==14){
	system("cls");
	italy();
	Sleep(s);
	}
	if(rnd==15){
	system("cls");
	japan();
	Sleep(s);
	}

	
}
	system("cls");
	Sleep(1000);
	WHITE;
	system("mode con:cols=80 lines=38" );
}
