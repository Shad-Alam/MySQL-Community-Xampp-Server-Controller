#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <message.h>
#include <shad.h>

int main(){	
	init(); char n; bool port = false;
	while(1){
		printf("\n >> press : "); char j[1333]; 
		fgets(j,sizeof(j), stdin);
				
		n = j[0]; if(n=='0'){ break;} 
		
		if(n=='1'){
			apacheController(),xamppStoper(), mysqlStarter(), M1;
		}else if(n=='2'){
			mysqlStoper(), M2;
		}else if(n=='3'){
			apacheController(), mysqlStoper(), xamppStarter();
		}else if(n=='4'){
			apacheController(), xamppStoper();
		}else if(n=='5'){
			xamppControlPanel();
		}else if(n=='c'){
			clear();
		}else if(n=='m'){
			init();
		}else{
			M3, port = true; 
			break;
		}
	}
	
	if(port){ 
		main();
	}
		
	return 0;
}
