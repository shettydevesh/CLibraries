#ifndef replace_h
#define replace_h
#include"replacealgo.c"
void getData();
void initialize();
int isHit(int data);
int getHitIndex(int data);
void dispPages();
void dispPgFaultCnt();
void fifo();
void optimal();
void lru();
#endif