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

## [`while_func()`](https://github.com/osusec/intro-rev/blob/master/rev.c#L33)
```asm
   0x08048561 <+0>:	push   %ebp
   0x08048562 <+1>:	mov    %esp,%ebp
   0x08048564 <+3>:	push   %ebx
   0x08048565 <+4>:	sub    $0x14,%esp
   0x08048568 <+7>:	call   0x8048390 <__x86.get_pc_thunk.bx>
   0x0804856d <+12>:	add    $0x1a93,%ebx
   0x08048573 <+18>:	movl   $0x0,-0xc(%ebp)
   0x0804857a <+25>:	jmp    0x8048592 <while_func+49>
   0x0804857c <+27>:	sub    $0xc,%esp
   0x0804857f <+30>:	lea    -0x1779(%ebx),%eax
   0x08048585 <+36>:	push   %eax
   0x08048586 <+37>:	call   0x8048310 <puts@plt>
   0x0804858b <+42>:	add    $0x10,%esp
   0x0804858e <+45>:	addl   $0x1,-0xc(%ebp)
   0x08048592 <+49>:	cmpl   $0x6,-0xc(%ebp)
   0x08048596 <+53>:	jle    0x804857c <while_func+27>
   0x08048598 <+55>:	sub    $0xc,%esp
   0x0804859b <+58>:	lea    -0x1773(%ebx),%eax
   0x080485a1 <+64>:	push   %eax
   0x080485a2 <+65>:	call   0x8048310 <puts@plt>
   0x080485a7 <+70>:	add    $0x10,%esp
   0x080485aa <+73>:	nop
   0x080485ab <+74>:	mov    -0x4(%ebp),%ebx
   0x080485ae <+77>:	leave
   0x080485af <+78>:	ret
```

## [`do_while_func()`](https://github.com/osusec/intro-rev/blob/master/rev.c#L42)
```asm
   0x080485b0 <+0>:	push   %ebp
   0x080485b1 <+1>:	mov    %esp,%ebp
   0x080485b3 <+3>:	push   %ebx
   0x080485b4 <+4>:	sub    $0x14,%esp
   0x080485b7 <+7>:	call   0x8048390 <__x86.get_pc_thunk.bx>
   0x080485bc <+12>:	add    $0x1a44,%ebx
   0x080485c2 <+18>:	movl   $0x0,-0xc(%ebp)
   0x080485c9 <+25>:	sub    $0xc,%esp
   0x080485cc <+28>:	lea    -0x176c(%ebx),%eax
   0x080485d2 <+34>:	push   %eax
   0x080485d3 <+35>:	call   0x8048310 <puts@plt>
   0x080485d8 <+40>:	add    $0x10,%esp
   0x080485db <+43>:	addl   $0x1,-0xc(%ebp)
   0x080485df <+47>:	cmpl   $0x6,-0xc(%ebp)
   0x080485e3 <+51>:	jle    0x80485c9 <do_while_func+25>
   0x080485e5 <+53>:	sub    $0xc,%esp
   0x080485e8 <+56>:	lea    -0x1766(%ebx),%eax
   0x080485ee <+62>:	push   %eax
   0x080485ef <+63>:	call   0x8048310 <puts@plt>
   0x080485f4 <+68>:	add    $0x10,%esp
   0x080485f7 <+71>:	nop
   0x080485f8 <+72>:	mov    -0x4(%ebp),%ebx
   0x080485fb <+75>:	leave
   0x080485fc <+76>:	ret
```

## [`for_func()`](https://github.com/osusec/intro-rev/blob/master/rev.c#L51)
```asm
   0x080485fd <+0>:	push   %ebp
   0x080485fe <+1>:	mov    %esp,%ebp
   0x08048600 <+3>:	push   %ebx
   0x08048601 <+4>:	sub    $0x14,%esp
   0x08048604 <+7>:	call   0x8048390 <__x86.get_pc_thunk.bx>
   0x08048609 <+12>:	add    $0x19f7,%ebx
   0x0804860f <+18>:	movl   $0x0,-0xc(%ebp)
   0x08048616 <+25>:	jmp    0x804862e <for_func+49>
   0x08048618 <+27>:	sub    $0xc,%esp
   0x0804861b <+30>:	lea    -0x175f(%ebx),%eax
   0x08048621 <+36>:	push   %eax
   0x08048622 <+37>:	call   0x8048310 <puts@plt>
   0x08048627 <+42>:	add    $0x10,%esp
   0x0804862a <+45>:	addl   $0x1,-0xc(%ebp)
   0x0804862e <+49>:	cmpl   $0x9,-0xc(%ebp)
   0x08048632 <+53>:	jle    0x8048618 <for_func+27>
   0x08048634 <+55>:	sub    $0xc,%esp
   0x08048637 <+58>:	lea    -0x1758(%ebx),%eax
   0x0804863d <+64>:	push   %eax
   0x0804863e <+65>:	call   0x8048310 <puts@plt>
   0x08048643 <+70>:	add    $0x10,%esp
   0x08048646 <+73>:	nop
   0x08048647 <+74>:	mov    -0x4(%ebp),%ebx
   0x0804864a <+77>:	leave
   0x0804864b <+78>:	ret
```

## [`callee1()`](https://github.com/osusec/intro-rev/blob/master/rev.c#L59)
```asm
   0x0804864c <+0>:	push   %ebp
   0x0804864d <+1>:	mov    %esp,%ebp
   0x0804864f <+3>:	push   %ebx
   0x08048650 <+4>:	sub    $0x4,%esp
   0x08048653 <+7>:	call   0x80487bb <__x86.get_pc_thunk.ax>
   0x08048658 <+12>:	add    $0x19a8,%eax
   0x0804865d <+17>:	sub    $0x4,%esp
   0x08048660 <+20>:	pushl  0xc(%ebp)
   0x08048663 <+23>:	pushl  0x8(%ebp)
   0x08048666 <+26>:	lea    -0x1750(%eax),%edx
   0x0804866c <+32>:	push   %edx
   0x0804866d <+33>:	mov    %eax,%ebx
   0x0804866f <+35>:	call   0x8048300 <printf@plt>
   0x08048674 <+40>:	add    $0x10,%esp
   0x08048677 <+43>:	nop
   0x08048678 <+44>:	mov    -0x4(%ebp),%ebx
   0x0804867b <+47>:	leave
   0x0804867c <+48>:	ret
```

## [`callee2()`](https://github.com/osusec/intro-rev/blob/master/rev.c#L63)
```asm
   0x0804867d <+0>:	push   %ebp
   0x0804867e <+1>:	mov    %esp,%ebp
   0x08048680 <+3>:	push   %ebx
   0x08048681 <+4>:	sub    $0x4,%esp
   0x08048684 <+7>:	call   0x80487bb <__x86.get_pc_thunk.ax>
   0x08048689 <+12>:	add    $0x1977,%eax
   0x0804868e <+17>:	pushl  0x10(%ebp)
   0x08048691 <+20>:	pushl  0xc(%ebp)
   0x08048694 <+23>:	pushl  0x8(%ebp)
   0x08048697 <+26>:	lea    -0x173a(%eax),%edx
   0x0804869d <+32>:	push   %edx
   0x0804869e <+33>:	mov    %eax,%ebx
   0x080486a0 <+35>:	call   0x8048300 <printf@plt>
   0x080486a5 <+40>:	add    $0x10,%esp
   0x080486a8 <+43>:	mov    0xc(%ebp),%eax
   0x080486ab <+46>:	sub    0x8(%ebp),%eax
   0x080486ae <+49>:	mov    -0x4(%ebp),%ebx
   0x080486b1 <+52>:	leave
   0x080486b2 <+53>:	ret

```

## [`caller()`](https://github.com/osusec/intro-rev/blob/master/rev.c#L68)
```asm
   0x080486b3 <+0>:	push   %ebp
   0x080486b4 <+1>:	mov    %esp,%ebp
   0x080486b6 <+3>:	push   %ebx
   0x080486b7 <+4>:	sub    $0x14,%esp
   0x080486ba <+7>:	call   0x8048390 <__x86.get_pc_thunk.bx>
   0x080486bf <+12>:	add    $0x1941,%ebx
   0x080486c5 <+18>:	sub    $0x8,%esp
   0x080486c8 <+21>:	lea    -0x1721(%ebx),%eax
   0x080486ce <+27>:	push   %eax
   0x080486cf <+28>:	push   $0x5
   0x080486d1 <+30>:	call   0x804864c <callee1>
   0x080486d6 <+35>:	add    $0x10,%esp
   0x080486d9 <+38>:	sub    $0x4,%esp
   0x080486dc <+41>:	push   $0x4
   0x080486de <+43>:	push   $0x7
   0x080486e0 <+45>:	push   $0x9
   0x080486e2 <+47>:	call   0x804867d <callee2>
   0x080486e7 <+52>:	add    $0x10,%esp
   0x080486ea <+55>:	mov    %eax,-0xc(%ebp)
   0x080486ed <+58>:	sub    $0x8,%esp
   0x080486f0 <+61>:	pushl  -0xc(%ebp)
   0x080486f3 <+64>:	lea    -0x171c(%ebx),%eax
   0x080486f9 <+70>:	push   %eax
   0x080486fa <+71>:	call   0x8048300 <printf@plt>
   0x080486ff <+76>:	add    $0x10,%esp
   0x08048702 <+79>:	nop
   0x08048703 <+80>:	mov    -0x4(%ebp),%ebx
   0x08048706 <+83>:	leave
   0x08048707 <+84>:	ret
```
