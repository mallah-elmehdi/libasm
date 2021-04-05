section	.text
	global _ft_strcmp

_ft_strcmp:
	mov rdx, 0
	mov rax, 0
	mov rbx, 0
	mov rcx, 0

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
	CMP rbx, rcx
	JL ngt
	JE zero

pst:
	mov rax, 1
	ret

ngt:
	mov rax, -1
	ret

zero:
	ret
