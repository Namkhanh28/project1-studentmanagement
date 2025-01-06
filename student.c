#include "student.h" 
#include "datatype.h" 
 

struct Student{
    char name[50];
    int id;
    char gender[10];
	};
struct Students{
	int total ;
	struct Student students[5];
 } ;
 
struct Students manager ; 
     void menu_student();
   int  addStudent();
   int deleteStudent();
   int updateStudent();
    void showStudentsManager();
void menu_student();
{ 
    students manager.total = 0;
	int choice=1;
	int retcode=-1; 
    printf("Enter choice\n: ");
    scanf("%d", &choice);
	switch (choice)
	{
		case 1: 
		retcode = add_student();
		break;
		case 2:
		retcode =  delete_student();
		break;
		case 3:
		retcode = update_student();
		case 4:
		show_students manager ();
		break; 
		default:
		printf("invalid\n") ;
		 
	} 
	return retcode; 
} 
// them student
int add_student()
if (manager.total >= 5) {
        printf("Student list is full!\n");
        return 0;
{
	printf("add_student"); 
	int next_idx = _students manager .total;
	// User input: name, id, gender, ... 
	printf(" Nhap ten moi cua sinh vien: ");
    scanf("%s", manager.students[next_idx].name);
    printf("Nhap ID moi cua sinh vien : ");
    scanf("%d", &manager.students[next_idx].id);
    printf("Nhap gioi tinh cua sinh vien: ");
    scanf("%s", manager.students[next_idx].gender);
//	_students manager .students[next_idx].name = "Name";
    manager.total++;
    printf("Them sinh viên thành công!\n");

	strcpy(_students manager .students[next_idx].name, stdin);
	_students manager .total +=1; 
	
	show_students manager ();
}
int delete_student()
{
	printf("delete_student");
}
int update_student()
{
	printf("update_student");
}

void show_students manager ()
{
	printf("\nList of students:\n"); 
	for (int i=0; i < _students manager .total; i++) 
	{
		printf("\nName: %s\n", _students manager .students[i].name);
	}
 } 
