#include <stdio.h>
#include <string.h>

int change_num(int a)
{
	if(a>96&&a<=102||a>64&&a<=70)
		a = a+6;
	else
		a = -1;
	
	return a;
}

int my_printf(char *format_string, char *param){
	int i;
	for(i=0;i<strlen(format_string)-1;i++){
		if((format_string[i] == '#') && (format_string[i+1] == 'j'))
		{
			i++;
			i++;
			int j;
			int k=0;
			for(j=0;j<strlen(param)-1;j++)
			{
				if(param[j]>96&&param[j]<=102||param[j]>64&&param[j]<=70)
			    	putchar(change_num(param[j]));
			    else
			    	putchar(param[j]);
			}
		}
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
