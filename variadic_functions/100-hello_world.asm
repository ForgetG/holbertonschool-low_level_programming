section .data
	msg db 'Hello, World', 0xa	; string to be printed
	len equ $ - msg			; length of the string

section .text
	global main			; must be declared for linker (ld)

main:
	mov rax, 1			; system call number (sys_write)
	mov rdi, 1			; file descriptor (stdout)
	mov rsi, msg			; pointer to message to write
	mov rdx, len			; length of message
	syscall				; call kernel

	;no need for an explicit exit syscall; C runtime will handle it.
