#include <stdio.h>


int main() {
    char name[100];
    char ch;
    
    printf("=== Student Registration System ===\n\n");
    
    printf("Enter student's full name: ");
    fgets(name, sizeof(name), stdin);
    

  
    puts("Student Name: ");
    puts(name);
}



