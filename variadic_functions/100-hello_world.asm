section .data
	msg db 'Hello, World', 0xa	; string to be printed
	len equ $ - msg			; length of the string

section .text
	global _start			; must be declared for linker (ld)

_start:
	mov rax, 1			; system call number (sys_write)
	mov rdi, 1			; file descriptor (stdout)
	mov rsi, msg			; pointer to message to write
	mov rdx, len			; length of message
	syscall				; call kernel

	mov rax, 60			; system call number (sys_exit)
	xor rdi, rdi			; exit code 0
	syscall				; call kernel
