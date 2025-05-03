#include <stdio.h>
#include <string.h>


int main() {

    char string1[] = "Moath";
    char string2[] = "alswaiee";
   
   
   // strlwr(string1);  convert a string to lowercase
   //strupr(string1);  convert to string to uppercase
    //strcat(string1, string2); appends string2 to end of string1
    //strncat(string1, string2, 5); //appends n charaters from string 2 to string1
  /// strcpy(string1, string2);  //copy string 2 to string 1
   /// strncpy(string1, string2 , 1);// copy n characters of string 2 to string1
  ///  strset(string1 , '$');
   // strnset(string1, 'x', 1) ;
    ///strrev(string1);

   // int result = strlen(string1);
    //int result = strcmp(string1, string2);
  //  int result = strncmp(string1, string2, 1);

   // int result = strcmpi(string1, string2);
    int result = strnicmp(string1, string2, 1);

    if (result == 0 ){
        printf('It is the same ');
    } else
    {
        printf("not the same");
    }



    printf("%d", result);
    return 0;
}