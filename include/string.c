#include "string.h"
uint32 strlen(string ch){
	uint32 i=0;
	while(ch[i]!='\0'){
		i++;
	}
		return i;
}
int16 strcmp(string ch1,string ch2){
	uint32 i=0;
	while(ch1[i]==ch2[i]&&(ch1[i]!='\0'||ch2[i]!='\0'))
		i++;
	if(ch1[i]=='\0')
	{
		if(ch2[i]=='\0')
			return 0;
		else 
			return -1;
	}
	else if(ch2[i]=='\0'){
		return 1;
	}
	else{
		if(ch1[i]>ch2[i])
			return 1;
		else
			return -1;
	}
}