#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

void printS(int* X, int* Y, int** F, int cardX, int cardY, int cardF)
{
	printf("X = { ");
	for (int i = 0; i < cardX; i++) printf("%d ", X[i]);
	printf("}\n");
	printf("Y = { ");
	for (int i = 0; i < cardY; i++) printf("%d ", Y[i]);
	printf("}\n");
	printf("F = { ");
	for (int i = 0; i < cardF; i++) printf("<%d, %d> ", F[i][0], F[i][1]);
	printf("}\n");
}

int main()
{
	int* X1, * Y1, * X2, * Y2; // ������ ���������, ����� � ������ �������� ����������� � �������� ������������
	int** F1, ** F2; // ������ �������, ����� � ������ �������� ������������
	int cardnumX1, cardnumY1, cardnumX2, cardnumY2, cardnumF1, cardnumF2, currXindex, currYindex, currFindex;
	printf("Vvedite moshnost' X1: ");
	scanf("%d", &cardnumX1); // ������������ ������ �������� ������� ����������� ������� ������������
	X1 = new int[cardnumX1];
	printf("\n");
	for (int i = 0; i < cardnumX1; i++)
	{
		printf("Vvedite %d element X1: ", i + 1);
		scanf("%d", &(X1[i])); // ������������ ������ �������� ������� ����������� ������� ������������
	}
	printf("\nVvedite moshnost' Y1: ");
	scanf("%d", &cardnumY1); // ������������ ������ �������� ������� �������� ������� ������������
	Y1 = new int[cardnumY1];
	printf("\n");
	for (int i = 0; i < cardnumY1; i++)
	{
		printf("Vvedite %d element Y1: ", i+1);
		scanf("%d", &(Y1[i])); // ������������ ������ �������� ������� �������� ������� ������������
	}
	printf("\nVvedite moschnost' F1: ");
	scanf("%d", &cardnumF1); // ������������ ������ �������� ������� ������� ������������
	F1 = new int* [cardnumF1];
	for (int i = 0; i < cardnumF1; i++)
	{
		again1:;
		int* temp = new int[2];
		printf("Vvedite %d paru F1: ", i+1);
		scanf("%d %d", &(temp[0]), &(temp[1])); // ������������ ������ ��������� ���� ������� ������� ������������
		for (int j = 0; j <= cardnumX1; j++)
		{
			if (j == cardnumX1)
			{
				printf("V X1 net elementa %d\n", temp[0]); // ���� � ������� ����������� ������� ������������ ��� ������� �������� �������� ���� - �������� �� ���� ������������ � ��������� ������ ����
				goto again1;
			}
			if (X1[j] == temp[0]) break;
		}
		for (int j = 0; j <= cardnumY1; j++)
		{
			if (j == cardnumY1)
			{
				printf("V Y1 net elementa %d\n", temp[1]); // ���� � ������� �������� ������� ������������ ��� ������� �������� �������� ���� - �������� �� ���� ������������ � ��������� ������ ����
				goto again1;
			}
			if (Y1[j] == temp[1]) break;
		}
		F1[i] = temp;
	}

	

	printf("\n\nVvedite moshnost' X2: ");
	scanf("%d", &cardnumX2); // ������������ ������ �������� ������� ����������� ������� ������������
	X2 = new int[cardnumX2];
	printf("\n");
	for (int i = 0; i < cardnumX2; i++)
	{
		printf("Vvedite %d element X2: ", i+1);
		scanf("%d", &(X2[i])); // ������������ ������ �������� ������� ����������� ������� ������������
	}
	printf("\nVvedite moshnost' Y2: ");
	scanf("%d", &cardnumY2); // ������������ ������ �������� ������� �������� ������� ������������
	Y2 = new int[cardnumY2];
	printf("\n");
	for (int i = 0; i < cardnumY2; i++)
	{
		printf("Vvedite %d element Y2: ", i+1);
		scanf("%d", &(Y2[i])); // ������������ ������ �������� ������� �������� ������� ������������
	}
	printf("\nVvedite moschnost' F2: ");
	scanf("%d", &cardnumF2); // ������������ ������ �������� ������� ������� ������������
	F2 = new int* [cardnumF2];
	for (int i = 0; i < cardnumF2; i++)
	{
		again2:;
		int* temp = new int[2];
		printf("Vvedite %d paru F2: ", i + 1);
		scanf("%d %d", &(temp[0]), &(temp[1])); // ������������ ������ ��������� ���� ������� ������� ������������
		for (int j = 0; j <= cardnumX2; j++)
		{
			if (j == cardnumX2)
			{
				printf("V X2 net elementa %d\n", temp[0]); // ���� � ������� ����������� ������� ������������ ��� ������� �������� �������� ���� - �������� �� ���� ������������ � ��������� ������ ����
				goto again2;
			}
			if (X2[j] == temp[0]) break;
		}
		for (int j = 0; j <= cardnumY2; j++)
		{
			if (j == cardnumY2)
			{
				printf("V Y2 net elementa %d\n", temp[1]); // ���� � ������� �������� ������� ������������ ��� ������� �������� �������� ���� - �������� �� ���� ������������ � ��������� ������ ����
				goto again2;
			}
			if (Y2[j] == temp[1]) break;
		}
		F2[i] = temp;
	}

	printf("-----------------------------------------------\n");

	printf("Sootvetstviye 1 (S1):\n"); // ������������ ��������� �� �����
	printS(X1, Y1, F1, cardnumX1, cardnumY1, cardnumF1);
	printf("-----------------------------------------------\n");
	printf("Sootvetstviye 2 (S2):\n");
	printS(X2, Y2, F2, cardnumX2, cardnumY2, cardnumF2);
	printf("-----------------------------------------------\n");

	int* X = new int[30];
	int* Y = new int[30];
	int** F = new int* [900];


	currXindex = 0;
	currYindex = 0;
	currFindex = 0;

	for (int j = 0; j < cardnumX2; j++) X[currXindex++] = X2[j]; // ��� �������� X2 ������������ �� ��������� X
	for (int i = 0; i < cardnumX1; i++)
	{
		for (int j = 0; j < cardnumX2; j++)
		{
			if (X1[i] == X2[j]) goto uniXnext;
		}
		X[currXindex++] = X1[i]; // ���� i-���� �������� X1 ��� � X2, �� ������������ �� ��������� X
		uniXnext:;
	}

	for (int j = 0; j < cardnumY2; j++) Y[currYindex++] = Y2[j]; // ��� �������� Y2 ������������ �� ��������� Y
	for (int i = 0; i < cardnumY1; i++)
	{
		for (int j = 0; j < cardnumY2; j++)
		{
			if (Y1[i] == Y2[j]) goto uniYnext;
		}
		Y[currYindex++] = Y1[i]; // ���� i-���� �������� Y1 ��� � Y2, �� ������������ �� ��������� Y
		uniYnext:;
	}

	for (int j = 0; j < cardnumF2; j++) F[currFindex++] = F2[j]; // ��� ���� F2 ������������ � F
	for (int i = 0; i < cardnumF1; i++)
	{
		for (int j = 0; j < cardnumF2; j++)
		{
			if (F1[i][0] == F2[j][0])
			{
				if (F1[i][1] == F2[j][1])
				{
					goto uniFnext;
				}
			}
		}
		F[currFindex++] = F1[i]; // ���� i-��� ���� F1 ��� � F2, ��� ������������ � F
		uniFnext:;
	}
	printf("Ob'edinenie:\n");
	printS(X, Y, F, currXindex, currYindex, currFindex); // ������������, ���������� ������������ ���� ��������, ��������� �� �����

	printf("-----------------------------------------------\n");

	currXindex = 0;
	currYindex = 0;
	currFindex = 0;

	for (int i = 0; i < cardnumX1; i++)
	{
		for (int j = 0; j < cardnumX2; j++)
		{
			if (X1[i] == X2[j])
			{
				X[currXindex++] = X1[i]; // ��� �������� X1, ������� ���� � X2, ������������ � X
				break;
			}
		}
	}

	for (int i = 0; i < cardnumY1; i++)
	{
		for (int j = 0; j < cardnumY2; j++)
		{
			if (Y1[i] == Y2[j])
			{
				Y[currYindex++] = Y1[i]; // ��� �������� Y1, ������� ���� � Y2, ������������ � Y
				break;
			}
		}
	}

	for (int i = 0; i < cardnumF1; i++)
	{
		for (int j = 0; j < cardnumF2; j++)
		{
			if (F1[i][0] == F2[j][0])
			{
				if (F1[i][1] == F2[j][1])
				{
					F[currFindex++] = F1[i]; // ��� ���� F1, ������� ���� � F2, ������������ � F
				}
			}
		}
	}

	printf("Peresecheniye:\n");
	printS(X, Y, F, currXindex, currYindex, currFindex); // ������������, ���������� ������������ ���� ��������, ��������� �� �����

	printf("-----------------------------------------------\n");

	currXindex = 0;
	currYindex = 0;
	currFindex = 0;

	for (int i = 0; i < cardnumX1; i++)
	{
		for (int j = 0; j < cardnumX2; j++)
		{
			if (X1[i] == X2[j]) goto diff1Xnext;
		}
		X[currXindex++] = X1[i]; // ��� �������� X1, �� ������������� X2, ������������ �� ��������� X
		diff1Xnext:;
	}

	for (int i = 0; i < cardnumY1; i++)
	{
		for (int j = 0; j < cardnumY2; j++)
		{
			if (Y1[i] == Y2[j]) goto diff1Ynext;
		}
		Y[currYindex++] = Y1[i]; // ��� �������� Y1, �� ������������� Y2, ������������ �� ��������� Y
		diff1Ynext:;
	}

	for (int i = 0; i < cardnumF1; i++)
	{
		for (int j = 0; j < cardnumF2; j++)
		{
			if (F1[i][0] == F2[j][0])
			{
				if (F1[i][1] == F2[j][1])
				{
					goto diff1Fnext;
				}
			}
		}
		F[currFindex++] = F1[i]; // ��� ���� F1, �� ������������� F2, ������������ �� ��������� F
		diff1Fnext:;
	}

	printf("Raznost' S1\\S2:\n");
	printS(X, Y, F, currXindex, currYindex, currFindex); // ������������, ���������� ��������� ������� � ������� ������������, ��������� �� �����
	printf("-----------------------------------------------\n");

	currXindex = 0;
	currYindex = 0;
	currFindex = 0;

	for (int i = 0; i < cardnumX2; i++)
	{
		for (int j = 0; j < cardnumX1; j++)
		{
			if (X2[i] == X1[j]) goto diff2Xnext;
		}
		X[currXindex++] = X2[i]; // ��� ���� X2, �� ������������� X1, ������������ �� ��������� X
		diff2Xnext:;
	}

	for (int i = 0; i < cardnumY2; i++)
	{
		for (int j = 0; j < cardnumY1; j++)
		{
			if (Y2[i] == Y1[j]) goto diff2Ynext;
		}
		Y[currYindex++] = Y2[i]; // ��� ���� Y2, �� ������������� Y1, ������������ �� ��������� Y
		diff2Ynext:;
	}

	for (int i = 0; i < cardnumF2; i++)
	{
		for (int j = 0; j < cardnumF1; j++)
		{
			if (F2[i][0] == F1[j][0])
			{
				if (F2[i][1] == F1[j][1])
				{
					goto diff2Fnext;
				}
			}
		}
		F[currFindex++] = F2[i]; // ��� ���� F2, �� ������������� F1, ������������ �� ��������� F
		diff2Fnext:;
	}

	printf("Raznost' S2\\S1:\n");
	printS(X, Y, F, currXindex, currYindex, currFindex); // ������������, ���������� ��������� ������� � ������� ������������, ��������� �� �����
	printf("-----------------------------------------------\n");

	currXindex = 0;
	currYindex = 0;
	currFindex = 0;

	for (int i = 0; i < cardnumX1; i++)
	{
		for (int j = 0; j < cardnumX2; j++)
		{
			if (X1[i] == X2[j]) goto symmdiff1Xnext;
		}
		X[currXindex++] = X1[i]; // ��� �������� X1, �� ������������� X2, ������������ �� ��������� X
		symmdiff1Xnext:;
	}

	for (int i = 0; i < cardnumY1; i++)
	{
		for (int j = 0; j < cardnumY2; j++)
		{
			if (Y1[i] == Y2[j]) goto symmdiff1Ynext;
		}
		Y[currYindex++] = Y1[i]; // ��� �������� Y1, �� ������������� Y2, ������������ �� ��������� Y
		symmdiff1Ynext:;
	}

	for (int i = 0; i < cardnumF1; i++)
	{
		for (int j = 0; j < cardnumF2; j++)
		{
			if (F1[i][0] == F2[j][0])
			{
				if (F1[i][1] == F2[j][1])
				{
					goto symmdiff1Fnext;
				}
			}
		}
		F[currFindex++] = F1[i]; // ��� ���� F1, �� ������������� F2, ������������ �� ��������� F
		symmdiff1Fnext:;
	}

	for (int i = 0; i < cardnumX2; i++)
	{
		for (int j = 0; j < cardnumX1; j++)
		{
			if (X1[i] == X2[j]) goto symmdiff2Xnext;
		}
		X[currXindex++] = X2[i]; // ��� ���� X2, �� ������������� X1, ������������ �� ��������� X
		symmdiff2Xnext:;
	}

	for (int i = 0; i < cardnumY2; i++)
	{
		for (int j = 0; j < cardnumY1; j++)
		{
			if (Y1[i] == Y2[j]) goto symmdiff2Ynext;
		}
		Y[currYindex++] = Y2[i]; // ��� ���� Y2, �� ������������� Y1, ������������ �� ��������� Y
		symmdiff2Ynext:;
	}

	for (int i = 0; i < cardnumF2; i++)
	{
		for (int j = 0; j < cardnumF1; j++)
		{
			if (F2[i][0] == F1[j][0])
			{
				if (F2[i][1] == F1[j][1])
				{
					goto symmdiff2Fnext;
				}
			}
		}
		F[currFindex++] = F2[i]; // ��� ���� F2, �� ������������� F1, ������������ �� ��������� F
		symmdiff2Fnext:;
	}

	printf("Simmetricheskaya raznost':\n");
	printS(X, Y, F, currXindex, currYindex, currFindex); // ������������, ���������� �������������� ��������� ���� ��������, ��������� �� �����
	printf("-----------------------------------------------\n");

	for (int i = 0; i < 900; i++) F[i] = new int[2];
	for (int i = 0; i < cardnumF1; i++)
	{
		F[i][0] = F1[i][1];
		F[i][1] = F1[i][0]; // � F ������������ ��� ���� F1 � ��������� �������� ���������
	}
	printf("Inversiya sootvetstviya 1:\n");
	printS(Y1, X1, F, cardnumY1, cardnumX1, cardnumF1); // ������������, ���������� ��������� ������� ������������, ��������� �� �����
	printf("-----------------------------------------------\n");

	for (int i = 0; i < cardnumF2; i++)
	{
		F[i][0] = F2[i][1];
		F[i][1] = F2[i][0]; // � F ������������ ��� ���� F2 � �������� �������� ���������
	}
	printf("Inversiya sootvetstviya 2:\n");
	printS(Y2, X2, F, cardnumY2, cardnumX2, cardnumF2); // ������������, ���������� ��������� ������� ������������, ��������� �� �����
	printf("-----------------------------------------------\n");

	currFindex = 0;
	for (int i = 0; i < cardnumF1; i++)
	{
		for (int j = 0; j < cardnumF2; j++)
		{
			if (F1[i][1] == F2[j][0])
			{
				int* temp = new int[2];
				temp[0] = F1[i][0];
				temp[1] = F2[j][1];
				for (int k = 0; k < currFindex; k++)
				{
					if (F[k][0] == temp[0])
					{
						if (F[k][1] == temp[1])
						{
							goto comp1next;
						}
					}
				}
				F[currFindex++] = temp;
			}
			comp1next:;
		}
	}
	printf("Kompositsiya S1 i S2:\n");
	printS(X1, Y2, F, cardnumX1, cardnumY2, currFindex);
	printf("-----------------------------------------------\n");

	currFindex = 0;
	for (int i = 0; i < cardnumF2; i++)
	{
		for (int j = 0; j < cardnumF1; j++)
		{
			if (F2[i][1] == F1[j][0])
			{
				int* temp = new int[2];
				temp[0] = F2[i][0];
				temp[1] = F1[j][1];
				for (int k = 0; k < currFindex; k++)
				{
					if (F[k][0] == temp[0])
					{
						if (F[k][1] == temp[1])
						{
							goto comp2next;
						}
					}
				}
				F[currFindex++] = temp;
			}
			comp2next:;
		}
	}
	printf("Kompositsiya S1 i S2:\n");
	printS(X2, Y1, F, cardnumX2, cardnumY1, currFindex);
	printf("-----------------------------------------------\n");

	int choice, tempcardnumX, tempcardnumY, tempcardnumF;
	printf("Kakoye sootvetstviye suzit' - 1 ili 2? ");
	scanf("%d", &choice); // ������������ �������� ������������, ������� ����� ������
	if (choice == 1)
	{
		X = X1;
		Y = Y1;
		F = F1;
		tempcardnumX = cardnumX1;
		tempcardnumY = cardnumY1;
		tempcardnumF = cardnumF1; // ���� ������������ ������ ������������ 1 - �������� � ��� �����������
	}
	else
	{
		X = X2;
		Y = Y2;
		F = F2;
		tempcardnumX = cardnumX2;
		tempcardnumY = cardnumY2;
		tempcardnumF = cardnumF2; // ���� ������������ ������ ������������ 2 - �������� � ��� �����������
	}
	int cardnumA;
	cardnumAagain:;
	printf("Vvedite moshcnost' mnozhestva, na kotoroe nuzhno suzit' sootvetstviye %d: ", choice);
	scanf("%d", &cardnumA); // ������������ ������ �������� ���������, �� ������� ����� ����������� ������� ���������� ������������
	if (cardnumA > tempcardnumX)
	{
		printf("Moschnost' mnozhestva suzheniya ne mozhet bit' bolshe moschnosti ishodnoy oblasti otpravleniya\n");
		goto cardnumAagain;
	}
	int* A = new int[cardnumA];
	int** G = new int* [tempcardnumF];
	int currGindex = 0;
	for (int i = 0; i < cardnumA; i++)
	{
		suzagain:;
		printf("Vvedite %d element mnozhestva, na kotoroe nuzhno suzit' sootvetstviye: ", i+1);
		scanf("%d", &(A[i])); // ������������ ������ i-��� ������� ��������� �
		for (int j = 0; j <= tempcardnumX; j++)
		{
			if (j == tempcardnumX)
			{
				printf("Vo mnozhestve X%d net elementa %d\n", choice, A[i]); // ���� ��������� �������� ��� � ������� ����������� ���������� ������������ - ��������� ������ �������
				goto suzagain;
			}
			if (A[i] == X[j]) break;
		}
	}
	for (int i = 0; i < tempcardnumF; i++)
	{
		for (int j = 0; j < cardnumA; j++)
		{
			if (F[i][0] == A[j])
			{
				G[currGindex++] = F[i]; // � ������ G ������������ ��� ���� ������� ���������� ������������, ������ �������� ������� �������� ���������� ��������� �
				break;
			}
		}
	}
	printf("Suzhenie sootvetstviya %d na vvedennoye mnozhestvo:\n", choice);
	printS(X, Y, G, tempcardnumX, tempcardnumY, currGindex); // ������������, ���������� �������� ���������� ������������� ������������ �� �������� �� ���������, ��������� �� �����
	printf("-----------------------------------------------\n");

	printf("Kakoye sootvetstviye prodolzhit' - 1 ili 2? ");
	scanf("%d", &choice); // ������������ �������� ������������, ������� ����� ����������
	if (choice == 1)
	{
		X = X1;
		Y = Y1;
		F = F1;
		tempcardnumX = cardnumX1;
		tempcardnumY = cardnumY1;
		tempcardnumF = cardnumF1; // ���� ������������ ������ ������������ 1 - �������� � ��� �����������
	}
	else
	{
		X = X2;
		Y = Y2;
		F = F2;
		tempcardnumX = cardnumX2;
		tempcardnumY = cardnumY2;
		tempcardnumF = cardnumF2; // ���� ������������ ������ ������������ 2 - �������� � ��� �����������
	}
	int cardnumG;
	cardnumGagain:;
	printf("Vvedite moshcnost' novogo grafika sootvetstviya: ");
	scanf("%d", &cardnumG);
	G = new int* [cardnumG];
	if (cardnumG < tempcardnumF)
	{
		printf("Moshcnost' novogo grafika ne mozhet bit' men'she moshcnosti ishodnogo grafika\n");
		goto cardnumGagain;
	}
	currGindex = 0;
	for (int i = 0; i < cardnumG; i++)
	{
		prodagain:;
		printf("Vvedite %d paru novogo grafika sootvetstviya: ", i+1);
		int* temp = new int[2];
		scanf("%d %d", &(temp[0]), &(temp[1])); // ������������ ������ i-��� ���� ������� G
		for (int j = 0; j <= tempcardnumX; j++)
		{
			if (j == tempcardnumX)
			{
				printf("Vo mnozhestve X%d net elementa %d\n", choice, temp[0]); // ���� ������� �������� �������� ���� ��� � ������� ����������� ������������ - ��������� ������ ����
				goto prodagain;
			}
			if (X[j] == temp[0]) break;
		}
		for (int j = 0; j <= tempcardnumY; j++)
		{
			if (j == tempcardnumY)
			{
				printf("Vo mnozhestve Y%d net elementa %d\n", choice, temp[1]); // ���� ������� �������� �������� ���� ��� � ������� �������� ������������ - ��������� ������ ����
				goto prodagain;
			}
			if (Y[j] == temp[1]) break;
		}
		for (int j = 0; j <= currGindex; j++)
		{
			if (j == currGindex)
			{
				G[currGindex++] = temp;
				break;
			}
			if (temp[0] == G[j][0])
			{
				if (temp[1] == G[j][1])
				{
					printf("Takaya para uzhe est' v grafike G\n"); // ���� �������� ���� ��� ���� � ������� G - ��������� ������
					goto prodagain;
				}
			}
		}
	}
	for (int i = 0; i < tempcardnumF; i++)
	{
		for (int j = 0; j <= cardnumG; j++)
		{
			if (j == cardnumG)
			{
				printf("Vvedinniy grafik ne yavlyaetsa podmnozhestvom ishodnogo grafika sootvetstviya\n");
				goto cardnumGagain;
			}
			if (F[i][0] == G[j][0])
			{
				if (F[i][1] == G[j][1]) break;
			}
		}
	}
	printf("Prodolzheniye sootvetstviya %d na vvedenniy grafik:\n", choice);
	printS(X, Y, G, tempcardnumX, tempcardnumY, currGindex); // ������������, ���������� ������������ ���������� ������������� ������������ �� �������� �� ������, ��������� �� �����
	printf("-----------------------------------------------\n");
}