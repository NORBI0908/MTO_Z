#include <stdio.h>
#include <string.h>

int change_num(int a)
{
	if(a>48&&a<=57)
	{
		a = a-48;
		a = ((a*9)+1)%10;
		a = a + 48;
	}
	else if(a==48)
	{
		a = 57;
	}
	else
		a = 1;
	
	return a;
}

int my_printf(char *format_string, char *param){
	int i;
	for(i=0;i<strlen(format_string)-1;i++){
		if((format_string[i] == '#') && (format_string[i+1] == '.') && (format_string[i+2] > '0' && format_string[i+2] <= '9') && (format_string[i+3] == 'g'))
		{
			int num = format_string[i+2] - '0';
			printf("%d",num);
			i++;
			i++;
			i++;
			i++;
			int j;
			int k=0;
			for(j=0;k<num+2&&j<strlen(param)-1;j++)
			{
				if(param[j]=='.')
					{putchar(param[j]); 
						k++;}
				else if(k<num+2)
			    	putchar(change_num(param[j]));
			    	
			    if(k>0)
					k++;
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
