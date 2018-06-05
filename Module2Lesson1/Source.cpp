#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <math.h>
#include <Windows.h>

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 15);

	int n = 0;

	start:
	printf("������� ����� �������: ");
	scanf("%d", &n);

	if (n==1)
	{
		//1.	������ � ���������� ��� �����. ����������, ��� ������, ����� ��������� ��� ������� ����� ���� �����. ����� ������� � ���� ���������.
		int a = 0, b = 0;
		a = 1 + rand() % 1000;
		b = 1 + rand() % 1000;

		int s1 = 0, s2 = 0;
		s1 = pow(a, 2) + pow(b, 2);
		s2 = pow(a + b, 2);

		(s1>s2) ? printf("������ ��������� ������ �������� ����� ����� = %d\n", s1) : printf("������� ����� ����� ������ ����� ��������� = %d\n", s2);
	}
	else if (n==2)
	{
		//2.	���������� �������� � �������� �� ����, ���� ���� �� 2 �� 5 ���, �������� ���������� 2%,  ���� ���� �� 5 �� 10 ��� - 5%. 
		//������ � ���������� �������� � ����, ������� �������� � ����� � �������.
		int salary = 0, years = 0;
		printf("������� ����� ��������: ");
		scanf("%d", &salary);

		printf("������� ����� ��� �����: ");
		scanf("%d", &years);

		float add = 0;

		if (years>2 && years<=5)
		{
			add = (2 * salary) / 100;
			printf("����� �������� ���������� %f\n", add);
		}
		else if (years>5 && years<=10)
		{
			add = (5 * salary) / 100;
			printf("����� �������� ���������� %f\n", add);
		}
	}
	else if (n==3)
	{
		//3.	������ � ���������� ��� �����, ������������� �������� � �������, � ������������� �������� ��� ���������.
		int a = 0, b = 0, c = 0;
		a = -1000 + rand() % 1000;
		b = -1000 + rand() % 1000;
		c = -1000 + rand() % 1000;

		(a >= 0) ? printf("a2 = %d\n", pow(a, 2)) : printf("a = %d\n", a);
		(b >= 0) ? printf("b2 = %d\n", pow(b, 2)) : printf("b = %d\n", b);
		(c >= 0) ? printf("c2 = %d\n", pow(c, 2)) : printf("c = %d\n", c);
	}
	else if (n==4)
	{
		//4.	���� ����������� �����. ����������, �������� �� ��� ������, ��� ������������ ������ 3.
		int a = 0;
		a = 1 + rand() % 1000;

		if (a%2==0 || a%10==3)
		{
			printf("����� ������ ��� ������������ �� 3: %d\n", a);
		}
		else
		{
			printf("����� �� �������� ������ ��� �� ������������ �� 3: %d\n", a);			
		}
	}
	else if (n==5)
	{
		//5.	���������� ����� ����������� ������ ��������� �� ��������, ���� ������� ��������� �� ������� ��� 6% ������� ��� �� ��� ��� 8% �������. 
		//� ���������� ������ ����� ������ � ���� ��������
		float sum = 0, time=0;
		printf("������� ����� ��������: ");
		scanf("%f", &sum);

		printf("������� ���� �������� (���.): ");
		scanf("%f", &time);

		float add = 0;

		if (time==6)
		{
			add = (sum*(0.06/12))*time;
			printf("����� ����������� ������ ��������� �� ��������: %f\n", add);
		}
		else if (time==12)
		{
			add = (sum*(0.08/12))*time;
			printf("����� ����������� ������ ��������� �� ��������: %f\n", add);
		}
		else
		{
			printf("������ ����������� �� ��������� ���\n");
		}
	}
	else if (n==6)
	{
		//1.	���������, �������� �� ��� ���������� (������� 4) � �������� �� 2000 �� ����� ��� �� 2000 ����� ���. 
		//������ � ������ ��� � ������� ���, ������� ��������� � ���� �656 ��� ����� ��� � ����������.
		int year = 0;
		year = -2000 + rand() % 2000;

		if (year < 0 && year % 400 == 0)
			printf("%d ��� �� ����� ��� - ����������\n", -year);
		else if (year >= 0 && year % 400 == 0)
			printf("%d ��� ����� ��� - ����������\n", year);
		else if (year < 0 && year % 400 != 0)
			printf("%d ��� �� ����� ��� - �� ����������\n", -year);
		else if (year >= 0 && year % 400 != 0)
			printf("%d ��� ����� ��� - �� ����������\n", year);
	}
	else if (n==7)
	{
		//2.	��������� ��������� ������� � ������ ������. ������ � 10% ���������������, ���� ����� ������� ��������� 1000 �����.
		float shoppingSum = 0;
		printf("������� ����� �������: ");
		scanf("%f", &shoppingSum);

		if (shoppingSum>1000)
		{
			float skidka = 0, totalSum=0;

			skidka = shoppingSum * ((float)10/(float)100);
			totalSum = shoppingSum - skidka;

			printf("���� ����� � ������: %f\n", totalSum);
		}
		else
		{
			printf("���� ����� � ������: %f\n", shoppingSum);
		}			
	}
	else if (n==8)
	{
		//3.	�������� ��������� ���������� ���������� ���� ������������ (���� 100). ������ ������������ � ������������� ����������� ���� ��������.
		float rost = 0, idealVes = 0, ves=0;
		char sex;
		printf("������� ���� ���� (��) ���� ��� � ���: ");
		scanf("%f %f %c", &rost, &ves, &sex);

		if (sex=='M')
		{
			idealVes = (rost - 100)*1.15;
			if (ves > idealVes)
			{
				SetConsoleTextAttribute(hConsole, 11);
				printf("��� ���� ��������\n");
			}
				
			else if (ves == idealVes)
			{
				SetConsoleTextAttribute(hConsole, 10);
				printf("� ��� ��������� ���\n");
			}
				
			else
			{
				SetConsoleTextAttribute(hConsole, 12);
				printf("��� ���� �����������\n");
			}
				
		}
		else if (sex=='F')
		{
			idealVes = (rost - 110)*1.15;
			if (ves > idealVes)
			{
				SetConsoleTextAttribute(hConsole, 11);
				printf("��� ���� ��������\n");
			}
			else if (ves == idealVes)
			{
				SetConsoleTextAttribute(hConsole, 10);
				printf("� ��� ��������� ���\n");
			}				
			else
			{
				SetConsoleTextAttribute(hConsole, 12);
				printf("��� ���� �����������\n");
			}			
		}			
		SetConsoleTextAttribute(hConsole, 15);
	}
	else if (n==9)
	{
		//4.	���������� �������� ������� �� �����������. �� ����� ������� ������ � ��� �������� ������, ������ � ������ ������� ������. 
		//��������� ������ ������� ����� � � ������ ������������� ������ �������� ����������.
		int answer;

		int x1 = 1 + rand() % 9;
		int x2 = 1 + rand() % 9;
		int res = x1*x2;

		printf("������� ����� %d * %d? ������� �����: \n", x1, x2);
		scanf("%d", &answer);

		if(res == answer)
			printf("��� ���������� �����\n");
		else
			printf("��� ������������ �����\n");
	}
	else if (n==10)
	{
		//5.	������ � ���������� ��� ����������� ����� � �������� ������������ ���� �����. 
		//��������� ����� � ������� ���������, ���� ���������, � ��������� ������ ���������� ���������� �����.
		int a = 0, b = 0, result = 0;
		printf("������� ����� �: ");
		scanf("%d", &a);

		printf("������� ����� b: ");
		scanf("%d", &b);

		printf("������� �������� ������������ �����: ");
		scanf("%d", &result);

		if ((a*b) >= 0)
		{
			(result == (a*b)) ? printf("��������� ���������\n") : printf("��������� �����������, ���������� �����: %d\n", a*b);
		}
		else
		{
			printf("����� �������������\n");
		}			
	}
	else if (n==11)
	{
		//1.	������ � ���������� ����� ������. ���������� ����� � ����������� �� ������ ������ � ������� ��������� (����� (3,4,5), ���� (6,7,8), ����� (9,10,11)  ���� (12,1,2))
		//1. ����� 2. ���� 3. ����� 4. ����

		int month = 0;
		month=1+rand()%12;

		switch (month)
		{
		case 3:
		case 4:
		case 5:
		{
			SetConsoleTextAttribute(hConsole, 10);
			printf("%d. �����\n", month);
		}
		break;

		case 6:
		case 7:
		case 8:
		{
			SetConsoleTextAttribute(hConsole, 13);
			printf("%d. ����\n", month);
		}
		break;

		case 9:
		case 10:
		case 11:
		{
			SetConsoleTextAttribute(hConsole, 12);
			printf("%d. �����\n", month);
		}
		break;

		case 12:
		case 1:
		case 2:
		{
			SetConsoleTextAttribute(hConsole, 11);
			printf("%d. ����\n", month);
		}
		break;
		}


		/*if (month >= 3 && month <= 5)
			printf("%d. �����\n", month);
		else if (month >= 6 && month <= 8)
			printf("%d. ����\n", month);
		else if (month >= 9 && month <= 11)
			printf("%d. �����\n", month);
		else
			printf("%d. ����\n", month);*/
	}
	else if (n==12)
	{
		//2.	���� ��������� ������ ��������� � ���� ���������� ��������� �����, � ����� ���������� ������ �� ������ � �������� ���. 
		//������ � ���������� ���������� ������� ���������� � ������ � � �������� ���, ���������� ��������� ���������� � ������ ����������
		//1. 50 ���, 10 % 2.  2. 45 ���, 8 % 3.  3. 55 ���, 12 %
		int day = 0; 
		float conversTime = 0;
		char operatorTel;

		printf("������� ���� ������, ����� ��������� � ���������: ");
		scanf("%d %f %c", &day, &conversTime, &operatorTel);

		switch (day)
		{
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			{
				switch (operatorTel)
				{
					case 'Beeline':
					{
						printf("��������� ������ ���������: %d\n", conversTime * 2);
					}
					break;

					case 'Kcell':
					{
						printf("��������� ������ ���������: %d\n", conversTime * 5);
					}
					break;

					case 'Tele2':
					{
						printf("��������� ������ ���������: %d\n", conversTime);
					}
					break;						
				}
			}
			break;

			case 6:
			case 7:
			{
				switch (operatorTel)
				{
				case 'Beeline':
				{
					float skidka = 0, totalSum=0;
					skidka = conversTime*(float)0.05;
					totalSum = conversTime - skidka;
					printf("��������� ������ ���������: %f\n", totalSum);
				}
				break;

				case 'Kcell':
				{
					float skidka = 0, totalSum = 0;
					skidka = conversTime*(float)0.03;
					totalSum = conversTime - skidka;
					printf("��������� ������ ���������: %f\n", totalSum);
				}
				break;

				case 'Tele2':
				{
					float skidka = 0, totalSum = 0;
					skidka = conversTime*(float)0.06;
					totalSum = conversTime - skidka;
					printf("��������� ������ ���������: %f\n", totalSum);
				}
				break;
			}
			break;
		}


	}




	//goto start;
}