#ifndef _FUNCTION_H_
#define _FUNCTION_H_
#include "datatype.h" 

//luu nnguyen mau h�m
  
void login();
void startTheProgram();
void menuAdmin();
void studentManagement();
void invalidSelection();
void endOfTheProgram();
void searchStudentById(Student students[], int n);
void printStudents(Student students[], int n, int *choiceAdmin);
void addStudent(Student students[], int *n, int maxSize);
void deleteStudent(Student students[], int *n);

void saveStudentToFile(Student student[], int*n);
void loadStudentFromFile(Student student[], int*n );
	
#endif 

