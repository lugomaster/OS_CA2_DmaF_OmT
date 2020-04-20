#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

typedef struct
{
  uint8_t r;
  uint8_t g;
  uint8_t b;
  //uint8_t a;
} rgba;

int main(int argc, char const *argv[]) {

  char line[15];

//LOAD IN FILE VALUES
  FILE *valid_hex_values;
  valid_hex_values = fopen("valid_colours.txt", "r");

// CHECK FOR VALUES IF NOT THEN ERROR
   if(valid_hex_values == NULL)
   {
     perror("Error - File pointer is NULL value...\n");
     //exit(1);
   }
   else
   {

   }
   while(!feof(valid_hex_values))
   {

      fgets(line, 15, valid_hex_values);
      printf("Hex Value is: \t%s\n", line);

      uint32_t hex;

      // SCANS HEX LINE VALUE (STRING) IN TO &HEX WITH 16 AS BASE, ALLWOING IT TO READ AS A HEX VALUE
      sscanf(line, "%"SCNx32, &hex);

      //printf("%"PRIx32"\n", hex);

      rgba colour=
      {
        .r = (hex & 0xFF0000) >> 16,
        .g = (hex & 0x00FF00) >> 8,
        .b = (hex & 0x0000FF)
        //.a = (hex & 0x000000FF)
      };

      printf("%s: RGBA: (%u, %u, %u)\n", line, colour.r, colour.g, colour.b);
   }






  fclose(valid_hex_values);
  return 0;
}
