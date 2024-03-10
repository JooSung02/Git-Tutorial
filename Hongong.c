#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct cities
{
	char country[20];
	char city[20];
	int population;
} cities;

void Showinf(cities* cptr)
{
	printf("%d. %s in %s with a population of %d people.");
}

int main(void)
{
	cities arr[3];
	int i;
	printf("Input three cities \n");
	for (i = 0; i < 3; i++)
	{
		printf("Name >"); scanf("%s", arr[i].city);
		printf("Country >"); scanf("%s", arr[i].country);
		printf("Population >"); scanf("%d", arr[i].population);
	}

	for (i = 0; i < 3; i++)
	{
		Showinf(&arr[i]);
	}
	return 0;
}
