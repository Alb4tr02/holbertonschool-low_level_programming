	section .data
	msg db "Hello, Holberton",10

	section .text
	global main
main:
	mov rax,4
	mov rbx,1
	mov rcx,msg
	mov rdx,17
	syscall
	mov rax,1
	movr rbx,0
	syscall
