#include <stdio.h>
#include <stdlib.h>

void init(){
	printf("--------------------------------------------\n");
	printf("--------------------------------------------\n");
	printf("::           Mysql Community Server       ::\n");
	printf("--------------------------------------------\n");
	printf("  >> Press 1 for START mysql\n");
	printf("  >> Press 2 for STOP  mysql\n");
	printf("--------------------------------------------\n");
	printf("--------------------------------------------\n");
	printf("::              Xampp Server              ::\n");
	printf("--------------------------------------------\n");
	printf("--------------------------------------------\n");
	printf("  >> Press 3 for START xampp\n");
	printf("  >> Press 4 for STOP  xampp\n");
	printf("  >> Press 5 for VIEW  xampp control panel\n");
	printf("--------------------------------------------\n");
	printf("--------------------------------------------\n");
	printf("::             Display Control            ::\n");
	printf("--------------------------------------------\n");
	printf("--------------------------------------------\n");
	printf("  >> Press c for CLEAR Screen\n");
	printf("  >> Press m for MENU\n");
	printf("  >> Press 0 for EXIT\n");
	printf("--------------------------------------------\n");
	printf("--------------------------------------------\n");
}


void mysqlStarter(){
	system("sudo service mysql start");
}

void mysqlStoper(){
	system("sudo service mysql stop");
}

void xamppStarter(){
	system("sudo /opt/lampp/lampp start");
}
void xamppStoper(){
	system("sudo /opt/lampp/lampp stop");
}

void xamppControlPanel(){
	system("sudo /opt/lampp/manager-linux-x64.run");
}

void clear(){
	system("clear");
}


