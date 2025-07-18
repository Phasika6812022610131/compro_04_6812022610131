#include <stdio.h>

const int GLOBAL_RATE = 10;  // ค่าคงที่ระดับ global

void calculate() {
    const int LOCAL_BONUS = 50;  // ค่าคงที่ระดับ local
    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);
}

int main() {
    calculate();

    // ทดลองพิมพ์ค่าตัวแปร LOCAL_BONUS ที่นี่ (จะเกิด error)
    // printf("LOCAL_BONUS in main = %d\n", LOCAL_BONUS); 

    return 0;
}

/* 1.ค่าคงที่ GLOBAL_RATE และ LOCAL_BONUS ต่างกันอย่างไร?

GLOBAL_RATE ประกาศในระดับ global ใช้ได้ทุกฟังก์ชัน

LOCAL_BONUS ประกาศในฟังก์ชัน calculate() ใช้ได้เฉพาะในฟังก์ชันนั้น

2.ถ้าต้องการเปลี่ยนค่า GLOBAL_RATE = 20; หรือ LOCAL_BONUS = 80; ได้หรือไม่?

ไม่ได้ เพราะเป็นค่าคงที่ (const) ไม่สามารถเปลี่ยนค่าได้ (compile-time error)

3.ทำไมไม่สามารถใช้ LOCAL_BONUS ที่ประกาศใน calculate() ไปใช้ใน main() ได้?

เพราะ LOCAL_BONUS มีขอบเขต (scope) อยู่เฉพาะในฟังก์ชัน calculate() เท่านั้น

4.สรุปข้อแตกต่างระหว่างค่าคงที่ระดับ global และ local:

Global const: ใช้ได้ในทุกฟังก์ชัน

Local const: ใช้ได้เฉพาะภายในฟังก์ชันที่ประกาศ */

