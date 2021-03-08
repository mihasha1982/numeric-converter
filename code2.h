//Программа переводит число из одной системы счисления в другую. 
//Системы счисления пользователь выбирает сам
#include <stdio.h>
int convert_array_to_decimal_number(char[],int);
void convert_variable_to_array(char[],int,int);
void swap_values_in_array(char[]);

int main(){
  char number[50] = {0},
       number_end[50] = {0};
   int base = 0,
       base2 = 0,
       number10 = 0;

    printf("Enter number:");
    fgets(number, 50, stdin);

    printf("Enter base:");
    scanf("%d", &base);

    number10 = convert_array_to_decimal_number(number, base);

    printf("Enter output base:");
    scanf("%d", &base2);

    convert_variable_to_array(number_end, number10, base2);

    swap_values_in_array(number_end);

    printf("%s\n", number_end);
    return 0;
}
int convert_array_to_decimal_number(char number[], int base){
  int num = 0;
    for(int i = 0; i < 50 && number[i] != '\n';i++){
          num = number[i] < 'A'
          ? num * base + number[i] - '0'
          : num * base + number[i] - 'A' + 10;
          }
          return num;
          }
//функция2
void convert_variable_to_array(char number[], int num, int base){
    for(int i = 0; i < 50 && num != 0 ;i++){
         number[i] = num % base < 10
         ? num % base + '0'
         : num % base + 'A' - 10;
         num = num / base;
         }
         }
//функция 3
void swap_values_in_array(char number[]){
     char temp = 0;
      int i = -1,
          g = 0;
     while(number[i] != '\0')i++;
     for(i; i > g; i--, g++){
         temp = number[i];
         number[i] = number[g];
         number[g] = temp;
         }
         }
