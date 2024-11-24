section .data
    hello db 'Hello, World', 0xa ; The string to print

section .text
    global main                    ; Entry point for the program

main:
    ; Call the Windows API function to write to the console
    mov rax, 1                     ; Specify sys_write (1 for console)
    mov rdi, 1                     ; File descriptor 1 is stdout
    mov rsi, hello                 ; Pointer to the string
    mov rdx, 13                    ; Length of the string
    syscall                        ; Invoke the system call

    ; Exit the program
    mov rax, 60                    ; Specify sys_exit (60 for exit)
    xor rdi, rdi                   ; Return 0
    syscall                        ; Invoke the system call
