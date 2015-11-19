#include "keyboard.h"
string readStr(){
	 char buff;
	 string buffstr;
	 uint8 i=0;
	 uint8 scan;
	 uint8 reading =1;
	 while(reading){
	 	if(inportb(0x64)&0x1){
	 		scan=inportb(0x60);
	 		if(scan>=0x02&&scan<=0x0B){   //Decimal Number
		 		if(scan==0x0B)
		 		{
		 			printchar('0');
		 			buffstr[i++]='0';
		 		}
		 		else
		 		{
		 			printchar(scan-0x01+0x30);
		 			buffstr[i++]=(scan-0x01+0x30);
		 		}
	 		}
	 		else{
	 			switch(scan){
	 				case 0x10:
		 				printchar('q');
		 				buffstr[i++]='q';
		 				break;
	 				case 0x11:
		 				printchar('w');
		 				buffstr[i++]='w';
		 				break;
		 			case 0x12:
		 				printchar('e');
		 				buffstr[i++]='e';
		 				break;
	 				case 0x13:
		 				printchar('r');
		 				buffstr[i++]='r';
		 				break;
	 				case 0x14:
		 				printchar('t');
		 				buffstr[i++]='t';
		 				break;
	 				case 0x15:
		 				printchar('y');
		 				buffstr[i++]='y';
		 				break;
	 				case 0x16:
		 				printchar('u');
		 				buffstr[i++]='u';
		 				break;
	 				case 0x17:
		 				printchar('i');
		 				buffstr[i++]='i';
		 				break;
	 				case 0x18:
		 				printchar('o');
		 				buffstr[i++]='o';
		 				break;
	 				case 0x19:
		 				printchar('p');
		 				buffstr[i++]='p';
		 				break;
	 				case 0x1E:
		 				printchar('a');
		 				buffstr[i++]='a';
		 				break;
	 				case 0x1F:
		 				printchar('s');
		 				buffstr[i++]='s';
		 				break;
	 				case 0x20:
		 				printchar('d');
		 				buffstr[i++]='d';
		 				break;
	 				case 0x21:
		 				printchar('f');
		 				buffstr[i++]='f';
		 				break;
	 				case 0x22:
		 				printchar('g');
		 				buffstr[i++]='g';
		 				break;
	 				case 0x23:
		 				printchar('h');
		 				buffstr[i++]='h';
		 				break;
	 				case 0x24:
		 				printchar('j');
		 				buffstr[i++]='j';
		 				break;
	 				case 0x25:
		 				printchar('k');
		 				buffstr[i++]='k';
		 				break;
	 				case 0x26:
		 				printchar('l');
		 				buffstr[i++]='l';
		 				break;
	 				case 0x2C:
		 				printchar('z');
		 				buffstr[i++]='z';
		 				break;
	 				case 0x2D:
		 				printchar('x');
		 				buffstr[i++]='x';
		 				break;
	 				case 0x2E:
		 				printchar('c');
		 				buffstr[i++]='c';
		 				break;
	 				case 0x2F:
		 				printchar('v');
		 				buffstr[i++]='v';
		 				break;
	 				case 0x30:
		 				printchar('b');
		 				buffstr[i++]='b';
		 				break;
	 				case 0x31:
		 				printchar('n');
		 				buffstr[i++]='n';
		 				break;
	 				case 0x32:
		 				printchar('m');
		 				buffstr[i++]='m';
		 				break;
	 				case 0x0E:
	 					printchar(0x08);
	 					break;
	 				case 0x39:
		 				printchar(' ');
		 				buffstr[i++]=' ';
		 				break;
	 				case 0x1C:
	 					reading=0;
	 					break;
	 			}
	 		}
	 	}
	 }
	 buffstr[i]='\0';
	 return buffstr;
}