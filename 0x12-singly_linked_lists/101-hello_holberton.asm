section .data
    hello db 'Hello, Holberton', 10, 0

section .text
    global main
    extern printf

main:
    ; Prepare arguments for printf
    mov rdi, hello  ; Format string
    xor rax, rax    ; Indicate no floating point arguments

    ; Call printf
    call printf

    ; Return from main
    mov eax, 0x60   ; System call number (sys_exit)
    xor edi, edi    ; Exit code
    syscall         ; Call kernel
