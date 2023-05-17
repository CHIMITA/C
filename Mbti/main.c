#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define _CRT_SECURE_NO_WARNINGS
#define MAX_NLEN 10
char my_mbti[5] = "INTJ";// 기준 MBTI


typedef struct ListNode {
    char name[MAX_NLEN + 1]; // 이름
    char mbti[5]; // MBTI
    int score; // MBTI 유사도에 따른 점수
    struct ListNode* pNext; // 다음 링크
}listNode;

// 헤더 노드: 리스트의 시작을 나타냄
typedef struct {
    listNode* pHead;
}linkedList_h;



// pHeader의 MBTI를 기준으로 두번째 인자값의 MBTI와의 유사도를 통해 점수를 책정하는 함수:
int CalcMBTIScore(char* mbti) {
    int score = 0;
    for (int i = 0; i < 4; i++) {
        if (my_mbti[i] == mbti[i]) {
            score++;
        }
    }
    return score;
}


// 연결 리스트 생성하는 연산
linkedList_h* createLinkedList() {
    linkedList_h* L;
    L = (linkedList_h*)malloc(sizeof(linkedList_h)); // 동적할당

    // 예외처리:
    if (!L) {
        // L == NULL: 동적할당 실패:
        printf("Error: Cannot malloc()!\n");
        return NULL;
    }

    // 값 지정:
    L->pHead = NULL; // 공백 리스트이므로 첫 노드를 NULL로 설정
    //strcpy(my_mbti, mbti); // MBTI 값 복사

    return L;
}


// 연결 리스트의 노드들을 돌며 메모리를 해제하는 함수:
void freeLinkedList(linkedList_h* L) {
    // 예외처리:
    if (!L) {
        // L == NULL: 생성되지 않은 리스트:
        printf("Error: Empty List!\n");
        return;
    }


    listNode* pCur;
    while (L->pHead) {
        pCur = L->pHead;
        L->pHead = L->pHead->pNext;
        free(pCur); // 메모리 해제
        pCur = NULL;
    }
}


// 연결 리스트를 순서대로 출력하는 연산:
void printList(linkedList_h* L) {
    // 예외처리:
    if (!L) {
        // L == NULL: 생성되지 않은 리스트:
        printf("Error: Empty List!\n");
        return;
    }


    // 리스트 순회하며 출력:
    listNode* pCur;
    printf("L = (\n");
    pCur = L->pHead;
    while (pCur) {
        printf("%s, %s, %dpoint", pCur->name, pCur->mbti, pCur->score); // 정보 출력
        pCur = pCur->pNext; // 다음 노드로 이동
        if (pCur) printf(",\n");
    }
    printf("\n)\n");
}


// 리스트에 첫 번째 노드로 삽입하는 연산:
void insertFirstNode(linkedList_h* L, char* name, char* mbti) {
    // 예외처리:
    if (!L) {
        // L == NULL: 생성되지 않은 리스트:
        printf("Error: Empty List!\n");
        return;
    }


    // 새 노드 생성:메모리 할당:
    listNode* pNew = NULL;
    pNew = (listNode*)malloc(sizeof(listNode)); // 동적할당

    // 예외처리:
    if (!pNew) {
        // pNew == NULL: 동적할당 실패:
        printf("Error: Cannot malloc()!\n");
        return;
    }

    // 새 노드에 값 지정:
    strcpy(pNew->name, name); // 이름
    strcpy(pNew->mbti, mbti); // MBTI
    pNew->score = CalcMBTIScore(mbti); // MBTI 유사도에 따른 점수 계산하여 대입.


    // 기존 리스트에 연결하기:
    pNew->pNext = L->pHead;
    L->pHead = pNew;
}


// 리스트의 중간에 노드를 삽입하는 연산
void insertMiddleNode(linkedList_h* L, listNode* pre, char* name, char* mbti) {
    // 예외처리:
    if (!L) {
        // L == NULL: 생성되지 않은 리스트:
        printf("Error: Empty List!\n");
        return;
    }
    if (!pre) {
        // pre == NULL: 없는 노드:
        printf("Error: Empty Node!\n");
        return;
    }


    // 새 노드 생성:메모리 할당:
    listNode* pNew = NULL;
    pNew = (listNode*)malloc(sizeof(listNode)); // 동적할당

    // 예외처리:
    if (!pNew) {
        // pNew == NULL: 동적할당 실패:
        printf("Error: Cannot malloc()!\n");
        return;
    }

    // 새 노드에 값 지정:
    strcpy(pNew->name, name); // 이름
    strcpy(pNew->mbti, mbti); // MBTI
    pNew->score = CalcMBTIScore(mbti); // MBTI 유사도에 따른 점수 계산하여 대입.


    // 기존 리스트에 연결하기:
    if (!(L->pHead)) {
        // Case 1. 공백 리스트인 경우:
        // 새 노드를 첫 번째이자 마지막 노드로 연결
        pNew->pNext = NULL;
        L->pHead = pNew;
    }
    else if (!pre) {
        // Case 2. 삽입 위치를 지정하는 포인터 pre가 NULL인 경우:
        // 새 노드를 첫 번째이자 마지막 노드로 연결
        pNew->pNext = NULL;
        L->pHead = pNew;
    }
    else {
        // Case 3. 포인터 pre의 노드 뒤에 새 노드 연결:
        pNew->pNext = pre->pNext;
        pre->pNext = pNew;
    }
}



// 리스트에 마지막 노드로서 삽입하는 연산.
void insertLastNode(linkedList_h* L, char* name, char* mbti) {
    // 예외처리:
    if (!L) {
        // L == NULL: 생성되지 않은 리스트:
        printf("Error: Empty List!\n");
        return;
    }


    // 새 노드 생성:메모리 할당:
    listNode* pNew = NULL;
    pNew = (listNode*)malloc(sizeof(listNode)); // 동적할당

    // 예외처리:
    if (!pNew) {
        // pNew == NULL: 동적할당 실패:
        printf("Error: Cannot malloc()!\n");
        return;
    }

    // 새 노드에 값 지정:
    strcpy(pNew->name, name); // 이름
    strcpy(pNew->mbti, mbti); // MBTI
    pNew->score = CalcMBTIScore(mbti); // MBTI 유사도에 따른 점수 계산하여 대입.


    pNew->pNext = NULL;
    if (!(L->pHead)) {
        // Case 1. 현재 리스트가 공백인 경우:
        // 새 노드를 리스트의 시작 노드로 연결
        L->pHead = pNew;
        return;
    }
    // Case 2. 현재 리스트가 공백이 아닌 경우:
    listNode* temp = L->pHead;
    while (temp->pNext) {
        // 현재 리스트의 마지막 노드를 찾음:
        temp = temp->pNext;
    }
    temp->pNext = pNew; // 새 노드를 마지막 노드(temp)의 다음 노드로 연결
}



// 리스트에서 노드 p를 삭제하는 연산
void deleteNode(linkedList_h* L, listNode* p) {
    listNode* pre = NULL;
    // 예외처리:
    if (!L) {
        // L == NULL: 생성되지 않은 리스트:
        printf("Error: Empty List!\n");
        return;
    }
    if (!p) {
        // p == NULL: 없는 노드
        // 삭제 연산 중단
        printf("Error: Empty Node!\n");
        return;
    }
    if (!(L->pHead)) {
        // Case 1. 공백리스트인 경우:
        // 삭제 연산 중단
        return;
    }
    if (!(L->pHead->pNext)) {
        // Case 2. 리스트에 노드가 한 개만 있는 경우:
        free(L->pHead); // 첫 번째 노드를 메모리에서 해제하고
        L->pHead = NULL; // 리스트 시작 포인터를 NULL로 지정
    }
    else {
        // Case 3. 삭제할 노드 p의 선행 노드를 포인터 pre를 이용해 찾음:
        pre = L->pHead;
        if (pre == p) {
            L->pHead = p->pNext;
        }
        else {
            while (pre->pNext != p) {
                pre = pre->pNext;
            }
            pre->pNext = p->pNext; // 삭제할 노드 p의 선행 노드와 다음 노드를 연결.
        }
        free(p); // 노드 p 삭제(메모리 해제)
    }
    return;
}

// 리스트에서 name에 해당하는 노드를 탐색하는 연산
listNode* searchNode(linkedList_h* L, char* name) {
    // 예외처리:
    if (!L) {
        // L == NULL: 생성되지 않은 리스트:
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
    linkedList_h* L = NULL; // 친구 리스트의 헤더 노드 포인터
    L = createLinkedList(); // 메모리 할당

    // 예외처리:
    if (!L) {
        // L == NULL: 동적할당 실패:
        printf("Error: Cannot create header node!\n");
        return 1;
    }

    int choice;
    char name[100], mbti[100];

    // 친구 리스트 사용 시작:
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