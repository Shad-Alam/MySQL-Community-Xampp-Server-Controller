#include <stdio.h>
#include <stdlib.h>
#include <joy.h>

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
			xamppControlPanel();
		}else if(n=='c'){
			system("clear");
		}else if(n=='m'){
			init();
		}else{
			// error message
			// invalid command
		}
	}
		
	return 0;
}
