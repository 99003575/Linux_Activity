#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int dc1, dc2, bytes;

    //Opening doc1 to read the data from the file
	dc1 = open("doc1.txt",O_RDONLY);

    //Opening doc2 to write the data which is in doc1 to doc2
	dc2 = open("doc2.txt",O_WRONLY|O_CREAT, 0666);

    //Checking the condition of the file
	if(dc1<0 || dc2<0)
	{
		perror("open");
		exit(1);
	}
	int maxleng = 128;
	char buff[maxleng];

    //Reading nbytes from the doc1
	bytes=read(dc1,buff,maxleng);

    //Checking whether the data was added into doc2 from doc1 are not
	if(bytes<0)
	{
		perror("read");
		exit(2);
	}
    
    //Writing read into doc2
	write(dc2,buff,bytes);

    //Closing the files which are opened
	close(dc1);
    close(dc2);
	return 0;
}
