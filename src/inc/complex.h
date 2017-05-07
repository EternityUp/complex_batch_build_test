#ifndef  _COMPLEX_H
#define _COMPLEX_H

#ifdef __cplusplus
extern "C" {
#endif   /*__cplusplus*/
#ifdef _WIN32
#ifndef COMPLEX_LIB_EXPORTS
#ifdef COMPLEX_EXPORTS
#define COMPLEX_API  __declspec(dllexport)
#else
#define COMPLEX_API __declspec(dllimport)
#endif
#else
#define COMPLEX_API
#endif
#else
#define COMPLEX_API
#endif

	typedef int Item;
	typedef struct
	{
		Item real_section;
		Item imag_section;
	}complex;

	COMPLEX_API complex add_complex(complex x, complex y);
	COMPLEX_API complex minus_complex(complex x, complex y);
	COMPLEX_API complex multi_complex(complex x, complex y);
	COMPLEX_API complex div_complex(complex x, complex y);
	COMPLEX_API void print_complex(complex x);
#ifdef __cplusplus
}
#endif /*__cplusplus*/

#endif