
task1:
	tail access.log

task2:
	egrep -o "[0-255].[0-255].[0-255].[0-255]" access.log | sort -u

task3:
	egrep 404 access.log | egrep -o "GET .*HTTP/1.1"

task4:
	egrep MSIE access.log > access.ie.log
	cat access.ie.log

task5:
	egrep -o  "\GET(.*)\.+? [0-5] " access.log > out.txt
