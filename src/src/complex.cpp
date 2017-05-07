#include <stdio.h>
#include "../inc/complex.h"
COMPLEX_API complex add_complex(complex x, complex y)
{
	complex z = { 0, 0 };
	z.real_section = x.real_section + y.real_section;
	z.imag_section = x.real_section + y.imag_section;
	return z;
}
COMPLEX_API complex minus_complex(complex x, complex y)
{
	complex z = { 0, 0 };
	z.real_section = x.real_section - y.real_section;
	z.imag_section = x.imag_section - y.imag_section;
	return z;
}
COMPLEX_API complex multi_complex(complex x, complex y)
{
	complex z = { 0, 0 };
	z.real_section = x.real_section * y.real_section - +x.imag_section * y.imag_section;
	z.imag_section = x.real_section * y.imag_section + x.imag_section * y.real_section;
	return z;
}
COMPLEX_API complex div_complex(complex x, complex y)
{
	complex z = { 0, 0 };
	complex y_conj = { 0, 0 };
	int square_absy = 0;
	y_conj.real_section = y.real_section;
	y_conj.imag_section = -y.imag_section;
	square_absy = y.real_section * y.real_section + y.imag_section * y.imag_section;
	z = multi_complex(x, y_conj);
	z.real_section = z.real_section / square_absy;
	z.imag_section = z.imag_section / square_absy;
	return z;
}
COMPLEX_API void print_complex(complex x)
{
	printf("real_section: %d  imag_section: %d\n", x.real_section, x.imag_section);
	return;
}
