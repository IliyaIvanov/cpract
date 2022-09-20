#include <stdio.h>

int arr[] = { 0xa, 1, 2, 3, 4, 5, 6, 7 };

#define ARR_SIZE (sizeof(arr) / sizeof(int))

void save_to_file(char *filename, int *arr, int size) {
  FILE *fp = fopen(filename, "wb");
  fwrite(arr, sizeof(int), size, fp);
  fclose(fp);
}

void load_from_file(char *filename, int *arr, int size) {
  FILE *fp = fopen(filename, "r");
  fread(arr, sizeof(int), size, fp);
  fclose(fp);
}
 
void print_array(int *arr, int size) {
  for (int i = 0; i < size; i += 1) {
    printf("%08x\n", arr[i]);
  }
}

int main(int argc, char** argv) {
  int new_arr[ARR_SIZE];
  save_to_file("data.bin", arr, ARR_SIZE);
  load_from_file("data.bin", new_arr, ARR_SIZE);
  print_array(new_arr, ARR_SIZE);
  return 0;
}