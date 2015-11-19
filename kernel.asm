bits	32			;32 bit protected mode
section		.txt
	align	4		
	dd 0x1BADB002	
	dd 0x00
	dd -(0x1BADB002+0x00)
global start
extern kmain        ;located in our kernel.c
start:
	cli   			;Clear all interupt
	call kmain  	;Call kernel main function
	hlt				;Halt the cpu 