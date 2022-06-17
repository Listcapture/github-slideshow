#pragma once
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#include<fstream>
#include<string >
#include<malloc.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<string >
#include<math.h>
#include<stdlib.h>
#define AC "account.txt"
#define AD "admin.txt"
#define GF "group.txt"
#define TF "teacher.txt"
#define OF  "order.txt"
#define RF  "room.txt"//房间使用情况
#define Max_cap 220
#define Max_floor 10
#define ON 1
#define OFF 0;
#define P_number Phone_number
#define CLS system("cls");
#define max(a,b) a>b?a:b;
#define min(a,b) a<b?a:b;
#define Hred   100
#define Thand  1000
#define scanf cin>>
extern int Room[8][11][24];
void creat_ac();
void  show();
void All_to_File();
void All_ACinsert(int type, string t_ac, string t_key);
void All_Roominsert(int type, string t_ac, int day, int num);
void All_to_Linknode();
void All_clear();
int Pnumber_check(string number);
void work(int id, string t_ac, string t_key);
void work1(string t_ac, string t_key);// group
void work2(string t_ac, string t_key);
void work3();
void buffer();
void Pnumber_check(int num);
int  Is_exist(int num);
int   Rpcheck(string ac);
void addAC(int type, string t_ac, string t_key);
void addOF(int type, string t_ac, int day, int number);
bool okac(string t_ac, string t_key);
void T_insert();
void G_insert();
bool T_find(string ac, string key);
bool G_find(string ac, string key);
int check(string ac, string key, int id);
void print_using_room(int day);
bool room_check(int day, int num);
void introduction();
struct rnode {
	int day, number;
	struct rnode* next;
};
typedef rnode Rnode;
struct  gnode {
	string ac;
	string key;
	int cnt = 0;
	//电话号码
	struct  gnode* next;
	string P_number;
	Rnode* RH;
	void add(int day, int num) {
		cnt++;
		Rnode* p = new Rnode;
		p->day = day;
		p->number = num;
		p->next = RH->next;
		RH->next = p;
		Room[day][num / 100][num % 100] = 1;
	}
	void print() {
		printf("\t\t\t您已经申请的教室如下:\n");
		Rnode* tp;
		tp = RH->next;
		while (tp != NULL) {
			printf("\t\t\t星期：%d 教室：丹青%d\n", tp->day, tp->number);
			tp = tp->next;
		}

	}
	int has(int day, int num) {
		Rnode* p;
		p = RH->next;
		while (p != NULL) {
			if (p->day == day && p->number == num) {
				return  1;
			}
			p = p->next;
		}
		return 0;
	}
	void erase(int day, int num) {
		cnt--;
		Room[day][num / 100][num % 100] = 0;
		Rnode* p, * pre, * q;
		pre = RH;
		p = RH->next;
		while (p != NULL) {
			if (p->day == day && p->number == num) {
				pre->next = p->next;
				q = p;
				free(q);
				return;
			}
			pre = p;
			p = p->next;
		}
	}
	void clear() {
		cnt = 0;
		Rnode* p, * nxt;
		p = RH->next;
		while (p != NULL) {
			nxt = p->next;
			delete p;
			p = nxt;
		}
		RH->next = NULL;
	}
};
struct  tnode {
	string ac, key;
	Rnode* RH;
	struct tnode* next;
	string P_number;
	int cnt = 0;
	void add(int day, int num) {
		cnt++;
		Rnode* p = new Rnode;
		p->day = day;
		p->number = num;

		p->next = RH->next;
		RH->next = p;
		Room[day][num / 100][num % 100] = 1;
	}
	void print() {
		printf("\t\t\t您已经申请的教室如下:\n");
		Rnode* p;
		p = RH->next;
		while (p != NULL) {
			printf("\t\t\t星期：%d 教室：丹青%d\n", p->day, p->number);
			p = p->next;
		}
		system("pause");
		CLS;
	}
	void erase(int day, int num) {
		cnt--;
		Room[day][num / 100][num % 100] = 0;
		Rnode* p, * pre, * q;
		pre = RH;
		p = RH->next;
		while (p != NULL) {
			if (p->day == day && p->number == num) {
				pre->next = p->next;
				q = p;
				free(q);
				return;
			}
			pre = p;
			p = p->next;
		}
	}
	void clear() {
		cnt = 0;
		Rnode* p, * nxt;
		p = RH->next;
		while (p != NULL) {
			nxt = p->next;
			delete p;
			p = nxt;

		}

		RH->next = NULL;
	}
	void modify(int day, int num, int t_day, int t_num) {
		Rnode* p;
		p = RH->next;
		while (p != NULL) {
			if (p->day == day && p->number == num) {
				p->day = t_day;
				p->number = t_num;
				return;
			}
			p = p->next;
		}
	}
	int has(int day, int num) {
		Rnode* p;
		p = RH->next;
		while (p != NULL) {
			if (p->day == day && p->number == num) {
				return  1;
			}
			p = p->next;
		}
		return 0;
	}

};
typedef gnode Gnode;
typedef tnode Tnode;
 struct RoomMessage {
	int  type;
	string ac;
	int  day;
	int num;
};
 typedef RoomMessage RM;
 
 struct AccountMessage {
	//用于登陆时账号检测
	int type;
	string ac;
	string key;
};
 typedef AccountMessage ACM;
extern   Gnode *GH;
extern Tnode* TH;
Gnode* G_get(string ac);
Tnode* T_get(string ac);
