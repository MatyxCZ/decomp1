# Static objdump disassembly. Verify control flow, types and callers in Ghidra.

# HTTP GET/POST binding thunks; stop address exclusive

/home/mata/ac_reconphase/newnl.dll:     file format pei-x86-64


Disassembly of section .text:

0000000180063940 <.text+0x62940>:
   180063940:	45 33 c0             	xor    r8d,r8d
   180063943:	48 8d 15 ea d1 67 00 	lea    rdx,[rip+0x67d1ea]        # 0x1806e0b34
   18006394a:	e9 51 f9 ff ff       	jmp    0x1800632a0
   18006394f:	cc                   	int3
   180063950:	41 b8 02 00 00 00    	mov    r8d,0x2
   180063956:	48 8d 15 db d1 67 00 	lea    rdx,[rip+0x67d1db]        # 0x1806e0b38
   18006395d:	e9 3e f9 ff ff       	jmp    0x1800632a0

# Worker argument setup and request call; stop address exclusive

/home/mata/ac_reconphase/newnl.dll:     file format pei-x86-64


Disassembly of section .text:

0000000180096360 <.text+0x95360>:
   180096360:	40 55                	rex push rbp
   180096362:	53                   	push   rbx
   180096363:	56                   	push   rsi
   180096364:	57                   	push   rdi
   180096365:	48 8d 6c 24 d8       	lea    rbp,[rsp-0x28]
   18009636a:	48 81 ec 28 01 00 00 	sub    rsp,0x128
   180096371:	48 8b 05 88 31 88 00 	mov    rax,QWORD PTR [rip+0x883188]        # 0x180919500
   180096378:	48 33 c4             	xor    rax,rsp
   18009637b:	48 89 45 10          	mov    QWORD PTR [rbp+0x10],rax
   18009637f:	48 8b d9             	mov    rbx,rcx
   180096382:	c6 45 ac 00          	mov    BYTE PTR [rbp-0x54],0x0
   180096386:	33 f6                	xor    esi,esi
   180096388:	89 75 b0             	mov    DWORD PTR [rbp-0x50],esi
   18009638b:	0f 57 c0             	xorps  xmm0,xmm0
   18009638e:	0f 11 45 b8          	movups XMMWORD PTR [rbp-0x48],xmm0
   180096392:	48 89 75 c8          	mov    QWORD PTR [rbp-0x38],rsi
   180096396:	48 c7 45 d0 0f 00 00 	mov    QWORD PTR [rbp-0x30],0xf
   18009639d:	00 
   18009639e:	40 88 75 b8          	mov    BYTE PTR [rbp-0x48],sil
   1800963a2:	0f 11 45 d8          	movups XMMWORD PTR [rbp-0x28],xmm0
   1800963a6:	48 89 75 e8          	mov    QWORD PTR [rbp-0x18],rsi
   1800963aa:	48 c7 45 f0 0f 00 00 	mov    QWORD PTR [rbp-0x10],0xf
   1800963b1:	00 
   1800963b2:	40 88 75 d8          	mov    BYTE PTR [rbp-0x28],sil
   1800963b6:	48 89 75 f8          	mov    QWORD PTR [rbp-0x8],rsi
   1800963ba:	66 0f 7f 45 00       	movdqa XMMWORD PTR [rbp+0x0],xmm0
   1800963bf:	48 8b 01             	mov    rax,QWORD PTR [rcx]
   1800963c2:	48 89 45 a0          	mov    QWORD PTR [rbp-0x60],rax
   1800963c6:	8b 41 08             	mov    eax,DWORD PTR [rcx+0x8]
   1800963c9:	89 45 a8             	mov    DWORD PTR [rbp-0x58],eax
   1800963cc:	48 8d 55 a0          	lea    rdx,[rbp-0x60]
   1800963d0:	e8 9b ee ff ff       	call   0x180095270
