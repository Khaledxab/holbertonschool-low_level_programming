section .data
	message db "Hello, World",6
section .text
global main
main:
	mov rax, 1
	mov rdi, 1
	mov rsi, message
	mov rdx, 12
	syscall
	
