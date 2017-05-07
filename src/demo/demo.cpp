#include <stdio.h>
#include "../inc/complex.h"
int main(int argc, char *argv)
{
	complex x = { 1, 1 };
	complex y = { 2, 1 };
	complex sumxy, minusxy,multixy, divxy ;

	sumxy = add_complex(x, y);
	minusxy = minus_complex(x, y);
	multixy = multi_complex(x, y);
	if (y.real_section == 0 && y.imag_section == 0)
	{
		printf("div error,modulus of denominator can't be zero!\n");
		return -1;
	}
	else
	{
		divxy = div_complex(x, y);
	}
	print_complex(sumxy);
	print_complex(minusxy);
	print_complex(multixy);
	print_complex(divxy);
	return 0;
}