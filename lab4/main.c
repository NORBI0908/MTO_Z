#include <stdio.h>
#include <string.h>

int my_printf(char *format_string, char *param){
	for(int i=0;i<strlen(format_string)-1;i++){
		if((format_string[i] == '#') && (format_string[i+1] == 'g')){
			i++;
			int j=strlen(param)-2;
			for(j;j>=0;j--)
			{
			    putchar(param[j]);
			}
		}else
			putchar(format_string[i]);
	}
	puts("");
	return 0;
}

int main(int argc, char *argv[]){
	char buf[1024],buf2[1024];
	while(fgets(buf,1024,stdin)){
		fgets(buf2,1024,stdin);
		my_printf(buf,buf2);
	}
	return 0;
}
