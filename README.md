# workshop

### Special thanks to LiveOverflow https://www.youtube.com/channel/UClcE-kVhqyiHCcjYwcpfj9w


Pour compiler une demo :
``` gcc demo.c -o demo -fno-stack-protector -O0  ```

## DEMO 1 :

* ```cd ex1/```
* ``` gdb buff1 ```
* ```break *main ```
* ``` set disassembly-flavor intel ```
* ``` define hook-stop ```
* ```info register```
* ```x/24wx $rsp```
* ```x/2i $rip```
* ```end ```
* ```run```
* ```disassemble main ```
* Trouver adresse après le call de gets ("eax,DWORD PTR [rbp-0x4]" cette ligne)
* ```break *"adresse trouvé juste avant" ```
* ```run ```
* Entrer quelques caratères
* Montrer la stack et expliquer un peu ce qu'il se passe cf vidéo
* ```run ```
* Entrer assez de caractère pour overflow (normalement 11 suffisent)
* Expliquer ce qui viens de se passer (cf vidéo)







