section	.text
	global _ft_strcpy

_ft_strcpy:
	mov rax, 0
	mov r8, 0

loop:
	mov r8, rsi[rax]
	mov rdi[rax], r8
	CMP rsi[rax], BYTE 0
	JE exit
	INC rax
	JMP loop

exit:
	mov rax, rdi
	ret
