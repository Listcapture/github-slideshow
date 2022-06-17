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
	printf("\t\t\t请输入您的电话号码，便于我们联系您：");
	cin >> Pnumber;
	if (Pnumber_check(Pnumber)) {
		printf("\t\t\t请输入您的账号：");
		cin >> t_ac;
		if (Rpcheck(t_ac)) {
			CLS
				printf("\t\t\t该账户已经存在，请重新创建！\n");
			buffer();
			buffer();
			creat_ac();
		}
		else {

			printf("\t\t\t请输入您的密码：");
			cin >> t_key;
			printf("\t\t\t请重新输入您的密码：");
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
					printf("\t\t\t恭喜你成功创建了账号！\n");
					buffer();
					buffer();
					show();
				}
				else {
					CLS
						printf("\t\t\t输入密码前后不一致，请重新注册！\n");
					buffer();
					buffer();
					creat_ac();
				}
			}
			else {
				printf("\t\t\t账号密码长度必须在8-20之间！\n");
				buffer();
				buffer();
				CLS
					G_insert();
			}

		}


	}
	else {
		CLS
			printf("输入有误，请重新注册！\n");
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
	//学生组织
	printf("\t\t\t|                  欢迎  *学生组织*   用户:"); cout << t_ac << endl;
	printf("\t\t\t ----------------------------------------------------------------------- \n");
	printf("\t\t\t|                       欢迎使用教室预约系统                            |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t| 您要做什么？                                                          |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t| -1- 查询可用教室                                                      |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t| -2- 申请预约教室                                                      |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t| -3- 查看我的预约                                                      |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t| -4- 取消预约                                                          |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t| -5- 取消申请并退出                                                    |\n");
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
		printf("\t\t\t|                   欢迎 - *学生组织 *- 用户:"); cout << t_ac << endl;
		printf("\t\t\t ----------------------------------------------------------------------- \n");
		printf("\t\t\t|                       欢迎使用教室预约系统                            |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t|  查询周几的？                                                         |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t| -1- 周一                                                              |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t| -2- 周二                                                              |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t| -3- 周三                                                              |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t| -4- 周四                                                              |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t| -5- 周五                                                              |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t| -6- 周六                                                              |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t| -7- 周日                                                              |\n");
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
				printf("输入有误，请重新输入！");
			buffer();
			buffer();
			CLS
				work1(t_ac, t_key);

		}

	}
	else if (op == 2) {
		int num, day;
		printf("\t\t\t您想在星期___申请教室？\n");
		cin >> day;
		if (day < 1 || day>7) {
			CLS
				printf("\t\t\t输入有误，请重新输入\n");
			buffer();
			buffer();
			work1(t_ac, t_key);
		}
		else
		{
			printf("\t\t\t请输入您想要申请的丹青教室(输入编号即可)：");
			cin >> num;
			if (Is_exist(num)) {
				//申请成功的教室也要加在对象上
				if (room_check(num, day)) {
					CLS
						if (p->cnt <= 5) {
							p->add(day, num);
							printf("\t\t\t申请成功,请等待管理员审核！\n");
							buffer();
							buffer();
							work1(t_ac, t_key);
						}
						else {
							CLS
								printf("\t\t\t当前申请教室已经超过五个啦！\n");
							buffer();
							buffer();
							work1(t_ac, t_key);
						}


				}
				else {
					CLS
						printf("\t\t\t当前申请的教室已被占用，请重新申请！\n");
					buffer();
					buffer();
					work1(t_ac, t_key);
				}

			}
			else {
				CLS
					printf("\t\t\t教室编号不存在，请重新输入！\n");
				buffer();
				buffer();
				work1(t_ac, t_key);
			}


		}

	}
	else
		if (op == 3) {

			if (p->cnt == 0) {
				printf("\t\t\t您当前并未申请任何教室！ \n");
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
				printf("\t\t\t您要撤销星期几(1-7)的预约：\n");
				int day;
				cin >> day;
				if (day < 1 || day>7) {
					CLS;
					printf("\t\t\t输入有误，请重新预约！\n");
					buffer();
					buffer();
					work1(t_ac, t_key);
				}
				else {
					int num;
					printf("\t\t\t请输入您要撤销教室：\n");
					cin >> num;

					int flag = p->has(day, num);
					if (flag) {
						p->erase(day, num);
						printf("\t\t\t已经取消该预约!\n");
						buffer();
						buffer();
						work1(t_ac, t_key);
					}
					else {
						CLS
							printf("\t\t\t您并没有预约过该教室！\n");
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
						printf("\t\t\t输入有误，请重新申请！\n");
					buffer();
					buffer();
					work1(t_ac, t_key);
				}

}