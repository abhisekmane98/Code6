#include <stdio.h>
int main()
{
	#if INTPTR_MAX == INT64_MAX
		printf("a");
	#elif INTPTR_MAX == INT32_MAX
		printf("b");
	#else
	#error Unknown pointer size or missing size macros!
	#endif
}

