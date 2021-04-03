section	.text
	global _ft_strdup
	extern  _malloc

_ft_strdup:
	mov rbx, 0

loop:
	CMP rdi[rbx], BYTE 0
	JE alloc
	INC rbx
	JMP loop

alloc:
	push rdi
	mov rdi, rbx
	call _malloc
	pop rdi
	mov rbx, 0

copy:
	CMP rdi[rbx], BYTE 0
	JE exit
	mov rcx, rdi[rbx]
	mov rax[rbx], rcx
	INC rbx
	JMP copy

exit:
	ret
