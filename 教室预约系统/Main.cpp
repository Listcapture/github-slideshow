//�˺��ظ���⣬���������ظ���⣬�˺źϷ���⣬����ռ�ü�⣬�����ż�顣
#include"head.h"
int Is_exist(int num) {
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 22; j++) {
			if (i * 100 + j == num) return 1;
		}
	}
	return 0;
}
//����������
int Room[8][11][24];
void buffer() { 
	for (int i = 1; i <= 1e9; i++) {
		;
	}
}
void signin();//��½����
Gnode* GH; Tnode* TH;
//����

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
	printf("\t\t\t����%d�Ŀ��ý������£�\n",day);
	printf("\t\t\t");
	for (int i = 1; i <= 10; i++) {
	
		for (int j = 1; j <= 22; j++) {
			t++;
			if (!Room[day][i][j]) {
				printf("����%d%02d ",i,j);
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
	printf("\t\t\t���Ѿ�����Ľ�������:\n");
	Rnode* tp;
	tp = H->next;
	while (tp != NULL) {
		printf("\t\t\t���ڣ�%d ���ң�����%d\n", tp->day, tp->number);
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
//**********���ļ�
//*********
extern void work3() {
	printf("\t\t\t|                  ��ӭ  * ����Ա *                                        \n");
	printf("\t\t\t ----------------------------------------------------------------------- \n");
	printf("\t\t\t|                       ��ӭʹ�ý���ԤԼϵͳ                            |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t| ��Ҫ��ʲô��                                                          |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t| -1- �鿴����ԤԼ                                                      |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t| -2- ȡ������ԤԼ(ͬʱɾ�������û���ԤԼ����)                          |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t| -3- �޸Ĺ���Ա�˺ź�����                                              |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t| -4- �ǳ�                                                              |\n");
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
		printf("\t\t\t��ʼ���ɹ������򼴽��˳���\n");
		exit(0);
		work3();
	}
	else if (op == 3) {
		ofstream ofs;
		ofs.open(AD, ios::trunc | ios::out);
		printf("\t\t\t�������޸ĺ���˻���");
		string ac;
		cin >> ac;
		printf("\t\t\t�������޸ĺ�����룺");
		string key;
		cin >> key;
		ofs << ac << " " << key << endl;
		printf("\t\t\t�޸ĳɹ�,���س�ʼ���棡");
		ofs.close();
		system("pause");
		CLS;
		show();
	}
	else if (op == 4) {
		printf("\t\t\t�ǳ��ɹ���\n");
		buffer();
		buffer();
		CLS
			show();
	}
	else {
		printf("\t\t\t�����������������룡\n");
		buffer();
		buffer();
		CLS
			work3();
	}
}
//*********
int main() {
	//������
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
