#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void copy_srctodest(const char *srcfile, char *destfiles[], int count)
{
	FILE *src = fopen(srcfile, "r");
	if(src==NULL)
	{
		printf("file not found\n");
		exit(0);
	}

	char buffer[1024];
	size_t readbytes = fread(buffer, 1, sizeof(buffer), src);
	fclose(src);

	for(int i=0;i<count;i++)
	{
		FILE *dest = fopen(destfiles[i], "w");
		if(dest == NULL)
		{
			printf("can't create a destination file:%s\n",destfiles[i]);
			continue;
		}

		fwrite(buffer, 1, readbytes, dest);
		fclose(dest);
		printf("copy successfully to %s\n", destfiles[i]);
	}

}
int main(int argc, char *argv[])
{
	if(argc<3)
	{
		printf("provide input in the format exe srcfile destfile\n");
		exit(0);
	
	
	}
	const char *srcfile = argv[1];
	char **destfile = &argv[2];
	int count = argc-2;
	copy_srctodest(srcfile, destfile,count);
	return 0;
}
	
