#include <stdio.h>
#include <string.h>
#include <ctype.h>

int my_printf(char *format_string, char *param){
	for(int i=0;i<strlen(format_string);i++){
		if((format_string[i] == '#') && (format_string[i+1] == 'k')){
			i++;
			char tekst[strlen(param)];
			for(int j=0;j<strlen(param);j++)
			{
				if(param[j]>=65&&param[j]<91) tekst[j] = tolower(param[j]);
				else if(param[j]>=97&&param[j]<123) tekst[j] = toupper(param[j]);
				else tekst[j] = param[j];
			}
			printf("%s",tekst);
		}else
			{
				if(format_string[i]>=65&&format_string[i]<91)  putchar(tolower(param[j]));
				else if(format_string[i]>=97&&format_string[i]<123) putchar(toupper(param[j]));
				else putchar(format_string[i]); 
			}
	}
	puts("");
	return 0;
}

int main(int argc, char *argv[]){
	char buf[1024],buf2[1024];
	while(gets(buf)){
		gets(buf2);
		my_printf(buf,buf2);
	}
	return 0;
}
