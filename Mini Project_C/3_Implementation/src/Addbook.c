#include<library_Managment_system.h>


test_values add(int id,char name[],char author[])
{
    
    
    
    FILE *fp=NULL;
    fp=fopen("bookLibrary.dat","ab+");
    
    if(fp == NULL)
    {
        printf("\nError: while opening file\n");
        return fail;
    }
    else{
        
        book *newBook = NULL;
        newBook = malloc(sizeof(book));
		
        newBook->b_id = id;
        strcpy(newBook->b_name,name);
        
    

    strcpy(newBook->a_name,author);
    
    fwrite(newBook,sizeof(book),1,fp);
    fclose(fp);
    free(newBook);
    
    
    return pass;
    }

}
