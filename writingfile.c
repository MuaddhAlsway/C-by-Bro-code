
#include <stdio.h>

int main() {
    FILE *fp = fopen("C:\\Users\\maudh\\OneDrive\\Desktoptext1.txt", "w+");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(fp, "Hello World\n");
    fprintf(fp, "This is a test file.\n");

    fclose(fp);
    return 0;
}

//#include <stdio.h>

//int main() {
   /*
   
   
   
    FILE *fp = fopen("test.txt", "w+");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(fp, "Hello World\n");
    fprintf(fp, "This is a test file.\n");

    fclose(fp);
    return 0;
    */

 /*
 

    FILE *fp = fopen("C:\\Users\\Muaddh\\Desktop\\test.txt", "w+");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(fp, "Hello World\n");
    fprintf(fp, "This is a test file.\n");

    fclose(fp);
    return 0;
     */
//}

