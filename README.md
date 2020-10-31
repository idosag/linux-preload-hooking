# linux-preload-hooking
The code is wriiten in c.
We are using the ld_preload to hook strcmp function.
Use the following line to create so file and enter it to the preload:
gcc hook.c -o hook
gcc preload.c -o preload.so -fPIC -shared -ldl
LD_PRELOAD="./preload.so" ./hook
