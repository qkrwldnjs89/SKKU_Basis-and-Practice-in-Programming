#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <stdbool.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct ArticleInfo{
   char EntryNumber[200]; // PMID
   char ArticleTitle[1000]; // TI
   char IDNo[100]; // LID
   char Date[50]; // DP
   char Author[200][50]; // AU
   int AUCnt;
   char BookTitle[500]; // JT
   char Language[100]; // LA
   char Type[50]; // PT
};
// 동적할당 
void add(int * s, struct ArticleInfo ** arr)
{
   int newsize = *s + 100;
   struct ArticleInfo * temp = malloc(sizeof(struct ArticleInfo) * newsize);
   int i;
   for (i = 0; i < *s; i++)
      temp[i] = (*arr)[i];
   free(*arr);
   *arr = temp;
   *s += 100;
}
int main(void) 
{
   char fname[100];
   bool is_file = false;
   int size = 100;
   struct ArticleInfo * AtcInfo = malloc(sizeof(struct ArticleInfo) * size);
   int i = 0, j, k;
   char option = '\0';
      
   // file 인식했는지 확인 
   while (1)
   {
      printf("Enter an input file (or q to quit): ");   
      scanf(" %[^\n]s", fname);
      if (fopen(fname, "r"))
      {
         is_file = true; break;
      }
      else if (strcmp(fname, "q") == 0)
          return;
      else
      {
         printf("Input file not found. \n");
         printf("Please check the file name or the location of your input file. \n");
      }
   }
   
   
   
   if (is_file)
   {
      // 파일 읽기 
      FILE *fPtr = fopen(fname, "r+");
      int entryCnt = 0, engCnt = 0, JournalCnt = 0, engJourCnt = 0; 
      while ( !feof(fPtr) )
      {
        char title[100];
        char content[10000];
        fscanf(fPtr, "%[^-]- %[^\n]\n", &title, &content);
         // field 구분 
         char *field[] = {"PMID", "TI  ", "LID ", "DP  ", "AU  ", "JT  ", "LA  ", "PT  "};   
         int key = -1;
         for (j = 0; j < 8; j++)
         {
            int is_type = strcmp(field[j], title);
            if (is_type == 0)
            {
               key = j;
               break;
            }
         }
         switch (key)
         {
            case 0:
                if(i + 1 == size)
                    add(&size, &AtcInfo);
                i++;
                strcpy(AtcInfo[i].EntryNumber, content); 
                entryCnt++; AtcInfo[i].AUCnt = 0; break;
            case 1:
               strcpy(AtcInfo[i].ArticleTitle, content); break;
            case 2:
               strcpy(AtcInfo[i].IDNo, content); break;
            case 3:
               strcpy(AtcInfo[i].Date, content); break;
            case 4:
               strcpy(AtcInfo[i].Author[AtcInfo[i].AUCnt], content); AtcInfo[i].AUCnt++; break;
            case 5:
               strcpy(AtcInfo[i].BookTitle, content); break;
            case 6:
               strcpy(AtcInfo[i].Language, content); 
               engCnt = (strcmp("eng", content) == 0) ? engCnt + 1 : engCnt;
               break;
            case 7:
               strcpy(AtcInfo[i].Type, content); 
               JournalCnt = (strcmp("Journal Article", content) == 0) ? JournalCnt + 1 : JournalCnt;
               break;
            default:
               break;
         } 
      }
      
      for (j = 1; j < size; j++)
      {
         engJourCnt = (strcmp(AtcInfo[j].Language, "eng") == 0 && strcmp(AtcInfo[j].Type, "Journal Article") == 0) ? engJourCnt + 1 : engJourCnt;
      }

      // option 받아 수행 
      while (option != 'q')
      {     
         printf("1. Display summary. \n");
         printf("2. Search by Entry Number (PMID). \n");
         printf("3. Search by Book Title (JT). \n");
         printf("4. Add a record. \n");
         printf("5. Export the data in csv format. \n");
         printf("6. Quit. \n");
         printf("Enter: ");
         option = getche();
         printf("\n");
         switch(option)
         {
            char PMID[200]; // PMID
            char atctitle[1000]; // TI
            char BookT[100]; // JT
		    char language[100]; // LA
		    char type[50]; // PT
            char *bookPtr;
            char expfile[100];
            int found;
            FILE *expPtr;
            int idx, idx2;
            
            case '1':
               printf("=====*****====== \n");
               printf("Input file: %s \n", fname);
               printf("Number of entry = %d \n", entryCnt);
               printf("Number of English articles = %d \n", engCnt);
               printf("Number of Journal articles = %d \n", JournalCnt);
               printf("Number of English Journal articles = %d \n", engJourCnt);
               printf("=====*****====== \n");
               break;
            case '2':
               printf("Enter the PMID: ");
               scanf("%s", PMID);
               for (idx = 0; idx < size; idx++)
               {
                  found = strcmp(PMID, AtcInfo[idx].EntryNumber);
                  if (found == 0)
                  {
                     break;
                  }
               }
               if (found == 0)
               {
               	  printf("=====*****====== \n");
                  printf("Input file: %s \n", fname);
                  printf("PMID = %s \n", AtcInfo[idx].EntryNumber);
                  if (strlen(AtcInfo[idx].ArticleTitle) != 0)
                  	printf("Title = %s \n", AtcInfo[idx].ArticleTitle);
                  if (strlen(AtcInfo[idx].IDNo) != 0)
                  	printf("ID number = %s \n", AtcInfo[idx].IDNo);
                  if (strlen(AtcInfo[idx].Date) != 0)
                 	printf("Date = %s \n", AtcInfo[idx].Date);
                  for (idx2 = 0; idx2 < AtcInfo[idx].AUCnt; idx2++)
                  	printf("Author = %s \n", AtcInfo[idx].Author[idx2]); 
				  if (strlen(AtcInfo[idx].BookTitle) != 0)               
                  	printf("Book Title = %s \n", AtcInfo[idx].BookTitle);
                  if (strlen(AtcInfo[idx].Language) != 0)
                  	printf("Language = %s \n", AtcInfo[idx].Language);
                  if (strlen(AtcInfo[idx].Type) != 0)
                  	printf("Type = %s \n", AtcInfo[idx].Type);
                  printf("=====*****====== \n");
               }
               else
               {
                  printf("Entry not found in the input file. \n");
               }
               break;
            case '3':
            	printf("Enter the Book Title: ");
            	scanf("%s", BookT);
            	for (idx = 0; idx < size; idx++)
            	{
            		bookPtr = strstr(AtcInfo[idx].BookTitle, BookT);
            		if (bookPtr != NULL)
            		{
            			printf("=====*****====== \n");
            			printf("Input file: %s \n", fname);
            			printf("PMID = %s \n", AtcInfo[idx].EntryNumber);
                 		printf("Title = %s \n", AtcInfo[idx].ArticleTitle);
                		printf("Book Title = %s \n", AtcInfo[idx].BookTitle);
                		printf("Type = %s \n", AtcInfo[idx].Type);
                		printf("Language = %s \n", AtcInfo[idx].Language);
            			printf("=====*****====== \n");
					}
				}
               break;
            case '4':
               printf("=====*****====== \n");
               printf("Add new entry to the input file: %s \n", fname);
               printf("PMID: ");
               scanf("%s", PMID);
               printf("Title: ");
               scanf("%s", atctitle);
               printf("Book Title: ");
               scanf("%s", BookT);
               printf("Type: ");
               scanf("%s", type);
               printf("Language: ");
               scanf("%s", language);
               printf("=====*****====== \n");
               fprintf(fPtr, "\n\n");
               fprintf(fPtr, "PMID- %s\n", PMID);
               fprintf(fPtr, "TI  - %s\n", atctitle);
               fprintf(fPtr, "JT  - %s\n", BookT);
               fprintf(fPtr, "PT  - %s\n", type);
               fprintf(fPtr, "LA  - %s", language);        
               break;
            case '5':
               printf("Enter the export filename: ");
               scanf("%s", expfile);
               expPtr = fopen(expfile, "w");
               for (idx = 1; idx <= entryCnt; idx++)
               {
               		fprintf(expPtr, "%s;", AtcInfo[idx].EntryNumber);
					fprintf(expPtr, "%s;", AtcInfo[idx].ArticleTitle);	
					fprintf(expPtr, "%s;", AtcInfo[idx].BookTitle);
					fprintf(expPtr, "%s;", AtcInfo[idx].Type);
					fprintf(expPtr, "%s\n", AtcInfo[idx].Language);
			   }
               printf("=====*****====== \n");
               printf("Input file: %s \n", fname);
               printf("Output file: %s \n", expfile);
               printf("%d entries were exported. \n", entryCnt);
               printf("=====*****====== \n");
               fclose(expPtr);
               break;
            case 'q':
               printf("PROGRAM QUITTED");
               break;
            default :
               printf("Invalid input!! \n");
         }
      }
      fclose(fPtr);
   }
   free(AtcInfo);
   
   
   return 0;
}
