#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int my_printf(char *format_string, char *param){
	int a=0;
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
		}else if((format_string[i] == '#') && (format_string[i+1] == '.'))
         {
			 i++;
			 i++;
			 int k=0;
			 while(format_string[i]>=0&&format_string[i]<10)
			 {
				 a=a+((format_string[i]-'0')*pow(10,k));
			 }
			 printf("$s",tekst);
         }
         else
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
