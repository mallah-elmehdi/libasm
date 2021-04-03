section	.text
	global _ft_strcpy

_ft_strcpy:
	mov rax, 0
	xor rbx, rbx

loop:
	CMP rsi[rax], BYTE 0
	JE exit
	mov rbx, rsi[rax]
	mov rdi[rax], rbx
	INC rax
	JMP loop

exit:
	mov rax, rdi
	ret