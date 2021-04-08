section	.text
	global _ft_strdup
	extern  _malloc

_ft_strdup:
	mov r8, 0

loop:
	CMP rdi[r8], BYTE 0
	JE alloc
	INC r8
	JMP loop

alloc:
	INC r8
	push rdi
	mov rdi, r8
	call _malloc
	pop rdi
	mov r8, 0

copy:
	mov rcx, rdi[r8]
	mov rax[r8], rcx
	CMP rdi[r8], BYTE 0
	JE exit
	INC r8
	JMP copy

exit:
	ret
