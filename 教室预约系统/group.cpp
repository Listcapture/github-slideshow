#include"head.h"
Gnode* G_get(string t_ac) {
	Gnode* p;
	p = GH->next;
	while (p != nullptr) {
		if (p->ac == t_ac)
		{
			return p;
		}
		p = p->next;
	}
	return NULL;
}
void G_insert() {
	string t_ac, t_key, tt_key;
	string Pnumber;
	printf("\t\t\t���������ĵ绰���룬����������ϵ����");
	cin >> Pnumber;
	if (Pnumber_check(Pnumber)) {
		printf("\t\t\t�����������˺ţ�");
		cin >> t_ac;
		if (Rpcheck(t_ac)) {
			CLS
				printf("\t\t\t���˻��Ѿ����ڣ������´�����\n");
			buffer();
			buffer();
			creat_ac();
		}
		else {

			printf("\t\t\t�������������룺");
			cin >> t_key;
			printf("\t\t\t�����������������룺");
			cin >> tt_key;
			if (okac(t_ac, t_key)) {
				if (t_key == tt_key) {
					CLS
						addAC(1, t_ac, t_key);
					Gnode* p = new Gnode;
					Rnode* TRH = new Rnode;
					TRH->next = NULL;
					p->RH = TRH;
					p->ac = t_ac;
					p->key = t_key;
					p->Phone_number = Pnumber;
					p->next = GH->next;
					GH->next = p;
					printf("\t\t\t��ϲ��ɹ��������˺ţ�\n");
					buffer();
					buffer();
					show();
				}
				else {
					CLS
						printf("\t\t\t��������ǰ��һ�£�������ע�ᣡ\n");
					buffer();
					buffer();
					creat_ac();
				}
			}
			else {
				printf("\t\t\t�˺����볤�ȱ�����8-20֮�䣡\n");
				buffer();
				buffer();
				CLS
					G_insert();
			}

		}


	}
	else {
		CLS
			printf("��������������ע�ᣡ\n");
		buffer();
		buffer();
		creat_ac();
	}

}
bool G_find(string t_ac, string t_key) {
	Gnode* p;
	p = GH->next;
	while (p != NULL) {
		if (p->ac == t_ac && p->key == t_key)
		{
			return 1;
		}
		p = p->next;
	}
	return 0;
}
 void work1(string t_ac, string t_key) {
	//ѧ����֯
	printf("\t\t\t|                  ��ӭ  *ѧ����֯*   �û�:"); cout << t_ac << endl;
	printf("\t\t\t ----------------------------------------------------------------------- \n");
	printf("\t\t\t|                       ��ӭʹ�ý���ԤԼϵͳ                            |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t| ��Ҫ��ʲô��                                                          |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t| -1- ��ѯ���ý���                                                      |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t| -2- ����ԤԼ����                                                      |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t| -3- �鿴�ҵ�ԤԼ                                                      |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t| -4- ȡ��ԤԼ                                                          |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t| -5- ȡ�����벢�˳�                                                    |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|_______________________________________________________________________|\n");
	int op;
	cin >> op;
	Gnode* p = G_get(t_ac);
	if (op == 1)
	{
		int day;
		printf("\t\t\t|                   ��ӭ - *ѧ����֯ *- �û�:"); cout << t_ac << endl;
		printf("\t\t\t ----------------------------------------------------------------------- \n");
		printf("\t\t\t|                       ��ӭʹ�ý���ԤԼϵͳ                            |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t|  ��ѯ�ܼ��ģ�                                                         |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t| -1- ��һ                                                              |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t| -2- �ܶ�                                                              |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t| -3- ����                                                              |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t| -4- ����                                                              |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t| -5- ����                                                              |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t| -6- ����                                                              |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t| -7- ����                                                              |\n");
		printf("\t\t\t|_______________________________________________________________________|\n");
		cin >> day;
		if (day == 1) {
			print_using_room(day);
			work1(t_ac, t_key);
		}
		else if (day == 2) {
			print_using_room(day);
			work1(t_ac, t_key);
		}
		else if (day == 3) {
			print_using_room(day);
			work1(t_ac, t_key);
		}
		else if (day == 4) {
			print_using_room(day);
			work1(t_ac, t_key);
		}
		else if (day == 5) {
			print_using_room(day);
			work1(t_ac, t_key);
		}
		else if (day == 6) {
			print_using_room(day);
			work1(t_ac, t_key);
		}
		else if (day == 7) {
			print_using_room(day);
			work1(t_ac, t_key);
		}
		else {
			CLS
				printf("�����������������룡");
			buffer();
			buffer();
			CLS
				work1(t_ac, t_key);

		}

	}
	else if (op == 2) {
		int num, day;
		printf("\t\t\t����������___������ң�\n");
		cin >> day;
		if (day < 1 || day>7) {
			CLS
				printf("\t\t\t������������������\n");
			buffer();
			buffer();
			work1(t_ac, t_key);
		}
		else
		{
			printf("\t\t\t����������Ҫ����ĵ������(�����ż���)��");
			cin >> num;
			if (Is_exist(num)) {
				//����ɹ��Ľ���ҲҪ���ڶ�����
				if (room_check(num, day)) {
					CLS
						if (p->cnt <= 5) {
							p->add(day, num);
							printf("\t\t\t����ɹ�,��ȴ�����Ա��ˣ�\n");
							buffer();
							buffer();
							work1(t_ac, t_key);
						}
						else {
							CLS
								printf("\t\t\t��ǰ��������Ѿ������������\n");
							buffer();
							buffer();
							work1(t_ac, t_key);
						}


				}
				else {
					CLS
						printf("\t\t\t��ǰ����Ľ����ѱ�ռ�ã����������룡\n");
					buffer();
					buffer();
					work1(t_ac, t_key);
				}

			}
			else {
				CLS
					printf("\t\t\t���ұ�Ų����ڣ����������룡\n");
				buffer();
				buffer();
				work1(t_ac, t_key);
			}


		}

	}
	else
		if (op == 3) {

			if (p->cnt == 0) {
				printf("\t\t\t����ǰ��δ�����κν��ң� \n");
				system("pause");
				work1(t_ac, t_key);
			}
			else {
				p->print();
				system("pause");
				CLS
					work1(t_ac, t_key);
			}
		}
		else
			if (op == 4) {
				printf("\t\t\t��Ҫ�������ڼ�(1-7)��ԤԼ��\n");
				int day;
				cin >> day;
				if (day < 1 || day>7) {
					CLS;
					printf("\t\t\t��������������ԤԼ��\n");
					buffer();
					buffer();
					work1(t_ac, t_key);
				}
				else {
					int num;
					printf("\t\t\t��������Ҫ�������ң�\n");
					cin >> num;

					int flag = p->has(day, num);
					if (flag) {
						p->erase(day, num);
						printf("\t\t\t�Ѿ�ȡ����ԤԼ!\n");
						buffer();
						buffer();
						work1(t_ac, t_key);
					}
					else {
						CLS
							printf("\t\t\t����û��ԤԼ���ý��ң�\n");
						buffer();
						buffer();
						work1(t_ac, t_key);
					}
				}

			}
			else
				if (op == 5) {
					CLS
						show();
				}
				else {
					CLS
						printf("\t\t\t�����������������룡\n");
					buffer();
					buffer();
					work1(t_ac, t_key);
				}

}