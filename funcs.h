#ifndef __FUNCS__H
#define __FUNCS__H

enum E_STYLE
{
	E_START,
	E_END
};

int		get_number();
int 	factorial(int n);
void 	print_current_time();
void	decorate(E_STYLE style);

#endif	//__FUNCS__H
