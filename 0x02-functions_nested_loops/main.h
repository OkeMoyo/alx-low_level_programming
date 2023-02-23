#ifndef MAIN_H
#define MAIN_H
/* function declaration for _putchar */
int _putchar(char c);

/* function to print the lower case alphabet */
void print_alphabet(void);

/* print the alphabet 10 times in lowercase */
void print_alphabet_x10(void);

/* function that checks for lowercase characters */
int _islower(int c);

/* function that checks for alphabetic characters */
int _isalpha(int c);

/* function that prints the sign of a number */
int print_sign(int n);

/* function that computes the absolute value of an integer */
int _abs(int);

/* function that prints the last digit of a number */
int print_last_digit(int);

/* function that prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void jack_bauer(void);

/* function that prints the 9 times table */
void times_table(void);

/* function that adds two integers */
int add(int, int);

/* function that prints all natural numbers from n t0 98 */
void print_to_98(int n);

#endif
