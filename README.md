# Intro to Revere Engineering
Content used for presentation on January 31st, 2019 at the OSU Security Club.

[Link to slides](https://docs.google.com/presentation/d/1uR4zAxgC31a79FtqSMHvD5Pvu3DGKi9sJkuYcCY4AP4/edit?usp=sharing)

# Assembly code

## [`if_func()`](https://github.com/osusec/intro-rev/blob/master/rev.c#L3)
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

## [`switch_func()`](https://github.com/osusec/intro-rev/blob/master/rev.c#L14)
```asm
   0x080484c0 <+0>:	push   %ebp
   0x080484c1 <+1>:	mov    %esp,%ebp
   0x080484c3 <+3>:	push   %ebx
   0x080484c4 <+4>:	sub    $0x14,%esp
   0x080484c7 <+7>:	call   0x8048390 <__x86.get_pc_thunk.bx>
   0x080484cc <+12>:	add    $0x1b34,%ebx
   0x080484d2 <+18>:	movl   $0x8,-0xc(%ebp)
   0x080484d9 <+25>:	mov    -0xc(%ebp),%eax
   0x080484dc <+28>:	cmp    $0x7,%eax
   0x080484df <+31>:	je     0x804850f <switch_func+79>
   0x080484e1 <+33>:	cmp    $0x7,%eax
   0x080484e4 <+36>:	jg     0x80484ed <switch_func+45>
   0x080484e6 <+38>:	cmp    $0x5,%eax
   0x080484e9 <+41>:	je     0x80484fb <switch_func+59>
   0x080484eb <+43>:	jmp    0x8048549 <switch_func+137>
   0x080484ed <+45>:	cmp    $0x8,%eax
   0x080484f0 <+48>:	je     0x8048523 <switch_func+99>
   0x080484f2 <+50>:	cmp    $0x539,%eax
   0x080484f7 <+55>:	je     0x8048537 <switch_func+119>
   0x080484f9 <+57>:	jmp    0x8048549 <switch_func+137>
   0x080484fb <+59>:	sub    $0xc,%esp
   0x080484fe <+62>:	lea    -0x17ac(%ebx),%eax
   0x08048504 <+68>:	push   %eax
   0x08048505 <+69>:	call   0x8048310 <puts@plt>
   0x0804850a <+74>:	add    $0x10,%esp
   0x0804850d <+77>:	jmp    0x804855b <switch_func+155>
   0x0804850f <+79>:	sub    $0xc,%esp
   0x08048512 <+82>:	lea    -0x17a5(%ebx),%eax
   0x08048518 <+88>:	push   %eax
   0x08048519 <+89>:	call   0x8048310 <puts@plt>
   0x0804851e <+94>:	add    $0x10,%esp
   0x08048521 <+97>:	jmp    0x804855b <switch_func+155>
   0x08048523 <+99>:	sub    $0xc,%esp
   0x08048526 <+102>:	lea    -0x179e(%ebx),%eax
   0x0804852c <+108>:	push   %eax
   0x0804852d <+109>:	call   0x8048310 <puts@plt>
   0x08048532 <+114>:	add    $0x10,%esp
   0x08048535 <+117>:	jmp    0x804855b <switch_func+155>
   0x08048537 <+119>:	sub    $0xc,%esp
   0x0804853a <+122>:	lea    -0x1797(%ebx),%eax
   0x08048540 <+128>:	push   %eax
   0x08048541 <+129>:	call   0x8048310 <puts@plt>
   0x08048546 <+134>:	add    $0x10,%esp
   0x08048549 <+137>:	sub    $0xc,%esp
   0x0804854c <+140>:	lea    -0x1780(%ebx),%eax
   0x08048552 <+146>:	push   %eax
   0x08048553 <+147>:	call   0x8048310 <puts@plt>
   0x08048558 <+152>:	add    $0x10,%esp
   0x0804855b <+155>:	nop
   0x0804855c <+156>:	mov    -0x4(%ebp),%ebx
   0x0804855f <+159>:	leave
   0x08048560 <+160>:	ret
```
