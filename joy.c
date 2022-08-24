#include <stdio.h>
#include <stdlib.h>

void initi(){
	printf("--------------------------------------------\n");
	printf("--------------------------------------------\n");
	printf("::           Mysql Community Server       ::\n");
	printf("--------------------------------------------\n");
	printf("  >> Press 1 for start mysql\n");
	printf("  >> Press 2 for stop  mysql\n");
	printf("--------------------------------------------\n");
	printf("--------------------------------------------\n");
	printf("::           Xampp Server                 ::\n");
	printf("--------------------------------------------\n");
	printf("--------------------------------------------\n");
	printf("  >> Press 3 for start xampp\n");
	printf("  >> Press 4 for stop  xampp\n");
	printf("  >> Press 5 for view  xampp control panel\n");
	printf("--------------------------------------------\n");
	printf("--------------------------------------------\n");
}

int main(){
	init();
	
	int n; scanf("%d", &n);
	
	if(n==3){
		system("sudo /opt/lampp/lampp start");
	}else if(n==4){
		system("sudo /opt/lampp/lampp stop");
	}else if(n==5){
		system("sudo /opt/lampp/manager-linux-x64.run");
	}
		
	return 0;
}
