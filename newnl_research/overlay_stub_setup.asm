# Original static instructions for the conditional overlay_box stub setup.
# The allocation and stub were not executed.

/home/mata/ac_reconphase/newnl.dll:     file format pei-x86-64


Disassembly of section .text:

00000001801cfcfc <.text+0x1cecfc>:
   1801cfcfc:	ba 40 00 00 00       	mov    edx,0x40
   1801cfd01:	33 c9                	xor    ecx,ecx
   1801cfd03:	44 8b ca             	mov    r9d,edx
   1801cfd06:	41 b8 00 30 00 00    	mov    r8d,0x3000
   1801cfd0c:	ff 15 76 b5 39 00    	call   QWORD PTR [rip+0x39b576]        # 0x18056b288
   1801cfd12:	4c 8b c8             	mov    r9,rax
   1801cfd15:	48 85 c0             	test   rax,rax
   1801cfd18:	74 54                	je     0x1801cfd6e
   1801cfd1a:	c7 00 4c 89 35 11    	mov    DWORD PTR [rax],0x1135894c
   1801cfd20:	c7 40 04 00 00 00 ff 	mov    DWORD PTR [rax+0x4],0xff000000
   1801cfd27:	c7 40 08 25 00 00 00 	mov    DWORD PTR [rax+0x8],0x25
   1801cfd2e:	c6 40 0c 00          	mov    BYTE PTR [rax+0xc],0x0
   1801cfd32:	48 8d 05 e7 a6 ff ff 	lea    rax,[rip+0xffffffffffffa6e7]        # 0x1801ca420
   1801cfd39:	49 89 41 0d          	mov    QWORD PTR [r9+0xd],rax
   1801cfd3d:	49 8d 41 18          	lea    rax,[r9+0x18]
   1801cfd41:	48 89 05 18 1d b0 00 	mov    QWORD PTR [rip+0xb01d18],rax        # 0x180cd1a60
   1801cfd48:	4c 89 38             	mov    QWORD PTR [rax],r15
   1801cfd4b:	48 8d 05 1e 1d b0 00 	lea    rax,[rip+0xb01d1e]        # 0x180cd1a70
   1801cfd52:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
   1801cfd57:	4c 8b 05 2a 1f 79 00 	mov    r8,QWORD PTR [rip+0x791f2a]        # 0x180961c88
   1801cfd5e:	48 8d 15 b3 fd 52 00 	lea    rdx,[rip+0x52fdb3]        # 0x1806ffb18
   1801cfd65:	48 8d 4d c7          	lea    rcx,[rbp-0x39]
   1801cfd69:	e8 a2 08 00 00       	call   0x1801d0610
