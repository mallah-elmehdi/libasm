section	.text
	global _ft_strcmp

_ft_strcmp:
	mov rdx, 0
	mov rax, 0

loop:
	mov bl, rdi[rdx]
	mov cl, rsi[rdx]

	CMP bl, cl
	JNE sign
	
	CMP bl, BYTE 0
	JE sign
	
	CMP cl, BYTE 0
	JE sign
	
	INC rdx
	JMP loop

sign:
	CMP bl, cl
	JL ngt

pst:
	SUB bl, cl
	mov al, bl
	ret

ngt:
	SUB bl, cl
	neg bl
	mov al, bl
	neg rax
	ret
