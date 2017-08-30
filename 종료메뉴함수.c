#include "head.h"

void end_menu(int tmp){
	
	 if( tmp == 51 ) {
		 system("cls");
		 end2();
		 exit(1);
	 }
	 if ( tmp == 50){
		 system("cls");
		 printf("¼øÀ§\n");
	 }
	 if ( tmp == 49){
		 system("cls");
		 start();
	 }

}