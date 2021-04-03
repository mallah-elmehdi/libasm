section	.text
	global _ft_strlen

_ft_strlen:
	mov rax, 0

loop:
	CMP rdi[rax], BYTE 0
	JE exit
	INC rax
	JMP loop

exit :
	ret
