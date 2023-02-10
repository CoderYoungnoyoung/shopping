#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <conio.h>

struct Product
{
	char  title[50];
	char  subject[100];
	int   indexId;
	int   count;
	int   price;

} Product;

struct Product ProductsList[5];

void initProductsList()
{
	
	struct Product productA;

	/* productA 详述 */
	strcpy(productA.title, "lotte");
	strcpy(productA.subject, "sub lotte");
	productA.indexId = 11;
	productA.count = 10;
	productA.price = 2;
	

	ProductsList[0] = productA;

	struct Product productB;
	/* productB 详述 */
	strcpy(productB.title,"white coffee");
	strcpy(productB.subject, "sub white cpffee");
	productB.indexId = 22;
	productB.count = 10;
	productB.price = 3;

	ProductsList[1] = productB;


	struct Product productC;
	/* productC 详述 */
	strcpy(productC.title, "cappuccino");
	strcpy(productC.subject, "sub cappuccino");
	productC.indexId = 33;
	productC.count = 10;
	productC.price = 5;

	ProductsList[2] = productC;
	
	struct Product productD;
	/* productD 详述 */
	strcpy(productD.title, "mocha");
	strcpy(productD.subject, "sub mocha");
	productD.indexId = 44;
	productD.count = 10;
	productD.price = 4;

	ProductsList[3] = productD;
	
	struct Product productE;
	/* productE 详述 */
	strcpy(productE.title, "black coffee");
	strcpy(productE.subject, "sub black coffee");
	productE.indexId = 55;
	productE.count = 10;
	productE.price = 6;

	ProductsList[4] = productE;
}

void displayProductsList()
{
	int length = 0;
	length = sizeof(ProductsList) / sizeof(Product);

	for (int i = 0; i < length; i++)
	{
		printf("Product[%d] :name %s | count %d | price %d RM\n", i, ProductsList[i].title,ProductsList[i].count, ProductsList[i].price);
	}
}

void bug()
{
	/*
#include <stdio.h>
	int s, total = 0, shen, a[10] = { 0 }, * p = a;
	int b[10] = { 1,1,1,2,2,3,3,3,4,4 };
	scanf("%d", &s);
	while (s != -1)
	{
		total += s;
		scanf("%d", &s);
	}
	shen = total;
	scanf("%d", &s);
	while (s != -1 && shen >= 0)
	{
		(*(p + s - 1))++;
		shen -= b[s - 1];
		scanf("%d", &s);
	}
	if (shen >= 0)
	{
		printf("Total:%dRM,change:%dRM\n", total, shen);
		for (s = 1; s <= 10; s++)
		{
			if (*(p + s - 1) > 0)
			{
				switch (s)
				{
				case 1:
					printf("latte:%d;", *(p + s - 1));
					break;
				case 2:
					printf("white coffee:%d;", *(p + s - 1));
					break;
				case 3:
					printf("cappuccino:%d;", *(p + s - 1));
					break;
				case 4:
					printf("mocha:%d;", *(p + s - 1));
					break;
				case 5:
					printf("black coffee:%d;", *(p + s - 1));
					break;
				}
			}
		}
	}
	else printf("Insufficient money");
	*/
}

int isResultfulProductIdx(int idx)
{
	return 1;
}

/*int checkNumber(char tmpstr[])
{
	char [5];
	strcpy (str);

	printf("Please enter a product's code :");
	//scanf("%s %d", str, &i);

	int i, len, n = 0;
	gets(str);
	for (i = 0, len = strlen(str); i < len; i++) {
		if (isdigit(str[i])) {
			n++;
		} 
	}
	if (n == 0) {
		return 0;
	}
	
	return 1;
}*/
int main()
{
	/*INT PRODUCT LIST*/
	initProductsList();

	/*DISPLAY PRODUCT LIST*/
	displayProductsList();

	while (1)
	{
		switch (_getch())
		{
		case 'w':
		case 'W':
		{
			printf("w");
			break;
		}
		default: {
			//checkNumber(_getch());
			//printf("Please enter a product's code\n");
		}
		}
	}
	return 0;
}

