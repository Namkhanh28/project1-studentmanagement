#include <stdio.h>
#include "function.h"
#include <string.h>
#include <unistd.h>
#include <ctype.h>
void login(){
	char email[16];
	char password[9];
	system("cls");
	do{
		printf("\t    LOGIN\n");
		printf("\n================================\n");
		printf("Email: ");
		fgets(email, sizeof(email), stdin);
		if(strcspn(email, "\n")==strlen(email)){
			while ((getchar()) != '\n');
		} else{
			email[strcspn(email, "\n")] = '\0';
		}
		printf("Password: ");
		fgets(password, sizeof(password), stdin);
		if(strcspn(password, "\n")==strlen(password)){
			while ((getchar()) != '\n');
		} else{
			password[strcspn(password, "\n")] = '\0';
		}
		system("cls");
		if(strcmp(password,"password")!=0 || strcmp(email,"admin@gmail.com")!=0){
			printf("\n*Sai Email hoặc  Password! Vui lòng nhập lại*\n\n");
		}
	}while(strcmp(password,"password")!=0 || strcmp(email,"admin@gmail.com")!=0);
}

void startTheProgram()
{
  printf("***Student Management System Using C***\n");
  printf("\n");
  printf("           CHOOSE YOUR ROLE\n");
  printf("        =========================\n");
  printf("        [1] Admin.\n");
  printf("        [2] Student.\n");
  printf("        [3] Teacher.\n");
  printf("        [0] Exit the Program.\n");
  printf("        =========================\n");
  printf("        Enter The Choice: ");
}
void menuAdmin()
{

  printf("***Student Management System Using C***\n");
  printf("\n");
  printf("                MENU\n");
  printf("        =========================\n");
  printf("        [1] Students management.\n");
  printf("        [2] Classrooms management.\n");
  printf("        [3] Teacher management.\n");
  printf("        [4] User Guideline.\n");
  printf("        [5] About Us.\n");
  printf("        [0] Exit the Program.\n");
  printf("        =========================\n");
  printf("        Enter The Choice: ");
}
void studentManagement()
{
  printf("		***Student Management System Using C***\n");
  printf("\n");
  printf("              STUDENT MENU\n");
  printf("        =========================\n");
  printf("        [1] Add A New student.\n");
  printf("        [2] Show All student.\n");
  printf("        [3] Search A student.\n");
  printf("        [4] Edit A student.\n");
  printf("        [5] Delete A student.\n");
  printf("        [0] Exit the Program.\n");
  printf("        =========================\n");
  printf("        Enter The Choice: ");
}
void invalidSelection()
{

  printf("\n");
  printf("\n");
  printf("========== Invalid Selection  =======\n");
  printf("\n");
  printf("\n");
}
void endOfTheProgram()
{
  printf("\n");
  printf("========== Thank You =======\n");
  printf("========== See You Soon ====\n");
  printf("\n");
}
//   void inputStudentInfo(Student students[] , int *n, int maxSize) {
//     int numToAdd;
//     printf("Nhap so luong sinh vien muon them: \n");
//     scanf("%d", &numToAdd);
//     getchar();
//     for (int i = 0; i < numToAdd; i++) {

//         snprintf(students[*n].studentId, 10, "%d", *n + 1);

//         printf("Moi ban nhap vao ten sinh vien: \n");
//         fgets(students[*n].name, 20, stdin);
//         students[*n].name[strcspn(students[*n].name, "\n")] = '\0';

//         printf("Moi ban nhap vao ma lop hoc: \n");
//         fgets(students[*n].classroomId, 10, stdin);
//         students[*n].classroomId[strcspn(students[*n].classroomId, "\n")] = '\0';

//         printf("Moi ban nhap vao so dien thoai: \n");
//         fgets(students[*n].phone, 15, stdin);
//         students[*n].phone[strcspn(students[*n].phone, "\n")] = '\0';

//         printf("Moi ban nhap vao email: \n");
//         fgets(students[*n].email, 30, stdin);
//         students[*n].email[strcspn(students[*n].email, "\n")] = '\0';

//       	printf("Moi ban nhap vao ngay thang nam sinh (dd/mm/yyyy): \n");
//         fgets(students[*n].birthDate, 10, stdin);
//       	students[*n].birthDate[strcspn(students[*n].birthDate, "\n")] = '\0';

//        printf("Moi ban nhap vao gioi tinh (Nam/Nu): \n");
//         fgets(students[*n].gender, 10, stdin);
//         students[*n].gender[strcspn(students[*n].gender, "\n")] = '\0';

//         (*n)++;
//         printf("\n");
//         printf("\n");
//     }
// }
void printStudents(Student students[], int n, int *choiceAdmin)
{
  printf("\n");
  printf("       **** All Students ****\n");
  printf("\n");
  printf("|=======|==================|==============|=======================|===============|============|========|\n");
  printf("|   ID  |     Name         | classroomId  |        Email          |    Phone      |  birthDate | gender |\n");
  printf("|=======|==================|==============|=======================|===============|============|========|\n");

  for (int i = 0; i < n; i++)
  {
    printf("| %-5d | %-16s | %-12s | %-21s | %-13s | %-10s | %-6s |\n",
           *students[i].studentId,
           students[i].name,
           students[i].classroomId,
           students[i].email,
           students[i].phone,
           students[i].birthDate,
           students[i].gender);
    printf("|=======|==================|==============|=======================|===============|============|========|\n");
  }
  printf("\n");
  printf("Go back(b)? or Exit(0)?: ");
  getchar();
  char a;
  scanf("%c", &a);
  if(a == '0') { *choiceAdmin = 0; }
  else { system("cls");}

}
void addStudent(Student students[], int *n, int maxSize)
{

  printf("  **** Add A New Student ****\n");
  int id;

A:
  printf("Enter The ID: ");
  scanf("%d", &students[*n].studentId);
  getchar();

  // students[*n].studentId[strcspn(students[*n].studentId, "\n")] = '\0';

  for (int i = 0; i < *n; i++)
  {
    if (*students[i].studentId == *students[*n].studentId)
    {
      printf("Error: This ID is alredy exists. \n");
      goto A;
    }
  }

  printf("Nhap ten cua sinh vien: ");
  fgets(students[*n].name, 20, stdin);
  students[*n].name[strcspn(students[*n].name, "\n")] = '\0';

  printf("Nhap ClassroomId: ");
  fgets(students[*n].classroomId, 10, stdin);
  students[*n].classroomId[strcspn(students[*n].classroomId, "\n")] = '\0';

  printf("Nhap Email sinh vien: ");
  fgets(students[*n].email, 30, stdin);
  students[*n].email[strcspn(students[*n].email, "\n")] = '\0';

  printf("Nhap so dien thoai sinh vien: ");
  fgets(students[*n].phone, 20, stdin);
  students[*n].phone[strcspn(students[*n].phone, "\n")] = '\0';

  printf("Moi ban nhap vao ngay thang nam sinh (dd/mm/yyyy): ");
  fgets(students[*n].birthDate, 12, stdin);
  students[*n].birthDate[strcspn(students[*n].birthDate, "\n")] = '\0';

  printf("Nhap gioi tinh cua sinh vien : ");
  fgets(students[*n].gender, 10, stdin);
  students[*n].gender[strcspn(students[*n].gender, "\n")] = '\0';

  (*n)++;
   saveStudentToFile(Student student[], int*n);
  printf("Sinh vien da duoc them thanh cong.\n");
  saveStudentToFile(Student student[], int n, int a);
}

void searchStudentById(Student students[], int n)
{
  char name[20];
  printf("Nhap ten sinh vien can tim: ");
  scanf("%s", &name);
  getchar();
  for (int i = 0; i < n; i++)
  {
    if (strcmp(students[i].name, name) == 0)
    {
      printf("|=======|==================|==============|=======================|===============|===========|========|\n");
      printf("|   ID  |     Name         | classroomId  |        Email          |    Phone      | birthDate | gender |\n");
      printf("|=======|==================|==============|=======================|===============|===========|========|\n");
      printf(" | %-6s| %-15s   | %-12s  | %-15s   | %-13s  | %-9s | %-6s   |\n",
             students[i].studentId,
             students[i].name,
             students[i].classroomId,
             students[i].email,
             students[i].phone,
             students[i].birthDate,
             students[i].gender);
      printf("|=======|==================|==============|=======================|===============|===========|========|\n");

      return;
    }
  }

  printf("Khong tim thay sinh vien voi ten %s\n ", name);
  return;
}

void deleteStudent(Student students[], int *n)
{
  int studentId;
  int findIndex = -1;

  printf("Moi ban nhap ID sinh vien muon xoa: ");
  scanf("%d", &studentId);

  char yesNo;
  for (int i = 0; i < *n; i++)
  {
    if (*students[i].studentId == studentId)
    {
      findIndex = i;
      break;
    }
  }
  if (findIndex == -1)
  {
    printf("Khong tim thay sinh vien voi ID: %s\n", studentId);
  }
  else
  {
    printf("      STUDENT INFORMATION\n");
    printf("================================\n");
    printf("ID: %d\n", *students[findIndex].studentId);
    printf("Classroom ID: %s\n", students[findIndex].classroomId);
    printf("Full Name: %s\n", students[findIndex].name);
    printf("Email: %s\n", students[findIndex].email);
    printf("Phone Number: %s\n", students[findIndex].phone);
    printf("Gender: %s\n", students[findIndex].gender);
    printf("Birthday: %s\n", students[findIndex].birthDate);
    do
    {
      printf("Ban co chac chan xoa sinh vien nay? (Y/N): ");
      getchar();
      scanf("%c", &yesNo);
      yesNo = toupper(yesNo);
      if (yesNo != 'Y' && yesNo != 'N')
      {
        printf("Vui long nhap lai (Y hoac N).\n");
      }
      else
      {
        break;
      }

    } while (yesNo != 'Y' && yesNo != 'N');

    if (yesNo == 'N')
    {
      printf("Sinh vien khong bi xoa.\n");
    }
    else
    {
      students[findIndex] = students[findIndex + 1];
      (*n)--;
      printf("Sinh vien co ID %d da duoc xoa thanh cong.\n", studentId);
    }
    saveStudentToFile(Student student[], int n, int a);
  }
}
    void saveStudentToFile(Student student[], int n, int a){
	FILE *ptr=fopen("studentData.dat", "wb");
	if(ptr==NULL){
		printf("\n\n* Không mở được thư mục*\n");
	}
	fwrite(student,sizeof(Student),length,ptr);
	if(a==1){
		printf("\n*Luu thư mục thành công*\n");
	}
	fclose(ptr);
}
void loadStudentFromFile(Student student[], int *n, int a){
	FILE *ptr=fopen("studentData.dat", "rb");
	if(ptr==NULL){
		printf("Can't Open File");
	}
	*length=fread(student, sizeof(Student), 100, ptr);
	if(a==1){
		printf("\n*Loaded Successfully*\n");
	}
	fclose(ptr);
}