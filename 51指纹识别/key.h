#ifndef _KEY_H_
#define _KEY_H_
#include <reg52.h>

//���尴������˿�
sbit KEY_DOWN=P1^0;
sbit KEY_OK=P1^1;
sbit KEY_CANCEL=P1^2;

void Key_Init(void);

#endif
