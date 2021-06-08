#include <stdio.h>

int main()
{
	char guys[10][20] = {"Talkys\n", "Walison\n", "Aleph\n", "Peuphy\n", "Márcio\n"};
	int total=sizeof(guys)/sizeof(guys[0]);
	for (int n = 0 ; n < total; n++)
	{
		printf("%s", guys[n]);
	}
}
