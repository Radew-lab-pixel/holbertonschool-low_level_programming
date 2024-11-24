section .text
	global _start		 ;must be declared for linker (gcc)
_start: 	; tell the linker entry point, system call to write (sys_write)
	mov ebx, 1	; assign 1 to indexed addressing ebx, file descriptor (1 is stdout)
	mov eax, 4	; assign 4 to eax to activate system call number (sys_write)
	mov edx, len    ; store message length in date register edx
        mov ecx, msg    ; store msg to write to count register ecx
	int 0x80	; call kernel
	; system call to exit
	mov eax, 1	;assign 1 to eax to activate system call number (sys_exit)
	mov ebx, 0	; exit status 0
	int 0x80 	; call kernel
section .data
msg db 'Hello, World', 0xa	; variable msg containing the data
len equ $ - msg		; length of msg                                             
