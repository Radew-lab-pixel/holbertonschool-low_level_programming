#include "main.h"

/**
 * jack_bauer - print the last digit  of the input n
 * @void : void operand input
 * Return: last digit  of input n as int r
 * Example:
 * jack_bauer() -> 00:00 .. 23:59
 */

void jack_bauer(void)
{
	int h1, h0;
	int m1, m0;

	int h_count;
	int m_count;

	for (h_count = 0; h_count <= 23; h_count++)
	{
		h1 = h_count / 10;
		h0 = h_count % 10;
		m_count = 0;

		while (m_count <= 59)
		{

			_putchar(h1 + '0');
			_putchar(h0 + '0');
			_putchar(':');
			m1 = m_count / 10;
			m0 = m_count % 10;
			_putchar(m1 + '0');
			_putchar(m0 + '0');
			_putchar('\n');
			m_count++;
		}
	}
}
