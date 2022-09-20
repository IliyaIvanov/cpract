#include <stdio.h>
#include <stdarg.h>
#include <locale.h>
 
void print_data(void* pointer, int size){
    unsigned char* bytes = (unsigned char*) pointer;
    printf("\nbyte: ");
    for(int i = 0; i < size; i++){
 
        unsigned char byte = bytes[i];
        printf("%i ", byte);
    }
}
 
int little_endian(){
    int x = 1;
    int *pointer = &x;
    unsigned char *bytes = (unsigned char*) pointer;
    unsigned char byte = bytes[0];
    if (byte == 1){
        return 1;
    } else {
        return 0;
    }
}
 
void print_data_endian_independent(char* description, void* pointer, int size()){
    if (little_endian()){
        printf("little endian");
        unsigned char* bytes = (unsigned char*) pointer;
        printf("byte: ");
        for (int i = size - 1; i >=0; i++){

        }
 
    } else {
 
    }
 
}
 
 
int main() {
    setlocale(LC_ALL, "Rus");
    unsigned char character = 'X';
    unsigned char answer = 42;
    int port = 65353;
    long timestamp = 1662111889;
 
    // 1. Поместите указатели на каждую из объявленных выше переменных
    // в новые переменные. Выведите на экран полученные указатели при
    // помощи функции printf. Выведите на экран размеры переменных,
    // объявленных выше. Выведите на экран размеры полученных указателей.
    // Сравните результат на ОС Windows и ОС Linux.
 
    unsigned char* character_pointer = &character;
    unsigned char* answer_pointer = &answer;
    int* port_pointer = &port;
    long* timestamp_pointer = &timestamp;
 
    printf("Znachenie: %c %i %i %i \n", character, answer, port, timestamp);
    printf("Adres: %i %i %i %i \n", character_pointer, answer_pointer, port_pointer, timestamp_pointer);
    printf("Razmer znacheniya: %i %i %i %i \n", sizeof(character), sizeof(answer), sizeof(port), sizeof(timestamp));
    printf("Razmer adresov: %i %i %i %i \n", sizeof(character_pointer), sizeof(answer_pointer), sizeof(port_pointer), sizeof(timestamp_pointer));
 
    // 2. Преобразуйте указатели на port и timestamp к указателям на
    // переменные беззнакового символьного типа. Получите значения по
    // полученным указателям. Сравните размеры полученных значений с
    // размерами оригинальных переменных port и timestamp.
 
    unsigned char* port_bytes = (unsigned char*) port_pointer;
    unsigned char* timestamp_bytes = (unsigned char*) timestamp_pointer;
    printf("%i %i \n", port_pointer, port_bytes);
    printf("%i %i \n", port_pointer[0], port_bytes[1]);
    printf("%i %i \n", sizeof(*port_pointer), sizeof(*port_bytes));
 
    // 3. При помощи оператора индексирования, применённого к
    // указателям типа unsigned char *, прочитайте байты port
    // и timestamp. Реализуйте функцию print_data, которая выведет
    // на экран байты в том порядке байт, который принят в системе.
 
    print_data(&timestamp, sizeof(timestamp));
    print_data(&character, sizeof(character));
    print_data(&port, sizeof(port));
    print_data(&answer, sizeof(answer));
 
    // 4. Напишите функцию для определения порядка байт на устройстве.
    // Значение типа int равное 1 при порядке байт от младшего к
    // старшему (little endian, 'с малого конца') в памяти имеет вид:
    // +------+------+------+------+
    // | 0x01 | 0x00 | 0x00 | 0x00 |
    // +------+------+------+------+ 
    // Значение типа int равное 1 при порядке байт от старшего к
    // младшему (big endian, 'с большого конца') в памяти имеет вид:
    // +------+------+------+------+
    // | 0x00 | 0x00 | 0x00 | 0x01 |
    // +------+------+------+------+
 
    if(little_endian()){
        printf("little endian");
    } else {
        printf("big endian");
    }
 
    // 5. Реализуйте print_data_endian_independent, которая на любом
    // устройстве выведет на экран байты в порядке Big Endian.
 
 
}