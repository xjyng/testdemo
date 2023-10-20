#ifndef __TEST__H__
#define __TEST__H__

int input(int a, int b, int x) {
	if (a > 1 && b == 0) 
		x = x / a;
	if (a == 2 || x > 1) 
		x = x + 1;
	return x;
}

#endif // !__TEST__H__


