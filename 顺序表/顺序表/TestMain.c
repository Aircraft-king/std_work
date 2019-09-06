
#include"common.h"
#include"seqlist.h"

int main(int argc, char *argv[])
{
	SeqList mylist;
	SeqListInit(&mylist, 8);

	DataType item;
	DataType data;

	int select = 1;
	while (select)
	{
		printf("************************************\n");
		printf("* [1] push_back     [2] push_front *\n");
		printf("* [3] show_list     [0] quit_system*\n");
		printf("* [4] pop_back      [5] pop_front  *\n");
		printf("* [6] find_pos      [7] find_val   *\n");
		printf("* [8] insert_pos    [9] delete_val *\n");
		printf("* [10] delete_pos   [11]length     *\n");
		printf("* [12] remove_all   [13] reverse   *\n");
		printf("* [14] sort         [15] clear     *\n");
		printf("************************************\n");
		printf("��ѡ��:>");
		scanf("%d", &select);
		if (select == 0)
			break;
		switch (select)
		{
		case 1:
			printf("������Ҫ���������(��-1����):>");
			while (scanf("%d", &item), item != -1)
			{
				SeqListPushBack(&mylist, item);
			}
			break;
		case 2:
			printf("������Ҫ���������(��-1����):>");
			while (scanf("%d", &item), item != -1)
			{
				SeqListPushFront(&mylist, item);
			}
			break;
		case 3:
			SeqListShow(&mylist);
			break;	
		case 4:
			SeqListPopBack(&mylist);
			break;
		case 5:
			SeqListPopFront(&mylist);
			break;
		case 6:
			printf("������Ҫ��������λ��\n");
			scanf("%d", &item);
			if (SeqListFind_pos(&mylist, item)==-1) {
				printf("����λ��û����Ч����\n");
			}
			else {
				printf("%d\n", SeqListFind_pos(&mylist, item));
			}
			break;
		case 7:
			printf("������Ҫ���ҵ���\n");
			scanf("%d", &item);
			if (SeqListFind_pos(&mylist, item) == -1) {
				printf("��˳���û���������\n");
			}
			else printf("%d \n",SeqListFind_val(&mylist, item));
			break;
		case 8:
			printf("������Ҫ��������λ��\n");
			scanf("%d", &item);

			printf("������Ҫ�������\n");
			scanf("%d", &data);
            
			SeqListInsert(&mylist, item, data);
			break;
		case 9:
			printf("������Ҫɾ������\n");
			scanf("%d", &item);
			SeqListDelete_val(&mylist, item);
			break;
		case 10:
			printf("������Ҫɾ����λ��\n");
			scanf("%d", &item);
			SeqListDelete_pos(&mylist, item);
			break;
		case 11:
			printf("Ŀǰ����ռ�õĳ���Ϊ%d\n",SeqListLenth(&mylist));
			break;
		case 12:
			SeqListRemove_All(&mylist);
			break;
		case 13:
			SeqListReverse(&mylist);
			break;
		case 14:
			SeqListSort(&mylist);
			break;
		case 15:
			SeqListClear(&mylist);
			break;
		}
	
	}
	return 0;
}