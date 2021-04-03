section	.text
	global _ft_strcmp

_ft_strcmp:
	mov rdx, 0

loop:
	mov bl, rdi[rdx]
	mov cl, rsi[rdx]
	CMP bl, cl
	JNE exit
	CMP bl, BYTE 0
	JE exit
	CMP cl, BYTE 0
	JE exit
	INC rdx
	JMP loop

exit:
	SUB bl, cl 
	mov al, bl
	ret