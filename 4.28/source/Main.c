#include<stdlib.h>
#include<stdio.h>

int main() {
	int paycode, manager, hworker, cworker, pworker, piece;
	float msalary, hsalary, csalary, psalary, overtime, overtimepay, hour, pay;
	printf("Enter paycode(-1 to end):");
	scanf_s("%d", &paycode);
	while (paycode != -1) {
		switch (paycode) {
		case 1:
			printf("Enter weekly salary:");
			scanf_s("%f", &msalary);
			printf("The manager's pay is $%.2f\n\n", msalary);
			break;
		case 2:
			printf("Enter the hourly salary:");
			scanf_s("%f", &hsalary);
			printf("Enter the total hours worked:");
			scanf_s("%f", &hour);
			if (hour > 40.0) {
				overtime = hour - 40.0;
				overtimepay = hsalary * 1.5 * overtime + hsalary * 40.0;
				printf("Workers pay is $%.2f\n\n", overtimepay);
			}
			else {
				pay = hsalary * hour;
				printf("Worker's pay is $%.2f\n\n", pay);
			}
			break;
		case 3:
			printf("Enter gross weekly sales:");
			scanf_s("%f", &csalary);
			pay = 250.0 + 0.057 * csalary;
			printf("Commission Worker's pay is $%.2f\n\n", pay);
			break;
		case 4:
			printf("Enter number of pieces:");
			scanf_s("%d", &piece);
			printf("Enter wage per piece: ");
			scanf_s("%f", &psalary);
			pay = piece * psalary;
			printf("Piece Worker's pay is $%.2f\n\n", pay);
			break;
		default:
			printf("Error.");
			break;
		}
		printf("Enter paycode(-1 to end):");
		scanf_s("%d", &paycode);
	}
	system("pause");
	return 0;
}