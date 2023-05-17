#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define _CRT_SECURE_NO_WARNINGS
#define MAX_NLEN 10
char my_mbti[5] = "INTJ";// ���� MBTI


typedef struct ListNode {
    char name[MAX_NLEN + 1]; // �̸�
    char mbti[5]; // MBTI
    int score; // MBTI ���絵�� ���� ����
    struct ListNode* pNext; // ���� ��ũ
}listNode;

// ��� ���: ����Ʈ�� ������ ��Ÿ��
typedef struct {
    listNode* pHead;
}linkedList_h;



// pHeader�� MBTI�� �������� �ι�° ���ڰ��� MBTI���� ���絵�� ���� ������ å���ϴ� �Լ�:
int CalcMBTIScore(char* mbti) {
    int score = 0;
    for (int i = 0; i < 4; i++) {
        if (my_mbti[i] == mbti[i]) {
            score++;
        }
    }
    return score;
}


// ���� ����Ʈ �����ϴ� ����
linkedList_h* createLinkedList() {
    linkedList_h* L;
    L = (linkedList_h*)malloc(sizeof(linkedList_h)); // �����Ҵ�

    // ����ó��:
    if (!L) {
        // L == NULL: �����Ҵ� ����:
        printf("Error: Cannot malloc()!\n");
        return NULL;
    }

    // �� ����:
    L->pHead = NULL; // ���� ����Ʈ�̹Ƿ� ù ��带 NULL�� ����
    //strcpy(my_mbti, mbti); // MBTI �� ����

    return L;
}


// ���� ����Ʈ�� ������ ���� �޸𸮸� �����ϴ� �Լ�:
void freeLinkedList(linkedList_h* L) {
    // ����ó��:
    if (!L) {
        // L == NULL: �������� ���� ����Ʈ:
        printf("Error: Empty List!\n");
        return;
    }


    listNode* pCur;
    while (L->pHead) {
        pCur = L->pHead;
        L->pHead = L->pHead->pNext;
        free(pCur); // �޸� ����
        pCur = NULL;
    }
}


// ���� ����Ʈ�� ������� ����ϴ� ����:
void printList(linkedList_h* L) {
    // ����ó��:
    if (!L) {
        // L == NULL: �������� ���� ����Ʈ:
        printf("Error: Empty List!\n");
        return;
    }


    // ����Ʈ ��ȸ�ϸ� ���:
    listNode* pCur;
    printf("L = (\n");
    pCur = L->pHead;
    while (pCur) {
        printf("%s, %s, %dpoint", pCur->name, pCur->mbti, pCur->score); // ���� ���
        pCur = pCur->pNext; // ���� ���� �̵�
        if (pCur) printf(",\n");
    }
    printf("\n)\n");
}


// ����Ʈ�� ù ��° ���� �����ϴ� ����:
void insertFirstNode(linkedList_h* L, char* name, char* mbti) {
    // ����ó��:
    if (!L) {
        // L == NULL: �������� ���� ����Ʈ:
        printf("Error: Empty List!\n");
        return;
    }


    // �� ��� ����:�޸� �Ҵ�:
    listNode* pNew = NULL;
    pNew = (listNode*)malloc(sizeof(listNode)); // �����Ҵ�

    // ����ó��:
    if (!pNew) {
        // pNew == NULL: �����Ҵ� ����:
        printf("Error: Cannot malloc()!\n");
        return;
    }

    // �� ��忡 �� ����:
    strcpy(pNew->name, name); // �̸�
    strcpy(pNew->mbti, mbti); // MBTI
    pNew->score = CalcMBTIScore(mbti); // MBTI ���絵�� ���� ���� ����Ͽ� ����.


    // ���� ����Ʈ�� �����ϱ�:
    pNew->pNext = L->pHead;
    L->pHead = pNew;
}


// ����Ʈ�� �߰��� ��带 �����ϴ� ����
void insertMiddleNode(linkedList_h* L, listNode* pre, char* name, char* mbti) {
    // ����ó��:
    if (!L) {
        // L == NULL: �������� ���� ����Ʈ:
        printf("Error: Empty List!\n");
        return;
    }
    if (!pre) {
        // pre == NULL: ���� ���:
        printf("Error: Empty Node!\n");
        return;
    }


    // �� ��� ����:�޸� �Ҵ�:
    listNode* pNew = NULL;
    pNew = (listNode*)malloc(sizeof(listNode)); // �����Ҵ�

    // ����ó��:
    if (!pNew) {
        // pNew == NULL: �����Ҵ� ����:
        printf("Error: Cannot malloc()!\n");
        return;
    }

    // �� ��忡 �� ����:
    strcpy(pNew->name, name); // �̸�
    strcpy(pNew->mbti, mbti); // MBTI
    pNew->score = CalcMBTIScore(mbti); // MBTI ���絵�� ���� ���� ����Ͽ� ����.


    // ���� ����Ʈ�� �����ϱ�:
    if (!(L->pHead)) {
        // Case 1. ���� ����Ʈ�� ���:
        // �� ��带 ù ��°���� ������ ���� ����
        pNew->pNext = NULL;
        L->pHead = pNew;
    }
    else if (!pre) {
        // Case 2. ���� ��ġ�� �����ϴ� ������ pre�� NULL�� ���:
        // �� ��带 ù ��°���� ������ ���� ����
        pNew->pNext = NULL;
        L->pHead = pNew;
    }
    else {
        // Case 3. ������ pre�� ��� �ڿ� �� ��� ����:
        pNew->pNext = pre->pNext;
        pre->pNext = pNew;
    }
}



// ����Ʈ�� ������ ���μ� �����ϴ� ����.
void insertLastNode(linkedList_h* L, char* name, char* mbti) {
    // ����ó��:
    if (!L) {
        // L == NULL: �������� ���� ����Ʈ:
        printf("Error: Empty List!\n");
        return;
    }


    // �� ��� ����:�޸� �Ҵ�:
    listNode* pNew = NULL;
    pNew = (listNode*)malloc(sizeof(listNode)); // �����Ҵ�

    // ����ó��:
    if (!pNew) {
        // pNew == NULL: �����Ҵ� ����:
        printf("Error: Cannot malloc()!\n");
        return;
    }

    // �� ��忡 �� ����:
    strcpy(pNew->name, name); // �̸�
    strcpy(pNew->mbti, mbti); // MBTI
    pNew->score = CalcMBTIScore(mbti); // MBTI ���絵�� ���� ���� ����Ͽ� ����.


    pNew->pNext = NULL;
    if (!(L->pHead)) {
        // Case 1. ���� ����Ʈ�� ������ ���:
        // �� ��带 ����Ʈ�� ���� ���� ����
        L->pHead = pNew;
        return;
    }
    // Case 2. ���� ����Ʈ�� ������ �ƴ� ���:
    listNode* temp = L->pHead;
    while (temp->pNext) {
        // ���� ����Ʈ�� ������ ��带 ã��:
        temp = temp->pNext;
    }
    temp->pNext = pNew; // �� ��带 ������ ���(temp)�� ���� ���� ����
}



// ����Ʈ���� ��� p�� �����ϴ� ����
void deleteNode(linkedList_h* L, listNode* p) {
    listNode* pre = NULL;
    // ����ó��:
    if (!L) {
        // L == NULL: �������� ���� ����Ʈ:
        printf("Error: Empty List!\n");
        return;
    }
    if (!p) {
        // p == NULL: ���� ���
        // ���� ���� �ߴ�
        printf("Error: Empty Node!\n");
        return;
    }
    if (!(L->pHead)) {
        // Case 1. ���鸮��Ʈ�� ���:
        // ���� ���� �ߴ�
        return;
    }
    if (!(L->pHead->pNext)) {
        // Case 2. ����Ʈ�� ��尡 �� ���� �ִ� ���:
        free(L->pHead); // ù ��° ��带 �޸𸮿��� �����ϰ�
        L->pHead = NULL; // ����Ʈ ���� �����͸� NULL�� ����
    }
    else {
        // Case 3. ������ ��� p�� ���� ��带 ������ pre�� �̿��� ã��:
        pre = L->pHead;
        if (pre == p) {
            L->pHead = p->pNext;
        }
        else {
            while (pre->pNext != p) {
                pre = pre->pNext;
            }
            pre->pNext = p->pNext; // ������ ��� p�� ���� ���� ���� ��带 ����.
        }
        free(p); // ��� p ����(�޸� ����)
    }
    return;
}

// ����Ʈ���� name�� �ش��ϴ� ��带 Ž���ϴ� ����
listNode* searchNode(linkedList_h* L, char* name) {
    // ����ó��:
    if (!L) {
        // L == NULL: �������� ���� ����Ʈ:
        printf("Error: Empty List!\n");
        return NULL;
    }


    listNode* temp;
    temp = L->pHead;
    while (temp) {
        if (strcmp(temp->name, name) == 0) {
            return temp;
        }
        else {
            temp = temp->pNext;
        }
    }
    return temp;
}

int main(void) {
    linkedList_h* L = NULL; // ģ�� ����Ʈ�� ��� ��� ������
    L = createLinkedList(); // �޸� �Ҵ�

    // ����ó��:
    if (!L) {
        // L == NULL: �����Ҵ� ����:
        printf("Error: Cannot create header node!\n");
        return 1;
    }

    int choice;
    char name[100], mbti[100];

    // ģ�� ����Ʈ ��� ����:
    do {
        printf("\n(1) Create Empty List!\n");
        printf("(2) Insert a Node!\n");
        printf("(3) Insert a Node at the end!\n");
        printf("(4) Insert a Node at the beginning!\n");
        printf("(5) Search for a Node!\n");
        printf("(6) Insert a Node after a specific Node!\n");
        printf("(7) Delete a Node!\n");
        printf("(8) Print the List!\n");
        printf("(9) Free all nodes and make the list empty!\n");
        printf("(0) Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            freeLinkedList(L);
            printf("Empty list created.\n");
            break;
        case 2:
            printf("Enter name: ");
            scanf("%s", name);
            printf("Enter MBTI: ");
            scanf("%s", mbti);
            insertFirstNode(L, name, mbti);
            printf("Node inserted at the beginning.\n");
            break;
        case 3:
            printf("Enter name: ");
            scanf("%s", name);
            printf("Enter MBTI: ");
            scanf("%s", mbti);
            insertLastNode(L, name, mbti);
            printf("Node inserted at the end.\n");
            break;
        case 4:
            printf("Enter name: ");
            scanf("%s", name);
            printf("Enter MBTI: ");
            scanf("%s", mbti);
            insertFirstNode(L, name, mbti);
            printf("Node inserted at the beginning.\n");
            break;
        case 5:
            printf("Enter name to search: ");
            scanf("%s", name);
            listNode* result = searchNode(L, name);
            if (result == NULL) {
                printf("Node not found.\n");
            }
            else {
                printf("Node found: [%s, %s]\n", result->name, result->mbti);
            }
            break;
        case 6:
            printf("Enter name to insert after: ");
            scanf("%s", name);
            listNode* target = searchNode(L, name);
            if (target == NULL) {
                printf("Node not found.\n");
            }
            else {
                printf("Enter name: ");
                scanf("%s", name);
                printf("Enter MBTI: ");
                scanf("%s", mbti);
                insertMiddleNode(L, target, name, mbti);
                printf("Node inserted after the target node.\n");
            }
            break;
        case 7:
            printf("Enter name to delete: ");
            scanf("%s", name);
            listNode* to_delete = searchNode(L, name);
            if (to_delete == NULL) {
                printf("Node not found.\n");
            }
            else {
                deleteNode(L, to_delete);
                printf("Node deleted.\n");
            }
            break;
        case 8:
            printList(L);
            break;
        case 9:
            freeLinkedList(L);
            printf("All nodes freed and list made empty.\n");
            break;
        case 0:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice.\n");
            break;
        }
    } while (choice != 0);

    free(L);

    return 0;
}