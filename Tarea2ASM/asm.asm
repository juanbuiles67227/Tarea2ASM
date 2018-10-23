.model flat, C
.data

	pi DD 3
	dos DD 2
	
.code
Area proc
	push ebp
	mov ebp, esp
	cdq
	idiv dos
	mov edx,eax
	imul eax, edx 
	imul eax, pi 
	mov [ebp+12], edx
	pop ebp
	ret 
Area endp

Radio proc
	push ebp
	mov ebp, esp
	pop ebp
	ret 
Radio endp


end