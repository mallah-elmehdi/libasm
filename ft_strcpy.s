section	.text
	global _ft_strcpy

_ft_strcpy:
	mov rax, 0
	mov rbx, 0

loop:
	mov rbx, rsi[rax]
	mov rdi[rax], rbx
	CMP rsi[rax], BYTE 0
	JE exit
	INC rax
	JMP loop

exit:
	mov rax, rdi
	ret
