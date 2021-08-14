# DLL Injector

Use this code to inject a DLL into a process.

Enter process-id (pid) to the program and the DLL will be injected!

Set the DLL path by changing the the define `DLL_PATH` in `main.c` in the injector folder.

A simple DLL that opens a `MessageBox` is also attached to illustrate the injection.

Read more at [Wikipedia](https://en.wikipedia.org/wiki/DLL_injection).

#### Example

```shell
$ Injector.exe
Enter pid: 24516
Got LoadLibraryA's address: 00007FF9522A04F0
Wrote path "C://Projects/C/DLLInjector/MyDLL/MyDLL.dll" successfully to address 000001F61B8E0000
Created thread with handle 0000000000000088
Successfuly injected the DLL into the process!
```





