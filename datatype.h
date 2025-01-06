#include <stdbool.h> 
struct BirthDay{
	int date ; 
	int month ; 
	int year; 
};
 
typedef struct Student{
	int studentId[10];
	char name[12];
	char email[30];
	char classroomId[20];
	struct BirthDay dateofBirth;
	char birthDate[12];
	char gender[20];
	char phone[10];

}Student; 

//struct Classroom{
//	char classroomId[10];
//	char teacher[20];
//	char classroomName[10];
//	struct Student students[];	
//};
//struct Teacher
//{
//	char teacherId[10];
//	char classroomId[10];
//	char Name[20];
//	struct BirthDay dateofBirth;
//	char gender[20];
//	char Email[30];
//	char password[20];
//	struct Classroom classroom[];
//};
// 
