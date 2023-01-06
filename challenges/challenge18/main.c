#include <stdio.h>

struct employee
{
  char name[20];
  int hireDate;
  float salary;
};

int main(int argc, char const *argv[])
{
  struct employee emp1 =
      {
          .name = "Jim",
          .hireDate = 123,
          .salary = 100};
  printf("emp1 name: %s\n", emp1.name);
  printf("emp1 salary: %.2f\n", emp1.salary);

  struct employee emp2;
  printf("please enter name\n");
  scanf("%s", emp2.name);
  printf("please enter hire date\n");
  scanf("%d", &emp2.hireDate);
  printf("please enter salary\n");
  scanf("%f", &emp2.salary);
  printf("emp2 salary: %.2f\n", emp2.salary);

  return 0;
}
