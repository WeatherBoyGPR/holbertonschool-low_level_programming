section .data
	screenmessage db "Hello, Holberton",10,0
	len equ $ - screenmessage

section .text
	global main

main:
	mov eax, 4
	mov ebx, 1
	mov ecx, screenmessage
	mov edx, len
	int 0x80

