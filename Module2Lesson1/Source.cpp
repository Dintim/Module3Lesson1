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
	printf("введите номер задания: ");
	scanf("%d", &n);

	if (n==1)
	{
		//1.	Ввести с клавиатуры два числа. Определить, что больше, сумма квадратов или квадрат суммы этих чисел. Ответ вывести в виде сообщения.
		int a = 0, b = 0;
		a = 1 + rand() % 1000;
		b = 1 + rand() % 1000;

		int s1 = 0, s2 = 0;
		s1 = pow(a, 2) + pow(b, 2);
		s2 = pow(a + b, 2);

		(s1>s2) ? printf("суммма квадратов больше квадрата суммы чисел = %d\n", s1) : printf("квадрат суммы чисел больше суммы квадратов = %d\n", s2);
	}
	else if (n==2)
	{
		//2.	Рассчитать надбавку к зарплате за стаж, если стаж от 2 до 5 лет, надбавка составляет 2%,  если стаж от 5 до 10 лет - 5%. 
		//Ввести с клавиатуры зарплату и стаж, вывести надбавку и сумму к выплате.
		int salary = 0, years = 0;
		printf("введите суммы зарплаты: ");
		scanf("%d", &salary);

		printf("введите число лет стажа: ");
		scanf("%d", &years);

		float add = 0;

		if (years>2 && years<=5)
		{
			add = (2 * salary) / 100;
			printf("сумма надбавки составляет %f\n", add);
		}
		else if (years>5 && years<=10)
		{
			add = (5 * salary) / 100;
			printf("сумма надбавки составляет %f\n", add);
		}
	}
	else if (n==3)
	{
		//3.	Ввести с клавиатуры три числа, положительные возвести в квадрат, а отрицательные оставить без изменений.
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
		//4.	Дано натуральное число. Определить, является ли оно четным, или оканчивается цифрой 3.
		int a = 0;
		a = 1 + rand() % 1000;

		if (a%2==0 || a%10==3)
		{
			printf("число четное или оканчивается на 3: %d\n", a);
		}
		else
		{
			printf("число не является четным или не оканчивается на 3: %d\n", a);			
		}
	}
	else if (n==5)
	{
		//5.	Рассчитать сумму ежемесячных выплат процентов по депозиту, если договор составлен на полгода под 6% годовых или на год под 8% годовых. 
		//С клавиатуры ввести сумму вклада и срок договора
		float sum = 0, time=0;
		printf("введите сумму депозита: ");
		scanf("%f", &sum);

		printf("введите срок депозита (мес.): ");
		scanf("%f", &time);

		float add = 0;

		if (time==6)
		{
			add = (sum*(0.06/12))*time;
			printf("сумма ежемесячных выплат процентов по депозиту: %f\n", add);
		}
		else if (time==12)
		{
			add = (sum*(0.08/12))*time;
			printf("сумма ежемесячных выплат процентов по депозиту: %f\n", add);
		}
		else
		{
			printf("такого предложения по депозитам нет\n");
		}
	}
	else if (n==6)
	{
		//1.	Проверить, является ли год високосным (кратным 4) в пределах от 2000 до нашей эры до 2000 нашей эры. 
		//Ввести с экрана год и признак эры, вывести сообщение в виде «656 год нашей эры – високосный».
		int year = 0;
		year = -2000 + rand() % 2000;

		if (year < 0 && year % 400 == 0)
			printf("%d год до нашей эры - високосный\n", -year);
		else if (year >= 0 && year % 400 == 0)
			printf("%d год нашей эры - високосный\n", year);
		else if (year < 0 && year % 400 != 0)
			printf("%d год до нашей эры - не високосный\n", -year);
		else if (year >= 0 && year % 400 != 0)
			printf("%d год нашей эры - не високосный\n", year);
	}
	else if (n==7)
	{
		//2.	Вычислить стоимость покупки с учетом скидки. Скидка в 10% предоставляется, если сумма покупки превышает 1000 тенге.
		float shoppingSum = 0;
		printf("введите сумму покупки: ");
		scanf("%f", &shoppingSum);

		if (shoppingSum>1000)
		{
			float skidka = 0, totalSum=0;

			skidka = shoppingSum * ((float)10/(float)100);
			totalSum = shoppingSum - skidka;

			printf("ваша сумма к оплате: %f\n", totalSum);
		}
		else
		{
			printf("ваша сумма к оплате: %f\n", shoppingSum);
		}			
	}
	else if (n==8)
	{
		//3.	Написать программу вычисления идеального веса пользователя (рост 100). Выдать рекомендации о необходимости поправиться либо похудеть.
		float rost = 0, idealVes = 0, ves=0;
		char sex;
		printf("введите свой рост (см) свой вес и пол: ");
		scanf("%f %f %c", &rost, &ves, &sex);

		if (sex=='M')
		{
			idealVes = (rost - 100)*1.15;
			if (ves > idealVes)
			{
				SetConsoleTextAttribute(hConsole, 11);
				printf("вам надо похудеть\n");
			}
				
			else if (ves == idealVes)
			{
				SetConsoleTextAttribute(hConsole, 10);
				printf("у вас идеальный вес\n");
			}
				
			else
			{
				SetConsoleTextAttribute(hConsole, 12);
				printf("вам надо поправиться\n");
			}
				
		}
		else if (sex=='F')
		{
			idealVes = (rost - 110)*1.15;
			if (ves > idealVes)
			{
				SetConsoleTextAttribute(hConsole, 11);
				printf("вам надо похудеть\n");
			}
			else if (ves == idealVes)
			{
				SetConsoleTextAttribute(hConsole, 10);
				printf("у вас идеальный вес\n");
			}				
			else
			{
				SetConsoleTextAttribute(hConsole, 12);
				printf("вам надо поправиться\n");
			}			
		}			
		SetConsoleTextAttribute(hConsole, 15);
	}
	else if (n==9)
	{
		//4.	Обработать тестовое задание по информатике. На экран вывести вопрос и три варианта ответа, ввести с экрана вариант ответа. 
		//Программа должна оценить ответ и в случае неправильного ответа написать правильный.
		int answer;

		int x1 = 1 + rand() % 9;
		int x2 = 1 + rand() % 9;
		int res = x1*x2;

		printf("сколько будет %d * %d? введите ответ: \n", x1, x2);
		scanf("%d", &answer);

		if(res == answer)
			printf("это правильный ответ\n");
		else
			printf("это неправильный ответ\n");
	}
	else if (n==10)
	{
		//5.	Ввести с клавиатуры два однозначных числа и значение произведения этих чисел. 
		//Проверить ответ и вывести сообщение, если правильно, в противном случае напечатать правильный ответ.
		int a = 0, b = 0, result = 0;
		printf("введите число а: ");
		scanf("%d", &a);

		printf("введите число b: ");
		scanf("%d", &b);

		printf("введите значение произведения чисел: ");
		scanf("%d", &result);

		if ((a*b) >= 0)
		{
			(result == (a*b)) ? printf("посчитали правильно\n") : printf("посчитали неправильно, правильный ответ: %d\n", a*b);
		}
		else
		{
			printf("числа неоднозначные\n");
		}			
	}
	else if (n==11)
	{
		//1.	Ввести с клавиатуры номер месяца. Определить сезон в зависимости от номера месяца и вывести сообщение (весна (3,4,5), лето (6,7,8), осень (9,10,11)  зима (12,1,2))
		//1. Весна 2. Лето 3. Осень 4. Зима

		int month = 0;
		month=1+rand()%12;

		switch (month)
		{
		case 3:
		case 4:
		case 5:
		{
			SetConsoleTextAttribute(hConsole, 10);
			printf("%d. Весна\n", month);
		}
		break;

		case 6:
		case 7:
		case 8:
		{
			SetConsoleTextAttribute(hConsole, 13);
			printf("%d. Лето\n", month);
		}
		break;

		case 9:
		case 10:
		case 11:
		{
			SetConsoleTextAttribute(hConsole, 12);
			printf("%d. Осень\n", month);
		}
		break;

		case 12:
		case 1:
		case 2:
		{
			SetConsoleTextAttribute(hConsole, 11);
			printf("%d. Зима\n", month);
		}
		break;
		}


		/*if (month >= 3 && month <= 5)
			printf("%d. Весна\n", month);
		else if (month >= 6 && month <= 8)
			printf("%d. Лето\n", month);
		else if (month >= 9 && month <= 11)
			printf("%d. Осень\n", month);
		else
			printf("%d. Зима\n", month);*/
	}
	else if (n==12)
	{
		//2.	Дана стоимость минуты разговора у трех операторов мобильной связи, а также процентная скидка на звонки в выходные дни. 
		//Ввести с клавиатуры количество времени разговоров в будние и в выходные дни, определить стоимость разговоров у разных операторов
		//1. 50 коп, 10 % 2.  2. 45 коп, 8 % 3.  3. 55 коп, 12 %
		int day = 0; 
		float conversTime = 0;
		char operatorTel;

		printf("введите день недели, время разговора и оператора: ");
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
						printf("стоимость вашего разговора: %d\n", conversTime * 2);
					}
					break;

					case 'Kcell':
					{
						printf("стоимость вашего разговора: %d\n", conversTime * 5);
					}
					break;

					case 'Tele2':
					{
						printf("стоимость вашего разговора: %d\n", conversTime);
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
					printf("стоимость вашего разговора: %f\n", totalSum);
				}
				break;

				case 'Kcell':
				{
					float skidka = 0, totalSum = 0;
					skidka = conversTime*(float)0.03;
					totalSum = conversTime - skidka;
					printf("стоимость вашего разговора: %f\n", totalSum);
				}
				break;

				case 'Tele2':
				{
					float skidka = 0, totalSum = 0;
					skidka = conversTime*(float)0.06;
					totalSum = conversTime - skidka;
					printf("стоимость вашего разговора: %f\n", totalSum);
				}
				break;
			}
			break;
		}


	}




	//goto start;
}