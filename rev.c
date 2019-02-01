#include <stdio.h>

void if_func() {
	int a = 5;
	if (a == 7) {
		puts("a == 7");
	} else if (a < 6) {
		puts("a < 6");
	} else {
		puts("a == ?");
	}
}

void switch_func() {
	int k = 8;
	switch (k) {
		case 5:
			puts("k == 5");
			break;
		case 7:
			puts("k == 7");
			break;
		case 8:
			puts("k == 8");
			break;
		case 1337:
			puts("k == 1337, fallthrough");
		default:
			puts("k == ?");
	}
}

void while_func() {
	int b = 0;
	while (b < 7) {
		puts("b < 7");
		b++;
	}
	puts("b == 7");
}

void do_while_func() {
	int c = 0;
	do {
		puts("c < 7");
		c++;
	} while (c < 7);
	puts("c == 7");
}

void for_func() {
	int i;
	for (i = 0; i < 10; i++) {
		puts("i < 10");
	}
	puts("i == 10");
}

void callee1(int d, char *e) {
	printf("callee1: d=%d\te=\"%s\"\n", d, e);
}

int callee2(int f, int g, int h) {
	printf("callee2: f=%d\tg=%d\th=%d\n", f, g, h);
	return g - f;
}

void caller() {
	callee1(5, "asdf");
	int j = callee2(9, 7, 4);
	printf("callee2 returned %d\n", j);
}

int main() {
	puts("[*] if");
	if_func();

	puts("[*] switch");
	switch_func();

	puts("[*] while");
	while_func();

	puts("[*] do_while");
	do_while_func();

	puts("[*] for");
	for_func();

	puts("[*] function calls");
	caller();
	
	return 0;
}
