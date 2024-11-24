section .data
    msg db 'Hello, World!', 0xA   ; The message and newline character
    len equ $ - msg               ; Calculate the length of the message
section .text
    ;global _start                 
	; Entry point for the program
	global main
;_start
main:
    ; System call to write (sys_write)
    mov eax, 4                    ; System call number for write (Linux x86)
    mov ebx, 1                    ; File descriptor (1 = stdout)
    mov ecx, msg                  ; Pointer to the message
    mov edx, len                  ; Length of the message
    int 0x80                      ; Call the kernel
    ; System call to exit (sys_exit)
    mov eax, 1                    ; System call number for exit
    xor ebx, ebx                  ; Exit status 0
    int 0x80                      ; Call the kernel
