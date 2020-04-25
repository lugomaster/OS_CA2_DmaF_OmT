#include <stdio.h>
#include <stdlib.h>

  int main()
  {

    //LOAD IN VALUES
    FILE *valid_hex_values;
    valid_hex_values = fopen("valid_colours.txt", "r");

    /* LINE = read in hex value */
    char line[3];
    int dec;


    while(fgets(line, 3, valid_hex_values))
    {
      /* hex number, casted as an int with a base of 16 */
      dec = (int)strtol(line, NULL, 16);

      /* the console would often print a 0 between hex values, didnt put time into figuring out why so I only OP the values that are relavant here */
      if(dec == 0)
      { }
      else
      {
        /* PRINT OUT DECIMAL VALUE USING %d */
        printf("\n%d", dec );
      }

    }

    fclose(valid_hex_values);
    return 0;
}
