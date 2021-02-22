#define _CRT_SECURE_NO_WARNINGS
#include "my_lib.h"

int int_rand_min_max(const int min, const int max)
{
	const double rand_0_1 = rand() / (RAND_MAX + 1.0);
	int n = max - min + 1;
	const int res = min + (int)(rand_0_1 * n);
	return res;
}

int input_int_number() {
	int n_is_not_number = 0;
	int n = 0;

	do {
		int count_vars_scanf = scanf("%d", &n);
		getchar();

		n_is_not_number = (count_vars_scanf != 1);

		if (n_is_not_number) {
			printf("Input error: not a number entered\n");
		}
		else {}

	} while (n_is_not_number);
	return n;

}

int get_int_number_on_positive() {
	int n = 0;
	int n_is_negative = 0;

	do {
		n = input_int_number();

		n_is_negative = (n < 0.0);
		if (n_is_negative) {
			printf("Input error: not a correct number entered\n");
		}
		else {}

	} while (n_is_negative);
	return n;

}

int get_int_number_on_1_or_0() {
	int n = 0;
	int n_is_1_or_0 = 0;

	do {
		n_is_1_or_0 = 0;
		n = get_int_number_on_positive();

		if (n == 1) {
		}
		else {
			if (n == 0) {
			}
			else {
				printf("Input error: this is not correct number\n");
				n_is_1_or_0 = 1;
			}
		}

	} while (n_is_1_or_0);
	return n;
}

int get_int_number_than_greater_1() {
	int n = 0;
	int n_is_one_or_less = 0;

	do {
		n = input_int_number();

		n_is_one_or_less = (n < 1);
		if (n_is_one_or_less) {
			printf("Input error: not a correct number entered\n");
		}
		else {}

	} while (n_is_one_or_less);
	return n;
}

double input_double_number() {
	int n_is_not_number = 0;
	double n = 0;

	do {
		int count_vars_scanf = scanf("%lf", &n);
		getchar();

		n_is_not_number = (count_vars_scanf != 1);

		if (n_is_not_number) {
			printf("Input error: not a number entered\n");
		}
		else {}

	} while (n_is_not_number);
	return n;
}

double double_rand_min_max(const double min, const double max)
{
	const double rand_0_1 = rand() / (RAND_MAX + 1.0);
	const double res = rand_0_1 * (max - min) + min;
	return res;
	}

double get_double_number_than_greater_1() {
	double n = 0;
	int n_is_one_or_less = 1;

	do {
		n = input_double_number();

		n_is_one_or_less = (n < 1);
		if (n_is_one_or_less) {
			printf("Input error: not a correct number entered\n");
		}
		else {}

	} while (n_is_one_or_less);
	return n;
}

double get_double_number_on_positive() {
	double n = 0;
	int n_is_negative = 0;
	int n_is_zero = 0;
	int n_is_negative_or_zero = 1;
	do {
		n = input_double_number();

		n_is_negative = (n < 0.0);
		if (n_is_negative) {
			printf("Input error: not a correct number entered\n");
		}
		else {
			n_is_zero = (n == 0);
			if (n_is_zero) {
				printf("Input error: not a correct number entered\n");
			}
			else {
				n_is_negative_or_zero = 0;
			}
		}

	} while (n_is_negative_or_zero);
	return n;

}