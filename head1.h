/****************��������***********************/
int menu();
int check_in();
int register_();
int modify(char a[]);
int delete_(char a[]);
int find(char a[]);
list create_list(char filepath[]);
void print_by_num();
void print_by_pro();



/****************�ṹ������**********************/
typedef struct student
{
	char num[10];
	char name[10];
	char gender[4];
	int age;
	char origin[10];
	char department[10];
	char profession[10];
	char class_[10];
}   Student;
typedef Student* List
typedef List Position

/***************��������**************************/

int menu()
{
	int choice;
	printf("��ӭ����ѧ��ѧ������ϵͳ��\n
		    ѧ����Ϣ�Ǽ�-------------------------1\n
			ѧ����Ϣ�޸�-------------------------2\n
			ѧ����Ϣɾ��-------------------------3\n
			ѧ����Ϣ����-------------------------4\n
			��ѧ�������Ϣ��---------------------5\n
			��רҵ�����Ϣ��---------------------6\n
			����������ѡ��:  ");
    scanf("%d",&choice);
	
}

list create_list(char filepath[30])
{
	List list,tmp;
	char ch,mid[10];
	FILE* in;
	if((in=fopen(filepath,"r"))==NULL)
	{
		print("�޷��򿪴��ļ�\n";
		exit(0);
	}
	


