task1:
	egrep -o "^#[a-fA-F0-9]{6}" colours.txt && egrep -o "^#[a-fA-F0-9]{8}" colours.txt

task2:
	gcc hex_decimal_converter.c -o hex_decimal && (egrep -o "^#[a-fA-F0-9]{6}" colours.txt && egrep -o "^#[a-fA-F0-9]{8}" colours.txt) | cut -b4,5 > valid_colours.txt && ./hex_decimal | tr "\n" ","

task3:
	gcc hex_rgb_converter.c -o rgb_values && (egrep -o "^#[a-fA-F0-9]{6}" colours.txt | cut -c2,3,4,5,6,7 && egrep -o "^#[a-fA-F0-9]{8}" colours.txt | cut -c2,3,4,5,6,7,8,9) > valid_colours.txt && ./rgb_values > rgba-colours.txt
