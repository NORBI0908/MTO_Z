#include <stdio.h>
#include <string.h>

int my_printf(char *format_string, char *param){
	int i;
	for(i=0;i<strlen(format_string)-1;i++){
		if((format_string[i] == '#') && (format_string[i+1] == 'X') && (format_string[i+2] == 'g'))
		{
			i++;
			i++;
			i++;
			int j;
			for(j=0;j<=strlen(param)-2;j++)
			{
			    putchar(decrease_num(param[j]));
			}
		}
			putchar(format_string[i]);
	}
	puts("");
	return 0;
}

int decrease_num(int a)
{
	if(a>48&&a<=57)
	{
		a = a-1;
	}
	else if(a==48)
	{
		a = 57;
	}
	else
		a = 1;
	
	return a;
}

int main(int argc, char *argv[]){
	char buf[1024],buf2[1024];
	while(fgets(buf,1024,stdin)){
		fgets(buf2,1024,stdin);
		my_printf(buf,buf2);
	}
	return 0;
}
