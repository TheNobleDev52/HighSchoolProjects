#include <stdio.h>
int main()
{
    printf("Welcome to Imperial College Record system!\n");
    printf("Enter 1 to modify records | Enter 2 to Display Records \n');\n");
    int choice;
    int more;
    scanf("%d", &choice);
    
    if (choice == 1)
    {
        printf("Modifying Records...\n");
        // Code to modify records goes here...
        FILE *fp = fopen("ImpColRecords.txt", "a+");
        do
        {
        char name[50];
        int age;
        printf("Enter name: ");
        scanf("%s", name);
        printf("Enter age: ");
        scanf("%d", &age);
        fprintf(fp, "%s %d\n", name, age);
        printf("Do you want to add more records? (1/0): ");
        scanf("%d", &more);
        } while (more == 1);
        fclose(fp);
    }
    else if (choice == 2)
    {
        printf("Displaying Records...\n");
        FILE *fp = fopen("ImpColRecords.txt", "r");
        char name[50];
        int age;
        while (fscanf(fp, "%s %d", name, &age)!=EOF)
        {
            printf("Name: %s Age: %d\n", name, age);
        }
        fclose(fp);
    }
    else{
        printf("Invalid choice!\n");
    }
    return 0;
}