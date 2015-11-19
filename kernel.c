#include "include/screen.h"
kmain(){
	clearScreen();
	print("Enter your commands my Master!\n");
	while(1){
		print("\nSamaritan>");
		string ch=readStr();
		if(strcmp(ch,"clear")==0)
		{
			clearScreen();
		}
		else{
			print("\n I need some help My Master!\n");
		}
	}
}