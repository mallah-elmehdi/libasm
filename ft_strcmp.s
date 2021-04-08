section	.text
	global _ft_strcmp

_ft_strcmp:
	mov rdx, 0
	mov rax, 0
	mov r8, 0
	mov r9, 0

loop:
	mov r8b, rdi[rdx]
	mov r9b, rsi[rdx]

	CMP r8b, r9b
	JNE sign
	
	CMP r8b, BYTE 0
	JE sign
	
	CMP r9b, BYTE 0
	JE sign
	
	INC rdx
	JMP loop

sign:
	CMP r8, r9
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
