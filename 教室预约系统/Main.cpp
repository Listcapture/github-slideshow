//账号重复检测，房间申请重复检测，账号合法检测，房间占用检测，房间编号检查。
#include"head.h"
int Is_exist(int num) {
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 22; j++) {
			if (i * 100 + j == num) return 1;
		}
	}
	return 0;
}
//函数声明：
int Room[8][11][24];
void buffer() { 
	for (int i = 1; i <= 1e9; i++) {
		;
	}
}
void signin();//登陆界面
Gnode* GH; Tnode* TH;
//链表

bool okac(string t_ac,string t_key) {
	int l1 = t_ac.size(), l2 = t_key.size();
	if (l1 < 8 || l1>20 || l2 < 8 || l2>20) return 0;
	return 1;
}
int check(string t_ac, string t_key, int id) {
	int l1 = t_ac.size(), l2 = t_key.size();
	if ((l1 < 8 || l1>20) || l2 < 8 || l2 >20) return 0;
	if (id == 1) {
		return G_find(t_ac, t_key);
	}
	else if (id == 2) {
		return T_find(t_ac, t_key);
	}
	else {
		ifstream ifs;
		ifs.open(AD, ios::in);
		string ac, key;
		ifs >> ac && ifs >> key;
		ifs.close();
		if (ac == t_ac && key == t_key) return  1;
		
	}
	return 0;
	
}
void print_using_room(int day) {
	CLS
	int t = 0;
	printf("\t\t\t星期%d的可用教室如下：\n",day);
	printf("\t\t\t");
	for (int i = 1; i <= 10; i++) {
	
		for (int j = 1; j <= 22; j++) {
			t++;
			if (!Room[day][i][j]) {
				printf("丹青%d%02d ",i,j);
			}
			if (t >= 10)
			{
				printf("\n");
				t = 0;
				printf("\t\t\t");
			}

		}
	}
	printf("\n");
	system("pause");
	
}
bool custom_check(string t_ac, string t_key,int id) {
	if (id == 1) {
		return T_find(t_ac, t_key);
	}
	else if (id == 2) {
		return G_find(t_ac, t_key);
	}
	else {
		return T_find(t_ac, t_key);
	}
}
bool room_check(int num,int day) {
	return !Room[day][num / 100][num % 100];
}
void addRoom(Rnode* H, int day, int num) {
	Rnode* p;
	p = (Rnode*)malloc(sizeof(Rnode));
	p->day = day;
	p->number = num;
	p->next = H->next;
	H->next = p;
}
void printRoom(Rnode*H) {
	printf("\t\t\t您已经申请的教室如下:\n");
	Rnode* tp;
	tp = H->next;
	while (tp != NULL) {
		printf("\t\t\t星期：%d 教室：丹青%d\n", tp->day, tp->number);
		tp = tp->next;
	}
}
void eraseRoom(Rnode* H, int day, int num) {
	Rnode* p,*pre,*q;
    pre = H;
	p = H->next;
	
	while (p != NULL) {
		if (p->day == day && p->number == num)
		{
			q = p;
			pre->next = p->next;
			free(q);
			return;
		}

		pre = p;
		p = p->next;
	}
}
//**********多文件
//*********
extern void work3() {
	printf("\t\t\t|                  欢迎  * 管理员 *                                        \n");
	printf("\t\t\t ----------------------------------------------------------------------- \n");
	printf("\t\t\t|                       欢迎使用教室预约系统                            |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t| 您要做什么？                                                          |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t| -1- 查看所有预约                                                      |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t| -2- 取消所有预约(同时删除所有用户的预约数据)                          |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t| -3- 修改管理员账号和密码                                              |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t| -4- 登出                                                              |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t ----------------------------------------------------------------------- \n");
	int op;
	cin >> op;
	if (op == 1) {
		Gnode* p1;
		Tnode* p2;
		p1 = GH->next;
		while (p1 != NULL) {
			p1->print();
			p1 = p1->next;
		}

		p2 = TH->next;
		while (p2 != NULL) {
			p2->print();
			p2 = p2->next;
		}
		system("pause");
		CLS
			work3();
	}
	else if (op == 2) {
		ofstream ofs;
		ofs.open(OF, ios::trunc);
		ofs.close();
		All_clear();
		printf("\t\t\t初始化成功，程序即将退出！\n");
		exit(0);
		work3();
	}
	else if (op == 3) {
		ofstream ofs;
		ofs.open(AD, ios::trunc | ios::out);
		printf("\t\t\t请输入修改后的账户：");
		string ac;
		cin >> ac;
		printf("\t\t\t请输入修改后的密码：");
		string key;
		cin >> key;
		ofs << ac << " " << key << endl;
		printf("\t\t\t修改成功,返回初始界面！");
		ofs.close();
		system("pause");
		CLS;
		show();
	}
	else if (op == 4) {
		printf("\t\t\t登出成功！\n");
		buffer();
		buffer();
		CLS
			show();
	}
	else {
		printf("\t\t\t输入有误，请重新输入！\n");
		buffer();
		buffer();
		CLS
			work3();
	}
}
//*********
int main() {
	//主函数
	introduction();
	GH = new Gnode;
	TH = new Tnode;
	GH->next = NULL;
	TH->next = NULL;
	All_to_Linknode();
	show();
	system("pause");
	return 0;
}
