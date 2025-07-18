#include <stdio.h>

void countCall() {
    int counter = 0;
    counter++;
    printf("Call Function: Counter =  %d\n", counter);
}
int main() {
    printf("Starting function calls...\n");
    countCall();  
    printf("After first call:\n");
    countCall();  
    return 0;
}

/* 1ผลลัพธ์ที่ได้ต่างกันอย่างไร? เพราะเหตุใด?

ต่างกัน: กรณีที่ 1 นับค่าต่อเนื่อง (1 → 2) เพราะใช้ static
 ส่วนกรณีที่ 
 2 นับใหม่ทุกครั้งเพราะไม่ใช้ static

ความหมายของ Non-Static Variable?

ตัวแปรที่ถูกสร้างใหม่ทุกครั้งที่มีการเรียกใช้ฟังก์ชัน จะไม่คงค่าไว้ระหว่างการเรียกแต่ละครั้ง

3.สรุปข้อแตกต่างระหว่าง Static และ Non-Static Variable:

Static: ค่าถูกเก็บไว้ในหน่วยความจำแม้ฟังก์ชันจบการทำงาน

Non-Static: ค่าถูกรีเซ็ตใหม่ทุกครั้งที่เรียกใช้ฟังก์ชัน */
