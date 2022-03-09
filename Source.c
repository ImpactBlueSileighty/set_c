#include <stdio.h>


int main() {
	char arr1[100];
	char arr2[100];
	int choice = 0;
	int k = 0, l = 0;
	char s, el;


	printf("Enter elements of the first set:\n");
	while ((s = getchar()) != EOF && s != '\n') {
		arr1[k] = s;
		k++;
	}
	arr1[k] = '\0';
	printf("Enter elements of the second set:\n");
	while ((s = getchar()) != EOF && s != '\n') {
		arr2[l] = s;
		l++;
	}
	arr2[l] = '\0';

	while (choice != 9) {
		
		printf("\nCurrent elements of the set 1:\n");

		printf("%s ", arr1);

		printf("\nCurrent elements of the set 2:\n");

		printf("%s ", arr2);

		printf("\nSelect an action:\n");
		printf("1.Add element\t");
		printf("2.Delete element\n");
		printf("9.Exit\n");

		scanf("%d", &choice);

		if (choice == 9) {
			return 0;
		}
		else if (choice == 1) {
			choice = 0;
			printf("Select the set you want to add the element to:\n");
			printf("1.First\t");
			printf("2.Second\n");
			scanf("%d", &choice);
			if (choice == 1) {
				printf("Enter element:");
				scanf("%s", &el);
				arr1[k++] = el;
				arr1[k] = '\0';
			}
			if (choice == 2) {
				printf("Enter element:\n");
				scanf("%s", &el);
				arr2[l++] = el;
				arr2[l] = '\0';
			}
		}
		else if (choice == 2) {
			choice = 0;
			printf("Select the set you want to delete the element to:\n");
			printf("1.First\t");
			printf("2.Second\n");
			scanf("%d", &choice);
			if (choice == 1) {
				arr1[--k] = '\0';
				
			}
			if (choice == 2) {
				arr2[--l] = '\0';
				
			}
		}
		system("cls");
	}
	return 0;
}
