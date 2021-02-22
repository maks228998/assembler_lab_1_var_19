#define _CRT_SECURE_NO_WARNINGS
#include "my_lib.h"
#include<locale.h>
#include<cstdlib>
int main() {
	setlocale(LC_ALL, "Russian");
	
	printf("Данная программа вычисляет значение выражения (A * X^2 + B * X * Y + C)* Y^2 + D * X + E * Y + A \n");
	printf("Введите число A: ");
	int number_a = input_int_number();
	printf("Введите число B: ");
	int number_b = input_int_number();
	printf("Введите число C: ");
	int number_c = input_int_number();
	printf("Введите число D: ");
	int number_d = input_int_number();
	printf("Введите число E: ");
	int number_e = input_int_number();
	printf("Введите число X: ");
	int number_x = input_int_number();
	printf("Введите число Y: ");
	int number_y = input_int_number();

	int check = ((number_a * number_x * number_x + number_b * number_x * number_y + number_c) * number_y * number_y + number_d * number_x + number_e * number_y + number_a);
	int assassembler = 0;
	_asm {
		mov eax, number_a
		imul eax, number_x
		imul eax, number_x
		mov ebx, eax
		mov eax, number_b
		imul eax, number_x
		imul eax, number_y
		add eax, number_c
		add ebx, eax
		imul ebx, number_y
		imul ebx, number_y
		mov eax, number_d
		imul eax, number_x
		add ebx, eax
		mov eax, number_e
		imul eax, number_y
		add ebx, eax
		add ebx, number_a
		mov assassembler, ebx
	}

	printf("Результат вычислений на языке ассемблера: %d\n", assassembler);
	printf("Результат вычислений на языке C: %d \n", check);
	system("pause");
}