task1:
	echo "The Quick brown fox jumps over the lazy dog\n" > task_one.txt && wc -w task_one.txt

task2:
	echo "The Quick brown fox jumps over the lazy dog" | tr [:lower:] [:upper:]

task3:
	curl -o dkit.html https://www.dkit.ie/

task4:
	tac dkit.html | (head -n 1 && tail -n 1) | tr "<>" "[]" > mangled.txt
clean:
	rm -rf dkit.html && rm -rf task_one.txt
