//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//typedef int (*Predicate)(int);
//int* filter(int* array, int length, Predicate predicate,
//    int* resultLength); /*��ȫ����*/
//int isPositive(int num) { return num > 0; }
//int main(void) {
//    int array[] = { -3, -2, -1, 0, 1, 2, 3, 4, 5, 6 };
//    int length = sizeof(array) / sizeof(array[0]);
//    int resultLength;
//    int* filteredNumbers = filter(array, length, isPositive,
//        &resultLength);
//    for (int i = 0; i < resultLength; i++) {
//        printf("%d ", filteredNumbers[i]);
//    }
//    printf("\n");
//    free(filteredNumbers);
//    return 0;
//}
//int yfuck = 1;//������13 14��
#include<iostream>
using namespace std;
typedef union {
    long l;
    int i[5];
    char c;
} UNION;
typedef struct {
    int like;//4�ֽ�
    UNION coin;//24�ֽڣ���Ҫ��8�ı�����ʼ���룬���ڰ˸���ʼ��
    double collect;//8�ֽڣ��պô�32��ʼ���롣
} STRUCT;
int main(void) {
    printf("sizeof (UNION) = %zu\n", sizeof(UNION));
    printf("sizeof (STRUCT) = %zu\n", sizeof(STRUCT));
}