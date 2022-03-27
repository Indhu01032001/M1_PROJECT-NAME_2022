#include<library_Managment_system.h>


test_values issue(int id)
{
    char name1[20];
    FILE *fp=NULL;
    fp = fopen("bookLibrary.dat","rb");
    if(fp==NULL)
    {
        printf("\nError while opening file in issuing book\\n");
        return fail;
    }
    else{

    scanf("%19s student name",name1);
    book *book_to_find=(book*)malloc(sizeof(book));
    while(fread(book_to_find,sizeof(book),1,fp))
    {
        if(book_to_find->b_id==id)
        {
            
            printf("\nBook_Id: %d\t\tBook_name: %s\t\tBook_Author: %s",book_to_find->b_id,book_to_find->b_name,book_to_find->a_name);
            printf("\n Book is issued to %s",name1);
            fclose(fp);
            free(book_to_find);
            return pass;
        }
    }
    
    fclose(fp);
    free(book_to_find);
    printf("\nSpecified book is not present\n");
    
    return fail;
    }
}
