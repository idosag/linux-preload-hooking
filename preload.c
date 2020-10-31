#define _GNU_SOURCE
#include <dlfcn.h>
#include <stdio.h>
#include <string.h>

int (*orig_strcmp)(const char *str1, const char *str2);

int strcmp(const char *str1, const char *str2)
{
	orig_strcmp = dlsym(RTLD_NEXT, "strcmp");
	printf("You should try '%s'\n", str1);
  return orig_strcmp(str1,str2);
}