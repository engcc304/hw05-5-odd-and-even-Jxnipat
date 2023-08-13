/*
    จงรับตัวเลขจากผู้ใช้ และให้แสดงผลลัพธ์ว่าเป็นเลขคู่หรือเลขคี่
    
    Test case:
        Input :
            15

    Output:
        15 is an odd integer

    Test case:
        Input :
            -22

    Output:
        -22 is an even integer

*/
#include <stdio.h>

int main() {
    int number;

    // รับตัวเลขจากผู้ใช้
    printf("Input: ");
    scanf("%d", &number);

    // เปรียบเทียบและแสดงผลลัพธ์
    if (number % 2 == 0) {
        printf("%d is an even integer\n", number);
    } else {
        printf("%d is an odd integer\n", number);
    }

    return 0;
}
