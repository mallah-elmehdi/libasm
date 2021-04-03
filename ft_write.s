section	.text
	global _ft_write
	extern  ___error

_ft_write:
	mov rax, 0x02000004
	syscall
	JC err
	ret

err:
	push rax
	call ___error 
	pop rcx
	mov [rax], rcx
	mov rax, -1
	ret