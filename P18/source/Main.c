#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void)
{
	char string1[60] = "Welcome";
	char string2[60];

	int len;

	for (int i = 0; i <= 59; i++)
	{
		string2[i] = string1[i];
	}
	printf("string2=%s\n", string2);

	len = strlen(string2);
	printf("¦r¦êªø«×¬°%d\n", len);

	system("pause");
	return 0;
}