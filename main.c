#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function.h"
// #include "student.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	Student students[100];
	int studentCount = 0;
	int choice;
	int choiceAdmin;
	int choicestudent;
	choicestudent = -1;
	int n = 0;
	int maxSize = 100;

	printf("BAT DAU\n");
	login();
	
	
	do
	{
			system("cls");
		startTheProgram();
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
		    loadStudentFromFile(student[], int *n, int a);
			do
			{   
				system("cls");
				menuAdmin();

				scanf("%d", &choiceAdmin);

				switch (choiceAdmin)
				{

				case 1:
					system("cls");
					do
					{
						studentManagement();
						if(choicestudent != 0)
						{
							scanf("%d", &choicestudent);
						}

						switch (choicestudent)
						{
						case 1:
							system("cls");

							// putStudentInfo(tudents,&n,maxSize);
							addStudent(students, &n, maxSize);

							break;
						case 2:
							system("cls");
							printStudents(students, n, &choicestudent);
							break;
						case 3:
							system("cls");
							searchStudentById(students, n);
							break;

						case 4:
							// system("cls");
							// void deleteStudent( students ,&n);

							break;
						case 5:
							system("cls");
							deleteStudent(students, &n);
							break;
						case 0:
							endOfTheProgram();
							break;
						default:
							invalidSelection();
						}
					} while (choicestudent != 0);

					break;
				case 2:
					break;
				case 3:
					break;
				case 4:
					break;
				case 5:
					break;
				case 0:
					endOfTheProgram();
					break;
				default:
					invalidSelection();
				}
			} while (choiceAdmin != 0);
			break;
		case 2:
			break;
		case 3:
			break;
		case 0:
			endOfTheProgram();
			break;
		default:
			invalidSelection();
		}
	} while (choice != 0);

	return 0;
}
