# Intro to Revere Engineering
Content used for presentation on January 31st, 2019 at the OSU Security Club.

[Link to slides](https://docs.google.com/presentation/d/1uR4zAxgC31a79FtqSMHvD5Pvu3DGKi9sJkuYcCY4AP4/edit?usp=sharing)

# Assembly code

## `if_func()`
```asm
   0x08048456 <+0>:	push   %ebp
   0x08048457 <+1>:	mov    %esp,%ebp
   0x08048459 <+3>:	push   %ebx
   0x0804845a <+4>:	sub    $0x14,%esp
   0x0804845d <+7>:	call   0x80487bb <__x86.get_pc_thunk.ax>
   0x08048462 <+12>:	add    $0x1b9e,%eax
   0x08048467 <+17>:	movl   $0x5,-0xc(%ebp)
   0x0804846e <+24>:	cmpl   $0x7,-0xc(%ebp)
   0x08048472 <+28>:	jne    0x804848a <if_func+52>
   0x08048474 <+30>:	sub    $0xc,%esp
   0x08048477 <+33>:	lea    -0x17c0(%eax),%edx
   0x0804847d <+39>:	push   %edx
   0x0804847e <+40>:	mov    %eax,%ebx
   0x08048480 <+42>:	call   0x8048310 <puts@plt>
   0x08048485 <+47>:	add    $0x10,%esp
   0x08048488 <+50>:	jmp    0x80484ba <if_func+100>
   0x0804848a <+52>:	cmpl   $0x5,-0xc(%ebp)
   0x0804848e <+56>:	jg     0x80484a6 <if_func+80>
   0x08048490 <+58>:	sub    $0xc,%esp
   0x08048493 <+61>:	lea    -0x17b9(%eax),%edx
   0x08048499 <+67>:	push   %edx
   0x0804849a <+68>:	mov    %eax,%ebx
   0x0804849c <+70>:	call   0x8048310 <puts@plt>
   0x080484a1 <+75>:	add    $0x10,%esp
   0x080484a4 <+78>:	jmp    0x80484ba <if_func+100>
   0x080484a6 <+80>:	sub    $0xc,%esp
   0x080484a9 <+83>:	lea    -0x17b3(%eax),%edx
   0x080484af <+89>:	push   %edx
   0x080484b0 <+90>:	mov    %eax,%ebx
   0x080484b2 <+92>:	call   0x8048310 <puts@plt>
   0x080484b7 <+97>:	add    $0x10,%esp
   0x080484ba <+100>:	nop
   0x080484bb <+101>:	mov    -0x4(%ebp),%ebx
   0x080484be <+104>:	leave
   0x080484bf <+105>:	ret
```
