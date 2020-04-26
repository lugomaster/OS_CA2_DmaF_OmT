#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

typedef struct {

    int32_t count;
    char *req_path[32];

} req_path_count;

int main(int argc, char *argv[]) {

req_path_count req_path_count_arr[93];

char *buff[255];

FILE *input = fopen( "out.txt", "r" );

bool troo = false, once = true;
int32_t j = 0;

while (fgets(buff, 255, (FILE*)input) != NULL) {
       
      char *concat_buff[255];
      
      printf("J is %d\n", j);
      //printf("buff is %s\n", buff);

      const char s[5] = "GET ";
      char *token;
   
      token = strtok(buff, s);
  
      printf("token: %s\n", token);


     //First Entry
     if (!troo) {
        req_path_count new_req_path_count = {1, token};
        req_path_count_arr[0] = new_req_path_count;
        troo = true;
        ++j;
     } 
     
     else {

      for (int k = 0; k < j; k++) {
      //   req_path_count new_req_path_count = {1, buff};       
      //   printf("%d/n", new_req_path_count.count);
      //   printf("%s", *new_req_path_count.req_path);
      // req_path_count_arr[j] = new_req_path_count;
      //printf("Hi");
        if (strstr(req_path_count_arr[k].req_path, token) == NULL) {
          printf("J is %d\n", j);
          req_path_count new_req_path_count = {1, token};
          req_path_count_arr[j] = new_req_path_count;
          ++j;
        }
      
        else {
      
        req_path_count_arr[j].count++;
        printf("count ++\n");
        
        }
      }
    //}

      // else {

      //   req_path_count_arr[j].count++;
      //   printf("help");
      //   ++j;
      // }

    // }
  }
}
  

//}

    // for (int i = 0; i < sizeof(req_path_count_arr); i++) {
    // // printf("%d/n", req_path_count_arr[i].count);
    // // printf("%s", *req_path_count_arr[i].req_path);
    // printf("%d\n", j);
    // }

    return 0;
}
