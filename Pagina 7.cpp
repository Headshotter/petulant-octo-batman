#include <cstdio>
#include <cstdlib>
#include <iostream>

//Exerc�cios da p�gina 7, do 4 ao 10
main()
{
	int ex;
	start:
	printf("Digite o n\xA3mero do exercicio que deseja visualizar: ");
	scanf("%d", &ex);
	if(ex==4) //Exerc�cio 4
		{
			printf("\n1 2 3");
			printf("\n4");
			printf("\n5");
			printf("\n6\t7\t8\n\n");
			goto start;
		}
	if (ex==5) //Exerc�cio 5
		{
			printf("\n25%%");
			printf("\n\'A\'");
			printf("\n\"Oba\"\n\n");
			goto start;
		}
	if (ex==6) //Exerc�cio 6
		{
			printf("\n    X");
			printf("\n   XX");
			printf("\n  XXX");
			printf("\n XXXX");
			printf("\nXXXXX\n\n");
			goto start;
		}
	if (ex==7) //Exerc�cio 7
		{
			printf("\n   *");
			printf("\n  * *");
			printf("\n *   *");
			printf("\n*     *\n\n");
			goto start;
		}
	if (ex==8) //Exerc�cio 8
		{
			printf("\n1\t2\t3");
			printf("\n4\t5\t6");
			printf("\n7\t8\t9\n\n");
			goto start;
		}
	if (ex==9) //Exerc�cio 9
		{
			printf("\n* * * * * * *");
			printf("\n* * * * * * *");
			printf("\n* * * * * * *");
			printf("\n* * * * * * *");
			printf("\n* * * * * * *");
			printf("\n* * * * * * *");
			printf("\n* * * * * * *");
			printf("\n* * * * * * *\n\n");
			goto start;
		}
	if (ex==10) //Exerc�cio 10
		{
			printf("\n\xC9\xCD\xCD\xCD\xCB\xCD\xCD\xCD\xBB");
			printf("\n\xBA 1 \xBA 2 \xBA");
			printf("\n\xCC\xCD\xCD\xCD\xCE\xCD\xCD\xCD\xB9");
			printf("\n\xBA 3 \xBA 4 \xBA");
			printf("\n\xC8\xCD\xCD\xCD\xCA\xCD\xCD\xCD\xBC\n\n");
			goto start;
		}
	if (ex>10)
		{
			printf("\nNao \x82 um exercicio da p\xA0gina 7\n\n");
			//system("pause");
			goto start;
		}
	if (ex<4)
		{
			printf("\nNao \x82 um exercicio da p\xA0gina 7\n\n");
			//system("pause");
			goto start;
		}
}
