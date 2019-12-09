// Pass by Address
// pass_by_address.c

#include <stdio.h>

struct Student
{
   int no;
   int no_grades_filled;
   float grade[4];
};

void set(struct Student* st);  // Receives pointer
void display(const struct Student st);

int main(void)
{
   struct Student harry = { 975, 2, {50.0f, 50.0f}};

   set(&harry);      // Address passed to set
   display(harry);
}

void set(struct Student* st)  // Receives pointer
{
   struct Student harry = {306, 2, {78.9, 91.6}};

   *st = harry;  // Use pointer
}

void display(const struct Student st)
{
   int i;
   printf("Grades for %d\n", st.no); 
   for (i = 0; i < st.no_grades_filled; i++) 
            printf("%.1f\n", st.grade[i]); 
}