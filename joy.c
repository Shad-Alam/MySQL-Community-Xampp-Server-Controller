#include <stdio.h>
#include <stdlib.h>

void init(){
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
	printf("  >> Press 0 for Quit\n");
	printf("  >> Press c for Clear Screen\n");
	printf("  >> Press m for Menu\n");
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

int main(){	
	init();
	
	char n;
	while(1){
		printf("\n >> press : ");
		char j[3];
		fgets(j,sizeof(j), stdin);
		
		n = j[0];
				
		if(n=='0'){
			break;
		} 
		
		if(n=='1'){
			xamppStoper(), mysqlStarter();
			printf("\nMYSQL: Starting MySQL Server...running.\n\n");
		}else if(n=='2'){
			mysqlStoper();
			printf("\nMYSQL: Stoping MySQL Server...not running.\n\n");
		}else if(n=='3'){
			mysqlStoper(), xamppStarter();
		}else if(n=='4'){
			xamppStoper();
		}else if(n=='5'){
			system("sudo /opt/lampp/manager-linux-x64.run");
		}else if(n=='c'){
			system("clear");
		}else if(n=='m'){
			init();
		}
	}
		
	return 0;
}
