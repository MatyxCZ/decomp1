# Linear objdump disassembly around Ghidra functions that failed to decompile.
# Ranges end at the next discovered function entry; they are not validated function boundaries.
# Executable sections may contain data; instructions and control flow require verification.

# Range 0x1803cb350 to 0x1803d5e10 (exclusive)

/home/mata/ac_reconphase/newnl.dll:     file format pei-x86-64


Disassembly of section .text:

00000001803cb350 <.text+0x3ca350>:
   1803cb350:	48 8b c4             	mov    %rsp,%rax
   1803cb353:	55                   	push   %rbp
   1803cb354:	48 8d a8 d8 f4 ff ff 	lea    -0xb28(%rax),%rbp
   1803cb35b:	48 81 ec 20 0c 00 00 	sub    $0xc20,%rsp
   1803cb362:	48 89 58 08          	mov    %rbx,0x8(%rax)
   1803cb366:	4c 8d 05 b3 5e 4d 00 	lea    0x4d5eb3(%rip),%r8        # 0x1808a1220
   1803cb36d:	48 89 78 18          	mov    %rdi,0x18(%rax)
   1803cb371:	48 8d 15 58 b1 4d 00 	lea    0x4db158(%rip),%rdx        # 0x1808a64d0
   1803cb378:	4c 89 70 f0          	mov    %r14,-0x10(%rax)
   1803cb37c:	48 8d 0d ad 6e 30 00 	lea    0x306ead(%rip),%rcx        # 0x1806d2230
   1803cb383:	45 33 f6             	xor    %r14d,%r14d
   1803cb386:	4c 89 78 e8          	mov    %r15,-0x18(%rax)
   1803cb38a:	44 89 35 b3 64 d4 00 	mov    %r14d,0xd464b3(%rip)        # 0x181111844
   1803cb391:	44 89 35 a8 64 d4 00 	mov    %r14d,0xd464a8(%rip)        # 0x181111840
   1803cb398:	0f 29 70 d8          	movaps %xmm6,-0x28(%rax)
   1803cb39c:	e8 2f f2 ff ff       	call   0x1803ca5d0
   1803cb3a1:	48 8b c8             	mov    %rax,%rcx
   1803cb3a4:	49 bf fe ff fe ff ff 	movabs $0x7ffffffefffe,%r15
   1803cb3ab:	7f 00 00 
   1803cb3ae:	48 85 c0             	test   %rax,%rax
   1803cb3b1:	74 6e                	je     0x1803cb421
   1803cb3b3:	4c 63 48 03          	movslq 0x3(%rax),%r9
   1803cb3b7:	4c 8d 05 62 5e 4d 00 	lea    0x4d5e62(%rip),%r8        # 0x1808a1220
   1803cb3be:	48 05 07 00 ff ff    	add    $0xffffffffffff0007,%rax
   1803cb3c4:	48 8d 15 05 b1 4d 00 	lea    0x4db105(%rip),%rdx        # 0x1808a64d0
   1803cb3cb:	49 03 c1             	add    %r9,%rax
   1803cb3ce:	49 3b c7             	cmp    %r15,%rax
   1803cb3d1:	77 18                	ja     0x1803cb3eb
   1803cb3d3:	48 8d 59 07          	lea    0x7(%rcx),%rbx
   1803cb3d7:	49 03 d9             	add    %r9,%rbx
   1803cb3da:	48 8d 0d 4f 6e 30 00 	lea    0x306e4f(%rip),%rcx        # 0x1806d2230
   1803cb3e1:	4c 8b cb             	mov    %rbx,%r9
   1803cb3e4:	e8 87 ef ff ff       	call   0x1803ca370
   1803cb3e9:	eb 39                	jmp    0x1803cb424
   1803cb3eb:	45 33 c9             	xor    %r9d,%r9d
   1803cb3ee:	48 8d 0d 3b 6e 30 00 	lea    0x306e3b(%rip),%rcx        # 0x1806d2230
   1803cb3f5:	e8 76 ef ff ff       	call   0x1803ca370
   1803cb3fa:	ff 05 40 64 d4 00    	incl   0xd46440(%rip)        # 0x181111840
   1803cb400:	4c 8d 0d 19 5e 4d 00 	lea    0x4d5e19(%rip),%r9        # 0x1808a1220
   1803cb407:	4c 8d 05 c2 b0 4d 00 	lea    0x4db0c2(%rip),%r8        # 0x1808a64d0
   1803cb40e:	48 8d 15 1b 6e 30 00 	lea    0x306e1b(%rip),%rdx        # 0x1806d2230
   1803cb415:	48 8d 0d 64 ad 4d 00 	lea    0x4dad64(%rip),%rcx        # 0x1808a6180
   1803cb41c:	e8 3f 71 ee ff       	call   0x1802b2560
   1803cb421:	49 8b de             	mov    %r14,%rbx
   1803cb424:	4c 8d 05 d5 5d 4d 00 	lea    0x4d5dd5(%rip),%r8        # 0x1808a1200
   1803cb42b:	48 89 1d 9e 65 59 00 	mov    %rbx,0x59659e(%rip)        # 0x1809619d0
   1803cb432:	48 8d 15 7f b0 4d 00 	lea    0x4db07f(%rip),%rdx        # 0x1808a64b8
   1803cb439:	48 8d 0d f0 6d 30 00 	lea    0x306df0(%rip),%rcx        # 0x1806d2230
   1803cb440:	e8 8b f1 ff ff       	call   0x1803ca5d0
   1803cb445:	48 8b c8             	mov    %rax,%rcx
   1803cb448:	48 85 c0             	test   %rax,%rax
   1803cb44b:	74 6e                	je     0x1803cb4bb
   1803cb44d:	4c 63 48 03          	movslq 0x3(%rax),%r9
   1803cb451:	4c 8d 05 a8 5d 4d 00 	lea    0x4d5da8(%rip),%r8        # 0x1808a1200
   1803cb458:	48 05 07 00 ff ff    	add    $0xffffffffffff0007,%rax
   1803cb45e:	48 8d 15 53 b0 4d 00 	lea    0x4db053(%rip),%rdx        # 0x1808a64b8
   1803cb465:	49 03 c1             	add    %r9,%rax
   1803cb468:	49 3b c7             	cmp    %r15,%rax
   1803cb46b:	77 18                	ja     0x1803cb485
   1803cb46d:	48 8d 59 07          	lea    0x7(%rcx),%rbx
   1803cb471:	49 03 d9             	add    %r9,%rbx
   1803cb474:	48 8d 0d b5 6d 30 00 	lea    0x306db5(%rip),%rcx        # 0x1806d2230
   1803cb47b:	4c 8b cb             	mov    %rbx,%r9
   1803cb47e:	e8 ed ee ff ff       	call   0x1803ca370
   1803cb483:	eb 39                	jmp    0x1803cb4be
   1803cb485:	45 33 c9             	xor    %r9d,%r9d
   1803cb488:	48 8d 0d a1 6d 30 00 	lea    0x306da1(%rip),%rcx        # 0x1806d2230
   1803cb48f:	e8 dc ee ff ff       	call   0x1803ca370
   1803cb494:	ff 05 a6 63 d4 00    	incl   0xd463a6(%rip)        # 0x181111840
   1803cb49a:	4c 8d 0d 5f 5d 4d 00 	lea    0x4d5d5f(%rip),%r9        # 0x1808a1200
   1803cb4a1:	4c 8d 05 10 b0 4d 00 	lea    0x4db010(%rip),%r8        # 0x1808a64b8
   1803cb4a8:	48 8d 15 81 6d 30 00 	lea    0x306d81(%rip),%rdx        # 0x1806d2230
   1803cb4af:	48 8d 0d ca ac 4d 00 	lea    0x4dacca(%rip),%rcx        # 0x1808a6180
   1803cb4b6:	e8 a5 70 ee ff       	call   0x1802b2560
   1803cb4bb:	49 8b de             	mov    %r14,%rbx
   1803cb4be:	4c 8d 05 1b 5d 4d 00 	lea    0x4d5d1b(%rip),%r8        # 0x1808a11e0
   1803cb4c5:	48 89 1d 0c 65 59 00 	mov    %rbx,0x59650c(%rip)        # 0x1809619d8
   1803cb4cc:	48 8d 15 d5 af 4d 00 	lea    0x4dafd5(%rip),%rdx        # 0x1808a64a8
   1803cb4d3:	48 8d 0d 56 6d 30 00 	lea    0x306d56(%rip),%rcx        # 0x1806d2230
   1803cb4da:	e8 f1 f0 ff ff       	call   0x1803ca5d0
   1803cb4df:	48 8b c8             	mov    %rax,%rcx
   1803cb4e2:	48 85 c0             	test   %rax,%rax
   1803cb4e5:	74 6e                	je     0x1803cb555
   1803cb4e7:	4c 63 48 03          	movslq 0x3(%rax),%r9
   1803cb4eb:	4c 8d 05 ee 5c 4d 00 	lea    0x4d5cee(%rip),%r8        # 0x1808a11e0
   1803cb4f2:	48 05 07 00 ff ff    	add    $0xffffffffffff0007,%rax
   1803cb4f8:	48 8d 15 a9 af 4d 00 	lea    0x4dafa9(%rip),%rdx        # 0x1808a64a8
   1803cb4ff:	49 03 c1             	add    %r9,%rax
   1803cb502:	49 3b c7             	cmp    %r15,%rax
   1803cb505:	77 18                	ja     0x1803cb51f
   1803cb507:	48 8d 59 07          	lea    0x7(%rcx),%rbx
   1803cb50b:	49 03 d9             	add    %r9,%rbx
   1803cb50e:	48 8d 0d 1b 6d 30 00 	lea    0x306d1b(%rip),%rcx        # 0x1806d2230
   1803cb515:	4c 8b cb             	mov    %rbx,%r9
   1803cb518:	e8 53 ee ff ff       	call   0x1803ca370
   1803cb51d:	eb 39                	jmp    0x1803cb558
   1803cb51f:	45 33 c9             	xor    %r9d,%r9d
   1803cb522:	48 8d 0d 07 6d 30 00 	lea    0x306d07(%rip),%rcx        # 0x1806d2230
   1803cb529:	e8 42 ee ff ff       	call   0x1803ca370
   1803cb52e:	ff 05 0c 63 d4 00    	incl   0xd4630c(%rip)        # 0x181111840
   1803cb534:	4c 8d 0d a5 5c 4d 00 	lea    0x4d5ca5(%rip),%r9        # 0x1808a11e0
   1803cb53b:	4c 8d 05 66 af 4d 00 	lea    0x4daf66(%rip),%r8        # 0x1808a64a8
   1803cb542:	48 8d 15 e7 6c 30 00 	lea    0x306ce7(%rip),%rdx        # 0x1806d2230
   1803cb549:	48 8d 0d 30 ac 4d 00 	lea    0x4dac30(%rip),%rcx        # 0x1808a6180
   1803cb550:	e8 0b 70 ee ff       	call   0x1802b2560
   1803cb555:	49 8b de             	mov    %r14,%rbx
   1803cb558:	4c 8d 05 f9 9c 4d 00 	lea    0x4d9cf9(%rip),%r8        # 0x1808a5258
   1803cb55f:	48 89 1d 7a 64 59 00 	mov    %rbx,0x59647a(%rip)        # 0x1809619e0
   1803cb566:	48 8d 15 13 43 33 00 	lea    0x334313(%rip),%rdx        # 0x1806ff880
   1803cb56d:	48 8d 0d 24 a9 31 00 	lea    0x31a924(%rip),%rcx        # 0x1806e5e98
   1803cb574:	e8 57 f0 ff ff       	call   0x1803ca5d0
   1803cb579:	48 85 c0             	test   %rax,%rax
   1803cb57c:	0f 84 93 00 00 00    	je     0x1803cb615
   1803cb582:	48 63 78 03          	movslq 0x3(%rax),%rdi
   1803cb586:	4c 8d 05 cb 9c 4d 00 	lea    0x4d9ccb(%rip),%r8        # 0x1808a5258
   1803cb58d:	48 03 f8             	add    %rax,%rdi
   1803cb590:	48 8d 15 e9 42 33 00 	lea    0x3342e9(%rip),%rdx        # 0x1806ff880
   1803cb597:	48 8d 0d fa a8 31 00 	lea    0x31a8fa(%rip),%rcx        # 0x1806e5e98
   1803cb59e:	48 8d 87 07 00 ff ff 	lea    -0xfff9(%rdi),%rax
   1803cb5a5:	49 3b c7             	cmp    %r15,%rax
   1803cb5a8:	77 3c                	ja     0x1803cb5e6
   1803cb5aa:	48 8d 5f 07          	lea    0x7(%rdi),%rbx
   1803cb5ae:	4c 8b cb             	mov    %rbx,%r9
   1803cb5b1:	e8 ba ed ff ff       	call   0x1803ca370
   1803cb5b6:	48 85 db             	test   %rbx,%rbx
   1803cb5b9:	74 5a                	je     0x1803cb615
   1803cb5bb:	8b 0d 4b 63 59 00    	mov    0x59634b(%rip),%ecx        # 0x18096190c
   1803cb5c1:	48 83 c1 07          	add    $0x7,%rcx
   1803cb5c5:	48 03 cf             	add    %rdi,%rcx
   1803cb5c8:	e8 d3 3d c4 ff       	call   0x18000f3a0
   1803cb5cd:	48 8d 4f 0f          	lea    0xf(%rdi),%rcx
   1803cb5d1:	48 89 05 10 64 59 00 	mov    %rax,0x596410(%rip)        # 0x1809619e8
   1803cb5d8:	e8 c3 3d c4 ff       	call   0x18000f3a0
   1803cb5dd:	48 89 05 ec 66 59 00 	mov    %rax,0x5966ec(%rip)        # 0x180961cd0
   1803cb5e4:	eb 2f                	jmp    0x1803cb615
   1803cb5e6:	45 33 c9             	xor    %r9d,%r9d
   1803cb5e9:	e8 82 ed ff ff       	call   0x1803ca370
   1803cb5ee:	ff 05 4c 62 d4 00    	incl   0xd4624c(%rip)        # 0x181111840
   1803cb5f4:	4c 8d 0d 5d 9c 4d 00 	lea    0x4d9c5d(%rip),%r9        # 0x1808a5258
   1803cb5fb:	4c 8d 05 7e 42 33 00 	lea    0x33427e(%rip),%r8        # 0x1806ff880
   1803cb602:	48 8d 15 8f a8 31 00 	lea    0x31a88f(%rip),%rdx        # 0x1806e5e98
   1803cb609:	48 8d 0d 70 ab 4d 00 	lea    0x4dab70(%rip),%rcx        # 0x1808a6180
   1803cb610:	e8 4b 6f ee ff       	call   0x1802b2560
   1803cb615:	ff 05 29 62 d4 00    	incl   0xd46229(%rip)        # 0x181111844
   1803cb61b:	48 8d 0d 76 a8 31 00 	lea    0x31a876(%rip),%rcx        # 0x1806e5e98
   1803cb622:	ff 15 58 fb 19 00    	call   *0x19fb58(%rip)        # 0x18056b180
   1803cb628:	48 8b d8             	mov    %rax,%rbx
   1803cb62b:	48 85 c0             	test   %rax,%rax
   1803cb62e:	75 08                	jne    0x1803cb638
   1803cb630:	49 8b c6             	mov    %r14,%rax
   1803cb633:	49 8b ce             	mov    %r14,%rcx
   1803cb636:	eb 4b                	jmp    0x1803cb683
   1803cb638:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803cb63b:	33 c0                	xor    %eax,%eax
   1803cb63d:	0f 11 85 88 00 00 00 	movups %xmm0,0x88(%rbp)
   1803cb644:	48 89 85 98 00 00 00 	mov    %rax,0x98(%rbp)
   1803cb64b:	ff 15 3f fc 19 00    	call   *0x19fc3f(%rip)        # 0x18056b290
   1803cb651:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803cb657:	4c 8d 85 88 00 00 00 	lea    0x88(%rbp),%r8
   1803cb65e:	48 8b c8             	mov    %rax,%rcx
   1803cb661:	48 8b d3             	mov    %rbx,%rdx
   1803cb664:	ff 15 2e fc 19 00    	call   *0x19fc2e(%rip)        # 0x18056b298
   1803cb66a:	85 c0                	test   %eax,%eax
   1803cb66c:	75 08                	jne    0x1803cb676
   1803cb66e:	49 8b c6             	mov    %r14,%rax
   1803cb671:	49 8b ce             	mov    %r14,%rcx
   1803cb674:	eb 0d                	jmp    0x1803cb683
   1803cb676:	48 8b 85 88 00 00 00 	mov    0x88(%rbp),%rax
   1803cb67d:	8b 8d 90 00 00 00    	mov    0x90(%rbp),%ecx
   1803cb683:	48 89 4c 24 38       	mov    %rcx,0x38(%rsp)
   1803cb688:	48 8d 1d f9 ad 4d 00 	lea    0x4dadf9(%rip),%rbx        # 0x1808a6488
   1803cb68f:	48 8d 4c 24 30       	lea    0x30(%rsp),%rcx
   1803cb694:	48 89 5c 24 40       	mov    %rbx,0x40(%rsp)
   1803cb699:	48 8d 54 24 40       	lea    0x40(%rsp),%rdx
   1803cb69e:	48 89 44 24 30       	mov    %rax,0x30(%rsp)
   1803cb6a3:	48 c7 44 24 48 1a 00 	movq   $0x1a,0x48(%rsp)
   1803cb6aa:	00 00 
   1803cb6ac:	e8 5f 68 e0 ff       	call   0x1801d1f10
   1803cb6b1:	48 85 c0             	test   %rax,%rax
   1803cb6b4:	74 17                	je     0x1803cb6cd
   1803cb6b6:	8b 0d 50 62 59 00    	mov    0x596250(%rip),%ecx        # 0x18096190c
   1803cb6bc:	48 03 c8             	add    %rax,%rcx
   1803cb6bf:	e8 dc 3c c4 ff       	call   0x18000f3a0
   1803cb6c4:	48 89 05 25 63 59 00 	mov    %rax,0x596325(%rip)        # 0x1809619f0
   1803cb6cb:	eb 1d                	jmp    0x1803cb6ea
   1803cb6cd:	4c 8d 0d 6f ff 1b 00 	lea    0x1bff6f(%rip),%r9        # 0x18058b643
   1803cb6d4:	4c 8b c3             	mov    %rbx,%r8
   1803cb6d7:	48 8d 15 ba a7 31 00 	lea    0x31a7ba(%rip),%rdx        # 0x1806e5e98
   1803cb6de:	48 8d 0d 7b ad 4d 00 	lea    0x4dad7b(%rip),%rcx        # 0x1808a6460
   1803cb6e5:	e8 66 ec ff ff       	call   0x1803ca350
   1803cb6ea:	48 8d 0d a7 a7 31 00 	lea    0x31a7a7(%rip),%rcx        # 0x1806e5e98
   1803cb6f1:	ff 15 89 fa 19 00    	call   *0x19fa89(%rip)        # 0x18056b180
   1803cb6f7:	48 8b d8             	mov    %rax,%rbx
   1803cb6fa:	48 85 c0             	test   %rax,%rax
   1803cb6fd:	75 08                	jne    0x1803cb707
   1803cb6ff:	49 8b c6             	mov    %r14,%rax
   1803cb702:	49 8b ce             	mov    %r14,%rcx
   1803cb705:	eb 4b                	jmp    0x1803cb752
   1803cb707:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803cb70a:	33 c0                	xor    %eax,%eax
   1803cb70c:	0f 11 85 a0 00 00 00 	movups %xmm0,0xa0(%rbp)
   1803cb713:	48 89 85 b0 00 00 00 	mov    %rax,0xb0(%rbp)
   1803cb71a:	ff 15 70 fb 19 00    	call   *0x19fb70(%rip)        # 0x18056b290
   1803cb720:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803cb726:	4c 8d 85 a0 00 00 00 	lea    0xa0(%rbp),%r8
   1803cb72d:	48 8b c8             	mov    %rax,%rcx
   1803cb730:	48 8b d3             	mov    %rbx,%rdx
   1803cb733:	ff 15 5f fb 19 00    	call   *0x19fb5f(%rip)        # 0x18056b298
   1803cb739:	85 c0                	test   %eax,%eax
   1803cb73b:	75 08                	jne    0x1803cb745
   1803cb73d:	49 8b c6             	mov    %r14,%rax
   1803cb740:	49 8b ce             	mov    %r14,%rcx
   1803cb743:	eb 0d                	jmp    0x1803cb752
   1803cb745:	48 8b 85 a0 00 00 00 	mov    0xa0(%rbp),%rax
   1803cb74c:	8b 8d a8 00 00 00    	mov    0xa8(%rbp),%ecx
   1803cb752:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803cb757:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803cb75c:	48 8d 05 e5 ac 4d 00 	lea    0x4dace5(%rip),%rax        # 0x1808a6448
   1803cb763:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803cb768:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803cb76d:	48 89 44 24 30       	mov    %rax,0x30(%rsp)
   1803cb772:	48 c7 44 24 38 14 00 	movq   $0x14,0x38(%rsp)
   1803cb779:	00 00 
   1803cb77b:	e8 90 67 e0 ff       	call   0x1801d1f10
   1803cb780:	ff 05 be 60 d4 00    	incl   0xd460be(%rip)        # 0x181111844
   1803cb786:	48 8d 3d 43 7a 4d 00 	lea    0x4d7a43(%rip),%rdi        # 0x1808a31d0
   1803cb78d:	4c 8b c7             	mov    %rdi,%r8
   1803cb790:	48 89 05 61 62 59 00 	mov    %rax,0x596261(%rip)        # 0x1809619f8
   1803cb797:	45 33 c9             	xor    %r9d,%r9d
   1803cb79a:	48 8d 15 3f 41 33 00 	lea    0x33413f(%rip),%rdx        # 0x1806ff8e0
   1803cb7a1:	48 8d 0d f0 a6 31 00 	lea    0x31a6f0(%rip),%rcx        # 0x1806e5e98
   1803cb7a8:	e8 c3 eb ff ff       	call   0x1803ca370
   1803cb7ad:	48 8d 0d e4 a6 31 00 	lea    0x31a6e4(%rip),%rcx        # 0x1806e5e98
   1803cb7b4:	ff 15 c6 f9 19 00    	call   *0x19f9c6(%rip)        # 0x18056b180
   1803cb7ba:	48 8b d8             	mov    %rax,%rbx
   1803cb7bd:	48 85 c0             	test   %rax,%rax
   1803cb7c0:	0f 84 a3 00 00 00    	je     0x1803cb869
   1803cb7c6:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803cb7c9:	33 c0                	xor    %eax,%eax
   1803cb7cb:	0f 11 85 b8 00 00 00 	movups %xmm0,0xb8(%rbp)
   1803cb7d2:	48 89 85 c8 00 00 00 	mov    %rax,0xc8(%rbp)
   1803cb7d9:	ff 15 b1 fa 19 00    	call   *0x19fab1(%rip)        # 0x18056b290
   1803cb7df:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803cb7e5:	4c 8d 85 b8 00 00 00 	lea    0xb8(%rbp),%r8
   1803cb7ec:	48 8b c8             	mov    %rax,%rcx
   1803cb7ef:	48 8b d3             	mov    %rbx,%rdx
   1803cb7f2:	ff 15 a0 fa 19 00    	call   *0x19faa0(%rip)        # 0x18056b298
   1803cb7f8:	85 c0                	test   %eax,%eax
   1803cb7fa:	74 6d                	je     0x1803cb869
   1803cb7fc:	48 8b 85 b8 00 00 00 	mov    0xb8(%rbp),%rax
   1803cb803:	8b 8d c0 00 00 00    	mov    0xc0(%rbp),%ecx
   1803cb809:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803cb80e:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803cb813:	48 85 c0             	test   %rax,%rax
   1803cb816:	74 51                	je     0x1803cb869
   1803cb818:	48 85 c9             	test   %rcx,%rcx
   1803cb81b:	74 4c                	je     0x1803cb869
   1803cb81d:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803cb822:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803cb827:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803cb82c:	48 c7 44 24 38 6f 00 	movq   $0x6f,0x38(%rsp)
   1803cb833:	00 00 
   1803cb835:	e8 c6 65 e0 ff       	call   0x1801d1e00
   1803cb83a:	48 8b d8             	mov    %rax,%rbx
   1803cb83d:	48 85 c0             	test   %rax,%rax
   1803cb840:	75 0c                	jne    0x1803cb84e
   1803cb842:	4c 8b cf             	mov    %rdi,%r9
   1803cb845:	48 8d 0d 8c a9 4d 00 	lea    0x4da98c(%rip),%rcx        # 0x1808a61d8
   1803cb84c:	eb 29                	jmp    0x1803cb877
   1803cb84e:	4c 8b c8             	mov    %rax,%r9
   1803cb851:	48 8d 15 88 40 33 00 	lea    0x334088(%rip),%rdx        # 0x1806ff8e0
   1803cb858:	4c 8b c7             	mov    %rdi,%r8
   1803cb85b:	48 8d 0d 36 a6 31 00 	lea    0x31a636(%rip),%rcx        # 0x1806e5e98
   1803cb862:	e8 09 eb ff ff       	call   0x1803ca370
   1803cb867:	eb 2a                	jmp    0x1803cb893
   1803cb869:	4c 8d 0d d3 fd 1b 00 	lea    0x1bfdd3(%rip),%r9        # 0x18058b643
   1803cb870:	48 8d 0d 89 a9 4d 00 	lea    0x4da989(%rip),%rcx        # 0x1808a6200
   1803cb877:	ff 05 c3 5f d4 00    	incl   0xd45fc3(%rip)        # 0x181111840
   1803cb87d:	4c 8d 05 5c 40 33 00 	lea    0x33405c(%rip),%r8        # 0x1806ff8e0
   1803cb884:	48 8d 15 0d a6 31 00 	lea    0x31a60d(%rip),%rdx        # 0x1806e5e98
   1803cb88b:	e8 d0 6c ee ff       	call   0x1802b2560
   1803cb890:	49 8b de             	mov    %r14,%rbx
   1803cb893:	ff 05 ab 5f d4 00    	incl   0xd45fab(%rip)        # 0x181111844
   1803cb899:	48 8d 3d c8 58 4d 00 	lea    0x4d58c8(%rip),%rdi        # 0x1808a1168
   1803cb8a0:	4c 8b c7             	mov    %rdi,%r8
   1803cb8a3:	48 89 1d 2e 64 59 00 	mov    %rbx,0x59642e(%rip)        # 0x180961cd8
   1803cb8aa:	45 33 c9             	xor    %r9d,%r9d
   1803cb8ad:	48 8d 15 94 40 33 00 	lea    0x334094(%rip),%rdx        # 0x1806ff948
   1803cb8b4:	48 8d 0d dd a5 31 00 	lea    0x31a5dd(%rip),%rcx        # 0x1806e5e98
   1803cb8bb:	e8 b0 ea ff ff       	call   0x1803ca370
   1803cb8c0:	48 8d 0d d1 a5 31 00 	lea    0x31a5d1(%rip),%rcx        # 0x1806e5e98
   1803cb8c7:	ff 15 b3 f8 19 00    	call   *0x19f8b3(%rip)        # 0x18056b180
   1803cb8cd:	48 8b d8             	mov    %rax,%rbx
   1803cb8d0:	48 85 c0             	test   %rax,%rax
   1803cb8d3:	0f 84 a3 00 00 00    	je     0x1803cb97c
   1803cb8d9:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803cb8dc:	33 c0                	xor    %eax,%eax
   1803cb8de:	0f 11 85 d0 00 00 00 	movups %xmm0,0xd0(%rbp)
   1803cb8e5:	48 89 85 e0 00 00 00 	mov    %rax,0xe0(%rbp)
   1803cb8ec:	ff 15 9e f9 19 00    	call   *0x19f99e(%rip)        # 0x18056b290
   1803cb8f2:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803cb8f8:	4c 8d 85 d0 00 00 00 	lea    0xd0(%rbp),%r8
   1803cb8ff:	48 8b c8             	mov    %rax,%rcx
   1803cb902:	48 8b d3             	mov    %rbx,%rdx
   1803cb905:	ff 15 8d f9 19 00    	call   *0x19f98d(%rip)        # 0x18056b298
   1803cb90b:	85 c0                	test   %eax,%eax
   1803cb90d:	74 6d                	je     0x1803cb97c
   1803cb90f:	48 8b 85 d0 00 00 00 	mov    0xd0(%rbp),%rax
   1803cb916:	8b 8d d8 00 00 00    	mov    0xd8(%rbp),%ecx
   1803cb91c:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803cb921:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803cb926:	48 85 c0             	test   %rax,%rax
   1803cb929:	74 51                	je     0x1803cb97c
   1803cb92b:	48 85 c9             	test   %rcx,%rcx
   1803cb92e:	74 4c                	je     0x1803cb97c
   1803cb930:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803cb935:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803cb93a:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803cb93f:	48 c7 44 24 38 1f 00 	movq   $0x1f,0x38(%rsp)
   1803cb946:	00 00 
   1803cb948:	e8 b3 64 e0 ff       	call   0x1801d1e00
   1803cb94d:	48 8b d8             	mov    %rax,%rbx
   1803cb950:	48 85 c0             	test   %rax,%rax
   1803cb953:	75 0c                	jne    0x1803cb961
   1803cb955:	4c 8b cf             	mov    %rdi,%r9
   1803cb958:	48 8d 0d 79 a8 4d 00 	lea    0x4da879(%rip),%rcx        # 0x1808a61d8
   1803cb95f:	eb 29                	jmp    0x1803cb98a
   1803cb961:	4c 8b c8             	mov    %rax,%r9
   1803cb964:	48 8d 15 dd 3f 33 00 	lea    0x333fdd(%rip),%rdx        # 0x1806ff948
   1803cb96b:	4c 8b c7             	mov    %rdi,%r8
   1803cb96e:	48 8d 0d 23 a5 31 00 	lea    0x31a523(%rip),%rcx        # 0x1806e5e98
   1803cb975:	e8 f6 e9 ff ff       	call   0x1803ca370
   1803cb97a:	eb 2a                	jmp    0x1803cb9a6
   1803cb97c:	4c 8d 0d c0 fc 1b 00 	lea    0x1bfcc0(%rip),%r9        # 0x18058b643
   1803cb983:	48 8d 0d 76 a8 4d 00 	lea    0x4da876(%rip),%rcx        # 0x1808a6200
   1803cb98a:	ff 05 b0 5e d4 00    	incl   0xd45eb0(%rip)        # 0x181111840
   1803cb990:	4c 8d 05 b1 3f 33 00 	lea    0x333fb1(%rip),%r8        # 0x1806ff948
   1803cb997:	48 8d 15 fa a4 31 00 	lea    0x31a4fa(%rip),%rdx        # 0x1806e5e98
   1803cb99e:	e8 bd 6b ee ff       	call   0x1802b2560
   1803cb9a3:	49 8b de             	mov    %r14,%rbx
   1803cb9a6:	4c 8d 05 9b 57 4d 00 	lea    0x4d579b(%rip),%r8        # 0x1808a1148
   1803cb9ad:	48 89 1d 34 63 59 00 	mov    %rbx,0x596334(%rip)        # 0x180961ce8
   1803cb9b4:	48 8d 15 75 3f 33 00 	lea    0x333f75(%rip),%rdx        # 0x1806ff930
   1803cb9bb:	48 8d 0d d6 a4 31 00 	lea    0x31a4d6(%rip),%rcx        # 0x1806e5e98
   1803cb9c2:	e8 09 ec ff ff       	call   0x1803ca5d0
   1803cb9c7:	48 8b d8             	mov    %rax,%rbx
   1803cb9ca:	48 85 c0             	test   %rax,%rax
   1803cb9cd:	0f 84 92 00 00 00    	je     0x1803cba65
   1803cb9d3:	48 05 00 00 ff ff    	add    $0xffffffffffff0000,%rax
   1803cb9d9:	49 3b c7             	cmp    %r15,%rax
   1803cb9dc:	77 43                	ja     0x1803cba21
   1803cb9de:	48 8b cb             	mov    %rbx,%rcx
   1803cb9e1:	e8 3a 58 c4 ff       	call   0x180011220
   1803cb9e6:	3c e8                	cmp    $0xe8,%al
   1803cb9e8:	75 37                	jne    0x1803cba21
   1803cb9ea:	48 8d 4b 01          	lea    0x1(%rbx),%rcx
   1803cb9ee:	e8 0d 58 c4 ff       	call   0x180011200
   1803cb9f3:	48 63 c8             	movslq %eax,%rcx
   1803cb9f6:	4c 8d 05 4b 57 4d 00 	lea    0x4d574b(%rip),%r8        # 0x1808a1148
   1803cb9fd:	48 83 c3 05          	add    $0x5,%rbx
   1803cba01:	48 8d 15 28 3f 33 00 	lea    0x333f28(%rip),%rdx        # 0x1806ff930
   1803cba08:	48 03 d9             	add    %rcx,%rbx
   1803cba0b:	48 8d 0d 86 a4 31 00 	lea    0x31a486(%rip),%rcx        # 0x1806e5e98
   1803cba12:	4c 8b cb             	mov    %rbx,%r9
   1803cba15:	e8 56 e9 ff ff       	call   0x1803ca370
   1803cba1a:	48 85 db             	test   %rbx,%rbx
   1803cba1d:	74 1f                	je     0x1803cba3e
   1803cba1f:	eb 47                	jmp    0x1803cba68
   1803cba21:	45 33 c9             	xor    %r9d,%r9d
   1803cba24:	4c 8d 05 1d 57 4d 00 	lea    0x4d571d(%rip),%r8        # 0x1808a1148
   1803cba2b:	48 8d 15 fe 3e 33 00 	lea    0x333efe(%rip),%rdx        # 0x1806ff930
   1803cba32:	48 8d 0d 5f a4 31 00 	lea    0x31a45f(%rip),%rcx        # 0x1806e5e98
   1803cba39:	e8 32 e9 ff ff       	call   0x1803ca370
   1803cba3e:	ff 05 fc 5d d4 00    	incl   0xd45dfc(%rip)        # 0x181111840
   1803cba44:	4c 8d 0d fd 56 4d 00 	lea    0x4d56fd(%rip),%r9        # 0x1808a1148
   1803cba4b:	4c 8d 05 de 3e 33 00 	lea    0x333ede(%rip),%r8        # 0x1806ff930
   1803cba52:	48 8d 15 3f a4 31 00 	lea    0x31a43f(%rip),%rdx        # 0x1806e5e98
   1803cba59:	48 8d 0d 50 a7 4d 00 	lea    0x4da750(%rip),%rcx        # 0x1808a61b0
   1803cba60:	e8 fb 6a ee ff       	call   0x1802b2560
   1803cba65:	49 8b de             	mov    %r14,%rbx
   1803cba68:	4c 8d 05 41 77 4d 00 	lea    0x4d7741(%rip),%r8        # 0x1808a31b0
   1803cba6f:	48 89 b4 24 38 0c 00 	mov    %rsi,0xc38(%rsp)
   1803cba76:	00 
   1803cba77:	48 8d 15 b2 a9 4d 00 	lea    0x4da9b2(%rip),%rdx        # 0x1808a6430
   1803cba7e:	48 89 1d 6b 62 59 00 	mov    %rbx,0x59626b(%rip)        # 0x180961cf0
   1803cba85:	48 8d 0d 0c a4 31 00 	lea    0x31a40c(%rip),%rcx        # 0x1806e5e98
   1803cba8c:	e8 3f eb ff ff       	call   0x1803ca5d0
   1803cba91:	48 8b f8             	mov    %rax,%rdi
   1803cba94:	48 85 c0             	test   %rax,%rax
   1803cba97:	74 7b                	je     0x1803cbb14
   1803cba99:	48 63 70 03          	movslq 0x3(%rax),%rsi
   1803cba9d:	48 8d 88 07 00 ff ff 	lea    -0xfff9(%rax),%rcx
   1803cbaa4:	48 03 ce             	add    %rsi,%rcx
   1803cbaa7:	4c 8d 05 02 77 4d 00 	lea    0x4d7702(%rip),%r8        # 0x1808a31b0
   1803cbaae:	49 3b cf             	cmp    %r15,%rcx
   1803cbab1:	48 8d 15 78 a9 4d 00 	lea    0x4da978(%rip),%rdx        # 0x1808a6430
   1803cbab8:	48 8d 0d d9 a3 31 00 	lea    0x31a3d9(%rip),%rcx        # 0x1806e5e98
   1803cbabf:	77 24                	ja     0x1803cbae5
   1803cbac1:	48 8d 58 07          	lea    0x7(%rax),%rbx
   1803cbac5:	48 03 de             	add    %rsi,%rbx
   1803cbac8:	4c 8b cb             	mov    %rbx,%r9
   1803cbacb:	e8 a0 e8 ff ff       	call   0x1803ca370
   1803cbad0:	48 85 db             	test   %rbx,%rbx
   1803cbad3:	74 3f                	je     0x1803cbb14
   1803cbad5:	48 8d 47 0f          	lea    0xf(%rdi),%rax
   1803cbad9:	48 03 c6             	add    %rsi,%rax
   1803cbadc:	48 89 05 fd 61 59 00 	mov    %rax,0x5961fd(%rip)        # 0x180961ce0
   1803cbae3:	eb 2f                	jmp    0x1803cbb14
   1803cbae5:	45 33 c9             	xor    %r9d,%r9d
   1803cbae8:	e8 83 e8 ff ff       	call   0x1803ca370
   1803cbaed:	ff 05 4d 5d d4 00    	incl   0xd45d4d(%rip)        # 0x181111840
   1803cbaf3:	4c 8d 0d b6 76 4d 00 	lea    0x4d76b6(%rip),%r9        # 0x1808a31b0
   1803cbafa:	4c 8d 05 2f a9 4d 00 	lea    0x4da92f(%rip),%r8        # 0x1808a6430
   1803cbb01:	48 8d 15 90 a3 31 00 	lea    0x31a390(%rip),%rdx        # 0x1806e5e98
   1803cbb08:	48 8d 0d 71 a6 4d 00 	lea    0x4da671(%rip),%rcx        # 0x1808a6180
   1803cbb0f:	e8 4c 6a ee ff       	call   0x1802b2560
   1803cbb14:	4c 8d 05 8d 56 4d 00 	lea    0x4d568d(%rip),%r8        # 0x1808a11a8
   1803cbb1b:	48 8d 15 06 3d 33 00 	lea    0x333d06(%rip),%rdx        # 0x1806ff828
   1803cbb22:	48 8d 0d 07 67 30 00 	lea    0x306707(%rip),%rcx        # 0x1806d2230
   1803cbb29:	e8 a2 ea ff ff       	call   0x1803ca5d0
   1803cbb2e:	48 8b d8             	mov    %rax,%rbx
   1803cbb31:	48 85 c0             	test   %rax,%rax
   1803cbb34:	0f 84 93 00 00 00    	je     0x1803cbbcd
   1803cbb3a:	48 05 08 00 ff ff    	add    $0xffffffffffff0008,%rax
   1803cbb40:	49 3b c7             	cmp    %r15,%rax
   1803cbb43:	77 44                	ja     0x1803cbb89
   1803cbb45:	48 8d 4b 08          	lea    0x8(%rbx),%rcx
   1803cbb49:	e8 d2 56 c4 ff       	call   0x180011220
   1803cbb4e:	3c e8                	cmp    $0xe8,%al
   1803cbb50:	75 37                	jne    0x1803cbb89
   1803cbb52:	48 8d 4b 09          	lea    0x9(%rbx),%rcx
   1803cbb56:	e8 a5 56 c4 ff       	call   0x180011200
   1803cbb5b:	48 63 c8             	movslq %eax,%rcx
   1803cbb5e:	4c 8d 05 43 56 4d 00 	lea    0x4d5643(%rip),%r8        # 0x1808a11a8
   1803cbb65:	48 83 c3 0d          	add    $0xd,%rbx
   1803cbb69:	48 8d 15 b8 3c 33 00 	lea    0x333cb8(%rip),%rdx        # 0x1806ff828
   1803cbb70:	48 03 d9             	add    %rcx,%rbx
   1803cbb73:	48 8d 0d b6 66 30 00 	lea    0x3066b6(%rip),%rcx        # 0x1806d2230
   1803cbb7a:	4c 8b cb             	mov    %rbx,%r9
   1803cbb7d:	e8 ee e7 ff ff       	call   0x1803ca370
   1803cbb82:	48 85 db             	test   %rbx,%rbx
   1803cbb85:	74 1f                	je     0x1803cbba6
   1803cbb87:	eb 47                	jmp    0x1803cbbd0
   1803cbb89:	45 33 c9             	xor    %r9d,%r9d
   1803cbb8c:	4c 8d 05 15 56 4d 00 	lea    0x4d5615(%rip),%r8        # 0x1808a11a8
   1803cbb93:	48 8d 15 8e 3c 33 00 	lea    0x333c8e(%rip),%rdx        # 0x1806ff828
   1803cbb9a:	48 8d 0d 8f 66 30 00 	lea    0x30668f(%rip),%rcx        # 0x1806d2230
   1803cbba1:	e8 ca e7 ff ff       	call   0x1803ca370
   1803cbba6:	ff 05 94 5c d4 00    	incl   0xd45c94(%rip)        # 0x181111840
   1803cbbac:	4c 8d 0d f5 55 4d 00 	lea    0x4d55f5(%rip),%r9        # 0x1808a11a8
   1803cbbb3:	4c 8d 05 6e 3c 33 00 	lea    0x333c6e(%rip),%r8        # 0x1806ff828
   1803cbbba:	48 8d 15 6f 66 30 00 	lea    0x30666f(%rip),%rdx        # 0x1806d2230
   1803cbbc1:	48 8d 0d e8 a5 4d 00 	lea    0x4da5e8(%rip),%rcx        # 0x1808a61b0
   1803cbbc8:	e8 93 69 ee ff       	call   0x1802b2560
   1803cbbcd:	49 8b de             	mov    %r14,%rbx
   1803cbbd0:	4c 8d 05 21 59 4d 00 	lea    0x4d5921(%rip),%r8        # 0x1808a14f8
   1803cbbd7:	48 89 1d 22 5e 59 00 	mov    %rbx,0x595e22(%rip)        # 0x180961a00
   1803cbbde:	48 8d 15 d3 3c 33 00 	lea    0x333cd3(%rip),%rdx        # 0x1806ff8b8
   1803cbbe5:	48 8d 0d 44 66 30 00 	lea    0x306644(%rip),%rcx        # 0x1806d2230
   1803cbbec:	e8 df e9 ff ff       	call   0x1803ca5d0
   1803cbbf1:	48 8b d8             	mov    %rax,%rbx
   1803cbbf4:	48 85 c0             	test   %rax,%rax
   1803cbbf7:	0f 84 92 00 00 00    	je     0x1803cbc8f
   1803cbbfd:	48 05 00 00 ff ff    	add    $0xffffffffffff0000,%rax
   1803cbc03:	49 3b c7             	cmp    %r15,%rax
   1803cbc06:	77 43                	ja     0x1803cbc4b
   1803cbc08:	48 8b cb             	mov    %rbx,%rcx
   1803cbc0b:	e8 10 56 c4 ff       	call   0x180011220
   1803cbc10:	3c e8                	cmp    $0xe8,%al
   1803cbc12:	75 37                	jne    0x1803cbc4b
   1803cbc14:	48 8d 4b 01          	lea    0x1(%rbx),%rcx
   1803cbc18:	e8 e3 55 c4 ff       	call   0x180011200
   1803cbc1d:	48 63 c8             	movslq %eax,%rcx
   1803cbc20:	4c 8d 05 d1 58 4d 00 	lea    0x4d58d1(%rip),%r8        # 0x1808a14f8
   1803cbc27:	48 83 c3 05          	add    $0x5,%rbx
   1803cbc2b:	48 8d 15 86 3c 33 00 	lea    0x333c86(%rip),%rdx        # 0x1806ff8b8
   1803cbc32:	48 03 d9             	add    %rcx,%rbx
   1803cbc35:	48 8d 0d f4 65 30 00 	lea    0x3065f4(%rip),%rcx        # 0x1806d2230
   1803cbc3c:	4c 8b cb             	mov    %rbx,%r9
   1803cbc3f:	e8 2c e7 ff ff       	call   0x1803ca370
   1803cbc44:	48 85 db             	test   %rbx,%rbx
   1803cbc47:	74 1f                	je     0x1803cbc68
   1803cbc49:	eb 47                	jmp    0x1803cbc92
   1803cbc4b:	45 33 c9             	xor    %r9d,%r9d
   1803cbc4e:	4c 8d 05 a3 58 4d 00 	lea    0x4d58a3(%rip),%r8        # 0x1808a14f8
   1803cbc55:	48 8d 15 5c 3c 33 00 	lea    0x333c5c(%rip),%rdx        # 0x1806ff8b8
   1803cbc5c:	48 8d 0d cd 65 30 00 	lea    0x3065cd(%rip),%rcx        # 0x1806d2230
   1803cbc63:	e8 08 e7 ff ff       	call   0x1803ca370
   1803cbc68:	ff 05 d2 5b d4 00    	incl   0xd45bd2(%rip)        # 0x181111840
   1803cbc6e:	4c 8d 0d 83 58 4d 00 	lea    0x4d5883(%rip),%r9        # 0x1808a14f8
   1803cbc75:	4c 8d 05 3c 3c 33 00 	lea    0x333c3c(%rip),%r8        # 0x1806ff8b8
   1803cbc7c:	48 8d 15 ad 65 30 00 	lea    0x3065ad(%rip),%rdx        # 0x1806d2230
   1803cbc83:	48 8d 0d 26 a5 4d 00 	lea    0x4da526(%rip),%rcx        # 0x1808a61b0
   1803cbc8a:	e8 d1 68 ee ff       	call   0x1802b2560
   1803cbc8f:	49 8b de             	mov    %r14,%rbx
   1803cbc92:	ff 05 ac 5b d4 00    	incl   0xd45bac(%rip)        # 0x181111844
   1803cbc98:	48 8d 3d 11 58 4d 00 	lea    0x4d5811(%rip),%rdi        # 0x1808a14b0
   1803cbc9f:	4c 8b c7             	mov    %rdi,%r8
   1803cbca2:	48 89 1d 5f 5d 59 00 	mov    %rbx,0x595d5f(%rip)        # 0x180961a08
   1803cbca9:	45 33 c9             	xor    %r9d,%r9d
   1803cbcac:	48 8d 15 6d a7 4d 00 	lea    0x4da76d(%rip),%rdx        # 0x1808a6420
   1803cbcb3:	48 8d 0d 76 65 30 00 	lea    0x306576(%rip),%rcx        # 0x1806d2230
   1803cbcba:	e8 b1 e6 ff ff       	call   0x1803ca370
   1803cbcbf:	48 8d 0d 6a 65 30 00 	lea    0x30656a(%rip),%rcx        # 0x1806d2230
   1803cbcc6:	ff 15 b4 f4 19 00    	call   *0x19f4b4(%rip)        # 0x18056b180
   1803cbccc:	48 8b d8             	mov    %rax,%rbx
   1803cbccf:	48 85 c0             	test   %rax,%rax
   1803cbcd2:	0f 84 a3 00 00 00    	je     0x1803cbd7b
   1803cbcd8:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803cbcdb:	33 c0                	xor    %eax,%eax
   1803cbcdd:	0f 11 85 e8 00 00 00 	movups %xmm0,0xe8(%rbp)
   1803cbce4:	48 89 85 f8 00 00 00 	mov    %rax,0xf8(%rbp)
   1803cbceb:	ff 15 9f f5 19 00    	call   *0x19f59f(%rip)        # 0x18056b290
   1803cbcf1:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803cbcf7:	4c 8d 85 e8 00 00 00 	lea    0xe8(%rbp),%r8
   1803cbcfe:	48 8b c8             	mov    %rax,%rcx
   1803cbd01:	48 8b d3             	mov    %rbx,%rdx
   1803cbd04:	ff 15 8e f5 19 00    	call   *0x19f58e(%rip)        # 0x18056b298
   1803cbd0a:	85 c0                	test   %eax,%eax
   1803cbd0c:	74 6d                	je     0x1803cbd7b
   1803cbd0e:	48 8b 85 e8 00 00 00 	mov    0xe8(%rbp),%rax
   1803cbd15:	8b 8d f0 00 00 00    	mov    0xf0(%rbp),%ecx
   1803cbd1b:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803cbd20:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803cbd25:	48 85 c0             	test   %rax,%rax
   1803cbd28:	74 51                	je     0x1803cbd7b
   1803cbd2a:	48 85 c9             	test   %rcx,%rcx
   1803cbd2d:	74 4c                	je     0x1803cbd7b
   1803cbd2f:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803cbd34:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803cbd39:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803cbd3e:	48 c7 44 24 38 46 00 	movq   $0x46,0x38(%rsp)
   1803cbd45:	00 00 
   1803cbd47:	e8 b4 60 e0 ff       	call   0x1801d1e00
   1803cbd4c:	48 8b d8             	mov    %rax,%rbx
   1803cbd4f:	48 85 c0             	test   %rax,%rax
   1803cbd52:	75 0c                	jne    0x1803cbd60
   1803cbd54:	4c 8b cf             	mov    %rdi,%r9
   1803cbd57:	48 8d 0d 7a a4 4d 00 	lea    0x4da47a(%rip),%rcx        # 0x1808a61d8
   1803cbd5e:	eb 29                	jmp    0x1803cbd89
   1803cbd60:	4c 8b c8             	mov    %rax,%r9
   1803cbd63:	48 8d 15 b6 a6 4d 00 	lea    0x4da6b6(%rip),%rdx        # 0x1808a6420
   1803cbd6a:	4c 8b c7             	mov    %rdi,%r8
   1803cbd6d:	48 8d 0d bc 64 30 00 	lea    0x3064bc(%rip),%rcx        # 0x1806d2230
   1803cbd74:	e8 f7 e5 ff ff       	call   0x1803ca370
   1803cbd79:	eb 2a                	jmp    0x1803cbda5
   1803cbd7b:	4c 8d 0d c1 f8 1b 00 	lea    0x1bf8c1(%rip),%r9        # 0x18058b643
   1803cbd82:	48 8d 0d 77 a4 4d 00 	lea    0x4da477(%rip),%rcx        # 0x1808a6200
   1803cbd89:	ff 05 b1 5a d4 00    	incl   0xd45ab1(%rip)        # 0x181111840
   1803cbd8f:	4c 8d 05 8a a6 4d 00 	lea    0x4da68a(%rip),%r8        # 0x1808a6420
   1803cbd96:	48 8d 15 93 64 30 00 	lea    0x306493(%rip),%rdx        # 0x1806d2230
   1803cbd9d:	e8 be 67 ee ff       	call   0x1802b2560
   1803cbda2:	49 8b de             	mov    %r14,%rbx
   1803cbda5:	ff 05 99 5a d4 00    	incl   0xd45a99(%rip)        # 0x181111844
   1803cbdab:	48 8d 3d c6 56 4d 00 	lea    0x4d56c6(%rip),%rdi        # 0x1808a1478
   1803cbdb2:	4c 8b c7             	mov    %rdi,%r8
   1803cbdb5:	48 89 1d 54 5c 59 00 	mov    %rbx,0x595c54(%rip)        # 0x180961a10
   1803cbdbc:	45 33 c9             	xor    %r9d,%r9d
   1803cbdbf:	48 8d 15 b2 a7 4d 00 	lea    0x4da7b2(%rip),%rdx        # 0x1808a6578
   1803cbdc6:	48 8d 0d 63 64 30 00 	lea    0x306463(%rip),%rcx        # 0x1806d2230
   1803cbdcd:	e8 9e e5 ff ff       	call   0x1803ca370
   1803cbdd2:	48 8d 0d 57 64 30 00 	lea    0x306457(%rip),%rcx        # 0x1806d2230
   1803cbdd9:	ff 15 a1 f3 19 00    	call   *0x19f3a1(%rip)        # 0x18056b180
   1803cbddf:	48 8b d8             	mov    %rax,%rbx
   1803cbde2:	48 85 c0             	test   %rax,%rax
   1803cbde5:	0f 84 a3 00 00 00    	je     0x1803cbe8e
   1803cbdeb:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803cbdee:	33 c0                	xor    %eax,%eax
   1803cbdf0:	0f 11 85 00 01 00 00 	movups %xmm0,0x100(%rbp)
   1803cbdf7:	48 89 85 10 01 00 00 	mov    %rax,0x110(%rbp)
   1803cbdfe:	ff 15 8c f4 19 00    	call   *0x19f48c(%rip)        # 0x18056b290
   1803cbe04:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803cbe0a:	4c 8d 85 00 01 00 00 	lea    0x100(%rbp),%r8
   1803cbe11:	48 8b c8             	mov    %rax,%rcx
   1803cbe14:	48 8b d3             	mov    %rbx,%rdx
   1803cbe17:	ff 15 7b f4 19 00    	call   *0x19f47b(%rip)        # 0x18056b298
   1803cbe1d:	85 c0                	test   %eax,%eax
   1803cbe1f:	74 6d                	je     0x1803cbe8e
   1803cbe21:	48 8b 85 00 01 00 00 	mov    0x100(%rbp),%rax
   1803cbe28:	8b 8d 08 01 00 00    	mov    0x108(%rbp),%ecx
   1803cbe2e:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803cbe33:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803cbe38:	48 85 c0             	test   %rax,%rax
   1803cbe3b:	74 51                	je     0x1803cbe8e
   1803cbe3d:	48 85 c9             	test   %rcx,%rcx
   1803cbe40:	74 4c                	je     0x1803cbe8e
   1803cbe42:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803cbe47:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803cbe4c:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803cbe51:	48 c7 44 24 38 2c 00 	movq   $0x2c,0x38(%rsp)
   1803cbe58:	00 00 
   1803cbe5a:	e8 a1 5f e0 ff       	call   0x1801d1e00
   1803cbe5f:	48 8b d8             	mov    %rax,%rbx
   1803cbe62:	48 85 c0             	test   %rax,%rax
   1803cbe65:	75 0c                	jne    0x1803cbe73
   1803cbe67:	4c 8b cf             	mov    %rdi,%r9
   1803cbe6a:	48 8d 0d 67 a3 4d 00 	lea    0x4da367(%rip),%rcx        # 0x1808a61d8
   1803cbe71:	eb 29                	jmp    0x1803cbe9c
   1803cbe73:	4c 8b c8             	mov    %rax,%r9
   1803cbe76:	48 8d 15 fb a6 4d 00 	lea    0x4da6fb(%rip),%rdx        # 0x1808a6578
   1803cbe7d:	4c 8b c7             	mov    %rdi,%r8
   1803cbe80:	48 8d 0d a9 63 30 00 	lea    0x3063a9(%rip),%rcx        # 0x1806d2230
   1803cbe87:	e8 e4 e4 ff ff       	call   0x1803ca370
   1803cbe8c:	eb 2a                	jmp    0x1803cbeb8
   1803cbe8e:	4c 8d 0d ae f7 1b 00 	lea    0x1bf7ae(%rip),%r9        # 0x18058b643
   1803cbe95:	48 8d 0d 64 a3 4d 00 	lea    0x4da364(%rip),%rcx        # 0x1808a6200
   1803cbe9c:	ff 05 9e 59 d4 00    	incl   0xd4599e(%rip)        # 0x181111840
   1803cbea2:	4c 8d 05 cf a6 4d 00 	lea    0x4da6cf(%rip),%r8        # 0x1808a6578
   1803cbea9:	48 8d 15 80 63 30 00 	lea    0x306380(%rip),%rdx        # 0x1806d2230
   1803cbeb0:	e8 ab 66 ee ff       	call   0x1802b2560
   1803cbeb5:	49 8b de             	mov    %r14,%rbx
   1803cbeb8:	ff 05 86 59 d4 00    	incl   0xd45986(%rip)        # 0x181111844
   1803cbebe:	48 8d 3d 5b 55 4d 00 	lea    0x4d555b(%rip),%rdi        # 0x1808a1420
   1803cbec5:	4c 8b c7             	mov    %rdi,%r8
   1803cbec8:	48 89 1d 49 5b 59 00 	mov    %rbx,0x595b49(%rip)        # 0x180961a18
   1803cbecf:	45 33 c9             	xor    %r9d,%r9d
   1803cbed2:	48 8d 15 8f a6 4d 00 	lea    0x4da68f(%rip),%rdx        # 0x1808a6568
   1803cbed9:	48 8d 0d 50 63 30 00 	lea    0x306350(%rip),%rcx        # 0x1806d2230
   1803cbee0:	e8 8b e4 ff ff       	call   0x1803ca370
   1803cbee5:	48 8d 0d 44 63 30 00 	lea    0x306344(%rip),%rcx        # 0x1806d2230
   1803cbeec:	ff 15 8e f2 19 00    	call   *0x19f28e(%rip)        # 0x18056b180
   1803cbef2:	48 8b d8             	mov    %rax,%rbx
   1803cbef5:	48 85 c0             	test   %rax,%rax
   1803cbef8:	0f 84 a3 00 00 00    	je     0x1803cbfa1
   1803cbefe:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803cbf01:	33 c0                	xor    %eax,%eax
   1803cbf03:	0f 11 85 18 01 00 00 	movups %xmm0,0x118(%rbp)
   1803cbf0a:	48 89 85 28 01 00 00 	mov    %rax,0x128(%rbp)
   1803cbf11:	ff 15 79 f3 19 00    	call   *0x19f379(%rip)        # 0x18056b290
   1803cbf17:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803cbf1d:	4c 8d 85 18 01 00 00 	lea    0x118(%rbp),%r8
   1803cbf24:	48 8b c8             	mov    %rax,%rcx
   1803cbf27:	48 8b d3             	mov    %rbx,%rdx
   1803cbf2a:	ff 15 68 f3 19 00    	call   *0x19f368(%rip)        # 0x18056b298
   1803cbf30:	85 c0                	test   %eax,%eax
   1803cbf32:	74 6d                	je     0x1803cbfa1
   1803cbf34:	48 8b 85 18 01 00 00 	mov    0x118(%rbp),%rax
   1803cbf3b:	8b 8d 20 01 00 00    	mov    0x120(%rbp),%ecx
   1803cbf41:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803cbf46:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803cbf4b:	48 85 c0             	test   %rax,%rax
   1803cbf4e:	74 51                	je     0x1803cbfa1
   1803cbf50:	48 85 c9             	test   %rcx,%rcx
   1803cbf53:	74 4c                	je     0x1803cbfa1
   1803cbf55:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803cbf5a:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803cbf5f:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803cbf64:	48 c7 44 24 38 56 00 	movq   $0x56,0x38(%rsp)
   1803cbf6b:	00 00 
   1803cbf6d:	e8 8e 5e e0 ff       	call   0x1801d1e00
   1803cbf72:	48 8b d8             	mov    %rax,%rbx
   1803cbf75:	48 85 c0             	test   %rax,%rax
   1803cbf78:	75 0c                	jne    0x1803cbf86
   1803cbf7a:	4c 8b cf             	mov    %rdi,%r9
   1803cbf7d:	48 8d 0d 54 a2 4d 00 	lea    0x4da254(%rip),%rcx        # 0x1808a61d8
   1803cbf84:	eb 29                	jmp    0x1803cbfaf
   1803cbf86:	4c 8b c8             	mov    %rax,%r9
   1803cbf89:	48 8d 15 d8 a5 4d 00 	lea    0x4da5d8(%rip),%rdx        # 0x1808a6568
   1803cbf90:	4c 8b c7             	mov    %rdi,%r8
   1803cbf93:	48 8d 0d 96 62 30 00 	lea    0x306296(%rip),%rcx        # 0x1806d2230
   1803cbf9a:	e8 d1 e3 ff ff       	call   0x1803ca370
   1803cbf9f:	eb 2a                	jmp    0x1803cbfcb
   1803cbfa1:	4c 8d 0d 9b f6 1b 00 	lea    0x1bf69b(%rip),%r9        # 0x18058b643
   1803cbfa8:	48 8d 0d 51 a2 4d 00 	lea    0x4da251(%rip),%rcx        # 0x1808a6200
   1803cbfaf:	ff 05 8b 58 d4 00    	incl   0xd4588b(%rip)        # 0x181111840
   1803cbfb5:	4c 8d 05 ac a5 4d 00 	lea    0x4da5ac(%rip),%r8        # 0x1808a6568
   1803cbfbc:	48 8d 15 6d 62 30 00 	lea    0x30626d(%rip),%rdx        # 0x1806d2230
   1803cbfc3:	e8 98 65 ee ff       	call   0x1802b2560
   1803cbfc8:	49 8b de             	mov    %r14,%rbx
   1803cbfcb:	4c 8d 05 1e 54 4d 00 	lea    0x4d541e(%rip),%r8        # 0x1808a13f0
   1803cbfd2:	48 89 1d 47 5a 59 00 	mov    %rbx,0x595a47(%rip)        # 0x180961a20
   1803cbfd9:	48 8d 15 c8 38 33 00 	lea    0x3338c8(%rip),%rdx        # 0x1806ff8a8
   1803cbfe0:	48 8d 0d 49 62 30 00 	lea    0x306249(%rip),%rcx        # 0x1806d2230
   1803cbfe7:	e8 e4 e5 ff ff       	call   0x1803ca5d0
   1803cbfec:	48 8b f8             	mov    %rax,%rdi
   1803cbfef:	48 85 c0             	test   %rax,%rax
   1803cbff2:	0f 84 b1 00 00 00    	je     0x1803cc0a9
   1803cbff8:	48 8d 48 04          	lea    0x4(%rax),%rcx
   1803cbffc:	48 85 c9             	test   %rcx,%rcx
   1803cbfff:	74 64                	je     0x1803cc065
   1803cc001:	48 63 70 07          	movslq 0x7(%rax),%rsi
   1803cc005:	48 8d 88 0b 00 ff ff 	lea    -0xfff5(%rax),%rcx
   1803cc00c:	48 03 ce             	add    %rsi,%rcx
   1803cc00f:	49 3b cf             	cmp    %r15,%rcx
   1803cc012:	77 51                	ja     0x1803cc065
   1803cc014:	48 8d 58 0b          	lea    0xb(%rax),%rbx
   1803cc018:	48 03 de             	add    %rsi,%rbx
   1803cc01b:	4c 8d 05 ce 53 4d 00 	lea    0x4d53ce(%rip),%r8        # 0x1808a13f0
   1803cc022:	4c 8b cb             	mov    %rbx,%r9
   1803cc025:	48 8d 15 7c 38 33 00 	lea    0x33387c(%rip),%rdx        # 0x1806ff8a8
   1803cc02c:	48 8d 0d fd 61 30 00 	lea    0x3061fd(%rip),%rcx        # 0x1806d2230
   1803cc033:	e8 38 e3 ff ff       	call   0x1803ca370
   1803cc038:	48 85 db             	test   %rbx,%rbx
   1803cc03b:	74 6c                	je     0x1803cc0a9
   1803cc03d:	48 8d 4f 33          	lea    0x33(%rdi),%rcx
   1803cc041:	48 03 ce             	add    %rsi,%rcx
   1803cc044:	e8 57 33 c4 ff       	call   0x18000f3a0
   1803cc049:	48 8d 4f 4b          	lea    0x4b(%rdi),%rcx
   1803cc04d:	48 89 05 d4 59 59 00 	mov    %rax,0x5959d4(%rip)        # 0x180961a28
   1803cc054:	48 03 ce             	add    %rsi,%rcx
   1803cc057:	e8 44 33 c4 ff       	call   0x18000f3a0
   1803cc05c:	48 89 05 cd 59 59 00 	mov    %rax,0x5959cd(%rip)        # 0x180961a30
   1803cc063:	eb 44                	jmp    0x1803cc0a9
   1803cc065:	45 33 c9             	xor    %r9d,%r9d
   1803cc068:	4c 8d 05 81 53 4d 00 	lea    0x4d5381(%rip),%r8        # 0x1808a13f0
   1803cc06f:	48 8d 15 32 38 33 00 	lea    0x333832(%rip),%rdx        # 0x1806ff8a8
   1803cc076:	48 8d 0d b3 61 30 00 	lea    0x3061b3(%rip),%rcx        # 0x1806d2230
   1803cc07d:	e8 ee e2 ff ff       	call   0x1803ca370
   1803cc082:	ff 05 b8 57 d4 00    	incl   0xd457b8(%rip)        # 0x181111840
   1803cc088:	4c 8d 0d 61 53 4d 00 	lea    0x4d5361(%rip),%r9        # 0x1808a13f0
   1803cc08f:	4c 8d 05 12 38 33 00 	lea    0x333812(%rip),%r8        # 0x1806ff8a8
   1803cc096:	48 8d 15 93 61 30 00 	lea    0x306193(%rip),%rdx        # 0x1806d2230
   1803cc09d:	48 8d 0d dc a0 4d 00 	lea    0x4da0dc(%rip),%rcx        # 0x1808a6180
   1803cc0a4:	e8 b7 64 ee ff       	call   0x1802b2560
   1803cc0a9:	4c 8d 05 18 53 4d 00 	lea    0x4d5318(%rip),%r8        # 0x1808a13c8
   1803cc0b0:	48 8d 15 a1 a4 4d 00 	lea    0x4da4a1(%rip),%rdx        # 0x1808a6558
   1803cc0b7:	48 8d 0d 72 61 30 00 	lea    0x306172(%rip),%rcx        # 0x1806d2230
   1803cc0be:	e8 0d e5 ff ff       	call   0x1803ca5d0
   1803cc0c3:	48 8b c8             	mov    %rax,%rcx
   1803cc0c6:	48 85 c0             	test   %rax,%rax
   1803cc0c9:	0f 84 83 00 00 00    	je     0x1803cc152
   1803cc0cf:	48 83 c0 04          	add    $0x4,%rax
   1803cc0d3:	74 39                	je     0x1803cc10e
   1803cc0d5:	4c 63 49 07          	movslq 0x7(%rcx),%r9
   1803cc0d9:	48 8d 81 0b 00 ff ff 	lea    -0xfff5(%rcx),%rax
   1803cc0e0:	49 03 c1             	add    %r9,%rax
   1803cc0e3:	49 3b c7             	cmp    %r15,%rax
   1803cc0e6:	77 26                	ja     0x1803cc10e
   1803cc0e8:	48 8d 59 0b          	lea    0xb(%rcx),%rbx
   1803cc0ec:	49 03 d9             	add    %r9,%rbx
   1803cc0ef:	4c 8d 05 d2 52 4d 00 	lea    0x4d52d2(%rip),%r8        # 0x1808a13c8
   1803cc0f6:	4c 8b cb             	mov    %rbx,%r9
   1803cc0f9:	48 8d 15 58 a4 4d 00 	lea    0x4da458(%rip),%rdx        # 0x1808a6558
   1803cc100:	48 8d 0d 29 61 30 00 	lea    0x306129(%rip),%rcx        # 0x1806d2230
   1803cc107:	e8 64 e2 ff ff       	call   0x1803ca370
   1803cc10c:	eb 47                	jmp    0x1803cc155
   1803cc10e:	45 33 c9             	xor    %r9d,%r9d
   1803cc111:	4c 8d 05 b0 52 4d 00 	lea    0x4d52b0(%rip),%r8        # 0x1808a13c8
   1803cc118:	48 8d 15 39 a4 4d 00 	lea    0x4da439(%rip),%rdx        # 0x1808a6558
   1803cc11f:	48 8d 0d 0a 61 30 00 	lea    0x30610a(%rip),%rcx        # 0x1806d2230
   1803cc126:	e8 45 e2 ff ff       	call   0x1803ca370
   1803cc12b:	ff 05 0f 57 d4 00    	incl   0xd4570f(%rip)        # 0x181111840
   1803cc131:	4c 8d 0d 90 52 4d 00 	lea    0x4d5290(%rip),%r9        # 0x1808a13c8
   1803cc138:	4c 8d 05 19 a4 4d 00 	lea    0x4da419(%rip),%r8        # 0x1808a6558
   1803cc13f:	48 8d 15 ea 60 30 00 	lea    0x3060ea(%rip),%rdx        # 0x1806d2230
   1803cc146:	48 8d 0d 33 a0 4d 00 	lea    0x4da033(%rip),%rcx        # 0x1808a6180
   1803cc14d:	e8 0e 64 ee ff       	call   0x1802b2560
   1803cc152:	49 8b de             	mov    %r14,%rbx
   1803cc155:	ff 05 e9 56 d4 00    	incl   0xd456e9(%rip)        # 0x181111844
   1803cc15b:	48 8d 3d 36 52 4d 00 	lea    0x4d5236(%rip),%rdi        # 0x1808a1398
   1803cc162:	4c 8b c7             	mov    %rdi,%r8
   1803cc165:	48 89 1d cc 58 59 00 	mov    %rbx,0x5958cc(%rip)        # 0x180961a38
   1803cc16c:	45 33 c9             	xor    %r9d,%r9d
   1803cc16f:	48 8d 15 d2 a3 4d 00 	lea    0x4da3d2(%rip),%rdx        # 0x1808a6548
   1803cc176:	48 8d 0d b3 60 30 00 	lea    0x3060b3(%rip),%rcx        # 0x1806d2230
   1803cc17d:	e8 ee e1 ff ff       	call   0x1803ca370
   1803cc182:	48 8d 0d a7 60 30 00 	lea    0x3060a7(%rip),%rcx        # 0x1806d2230
   1803cc189:	ff 15 f1 ef 19 00    	call   *0x19eff1(%rip)        # 0x18056b180
   1803cc18f:	48 8b d8             	mov    %rax,%rbx
   1803cc192:	48 85 c0             	test   %rax,%rax
   1803cc195:	0f 84 a3 00 00 00    	je     0x1803cc23e
   1803cc19b:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803cc19e:	33 c0                	xor    %eax,%eax
   1803cc1a0:	0f 11 85 30 01 00 00 	movups %xmm0,0x130(%rbp)
   1803cc1a7:	48 89 85 40 01 00 00 	mov    %rax,0x140(%rbp)
   1803cc1ae:	ff 15 dc f0 19 00    	call   *0x19f0dc(%rip)        # 0x18056b290
   1803cc1b4:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803cc1ba:	4c 8d 85 30 01 00 00 	lea    0x130(%rbp),%r8
   1803cc1c1:	48 8b c8             	mov    %rax,%rcx
   1803cc1c4:	48 8b d3             	mov    %rbx,%rdx
   1803cc1c7:	ff 15 cb f0 19 00    	call   *0x19f0cb(%rip)        # 0x18056b298
   1803cc1cd:	85 c0                	test   %eax,%eax
   1803cc1cf:	74 6d                	je     0x1803cc23e
   1803cc1d1:	48 8b 85 30 01 00 00 	mov    0x130(%rbp),%rax
   1803cc1d8:	8b 8d 38 01 00 00    	mov    0x138(%rbp),%ecx
   1803cc1de:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803cc1e3:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803cc1e8:	48 85 c0             	test   %rax,%rax
   1803cc1eb:	74 51                	je     0x1803cc23e
   1803cc1ed:	48 85 c9             	test   %rcx,%rcx
   1803cc1f0:	74 4c                	je     0x1803cc23e
   1803cc1f2:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803cc1f7:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803cc1fc:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803cc201:	48 c7 44 24 38 2b 00 	movq   $0x2b,0x38(%rsp)
   1803cc208:	00 00 
   1803cc20a:	e8 f1 5b e0 ff       	call   0x1801d1e00
   1803cc20f:	48 8b d8             	mov    %rax,%rbx
   1803cc212:	48 85 c0             	test   %rax,%rax
   1803cc215:	75 0c                	jne    0x1803cc223
   1803cc217:	4c 8b cf             	mov    %rdi,%r9
   1803cc21a:	48 8d 0d b7 9f 4d 00 	lea    0x4d9fb7(%rip),%rcx        # 0x1808a61d8
   1803cc221:	eb 29                	jmp    0x1803cc24c
   1803cc223:	4c 8b c8             	mov    %rax,%r9
   1803cc226:	48 8d 15 1b a3 4d 00 	lea    0x4da31b(%rip),%rdx        # 0x1808a6548
   1803cc22d:	4c 8b c7             	mov    %rdi,%r8
   1803cc230:	48 8d 0d f9 5f 30 00 	lea    0x305ff9(%rip),%rcx        # 0x1806d2230
   1803cc237:	e8 34 e1 ff ff       	call   0x1803ca370
   1803cc23c:	eb 2a                	jmp    0x1803cc268
   1803cc23e:	4c 8d 0d fe f3 1b 00 	lea    0x1bf3fe(%rip),%r9        # 0x18058b643
   1803cc245:	48 8d 0d b4 9f 4d 00 	lea    0x4d9fb4(%rip),%rcx        # 0x1808a6200
   1803cc24c:	ff 05 ee 55 d4 00    	incl   0xd455ee(%rip)        # 0x181111840
   1803cc252:	4c 8d 05 ef a2 4d 00 	lea    0x4da2ef(%rip),%r8        # 0x1808a6548
   1803cc259:	48 8d 15 d0 5f 30 00 	lea    0x305fd0(%rip),%rdx        # 0x1806d2230
   1803cc260:	e8 fb 62 ee ff       	call   0x1802b2560
   1803cc265:	49 8b de             	mov    %r14,%rbx
   1803cc268:	ff 05 d6 55 d4 00    	incl   0xd455d6(%rip)        # 0x181111844
   1803cc26e:	48 8d 3d eb 50 4d 00 	lea    0x4d50eb(%rip),%rdi        # 0x1808a1360
   1803cc275:	4c 8b c7             	mov    %rdi,%r8
   1803cc278:	48 89 1d c1 57 59 00 	mov    %rbx,0x5957c1(%rip)        # 0x180961a40
   1803cc27f:	45 33 c9             	xor    %r9d,%r9d
   1803cc282:	48 8d 15 a7 a2 4d 00 	lea    0x4da2a7(%rip),%rdx        # 0x1808a6530
   1803cc289:	48 8d 0d a0 5f 30 00 	lea    0x305fa0(%rip),%rcx        # 0x1806d2230
   1803cc290:	e8 db e0 ff ff       	call   0x1803ca370
   1803cc295:	48 8d 0d 94 5f 30 00 	lea    0x305f94(%rip),%rcx        # 0x1806d2230
   1803cc29c:	ff 15 de ee 19 00    	call   *0x19eede(%rip)        # 0x18056b180
   1803cc2a2:	48 8b d8             	mov    %rax,%rbx
   1803cc2a5:	48 85 c0             	test   %rax,%rax
   1803cc2a8:	0f 84 2d 01 00 00    	je     0x1803cc3db
   1803cc2ae:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803cc2b1:	33 c0                	xor    %eax,%eax
   1803cc2b3:	0f 11 85 48 01 00 00 	movups %xmm0,0x148(%rbp)
   1803cc2ba:	48 89 85 58 01 00 00 	mov    %rax,0x158(%rbp)
   1803cc2c1:	ff 15 c9 ef 19 00    	call   *0x19efc9(%rip)        # 0x18056b290
   1803cc2c7:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803cc2cd:	4c 8d 85 48 01 00 00 	lea    0x148(%rbp),%r8
   1803cc2d4:	48 8b c8             	mov    %rax,%rcx
   1803cc2d7:	48 8b d3             	mov    %rbx,%rdx
   1803cc2da:	ff 15 b8 ef 19 00    	call   *0x19efb8(%rip)        # 0x18056b298
   1803cc2e0:	85 c0                	test   %eax,%eax
   1803cc2e2:	0f 84 f3 00 00 00    	je     0x1803cc3db
   1803cc2e8:	48 8b 85 48 01 00 00 	mov    0x148(%rbp),%rax
   1803cc2ef:	8b 8d 50 01 00 00    	mov    0x150(%rbp),%ecx
   1803cc2f5:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803cc2fa:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803cc2ff:	48 85 c0             	test   %rax,%rax
   1803cc302:	0f 84 d3 00 00 00    	je     0x1803cc3db
   1803cc308:	48 85 c9             	test   %rcx,%rcx
   1803cc30b:	0f 84 ca 00 00 00    	je     0x1803cc3db
   1803cc311:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803cc316:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803cc31b:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803cc320:	48 c7 44 24 38 33 00 	movq   $0x33,0x38(%rsp)
   1803cc327:	00 00 
   1803cc329:	e8 d2 5a e0 ff       	call   0x1801d1e00
   1803cc32e:	48 8b d8             	mov    %rax,%rbx
   1803cc331:	48 85 c0             	test   %rax,%rax
   1803cc334:	75 0f                	jne    0x1803cc345
   1803cc336:	4c 8b cf             	mov    %rdi,%r9
   1803cc339:	48 8d 0d 98 9e 4d 00 	lea    0x4d9e98(%rip),%rcx        # 0x1808a61d8
   1803cc340:	e9 a4 00 00 00       	jmp    0x1803cc3e9
   1803cc345:	4c 8b cb             	mov    %rbx,%r9
   1803cc348:	48 8d 15 e1 a1 4d 00 	lea    0x4da1e1(%rip),%rdx        # 0x1808a6530
   1803cc34f:	4c 8b c7             	mov    %rdi,%r8
   1803cc352:	48 8d 0d d7 5e 30 00 	lea    0x305ed7(%rip),%rcx        # 0x1806d2230
   1803cc359:	e8 12 e0 ff ff       	call   0x1803ca370
   1803cc35e:	48 8d 4b 04          	lea    0x4(%rbx),%rcx
   1803cc362:	e8 69 5d e0 ff       	call   0x1801d20d0
   1803cc367:	48 89 05 da 56 59 00 	mov    %rax,0x5956da(%rip)        # 0x180961a48
   1803cc36e:	48 85 c0             	test   %rax,%rax
   1803cc371:	75 24                	jne    0x1803cc397
   1803cc373:	4c 8b cf             	mov    %rdi,%r9
   1803cc376:	4c 8d 05 b3 a1 4d 00 	lea    0x4da1b3(%rip),%r8        # 0x1808a6530
   1803cc37d:	48 8d 15 ac 5e 30 00 	lea    0x305eac(%rip),%rdx        # 0x1806d2230
   1803cc384:	48 8d 0d 25 9e 4d 00 	lea    0x4d9e25(%rip),%rcx        # 0x1808a61b0
   1803cc38b:	e8 c0 df ff ff       	call   0x1803ca350
   1803cc390:	48 8b 05 b1 56 59 00 	mov    0x5956b1(%rip),%rax        # 0x180961a48
   1803cc397:	4c 8b c8             	mov    %rax,%r9
   1803cc39a:	48 8d 15 8f a1 4d 00 	lea    0x4da18f(%rip),%rdx        # 0x1808a6530
   1803cc3a1:	4c 8b c7             	mov    %rdi,%r8
   1803cc3a4:	48 8d 0d 85 5e 30 00 	lea    0x305e85(%rip),%rcx        # 0x1806d2230
   1803cc3ab:	e8 c0 df ff ff       	call   0x1803ca370
   1803cc3b0:	44 8b 0d 15 5c 59 00 	mov    0x595c15(%rip),%r9d        # 0x180961fcc
   1803cc3b7:	4c 8d 05 5a a1 4d 00 	lea    0x4da15a(%rip),%r8        # 0x1808a6518
   1803cc3be:	ba 0b 00 00 00       	mov    $0xb,%edx
   1803cc3c3:	c7 44 24 20 00 00 10 	movl   $0x100000,0x20(%rsp)
   1803cc3ca:	00 
   1803cc3cb:	48 8b cb             	mov    %rbx,%rcx
   1803cc3ce:	e8 6d e4 ff ff       	call   0x1803ca840
   1803cc3d3:	89 05 f3 5b 59 00    	mov    %eax,0x595bf3(%rip)        # 0x180961fcc
   1803cc3d9:	eb 27                	jmp    0x1803cc402
   1803cc3db:	4c 8d 0d 61 f2 1b 00 	lea    0x1bf261(%rip),%r9        # 0x18058b643
   1803cc3e2:	48 8d 0d 17 9e 4d 00 	lea    0x4d9e17(%rip),%rcx        # 0x1808a6200
   1803cc3e9:	ff 05 51 54 d4 00    	incl   0xd45451(%rip)        # 0x181111840
   1803cc3ef:	4c 8d 05 3a a1 4d 00 	lea    0x4da13a(%rip),%r8        # 0x1808a6530
   1803cc3f6:	48 8d 15 33 5e 30 00 	lea    0x305e33(%rip),%rdx        # 0x1806d2230
   1803cc3fd:	e8 5e 61 ee ff       	call   0x1802b2560
   1803cc402:	4c 8d 05 77 53 4d 00 	lea    0x4d5377(%rip),%r8        # 0x1808a1780
   1803cc409:	48 8d 15 f0 a0 4d 00 	lea    0x4da0f0(%rip),%rdx        # 0x1808a6500
   1803cc410:	48 8d 0d 19 5e 30 00 	lea    0x305e19(%rip),%rcx        # 0x1806d2230
   1803cc417:	e8 b4 e1 ff ff       	call   0x1803ca5d0
   1803cc41c:	48 8b c8             	mov    %rax,%rcx
   1803cc41f:	48 85 c0             	test   %rax,%rax
   1803cc422:	74 6e                	je     0x1803cc492
   1803cc424:	4c 63 48 03          	movslq 0x3(%rax),%r9
   1803cc428:	4c 8d 05 51 53 4d 00 	lea    0x4d5351(%rip),%r8        # 0x1808a1780
   1803cc42f:	48 05 07 00 ff ff    	add    $0xffffffffffff0007,%rax
   1803cc435:	48 8d 15 c4 a0 4d 00 	lea    0x4da0c4(%rip),%rdx        # 0x1808a6500
   1803cc43c:	49 03 c1             	add    %r9,%rax
   1803cc43f:	49 3b c7             	cmp    %r15,%rax
   1803cc442:	77 18                	ja     0x1803cc45c
   1803cc444:	48 8d 59 07          	lea    0x7(%rcx),%rbx
   1803cc448:	49 03 d9             	add    %r9,%rbx
   1803cc44b:	48 8d 0d de 5d 30 00 	lea    0x305dde(%rip),%rcx        # 0x1806d2230
   1803cc452:	4c 8b cb             	mov    %rbx,%r9
   1803cc455:	e8 16 df ff ff       	call   0x1803ca370
   1803cc45a:	eb 39                	jmp    0x1803cc495
   1803cc45c:	45 33 c9             	xor    %r9d,%r9d
   1803cc45f:	48 8d 0d ca 5d 30 00 	lea    0x305dca(%rip),%rcx        # 0x1806d2230
   1803cc466:	e8 05 df ff ff       	call   0x1803ca370
   1803cc46b:	ff 05 cf 53 d4 00    	incl   0xd453cf(%rip)        # 0x181111840
   1803cc471:	4c 8d 0d 08 53 4d 00 	lea    0x4d5308(%rip),%r9        # 0x1808a1780
   1803cc478:	4c 8d 05 81 a0 4d 00 	lea    0x4da081(%rip),%r8        # 0x1808a6500
   1803cc47f:	48 8d 15 aa 5d 30 00 	lea    0x305daa(%rip),%rdx        # 0x1806d2230
   1803cc486:	48 8d 0d f3 9c 4d 00 	lea    0x4d9cf3(%rip),%rcx        # 0x1808a6180
   1803cc48d:	e8 ce 60 ee ff       	call   0x1802b2560
   1803cc492:	49 8b de             	mov    %r14,%rbx
   1803cc495:	ff 05 a9 53 d4 00    	incl   0xd453a9(%rip)        # 0x181111844
   1803cc49b:	48 8d 3d 9e 52 4d 00 	lea    0x4d529e(%rip),%rdi        # 0x1808a1740
   1803cc4a2:	4c 8b c7             	mov    %rdi,%r8
   1803cc4a5:	48 89 1d 2c 5b 59 00 	mov    %rbx,0x595b2c(%rip)        # 0x180961fd8
   1803cc4ac:	45 33 c9             	xor    %r9d,%r9d
   1803cc4af:	48 8d 15 2a a0 4d 00 	lea    0x4da02a(%rip),%rdx        # 0x1808a64e0
   1803cc4b6:	48 8d 0d 73 5d 30 00 	lea    0x305d73(%rip),%rcx        # 0x1806d2230
   1803cc4bd:	e8 ae de ff ff       	call   0x1803ca370
   1803cc4c2:	48 8d 0d 67 5d 30 00 	lea    0x305d67(%rip),%rcx        # 0x1806d2230
   1803cc4c9:	ff 15 b1 ec 19 00    	call   *0x19ecb1(%rip)        # 0x18056b180
   1803cc4cf:	48 8b d8             	mov    %rax,%rbx
   1803cc4d2:	48 85 c0             	test   %rax,%rax
   1803cc4d5:	0f 84 ae 00 00 00    	je     0x1803cc589
   1803cc4db:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803cc4de:	33 c0                	xor    %eax,%eax
   1803cc4e0:	0f 11 85 60 01 00 00 	movups %xmm0,0x160(%rbp)
   1803cc4e7:	48 89 85 70 01 00 00 	mov    %rax,0x170(%rbp)
   1803cc4ee:	ff 15 9c ed 19 00    	call   *0x19ed9c(%rip)        # 0x18056b290
   1803cc4f4:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803cc4fa:	4c 8d 85 60 01 00 00 	lea    0x160(%rbp),%r8
   1803cc501:	48 8b c8             	mov    %rax,%rcx
   1803cc504:	48 8b d3             	mov    %rbx,%rdx
   1803cc507:	ff 15 8b ed 19 00    	call   *0x19ed8b(%rip)        # 0x18056b298
   1803cc50d:	85 c0                	test   %eax,%eax
   1803cc50f:	74 78                	je     0x1803cc589
   1803cc511:	48 8b 85 60 01 00 00 	mov    0x160(%rbp),%rax
   1803cc518:	8b 8d 68 01 00 00    	mov    0x168(%rbp),%ecx
   1803cc51e:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803cc523:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803cc528:	48 85 c0             	test   %rax,%rax
   1803cc52b:	74 5c                	je     0x1803cc589
   1803cc52d:	48 85 c9             	test   %rcx,%rcx
   1803cc530:	74 57                	je     0x1803cc589
   1803cc532:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803cc537:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803cc53c:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803cc541:	48 c7 44 24 38 3f 00 	movq   $0x3f,0x38(%rsp)
   1803cc548:	00 00 
   1803cc54a:	e8 b1 58 e0 ff       	call   0x1801d1e00
   1803cc54f:	48 8b d8             	mov    %rax,%rbx
   1803cc552:	48 85 c0             	test   %rax,%rax
   1803cc555:	75 0c                	jne    0x1803cc563
   1803cc557:	4c 8b cf             	mov    %rdi,%r9
   1803cc55a:	48 8d 0d 77 9c 4d 00 	lea    0x4d9c77(%rip),%rcx        # 0x1808a61d8
   1803cc561:	eb 34                	jmp    0x1803cc597
   1803cc563:	4c 8b cb             	mov    %rbx,%r9
   1803cc566:	48 8d 15 73 9f 4d 00 	lea    0x4d9f73(%rip),%rdx        # 0x1808a64e0
   1803cc56d:	4c 8b c7             	mov    %rdi,%r8
   1803cc570:	48 8d 0d b9 5c 30 00 	lea    0x305cb9(%rip),%rcx        # 0x1806d2230
   1803cc577:	e8 f4 dd ff ff       	call   0x1803ca370
   1803cc57c:	48 8d 43 02          	lea    0x2(%rbx),%rax
   1803cc580:	48 89 05 59 5a 59 00 	mov    %rax,0x595a59(%rip)        # 0x180961fe0
   1803cc587:	eb 27                	jmp    0x1803cc5b0
   1803cc589:	4c 8d 0d b3 f0 1b 00 	lea    0x1bf0b3(%rip),%r9        # 0x18058b643
   1803cc590:	48 8d 0d 69 9c 4d 00 	lea    0x4d9c69(%rip),%rcx        # 0x1808a6200
   1803cc597:	ff 05 a3 52 d4 00    	incl   0xd452a3(%rip)        # 0x181111840
   1803cc59d:	4c 8d 05 3c 9f 4d 00 	lea    0x4d9f3c(%rip),%r8        # 0x1808a64e0
   1803cc5a4:	48 8d 15 85 5c 30 00 	lea    0x305c85(%rip),%rdx        # 0x1806d2230
   1803cc5ab:	e8 b0 5f ee ff       	call   0x1802b2560
   1803cc5b0:	ff 05 8e 52 d4 00    	incl   0xd4528e(%rip)        # 0x181111844
   1803cc5b6:	48 8d 3d 03 51 4d 00 	lea    0x4d5103(%rip),%rdi        # 0x1808a16c0
   1803cc5bd:	4c 8b c7             	mov    %rdi,%r8
   1803cc5c0:	48 8d 15 19 37 33 00 	lea    0x333719(%rip),%rdx        # 0x1806ffce0
   1803cc5c7:	45 33 c9             	xor    %r9d,%r9d
   1803cc5ca:	48 8d 0d 5f 5c 30 00 	lea    0x305c5f(%rip),%rcx        # 0x1806d2230
   1803cc5d1:	e8 9a dd ff ff       	call   0x1803ca370
   1803cc5d6:	48 8d 0d 53 5c 30 00 	lea    0x305c53(%rip),%rcx        # 0x1806d2230
   1803cc5dd:	ff 15 9d eb 19 00    	call   *0x19eb9d(%rip)        # 0x18056b180
   1803cc5e3:	48 8b d8             	mov    %rax,%rbx
   1803cc5e6:	48 85 c0             	test   %rax,%rax
   1803cc5e9:	0f 84 a3 00 00 00    	je     0x1803cc692
   1803cc5ef:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803cc5f2:	33 c0                	xor    %eax,%eax
   1803cc5f4:	0f 11 85 78 01 00 00 	movups %xmm0,0x178(%rbp)
   1803cc5fb:	48 89 85 88 01 00 00 	mov    %rax,0x188(%rbp)
   1803cc602:	ff 15 88 ec 19 00    	call   *0x19ec88(%rip)        # 0x18056b290
   1803cc608:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803cc60e:	4c 8d 85 78 01 00 00 	lea    0x178(%rbp),%r8
   1803cc615:	48 8b c8             	mov    %rax,%rcx
   1803cc618:	48 8b d3             	mov    %rbx,%rdx
   1803cc61b:	ff 15 77 ec 19 00    	call   *0x19ec77(%rip)        # 0x18056b298
   1803cc621:	85 c0                	test   %eax,%eax
   1803cc623:	74 6d                	je     0x1803cc692
   1803cc625:	48 8b 85 78 01 00 00 	mov    0x178(%rbp),%rax
   1803cc62c:	8b 8d 80 01 00 00    	mov    0x180(%rbp),%ecx
   1803cc632:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803cc637:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803cc63c:	48 85 c0             	test   %rax,%rax
   1803cc63f:	74 51                	je     0x1803cc692
   1803cc641:	48 85 c9             	test   %rcx,%rcx
   1803cc644:	74 4c                	je     0x1803cc692
   1803cc646:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803cc64b:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803cc650:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803cc655:	48 c7 44 24 38 71 00 	movq   $0x71,0x38(%rsp)
   1803cc65c:	00 00 
   1803cc65e:	e8 9d 57 e0 ff       	call   0x1801d1e00
   1803cc663:	48 8b d8             	mov    %rax,%rbx
   1803cc666:	48 85 c0             	test   %rax,%rax
   1803cc669:	75 0c                	jne    0x1803cc677
   1803cc66b:	4c 8b cf             	mov    %rdi,%r9
   1803cc66e:	48 8d 0d 63 9b 4d 00 	lea    0x4d9b63(%rip),%rcx        # 0x1808a61d8
   1803cc675:	eb 29                	jmp    0x1803cc6a0
   1803cc677:	4c 8b c8             	mov    %rax,%r9
   1803cc67a:	48 8d 15 5f 36 33 00 	lea    0x33365f(%rip),%rdx        # 0x1806ffce0
   1803cc681:	4c 8b c7             	mov    %rdi,%r8
   1803cc684:	48 8d 0d a5 5b 30 00 	lea    0x305ba5(%rip),%rcx        # 0x1806d2230
   1803cc68b:	e8 e0 dc ff ff       	call   0x1803ca370
   1803cc690:	eb 2a                	jmp    0x1803cc6bc
   1803cc692:	4c 8d 0d aa ef 1b 00 	lea    0x1befaa(%rip),%r9        # 0x18058b643
   1803cc699:	48 8d 0d 60 9b 4d 00 	lea    0x4d9b60(%rip),%rcx        # 0x1808a6200
   1803cc6a0:	ff 05 9a 51 d4 00    	incl   0xd4519a(%rip)        # 0x181111840
   1803cc6a6:	4c 8d 05 33 36 33 00 	lea    0x333633(%rip),%r8        # 0x1806ffce0
   1803cc6ad:	48 8d 15 7c 5b 30 00 	lea    0x305b7c(%rip),%rdx        # 0x1806d2230
   1803cc6b4:	e8 a7 5e ee ff       	call   0x1802b2560
   1803cc6b9:	49 8b de             	mov    %r14,%rbx
   1803cc6bc:	48 89 1d 25 59 59 00 	mov    %rbx,0x595925(%rip)        # 0x180961fe8
   1803cc6c3:	e8 08 e2 ff ff       	call   0x1803ca8d0
   1803cc6c8:	4c 8d 05 71 4e 4d 00 	lea    0x4d4e71(%rip),%r8        # 0x1808a1540
   1803cc6cf:	48 8d 15 52 9f 4d 00 	lea    0x4d9f52(%rip),%rdx        # 0x1808a6628
   1803cc6d6:	48 8d 0d 53 5b 30 00 	lea    0x305b53(%rip),%rcx        # 0x1806d2230
   1803cc6dd:	e8 ee de ff ff       	call   0x1803ca5d0
   1803cc6e2:	48 8b c8             	mov    %rax,%rcx
   1803cc6e5:	48 85 c0             	test   %rax,%rax
   1803cc6e8:	74 6e                	je     0x1803cc758
   1803cc6ea:	4c 63 48 03          	movslq 0x3(%rax),%r9
   1803cc6ee:	4c 8d 05 4b 4e 4d 00 	lea    0x4d4e4b(%rip),%r8        # 0x1808a1540
   1803cc6f5:	48 05 07 00 ff ff    	add    $0xffffffffffff0007,%rax
   1803cc6fb:	48 8d 15 26 9f 4d 00 	lea    0x4d9f26(%rip),%rdx        # 0x1808a6628
   1803cc702:	49 03 c1             	add    %r9,%rax
   1803cc705:	49 3b c7             	cmp    %r15,%rax
   1803cc708:	77 18                	ja     0x1803cc722
   1803cc70a:	48 8d 59 07          	lea    0x7(%rcx),%rbx
   1803cc70e:	49 03 d9             	add    %r9,%rbx
   1803cc711:	48 8d 0d 18 5b 30 00 	lea    0x305b18(%rip),%rcx        # 0x1806d2230
   1803cc718:	4c 8b cb             	mov    %rbx,%r9
   1803cc71b:	e8 50 dc ff ff       	call   0x1803ca370
   1803cc720:	eb 39                	jmp    0x1803cc75b
   1803cc722:	45 33 c9             	xor    %r9d,%r9d
   1803cc725:	48 8d 0d 04 5b 30 00 	lea    0x305b04(%rip),%rcx        # 0x1806d2230
   1803cc72c:	e8 3f dc ff ff       	call   0x1803ca370
   1803cc731:	ff 05 09 51 d4 00    	incl   0xd45109(%rip)        # 0x181111840
   1803cc737:	4c 8d 0d 02 4e 4d 00 	lea    0x4d4e02(%rip),%r9        # 0x1808a1540
   1803cc73e:	4c 8d 05 e3 9e 4d 00 	lea    0x4d9ee3(%rip),%r8        # 0x1808a6628
   1803cc745:	48 8d 15 e4 5a 30 00 	lea    0x305ae4(%rip),%rdx        # 0x1806d2230
   1803cc74c:	48 8d 0d 2d 9a 4d 00 	lea    0x4d9a2d(%rip),%rcx        # 0x1808a6180
   1803cc753:	e8 08 5e ee ff       	call   0x1802b2560
   1803cc758:	49 8b de             	mov    %r14,%rbx
   1803cc75b:	4c 8d 05 be 4d 4d 00 	lea    0x4d4dbe(%rip),%r8        # 0x1808a1520
   1803cc762:	48 89 1d e7 52 59 00 	mov    %rbx,0x5952e7(%rip)        # 0x180961a50
   1803cc769:	48 8d 15 a0 9e 4d 00 	lea    0x4d9ea0(%rip),%rdx        # 0x1808a6610
   1803cc770:	48 8d 0d b9 5a 30 00 	lea    0x305ab9(%rip),%rcx        # 0x1806d2230
   1803cc777:	e8 54 de ff ff       	call   0x1803ca5d0
   1803cc77c:	48 8b c8             	mov    %rax,%rcx
   1803cc77f:	48 85 c0             	test   %rax,%rax
   1803cc782:	74 6e                	je     0x1803cc7f2
   1803cc784:	4c 63 48 03          	movslq 0x3(%rax),%r9
   1803cc788:	4c 8d 05 91 4d 4d 00 	lea    0x4d4d91(%rip),%r8        # 0x1808a1520
   1803cc78f:	48 05 07 00 ff ff    	add    $0xffffffffffff0007,%rax
   1803cc795:	48 8d 15 74 9e 4d 00 	lea    0x4d9e74(%rip),%rdx        # 0x1808a6610
   1803cc79c:	49 03 c1             	add    %r9,%rax
   1803cc79f:	49 3b c7             	cmp    %r15,%rax
   1803cc7a2:	77 18                	ja     0x1803cc7bc
   1803cc7a4:	48 8d 59 07          	lea    0x7(%rcx),%rbx
   1803cc7a8:	49 03 d9             	add    %r9,%rbx
   1803cc7ab:	48 8d 0d 7e 5a 30 00 	lea    0x305a7e(%rip),%rcx        # 0x1806d2230
   1803cc7b2:	4c 8b cb             	mov    %rbx,%r9
   1803cc7b5:	e8 b6 db ff ff       	call   0x1803ca370
   1803cc7ba:	eb 39                	jmp    0x1803cc7f5
   1803cc7bc:	45 33 c9             	xor    %r9d,%r9d
   1803cc7bf:	48 8d 0d 6a 5a 30 00 	lea    0x305a6a(%rip),%rcx        # 0x1806d2230
   1803cc7c6:	e8 a5 db ff ff       	call   0x1803ca370
   1803cc7cb:	ff 05 6f 50 d4 00    	incl   0xd4506f(%rip)        # 0x181111840
   1803cc7d1:	4c 8d 0d 48 4d 4d 00 	lea    0x4d4d48(%rip),%r9        # 0x1808a1520
   1803cc7d8:	4c 8d 05 31 9e 4d 00 	lea    0x4d9e31(%rip),%r8        # 0x1808a6610
   1803cc7df:	48 8d 15 4a 5a 30 00 	lea    0x305a4a(%rip),%rdx        # 0x1806d2230
   1803cc7e6:	48 8d 0d 93 99 4d 00 	lea    0x4d9993(%rip),%rcx        # 0x1808a6180
   1803cc7ed:	e8 6e 5d ee ff       	call   0x1802b2560
   1803cc7f2:	49 8b de             	mov    %r14,%rbx
   1803cc7f5:	4c 8d 05 ec 51 4d 00 	lea    0x4d51ec(%rip),%r8        # 0x1808a19e8
   1803cc7fc:	48 89 1d 55 52 59 00 	mov    %rbx,0x595255(%rip)        # 0x180961a58
   1803cc803:	48 8d 15 f6 9d 4d 00 	lea    0x4d9df6(%rip),%rdx        # 0x1808a6600
   1803cc80a:	48 8d 0d 1f 5a 30 00 	lea    0x305a1f(%rip),%rcx        # 0x1806d2230
   1803cc811:	e8 ba dd ff ff       	call   0x1803ca5d0
   1803cc816:	48 8b c8             	mov    %rax,%rcx
   1803cc819:	48 85 c0             	test   %rax,%rax
   1803cc81c:	74 6e                	je     0x1803cc88c
   1803cc81e:	4c 63 48 02          	movslq 0x2(%rax),%r9
   1803cc822:	4c 8d 05 bf 51 4d 00 	lea    0x4d51bf(%rip),%r8        # 0x1808a19e8
   1803cc829:	48 05 06 00 ff ff    	add    $0xffffffffffff0006,%rax
   1803cc82f:	48 8d 15 ca 9d 4d 00 	lea    0x4d9dca(%rip),%rdx        # 0x1808a6600
   1803cc836:	49 03 c1             	add    %r9,%rax
   1803cc839:	49 3b c7             	cmp    %r15,%rax
   1803cc83c:	77 18                	ja     0x1803cc856
   1803cc83e:	48 8d 59 06          	lea    0x6(%rcx),%rbx
   1803cc842:	49 03 d9             	add    %r9,%rbx
   1803cc845:	48 8d 0d e4 59 30 00 	lea    0x3059e4(%rip),%rcx        # 0x1806d2230
   1803cc84c:	4c 8b cb             	mov    %rbx,%r9
   1803cc84f:	e8 1c db ff ff       	call   0x1803ca370
   1803cc854:	eb 39                	jmp    0x1803cc88f
   1803cc856:	45 33 c9             	xor    %r9d,%r9d
   1803cc859:	48 8d 0d d0 59 30 00 	lea    0x3059d0(%rip),%rcx        # 0x1806d2230
   1803cc860:	e8 0b db ff ff       	call   0x1803ca370
   1803cc865:	ff 05 d5 4f d4 00    	incl   0xd44fd5(%rip)        # 0x181111840
   1803cc86b:	4c 8d 0d 76 51 4d 00 	lea    0x4d5176(%rip),%r9        # 0x1808a19e8
   1803cc872:	4c 8d 05 87 9d 4d 00 	lea    0x4d9d87(%rip),%r8        # 0x1808a6600
   1803cc879:	48 8d 15 b0 59 30 00 	lea    0x3059b0(%rip),%rdx        # 0x1806d2230
   1803cc880:	48 8d 0d f9 98 4d 00 	lea    0x4d98f9(%rip),%rcx        # 0x1808a6180
   1803cc887:	e8 d4 5c ee ff       	call   0x1802b2560
   1803cc88c:	49 8b de             	mov    %r14,%rbx
   1803cc88f:	4c 8d 05 32 51 4d 00 	lea    0x4d5132(%rip),%r8        # 0x1808a19c8
   1803cc896:	48 89 1d c3 51 59 00 	mov    %rbx,0x5951c3(%rip)        # 0x180961a60
   1803cc89d:	48 8d 15 44 9d 4d 00 	lea    0x4d9d44(%rip),%rdx        # 0x1808a65e8
   1803cc8a4:	48 8d 0d 85 59 30 00 	lea    0x305985(%rip),%rcx        # 0x1806d2230
   1803cc8ab:	e8 20 dd ff ff       	call   0x1803ca5d0
   1803cc8b0:	48 8b c8             	mov    %rax,%rcx
   1803cc8b3:	48 85 c0             	test   %rax,%rax
   1803cc8b6:	74 6e                	je     0x1803cc926
   1803cc8b8:	4c 63 48 03          	movslq 0x3(%rax),%r9
   1803cc8bc:	4c 8d 05 05 51 4d 00 	lea    0x4d5105(%rip),%r8        # 0x1808a19c8
   1803cc8c3:	48 05 07 00 ff ff    	add    $0xffffffffffff0007,%rax
   1803cc8c9:	48 8d 15 18 9d 4d 00 	lea    0x4d9d18(%rip),%rdx        # 0x1808a65e8
   1803cc8d0:	49 03 c1             	add    %r9,%rax
   1803cc8d3:	49 3b c7             	cmp    %r15,%rax
   1803cc8d6:	77 18                	ja     0x1803cc8f0
   1803cc8d8:	48 8d 59 07          	lea    0x7(%rcx),%rbx
   1803cc8dc:	49 03 d9             	add    %r9,%rbx
   1803cc8df:	48 8d 0d 4a 59 30 00 	lea    0x30594a(%rip),%rcx        # 0x1806d2230
   1803cc8e6:	4c 8b cb             	mov    %rbx,%r9
   1803cc8e9:	e8 82 da ff ff       	call   0x1803ca370
   1803cc8ee:	eb 39                	jmp    0x1803cc929
   1803cc8f0:	45 33 c9             	xor    %r9d,%r9d
   1803cc8f3:	48 8d 0d 36 59 30 00 	lea    0x305936(%rip),%rcx        # 0x1806d2230
   1803cc8fa:	e8 71 da ff ff       	call   0x1803ca370
   1803cc8ff:	ff 05 3b 4f d4 00    	incl   0xd44f3b(%rip)        # 0x181111840
   1803cc905:	4c 8d 0d bc 50 4d 00 	lea    0x4d50bc(%rip),%r9        # 0x1808a19c8
   1803cc90c:	4c 8d 05 d5 9c 4d 00 	lea    0x4d9cd5(%rip),%r8        # 0x1808a65e8
   1803cc913:	48 8d 15 16 59 30 00 	lea    0x305916(%rip),%rdx        # 0x1806d2230
   1803cc91a:	48 8d 0d 5f 98 4d 00 	lea    0x4d985f(%rip),%rcx        # 0x1808a6180
   1803cc921:	e8 3a 5c ee ff       	call   0x1802b2560
   1803cc926:	49 8b de             	mov    %r14,%rbx
   1803cc929:	4c 8d 05 68 50 4d 00 	lea    0x4d5068(%rip),%r8        # 0x1808a1998
   1803cc930:	48 89 1d 31 51 59 00 	mov    %rbx,0x595131(%rip)        # 0x180961a68
   1803cc937:	48 8d 15 92 9c 4d 00 	lea    0x4d9c92(%rip),%rdx        # 0x1808a65d0
   1803cc93e:	48 8d 0d eb 58 30 00 	lea    0x3058eb(%rip),%rcx        # 0x1806d2230
   1803cc945:	e8 86 dc ff ff       	call   0x1803ca5d0
   1803cc94a:	48 8b c8             	mov    %rax,%rcx
   1803cc94d:	48 85 c0             	test   %rax,%rax
   1803cc950:	74 6e                	je     0x1803cc9c0
   1803cc952:	4c 63 48 03          	movslq 0x3(%rax),%r9
   1803cc956:	4c 8d 05 3b 50 4d 00 	lea    0x4d503b(%rip),%r8        # 0x1808a1998
   1803cc95d:	48 05 07 00 ff ff    	add    $0xffffffffffff0007,%rax
   1803cc963:	48 8d 15 66 9c 4d 00 	lea    0x4d9c66(%rip),%rdx        # 0x1808a65d0
   1803cc96a:	49 03 c1             	add    %r9,%rax
   1803cc96d:	49 3b c7             	cmp    %r15,%rax
   1803cc970:	77 18                	ja     0x1803cc98a
   1803cc972:	48 8d 59 07          	lea    0x7(%rcx),%rbx
   1803cc976:	49 03 d9             	add    %r9,%rbx
   1803cc979:	48 8d 0d b0 58 30 00 	lea    0x3058b0(%rip),%rcx        # 0x1806d2230
   1803cc980:	4c 8b cb             	mov    %rbx,%r9
   1803cc983:	e8 e8 d9 ff ff       	call   0x1803ca370
   1803cc988:	eb 39                	jmp    0x1803cc9c3
   1803cc98a:	45 33 c9             	xor    %r9d,%r9d
   1803cc98d:	48 8d 0d 9c 58 30 00 	lea    0x30589c(%rip),%rcx        # 0x1806d2230
   1803cc994:	e8 d7 d9 ff ff       	call   0x1803ca370
   1803cc999:	ff 05 a1 4e d4 00    	incl   0xd44ea1(%rip)        # 0x181111840
   1803cc99f:	4c 8d 0d f2 4f 4d 00 	lea    0x4d4ff2(%rip),%r9        # 0x1808a1998
   1803cc9a6:	4c 8d 05 23 9c 4d 00 	lea    0x4d9c23(%rip),%r8        # 0x1808a65d0
   1803cc9ad:	48 8d 15 7c 58 30 00 	lea    0x30587c(%rip),%rdx        # 0x1806d2230
   1803cc9b4:	48 8d 0d c5 97 4d 00 	lea    0x4d97c5(%rip),%rcx        # 0x1808a6180
   1803cc9bb:	e8 a0 5b ee ff       	call   0x1802b2560
   1803cc9c0:	49 8b de             	mov    %r14,%rbx
   1803cc9c3:	ff 05 7b 4e d4 00    	incl   0xd44e7b(%rip)        # 0x181111844
   1803cc9c9:	48 8d 3d 70 4f 4d 00 	lea    0x4d4f70(%rip),%rdi        # 0x1808a1940
   1803cc9d0:	4c 8b c7             	mov    %rdi,%r8
   1803cc9d3:	48 89 1d 96 50 59 00 	mov    %rbx,0x595096(%rip)        # 0x180961a70
   1803cc9da:	45 33 c9             	xor    %r9d,%r9d
   1803cc9dd:	48 8d 15 d4 9b 4d 00 	lea    0x4d9bd4(%rip),%rdx        # 0x1808a65b8
   1803cc9e4:	48 8d 0d 45 58 30 00 	lea    0x305845(%rip),%rcx        # 0x1806d2230
   1803cc9eb:	e8 80 d9 ff ff       	call   0x1803ca370
   1803cc9f0:	48 8d 0d 39 58 30 00 	lea    0x305839(%rip),%rcx        # 0x1806d2230
   1803cc9f7:	ff 15 83 e7 19 00    	call   *0x19e783(%rip)        # 0x18056b180
   1803cc9fd:	48 8b d8             	mov    %rax,%rbx
   1803cca00:	48 85 c0             	test   %rax,%rax
   1803cca03:	0f 84 a3 00 00 00    	je     0x1803ccaac
   1803cca09:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803cca0c:	33 c0                	xor    %eax,%eax
   1803cca0e:	0f 11 85 90 01 00 00 	movups %xmm0,0x190(%rbp)
   1803cca15:	48 89 85 a0 01 00 00 	mov    %rax,0x1a0(%rbp)
   1803cca1c:	ff 15 6e e8 19 00    	call   *0x19e86e(%rip)        # 0x18056b290
   1803cca22:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803cca28:	4c 8d 85 90 01 00 00 	lea    0x190(%rbp),%r8
   1803cca2f:	48 8b c8             	mov    %rax,%rcx
   1803cca32:	48 8b d3             	mov    %rbx,%rdx
   1803cca35:	ff 15 5d e8 19 00    	call   *0x19e85d(%rip)        # 0x18056b298
   1803cca3b:	85 c0                	test   %eax,%eax
   1803cca3d:	74 6d                	je     0x1803ccaac
   1803cca3f:	48 8b 85 90 01 00 00 	mov    0x190(%rbp),%rax
   1803cca46:	8b 8d 98 01 00 00    	mov    0x198(%rbp),%ecx
   1803cca4c:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803cca51:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803cca56:	48 85 c0             	test   %rax,%rax
   1803cca59:	74 51                	je     0x1803ccaac
   1803cca5b:	48 85 c9             	test   %rcx,%rcx
   1803cca5e:	74 4c                	je     0x1803ccaac
   1803cca60:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803cca65:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803cca6a:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803cca6f:	48 c7 44 24 38 51 00 	movq   $0x51,0x38(%rsp)
   1803cca76:	00 00 
   1803cca78:	e8 83 53 e0 ff       	call   0x1801d1e00
   1803cca7d:	48 8b d8             	mov    %rax,%rbx
   1803cca80:	48 85 c0             	test   %rax,%rax
   1803cca83:	75 0c                	jne    0x1803cca91
   1803cca85:	4c 8b cf             	mov    %rdi,%r9
   1803cca88:	48 8d 0d 49 97 4d 00 	lea    0x4d9749(%rip),%rcx        # 0x1808a61d8
   1803cca8f:	eb 29                	jmp    0x1803ccaba
   1803cca91:	4c 8b c8             	mov    %rax,%r9
   1803cca94:	48 8d 15 1d 9b 4d 00 	lea    0x4d9b1d(%rip),%rdx        # 0x1808a65b8
   1803cca9b:	4c 8b c7             	mov    %rdi,%r8
   1803cca9e:	48 8d 0d 8b 57 30 00 	lea    0x30578b(%rip),%rcx        # 0x1806d2230
   1803ccaa5:	e8 c6 d8 ff ff       	call   0x1803ca370
   1803ccaaa:	eb 2a                	jmp    0x1803ccad6
   1803ccaac:	4c 8d 0d 90 eb 1b 00 	lea    0x1beb90(%rip),%r9        # 0x18058b643
   1803ccab3:	48 8d 0d 46 97 4d 00 	lea    0x4d9746(%rip),%rcx        # 0x1808a6200
   1803ccaba:	ff 05 80 4d d4 00    	incl   0xd44d80(%rip)        # 0x181111840
   1803ccac0:	4c 8d 05 f1 9a 4d 00 	lea    0x4d9af1(%rip),%r8        # 0x1808a65b8
   1803ccac7:	48 8d 15 62 57 30 00 	lea    0x305762(%rip),%rdx        # 0x1806d2230
   1803ccace:	e8 8d 5a ee ff       	call   0x1802b2560
   1803ccad3:	49 8b de             	mov    %r14,%rbx
   1803ccad6:	ff 05 68 4d d4 00    	incl   0xd44d68(%rip)        # 0x181111844
   1803ccadc:	48 8d 3d fd 4d 4d 00 	lea    0x4d4dfd(%rip),%rdi        # 0x1808a18e0
   1803ccae3:	4c 8b c7             	mov    %rdi,%r8
   1803ccae6:	48 89 1d 8b 4f 59 00 	mov    %rbx,0x594f8b(%rip)        # 0x180961a78
   1803ccaed:	45 33 c9             	xor    %r9d,%r9d
   1803ccaf0:	48 8d 15 a9 9a 4d 00 	lea    0x4d9aa9(%rip),%rdx        # 0x1808a65a0
   1803ccaf7:	48 8d 0d 32 57 30 00 	lea    0x305732(%rip),%rcx        # 0x1806d2230
   1803ccafe:	e8 6d d8 ff ff       	call   0x1803ca370
   1803ccb03:	48 8d 0d 26 57 30 00 	lea    0x305726(%rip),%rcx        # 0x1806d2230
   1803ccb0a:	ff 15 70 e6 19 00    	call   *0x19e670(%rip)        # 0x18056b180
   1803ccb10:	48 8b d8             	mov    %rax,%rbx
   1803ccb13:	48 85 c0             	test   %rax,%rax
   1803ccb16:	0f 84 a3 00 00 00    	je     0x1803ccbbf
   1803ccb1c:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803ccb1f:	33 c0                	xor    %eax,%eax
   1803ccb21:	0f 11 85 a8 01 00 00 	movups %xmm0,0x1a8(%rbp)
   1803ccb28:	48 89 85 b8 01 00 00 	mov    %rax,0x1b8(%rbp)
   1803ccb2f:	ff 15 5b e7 19 00    	call   *0x19e75b(%rip)        # 0x18056b290
   1803ccb35:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803ccb3b:	4c 8d 85 a8 01 00 00 	lea    0x1a8(%rbp),%r8
   1803ccb42:	48 8b c8             	mov    %rax,%rcx
   1803ccb45:	48 8b d3             	mov    %rbx,%rdx
   1803ccb48:	ff 15 4a e7 19 00    	call   *0x19e74a(%rip)        # 0x18056b298
   1803ccb4e:	85 c0                	test   %eax,%eax
   1803ccb50:	74 6d                	je     0x1803ccbbf
   1803ccb52:	48 8b 85 a8 01 00 00 	mov    0x1a8(%rbp),%rax
   1803ccb59:	8b 8d b0 01 00 00    	mov    0x1b0(%rbp),%ecx
   1803ccb5f:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803ccb64:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803ccb69:	48 85 c0             	test   %rax,%rax
   1803ccb6c:	74 51                	je     0x1803ccbbf
   1803ccb6e:	48 85 c9             	test   %rcx,%rcx
   1803ccb71:	74 4c                	je     0x1803ccbbf
   1803ccb73:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803ccb78:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803ccb7d:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803ccb82:	48 c7 44 24 38 5a 00 	movq   $0x5a,0x38(%rsp)
   1803ccb89:	00 00 
   1803ccb8b:	e8 70 52 e0 ff       	call   0x1801d1e00
   1803ccb90:	48 8b d8             	mov    %rax,%rbx
   1803ccb93:	48 85 c0             	test   %rax,%rax
   1803ccb96:	75 0c                	jne    0x1803ccba4
   1803ccb98:	4c 8b cf             	mov    %rdi,%r9
   1803ccb9b:	48 8d 0d 36 96 4d 00 	lea    0x4d9636(%rip),%rcx        # 0x1808a61d8
   1803ccba2:	eb 29                	jmp    0x1803ccbcd
   1803ccba4:	4c 8b c8             	mov    %rax,%r9
   1803ccba7:	48 8d 15 f2 99 4d 00 	lea    0x4d99f2(%rip),%rdx        # 0x1808a65a0
   1803ccbae:	4c 8b c7             	mov    %rdi,%r8
   1803ccbb1:	48 8d 0d 78 56 30 00 	lea    0x305678(%rip),%rcx        # 0x1806d2230
   1803ccbb8:	e8 b3 d7 ff ff       	call   0x1803ca370
   1803ccbbd:	eb 2a                	jmp    0x1803ccbe9
   1803ccbbf:	4c 8d 0d 7d ea 1b 00 	lea    0x1bea7d(%rip),%r9        # 0x18058b643
   1803ccbc6:	48 8d 0d 33 96 4d 00 	lea    0x4d9633(%rip),%rcx        # 0x1808a6200
   1803ccbcd:	ff 05 6d 4c d4 00    	incl   0xd44c6d(%rip)        # 0x181111840
   1803ccbd3:	4c 8d 05 c6 99 4d 00 	lea    0x4d99c6(%rip),%r8        # 0x1808a65a0
   1803ccbda:	48 8d 15 4f 56 30 00 	lea    0x30564f(%rip),%rdx        # 0x1806d2230
   1803ccbe1:	e8 7a 59 ee ff       	call   0x1802b2560
   1803ccbe6:	49 8b de             	mov    %r14,%rbx
   1803ccbe9:	ff 05 55 4c d4 00    	incl   0xd44c55(%rip)        # 0x181111844
   1803ccbef:	48 8d 3d 6a 50 4d 00 	lea    0x4d506a(%rip),%rdi        # 0x1808a1c60
   1803ccbf6:	4c 8b c7             	mov    %rdi,%r8
   1803ccbf9:	48 89 1d 80 4e 59 00 	mov    %rbx,0x594e80(%rip)        # 0x180961a80
   1803ccc00:	45 33 c9             	xor    %r9d,%r9d
   1803ccc03:	48 8d 15 7e 99 4d 00 	lea    0x4d997e(%rip),%rdx        # 0x1808a6588
   1803ccc0a:	48 8d 0d 1f 56 30 00 	lea    0x30561f(%rip),%rcx        # 0x1806d2230
   1803ccc11:	e8 5a d7 ff ff       	call   0x1803ca370
   1803ccc16:	48 8d 0d 13 56 30 00 	lea    0x305613(%rip),%rcx        # 0x1806d2230
   1803ccc1d:	ff 15 5d e5 19 00    	call   *0x19e55d(%rip)        # 0x18056b180
   1803ccc23:	48 8b d8             	mov    %rax,%rbx
   1803ccc26:	48 85 c0             	test   %rax,%rax
   1803ccc29:	0f 84 a3 00 00 00    	je     0x1803cccd2
   1803ccc2f:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803ccc32:	33 c0                	xor    %eax,%eax
   1803ccc34:	0f 11 85 c0 01 00 00 	movups %xmm0,0x1c0(%rbp)
   1803ccc3b:	48 89 85 d0 01 00 00 	mov    %rax,0x1d0(%rbp)
   1803ccc42:	ff 15 48 e6 19 00    	call   *0x19e648(%rip)        # 0x18056b290
   1803ccc48:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803ccc4e:	4c 8d 85 c0 01 00 00 	lea    0x1c0(%rbp),%r8
   1803ccc55:	48 8b c8             	mov    %rax,%rcx
   1803ccc58:	48 8b d3             	mov    %rbx,%rdx
   1803ccc5b:	ff 15 37 e6 19 00    	call   *0x19e637(%rip)        # 0x18056b298
   1803ccc61:	85 c0                	test   %eax,%eax
   1803ccc63:	74 6d                	je     0x1803cccd2
   1803ccc65:	48 8b 85 c0 01 00 00 	mov    0x1c0(%rbp),%rax
   1803ccc6c:	8b 8d c8 01 00 00    	mov    0x1c8(%rbp),%ecx
   1803ccc72:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803ccc77:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803ccc7c:	48 85 c0             	test   %rax,%rax
   1803ccc7f:	74 51                	je     0x1803cccd2
   1803ccc81:	48 85 c9             	test   %rcx,%rcx
   1803ccc84:	74 4c                	je     0x1803cccd2
   1803ccc86:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803ccc8b:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803ccc90:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803ccc95:	48 c7 44 24 38 48 00 	movq   $0x48,0x38(%rsp)
   1803ccc9c:	00 00 
   1803ccc9e:	e8 5d 51 e0 ff       	call   0x1801d1e00
   1803ccca3:	48 8b d8             	mov    %rax,%rbx
   1803ccca6:	48 85 c0             	test   %rax,%rax
   1803ccca9:	75 0c                	jne    0x1803cccb7
   1803cccab:	4c 8b cf             	mov    %rdi,%r9
   1803cccae:	48 8d 0d 23 95 4d 00 	lea    0x4d9523(%rip),%rcx        # 0x1808a61d8
   1803cccb5:	eb 29                	jmp    0x1803ccce0
   1803cccb7:	4c 8b c8             	mov    %rax,%r9
   1803cccba:	48 8d 15 c7 98 4d 00 	lea    0x4d98c7(%rip),%rdx        # 0x1808a6588
   1803cccc1:	4c 8b c7             	mov    %rdi,%r8
   1803cccc4:	48 8d 0d 65 55 30 00 	lea    0x305565(%rip),%rcx        # 0x1806d2230
   1803ccccb:	e8 a0 d6 ff ff       	call   0x1803ca370
   1803cccd0:	eb 2a                	jmp    0x1803cccfc
   1803cccd2:	4c 8d 0d 6a e9 1b 00 	lea    0x1be96a(%rip),%r9        # 0x18058b643
   1803cccd9:	48 8d 0d 20 95 4d 00 	lea    0x4d9520(%rip),%rcx        # 0x1808a6200
   1803ccce0:	ff 05 5a 4b d4 00    	incl   0xd44b5a(%rip)        # 0x181111840
   1803ccce6:	4c 8d 05 9b 98 4d 00 	lea    0x4d989b(%rip),%r8        # 0x1808a6588
   1803ccced:	48 8d 15 3c 55 30 00 	lea    0x30553c(%rip),%rdx        # 0x1806d2230
   1803cccf4:	e8 67 58 ee ff       	call   0x1802b2560
   1803cccf9:	49 8b de             	mov    %r14,%rbx
   1803cccfc:	4c 8d 05 a5 4b 4d 00 	lea    0x4d4ba5(%rip),%r8        # 0x1808a18a8
   1803ccd03:	48 89 1d 96 4d 59 00 	mov    %rbx,0x594d96(%rip)        # 0x180961aa0
   1803ccd0a:	48 8d 15 cf 99 4d 00 	lea    0x4d99cf(%rip),%rdx        # 0x1808a66e0
   1803ccd11:	48 8d 0d 18 55 30 00 	lea    0x305518(%rip),%rcx        # 0x1806d2230
   1803ccd18:	e8 b3 d8 ff ff       	call   0x1803ca5d0
   1803ccd1d:	48 8b d8             	mov    %rax,%rbx
   1803ccd20:	48 85 c0             	test   %rax,%rax
   1803ccd23:	0f 84 93 00 00 00    	je     0x1803ccdbc
   1803ccd29:	48 05 04 00 ff ff    	add    $0xffffffffffff0004,%rax
   1803ccd2f:	49 3b c7             	cmp    %r15,%rax
   1803ccd32:	77 44                	ja     0x1803ccd78
   1803ccd34:	48 8d 4b 04          	lea    0x4(%rbx),%rcx
   1803ccd38:	e8 e3 44 c4 ff       	call   0x180011220
   1803ccd3d:	3c e8                	cmp    $0xe8,%al
   1803ccd3f:	75 37                	jne    0x1803ccd78
   1803ccd41:	48 8d 4b 05          	lea    0x5(%rbx),%rcx
   1803ccd45:	e8 b6 44 c4 ff       	call   0x180011200
   1803ccd4a:	48 63 c8             	movslq %eax,%rcx
   1803ccd4d:	4c 8d 05 54 4b 4d 00 	lea    0x4d4b54(%rip),%r8        # 0x1808a18a8
   1803ccd54:	48 83 c3 09          	add    $0x9,%rbx
   1803ccd58:	48 8d 15 81 99 4d 00 	lea    0x4d9981(%rip),%rdx        # 0x1808a66e0
   1803ccd5f:	48 03 d9             	add    %rcx,%rbx
   1803ccd62:	48 8d 0d c7 54 30 00 	lea    0x3054c7(%rip),%rcx        # 0x1806d2230
   1803ccd69:	4c 8b cb             	mov    %rbx,%r9
   1803ccd6c:	e8 ff d5 ff ff       	call   0x1803ca370
   1803ccd71:	48 85 db             	test   %rbx,%rbx
   1803ccd74:	74 1f                	je     0x1803ccd95
   1803ccd76:	eb 47                	jmp    0x1803ccdbf
   1803ccd78:	45 33 c9             	xor    %r9d,%r9d
   1803ccd7b:	4c 8d 05 26 4b 4d 00 	lea    0x4d4b26(%rip),%r8        # 0x1808a18a8
   1803ccd82:	48 8d 15 57 99 4d 00 	lea    0x4d9957(%rip),%rdx        # 0x1808a66e0
   1803ccd89:	48 8d 0d a0 54 30 00 	lea    0x3054a0(%rip),%rcx        # 0x1806d2230
   1803ccd90:	e8 db d5 ff ff       	call   0x1803ca370
   1803ccd95:	ff 05 a5 4a d4 00    	incl   0xd44aa5(%rip)        # 0x181111840
   1803ccd9b:	4c 8d 0d 06 4b 4d 00 	lea    0x4d4b06(%rip),%r9        # 0x1808a18a8
   1803ccda2:	4c 8d 05 37 99 4d 00 	lea    0x4d9937(%rip),%r8        # 0x1808a66e0
   1803ccda9:	48 8d 15 80 54 30 00 	lea    0x305480(%rip),%rdx        # 0x1806d2230
   1803ccdb0:	48 8d 0d f9 93 4d 00 	lea    0x4d93f9(%rip),%rcx        # 0x1808a61b0
   1803ccdb7:	e8 a4 57 ee ff       	call   0x1802b2560
   1803ccdbc:	49 8b de             	mov    %r14,%rbx
   1803ccdbf:	4c 8d 05 a2 4a 4d 00 	lea    0x4d4aa2(%rip),%r8        # 0x1808a1868
   1803ccdc6:	48 89 1d bb 4c 59 00 	mov    %rbx,0x594cbb(%rip)        # 0x180961a88
   1803ccdcd:	48 8d 15 ec 98 4d 00 	lea    0x4d98ec(%rip),%rdx        # 0x1808a66c0
   1803ccdd4:	48 8d 0d 55 54 30 00 	lea    0x305455(%rip),%rcx        # 0x1806d2230
   1803ccddb:	e8 f0 d7 ff ff       	call   0x1803ca5d0
   1803ccde0:	48 8b d8             	mov    %rax,%rbx
   1803ccde3:	48 85 c0             	test   %rax,%rax
   1803ccde6:	0f 84 93 00 00 00    	je     0x1803cce7f
   1803ccdec:	48 05 10 00 ff ff    	add    $0xffffffffffff0010,%rax
   1803ccdf2:	49 3b c7             	cmp    %r15,%rax
   1803ccdf5:	77 44                	ja     0x1803cce3b
   1803ccdf7:	48 8d 4b 10          	lea    0x10(%rbx),%rcx
   1803ccdfb:	e8 20 44 c4 ff       	call   0x180011220
   1803cce00:	3c e8                	cmp    $0xe8,%al
   1803cce02:	75 37                	jne    0x1803cce3b
   1803cce04:	48 8d 4b 11          	lea    0x11(%rbx),%rcx
   1803cce08:	e8 f3 43 c4 ff       	call   0x180011200
   1803cce0d:	48 63 c8             	movslq %eax,%rcx
   1803cce10:	4c 8d 05 51 4a 4d 00 	lea    0x4d4a51(%rip),%r8        # 0x1808a1868
   1803cce17:	48 83 c3 15          	add    $0x15,%rbx
   1803cce1b:	48 8d 15 9e 98 4d 00 	lea    0x4d989e(%rip),%rdx        # 0x1808a66c0
   1803cce22:	48 03 d9             	add    %rcx,%rbx
   1803cce25:	48 8d 0d 04 54 30 00 	lea    0x305404(%rip),%rcx        # 0x1806d2230
   1803cce2c:	4c 8b cb             	mov    %rbx,%r9
   1803cce2f:	e8 3c d5 ff ff       	call   0x1803ca370
   1803cce34:	48 85 db             	test   %rbx,%rbx
   1803cce37:	74 1f                	je     0x1803cce58
   1803cce39:	eb 47                	jmp    0x1803cce82
   1803cce3b:	45 33 c9             	xor    %r9d,%r9d
   1803cce3e:	4c 8d 05 23 4a 4d 00 	lea    0x4d4a23(%rip),%r8        # 0x1808a1868
   1803cce45:	48 8d 15 74 98 4d 00 	lea    0x4d9874(%rip),%rdx        # 0x1808a66c0
   1803cce4c:	48 8d 0d dd 53 30 00 	lea    0x3053dd(%rip),%rcx        # 0x1806d2230
   1803cce53:	e8 18 d5 ff ff       	call   0x1803ca370
   1803cce58:	ff 05 e2 49 d4 00    	incl   0xd449e2(%rip)        # 0x181111840
   1803cce5e:	4c 8d 0d 03 4a 4d 00 	lea    0x4d4a03(%rip),%r9        # 0x1808a1868
   1803cce65:	4c 8d 05 54 98 4d 00 	lea    0x4d9854(%rip),%r8        # 0x1808a66c0
   1803cce6c:	48 8d 15 bd 53 30 00 	lea    0x3053bd(%rip),%rdx        # 0x1806d2230
   1803cce73:	48 8d 0d 36 93 4d 00 	lea    0x4d9336(%rip),%rcx        # 0x1808a61b0
   1803cce7a:	e8 e1 56 ee ff       	call   0x1802b2560
   1803cce7f:	49 8b de             	mov    %r14,%rbx
   1803cce82:	4c 8d 05 af 49 4d 00 	lea    0x4d49af(%rip),%r8        # 0x1808a1838
   1803cce89:	48 89 1d 00 4c 59 00 	mov    %rbx,0x594c00(%rip)        # 0x180961a90
   1803cce90:	48 8d 15 11 98 4d 00 	lea    0x4d9811(%rip),%rdx        # 0x1808a66a8
   1803cce97:	48 8d 0d 92 53 30 00 	lea    0x305392(%rip),%rcx        # 0x1806d2230
   1803cce9e:	e8 2d d7 ff ff       	call   0x1803ca5d0
   1803ccea3:	48 8b d8             	mov    %rax,%rbx
   1803ccea6:	48 85 c0             	test   %rax,%rax
   1803ccea9:	0f 84 92 00 00 00    	je     0x1803ccf41
   1803cceaf:	48 05 00 00 ff ff    	add    $0xffffffffffff0000,%rax
   1803cceb5:	49 3b c7             	cmp    %r15,%rax
   1803cceb8:	77 43                	ja     0x1803ccefd
   1803cceba:	48 8b cb             	mov    %rbx,%rcx
   1803ccebd:	e8 5e 43 c4 ff       	call   0x180011220
   1803ccec2:	3c e8                	cmp    $0xe8,%al
   1803ccec4:	75 37                	jne    0x1803ccefd
   1803ccec6:	48 8d 4b 01          	lea    0x1(%rbx),%rcx
   1803cceca:	e8 31 43 c4 ff       	call   0x180011200
   1803ccecf:	48 63 c8             	movslq %eax,%rcx
   1803cced2:	4c 8d 05 5f 49 4d 00 	lea    0x4d495f(%rip),%r8        # 0x1808a1838
   1803cced9:	48 83 c3 05          	add    $0x5,%rbx
   1803ccedd:	48 8d 15 c4 97 4d 00 	lea    0x4d97c4(%rip),%rdx        # 0x1808a66a8
   1803ccee4:	48 03 d9             	add    %rcx,%rbx
   1803ccee7:	48 8d 0d 42 53 30 00 	lea    0x305342(%rip),%rcx        # 0x1806d2230
   1803cceee:	4c 8b cb             	mov    %rbx,%r9
   1803ccef1:	e8 7a d4 ff ff       	call   0x1803ca370
   1803ccef6:	48 85 db             	test   %rbx,%rbx
   1803ccef9:	74 1f                	je     0x1803ccf1a
   1803ccefb:	eb 47                	jmp    0x1803ccf44
   1803ccefd:	45 33 c9             	xor    %r9d,%r9d
   1803ccf00:	4c 8d 05 31 49 4d 00 	lea    0x4d4931(%rip),%r8        # 0x1808a1838
   1803ccf07:	48 8d 15 9a 97 4d 00 	lea    0x4d979a(%rip),%rdx        # 0x1808a66a8
   1803ccf0e:	48 8d 0d 1b 53 30 00 	lea    0x30531b(%rip),%rcx        # 0x1806d2230
   1803ccf15:	e8 56 d4 ff ff       	call   0x1803ca370
   1803ccf1a:	ff 05 20 49 d4 00    	incl   0xd44920(%rip)        # 0x181111840
   1803ccf20:	4c 8d 0d 11 49 4d 00 	lea    0x4d4911(%rip),%r9        # 0x1808a1838
   1803ccf27:	4c 8d 05 7a 97 4d 00 	lea    0x4d977a(%rip),%r8        # 0x1808a66a8
   1803ccf2e:	48 8d 15 fb 52 30 00 	lea    0x3052fb(%rip),%rdx        # 0x1806d2230
   1803ccf35:	48 8d 0d 74 92 4d 00 	lea    0x4d9274(%rip),%rcx        # 0x1808a61b0
   1803ccf3c:	e8 1f 56 ee ff       	call   0x1802b2560
   1803ccf41:	49 8b de             	mov    %r14,%rbx
   1803ccf44:	ff 05 fa 48 d4 00    	incl   0xd448fa(%rip)        # 0x181111844
   1803ccf4a:	48 8d 3d af 4c 4d 00 	lea    0x4d4caf(%rip),%rdi        # 0x1808a1c00
   1803ccf51:	4c 8b c7             	mov    %rdi,%r8
   1803ccf54:	48 89 1d 3d 4b 59 00 	mov    %rbx,0x594b3d(%rip)        # 0x180961a98
   1803ccf5b:	45 33 c9             	xor    %r9d,%r9d
   1803ccf5e:	48 8d 15 2b 97 4d 00 	lea    0x4d972b(%rip),%rdx        # 0x1808a6690
   1803ccf65:	48 8d 0d c4 52 30 00 	lea    0x3052c4(%rip),%rcx        # 0x1806d2230
   1803ccf6c:	e8 ff d3 ff ff       	call   0x1803ca370
   1803ccf71:	48 8d 0d b8 52 30 00 	lea    0x3052b8(%rip),%rcx        # 0x1806d2230
   1803ccf78:	ff 15 02 e2 19 00    	call   *0x19e202(%rip)        # 0x18056b180
   1803ccf7e:	48 8b d8             	mov    %rax,%rbx
   1803ccf81:	48 85 c0             	test   %rax,%rax
   1803ccf84:	0f 84 a3 00 00 00    	je     0x1803cd02d
   1803ccf8a:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803ccf8d:	33 c0                	xor    %eax,%eax
   1803ccf8f:	0f 11 85 d8 01 00 00 	movups %xmm0,0x1d8(%rbp)
   1803ccf96:	48 89 85 e8 01 00 00 	mov    %rax,0x1e8(%rbp)
   1803ccf9d:	ff 15 ed e2 19 00    	call   *0x19e2ed(%rip)        # 0x18056b290
   1803ccfa3:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803ccfa9:	4c 8d 85 d8 01 00 00 	lea    0x1d8(%rbp),%r8
   1803ccfb0:	48 8b c8             	mov    %rax,%rcx
   1803ccfb3:	48 8b d3             	mov    %rbx,%rdx
   1803ccfb6:	ff 15 dc e2 19 00    	call   *0x19e2dc(%rip)        # 0x18056b298
   1803ccfbc:	85 c0                	test   %eax,%eax
   1803ccfbe:	74 6d                	je     0x1803cd02d
   1803ccfc0:	48 8b 85 d8 01 00 00 	mov    0x1d8(%rbp),%rax
   1803ccfc7:	8b 8d e0 01 00 00    	mov    0x1e0(%rbp),%ecx
   1803ccfcd:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803ccfd2:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803ccfd7:	48 85 c0             	test   %rax,%rax
   1803ccfda:	74 51                	je     0x1803cd02d
   1803ccfdc:	48 85 c9             	test   %rcx,%rcx
   1803ccfdf:	74 4c                	je     0x1803cd02d
   1803ccfe1:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803ccfe6:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803ccfeb:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803ccff0:	48 c7 44 24 38 51 00 	movq   $0x51,0x38(%rsp)
   1803ccff7:	00 00 
   1803ccff9:	e8 02 4e e0 ff       	call   0x1801d1e00
   1803ccffe:	48 8b d8             	mov    %rax,%rbx
   1803cd001:	48 85 c0             	test   %rax,%rax
   1803cd004:	75 0c                	jne    0x1803cd012
   1803cd006:	4c 8b cf             	mov    %rdi,%r9
   1803cd009:	48 8d 0d c8 91 4d 00 	lea    0x4d91c8(%rip),%rcx        # 0x1808a61d8
   1803cd010:	eb 29                	jmp    0x1803cd03b
   1803cd012:	4c 8b c8             	mov    %rax,%r9
   1803cd015:	48 8d 15 74 96 4d 00 	lea    0x4d9674(%rip),%rdx        # 0x1808a6690
   1803cd01c:	4c 8b c7             	mov    %rdi,%r8
   1803cd01f:	48 8d 0d 0a 52 30 00 	lea    0x30520a(%rip),%rcx        # 0x1806d2230
   1803cd026:	e8 45 d3 ff ff       	call   0x1803ca370
   1803cd02b:	eb 2a                	jmp    0x1803cd057
   1803cd02d:	4c 8d 0d 0f e6 1b 00 	lea    0x1be60f(%rip),%r9        # 0x18058b643
   1803cd034:	48 8d 0d c5 91 4d 00 	lea    0x4d91c5(%rip),%rcx        # 0x1808a6200
   1803cd03b:	ff 05 ff 47 d4 00    	incl   0xd447ff(%rip)        # 0x181111840
   1803cd041:	4c 8d 05 48 96 4d 00 	lea    0x4d9648(%rip),%r8        # 0x1808a6690
   1803cd048:	48 8d 15 e1 51 30 00 	lea    0x3051e1(%rip),%rdx        # 0x1806d2230
   1803cd04f:	e8 0c 55 ee ff       	call   0x1802b2560
   1803cd054:	49 8b de             	mov    %r14,%rbx
   1803cd057:	4c 8d 05 7a 4b 4d 00 	lea    0x4d4b7a(%rip),%r8        # 0x1808a1bd8
   1803cd05e:	48 89 1d 43 4a 59 00 	mov    %rbx,0x594a43(%rip)        # 0x180961aa8
   1803cd065:	48 8d 15 90 35 31 00 	lea    0x313590(%rip),%rdx        # 0x1806e05fc
   1803cd06c:	48 8d 0d bd 51 30 00 	lea    0x3051bd(%rip),%rcx        # 0x1806d2230
   1803cd073:	e8 58 d5 ff ff       	call   0x1803ca5d0
   1803cd078:	48 8b c8             	mov    %rax,%rcx
   1803cd07b:	48 85 c0             	test   %rax,%rax
   1803cd07e:	74 6e                	je     0x1803cd0ee
   1803cd080:	4c 63 48 03          	movslq 0x3(%rax),%r9
   1803cd084:	4c 8d 05 4d 4b 4d 00 	lea    0x4d4b4d(%rip),%r8        # 0x1808a1bd8
   1803cd08b:	48 05 07 00 ff ff    	add    $0xffffffffffff0007,%rax
   1803cd091:	48 8d 15 64 35 31 00 	lea    0x313564(%rip),%rdx        # 0x1806e05fc
   1803cd098:	49 03 c1             	add    %r9,%rax
   1803cd09b:	49 3b c7             	cmp    %r15,%rax
   1803cd09e:	77 18                	ja     0x1803cd0b8
   1803cd0a0:	48 8d 59 07          	lea    0x7(%rcx),%rbx
   1803cd0a4:	49 03 d9             	add    %r9,%rbx
   1803cd0a7:	48 8d 0d 82 51 30 00 	lea    0x305182(%rip),%rcx        # 0x1806d2230
   1803cd0ae:	4c 8b cb             	mov    %rbx,%r9
   1803cd0b1:	e8 ba d2 ff ff       	call   0x1803ca370
   1803cd0b6:	eb 39                	jmp    0x1803cd0f1
   1803cd0b8:	45 33 c9             	xor    %r9d,%r9d
   1803cd0bb:	48 8d 0d 6e 51 30 00 	lea    0x30516e(%rip),%rcx        # 0x1806d2230
   1803cd0c2:	e8 a9 d2 ff ff       	call   0x1803ca370
   1803cd0c7:	ff 05 73 47 d4 00    	incl   0xd44773(%rip)        # 0x181111840
   1803cd0cd:	4c 8d 0d 04 4b 4d 00 	lea    0x4d4b04(%rip),%r9        # 0x1808a1bd8
   1803cd0d4:	4c 8d 05 21 35 31 00 	lea    0x313521(%rip),%r8        # 0x1806e05fc
   1803cd0db:	48 8d 15 4e 51 30 00 	lea    0x30514e(%rip),%rdx        # 0x1806d2230
   1803cd0e2:	48 8d 0d 97 90 4d 00 	lea    0x4d9097(%rip),%rcx        # 0x1808a6180
   1803cd0e9:	e8 72 54 ee ff       	call   0x1802b2560
   1803cd0ee:	49 8b de             	mov    %r14,%rbx
   1803cd0f1:	4c 8d 05 58 4a 4d 00 	lea    0x4d4a58(%rip),%r8        # 0x1808a1b50
   1803cd0f8:	48 89 1d b1 49 59 00 	mov    %rbx,0x5949b1(%rip)        # 0x180961ab0
   1803cd0ff:	48 8d 15 5a 58 32 00 	lea    0x32585a(%rip),%rdx        # 0x1806f2960
   1803cd106:	48 8d 0d 23 51 30 00 	lea    0x305123(%rip),%rcx        # 0x1806d2230
   1803cd10d:	e8 be d4 ff ff       	call   0x1803ca5d0
   1803cd112:	48 8b c8             	mov    %rax,%rcx
   1803cd115:	48 85 c0             	test   %rax,%rax
   1803cd118:	74 6e                	je     0x1803cd188
   1803cd11a:	4c 63 48 03          	movslq 0x3(%rax),%r9
   1803cd11e:	4c 8d 05 2b 4a 4d 00 	lea    0x4d4a2b(%rip),%r8        # 0x1808a1b50
   1803cd125:	48 05 07 00 ff ff    	add    $0xffffffffffff0007,%rax
   1803cd12b:	48 8d 15 2e 58 32 00 	lea    0x32582e(%rip),%rdx        # 0x1806f2960
   1803cd132:	49 03 c1             	add    %r9,%rax
   1803cd135:	49 3b c7             	cmp    %r15,%rax
   1803cd138:	77 18                	ja     0x1803cd152
   1803cd13a:	48 8d 59 07          	lea    0x7(%rcx),%rbx
   1803cd13e:	49 03 d9             	add    %r9,%rbx
   1803cd141:	48 8d 0d e8 50 30 00 	lea    0x3050e8(%rip),%rcx        # 0x1806d2230
   1803cd148:	4c 8b cb             	mov    %rbx,%r9
   1803cd14b:	e8 20 d2 ff ff       	call   0x1803ca370
   1803cd150:	eb 39                	jmp    0x1803cd18b
   1803cd152:	45 33 c9             	xor    %r9d,%r9d
   1803cd155:	48 8d 0d d4 50 30 00 	lea    0x3050d4(%rip),%rcx        # 0x1806d2230
   1803cd15c:	e8 0f d2 ff ff       	call   0x1803ca370
   1803cd161:	ff 05 d9 46 d4 00    	incl   0xd446d9(%rip)        # 0x181111840
   1803cd167:	4c 8d 0d e2 49 4d 00 	lea    0x4d49e2(%rip),%r9        # 0x1808a1b50
   1803cd16e:	4c 8d 05 eb 57 32 00 	lea    0x3257eb(%rip),%r8        # 0x1806f2960
   1803cd175:	48 8d 15 b4 50 30 00 	lea    0x3050b4(%rip),%rdx        # 0x1806d2230
   1803cd17c:	48 8d 0d fd 8f 4d 00 	lea    0x4d8ffd(%rip),%rcx        # 0x1808a6180
   1803cd183:	e8 d8 53 ee ff       	call   0x1802b2560
   1803cd188:	49 8b de             	mov    %r14,%rbx
   1803cd18b:	4c 8d 05 fe 49 4d 00 	lea    0x4d49fe(%rip),%r8        # 0x1808a1b90
   1803cd192:	48 89 1d 1f 49 59 00 	mov    %rbx,0x59491f(%rip)        # 0x180961ab8
   1803cd199:	48 8d 15 e0 94 4d 00 	lea    0x4d94e0(%rip),%rdx        # 0x1808a6680
   1803cd1a0:	48 8d 0d 89 50 30 00 	lea    0x305089(%rip),%rcx        # 0x1806d2230
   1803cd1a7:	e8 24 d4 ff ff       	call   0x1803ca5d0
   1803cd1ac:	48 8b c8             	mov    %rax,%rcx
   1803cd1af:	48 85 c0             	test   %rax,%rax
   1803cd1b2:	74 6e                	je     0x1803cd222
   1803cd1b4:	4c 63 48 03          	movslq 0x3(%rax),%r9
   1803cd1b8:	4c 8d 05 d1 49 4d 00 	lea    0x4d49d1(%rip),%r8        # 0x1808a1b90
   1803cd1bf:	48 05 07 00 ff ff    	add    $0xffffffffffff0007,%rax
   1803cd1c5:	48 8d 15 b4 94 4d 00 	lea    0x4d94b4(%rip),%rdx        # 0x1808a6680
   1803cd1cc:	49 03 c1             	add    %r9,%rax
   1803cd1cf:	49 3b c7             	cmp    %r15,%rax
   1803cd1d2:	77 18                	ja     0x1803cd1ec
   1803cd1d4:	48 8d 59 07          	lea    0x7(%rcx),%rbx
   1803cd1d8:	49 03 d9             	add    %r9,%rbx
   1803cd1db:	48 8d 0d 4e 50 30 00 	lea    0x30504e(%rip),%rcx        # 0x1806d2230
   1803cd1e2:	4c 8b cb             	mov    %rbx,%r9
   1803cd1e5:	e8 86 d1 ff ff       	call   0x1803ca370
   1803cd1ea:	eb 39                	jmp    0x1803cd225
   1803cd1ec:	45 33 c9             	xor    %r9d,%r9d
   1803cd1ef:	48 8d 0d 3a 50 30 00 	lea    0x30503a(%rip),%rcx        # 0x1806d2230
   1803cd1f6:	e8 75 d1 ff ff       	call   0x1803ca370
   1803cd1fb:	ff 05 3f 46 d4 00    	incl   0xd4463f(%rip)        # 0x181111840
   1803cd201:	4c 8d 0d 88 49 4d 00 	lea    0x4d4988(%rip),%r9        # 0x1808a1b90
   1803cd208:	4c 8d 05 71 94 4d 00 	lea    0x4d9471(%rip),%r8        # 0x1808a6680
   1803cd20f:	48 8d 15 1a 50 30 00 	lea    0x30501a(%rip),%rdx        # 0x1806d2230
   1803cd216:	48 8d 0d 63 8f 4d 00 	lea    0x4d8f63(%rip),%rcx        # 0x1808a6180
   1803cd21d:	e8 3e 53 ee ff       	call   0x1802b2560
   1803cd222:	49 8b de             	mov    %r14,%rbx
   1803cd225:	ff 05 19 46 d4 00    	incl   0xd44619(%rip)        # 0x181111844
   1803cd22b:	48 8d 3d be 48 4d 00 	lea    0x4d48be(%rip),%rdi        # 0x1808a1af0
   1803cd232:	4c 8b c7             	mov    %rdi,%r8
   1803cd235:	48 89 1d 84 48 59 00 	mov    %rbx,0x594884(%rip)        # 0x180961ac0
   1803cd23c:	45 33 c9             	xor    %r9d,%r9d
   1803cd23f:	48 8d 15 2a 2a 33 00 	lea    0x332a2a(%rip),%rdx        # 0x1806ffc70
   1803cd246:	48 8d 0d e3 4f 30 00 	lea    0x304fe3(%rip),%rcx        # 0x1806d2230
   1803cd24d:	e8 1e d1 ff ff       	call   0x1803ca370
   1803cd252:	48 8d 0d d7 4f 30 00 	lea    0x304fd7(%rip),%rcx        # 0x1806d2230
   1803cd259:	ff 15 21 df 19 00    	call   *0x19df21(%rip)        # 0x18056b180
   1803cd25f:	48 8b d8             	mov    %rax,%rbx
   1803cd262:	48 85 c0             	test   %rax,%rax
   1803cd265:	0f 84 a3 00 00 00    	je     0x1803cd30e
   1803cd26b:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803cd26e:	33 c0                	xor    %eax,%eax
   1803cd270:	0f 11 85 f0 01 00 00 	movups %xmm0,0x1f0(%rbp)
   1803cd277:	48 89 85 00 02 00 00 	mov    %rax,0x200(%rbp)
   1803cd27e:	ff 15 0c e0 19 00    	call   *0x19e00c(%rip)        # 0x18056b290
   1803cd284:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803cd28a:	4c 8d 85 f0 01 00 00 	lea    0x1f0(%rbp),%r8
   1803cd291:	48 8b c8             	mov    %rax,%rcx
   1803cd294:	48 8b d3             	mov    %rbx,%rdx
   1803cd297:	ff 15 fb df 19 00    	call   *0x19dffb(%rip)        # 0x18056b298
   1803cd29d:	85 c0                	test   %eax,%eax
   1803cd29f:	74 6d                	je     0x1803cd30e
   1803cd2a1:	48 8b 85 f0 01 00 00 	mov    0x1f0(%rbp),%rax
   1803cd2a8:	8b 8d f8 01 00 00    	mov    0x1f8(%rbp),%ecx
   1803cd2ae:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803cd2b3:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803cd2b8:	48 85 c0             	test   %rax,%rax
   1803cd2bb:	74 51                	je     0x1803cd30e
   1803cd2bd:	48 85 c9             	test   %rcx,%rcx
   1803cd2c0:	74 4c                	je     0x1803cd30e
   1803cd2c2:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803cd2c7:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803cd2cc:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803cd2d1:	48 c7 44 24 38 5d 00 	movq   $0x5d,0x38(%rsp)
   1803cd2d8:	00 00 
   1803cd2da:	e8 21 4b e0 ff       	call   0x1801d1e00
   1803cd2df:	48 8b d8             	mov    %rax,%rbx
   1803cd2e2:	48 85 c0             	test   %rax,%rax
   1803cd2e5:	75 0c                	jne    0x1803cd2f3
   1803cd2e7:	4c 8b cf             	mov    %rdi,%r9
   1803cd2ea:	48 8d 0d e7 8e 4d 00 	lea    0x4d8ee7(%rip),%rcx        # 0x1808a61d8
   1803cd2f1:	eb 29                	jmp    0x1803cd31c
   1803cd2f3:	4c 8b c8             	mov    %rax,%r9
   1803cd2f6:	48 8d 15 73 29 33 00 	lea    0x332973(%rip),%rdx        # 0x1806ffc70
   1803cd2fd:	4c 8b c7             	mov    %rdi,%r8
   1803cd300:	48 8d 0d 29 4f 30 00 	lea    0x304f29(%rip),%rcx        # 0x1806d2230
   1803cd307:	e8 64 d0 ff ff       	call   0x1803ca370
   1803cd30c:	eb 2a                	jmp    0x1803cd338
   1803cd30e:	4c 8d 0d 2e e3 1b 00 	lea    0x1be32e(%rip),%r9        # 0x18058b643
   1803cd315:	48 8d 0d e4 8e 4d 00 	lea    0x4d8ee4(%rip),%rcx        # 0x1808a6200
   1803cd31c:	ff 05 1e 45 d4 00    	incl   0xd4451e(%rip)        # 0x181111840
   1803cd322:	4c 8d 05 47 29 33 00 	lea    0x332947(%rip),%r8        # 0x1806ffc70
   1803cd329:	48 8d 15 00 4f 30 00 	lea    0x304f00(%rip),%rdx        # 0x1806d2230
   1803cd330:	e8 2b 52 ee ff       	call   0x1802b2560
   1803cd335:	49 8b de             	mov    %r14,%rbx
   1803cd338:	ff 05 06 45 d4 00    	incl   0xd44506(%rip)        # 0x181111844
   1803cd33e:	48 8d 3d 0b 47 4d 00 	lea    0x4d470b(%rip),%rdi        # 0x1808a1a50
   1803cd345:	4c 8b c7             	mov    %rdi,%r8
   1803cd348:	48 89 1d 79 47 59 00 	mov    %rbx,0x594779(%rip)        # 0x180961ac8
   1803cd34f:	45 33 c9             	xor    %r9d,%r9d
   1803cd352:	48 8d 15 0f 93 4d 00 	lea    0x4d930f(%rip),%rdx        # 0x1808a6668
   1803cd359:	48 8d 0d d0 4e 30 00 	lea    0x304ed0(%rip),%rcx        # 0x1806d2230
   1803cd360:	e8 0b d0 ff ff       	call   0x1803ca370
   1803cd365:	48 8d 0d c4 4e 30 00 	lea    0x304ec4(%rip),%rcx        # 0x1806d2230
   1803cd36c:	ff 15 0e de 19 00    	call   *0x19de0e(%rip)        # 0x18056b180
   1803cd372:	48 8b d8             	mov    %rax,%rbx
   1803cd375:	48 85 c0             	test   %rax,%rax
   1803cd378:	0f 84 a3 00 00 00    	je     0x1803cd421
   1803cd37e:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803cd381:	33 c0                	xor    %eax,%eax
   1803cd383:	0f 11 85 08 02 00 00 	movups %xmm0,0x208(%rbp)
   1803cd38a:	48 89 85 18 02 00 00 	mov    %rax,0x218(%rbp)
   1803cd391:	ff 15 f9 de 19 00    	call   *0x19def9(%rip)        # 0x18056b290
   1803cd397:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803cd39d:	4c 8d 85 08 02 00 00 	lea    0x208(%rbp),%r8
   1803cd3a4:	48 8b c8             	mov    %rax,%rcx
   1803cd3a7:	48 8b d3             	mov    %rbx,%rdx
   1803cd3aa:	ff 15 e8 de 19 00    	call   *0x19dee8(%rip)        # 0x18056b298
   1803cd3b0:	85 c0                	test   %eax,%eax
   1803cd3b2:	74 6d                	je     0x1803cd421
   1803cd3b4:	48 8b 85 08 02 00 00 	mov    0x208(%rbp),%rax
   1803cd3bb:	8b 8d 10 02 00 00    	mov    0x210(%rbp),%ecx
   1803cd3c1:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803cd3c6:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803cd3cb:	48 85 c0             	test   %rax,%rax
   1803cd3ce:	74 51                	je     0x1803cd421
   1803cd3d0:	48 85 c9             	test   %rcx,%rcx
   1803cd3d3:	74 4c                	je     0x1803cd421
   1803cd3d5:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803cd3da:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803cd3df:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803cd3e4:	48 c7 44 24 38 91 00 	movq   $0x91,0x38(%rsp)
   1803cd3eb:	00 00 
   1803cd3ed:	e8 0e 4a e0 ff       	call   0x1801d1e00
   1803cd3f2:	48 8b d8             	mov    %rax,%rbx
   1803cd3f5:	48 85 c0             	test   %rax,%rax
   1803cd3f8:	75 0c                	jne    0x1803cd406
   1803cd3fa:	4c 8b cf             	mov    %rdi,%r9
   1803cd3fd:	48 8d 0d d4 8d 4d 00 	lea    0x4d8dd4(%rip),%rcx        # 0x1808a61d8
   1803cd404:	eb 29                	jmp    0x1803cd42f
   1803cd406:	4c 8b c8             	mov    %rax,%r9
   1803cd409:	48 8d 15 58 92 4d 00 	lea    0x4d9258(%rip),%rdx        # 0x1808a6668
   1803cd410:	4c 8b c7             	mov    %rdi,%r8
   1803cd413:	48 8d 0d 16 4e 30 00 	lea    0x304e16(%rip),%rcx        # 0x1806d2230
   1803cd41a:	e8 51 cf ff ff       	call   0x1803ca370
   1803cd41f:	eb 2a                	jmp    0x1803cd44b
   1803cd421:	4c 8d 0d 1b e2 1b 00 	lea    0x1be21b(%rip),%r9        # 0x18058b643
   1803cd428:	48 8d 0d d1 8d 4d 00 	lea    0x4d8dd1(%rip),%rcx        # 0x1808a6200
   1803cd42f:	ff 05 0b 44 d4 00    	incl   0xd4440b(%rip)        # 0x181111840
   1803cd435:	4c 8d 05 2c 92 4d 00 	lea    0x4d922c(%rip),%r8        # 0x1808a6668
   1803cd43c:	48 8d 15 ed 4d 30 00 	lea    0x304ded(%rip),%rdx        # 0x1806d2230
   1803cd443:	e8 18 51 ee ff       	call   0x1802b2560
   1803cd448:	49 8b de             	mov    %r14,%rbx
   1803cd44b:	4c 8d 05 be 45 4d 00 	lea    0x4d45be(%rip),%r8        # 0x1808a1a10
   1803cd452:	48 89 1d 77 46 59 00 	mov    %rbx,0x594677(%rip)        # 0x180961ad0
   1803cd459:	48 8d 15 f0 91 4d 00 	lea    0x4d91f0(%rip),%rdx        # 0x1808a6650
   1803cd460:	48 8d 0d c9 4d 30 00 	lea    0x304dc9(%rip),%rcx        # 0x1806d2230
   1803cd467:	e8 64 d1 ff ff       	call   0x1803ca5d0
   1803cd46c:	48 8b d8             	mov    %rax,%rbx
   1803cd46f:	48 85 c0             	test   %rax,%rax
   1803cd472:	0f 84 92 00 00 00    	je     0x1803cd50a
   1803cd478:	48 05 00 00 ff ff    	add    $0xffffffffffff0000,%rax
   1803cd47e:	49 3b c7             	cmp    %r15,%rax
   1803cd481:	77 43                	ja     0x1803cd4c6
   1803cd483:	48 8b cb             	mov    %rbx,%rcx
   1803cd486:	e8 95 3d c4 ff       	call   0x180011220
   1803cd48b:	3c e8                	cmp    $0xe8,%al
   1803cd48d:	75 37                	jne    0x1803cd4c6
   1803cd48f:	48 8d 4b 01          	lea    0x1(%rbx),%rcx
   1803cd493:	e8 68 3d c4 ff       	call   0x180011200
   1803cd498:	48 63 c8             	movslq %eax,%rcx
   1803cd49b:	4c 8d 05 6e 45 4d 00 	lea    0x4d456e(%rip),%r8        # 0x1808a1a10
   1803cd4a2:	48 83 c3 05          	add    $0x5,%rbx
   1803cd4a6:	48 8d 15 a3 91 4d 00 	lea    0x4d91a3(%rip),%rdx        # 0x1808a6650
   1803cd4ad:	48 03 d9             	add    %rcx,%rbx
   1803cd4b0:	48 8d 0d 79 4d 30 00 	lea    0x304d79(%rip),%rcx        # 0x1806d2230
   1803cd4b7:	4c 8b cb             	mov    %rbx,%r9
   1803cd4ba:	e8 b1 ce ff ff       	call   0x1803ca370
   1803cd4bf:	48 85 db             	test   %rbx,%rbx
   1803cd4c2:	74 1f                	je     0x1803cd4e3
   1803cd4c4:	eb 47                	jmp    0x1803cd50d
   1803cd4c6:	45 33 c9             	xor    %r9d,%r9d
   1803cd4c9:	4c 8d 05 40 45 4d 00 	lea    0x4d4540(%rip),%r8        # 0x1808a1a10
   1803cd4d0:	48 8d 15 79 91 4d 00 	lea    0x4d9179(%rip),%rdx        # 0x1808a6650
   1803cd4d7:	48 8d 0d 52 4d 30 00 	lea    0x304d52(%rip),%rcx        # 0x1806d2230
   1803cd4de:	e8 8d ce ff ff       	call   0x1803ca370
   1803cd4e3:	ff 05 57 43 d4 00    	incl   0xd44357(%rip)        # 0x181111840
   1803cd4e9:	4c 8d 0d 20 45 4d 00 	lea    0x4d4520(%rip),%r9        # 0x1808a1a10
   1803cd4f0:	4c 8d 05 59 91 4d 00 	lea    0x4d9159(%rip),%r8        # 0x1808a6650
   1803cd4f7:	48 8d 15 32 4d 30 00 	lea    0x304d32(%rip),%rdx        # 0x1806d2230
   1803cd4fe:	48 8d 0d ab 8c 4d 00 	lea    0x4d8cab(%rip),%rcx        # 0x1808a61b0
   1803cd505:	e8 56 50 ee ff       	call   0x1802b2560
   1803cd50a:	49 8b de             	mov    %r14,%rbx
   1803cd50d:	ff 05 31 43 d4 00    	incl   0xd44331(%rip)        # 0x181111844
   1803cd513:	48 8d 3d 66 49 4d 00 	lea    0x4d4966(%rip),%rdi        # 0x1808a1e80
   1803cd51a:	4c 8b c7             	mov    %rdi,%r8
   1803cd51d:	48 89 1d b4 45 59 00 	mov    %rbx,0x5945b4(%rip)        # 0x180961ad8
   1803cd524:	45 33 c9             	xor    %r9d,%r9d
   1803cd527:	48 8d 15 0a 91 4d 00 	lea    0x4d910a(%rip),%rdx        # 0x1808a6638
   1803cd52e:	48 8d 0d fb 4c 30 00 	lea    0x304cfb(%rip),%rcx        # 0x1806d2230
   1803cd535:	e8 36 ce ff ff       	call   0x1803ca370
   1803cd53a:	48 8d 0d ef 4c 30 00 	lea    0x304cef(%rip),%rcx        # 0x1806d2230
   1803cd541:	ff 15 39 dc 19 00    	call   *0x19dc39(%rip)        # 0x18056b180
   1803cd547:	48 8b d8             	mov    %rax,%rbx
   1803cd54a:	48 85 c0             	test   %rax,%rax
   1803cd54d:	0f 84 a3 00 00 00    	je     0x1803cd5f6
   1803cd553:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803cd556:	33 c0                	xor    %eax,%eax
   1803cd558:	0f 11 85 20 02 00 00 	movups %xmm0,0x220(%rbp)
   1803cd55f:	48 89 85 30 02 00 00 	mov    %rax,0x230(%rbp)
   1803cd566:	ff 15 24 dd 19 00    	call   *0x19dd24(%rip)        # 0x18056b290
   1803cd56c:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803cd572:	4c 8d 85 20 02 00 00 	lea    0x220(%rbp),%r8
   1803cd579:	48 8b c8             	mov    %rax,%rcx
   1803cd57c:	48 8b d3             	mov    %rbx,%rdx
   1803cd57f:	ff 15 13 dd 19 00    	call   *0x19dd13(%rip)        # 0x18056b298
   1803cd585:	85 c0                	test   %eax,%eax
   1803cd587:	74 6d                	je     0x1803cd5f6
   1803cd589:	48 8b 85 20 02 00 00 	mov    0x220(%rbp),%rax
   1803cd590:	8b 8d 28 02 00 00    	mov    0x228(%rbp),%ecx
   1803cd596:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803cd59b:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803cd5a0:	48 85 c0             	test   %rax,%rax
   1803cd5a3:	74 51                	je     0x1803cd5f6
   1803cd5a5:	48 85 c9             	test   %rcx,%rcx
   1803cd5a8:	74 4c                	je     0x1803cd5f6
   1803cd5aa:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803cd5af:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803cd5b4:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803cd5b9:	48 c7 44 24 38 7c 00 	movq   $0x7c,0x38(%rsp)
   1803cd5c0:	00 00 
   1803cd5c2:	e8 39 48 e0 ff       	call   0x1801d1e00
   1803cd5c7:	48 8b d8             	mov    %rax,%rbx
   1803cd5ca:	48 85 c0             	test   %rax,%rax
   1803cd5cd:	75 0c                	jne    0x1803cd5db
   1803cd5cf:	4c 8b cf             	mov    %rdi,%r9
   1803cd5d2:	48 8d 0d ff 8b 4d 00 	lea    0x4d8bff(%rip),%rcx        # 0x1808a61d8
   1803cd5d9:	eb 29                	jmp    0x1803cd604
   1803cd5db:	4c 8b c8             	mov    %rax,%r9
   1803cd5de:	48 8d 15 53 90 4d 00 	lea    0x4d9053(%rip),%rdx        # 0x1808a6638
   1803cd5e5:	4c 8b c7             	mov    %rdi,%r8
   1803cd5e8:	48 8d 0d 41 4c 30 00 	lea    0x304c41(%rip),%rcx        # 0x1806d2230
   1803cd5ef:	e8 7c cd ff ff       	call   0x1803ca370
   1803cd5f4:	eb 2a                	jmp    0x1803cd620
   1803cd5f6:	4c 8d 0d 46 e0 1b 00 	lea    0x1be046(%rip),%r9        # 0x18058b643
   1803cd5fd:	48 8d 0d fc 8b 4d 00 	lea    0x4d8bfc(%rip),%rcx        # 0x1808a6200
   1803cd604:	ff 05 36 42 d4 00    	incl   0xd44236(%rip)        # 0x181111840
   1803cd60a:	4c 8d 05 27 90 4d 00 	lea    0x4d9027(%rip),%r8        # 0x1808a6638
   1803cd611:	48 8d 15 18 4c 30 00 	lea    0x304c18(%rip),%rdx        # 0x1806d2230
   1803cd618:	e8 43 4f ee ff       	call   0x1802b2560
   1803cd61d:	49 8b de             	mov    %r14,%rbx
   1803cd620:	ff 05 1e 42 d4 00    	incl   0xd4421e(%rip)        # 0x181111844
   1803cd626:	48 8d 3d f3 47 4d 00 	lea    0x4d47f3(%rip),%rdi        # 0x1808a1e20
   1803cd62d:	4c 8b c7             	mov    %rdi,%r8
   1803cd630:	48 89 1d a9 44 59 00 	mov    %rbx,0x5944a9(%rip)        # 0x180961ae0
   1803cd637:	45 33 c9             	xor    %r9d,%r9d
   1803cd63a:	48 8d 15 3f 91 4d 00 	lea    0x4d913f(%rip),%rdx        # 0x1808a6780
   1803cd641:	48 8d 0d e8 4b 30 00 	lea    0x304be8(%rip),%rcx        # 0x1806d2230
   1803cd648:	e8 23 cd ff ff       	call   0x1803ca370
   1803cd64d:	48 8d 0d dc 4b 30 00 	lea    0x304bdc(%rip),%rcx        # 0x1806d2230
   1803cd654:	ff 15 26 db 19 00    	call   *0x19db26(%rip)        # 0x18056b180
   1803cd65a:	48 8b d8             	mov    %rax,%rbx
   1803cd65d:	48 85 c0             	test   %rax,%rax
   1803cd660:	0f 84 a3 00 00 00    	je     0x1803cd709
   1803cd666:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803cd669:	33 c0                	xor    %eax,%eax
   1803cd66b:	0f 11 85 38 02 00 00 	movups %xmm0,0x238(%rbp)
   1803cd672:	48 89 85 48 02 00 00 	mov    %rax,0x248(%rbp)
   1803cd679:	ff 15 11 dc 19 00    	call   *0x19dc11(%rip)        # 0x18056b290
   1803cd67f:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803cd685:	4c 8d 85 38 02 00 00 	lea    0x238(%rbp),%r8
   1803cd68c:	48 8b c8             	mov    %rax,%rcx
   1803cd68f:	48 8b d3             	mov    %rbx,%rdx
   1803cd692:	ff 15 00 dc 19 00    	call   *0x19dc00(%rip)        # 0x18056b298
   1803cd698:	85 c0                	test   %eax,%eax
   1803cd69a:	74 6d                	je     0x1803cd709
   1803cd69c:	48 8b 85 38 02 00 00 	mov    0x238(%rbp),%rax
   1803cd6a3:	8b 8d 40 02 00 00    	mov    0x240(%rbp),%ecx
   1803cd6a9:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803cd6ae:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803cd6b3:	48 85 c0             	test   %rax,%rax
   1803cd6b6:	74 51                	je     0x1803cd709
   1803cd6b8:	48 85 c9             	test   %rcx,%rcx
   1803cd6bb:	74 4c                	je     0x1803cd709
   1803cd6bd:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803cd6c2:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803cd6c7:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803cd6cc:	48 c7 44 24 38 5f 00 	movq   $0x5f,0x38(%rsp)
   1803cd6d3:	00 00 
   1803cd6d5:	e8 26 47 e0 ff       	call   0x1801d1e00
   1803cd6da:	48 8b d8             	mov    %rax,%rbx
   1803cd6dd:	48 85 c0             	test   %rax,%rax
   1803cd6e0:	75 0c                	jne    0x1803cd6ee
   1803cd6e2:	4c 8b cf             	mov    %rdi,%r9
   1803cd6e5:	48 8d 0d ec 8a 4d 00 	lea    0x4d8aec(%rip),%rcx        # 0x1808a61d8
   1803cd6ec:	eb 29                	jmp    0x1803cd717
   1803cd6ee:	4c 8b c8             	mov    %rax,%r9
   1803cd6f1:	48 8d 15 88 90 4d 00 	lea    0x4d9088(%rip),%rdx        # 0x1808a6780
   1803cd6f8:	4c 8b c7             	mov    %rdi,%r8
   1803cd6fb:	48 8d 0d 2e 4b 30 00 	lea    0x304b2e(%rip),%rcx        # 0x1806d2230
   1803cd702:	e8 69 cc ff ff       	call   0x1803ca370
   1803cd707:	eb 2a                	jmp    0x1803cd733
   1803cd709:	4c 8d 0d 33 df 1b 00 	lea    0x1bdf33(%rip),%r9        # 0x18058b643
   1803cd710:	48 8d 0d e9 8a 4d 00 	lea    0x4d8ae9(%rip),%rcx        # 0x1808a6200
   1803cd717:	ff 05 23 41 d4 00    	incl   0xd44123(%rip)        # 0x181111840
   1803cd71d:	4c 8d 05 5c 90 4d 00 	lea    0x4d905c(%rip),%r8        # 0x1808a6780
   1803cd724:	48 8d 15 05 4b 30 00 	lea    0x304b05(%rip),%rdx        # 0x1806d2230
   1803cd72b:	e8 30 4e ee ff       	call   0x1802b2560
   1803cd730:	49 8b de             	mov    %r14,%rbx
   1803cd733:	ff 05 0b 41 d4 00    	incl   0xd4410b(%rip)        # 0x181111844
   1803cd739:	48 8d 3d 80 46 4d 00 	lea    0x4d4680(%rip),%rdi        # 0x1808a1dc0
   1803cd740:	4c 8b c7             	mov    %rdi,%r8
   1803cd743:	48 89 1d 9e 43 59 00 	mov    %rbx,0x59439e(%rip)        # 0x180961ae8
   1803cd74a:	45 33 c9             	xor    %r9d,%r9d
   1803cd74d:	48 8d 15 14 90 4d 00 	lea    0x4d9014(%rip),%rdx        # 0x1808a6768
   1803cd754:	48 8d 0d d5 4a 30 00 	lea    0x304ad5(%rip),%rcx        # 0x1806d2230
   1803cd75b:	e8 10 cc ff ff       	call   0x1803ca370
   1803cd760:	48 8d 0d c9 4a 30 00 	lea    0x304ac9(%rip),%rcx        # 0x1806d2230
   1803cd767:	ff 15 13 da 19 00    	call   *0x19da13(%rip)        # 0x18056b180
   1803cd76d:	48 8b d8             	mov    %rax,%rbx
   1803cd770:	48 85 c0             	test   %rax,%rax
   1803cd773:	0f 84 a3 00 00 00    	je     0x1803cd81c
   1803cd779:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803cd77c:	33 c0                	xor    %eax,%eax
   1803cd77e:	0f 11 85 50 02 00 00 	movups %xmm0,0x250(%rbp)
   1803cd785:	48 89 85 60 02 00 00 	mov    %rax,0x260(%rbp)
   1803cd78c:	ff 15 fe da 19 00    	call   *0x19dafe(%rip)        # 0x18056b290
   1803cd792:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803cd798:	4c 8d 85 50 02 00 00 	lea    0x250(%rbp),%r8
   1803cd79f:	48 8b c8             	mov    %rax,%rcx
   1803cd7a2:	48 8b d3             	mov    %rbx,%rdx
   1803cd7a5:	ff 15 ed da 19 00    	call   *0x19daed(%rip)        # 0x18056b298
   1803cd7ab:	85 c0                	test   %eax,%eax
   1803cd7ad:	74 6d                	je     0x1803cd81c
   1803cd7af:	48 8b 85 50 02 00 00 	mov    0x250(%rbp),%rax
   1803cd7b6:	8b 8d 58 02 00 00    	mov    0x258(%rbp),%ecx
   1803cd7bc:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803cd7c1:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803cd7c6:	48 85 c0             	test   %rax,%rax
   1803cd7c9:	74 51                	je     0x1803cd81c
   1803cd7cb:	48 85 c9             	test   %rcx,%rcx
   1803cd7ce:	74 4c                	je     0x1803cd81c
   1803cd7d0:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803cd7d5:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803cd7da:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803cd7df:	48 c7 44 24 38 5f 00 	movq   $0x5f,0x38(%rsp)
   1803cd7e6:	00 00 
   1803cd7e8:	e8 13 46 e0 ff       	call   0x1801d1e00
   1803cd7ed:	48 8b d8             	mov    %rax,%rbx
   1803cd7f0:	48 85 c0             	test   %rax,%rax
   1803cd7f3:	75 0c                	jne    0x1803cd801
   1803cd7f5:	4c 8b cf             	mov    %rdi,%r9
   1803cd7f8:	48 8d 0d d9 89 4d 00 	lea    0x4d89d9(%rip),%rcx        # 0x1808a61d8
   1803cd7ff:	eb 29                	jmp    0x1803cd82a
   1803cd801:	4c 8b c8             	mov    %rax,%r9
   1803cd804:	48 8d 15 5d 8f 4d 00 	lea    0x4d8f5d(%rip),%rdx        # 0x1808a6768
   1803cd80b:	4c 8b c7             	mov    %rdi,%r8
   1803cd80e:	48 8d 0d 1b 4a 30 00 	lea    0x304a1b(%rip),%rcx        # 0x1806d2230
   1803cd815:	e8 56 cb ff ff       	call   0x1803ca370
   1803cd81a:	eb 2a                	jmp    0x1803cd846
   1803cd81c:	4c 8d 0d 20 de 1b 00 	lea    0x1bde20(%rip),%r9        # 0x18058b643
   1803cd823:	48 8d 0d d6 89 4d 00 	lea    0x4d89d6(%rip),%rcx        # 0x1808a6200
   1803cd82a:	ff 05 10 40 d4 00    	incl   0xd44010(%rip)        # 0x181111840
   1803cd830:	4c 8d 05 31 8f 4d 00 	lea    0x4d8f31(%rip),%r8        # 0x1808a6768
   1803cd837:	48 8d 15 f2 49 30 00 	lea    0x3049f2(%rip),%rdx        # 0x1806d2230
   1803cd83e:	e8 1d 4d ee ff       	call   0x1802b2560
   1803cd843:	49 8b de             	mov    %r14,%rbx
   1803cd846:	ff 05 f8 3f d4 00    	incl   0xd43ff8(%rip)        # 0x181111844
   1803cd84c:	48 8d 3d 3d 45 4d 00 	lea    0x4d453d(%rip),%rdi        # 0x1808a1d90
   1803cd853:	4c 8b c7             	mov    %rdi,%r8
   1803cd856:	48 89 1d 93 42 59 00 	mov    %rbx,0x594293(%rip)        # 0x180961af0
   1803cd85d:	45 33 c9             	xor    %r9d,%r9d
   1803cd860:	48 8d 15 49 22 33 00 	lea    0x332249(%rip),%rdx        # 0x1806ffab0
   1803cd867:	48 8d 0d c2 49 30 00 	lea    0x3049c2(%rip),%rcx        # 0x1806d2230
   1803cd86e:	e8 fd ca ff ff       	call   0x1803ca370
   1803cd873:	48 8d 0d b6 49 30 00 	lea    0x3049b6(%rip),%rcx        # 0x1806d2230
   1803cd87a:	ff 15 00 d9 19 00    	call   *0x19d900(%rip)        # 0x18056b180
   1803cd880:	48 8b d8             	mov    %rax,%rbx
   1803cd883:	48 85 c0             	test   %rax,%rax
   1803cd886:	0f 84 a3 00 00 00    	je     0x1803cd92f
   1803cd88c:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803cd88f:	33 c0                	xor    %eax,%eax
   1803cd891:	0f 11 85 68 02 00 00 	movups %xmm0,0x268(%rbp)
   1803cd898:	48 89 85 78 02 00 00 	mov    %rax,0x278(%rbp)
   1803cd89f:	ff 15 eb d9 19 00    	call   *0x19d9eb(%rip)        # 0x18056b290
   1803cd8a5:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803cd8ab:	4c 8d 85 68 02 00 00 	lea    0x268(%rbp),%r8
   1803cd8b2:	48 8b c8             	mov    %rax,%rcx
   1803cd8b5:	48 8b d3             	mov    %rbx,%rdx
   1803cd8b8:	ff 15 da d9 19 00    	call   *0x19d9da(%rip)        # 0x18056b298
   1803cd8be:	85 c0                	test   %eax,%eax
   1803cd8c0:	74 6d                	je     0x1803cd92f
   1803cd8c2:	48 8b 85 68 02 00 00 	mov    0x268(%rbp),%rax
   1803cd8c9:	8b 8d 70 02 00 00    	mov    0x270(%rbp),%ecx
   1803cd8cf:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803cd8d4:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803cd8d9:	48 85 c0             	test   %rax,%rax
   1803cd8dc:	74 51                	je     0x1803cd92f
   1803cd8de:	48 85 c9             	test   %rcx,%rcx
   1803cd8e1:	74 4c                	je     0x1803cd92f
   1803cd8e3:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803cd8e8:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803cd8ed:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803cd8f2:	48 c7 44 24 38 2f 00 	movq   $0x2f,0x38(%rsp)
   1803cd8f9:	00 00 
   1803cd8fb:	e8 00 45 e0 ff       	call   0x1801d1e00
   1803cd900:	48 8b d8             	mov    %rax,%rbx
   1803cd903:	48 85 c0             	test   %rax,%rax
   1803cd906:	75 0c                	jne    0x1803cd914
   1803cd908:	4c 8b cf             	mov    %rdi,%r9
   1803cd90b:	48 8d 0d c6 88 4d 00 	lea    0x4d88c6(%rip),%rcx        # 0x1808a61d8
   1803cd912:	eb 29                	jmp    0x1803cd93d
   1803cd914:	4c 8b c8             	mov    %rax,%r9
   1803cd917:	48 8d 15 92 21 33 00 	lea    0x332192(%rip),%rdx        # 0x1806ffab0
   1803cd91e:	4c 8b c7             	mov    %rdi,%r8
   1803cd921:	48 8d 0d 08 49 30 00 	lea    0x304908(%rip),%rcx        # 0x1806d2230
   1803cd928:	e8 43 ca ff ff       	call   0x1803ca370
   1803cd92d:	eb 2a                	jmp    0x1803cd959
   1803cd92f:	4c 8d 0d 0d dd 1b 00 	lea    0x1bdd0d(%rip),%r9        # 0x18058b643
   1803cd936:	48 8d 0d c3 88 4d 00 	lea    0x4d88c3(%rip),%rcx        # 0x1808a6200
   1803cd93d:	ff 05 fd 3e d4 00    	incl   0xd43efd(%rip)        # 0x181111840
   1803cd943:	4c 8d 05 66 21 33 00 	lea    0x332166(%rip),%r8        # 0x1806ffab0
   1803cd94a:	48 8d 15 df 48 30 00 	lea    0x3048df(%rip),%rdx        # 0x1806d2230
   1803cd951:	e8 0a 4c ee ff       	call   0x1802b2560
   1803cd956:	49 8b de             	mov    %r14,%rbx
   1803cd959:	ff 05 e5 3e d4 00    	incl   0xd43ee5(%rip)        # 0x181111844
   1803cd95f:	48 8d 3d ea 43 4d 00 	lea    0x4d43ea(%rip),%rdi        # 0x1808a1d50
   1803cd966:	4c 8b c7             	mov    %rdi,%r8
   1803cd969:	48 89 1d 88 41 59 00 	mov    %rbx,0x594188(%rip)        # 0x180961af8
   1803cd970:	45 33 c9             	xor    %r9d,%r9d
   1803cd973:	48 8d 15 76 21 33 00 	lea    0x332176(%rip),%rdx        # 0x1806ffaf0
   1803cd97a:	48 8d 0d af 48 30 00 	lea    0x3048af(%rip),%rcx        # 0x1806d2230
   1803cd981:	e8 ea c9 ff ff       	call   0x1803ca370
   1803cd986:	48 8d 0d a3 48 30 00 	lea    0x3048a3(%rip),%rcx        # 0x1806d2230
   1803cd98d:	ff 15 ed d7 19 00    	call   *0x19d7ed(%rip)        # 0x18056b180
   1803cd993:	48 8b d8             	mov    %rax,%rbx
   1803cd996:	48 85 c0             	test   %rax,%rax
   1803cd999:	0f 84 a3 00 00 00    	je     0x1803cda42
   1803cd99f:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803cd9a2:	33 c0                	xor    %eax,%eax
   1803cd9a4:	0f 11 85 80 02 00 00 	movups %xmm0,0x280(%rbp)
   1803cd9ab:	48 89 85 90 02 00 00 	mov    %rax,0x290(%rbp)
   1803cd9b2:	ff 15 d8 d8 19 00    	call   *0x19d8d8(%rip)        # 0x18056b290
   1803cd9b8:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803cd9be:	4c 8d 85 80 02 00 00 	lea    0x280(%rbp),%r8
   1803cd9c5:	48 8b c8             	mov    %rax,%rcx
   1803cd9c8:	48 8b d3             	mov    %rbx,%rdx
   1803cd9cb:	ff 15 c7 d8 19 00    	call   *0x19d8c7(%rip)        # 0x18056b298
   1803cd9d1:	85 c0                	test   %eax,%eax
   1803cd9d3:	74 6d                	je     0x1803cda42
   1803cd9d5:	48 8b 85 80 02 00 00 	mov    0x280(%rbp),%rax
   1803cd9dc:	8b 8d 88 02 00 00    	mov    0x288(%rbp),%ecx
   1803cd9e2:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803cd9e7:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803cd9ec:	48 85 c0             	test   %rax,%rax
   1803cd9ef:	74 51                	je     0x1803cda42
   1803cd9f1:	48 85 c9             	test   %rcx,%rcx
   1803cd9f4:	74 4c                	je     0x1803cda42
   1803cd9f6:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803cd9fb:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803cda00:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803cda05:	48 c7 44 24 38 3a 00 	movq   $0x3a,0x38(%rsp)
   1803cda0c:	00 00 
   1803cda0e:	e8 ed 43 e0 ff       	call   0x1801d1e00
   1803cda13:	48 8b d8             	mov    %rax,%rbx
   1803cda16:	48 85 c0             	test   %rax,%rax
   1803cda19:	75 0c                	jne    0x1803cda27
   1803cda1b:	4c 8b cf             	mov    %rdi,%r9
   1803cda1e:	48 8d 0d b3 87 4d 00 	lea    0x4d87b3(%rip),%rcx        # 0x1808a61d8
   1803cda25:	eb 29                	jmp    0x1803cda50
   1803cda27:	4c 8b c8             	mov    %rax,%r9
   1803cda2a:	48 8d 15 bf 20 33 00 	lea    0x3320bf(%rip),%rdx        # 0x1806ffaf0
   1803cda31:	4c 8b c7             	mov    %rdi,%r8
   1803cda34:	48 8d 0d f5 47 30 00 	lea    0x3047f5(%rip),%rcx        # 0x1806d2230
   1803cda3b:	e8 30 c9 ff ff       	call   0x1803ca370
   1803cda40:	eb 2a                	jmp    0x1803cda6c
   1803cda42:	4c 8d 0d fa db 1b 00 	lea    0x1bdbfa(%rip),%r9        # 0x18058b643
   1803cda49:	48 8d 0d b0 87 4d 00 	lea    0x4d87b0(%rip),%rcx        # 0x1808a6200
   1803cda50:	ff 05 ea 3d d4 00    	incl   0xd43dea(%rip)        # 0x181111840
   1803cda56:	4c 8d 05 93 20 33 00 	lea    0x332093(%rip),%r8        # 0x1806ffaf0
   1803cda5d:	48 8d 15 cc 47 30 00 	lea    0x3047cc(%rip),%rdx        # 0x1806d2230
   1803cda64:	e8 f7 4a ee ff       	call   0x1802b2560
   1803cda69:	49 8b de             	mov    %r14,%rbx
   1803cda6c:	ff 05 d2 3d d4 00    	incl   0xd43dd2(%rip)        # 0x181111844
   1803cda72:	48 8d 3d 9f 42 4d 00 	lea    0x4d429f(%rip),%rdi        # 0x1808a1d18
   1803cda79:	4c 8b c7             	mov    %rdi,%r8
   1803cda7c:	48 89 1d 7d 40 59 00 	mov    %rbx,0x59407d(%rip)        # 0x180961b00
   1803cda83:	45 33 c9             	xor    %r9d,%r9d
   1803cda86:	48 8d 15 cb 8c 4d 00 	lea    0x4d8ccb(%rip),%rdx        # 0x1808a6758
   1803cda8d:	48 8d 0d 9c 47 30 00 	lea    0x30479c(%rip),%rcx        # 0x1806d2230
   1803cda94:	e8 d7 c8 ff ff       	call   0x1803ca370
   1803cda99:	48 8d 0d 90 47 30 00 	lea    0x304790(%rip),%rcx        # 0x1806d2230
   1803cdaa0:	ff 15 da d6 19 00    	call   *0x19d6da(%rip)        # 0x18056b180
   1803cdaa6:	48 8b d8             	mov    %rax,%rbx
   1803cdaa9:	48 85 c0             	test   %rax,%rax
   1803cdaac:	0f 84 a3 00 00 00    	je     0x1803cdb55
   1803cdab2:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803cdab5:	33 c0                	xor    %eax,%eax
   1803cdab7:	0f 11 85 98 02 00 00 	movups %xmm0,0x298(%rbp)
   1803cdabe:	48 89 85 a8 02 00 00 	mov    %rax,0x2a8(%rbp)
   1803cdac5:	ff 15 c5 d7 19 00    	call   *0x19d7c5(%rip)        # 0x18056b290
   1803cdacb:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803cdad1:	4c 8d 85 98 02 00 00 	lea    0x298(%rbp),%r8
   1803cdad8:	48 8b c8             	mov    %rax,%rcx
   1803cdadb:	48 8b d3             	mov    %rbx,%rdx
   1803cdade:	ff 15 b4 d7 19 00    	call   *0x19d7b4(%rip)        # 0x18056b298
   1803cdae4:	85 c0                	test   %eax,%eax
   1803cdae6:	74 6d                	je     0x1803cdb55
   1803cdae8:	48 8b 85 98 02 00 00 	mov    0x298(%rbp),%rax
   1803cdaef:	8b 8d a0 02 00 00    	mov    0x2a0(%rbp),%ecx
   1803cdaf5:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803cdafa:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803cdaff:	48 85 c0             	test   %rax,%rax
   1803cdb02:	74 51                	je     0x1803cdb55
   1803cdb04:	48 85 c9             	test   %rcx,%rcx
   1803cdb07:	74 4c                	je     0x1803cdb55
   1803cdb09:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803cdb0e:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803cdb13:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803cdb18:	48 c7 44 24 38 34 00 	movq   $0x34,0x38(%rsp)
   1803cdb1f:	00 00 
   1803cdb21:	e8 da 42 e0 ff       	call   0x1801d1e00
   1803cdb26:	48 8b d8             	mov    %rax,%rbx
   1803cdb29:	48 85 c0             	test   %rax,%rax
   1803cdb2c:	75 0c                	jne    0x1803cdb3a
   1803cdb2e:	4c 8b cf             	mov    %rdi,%r9
   1803cdb31:	48 8d 0d a0 86 4d 00 	lea    0x4d86a0(%rip),%rcx        # 0x1808a61d8
   1803cdb38:	eb 29                	jmp    0x1803cdb63
   1803cdb3a:	4c 8b c8             	mov    %rax,%r9
   1803cdb3d:	48 8d 15 14 8c 4d 00 	lea    0x4d8c14(%rip),%rdx        # 0x1808a6758
   1803cdb44:	4c 8b c7             	mov    %rdi,%r8
   1803cdb47:	48 8d 0d e2 46 30 00 	lea    0x3046e2(%rip),%rcx        # 0x1806d2230
   1803cdb4e:	e8 1d c8 ff ff       	call   0x1803ca370
   1803cdb53:	eb 2a                	jmp    0x1803cdb7f
   1803cdb55:	4c 8d 0d e7 da 1b 00 	lea    0x1bdae7(%rip),%r9        # 0x18058b643
   1803cdb5c:	48 8d 0d 9d 86 4d 00 	lea    0x4d869d(%rip),%rcx        # 0x1808a6200
   1803cdb63:	ff 05 d7 3c d4 00    	incl   0xd43cd7(%rip)        # 0x181111840
   1803cdb69:	4c 8d 05 e8 8b 4d 00 	lea    0x4d8be8(%rip),%r8        # 0x1808a6758
   1803cdb70:	48 8d 15 b9 46 30 00 	lea    0x3046b9(%rip),%rdx        # 0x1806d2230
   1803cdb77:	e8 e4 49 ee ff       	call   0x1802b2560
   1803cdb7c:	49 8b de             	mov    %r14,%rbx
   1803cdb7f:	ff 05 bf 3c d4 00    	incl   0xd43cbf(%rip)        # 0x181111844
   1803cdb85:	48 8d 3d 54 41 4d 00 	lea    0x4d4154(%rip),%rdi        # 0x1808a1ce0
   1803cdb8c:	4c 8b c7             	mov    %rdi,%r8
   1803cdb8f:	48 89 1d 72 3f 59 00 	mov    %rbx,0x593f72(%rip)        # 0x180961b08
   1803cdb96:	45 33 c9             	xor    %r9d,%r9d
   1803cdb99:	48 8d 15 a8 8b 4d 00 	lea    0x4d8ba8(%rip),%rdx        # 0x1808a6748
   1803cdba0:	48 8d 0d 89 46 30 00 	lea    0x304689(%rip),%rcx        # 0x1806d2230
   1803cdba7:	e8 c4 c7 ff ff       	call   0x1803ca370
   1803cdbac:	48 8d 0d 7d 46 30 00 	lea    0x30467d(%rip),%rcx        # 0x1806d2230
   1803cdbb3:	ff 15 c7 d5 19 00    	call   *0x19d5c7(%rip)        # 0x18056b180
   1803cdbb9:	48 8b d8             	mov    %rax,%rbx
   1803cdbbc:	48 85 c0             	test   %rax,%rax
   1803cdbbf:	0f 84 a3 00 00 00    	je     0x1803cdc68
   1803cdbc5:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803cdbc8:	33 c0                	xor    %eax,%eax
   1803cdbca:	0f 11 85 b0 02 00 00 	movups %xmm0,0x2b0(%rbp)
   1803cdbd1:	48 89 85 c0 02 00 00 	mov    %rax,0x2c0(%rbp)
   1803cdbd8:	ff 15 b2 d6 19 00    	call   *0x19d6b2(%rip)        # 0x18056b290
   1803cdbde:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803cdbe4:	4c 8d 85 b0 02 00 00 	lea    0x2b0(%rbp),%r8
   1803cdbeb:	48 8b c8             	mov    %rax,%rcx
   1803cdbee:	48 8b d3             	mov    %rbx,%rdx
   1803cdbf1:	ff 15 a1 d6 19 00    	call   *0x19d6a1(%rip)        # 0x18056b298
   1803cdbf7:	85 c0                	test   %eax,%eax
   1803cdbf9:	74 6d                	je     0x1803cdc68
   1803cdbfb:	48 8b 85 b0 02 00 00 	mov    0x2b0(%rbp),%rax
   1803cdc02:	8b 8d b8 02 00 00    	mov    0x2b8(%rbp),%ecx
   1803cdc08:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803cdc0d:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803cdc12:	48 85 c0             	test   %rax,%rax
   1803cdc15:	74 51                	je     0x1803cdc68
   1803cdc17:	48 85 c9             	test   %rcx,%rcx
   1803cdc1a:	74 4c                	je     0x1803cdc68
   1803cdc1c:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803cdc21:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803cdc26:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803cdc2b:	48 c7 44 24 38 35 00 	movq   $0x35,0x38(%rsp)
   1803cdc32:	00 00 
   1803cdc34:	e8 c7 41 e0 ff       	call   0x1801d1e00
   1803cdc39:	48 8b d8             	mov    %rax,%rbx
   1803cdc3c:	48 85 c0             	test   %rax,%rax
   1803cdc3f:	75 0c                	jne    0x1803cdc4d
   1803cdc41:	4c 8b cf             	mov    %rdi,%r9
   1803cdc44:	48 8d 0d 8d 85 4d 00 	lea    0x4d858d(%rip),%rcx        # 0x1808a61d8
   1803cdc4b:	eb 29                	jmp    0x1803cdc76
   1803cdc4d:	4c 8b c8             	mov    %rax,%r9
   1803cdc50:	48 8d 15 f1 8a 4d 00 	lea    0x4d8af1(%rip),%rdx        # 0x1808a6748
   1803cdc57:	4c 8b c7             	mov    %rdi,%r8
   1803cdc5a:	48 8d 0d cf 45 30 00 	lea    0x3045cf(%rip),%rcx        # 0x1806d2230
   1803cdc61:	e8 0a c7 ff ff       	call   0x1803ca370
   1803cdc66:	eb 2a                	jmp    0x1803cdc92
   1803cdc68:	4c 8d 0d d4 d9 1b 00 	lea    0x1bd9d4(%rip),%r9        # 0x18058b643
   1803cdc6f:	48 8d 0d 8a 85 4d 00 	lea    0x4d858a(%rip),%rcx        # 0x1808a6200
   1803cdc76:	ff 05 c4 3b d4 00    	incl   0xd43bc4(%rip)        # 0x181111840
   1803cdc7c:	4c 8d 05 c5 8a 4d 00 	lea    0x4d8ac5(%rip),%r8        # 0x1808a6748
   1803cdc83:	48 8d 15 a6 45 30 00 	lea    0x3045a6(%rip),%rdx        # 0x1806d2230
   1803cdc8a:	e8 d1 48 ee ff       	call   0x1802b2560
   1803cdc8f:	49 8b de             	mov    %r14,%rbx
   1803cdc92:	ff 05 ac 3b d4 00    	incl   0xd43bac(%rip)        # 0x181111844
   1803cdc98:	48 8d 3d 11 40 4d 00 	lea    0x4d4011(%rip),%rdi        # 0x1808a1cb0
   1803cdc9f:	4c 8b c7             	mov    %rdi,%r8
   1803cdca2:	48 89 1d 67 3e 59 00 	mov    %rbx,0x593e67(%rip)        # 0x180961b10
   1803cdca9:	45 33 c9             	xor    %r9d,%r9d
   1803cdcac:	48 8d 15 85 8a 4d 00 	lea    0x4d8a85(%rip),%rdx        # 0x1808a6738
   1803cdcb3:	48 8d 0d 76 45 30 00 	lea    0x304576(%rip),%rcx        # 0x1806d2230
   1803cdcba:	e8 b1 c6 ff ff       	call   0x1803ca370
   1803cdcbf:	48 8d 0d 6a 45 30 00 	lea    0x30456a(%rip),%rcx        # 0x1806d2230
   1803cdcc6:	ff 15 b4 d4 19 00    	call   *0x19d4b4(%rip)        # 0x18056b180
   1803cdccc:	48 8b d8             	mov    %rax,%rbx
   1803cdccf:	48 85 c0             	test   %rax,%rax
   1803cdcd2:	0f 84 a3 00 00 00    	je     0x1803cdd7b
   1803cdcd8:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803cdcdb:	33 c0                	xor    %eax,%eax
   1803cdcdd:	0f 11 85 c8 02 00 00 	movups %xmm0,0x2c8(%rbp)
   1803cdce4:	48 89 85 d8 02 00 00 	mov    %rax,0x2d8(%rbp)
   1803cdceb:	ff 15 9f d5 19 00    	call   *0x19d59f(%rip)        # 0x18056b290
   1803cdcf1:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803cdcf7:	4c 8d 85 c8 02 00 00 	lea    0x2c8(%rbp),%r8
   1803cdcfe:	48 8b c8             	mov    %rax,%rcx
   1803cdd01:	48 8b d3             	mov    %rbx,%rdx
   1803cdd04:	ff 15 8e d5 19 00    	call   *0x19d58e(%rip)        # 0x18056b298
   1803cdd0a:	85 c0                	test   %eax,%eax
   1803cdd0c:	74 6d                	je     0x1803cdd7b
   1803cdd0e:	48 8b 85 c8 02 00 00 	mov    0x2c8(%rbp),%rax
   1803cdd15:	8b 8d d0 02 00 00    	mov    0x2d0(%rbp),%ecx
   1803cdd1b:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803cdd20:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803cdd25:	48 85 c0             	test   %rax,%rax
   1803cdd28:	74 51                	je     0x1803cdd7b
   1803cdd2a:	48 85 c9             	test   %rcx,%rcx
   1803cdd2d:	74 4c                	je     0x1803cdd7b
   1803cdd2f:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803cdd34:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803cdd39:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803cdd3e:	48 c7 44 24 38 2b 00 	movq   $0x2b,0x38(%rsp)
   1803cdd45:	00 00 
   1803cdd47:	e8 b4 40 e0 ff       	call   0x1801d1e00
   1803cdd4c:	48 8b d8             	mov    %rax,%rbx
   1803cdd4f:	48 85 c0             	test   %rax,%rax
   1803cdd52:	75 0c                	jne    0x1803cdd60
   1803cdd54:	4c 8b cf             	mov    %rdi,%r9
   1803cdd57:	48 8d 0d 7a 84 4d 00 	lea    0x4d847a(%rip),%rcx        # 0x1808a61d8
   1803cdd5e:	eb 29                	jmp    0x1803cdd89
   1803cdd60:	4c 8b c8             	mov    %rax,%r9
   1803cdd63:	48 8d 15 ce 89 4d 00 	lea    0x4d89ce(%rip),%rdx        # 0x1808a6738
   1803cdd6a:	4c 8b c7             	mov    %rdi,%r8
   1803cdd6d:	48 8d 0d bc 44 30 00 	lea    0x3044bc(%rip),%rcx        # 0x1806d2230
   1803cdd74:	e8 f7 c5 ff ff       	call   0x1803ca370
   1803cdd79:	eb 2a                	jmp    0x1803cdda5
   1803cdd7b:	4c 8d 0d c1 d8 1b 00 	lea    0x1bd8c1(%rip),%r9        # 0x18058b643
   1803cdd82:	48 8d 0d 77 84 4d 00 	lea    0x4d8477(%rip),%rcx        # 0x1808a6200
   1803cdd89:	ff 05 b1 3a d4 00    	incl   0xd43ab1(%rip)        # 0x181111840
   1803cdd8f:	4c 8d 05 a2 89 4d 00 	lea    0x4d89a2(%rip),%r8        # 0x1808a6738
   1803cdd96:	48 8d 15 93 44 30 00 	lea    0x304493(%rip),%rdx        # 0x1806d2230
   1803cdd9d:	e8 be 47 ee ff       	call   0x1802b2560
   1803cdda2:	49 8b de             	mov    %r14,%rbx
   1803cdda5:	ff 05 99 3a d4 00    	incl   0xd43a99(%rip)        # 0x181111844
   1803cddab:	48 8d 3d 9e 43 4d 00 	lea    0x4d439e(%rip),%rdi        # 0x1808a2150
   1803cddb2:	4c 8b c7             	mov    %rdi,%r8
   1803cddb5:	48 89 1d 5c 3d 59 00 	mov    %rbx,0x593d5c(%rip)        # 0x180961b18
   1803cddbc:	45 33 c9             	xor    %r9d,%r9d
   1803cddbf:	48 8d 15 62 89 4d 00 	lea    0x4d8962(%rip),%rdx        # 0x1808a6728
   1803cddc6:	48 8d 0d 63 44 30 00 	lea    0x304463(%rip),%rcx        # 0x1806d2230
   1803cddcd:	e8 9e c5 ff ff       	call   0x1803ca370
   1803cddd2:	48 8d 0d 57 44 30 00 	lea    0x304457(%rip),%rcx        # 0x1806d2230
   1803cddd9:	ff 15 a1 d3 19 00    	call   *0x19d3a1(%rip)        # 0x18056b180
   1803cdddf:	48 8b d8             	mov    %rax,%rbx
   1803cdde2:	48 85 c0             	test   %rax,%rax
   1803cdde5:	0f 84 a3 00 00 00    	je     0x1803cde8e
   1803cddeb:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803cddee:	33 c0                	xor    %eax,%eax
   1803cddf0:	0f 11 85 e0 02 00 00 	movups %xmm0,0x2e0(%rbp)
   1803cddf7:	48 89 85 f0 02 00 00 	mov    %rax,0x2f0(%rbp)
   1803cddfe:	ff 15 8c d4 19 00    	call   *0x19d48c(%rip)        # 0x18056b290
   1803cde04:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803cde0a:	4c 8d 85 e0 02 00 00 	lea    0x2e0(%rbp),%r8
   1803cde11:	48 8b c8             	mov    %rax,%rcx
   1803cde14:	48 8b d3             	mov    %rbx,%rdx
   1803cde17:	ff 15 7b d4 19 00    	call   *0x19d47b(%rip)        # 0x18056b298
   1803cde1d:	85 c0                	test   %eax,%eax
   1803cde1f:	74 6d                	je     0x1803cde8e
   1803cde21:	48 8b 85 e0 02 00 00 	mov    0x2e0(%rbp),%rax
   1803cde28:	8b 8d e8 02 00 00    	mov    0x2e8(%rbp),%ecx
   1803cde2e:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803cde33:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803cde38:	48 85 c0             	test   %rax,%rax
   1803cde3b:	74 51                	je     0x1803cde8e
   1803cde3d:	48 85 c9             	test   %rcx,%rcx
   1803cde40:	74 4c                	je     0x1803cde8e
   1803cde42:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803cde47:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803cde4c:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803cde51:	48 c7 44 24 38 3a 00 	movq   $0x3a,0x38(%rsp)
   1803cde58:	00 00 
   1803cde5a:	e8 a1 3f e0 ff       	call   0x1801d1e00
   1803cde5f:	48 8b d8             	mov    %rax,%rbx
   1803cde62:	48 85 c0             	test   %rax,%rax
   1803cde65:	75 0c                	jne    0x1803cde73
   1803cde67:	4c 8b cf             	mov    %rdi,%r9
   1803cde6a:	48 8d 0d 67 83 4d 00 	lea    0x4d8367(%rip),%rcx        # 0x1808a61d8
   1803cde71:	eb 29                	jmp    0x1803cde9c
   1803cde73:	4c 8b c8             	mov    %rax,%r9
   1803cde76:	48 8d 15 ab 88 4d 00 	lea    0x4d88ab(%rip),%rdx        # 0x1808a6728
   1803cde7d:	4c 8b c7             	mov    %rdi,%r8
   1803cde80:	48 8d 0d a9 43 30 00 	lea    0x3043a9(%rip),%rcx        # 0x1806d2230
   1803cde87:	e8 e4 c4 ff ff       	call   0x1803ca370
   1803cde8c:	eb 2a                	jmp    0x1803cdeb8
   1803cde8e:	4c 8d 0d ae d7 1b 00 	lea    0x1bd7ae(%rip),%r9        # 0x18058b643
   1803cde95:	48 8d 0d 64 83 4d 00 	lea    0x4d8364(%rip),%rcx        # 0x1808a6200
   1803cde9c:	ff 05 9e 39 d4 00    	incl   0xd4399e(%rip)        # 0x181111840
   1803cdea2:	4c 8d 05 7f 88 4d 00 	lea    0x4d887f(%rip),%r8        # 0x1808a6728
   1803cdea9:	48 8d 15 80 43 30 00 	lea    0x304380(%rip),%rdx        # 0x1806d2230
   1803cdeb0:	e8 ab 46 ee ff       	call   0x1802b2560
   1803cdeb5:	49 8b de             	mov    %r14,%rbx
   1803cdeb8:	ff 05 86 39 d4 00    	incl   0xd43986(%rip)        # 0x181111844
   1803cdebe:	48 8d 3d eb 4f 4d 00 	lea    0x4d4feb(%rip),%rdi        # 0x1808a2eb0
   1803cdec5:	4c 8b c7             	mov    %rdi,%r8
   1803cdec8:	48 89 1d 51 3c 59 00 	mov    %rbx,0x593c51(%rip)        # 0x180961b20
   1803cdecf:	45 33 c9             	xor    %r9d,%r9d
   1803cded2:	48 8d 15 37 88 4d 00 	lea    0x4d8837(%rip),%rdx        # 0x1808a6710
   1803cded9:	48 8d 0d 50 43 30 00 	lea    0x304350(%rip),%rcx        # 0x1806d2230
   1803cdee0:	e8 8b c4 ff ff       	call   0x1803ca370
   1803cdee5:	48 8d 0d 44 43 30 00 	lea    0x304344(%rip),%rcx        # 0x1806d2230
   1803cdeec:	ff 15 8e d2 19 00    	call   *0x19d28e(%rip)        # 0x18056b180
   1803cdef2:	48 8b d8             	mov    %rax,%rbx
   1803cdef5:	48 85 c0             	test   %rax,%rax
   1803cdef8:	0f 84 a3 00 00 00    	je     0x1803cdfa1
   1803cdefe:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803cdf01:	33 c0                	xor    %eax,%eax
   1803cdf03:	0f 11 85 f8 02 00 00 	movups %xmm0,0x2f8(%rbp)
   1803cdf0a:	48 89 85 08 03 00 00 	mov    %rax,0x308(%rbp)
   1803cdf11:	ff 15 79 d3 19 00    	call   *0x19d379(%rip)        # 0x18056b290
   1803cdf17:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803cdf1d:	4c 8d 85 f8 02 00 00 	lea    0x2f8(%rbp),%r8
   1803cdf24:	48 8b c8             	mov    %rax,%rcx
   1803cdf27:	48 8b d3             	mov    %rbx,%rdx
   1803cdf2a:	ff 15 68 d3 19 00    	call   *0x19d368(%rip)        # 0x18056b298
   1803cdf30:	85 c0                	test   %eax,%eax
   1803cdf32:	74 6d                	je     0x1803cdfa1
   1803cdf34:	48 8b 85 f8 02 00 00 	mov    0x2f8(%rbp),%rax
   1803cdf3b:	8b 8d 00 03 00 00    	mov    0x300(%rbp),%ecx
   1803cdf41:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803cdf46:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803cdf4b:	48 85 c0             	test   %rax,%rax
   1803cdf4e:	74 51                	je     0x1803cdfa1
   1803cdf50:	48 85 c9             	test   %rcx,%rcx
   1803cdf53:	74 4c                	je     0x1803cdfa1
   1803cdf55:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803cdf5a:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803cdf5f:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803cdf64:	48 c7 44 24 38 46 00 	movq   $0x46,0x38(%rsp)
   1803cdf6b:	00 00 
   1803cdf6d:	e8 8e 3e e0 ff       	call   0x1801d1e00
   1803cdf72:	48 8b d8             	mov    %rax,%rbx
   1803cdf75:	48 85 c0             	test   %rax,%rax
   1803cdf78:	75 0c                	jne    0x1803cdf86
   1803cdf7a:	4c 8b cf             	mov    %rdi,%r9
   1803cdf7d:	48 8d 0d 54 82 4d 00 	lea    0x4d8254(%rip),%rcx        # 0x1808a61d8
   1803cdf84:	eb 29                	jmp    0x1803cdfaf
   1803cdf86:	4c 8b c8             	mov    %rax,%r9
   1803cdf89:	48 8d 15 80 87 4d 00 	lea    0x4d8780(%rip),%rdx        # 0x1808a6710
   1803cdf90:	4c 8b c7             	mov    %rdi,%r8
   1803cdf93:	48 8d 0d 96 42 30 00 	lea    0x304296(%rip),%rcx        # 0x1806d2230
   1803cdf9a:	e8 d1 c3 ff ff       	call   0x1803ca370
   1803cdf9f:	eb 2a                	jmp    0x1803cdfcb
   1803cdfa1:	4c 8d 0d 9b d6 1b 00 	lea    0x1bd69b(%rip),%r9        # 0x18058b643
   1803cdfa8:	48 8d 0d 51 82 4d 00 	lea    0x4d8251(%rip),%rcx        # 0x1808a6200
   1803cdfaf:	ff 05 8b 38 d4 00    	incl   0xd4388b(%rip)        # 0x181111840
   1803cdfb5:	4c 8d 05 54 87 4d 00 	lea    0x4d8754(%rip),%r8        # 0x1808a6710
   1803cdfbc:	48 8d 15 6d 42 30 00 	lea    0x30426d(%rip),%rdx        # 0x1806d2230
   1803cdfc3:	e8 98 45 ee ff       	call   0x1802b2560
   1803cdfc8:	49 8b de             	mov    %r14,%rbx
   1803cdfcb:	ff 05 73 38 d4 00    	incl   0xd43873(%rip)        # 0x181111844
   1803cdfd1:	48 8d 3d 48 41 4d 00 	lea    0x4d4148(%rip),%rdi        # 0x1808a2120
   1803cdfd8:	4c 8b c7             	mov    %rdi,%r8
   1803cdfdb:	48 89 1d 46 3b 59 00 	mov    %rbx,0x593b46(%rip)        # 0x180961b28
   1803cdfe2:	45 33 c9             	xor    %r9d,%r9d
   1803cdfe5:	48 8d 15 0c 87 4d 00 	lea    0x4d870c(%rip),%rdx        # 0x1808a66f8
   1803cdfec:	48 8d 0d 3d 42 30 00 	lea    0x30423d(%rip),%rcx        # 0x1806d2230
   1803cdff3:	e8 78 c3 ff ff       	call   0x1803ca370
   1803cdff8:	48 8d 0d 31 42 30 00 	lea    0x304231(%rip),%rcx        # 0x1806d2230
   1803cdfff:	ff 15 7b d1 19 00    	call   *0x19d17b(%rip)        # 0x18056b180
   1803ce005:	48 8b d8             	mov    %rax,%rbx
   1803ce008:	48 85 c0             	test   %rax,%rax
   1803ce00b:	0f 84 a3 00 00 00    	je     0x1803ce0b4
   1803ce011:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803ce014:	33 c0                	xor    %eax,%eax
   1803ce016:	0f 11 85 10 03 00 00 	movups %xmm0,0x310(%rbp)
   1803ce01d:	48 89 85 20 03 00 00 	mov    %rax,0x320(%rbp)
   1803ce024:	ff 15 66 d2 19 00    	call   *0x19d266(%rip)        # 0x18056b290
   1803ce02a:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803ce030:	4c 8d 85 10 03 00 00 	lea    0x310(%rbp),%r8
   1803ce037:	48 8b c8             	mov    %rax,%rcx
   1803ce03a:	48 8b d3             	mov    %rbx,%rdx
   1803ce03d:	ff 15 55 d2 19 00    	call   *0x19d255(%rip)        # 0x18056b298
   1803ce043:	85 c0                	test   %eax,%eax
   1803ce045:	74 6d                	je     0x1803ce0b4
   1803ce047:	48 8b 85 10 03 00 00 	mov    0x310(%rbp),%rax
   1803ce04e:	8b 8d 18 03 00 00    	mov    0x318(%rbp),%ecx
   1803ce054:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803ce059:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803ce05e:	48 85 c0             	test   %rax,%rax
   1803ce061:	74 51                	je     0x1803ce0b4
   1803ce063:	48 85 c9             	test   %rcx,%rcx
   1803ce066:	74 4c                	je     0x1803ce0b4
   1803ce068:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803ce06d:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803ce072:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803ce077:	48 c7 44 24 38 2f 00 	movq   $0x2f,0x38(%rsp)
   1803ce07e:	00 00 
   1803ce080:	e8 7b 3d e0 ff       	call   0x1801d1e00
   1803ce085:	48 8b d8             	mov    %rax,%rbx
   1803ce088:	48 85 c0             	test   %rax,%rax
   1803ce08b:	75 0c                	jne    0x1803ce099
   1803ce08d:	4c 8b cf             	mov    %rdi,%r9
   1803ce090:	48 8d 0d 41 81 4d 00 	lea    0x4d8141(%rip),%rcx        # 0x1808a61d8
   1803ce097:	eb 29                	jmp    0x1803ce0c2
   1803ce099:	4c 8b c8             	mov    %rax,%r9
   1803ce09c:	48 8d 15 55 86 4d 00 	lea    0x4d8655(%rip),%rdx        # 0x1808a66f8
   1803ce0a3:	4c 8b c7             	mov    %rdi,%r8
   1803ce0a6:	48 8d 0d 83 41 30 00 	lea    0x304183(%rip),%rcx        # 0x1806d2230
   1803ce0ad:	e8 be c2 ff ff       	call   0x1803ca370
   1803ce0b2:	eb 2a                	jmp    0x1803ce0de
   1803ce0b4:	4c 8d 0d 88 d5 1b 00 	lea    0x1bd588(%rip),%r9        # 0x18058b643
   1803ce0bb:	48 8d 0d 3e 81 4d 00 	lea    0x4d813e(%rip),%rcx        # 0x1808a6200
   1803ce0c2:	ff 05 78 37 d4 00    	incl   0xd43778(%rip)        # 0x181111840
   1803ce0c8:	4c 8d 05 29 86 4d 00 	lea    0x4d8629(%rip),%r8        # 0x1808a66f8
   1803ce0cf:	48 8d 15 5a 41 30 00 	lea    0x30415a(%rip),%rdx        # 0x1806d2230
   1803ce0d6:	e8 85 44 ee ff       	call   0x1802b2560
   1803ce0db:	49 8b de             	mov    %r14,%rbx
   1803ce0de:	4c 8d 05 03 40 4d 00 	lea    0x4d4003(%rip),%r8        # 0x1808a20e8
   1803ce0e5:	48 89 1d 44 3a 59 00 	mov    %rbx,0x593a44(%rip)        # 0x180961b30
   1803ce0ec:	48 8d 15 0d 87 4d 00 	lea    0x4d870d(%rip),%rdx        # 0x1808a6800
   1803ce0f3:	48 8d 0d 36 41 30 00 	lea    0x304136(%rip),%rcx        # 0x1806d2230
   1803ce0fa:	e8 d1 c4 ff ff       	call   0x1803ca5d0
   1803ce0ff:	48 8b c8             	mov    %rax,%rcx
   1803ce102:	48 85 c0             	test   %rax,%rax
   1803ce105:	0f 84 83 00 00 00    	je     0x1803ce18e
   1803ce10b:	48 83 c0 1f          	add    $0x1f,%rax
   1803ce10f:	74 39                	je     0x1803ce14a
   1803ce111:	4c 63 41 22          	movslq 0x22(%rcx),%r8
   1803ce115:	48 8d 81 26 00 ff ff 	lea    -0xffda(%rcx),%rax
   1803ce11c:	49 03 c0             	add    %r8,%rax
   1803ce11f:	49 3b c7             	cmp    %r15,%rax
   1803ce122:	77 26                	ja     0x1803ce14a
   1803ce124:	48 8d 59 26          	lea    0x26(%rcx),%rbx
   1803ce128:	49 03 d8             	add    %r8,%rbx
   1803ce12b:	48 8d 15 ce 86 4d 00 	lea    0x4d86ce(%rip),%rdx        # 0x1808a6800
   1803ce132:	4c 8b cb             	mov    %rbx,%r9
   1803ce135:	4c 8d 05 ac 3f 4d 00 	lea    0x4d3fac(%rip),%r8        # 0x1808a20e8
   1803ce13c:	48 8d 0d ed 40 30 00 	lea    0x3040ed(%rip),%rcx        # 0x1806d2230
   1803ce143:	e8 28 c2 ff ff       	call   0x1803ca370
   1803ce148:	eb 47                	jmp    0x1803ce191
   1803ce14a:	45 33 c9             	xor    %r9d,%r9d
   1803ce14d:	4c 8d 05 94 3f 4d 00 	lea    0x4d3f94(%rip),%r8        # 0x1808a20e8
   1803ce154:	48 8d 15 a5 86 4d 00 	lea    0x4d86a5(%rip),%rdx        # 0x1808a6800
   1803ce15b:	48 8d 0d ce 40 30 00 	lea    0x3040ce(%rip),%rcx        # 0x1806d2230
   1803ce162:	e8 09 c2 ff ff       	call   0x1803ca370
   1803ce167:	ff 05 d3 36 d4 00    	incl   0xd436d3(%rip)        # 0x181111840
   1803ce16d:	4c 8d 0d 74 3f 4d 00 	lea    0x4d3f74(%rip),%r9        # 0x1808a20e8
   1803ce174:	4c 8d 05 85 86 4d 00 	lea    0x4d8685(%rip),%r8        # 0x1808a6800
   1803ce17b:	48 8d 15 ae 40 30 00 	lea    0x3040ae(%rip),%rdx        # 0x1806d2230
   1803ce182:	48 8d 0d f7 7f 4d 00 	lea    0x4d7ff7(%rip),%rcx        # 0x1808a6180
   1803ce189:	e8 d2 43 ee ff       	call   0x1802b2560
   1803ce18e:	49 8b de             	mov    %r14,%rbx
   1803ce191:	4c 8d 05 50 3f 4d 00 	lea    0x4d3f50(%rip),%r8        # 0x1808a20e8
   1803ce198:	48 89 1d 99 39 59 00 	mov    %rbx,0x593999(%rip)        # 0x180961b38
   1803ce19f:	48 8d 15 4a 86 4d 00 	lea    0x4d864a(%rip),%rdx        # 0x1808a67f0
   1803ce1a6:	48 8d 0d 83 40 30 00 	lea    0x304083(%rip),%rcx        # 0x1806d2230
   1803ce1ad:	e8 1e c4 ff ff       	call   0x1803ca5d0
   1803ce1b2:	48 8b c8             	mov    %rax,%rcx
   1803ce1b5:	48 85 c0             	test   %rax,%rax
   1803ce1b8:	0f 84 8b 00 00 00    	je     0x1803ce249
   1803ce1be:	48 05 63 02 00 00    	add    $0x263,%rax
   1803ce1c4:	74 3f                	je     0x1803ce205
   1803ce1c6:	4c 63 89 66 02 00 00 	movslq 0x266(%rcx),%r9
   1803ce1cd:	48 8d 81 6a 02 ff ff 	lea    -0xfd96(%rcx),%rax
   1803ce1d4:	49 03 c1             	add    %r9,%rax
   1803ce1d7:	49 3b c7             	cmp    %r15,%rax
   1803ce1da:	77 29                	ja     0x1803ce205
   1803ce1dc:	48 8d 99 6a 02 00 00 	lea    0x26a(%rcx),%rbx
   1803ce1e3:	49 03 d9             	add    %r9,%rbx
   1803ce1e6:	4c 8d 05 fb 3e 4d 00 	lea    0x4d3efb(%rip),%r8        # 0x1808a20e8
   1803ce1ed:	4c 8b cb             	mov    %rbx,%r9
   1803ce1f0:	48 8d 15 f9 85 4d 00 	lea    0x4d85f9(%rip),%rdx        # 0x1808a67f0
   1803ce1f7:	48 8d 0d 32 40 30 00 	lea    0x304032(%rip),%rcx        # 0x1806d2230
   1803ce1fe:	e8 6d c1 ff ff       	call   0x1803ca370
   1803ce203:	eb 47                	jmp    0x1803ce24c
   1803ce205:	45 33 c9             	xor    %r9d,%r9d
   1803ce208:	4c 8d 05 d9 3e 4d 00 	lea    0x4d3ed9(%rip),%r8        # 0x1808a20e8
   1803ce20f:	48 8d 15 da 85 4d 00 	lea    0x4d85da(%rip),%rdx        # 0x1808a67f0
   1803ce216:	48 8d 0d 13 40 30 00 	lea    0x304013(%rip),%rcx        # 0x1806d2230
   1803ce21d:	e8 4e c1 ff ff       	call   0x1803ca370
   1803ce222:	ff 05 18 36 d4 00    	incl   0xd43618(%rip)        # 0x181111840
   1803ce228:	4c 8d 0d b9 3e 4d 00 	lea    0x4d3eb9(%rip),%r9        # 0x1808a20e8
   1803ce22f:	4c 8d 05 ba 85 4d 00 	lea    0x4d85ba(%rip),%r8        # 0x1808a67f0
   1803ce236:	48 8d 15 f3 3f 30 00 	lea    0x303ff3(%rip),%rdx        # 0x1806d2230
   1803ce23d:	48 8d 0d 3c 7f 4d 00 	lea    0x4d7f3c(%rip),%rcx        # 0x1808a6180
   1803ce244:	e8 17 43 ee ff       	call   0x1802b2560
   1803ce249:	49 8b de             	mov    %r14,%rbx
   1803ce24c:	ff 05 f2 35 d4 00    	incl   0xd435f2(%rip)        # 0x181111844
   1803ce252:	48 8d 3d 5f 3e 4d 00 	lea    0x4d3e5f(%rip),%rdi        # 0x1808a20b8
   1803ce259:	4c 8b c7             	mov    %rdi,%r8
   1803ce25c:	48 89 1d dd 38 59 00 	mov    %rbx,0x5938dd(%rip)        # 0x180961b40
   1803ce263:	45 33 c9             	xor    %r9d,%r9d
   1803ce266:	48 8d 15 73 85 4d 00 	lea    0x4d8573(%rip),%rdx        # 0x1808a67e0
   1803ce26d:	48 8d 0d bc 3f 30 00 	lea    0x303fbc(%rip),%rcx        # 0x1806d2230
   1803ce274:	e8 f7 c0 ff ff       	call   0x1803ca370
   1803ce279:	48 8d 0d b0 3f 30 00 	lea    0x303fb0(%rip),%rcx        # 0x1806d2230
   1803ce280:	ff 15 fa ce 19 00    	call   *0x19cefa(%rip)        # 0x18056b180
   1803ce286:	48 8b d8             	mov    %rax,%rbx
   1803ce289:	48 85 c0             	test   %rax,%rax
   1803ce28c:	0f 84 a3 00 00 00    	je     0x1803ce335
   1803ce292:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803ce295:	33 c0                	xor    %eax,%eax
   1803ce297:	0f 11 85 28 03 00 00 	movups %xmm0,0x328(%rbp)
   1803ce29e:	48 89 85 38 03 00 00 	mov    %rax,0x338(%rbp)
   1803ce2a5:	ff 15 e5 cf 19 00    	call   *0x19cfe5(%rip)        # 0x18056b290
   1803ce2ab:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803ce2b1:	4c 8d 85 28 03 00 00 	lea    0x328(%rbp),%r8
   1803ce2b8:	48 8b c8             	mov    %rax,%rcx
   1803ce2bb:	48 8b d3             	mov    %rbx,%rdx
   1803ce2be:	ff 15 d4 cf 19 00    	call   *0x19cfd4(%rip)        # 0x18056b298
   1803ce2c4:	85 c0                	test   %eax,%eax
   1803ce2c6:	74 6d                	je     0x1803ce335
   1803ce2c8:	48 8b 85 28 03 00 00 	mov    0x328(%rbp),%rax
   1803ce2cf:	8b 8d 30 03 00 00    	mov    0x330(%rbp),%ecx
   1803ce2d5:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803ce2da:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803ce2df:	48 85 c0             	test   %rax,%rax
   1803ce2e2:	74 51                	je     0x1803ce335
   1803ce2e4:	48 85 c9             	test   %rcx,%rcx
   1803ce2e7:	74 4c                	je     0x1803ce335
   1803ce2e9:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803ce2ee:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803ce2f3:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803ce2f8:	48 c7 44 24 38 2c 00 	movq   $0x2c,0x38(%rsp)
   1803ce2ff:	00 00 
   1803ce301:	e8 fa 3a e0 ff       	call   0x1801d1e00
   1803ce306:	48 8b d8             	mov    %rax,%rbx
   1803ce309:	48 85 c0             	test   %rax,%rax
   1803ce30c:	75 0c                	jne    0x1803ce31a
   1803ce30e:	4c 8b cf             	mov    %rdi,%r9
   1803ce311:	48 8d 0d c0 7e 4d 00 	lea    0x4d7ec0(%rip),%rcx        # 0x1808a61d8
   1803ce318:	eb 29                	jmp    0x1803ce343
   1803ce31a:	4c 8b c8             	mov    %rax,%r9
   1803ce31d:	48 8d 15 bc 84 4d 00 	lea    0x4d84bc(%rip),%rdx        # 0x1808a67e0
   1803ce324:	4c 8b c7             	mov    %rdi,%r8
   1803ce327:	48 8d 0d 02 3f 30 00 	lea    0x303f02(%rip),%rcx        # 0x1806d2230
   1803ce32e:	e8 3d c0 ff ff       	call   0x1803ca370
   1803ce333:	eb 2a                	jmp    0x1803ce35f
   1803ce335:	4c 8d 0d 07 d3 1b 00 	lea    0x1bd307(%rip),%r9        # 0x18058b643
   1803ce33c:	48 8d 0d bd 7e 4d 00 	lea    0x4d7ebd(%rip),%rcx        # 0x1808a6200
   1803ce343:	ff 05 f7 34 d4 00    	incl   0xd434f7(%rip)        # 0x181111840
   1803ce349:	4c 8d 05 90 84 4d 00 	lea    0x4d8490(%rip),%r8        # 0x1808a67e0
   1803ce350:	48 8d 15 d9 3e 30 00 	lea    0x303ed9(%rip),%rdx        # 0x1806d2230
   1803ce357:	e8 04 42 ee ff       	call   0x1802b2560
   1803ce35c:	49 8b de             	mov    %r14,%rbx
   1803ce35f:	ff 05 df 34 d4 00    	incl   0xd434df(%rip)        # 0x181111844
   1803ce365:	48 8d 3d b4 3c 4d 00 	lea    0x4d3cb4(%rip),%rdi        # 0x1808a2020
   1803ce36c:	4c 8b c7             	mov    %rdi,%r8
   1803ce36f:	48 89 1d d2 37 59 00 	mov    %rbx,0x5937d2(%rip)        # 0x180961b48
   1803ce376:	45 33 c9             	xor    %r9d,%r9d
   1803ce379:	48 8d 15 50 84 4d 00 	lea    0x4d8450(%rip),%rdx        # 0x1808a67d0
   1803ce380:	48 8d 0d a9 3e 30 00 	lea    0x303ea9(%rip),%rcx        # 0x1806d2230
   1803ce387:	e8 e4 bf ff ff       	call   0x1803ca370
   1803ce38c:	48 8d 0d 9d 3e 30 00 	lea    0x303e9d(%rip),%rcx        # 0x1806d2230
   1803ce393:	ff 15 e7 cd 19 00    	call   *0x19cde7(%rip)        # 0x18056b180
   1803ce399:	48 8b d8             	mov    %rax,%rbx
   1803ce39c:	48 85 c0             	test   %rax,%rax
   1803ce39f:	0f 84 a3 00 00 00    	je     0x1803ce448
   1803ce3a5:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803ce3a8:	33 c0                	xor    %eax,%eax
   1803ce3aa:	0f 11 85 40 03 00 00 	movups %xmm0,0x340(%rbp)
   1803ce3b1:	48 89 85 50 03 00 00 	mov    %rax,0x350(%rbp)
   1803ce3b8:	ff 15 d2 ce 19 00    	call   *0x19ced2(%rip)        # 0x18056b290
   1803ce3be:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803ce3c4:	4c 8d 85 40 03 00 00 	lea    0x340(%rbp),%r8
   1803ce3cb:	48 8b c8             	mov    %rax,%rcx
   1803ce3ce:	48 8b d3             	mov    %rbx,%rdx
   1803ce3d1:	ff 15 c1 ce 19 00    	call   *0x19cec1(%rip)        # 0x18056b298
   1803ce3d7:	85 c0                	test   %eax,%eax
   1803ce3d9:	74 6d                	je     0x1803ce448
   1803ce3db:	48 8b 85 40 03 00 00 	mov    0x340(%rbp),%rax
   1803ce3e2:	8b 8d 48 03 00 00    	mov    0x348(%rbp),%ecx
   1803ce3e8:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803ce3ed:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803ce3f2:	48 85 c0             	test   %rax,%rax
   1803ce3f5:	74 51                	je     0x1803ce448
   1803ce3f7:	48 85 c9             	test   %rcx,%rcx
   1803ce3fa:	74 4c                	je     0x1803ce448
   1803ce3fc:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803ce401:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803ce406:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803ce40b:	48 c7 44 24 38 93 00 	movq   $0x93,0x38(%rsp)
   1803ce412:	00 00 
   1803ce414:	e8 e7 39 e0 ff       	call   0x1801d1e00
   1803ce419:	48 8b d8             	mov    %rax,%rbx
   1803ce41c:	48 85 c0             	test   %rax,%rax
   1803ce41f:	75 0c                	jne    0x1803ce42d
   1803ce421:	4c 8b cf             	mov    %rdi,%r9
   1803ce424:	48 8d 0d ad 7d 4d 00 	lea    0x4d7dad(%rip),%rcx        # 0x1808a61d8
   1803ce42b:	eb 29                	jmp    0x1803ce456
   1803ce42d:	4c 8b c8             	mov    %rax,%r9
   1803ce430:	48 8d 15 99 83 4d 00 	lea    0x4d8399(%rip),%rdx        # 0x1808a67d0
   1803ce437:	4c 8b c7             	mov    %rdi,%r8
   1803ce43a:	48 8d 0d ef 3d 30 00 	lea    0x303def(%rip),%rcx        # 0x1806d2230
   1803ce441:	e8 2a bf ff ff       	call   0x1803ca370
   1803ce446:	eb 2a                	jmp    0x1803ce472
   1803ce448:	4c 8d 0d f4 d1 1b 00 	lea    0x1bd1f4(%rip),%r9        # 0x18058b643
   1803ce44f:	48 8d 0d aa 7d 4d 00 	lea    0x4d7daa(%rip),%rcx        # 0x1808a6200
   1803ce456:	ff 05 e4 33 d4 00    	incl   0xd433e4(%rip)        # 0x181111840
   1803ce45c:	4c 8d 05 6d 83 4d 00 	lea    0x4d836d(%rip),%r8        # 0x1808a67d0
   1803ce463:	48 8d 15 c6 3d 30 00 	lea    0x303dc6(%rip),%rdx        # 0x1806d2230
   1803ce46a:	e8 f1 40 ee ff       	call   0x1802b2560
   1803ce46f:	49 8b de             	mov    %r14,%rbx
   1803ce472:	ff 05 cc 33 d4 00    	incl   0xd433cc(%rip)        # 0x181111844
   1803ce478:	48 8d 3d 21 3b 4d 00 	lea    0x4d3b21(%rip),%rdi        # 0x1808a1fa0
   1803ce47f:	4c 8b c7             	mov    %rdi,%r8
   1803ce482:	48 89 1d c7 36 59 00 	mov    %rbx,0x5936c7(%rip)        # 0x180961b50
   1803ce489:	45 33 c9             	xor    %r9d,%r9d
   1803ce48c:	48 8d 15 2d 83 4d 00 	lea    0x4d832d(%rip),%rdx        # 0x1808a67c0
   1803ce493:	48 8d 0d 96 3d 30 00 	lea    0x303d96(%rip),%rcx        # 0x1806d2230
   1803ce49a:	e8 d1 be ff ff       	call   0x1803ca370
   1803ce49f:	48 8d 0d 8a 3d 30 00 	lea    0x303d8a(%rip),%rcx        # 0x1806d2230
   1803ce4a6:	ff 15 d4 cc 19 00    	call   *0x19ccd4(%rip)        # 0x18056b180
   1803ce4ac:	48 8b d8             	mov    %rax,%rbx
   1803ce4af:	48 85 c0             	test   %rax,%rax
   1803ce4b2:	0f 84 a3 00 00 00    	je     0x1803ce55b
   1803ce4b8:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803ce4bb:	33 c0                	xor    %eax,%eax
   1803ce4bd:	0f 11 85 58 03 00 00 	movups %xmm0,0x358(%rbp)
   1803ce4c4:	48 89 85 68 03 00 00 	mov    %rax,0x368(%rbp)
   1803ce4cb:	ff 15 bf cd 19 00    	call   *0x19cdbf(%rip)        # 0x18056b290
   1803ce4d1:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803ce4d7:	4c 8d 85 58 03 00 00 	lea    0x358(%rbp),%r8
   1803ce4de:	48 8b c8             	mov    %rax,%rcx
   1803ce4e1:	48 8b d3             	mov    %rbx,%rdx
   1803ce4e4:	ff 15 ae cd 19 00    	call   *0x19cdae(%rip)        # 0x18056b298
   1803ce4ea:	85 c0                	test   %eax,%eax
   1803ce4ec:	74 6d                	je     0x1803ce55b
   1803ce4ee:	48 8b 85 58 03 00 00 	mov    0x358(%rbp),%rax
   1803ce4f5:	8b 8d 60 03 00 00    	mov    0x360(%rbp),%ecx
   1803ce4fb:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803ce500:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803ce505:	48 85 c0             	test   %rax,%rax
   1803ce508:	74 51                	je     0x1803ce55b
   1803ce50a:	48 85 c9             	test   %rcx,%rcx
   1803ce50d:	74 4c                	je     0x1803ce55b
   1803ce50f:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803ce514:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803ce519:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803ce51e:	48 c7 44 24 38 75 00 	movq   $0x75,0x38(%rsp)
   1803ce525:	00 00 
   1803ce527:	e8 d4 38 e0 ff       	call   0x1801d1e00
   1803ce52c:	48 8b d8             	mov    %rax,%rbx
   1803ce52f:	48 85 c0             	test   %rax,%rax
   1803ce532:	75 0c                	jne    0x1803ce540
   1803ce534:	4c 8b cf             	mov    %rdi,%r9
   1803ce537:	48 8d 0d 9a 7c 4d 00 	lea    0x4d7c9a(%rip),%rcx        # 0x1808a61d8
   1803ce53e:	eb 29                	jmp    0x1803ce569
   1803ce540:	4c 8b c8             	mov    %rax,%r9
   1803ce543:	48 8d 15 76 82 4d 00 	lea    0x4d8276(%rip),%rdx        # 0x1808a67c0
   1803ce54a:	4c 8b c7             	mov    %rdi,%r8
   1803ce54d:	48 8d 0d dc 3c 30 00 	lea    0x303cdc(%rip),%rcx        # 0x1806d2230
   1803ce554:	e8 17 be ff ff       	call   0x1803ca370
   1803ce559:	eb 2a                	jmp    0x1803ce585
   1803ce55b:	4c 8d 0d e1 d0 1b 00 	lea    0x1bd0e1(%rip),%r9        # 0x18058b643
   1803ce562:	48 8d 0d 97 7c 4d 00 	lea    0x4d7c97(%rip),%rcx        # 0x1808a6200
   1803ce569:	ff 05 d1 32 d4 00    	incl   0xd432d1(%rip)        # 0x181111840
   1803ce56f:	4c 8d 05 4a 82 4d 00 	lea    0x4d824a(%rip),%r8        # 0x1808a67c0
   1803ce576:	48 8d 15 b3 3c 30 00 	lea    0x303cb3(%rip),%rdx        # 0x1806d2230
   1803ce57d:	e8 de 3f ee ff       	call   0x1802b2560
   1803ce582:	49 8b de             	mov    %r14,%rbx
   1803ce585:	ff 05 b9 32 d4 00    	incl   0xd432b9(%rip)        # 0x181111844
   1803ce58b:	48 8d 3d c6 39 4d 00 	lea    0x4d39c6(%rip),%rdi        # 0x1808a1f58
   1803ce592:	4c 8b c7             	mov    %rdi,%r8
   1803ce595:	48 89 1d bc 35 59 00 	mov    %rbx,0x5935bc(%rip)        # 0x180961b58
   1803ce59c:	45 33 c9             	xor    %r9d,%r9d
   1803ce59f:	48 8d 15 0a 82 4d 00 	lea    0x4d820a(%rip),%rdx        # 0x1808a67b0
   1803ce5a6:	48 8d 0d 83 3c 30 00 	lea    0x303c83(%rip),%rcx        # 0x1806d2230
   1803ce5ad:	e8 be bd ff ff       	call   0x1803ca370
   1803ce5b2:	48 8d 0d 77 3c 30 00 	lea    0x303c77(%rip),%rcx        # 0x1806d2230
   1803ce5b9:	ff 15 c1 cb 19 00    	call   *0x19cbc1(%rip)        # 0x18056b180
   1803ce5bf:	48 8b d8             	mov    %rax,%rbx
   1803ce5c2:	48 85 c0             	test   %rax,%rax
   1803ce5c5:	0f 84 a3 00 00 00    	je     0x1803ce66e
   1803ce5cb:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803ce5ce:	33 c0                	xor    %eax,%eax
   1803ce5d0:	0f 11 85 70 03 00 00 	movups %xmm0,0x370(%rbp)
   1803ce5d7:	48 89 85 80 03 00 00 	mov    %rax,0x380(%rbp)
   1803ce5de:	ff 15 ac cc 19 00    	call   *0x19ccac(%rip)        # 0x18056b290
   1803ce5e4:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803ce5ea:	4c 8d 85 70 03 00 00 	lea    0x370(%rbp),%r8
   1803ce5f1:	48 8b c8             	mov    %rax,%rcx
   1803ce5f4:	48 8b d3             	mov    %rbx,%rdx
   1803ce5f7:	ff 15 9b cc 19 00    	call   *0x19cc9b(%rip)        # 0x18056b298
   1803ce5fd:	85 c0                	test   %eax,%eax
   1803ce5ff:	74 6d                	je     0x1803ce66e
   1803ce601:	48 8b 85 70 03 00 00 	mov    0x370(%rbp),%rax
   1803ce608:	8b 8d 78 03 00 00    	mov    0x378(%rbp),%ecx
   1803ce60e:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803ce613:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803ce618:	48 85 c0             	test   %rax,%rax
   1803ce61b:	74 51                	je     0x1803ce66e
   1803ce61d:	48 85 c9             	test   %rcx,%rcx
   1803ce620:	74 4c                	je     0x1803ce66e
   1803ce622:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803ce627:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803ce62c:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803ce631:	48 c7 44 24 38 38 00 	movq   $0x38,0x38(%rsp)
   1803ce638:	00 00 
   1803ce63a:	e8 c1 37 e0 ff       	call   0x1801d1e00
   1803ce63f:	48 8b d8             	mov    %rax,%rbx
   1803ce642:	48 85 c0             	test   %rax,%rax
   1803ce645:	75 0c                	jne    0x1803ce653
   1803ce647:	4c 8b cf             	mov    %rdi,%r9
   1803ce64a:	48 8d 0d 87 7b 4d 00 	lea    0x4d7b87(%rip),%rcx        # 0x1808a61d8
   1803ce651:	eb 29                	jmp    0x1803ce67c
   1803ce653:	4c 8b c8             	mov    %rax,%r9
   1803ce656:	48 8d 15 53 81 4d 00 	lea    0x4d8153(%rip),%rdx        # 0x1808a67b0
   1803ce65d:	4c 8b c7             	mov    %rdi,%r8
   1803ce660:	48 8d 0d c9 3b 30 00 	lea    0x303bc9(%rip),%rcx        # 0x1806d2230
   1803ce667:	e8 04 bd ff ff       	call   0x1803ca370
   1803ce66c:	eb 2a                	jmp    0x1803ce698
   1803ce66e:	4c 8d 0d ce cf 1b 00 	lea    0x1bcfce(%rip),%r9        # 0x18058b643
   1803ce675:	48 8d 0d 84 7b 4d 00 	lea    0x4d7b84(%rip),%rcx        # 0x1808a6200
   1803ce67c:	ff 05 be 31 d4 00    	incl   0xd431be(%rip)        # 0x181111840
   1803ce682:	4c 8d 05 27 81 4d 00 	lea    0x4d8127(%rip),%r8        # 0x1808a67b0
   1803ce689:	48 8d 15 a0 3b 30 00 	lea    0x303ba0(%rip),%rdx        # 0x1806d2230
   1803ce690:	e8 cb 3e ee ff       	call   0x1802b2560
   1803ce695:	49 8b de             	mov    %r14,%rbx
   1803ce698:	ff 05 a6 31 d4 00    	incl   0xd431a6(%rip)        # 0x181111844
   1803ce69e:	48 8d 3d 5b 38 4d 00 	lea    0x4d385b(%rip),%rdi        # 0x1808a1f00
   1803ce6a5:	4c 8b c7             	mov    %rdi,%r8
   1803ce6a8:	48 89 1d b1 34 59 00 	mov    %rbx,0x5934b1(%rip)        # 0x180961b60
   1803ce6af:	45 33 c9             	xor    %r9d,%r9d
   1803ce6b2:	48 8d 15 e7 80 4d 00 	lea    0x4d80e7(%rip),%rdx        # 0x1808a67a0
   1803ce6b9:	48 8d 0d 70 3b 30 00 	lea    0x303b70(%rip),%rcx        # 0x1806d2230
   1803ce6c0:	e8 ab bc ff ff       	call   0x1803ca370
   1803ce6c5:	48 8d 0d 64 3b 30 00 	lea    0x303b64(%rip),%rcx        # 0x1806d2230
   1803ce6cc:	ff 15 ae ca 19 00    	call   *0x19caae(%rip)        # 0x18056b180
   1803ce6d2:	48 8b d8             	mov    %rax,%rbx
   1803ce6d5:	48 85 c0             	test   %rax,%rax
   1803ce6d8:	0f 84 a3 00 00 00    	je     0x1803ce781
   1803ce6de:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803ce6e1:	33 c0                	xor    %eax,%eax
   1803ce6e3:	0f 11 85 88 03 00 00 	movups %xmm0,0x388(%rbp)
   1803ce6ea:	48 89 85 98 03 00 00 	mov    %rax,0x398(%rbp)
   1803ce6f1:	ff 15 99 cb 19 00    	call   *0x19cb99(%rip)        # 0x18056b290
   1803ce6f7:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803ce6fd:	4c 8d 85 88 03 00 00 	lea    0x388(%rbp),%r8
   1803ce704:	48 8b c8             	mov    %rax,%rcx
   1803ce707:	48 8b d3             	mov    %rbx,%rdx
   1803ce70a:	ff 15 88 cb 19 00    	call   *0x19cb88(%rip)        # 0x18056b298
   1803ce710:	85 c0                	test   %eax,%eax
   1803ce712:	74 6d                	je     0x1803ce781
   1803ce714:	48 8b 85 88 03 00 00 	mov    0x388(%rbp),%rax
   1803ce71b:	8b 8d 90 03 00 00    	mov    0x390(%rbp),%ecx
   1803ce721:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803ce726:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803ce72b:	48 85 c0             	test   %rax,%rax
   1803ce72e:	74 51                	je     0x1803ce781
   1803ce730:	48 85 c9             	test   %rcx,%rcx
   1803ce733:	74 4c                	je     0x1803ce781
   1803ce735:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803ce73a:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803ce73f:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803ce744:	48 c7 44 24 38 50 00 	movq   $0x50,0x38(%rsp)
   1803ce74b:	00 00 
   1803ce74d:	e8 ae 36 e0 ff       	call   0x1801d1e00
   1803ce752:	48 8b d8             	mov    %rax,%rbx
   1803ce755:	48 85 c0             	test   %rax,%rax
   1803ce758:	75 0c                	jne    0x1803ce766
   1803ce75a:	4c 8b cf             	mov    %rdi,%r9
   1803ce75d:	48 8d 0d 74 7a 4d 00 	lea    0x4d7a74(%rip),%rcx        # 0x1808a61d8
   1803ce764:	eb 29                	jmp    0x1803ce78f
   1803ce766:	4c 8b c8             	mov    %rax,%r9
   1803ce769:	48 8d 15 30 80 4d 00 	lea    0x4d8030(%rip),%rdx        # 0x1808a67a0
   1803ce770:	4c 8b c7             	mov    %rdi,%r8
   1803ce773:	48 8d 0d b6 3a 30 00 	lea    0x303ab6(%rip),%rcx        # 0x1806d2230
   1803ce77a:	e8 f1 bb ff ff       	call   0x1803ca370
   1803ce77f:	eb 2a                	jmp    0x1803ce7ab
   1803ce781:	4c 8d 0d bb ce 1b 00 	lea    0x1bcebb(%rip),%r9        # 0x18058b643
   1803ce788:	48 8d 0d 71 7a 4d 00 	lea    0x4d7a71(%rip),%rcx        # 0x1808a6200
   1803ce78f:	ff 05 ab 30 d4 00    	incl   0xd430ab(%rip)        # 0x181111840
   1803ce795:	4c 8d 05 04 80 4d 00 	lea    0x4d8004(%rip),%r8        # 0x1808a67a0
   1803ce79c:	48 8d 15 8d 3a 30 00 	lea    0x303a8d(%rip),%rdx        # 0x1806d2230
   1803ce7a3:	e8 b8 3d ee ff       	call   0x1802b2560
   1803ce7a8:	49 8b de             	mov    %r14,%rbx
   1803ce7ab:	ff 05 93 30 d4 00    	incl   0xd43093(%rip)        # 0x181111844
   1803ce7b1:	48 8d 3d 88 3b 4d 00 	lea    0x4d3b88(%rip),%rdi        # 0x1808a2340
   1803ce7b8:	4c 8b c7             	mov    %rdi,%r8
   1803ce7bb:	48 89 1d a6 33 59 00 	mov    %rbx,0x5933a6(%rip)        # 0x180961b68
   1803ce7c2:	45 33 c9             	xor    %r9d,%r9d
   1803ce7c5:	48 8d 15 cc 7f 4d 00 	lea    0x4d7fcc(%rip),%rdx        # 0x1808a6798
   1803ce7cc:	48 8d 0d 5d 3a 30 00 	lea    0x303a5d(%rip),%rcx        # 0x1806d2230
   1803ce7d3:	e8 98 bb ff ff       	call   0x1803ca370
   1803ce7d8:	48 8d 0d 51 3a 30 00 	lea    0x303a51(%rip),%rcx        # 0x1806d2230
   1803ce7df:	ff 15 9b c9 19 00    	call   *0x19c99b(%rip)        # 0x18056b180
   1803ce7e5:	48 8b d8             	mov    %rax,%rbx
   1803ce7e8:	48 85 c0             	test   %rax,%rax
   1803ce7eb:	0f 84 a3 00 00 00    	je     0x1803ce894
   1803ce7f1:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803ce7f4:	33 c0                	xor    %eax,%eax
   1803ce7f6:	0f 11 85 a0 03 00 00 	movups %xmm0,0x3a0(%rbp)
   1803ce7fd:	48 89 85 b0 03 00 00 	mov    %rax,0x3b0(%rbp)
   1803ce804:	ff 15 86 ca 19 00    	call   *0x19ca86(%rip)        # 0x18056b290
   1803ce80a:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803ce810:	4c 8d 85 a0 03 00 00 	lea    0x3a0(%rbp),%r8
   1803ce817:	48 8b c8             	mov    %rax,%rcx
   1803ce81a:	48 8b d3             	mov    %rbx,%rdx
   1803ce81d:	ff 15 75 ca 19 00    	call   *0x19ca75(%rip)        # 0x18056b298
   1803ce823:	85 c0                	test   %eax,%eax
   1803ce825:	74 6d                	je     0x1803ce894
   1803ce827:	48 8b 85 a0 03 00 00 	mov    0x3a0(%rbp),%rax
   1803ce82e:	8b 8d a8 03 00 00    	mov    0x3a8(%rbp),%ecx
   1803ce834:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803ce839:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803ce83e:	48 85 c0             	test   %rax,%rax
   1803ce841:	74 51                	je     0x1803ce894
   1803ce843:	48 85 c9             	test   %rcx,%rcx
   1803ce846:	74 4c                	je     0x1803ce894
   1803ce848:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803ce84d:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803ce852:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803ce857:	48 c7 44 24 38 26 00 	movq   $0x26,0x38(%rsp)
   1803ce85e:	00 00 
   1803ce860:	e8 9b 35 e0 ff       	call   0x1801d1e00
   1803ce865:	48 8b d8             	mov    %rax,%rbx
   1803ce868:	48 85 c0             	test   %rax,%rax
   1803ce86b:	75 0c                	jne    0x1803ce879
   1803ce86d:	4c 8b cf             	mov    %rdi,%r9
   1803ce870:	48 8d 0d 61 79 4d 00 	lea    0x4d7961(%rip),%rcx        # 0x1808a61d8
   1803ce877:	eb 29                	jmp    0x1803ce8a2
   1803ce879:	4c 8b c8             	mov    %rax,%r9
   1803ce87c:	48 8d 15 15 7f 4d 00 	lea    0x4d7f15(%rip),%rdx        # 0x1808a6798
   1803ce883:	4c 8b c7             	mov    %rdi,%r8
   1803ce886:	48 8d 0d a3 39 30 00 	lea    0x3039a3(%rip),%rcx        # 0x1806d2230
   1803ce88d:	e8 de ba ff ff       	call   0x1803ca370
   1803ce892:	eb 2a                	jmp    0x1803ce8be
   1803ce894:	4c 8d 0d a8 cd 1b 00 	lea    0x1bcda8(%rip),%r9        # 0x18058b643
   1803ce89b:	48 8d 0d 5e 79 4d 00 	lea    0x4d795e(%rip),%rcx        # 0x1808a6200
   1803ce8a2:	ff 05 98 2f d4 00    	incl   0xd42f98(%rip)        # 0x181111840
   1803ce8a8:	4c 8d 05 e9 7e 4d 00 	lea    0x4d7ee9(%rip),%r8        # 0x1808a6798
   1803ce8af:	48 8d 15 7a 39 30 00 	lea    0x30397a(%rip),%rdx        # 0x1806d2230
   1803ce8b6:	e8 a5 3c ee ff       	call   0x1802b2560
   1803ce8bb:	49 8b de             	mov    %r14,%rbx
   1803ce8be:	ff 05 80 2f d4 00    	incl   0xd42f80(%rip)        # 0x181111844
   1803ce8c4:	48 8d 3d 3d 3a 4d 00 	lea    0x4d3a3d(%rip),%rdi        # 0x1808a2308
   1803ce8cb:	4c 8b c7             	mov    %rdi,%r8
   1803ce8ce:	48 89 1d 9b 32 59 00 	mov    %rbx,0x59329b(%rip)        # 0x180961b70
   1803ce8d5:	45 33 c9             	xor    %r9d,%r9d
   1803ce8d8:	48 8d 15 a9 7f 4d 00 	lea    0x4d7fa9(%rip),%rdx        # 0x1808a6888
   1803ce8df:	48 8d 0d 4a 39 30 00 	lea    0x30394a(%rip),%rcx        # 0x1806d2230
   1803ce8e6:	e8 85 ba ff ff       	call   0x1803ca370
   1803ce8eb:	48 8d 0d 3e 39 30 00 	lea    0x30393e(%rip),%rcx        # 0x1806d2230
   1803ce8f2:	ff 15 88 c8 19 00    	call   *0x19c888(%rip)        # 0x18056b180
   1803ce8f8:	48 8b d8             	mov    %rax,%rbx
   1803ce8fb:	48 85 c0             	test   %rax,%rax
   1803ce8fe:	0f 84 a3 00 00 00    	je     0x1803ce9a7
   1803ce904:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803ce907:	33 c0                	xor    %eax,%eax
   1803ce909:	0f 11 85 b8 03 00 00 	movups %xmm0,0x3b8(%rbp)
   1803ce910:	48 89 85 c8 03 00 00 	mov    %rax,0x3c8(%rbp)
   1803ce917:	ff 15 73 c9 19 00    	call   *0x19c973(%rip)        # 0x18056b290
   1803ce91d:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803ce923:	4c 8d 85 b8 03 00 00 	lea    0x3b8(%rbp),%r8
   1803ce92a:	48 8b c8             	mov    %rax,%rcx
   1803ce92d:	48 8b d3             	mov    %rbx,%rdx
   1803ce930:	ff 15 62 c9 19 00    	call   *0x19c962(%rip)        # 0x18056b298
   1803ce936:	85 c0                	test   %eax,%eax
   1803ce938:	74 6d                	je     0x1803ce9a7
   1803ce93a:	48 8b 85 b8 03 00 00 	mov    0x3b8(%rbp),%rax
   1803ce941:	8b 8d c0 03 00 00    	mov    0x3c0(%rbp),%ecx
   1803ce947:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803ce94c:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803ce951:	48 85 c0             	test   %rax,%rax
   1803ce954:	74 51                	je     0x1803ce9a7
   1803ce956:	48 85 c9             	test   %rcx,%rcx
   1803ce959:	74 4c                	je     0x1803ce9a7
   1803ce95b:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803ce960:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803ce965:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803ce96a:	48 c7 44 24 38 37 00 	movq   $0x37,0x38(%rsp)
   1803ce971:	00 00 
   1803ce973:	e8 88 34 e0 ff       	call   0x1801d1e00
   1803ce978:	48 8b d8             	mov    %rax,%rbx
   1803ce97b:	48 85 c0             	test   %rax,%rax
   1803ce97e:	75 0c                	jne    0x1803ce98c
   1803ce980:	4c 8b cf             	mov    %rdi,%r9
   1803ce983:	48 8d 0d 4e 78 4d 00 	lea    0x4d784e(%rip),%rcx        # 0x1808a61d8
   1803ce98a:	eb 29                	jmp    0x1803ce9b5
   1803ce98c:	4c 8b c8             	mov    %rax,%r9
   1803ce98f:	48 8d 15 f2 7e 4d 00 	lea    0x4d7ef2(%rip),%rdx        # 0x1808a6888
   1803ce996:	4c 8b c7             	mov    %rdi,%r8
   1803ce999:	48 8d 0d 90 38 30 00 	lea    0x303890(%rip),%rcx        # 0x1806d2230
   1803ce9a0:	e8 cb b9 ff ff       	call   0x1803ca370
   1803ce9a5:	eb 2a                	jmp    0x1803ce9d1
   1803ce9a7:	4c 8d 0d 95 cc 1b 00 	lea    0x1bcc95(%rip),%r9        # 0x18058b643
   1803ce9ae:	48 8d 0d 4b 78 4d 00 	lea    0x4d784b(%rip),%rcx        # 0x1808a6200
   1803ce9b5:	ff 05 85 2e d4 00    	incl   0xd42e85(%rip)        # 0x181111840
   1803ce9bb:	4c 8d 05 c6 7e 4d 00 	lea    0x4d7ec6(%rip),%r8        # 0x1808a6888
   1803ce9c2:	48 8d 15 67 38 30 00 	lea    0x303867(%rip),%rdx        # 0x1806d2230
   1803ce9c9:	e8 92 3b ee ff       	call   0x1802b2560
   1803ce9ce:	49 8b de             	mov    %r14,%rbx
   1803ce9d1:	ff 05 6d 2e d4 00    	incl   0xd42e6d(%rip)        # 0x181111844
   1803ce9d7:	48 8d 3d f2 38 4d 00 	lea    0x4d38f2(%rip),%rdi        # 0x1808a22d0
   1803ce9de:	4c 8b c7             	mov    %rdi,%r8
   1803ce9e1:	48 89 1d 90 31 59 00 	mov    %rbx,0x593190(%rip)        # 0x180961b78
   1803ce9e8:	45 33 c9             	xor    %r9d,%r9d
   1803ce9eb:	48 8d 15 86 7e 4d 00 	lea    0x4d7e86(%rip),%rdx        # 0x1808a6878
   1803ce9f2:	48 8d 0d 37 38 30 00 	lea    0x303837(%rip),%rcx        # 0x1806d2230
   1803ce9f9:	e8 72 b9 ff ff       	call   0x1803ca370
   1803ce9fe:	48 8d 0d 2b 38 30 00 	lea    0x30382b(%rip),%rcx        # 0x1806d2230
   1803cea05:	ff 15 75 c7 19 00    	call   *0x19c775(%rip)        # 0x18056b180
   1803cea0b:	48 8b d8             	mov    %rax,%rbx
   1803cea0e:	48 85 c0             	test   %rax,%rax
   1803cea11:	0f 84 a3 00 00 00    	je     0x1803ceaba
   1803cea17:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803cea1a:	33 c0                	xor    %eax,%eax
   1803cea1c:	0f 11 85 d0 03 00 00 	movups %xmm0,0x3d0(%rbp)
   1803cea23:	48 89 85 e0 03 00 00 	mov    %rax,0x3e0(%rbp)
   1803cea2a:	ff 15 60 c8 19 00    	call   *0x19c860(%rip)        # 0x18056b290
   1803cea30:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803cea36:	4c 8d 85 d0 03 00 00 	lea    0x3d0(%rbp),%r8
   1803cea3d:	48 8b c8             	mov    %rax,%rcx
   1803cea40:	48 8b d3             	mov    %rbx,%rdx
   1803cea43:	ff 15 4f c8 19 00    	call   *0x19c84f(%rip)        # 0x18056b298
   1803cea49:	85 c0                	test   %eax,%eax
   1803cea4b:	74 6d                	je     0x1803ceaba
   1803cea4d:	48 8b 85 d0 03 00 00 	mov    0x3d0(%rbp),%rax
   1803cea54:	8b 8d d8 03 00 00    	mov    0x3d8(%rbp),%ecx
   1803cea5a:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803cea5f:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803cea64:	48 85 c0             	test   %rax,%rax
   1803cea67:	74 51                	je     0x1803ceaba
   1803cea69:	48 85 c9             	test   %rcx,%rcx
   1803cea6c:	74 4c                	je     0x1803ceaba
   1803cea6e:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803cea73:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803cea78:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803cea7d:	48 c7 44 24 38 35 00 	movq   $0x35,0x38(%rsp)
   1803cea84:	00 00 
   1803cea86:	e8 75 33 e0 ff       	call   0x1801d1e00
   1803cea8b:	48 8b d8             	mov    %rax,%rbx
   1803cea8e:	48 85 c0             	test   %rax,%rax
   1803cea91:	75 0c                	jne    0x1803cea9f
   1803cea93:	4c 8b cf             	mov    %rdi,%r9
   1803cea96:	48 8d 0d 3b 77 4d 00 	lea    0x4d773b(%rip),%rcx        # 0x1808a61d8
   1803cea9d:	eb 29                	jmp    0x1803ceac8
   1803cea9f:	4c 8b c8             	mov    %rax,%r9
   1803ceaa2:	48 8d 15 cf 7d 4d 00 	lea    0x4d7dcf(%rip),%rdx        # 0x1808a6878
   1803ceaa9:	4c 8b c7             	mov    %rdi,%r8
   1803ceaac:	48 8d 0d 7d 37 30 00 	lea    0x30377d(%rip),%rcx        # 0x1806d2230
   1803ceab3:	e8 b8 b8 ff ff       	call   0x1803ca370
   1803ceab8:	eb 2a                	jmp    0x1803ceae4
   1803ceaba:	4c 8d 0d 82 cb 1b 00 	lea    0x1bcb82(%rip),%r9        # 0x18058b643
   1803ceac1:	48 8d 0d 38 77 4d 00 	lea    0x4d7738(%rip),%rcx        # 0x1808a6200
   1803ceac8:	ff 05 72 2d d4 00    	incl   0xd42d72(%rip)        # 0x181111840
   1803ceace:	4c 8d 05 a3 7d 4d 00 	lea    0x4d7da3(%rip),%r8        # 0x1808a6878
   1803cead5:	48 8d 15 54 37 30 00 	lea    0x303754(%rip),%rdx        # 0x1806d2230
   1803ceadc:	e8 7f 3a ee ff       	call   0x1802b2560
   1803ceae1:	49 8b de             	mov    %r14,%rbx
   1803ceae4:	ff 05 5a 2d d4 00    	incl   0xd42d5a(%rip)        # 0x181111844
   1803ceaea:	48 8d 3d 8f 37 4d 00 	lea    0x4d378f(%rip),%rdi        # 0x1808a2280
   1803ceaf1:	4c 8b c7             	mov    %rdi,%r8
   1803ceaf4:	48 89 1d 85 30 59 00 	mov    %rbx,0x593085(%rip)        # 0x180961b80
   1803ceafb:	45 33 c9             	xor    %r9d,%r9d
   1803ceafe:	48 8d 15 63 7d 4d 00 	lea    0x4d7d63(%rip),%rdx        # 0x1808a6868
   1803ceb05:	48 8d 0d 24 37 30 00 	lea    0x303724(%rip),%rcx        # 0x1806d2230
   1803ceb0c:	e8 5f b8 ff ff       	call   0x1803ca370
   1803ceb11:	48 8d 0d 18 37 30 00 	lea    0x303718(%rip),%rcx        # 0x1806d2230
   1803ceb18:	ff 15 62 c6 19 00    	call   *0x19c662(%rip)        # 0x18056b180
   1803ceb1e:	48 8b d8             	mov    %rax,%rbx
   1803ceb21:	48 85 c0             	test   %rax,%rax
   1803ceb24:	0f 84 a3 00 00 00    	je     0x1803cebcd
   1803ceb2a:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803ceb2d:	33 c0                	xor    %eax,%eax
   1803ceb2f:	0f 11 85 e8 03 00 00 	movups %xmm0,0x3e8(%rbp)
   1803ceb36:	48 89 85 f8 03 00 00 	mov    %rax,0x3f8(%rbp)
   1803ceb3d:	ff 15 4d c7 19 00    	call   *0x19c74d(%rip)        # 0x18056b290
   1803ceb43:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803ceb49:	4c 8d 85 e8 03 00 00 	lea    0x3e8(%rbp),%r8
   1803ceb50:	48 8b c8             	mov    %rax,%rcx
   1803ceb53:	48 8b d3             	mov    %rbx,%rdx
   1803ceb56:	ff 15 3c c7 19 00    	call   *0x19c73c(%rip)        # 0x18056b298
   1803ceb5c:	85 c0                	test   %eax,%eax
   1803ceb5e:	74 6d                	je     0x1803cebcd
   1803ceb60:	48 8b 85 e8 03 00 00 	mov    0x3e8(%rbp),%rax
   1803ceb67:	8b 8d f0 03 00 00    	mov    0x3f0(%rbp),%ecx
   1803ceb6d:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803ceb72:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803ceb77:	48 85 c0             	test   %rax,%rax
   1803ceb7a:	74 51                	je     0x1803cebcd
   1803ceb7c:	48 85 c9             	test   %rcx,%rcx
   1803ceb7f:	74 4c                	je     0x1803cebcd
   1803ceb81:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803ceb86:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803ceb8b:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803ceb90:	48 c7 44 24 38 4d 00 	movq   $0x4d,0x38(%rsp)
   1803ceb97:	00 00 
   1803ceb99:	e8 62 32 e0 ff       	call   0x1801d1e00
   1803ceb9e:	48 8b d8             	mov    %rax,%rbx
   1803ceba1:	48 85 c0             	test   %rax,%rax
   1803ceba4:	75 0c                	jne    0x1803cebb2
   1803ceba6:	4c 8b cf             	mov    %rdi,%r9
   1803ceba9:	48 8d 0d 28 76 4d 00 	lea    0x4d7628(%rip),%rcx        # 0x1808a61d8
   1803cebb0:	eb 29                	jmp    0x1803cebdb
   1803cebb2:	4c 8b c8             	mov    %rax,%r9
   1803cebb5:	48 8d 15 ac 7c 4d 00 	lea    0x4d7cac(%rip),%rdx        # 0x1808a6868
   1803cebbc:	4c 8b c7             	mov    %rdi,%r8
   1803cebbf:	48 8d 0d 6a 36 30 00 	lea    0x30366a(%rip),%rcx        # 0x1806d2230
   1803cebc6:	e8 a5 b7 ff ff       	call   0x1803ca370
   1803cebcb:	eb 2a                	jmp    0x1803cebf7
   1803cebcd:	4c 8d 0d 6f ca 1b 00 	lea    0x1bca6f(%rip),%r9        # 0x18058b643
   1803cebd4:	48 8d 0d 25 76 4d 00 	lea    0x4d7625(%rip),%rcx        # 0x1808a6200
   1803cebdb:	ff 05 5f 2c d4 00    	incl   0xd42c5f(%rip)        # 0x181111840
   1803cebe1:	4c 8d 05 80 7c 4d 00 	lea    0x4d7c80(%rip),%r8        # 0x1808a6868
   1803cebe8:	48 8d 15 41 36 30 00 	lea    0x303641(%rip),%rdx        # 0x1806d2230
   1803cebef:	e8 6c 39 ee ff       	call   0x1802b2560
   1803cebf4:	49 8b de             	mov    %r14,%rbx
   1803cebf7:	ff 05 47 2c d4 00    	incl   0xd42c47(%rip)        # 0x181111844
   1803cebfd:	48 8d 3d 2c 36 4d 00 	lea    0x4d362c(%rip),%rdi        # 0x1808a2230
   1803cec04:	4c 8b c7             	mov    %rdi,%r8
   1803cec07:	48 89 1d 7a 2f 59 00 	mov    %rbx,0x592f7a(%rip)        # 0x180961b88
   1803cec0e:	45 33 c9             	xor    %r9d,%r9d
   1803cec11:	48 8d 15 40 7c 4d 00 	lea    0x4d7c40(%rip),%rdx        # 0x1808a6858
   1803cec18:	48 8d 0d 11 36 30 00 	lea    0x303611(%rip),%rcx        # 0x1806d2230
   1803cec1f:	e8 4c b7 ff ff       	call   0x1803ca370
   1803cec24:	48 8d 0d 05 36 30 00 	lea    0x303605(%rip),%rcx        # 0x1806d2230
   1803cec2b:	ff 15 4f c5 19 00    	call   *0x19c54f(%rip)        # 0x18056b180
   1803cec31:	48 8b d8             	mov    %rax,%rbx
   1803cec34:	48 85 c0             	test   %rax,%rax
   1803cec37:	0f 84 a3 00 00 00    	je     0x1803cece0
   1803cec3d:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803cec40:	33 c0                	xor    %eax,%eax
   1803cec42:	0f 11 85 00 04 00 00 	movups %xmm0,0x400(%rbp)
   1803cec49:	48 89 85 10 04 00 00 	mov    %rax,0x410(%rbp)
   1803cec50:	ff 15 3a c6 19 00    	call   *0x19c63a(%rip)        # 0x18056b290
   1803cec56:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803cec5c:	4c 8d 85 00 04 00 00 	lea    0x400(%rbp),%r8
   1803cec63:	48 8b c8             	mov    %rax,%rcx
   1803cec66:	48 8b d3             	mov    %rbx,%rdx
   1803cec69:	ff 15 29 c6 19 00    	call   *0x19c629(%rip)        # 0x18056b298
   1803cec6f:	85 c0                	test   %eax,%eax
   1803cec71:	74 6d                	je     0x1803cece0
   1803cec73:	48 8b 85 00 04 00 00 	mov    0x400(%rbp),%rax
   1803cec7a:	8b 8d 08 04 00 00    	mov    0x408(%rbp),%ecx
   1803cec80:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803cec85:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803cec8a:	48 85 c0             	test   %rax,%rax
   1803cec8d:	74 51                	je     0x1803cece0
   1803cec8f:	48 85 c9             	test   %rcx,%rcx
   1803cec92:	74 4c                	je     0x1803cece0
   1803cec94:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803cec99:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803cec9e:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803ceca3:	48 c7 44 24 38 4a 00 	movq   $0x4a,0x38(%rsp)
   1803cecaa:	00 00 
   1803cecac:	e8 4f 31 e0 ff       	call   0x1801d1e00
   1803cecb1:	48 8b d8             	mov    %rax,%rbx
   1803cecb4:	48 85 c0             	test   %rax,%rax
   1803cecb7:	75 0c                	jne    0x1803cecc5
   1803cecb9:	4c 8b cf             	mov    %rdi,%r9
   1803cecbc:	48 8d 0d 15 75 4d 00 	lea    0x4d7515(%rip),%rcx        # 0x1808a61d8
   1803cecc3:	eb 29                	jmp    0x1803cecee
   1803cecc5:	4c 8b c8             	mov    %rax,%r9
   1803cecc8:	48 8d 15 89 7b 4d 00 	lea    0x4d7b89(%rip),%rdx        # 0x1808a6858
   1803ceccf:	4c 8b c7             	mov    %rdi,%r8
   1803cecd2:	48 8d 0d 57 35 30 00 	lea    0x303557(%rip),%rcx        # 0x1806d2230
   1803cecd9:	e8 92 b6 ff ff       	call   0x1803ca370
   1803cecde:	eb 2a                	jmp    0x1803ced0a
   1803cece0:	4c 8d 0d 5c c9 1b 00 	lea    0x1bc95c(%rip),%r9        # 0x18058b643
   1803cece7:	48 8d 0d 12 75 4d 00 	lea    0x4d7512(%rip),%rcx        # 0x1808a6200
   1803cecee:	ff 05 4c 2b d4 00    	incl   0xd42b4c(%rip)        # 0x181111840
   1803cecf4:	4c 8d 05 5d 7b 4d 00 	lea    0x4d7b5d(%rip),%r8        # 0x1808a6858
   1803cecfb:	48 8d 15 2e 35 30 00 	lea    0x30352e(%rip),%rdx        # 0x1806d2230
   1803ced02:	e8 59 38 ee ff       	call   0x1802b2560
   1803ced07:	49 8b de             	mov    %r14,%rbx
   1803ced0a:	ff 05 34 2b d4 00    	incl   0xd42b34(%rip)        # 0x181111844
   1803ced10:	48 8d 3d d9 34 4d 00 	lea    0x4d34d9(%rip),%rdi        # 0x1808a21f0
   1803ced17:	4c 8b c7             	mov    %rdi,%r8
   1803ced1a:	48 89 1d 6f 2e 59 00 	mov    %rbx,0x592e6f(%rip)        # 0x180961b90
   1803ced21:	45 33 c9             	xor    %r9d,%r9d
   1803ced24:	48 8d 15 1d 7b 4d 00 	lea    0x4d7b1d(%rip),%rdx        # 0x1808a6848
   1803ced2b:	48 8d 0d fe 34 30 00 	lea    0x3034fe(%rip),%rcx        # 0x1806d2230
   1803ced32:	e8 39 b6 ff ff       	call   0x1803ca370
   1803ced37:	48 8d 0d f2 34 30 00 	lea    0x3034f2(%rip),%rcx        # 0x1806d2230
   1803ced3e:	ff 15 3c c4 19 00    	call   *0x19c43c(%rip)        # 0x18056b180
   1803ced44:	48 8b d8             	mov    %rax,%rbx
   1803ced47:	48 85 c0             	test   %rax,%rax
   1803ced4a:	0f 84 a3 00 00 00    	je     0x1803cedf3
   1803ced50:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803ced53:	33 c0                	xor    %eax,%eax
   1803ced55:	0f 11 85 18 04 00 00 	movups %xmm0,0x418(%rbp)
   1803ced5c:	48 89 85 28 04 00 00 	mov    %rax,0x428(%rbp)
   1803ced63:	ff 15 27 c5 19 00    	call   *0x19c527(%rip)        # 0x18056b290
   1803ced69:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803ced6f:	4c 8d 85 18 04 00 00 	lea    0x418(%rbp),%r8
   1803ced76:	48 8b c8             	mov    %rax,%rcx
   1803ced79:	48 8b d3             	mov    %rbx,%rdx
   1803ced7c:	ff 15 16 c5 19 00    	call   *0x19c516(%rip)        # 0x18056b298
   1803ced82:	85 c0                	test   %eax,%eax
   1803ced84:	74 6d                	je     0x1803cedf3
   1803ced86:	48 8b 85 18 04 00 00 	mov    0x418(%rbp),%rax
   1803ced8d:	8b 8d 20 04 00 00    	mov    0x420(%rbp),%ecx
   1803ced93:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803ced98:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803ced9d:	48 85 c0             	test   %rax,%rax
   1803ceda0:	74 51                	je     0x1803cedf3
   1803ceda2:	48 85 c9             	test   %rcx,%rcx
   1803ceda5:	74 4c                	je     0x1803cedf3
   1803ceda7:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803cedac:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803cedb1:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803cedb6:	48 c7 44 24 38 3e 00 	movq   $0x3e,0x38(%rsp)
   1803cedbd:	00 00 
   1803cedbf:	e8 3c 30 e0 ff       	call   0x1801d1e00
   1803cedc4:	48 8b d8             	mov    %rax,%rbx
   1803cedc7:	48 85 c0             	test   %rax,%rax
   1803cedca:	75 0c                	jne    0x1803cedd8
   1803cedcc:	4c 8b cf             	mov    %rdi,%r9
   1803cedcf:	48 8d 0d 02 74 4d 00 	lea    0x4d7402(%rip),%rcx        # 0x1808a61d8
   1803cedd6:	eb 29                	jmp    0x1803cee01
   1803cedd8:	4c 8b c8             	mov    %rax,%r9
   1803ceddb:	48 8d 15 66 7a 4d 00 	lea    0x4d7a66(%rip),%rdx        # 0x1808a6848
   1803cede2:	4c 8b c7             	mov    %rdi,%r8
   1803cede5:	48 8d 0d 44 34 30 00 	lea    0x303444(%rip),%rcx        # 0x1806d2230
   1803cedec:	e8 7f b5 ff ff       	call   0x1803ca370
   1803cedf1:	eb 2a                	jmp    0x1803cee1d
   1803cedf3:	4c 8d 0d 49 c8 1b 00 	lea    0x1bc849(%rip),%r9        # 0x18058b643
   1803cedfa:	48 8d 0d ff 73 4d 00 	lea    0x4d73ff(%rip),%rcx        # 0x1808a6200
   1803cee01:	ff 05 39 2a d4 00    	incl   0xd42a39(%rip)        # 0x181111840
   1803cee07:	4c 8d 05 3a 7a 4d 00 	lea    0x4d7a3a(%rip),%r8        # 0x1808a6848
   1803cee0e:	48 8d 15 1b 34 30 00 	lea    0x30341b(%rip),%rdx        # 0x1806d2230
   1803cee15:	e8 46 37 ee ff       	call   0x1802b2560
   1803cee1a:	49 8b de             	mov    %r14,%rbx
   1803cee1d:	ff 05 21 2a d4 00    	incl   0xd42a21(%rip)        # 0x181111844
   1803cee23:	48 8d 3d a6 33 4d 00 	lea    0x4d33a6(%rip),%rdi        # 0x1808a21d0
   1803cee2a:	4c 8b c7             	mov    %rdi,%r8
   1803cee2d:	48 89 1d 64 2d 59 00 	mov    %rbx,0x592d64(%rip)        # 0x180961b98
   1803cee34:	45 33 c9             	xor    %r9d,%r9d
   1803cee37:	48 8d 15 fa 79 4d 00 	lea    0x4d79fa(%rip),%rdx        # 0x1808a6838
   1803cee3e:	48 8d 0d eb 33 30 00 	lea    0x3033eb(%rip),%rcx        # 0x1806d2230
   1803cee45:	e8 26 b5 ff ff       	call   0x1803ca370
   1803cee4a:	48 8d 0d df 33 30 00 	lea    0x3033df(%rip),%rcx        # 0x1806d2230
   1803cee51:	ff 15 29 c3 19 00    	call   *0x19c329(%rip)        # 0x18056b180
   1803cee57:	48 8b d8             	mov    %rax,%rbx
   1803cee5a:	48 85 c0             	test   %rax,%rax
   1803cee5d:	0f 84 a3 00 00 00    	je     0x1803cef06
   1803cee63:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803cee66:	33 c0                	xor    %eax,%eax
   1803cee68:	0f 11 85 30 04 00 00 	movups %xmm0,0x430(%rbp)
   1803cee6f:	48 89 85 40 04 00 00 	mov    %rax,0x440(%rbp)
   1803cee76:	ff 15 14 c4 19 00    	call   *0x19c414(%rip)        # 0x18056b290
   1803cee7c:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803cee82:	4c 8d 85 30 04 00 00 	lea    0x430(%rbp),%r8
   1803cee89:	48 8b c8             	mov    %rax,%rcx
   1803cee8c:	48 8b d3             	mov    %rbx,%rdx
   1803cee8f:	ff 15 03 c4 19 00    	call   *0x19c403(%rip)        # 0x18056b298
   1803cee95:	85 c0                	test   %eax,%eax
   1803cee97:	74 6d                	je     0x1803cef06
   1803cee99:	48 8b 85 30 04 00 00 	mov    0x430(%rbp),%rax
   1803ceea0:	8b 8d 38 04 00 00    	mov    0x438(%rbp),%ecx
   1803ceea6:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803ceeab:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803ceeb0:	48 85 c0             	test   %rax,%rax
   1803ceeb3:	74 51                	je     0x1803cef06
   1803ceeb5:	48 85 c9             	test   %rcx,%rcx
   1803ceeb8:	74 4c                	je     0x1803cef06
   1803ceeba:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803ceebf:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803ceec4:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803ceec9:	48 c7 44 24 38 1f 00 	movq   $0x1f,0x38(%rsp)
   1803ceed0:	00 00 
   1803ceed2:	e8 29 2f e0 ff       	call   0x1801d1e00
   1803ceed7:	48 8b d8             	mov    %rax,%rbx
   1803ceeda:	48 85 c0             	test   %rax,%rax
   1803ceedd:	75 0c                	jne    0x1803ceeeb
   1803ceedf:	4c 8b cf             	mov    %rdi,%r9
   1803ceee2:	48 8d 0d ef 72 4d 00 	lea    0x4d72ef(%rip),%rcx        # 0x1808a61d8
   1803ceee9:	eb 29                	jmp    0x1803cef14
   1803ceeeb:	4c 8b c8             	mov    %rax,%r9
   1803ceeee:	48 8d 15 43 79 4d 00 	lea    0x4d7943(%rip),%rdx        # 0x1808a6838
   1803ceef5:	4c 8b c7             	mov    %rdi,%r8
   1803ceef8:	48 8d 0d 31 33 30 00 	lea    0x303331(%rip),%rcx        # 0x1806d2230
   1803ceeff:	e8 6c b4 ff ff       	call   0x1803ca370
   1803cef04:	eb 2a                	jmp    0x1803cef30
   1803cef06:	4c 8d 0d 36 c7 1b 00 	lea    0x1bc736(%rip),%r9        # 0x18058b643
   1803cef0d:	48 8d 0d ec 72 4d 00 	lea    0x4d72ec(%rip),%rcx        # 0x1808a6200
   1803cef14:	ff 05 26 29 d4 00    	incl   0xd42926(%rip)        # 0x181111840
   1803cef1a:	4c 8d 05 17 79 4d 00 	lea    0x4d7917(%rip),%r8        # 0x1808a6838
   1803cef21:	48 8d 15 08 33 30 00 	lea    0x303308(%rip),%rdx        # 0x1806d2230
   1803cef28:	e8 33 36 ee ff       	call   0x1802b2560
   1803cef2d:	49 8b de             	mov    %r14,%rbx
   1803cef30:	ff 05 0e 29 d4 00    	incl   0xd4290e(%rip)        # 0x181111844
   1803cef36:	48 8d 3d 53 32 4d 00 	lea    0x4d3253(%rip),%rdi        # 0x1808a2190
   1803cef3d:	4c 8b c7             	mov    %rdi,%r8
   1803cef40:	48 89 1d 59 2c 59 00 	mov    %rbx,0x592c59(%rip)        # 0x180961ba0
   1803cef47:	45 33 c9             	xor    %r9d,%r9d
   1803cef4a:	48 8d 15 d7 78 4d 00 	lea    0x4d78d7(%rip),%rdx        # 0x1808a6828
   1803cef51:	48 8d 0d d8 32 30 00 	lea    0x3032d8(%rip),%rcx        # 0x1806d2230
   1803cef58:	e8 13 b4 ff ff       	call   0x1803ca370
   1803cef5d:	48 8d 0d cc 32 30 00 	lea    0x3032cc(%rip),%rcx        # 0x1806d2230
   1803cef64:	ff 15 16 c2 19 00    	call   *0x19c216(%rip)        # 0x18056b180
   1803cef6a:	48 8b d8             	mov    %rax,%rbx
   1803cef6d:	48 85 c0             	test   %rax,%rax
   1803cef70:	0f 84 a3 00 00 00    	je     0x1803cf019
   1803cef76:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803cef79:	33 c0                	xor    %eax,%eax
   1803cef7b:	0f 11 85 48 04 00 00 	movups %xmm0,0x448(%rbp)
   1803cef82:	48 89 85 58 04 00 00 	mov    %rax,0x458(%rbp)
   1803cef89:	ff 15 01 c3 19 00    	call   *0x19c301(%rip)        # 0x18056b290
   1803cef8f:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803cef95:	4c 8d 85 48 04 00 00 	lea    0x448(%rbp),%r8
   1803cef9c:	48 8b c8             	mov    %rax,%rcx
   1803cef9f:	48 8b d3             	mov    %rbx,%rdx
   1803cefa2:	ff 15 f0 c2 19 00    	call   *0x19c2f0(%rip)        # 0x18056b298
   1803cefa8:	85 c0                	test   %eax,%eax
   1803cefaa:	74 6d                	je     0x1803cf019
   1803cefac:	48 8b 85 48 04 00 00 	mov    0x448(%rbp),%rax
   1803cefb3:	8b 8d 50 04 00 00    	mov    0x450(%rbp),%ecx
   1803cefb9:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803cefbe:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803cefc3:	48 85 c0             	test   %rax,%rax
   1803cefc6:	74 51                	je     0x1803cf019
   1803cefc8:	48 85 c9             	test   %rcx,%rcx
   1803cefcb:	74 4c                	je     0x1803cf019
   1803cefcd:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803cefd2:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803cefd7:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803cefdc:	48 c7 44 24 38 38 00 	movq   $0x38,0x38(%rsp)
   1803cefe3:	00 00 
   1803cefe5:	e8 16 2e e0 ff       	call   0x1801d1e00
   1803cefea:	48 8b d8             	mov    %rax,%rbx
   1803cefed:	48 85 c0             	test   %rax,%rax
   1803ceff0:	75 0c                	jne    0x1803ceffe
   1803ceff2:	4c 8b cf             	mov    %rdi,%r9
   1803ceff5:	48 8d 0d dc 71 4d 00 	lea    0x4d71dc(%rip),%rcx        # 0x1808a61d8
   1803ceffc:	eb 29                	jmp    0x1803cf027
   1803ceffe:	4c 8b c8             	mov    %rax,%r9
   1803cf001:	48 8d 15 20 78 4d 00 	lea    0x4d7820(%rip),%rdx        # 0x1808a6828
   1803cf008:	4c 8b c7             	mov    %rdi,%r8
   1803cf00b:	48 8d 0d 1e 32 30 00 	lea    0x30321e(%rip),%rcx        # 0x1806d2230
   1803cf012:	e8 59 b3 ff ff       	call   0x1803ca370
   1803cf017:	eb 2a                	jmp    0x1803cf043
   1803cf019:	4c 8d 0d 23 c6 1b 00 	lea    0x1bc623(%rip),%r9        # 0x18058b643
   1803cf020:	48 8d 0d d9 71 4d 00 	lea    0x4d71d9(%rip),%rcx        # 0x1808a6200
   1803cf027:	ff 05 13 28 d4 00    	incl   0xd42813(%rip)        # 0x181111840
   1803cf02d:	4c 8d 05 f4 77 4d 00 	lea    0x4d77f4(%rip),%r8        # 0x1808a6828
   1803cf034:	48 8d 15 f5 31 30 00 	lea    0x3031f5(%rip),%rdx        # 0x1806d2230
   1803cf03b:	e8 20 35 ee ff       	call   0x1802b2560
   1803cf040:	49 8b de             	mov    %r14,%rbx
   1803cf043:	ff 05 fb 27 d4 00    	incl   0xd427fb(%rip)        # 0x181111844
   1803cf049:	48 8d 3d d8 36 4d 00 	lea    0x4d36d8(%rip),%rdi        # 0x1808a2728
   1803cf050:	4c 8b c7             	mov    %rdi,%r8
   1803cf053:	48 89 1d 4e 2b 59 00 	mov    %rbx,0x592b4e(%rip)        # 0x180961ba8
   1803cf05a:	45 33 c9             	xor    %r9d,%r9d
   1803cf05d:	48 8d 15 b4 77 4d 00 	lea    0x4d77b4(%rip),%rdx        # 0x1808a6818
   1803cf064:	48 8d 0d c5 31 30 00 	lea    0x3031c5(%rip),%rcx        # 0x1806d2230
   1803cf06b:	e8 00 b3 ff ff       	call   0x1803ca370
   1803cf070:	48 8d 0d b9 31 30 00 	lea    0x3031b9(%rip),%rcx        # 0x1806d2230
   1803cf077:	ff 15 03 c1 19 00    	call   *0x19c103(%rip)        # 0x18056b180
   1803cf07d:	48 8b d8             	mov    %rax,%rbx
   1803cf080:	48 85 c0             	test   %rax,%rax
   1803cf083:	0f 84 a3 00 00 00    	je     0x1803cf12c
   1803cf089:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803cf08c:	33 c0                	xor    %eax,%eax
   1803cf08e:	0f 11 85 60 04 00 00 	movups %xmm0,0x460(%rbp)
   1803cf095:	48 89 85 70 04 00 00 	mov    %rax,0x470(%rbp)
   1803cf09c:	ff 15 ee c1 19 00    	call   *0x19c1ee(%rip)        # 0x18056b290
   1803cf0a2:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803cf0a8:	4c 8d 85 60 04 00 00 	lea    0x460(%rbp),%r8
   1803cf0af:	48 8b c8             	mov    %rax,%rcx
   1803cf0b2:	48 8b d3             	mov    %rbx,%rdx
   1803cf0b5:	ff 15 dd c1 19 00    	call   *0x19c1dd(%rip)        # 0x18056b298
   1803cf0bb:	85 c0                	test   %eax,%eax
   1803cf0bd:	74 6d                	je     0x1803cf12c
   1803cf0bf:	48 8b 85 60 04 00 00 	mov    0x460(%rbp),%rax
   1803cf0c6:	8b 8d 68 04 00 00    	mov    0x468(%rbp),%ecx
   1803cf0cc:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803cf0d1:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803cf0d6:	48 85 c0             	test   %rax,%rax
   1803cf0d9:	74 51                	je     0x1803cf12c
   1803cf0db:	48 85 c9             	test   %rcx,%rcx
   1803cf0de:	74 4c                	je     0x1803cf12c
   1803cf0e0:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803cf0e5:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803cf0ea:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803cf0ef:	48 c7 44 24 38 38 00 	movq   $0x38,0x38(%rsp)
   1803cf0f6:	00 00 
   1803cf0f8:	e8 03 2d e0 ff       	call   0x1801d1e00
   1803cf0fd:	48 8b d8             	mov    %rax,%rbx
   1803cf100:	48 85 c0             	test   %rax,%rax
   1803cf103:	75 0c                	jne    0x1803cf111
   1803cf105:	4c 8b cf             	mov    %rdi,%r9
   1803cf108:	48 8d 0d c9 70 4d 00 	lea    0x4d70c9(%rip),%rcx        # 0x1808a61d8
   1803cf10f:	eb 29                	jmp    0x1803cf13a
   1803cf111:	4c 8b c8             	mov    %rax,%r9
   1803cf114:	48 8d 15 fd 76 4d 00 	lea    0x4d76fd(%rip),%rdx        # 0x1808a6818
   1803cf11b:	4c 8b c7             	mov    %rdi,%r8
   1803cf11e:	48 8d 0d 0b 31 30 00 	lea    0x30310b(%rip),%rcx        # 0x1806d2230
   1803cf125:	e8 46 b2 ff ff       	call   0x1803ca370
   1803cf12a:	eb 2a                	jmp    0x1803cf156
   1803cf12c:	4c 8d 0d 10 c5 1b 00 	lea    0x1bc510(%rip),%r9        # 0x18058b643
   1803cf133:	48 8d 0d c6 70 4d 00 	lea    0x4d70c6(%rip),%rcx        # 0x1808a6200
   1803cf13a:	ff 05 00 27 d4 00    	incl   0xd42700(%rip)        # 0x181111840
   1803cf140:	4c 8d 05 d1 76 4d 00 	lea    0x4d76d1(%rip),%r8        # 0x1808a6818
   1803cf147:	48 8d 15 e2 30 30 00 	lea    0x3030e2(%rip),%rdx        # 0x1806d2230
   1803cf14e:	e8 0d 34 ee ff       	call   0x1802b2560
   1803cf153:	49 8b de             	mov    %r14,%rbx
   1803cf156:	ff 05 e8 26 d4 00    	incl   0xd426e8(%rip)        # 0x181111844
   1803cf15c:	48 8d 3d 8d 33 4d 00 	lea    0x4d338d(%rip),%rdi        # 0x1808a24f0
   1803cf163:	4c 8b c7             	mov    %rdi,%r8
   1803cf166:	48 89 1d 43 2a 59 00 	mov    %rbx,0x592a43(%rip)        # 0x180961bb0
   1803cf16d:	45 33 c9             	xor    %r9d,%r9d
   1803cf170:	48 8d 15 b1 77 4d 00 	lea    0x4d77b1(%rip),%rdx        # 0x1808a6928
   1803cf177:	48 8d 0d b2 30 30 00 	lea    0x3030b2(%rip),%rcx        # 0x1806d2230
   1803cf17e:	e8 ed b1 ff ff       	call   0x1803ca370
   1803cf183:	48 8d 0d a6 30 30 00 	lea    0x3030a6(%rip),%rcx        # 0x1806d2230
   1803cf18a:	ff 15 f0 bf 19 00    	call   *0x19bff0(%rip)        # 0x18056b180
   1803cf190:	48 8b d8             	mov    %rax,%rbx
   1803cf193:	48 85 c0             	test   %rax,%rax
   1803cf196:	0f 84 a3 00 00 00    	je     0x1803cf23f
   1803cf19c:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803cf19f:	33 c0                	xor    %eax,%eax
   1803cf1a1:	0f 11 85 78 04 00 00 	movups %xmm0,0x478(%rbp)
   1803cf1a8:	48 89 85 88 04 00 00 	mov    %rax,0x488(%rbp)
   1803cf1af:	ff 15 db c0 19 00    	call   *0x19c0db(%rip)        # 0x18056b290
   1803cf1b5:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803cf1bb:	4c 8d 85 78 04 00 00 	lea    0x478(%rbp),%r8
   1803cf1c2:	48 8b c8             	mov    %rax,%rcx
   1803cf1c5:	48 8b d3             	mov    %rbx,%rdx
   1803cf1c8:	ff 15 ca c0 19 00    	call   *0x19c0ca(%rip)        # 0x18056b298
   1803cf1ce:	85 c0                	test   %eax,%eax
   1803cf1d0:	74 6d                	je     0x1803cf23f
   1803cf1d2:	48 8b 85 78 04 00 00 	mov    0x478(%rbp),%rax
   1803cf1d9:	8b 8d 80 04 00 00    	mov    0x480(%rbp),%ecx
   1803cf1df:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803cf1e4:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803cf1e9:	48 85 c0             	test   %rax,%rax
   1803cf1ec:	74 51                	je     0x1803cf23f
   1803cf1ee:	48 85 c9             	test   %rcx,%rcx
   1803cf1f1:	74 4c                	je     0x1803cf23f
   1803cf1f3:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803cf1f8:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803cf1fd:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803cf202:	48 c7 44 24 38 35 02 	movq   $0x235,0x38(%rsp)
   1803cf209:	00 00 
   1803cf20b:	e8 f0 2b e0 ff       	call   0x1801d1e00
   1803cf210:	48 8b d8             	mov    %rax,%rbx
   1803cf213:	48 85 c0             	test   %rax,%rax
   1803cf216:	75 0c                	jne    0x1803cf224
   1803cf218:	4c 8b cf             	mov    %rdi,%r9
   1803cf21b:	48 8d 0d b6 6f 4d 00 	lea    0x4d6fb6(%rip),%rcx        # 0x1808a61d8
   1803cf222:	eb 29                	jmp    0x1803cf24d
   1803cf224:	4c 8b c8             	mov    %rax,%r9
   1803cf227:	48 8d 15 fa 76 4d 00 	lea    0x4d76fa(%rip),%rdx        # 0x1808a6928
   1803cf22e:	4c 8b c7             	mov    %rdi,%r8
   1803cf231:	48 8d 0d f8 2f 30 00 	lea    0x302ff8(%rip),%rcx        # 0x1806d2230
   1803cf238:	e8 33 b1 ff ff       	call   0x1803ca370
   1803cf23d:	eb 2a                	jmp    0x1803cf269
   1803cf23f:	4c 8d 0d fd c3 1b 00 	lea    0x1bc3fd(%rip),%r9        # 0x18058b643
   1803cf246:	48 8d 0d b3 6f 4d 00 	lea    0x4d6fb3(%rip),%rcx        # 0x1808a6200
   1803cf24d:	ff 05 ed 25 d4 00    	incl   0xd425ed(%rip)        # 0x181111840
   1803cf253:	4c 8d 05 ce 76 4d 00 	lea    0x4d76ce(%rip),%r8        # 0x1808a6928
   1803cf25a:	48 8d 15 cf 2f 30 00 	lea    0x302fcf(%rip),%rdx        # 0x1806d2230
   1803cf261:	e8 fa 32 ee ff       	call   0x1802b2560
   1803cf266:	49 8b de             	mov    %r14,%rbx
   1803cf269:	ff 05 d5 25 d4 00    	incl   0xd425d5(%rip)        # 0x181111844
   1803cf26f:	48 8d 3d 5a 40 4d 00 	lea    0x4d405a(%rip),%rdi        # 0x1808a32d0
   1803cf276:	4c 8b c7             	mov    %rdi,%r8
   1803cf279:	48 89 1d 38 29 59 00 	mov    %rbx,0x592938(%rip)        # 0x180961bb8
   1803cf280:	45 33 c9             	xor    %r9d,%r9d
   1803cf283:	48 8d 15 8e 76 4d 00 	lea    0x4d768e(%rip),%rdx        # 0x1808a6918
   1803cf28a:	48 8d 0d 9f 2f 30 00 	lea    0x302f9f(%rip),%rcx        # 0x1806d2230
   1803cf291:	e8 da b0 ff ff       	call   0x1803ca370
   1803cf296:	48 8d 0d 93 2f 30 00 	lea    0x302f93(%rip),%rcx        # 0x1806d2230
   1803cf29d:	ff 15 dd be 19 00    	call   *0x19bedd(%rip)        # 0x18056b180
   1803cf2a3:	48 8b d8             	mov    %rax,%rbx
   1803cf2a6:	48 85 c0             	test   %rax,%rax
   1803cf2a9:	0f 84 a3 00 00 00    	je     0x1803cf352
   1803cf2af:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803cf2b2:	33 c0                	xor    %eax,%eax
   1803cf2b4:	0f 11 85 90 04 00 00 	movups %xmm0,0x490(%rbp)
   1803cf2bb:	48 89 85 a0 04 00 00 	mov    %rax,0x4a0(%rbp)
   1803cf2c2:	ff 15 c8 bf 19 00    	call   *0x19bfc8(%rip)        # 0x18056b290
   1803cf2c8:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803cf2ce:	4c 8d 85 90 04 00 00 	lea    0x490(%rbp),%r8
   1803cf2d5:	48 8b c8             	mov    %rax,%rcx
   1803cf2d8:	48 8b d3             	mov    %rbx,%rdx
   1803cf2db:	ff 15 b7 bf 19 00    	call   *0x19bfb7(%rip)        # 0x18056b298
   1803cf2e1:	85 c0                	test   %eax,%eax
   1803cf2e3:	74 6d                	je     0x1803cf352
   1803cf2e5:	48 8b 85 90 04 00 00 	mov    0x490(%rbp),%rax
   1803cf2ec:	8b 8d 98 04 00 00    	mov    0x498(%rbp),%ecx
   1803cf2f2:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803cf2f7:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803cf2fc:	48 85 c0             	test   %rax,%rax
   1803cf2ff:	74 51                	je     0x1803cf352
   1803cf301:	48 85 c9             	test   %rcx,%rcx
   1803cf304:	74 4c                	je     0x1803cf352
   1803cf306:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803cf30b:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803cf310:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803cf315:	48 c7 44 24 38 6d 00 	movq   $0x6d,0x38(%rsp)
   1803cf31c:	00 00 
   1803cf31e:	e8 dd 2a e0 ff       	call   0x1801d1e00
   1803cf323:	48 8b d8             	mov    %rax,%rbx
   1803cf326:	48 85 c0             	test   %rax,%rax
   1803cf329:	75 0c                	jne    0x1803cf337
   1803cf32b:	4c 8b cf             	mov    %rdi,%r9
   1803cf32e:	48 8d 0d a3 6e 4d 00 	lea    0x4d6ea3(%rip),%rcx        # 0x1808a61d8
   1803cf335:	eb 29                	jmp    0x1803cf360
   1803cf337:	4c 8b c8             	mov    %rax,%r9
   1803cf33a:	48 8d 15 d7 75 4d 00 	lea    0x4d75d7(%rip),%rdx        # 0x1808a6918
   1803cf341:	4c 8b c7             	mov    %rdi,%r8
   1803cf344:	48 8d 0d e5 2e 30 00 	lea    0x302ee5(%rip),%rcx        # 0x1806d2230
   1803cf34b:	e8 20 b0 ff ff       	call   0x1803ca370
   1803cf350:	eb 2a                	jmp    0x1803cf37c
   1803cf352:	4c 8d 0d ea c2 1b 00 	lea    0x1bc2ea(%rip),%r9        # 0x18058b643
   1803cf359:	48 8d 0d a0 6e 4d 00 	lea    0x4d6ea0(%rip),%rcx        # 0x1808a6200
   1803cf360:	ff 05 da 24 d4 00    	incl   0xd424da(%rip)        # 0x181111840
   1803cf366:	4c 8d 05 ab 75 4d 00 	lea    0x4d75ab(%rip),%r8        # 0x1808a6918
   1803cf36d:	48 8d 15 bc 2e 30 00 	lea    0x302ebc(%rip),%rdx        # 0x1806d2230
   1803cf374:	e8 e7 31 ee ff       	call   0x1802b2560
   1803cf379:	49 8b de             	mov    %r14,%rbx
   1803cf37c:	ff 05 c2 24 d4 00    	incl   0xd424c2(%rip)        # 0x181111844
   1803cf382:	48 8d 3d 2f 31 4d 00 	lea    0x4d312f(%rip),%rdi        # 0x1808a24b8
   1803cf389:	4c 8b c7             	mov    %rdi,%r8
   1803cf38c:	48 89 1d 75 2c 59 00 	mov    %rbx,0x592c75(%rip)        # 0x180962008
   1803cf393:	45 33 c9             	xor    %r9d,%r9d
   1803cf396:	48 8d 15 6b 75 4d 00 	lea    0x4d756b(%rip),%rdx        # 0x1808a6908
   1803cf39d:	48 8d 0d 8c 2e 30 00 	lea    0x302e8c(%rip),%rcx        # 0x1806d2230
   1803cf3a4:	e8 c7 af ff ff       	call   0x1803ca370
   1803cf3a9:	48 8d 0d 80 2e 30 00 	lea    0x302e80(%rip),%rcx        # 0x1806d2230
   1803cf3b0:	ff 15 ca bd 19 00    	call   *0x19bdca(%rip)        # 0x18056b180
   1803cf3b6:	48 8b d8             	mov    %rax,%rbx
   1803cf3b9:	48 85 c0             	test   %rax,%rax
   1803cf3bc:	0f 84 a3 00 00 00    	je     0x1803cf465
   1803cf3c2:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803cf3c5:	33 c0                	xor    %eax,%eax
   1803cf3c7:	0f 11 85 a8 04 00 00 	movups %xmm0,0x4a8(%rbp)
   1803cf3ce:	48 89 85 b8 04 00 00 	mov    %rax,0x4b8(%rbp)
   1803cf3d5:	ff 15 b5 be 19 00    	call   *0x19beb5(%rip)        # 0x18056b290
   1803cf3db:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803cf3e1:	4c 8d 85 a8 04 00 00 	lea    0x4a8(%rbp),%r8
   1803cf3e8:	48 8b c8             	mov    %rax,%rcx
   1803cf3eb:	48 8b d3             	mov    %rbx,%rdx
   1803cf3ee:	ff 15 a4 be 19 00    	call   *0x19bea4(%rip)        # 0x18056b298
   1803cf3f4:	85 c0                	test   %eax,%eax
   1803cf3f6:	74 6d                	je     0x1803cf465
   1803cf3f8:	48 8b 85 a8 04 00 00 	mov    0x4a8(%rbp),%rax
   1803cf3ff:	8b 8d b0 04 00 00    	mov    0x4b0(%rbp),%ecx
   1803cf405:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803cf40a:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803cf40f:	48 85 c0             	test   %rax,%rax
   1803cf412:	74 51                	je     0x1803cf465
   1803cf414:	48 85 c9             	test   %rcx,%rcx
   1803cf417:	74 4c                	je     0x1803cf465
   1803cf419:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803cf41e:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803cf423:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803cf428:	48 c7 44 24 38 2e 00 	movq   $0x2e,0x38(%rsp)
   1803cf42f:	00 00 
   1803cf431:	e8 ca 29 e0 ff       	call   0x1801d1e00
   1803cf436:	48 8b d8             	mov    %rax,%rbx
   1803cf439:	48 85 c0             	test   %rax,%rax
   1803cf43c:	75 0c                	jne    0x1803cf44a
   1803cf43e:	4c 8b cf             	mov    %rdi,%r9
   1803cf441:	48 8d 0d 90 6d 4d 00 	lea    0x4d6d90(%rip),%rcx        # 0x1808a61d8
   1803cf448:	eb 29                	jmp    0x1803cf473
   1803cf44a:	4c 8b c8             	mov    %rax,%r9
   1803cf44d:	48 8d 15 b4 74 4d 00 	lea    0x4d74b4(%rip),%rdx        # 0x1808a6908
   1803cf454:	4c 8b c7             	mov    %rdi,%r8
   1803cf457:	48 8d 0d d2 2d 30 00 	lea    0x302dd2(%rip),%rcx        # 0x1806d2230
   1803cf45e:	e8 0d af ff ff       	call   0x1803ca370
   1803cf463:	eb 2a                	jmp    0x1803cf48f
   1803cf465:	4c 8d 0d d7 c1 1b 00 	lea    0x1bc1d7(%rip),%r9        # 0x18058b643
   1803cf46c:	48 8d 0d 8d 6d 4d 00 	lea    0x4d6d8d(%rip),%rcx        # 0x1808a6200
   1803cf473:	ff 05 c7 23 d4 00    	incl   0xd423c7(%rip)        # 0x181111840
   1803cf479:	4c 8d 05 88 74 4d 00 	lea    0x4d7488(%rip),%r8        # 0x1808a6908
   1803cf480:	48 8d 15 a9 2d 30 00 	lea    0x302da9(%rip),%rdx        # 0x1806d2230
   1803cf487:	e8 d4 30 ee ff       	call   0x1802b2560
   1803cf48c:	49 8b de             	mov    %r14,%rbx
   1803cf48f:	ff 05 af 23 d4 00    	incl   0xd423af(%rip)        # 0x181111844
   1803cf495:	48 8d 3d ec 2f 4d 00 	lea    0x4d2fec(%rip),%rdi        # 0x1808a2488
   1803cf49c:	4c 8b c7             	mov    %rdi,%r8
   1803cf49f:	48 89 1d 1a 27 59 00 	mov    %rbx,0x59271a(%rip)        # 0x180961bc0
   1803cf4a6:	45 33 c9             	xor    %r9d,%r9d
   1803cf4a9:	48 8d 15 40 74 4d 00 	lea    0x4d7440(%rip),%rdx        # 0x1808a68f0
   1803cf4b0:	48 8d 0d 79 2d 30 00 	lea    0x302d79(%rip),%rcx        # 0x1806d2230
   1803cf4b7:	e8 b4 ae ff ff       	call   0x1803ca370
   1803cf4bc:	48 8d 0d 6d 2d 30 00 	lea    0x302d6d(%rip),%rcx        # 0x1806d2230
   1803cf4c3:	ff 15 b7 bc 19 00    	call   *0x19bcb7(%rip)        # 0x18056b180
   1803cf4c9:	48 8b d8             	mov    %rax,%rbx
   1803cf4cc:	48 85 c0             	test   %rax,%rax
   1803cf4cf:	0f 84 a3 00 00 00    	je     0x1803cf578
   1803cf4d5:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803cf4d8:	33 c0                	xor    %eax,%eax
   1803cf4da:	0f 11 85 c0 04 00 00 	movups %xmm0,0x4c0(%rbp)
   1803cf4e1:	48 89 85 d0 04 00 00 	mov    %rax,0x4d0(%rbp)
   1803cf4e8:	ff 15 a2 bd 19 00    	call   *0x19bda2(%rip)        # 0x18056b290
   1803cf4ee:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803cf4f4:	4c 8d 85 c0 04 00 00 	lea    0x4c0(%rbp),%r8
   1803cf4fb:	48 8b c8             	mov    %rax,%rcx
   1803cf4fe:	48 8b d3             	mov    %rbx,%rdx
   1803cf501:	ff 15 91 bd 19 00    	call   *0x19bd91(%rip)        # 0x18056b298
   1803cf507:	85 c0                	test   %eax,%eax
   1803cf509:	74 6d                	je     0x1803cf578
   1803cf50b:	48 8b 85 c0 04 00 00 	mov    0x4c0(%rbp),%rax
   1803cf512:	8b 8d c8 04 00 00    	mov    0x4c8(%rbp),%ecx
   1803cf518:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803cf51d:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803cf522:	48 85 c0             	test   %rax,%rax
   1803cf525:	74 51                	je     0x1803cf578
   1803cf527:	48 85 c9             	test   %rcx,%rcx
   1803cf52a:	74 4c                	je     0x1803cf578
   1803cf52c:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803cf531:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803cf536:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803cf53b:	48 c7 44 24 38 29 00 	movq   $0x29,0x38(%rsp)
   1803cf542:	00 00 
   1803cf544:	e8 b7 28 e0 ff       	call   0x1801d1e00
   1803cf549:	48 8b d8             	mov    %rax,%rbx
   1803cf54c:	48 85 c0             	test   %rax,%rax
   1803cf54f:	75 0c                	jne    0x1803cf55d
   1803cf551:	4c 8b cf             	mov    %rdi,%r9
   1803cf554:	48 8d 0d 7d 6c 4d 00 	lea    0x4d6c7d(%rip),%rcx        # 0x1808a61d8
   1803cf55b:	eb 29                	jmp    0x1803cf586
   1803cf55d:	4c 8b c8             	mov    %rax,%r9
   1803cf560:	48 8d 15 89 73 4d 00 	lea    0x4d7389(%rip),%rdx        # 0x1808a68f0
   1803cf567:	4c 8b c7             	mov    %rdi,%r8
   1803cf56a:	48 8d 0d bf 2c 30 00 	lea    0x302cbf(%rip),%rcx        # 0x1806d2230
   1803cf571:	e8 fa ad ff ff       	call   0x1803ca370
   1803cf576:	eb 2a                	jmp    0x1803cf5a2
   1803cf578:	4c 8d 0d c4 c0 1b 00 	lea    0x1bc0c4(%rip),%r9        # 0x18058b643
   1803cf57f:	48 8d 0d 7a 6c 4d 00 	lea    0x4d6c7a(%rip),%rcx        # 0x1808a6200
   1803cf586:	ff 05 b4 22 d4 00    	incl   0xd422b4(%rip)        # 0x181111840
   1803cf58c:	4c 8d 05 5d 73 4d 00 	lea    0x4d735d(%rip),%r8        # 0x1808a68f0
   1803cf593:	48 8d 15 96 2c 30 00 	lea    0x302c96(%rip),%rdx        # 0x1806d2230
   1803cf59a:	e8 c1 2f ee ff       	call   0x1802b2560
   1803cf59f:	49 8b de             	mov    %r14,%rbx
   1803cf5a2:	ff 05 9c 22 d4 00    	incl   0xd4229c(%rip)        # 0x181111844
   1803cf5a8:	48 8d 3d a1 2e 4d 00 	lea    0x4d2ea1(%rip),%rdi        # 0x1808a2450
   1803cf5af:	4c 8b c7             	mov    %rdi,%r8
   1803cf5b2:	48 89 1d 0f 26 59 00 	mov    %rbx,0x59260f(%rip)        # 0x180961bc8
   1803cf5b9:	45 33 c9             	xor    %r9d,%r9d
   1803cf5bc:	48 8d 15 1d 73 4d 00 	lea    0x4d731d(%rip),%rdx        # 0x1808a68e0
   1803cf5c3:	48 8d 0d 66 2c 30 00 	lea    0x302c66(%rip),%rcx        # 0x1806d2230
   1803cf5ca:	e8 a1 ad ff ff       	call   0x1803ca370
   1803cf5cf:	48 8d 0d 5a 2c 30 00 	lea    0x302c5a(%rip),%rcx        # 0x1806d2230
   1803cf5d6:	ff 15 a4 bb 19 00    	call   *0x19bba4(%rip)        # 0x18056b180
   1803cf5dc:	48 8b d8             	mov    %rax,%rbx
   1803cf5df:	48 85 c0             	test   %rax,%rax
   1803cf5e2:	0f 84 a3 00 00 00    	je     0x1803cf68b
   1803cf5e8:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803cf5eb:	33 c0                	xor    %eax,%eax
   1803cf5ed:	0f 11 85 d8 04 00 00 	movups %xmm0,0x4d8(%rbp)
   1803cf5f4:	48 89 85 e8 04 00 00 	mov    %rax,0x4e8(%rbp)
   1803cf5fb:	ff 15 8f bc 19 00    	call   *0x19bc8f(%rip)        # 0x18056b290
   1803cf601:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803cf607:	4c 8d 85 d8 04 00 00 	lea    0x4d8(%rbp),%r8
   1803cf60e:	48 8b c8             	mov    %rax,%rcx
   1803cf611:	48 8b d3             	mov    %rbx,%rdx
   1803cf614:	ff 15 7e bc 19 00    	call   *0x19bc7e(%rip)        # 0x18056b298
   1803cf61a:	85 c0                	test   %eax,%eax
   1803cf61c:	74 6d                	je     0x1803cf68b
   1803cf61e:	48 8b 85 d8 04 00 00 	mov    0x4d8(%rbp),%rax
   1803cf625:	8b 8d e0 04 00 00    	mov    0x4e0(%rbp),%ecx
   1803cf62b:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803cf630:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803cf635:	48 85 c0             	test   %rax,%rax
   1803cf638:	74 51                	je     0x1803cf68b
   1803cf63a:	48 85 c9             	test   %rcx,%rcx
   1803cf63d:	74 4c                	je     0x1803cf68b
   1803cf63f:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803cf644:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803cf649:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803cf64e:	48 c7 44 24 38 35 00 	movq   $0x35,0x38(%rsp)
   1803cf655:	00 00 
   1803cf657:	e8 a4 27 e0 ff       	call   0x1801d1e00
   1803cf65c:	48 8b d8             	mov    %rax,%rbx
   1803cf65f:	48 85 c0             	test   %rax,%rax
   1803cf662:	75 0c                	jne    0x1803cf670
   1803cf664:	4c 8b cf             	mov    %rdi,%r9
   1803cf667:	48 8d 0d 6a 6b 4d 00 	lea    0x4d6b6a(%rip),%rcx        # 0x1808a61d8
   1803cf66e:	eb 29                	jmp    0x1803cf699
   1803cf670:	4c 8b c8             	mov    %rax,%r9
   1803cf673:	48 8d 15 66 72 4d 00 	lea    0x4d7266(%rip),%rdx        # 0x1808a68e0
   1803cf67a:	4c 8b c7             	mov    %rdi,%r8
   1803cf67d:	48 8d 0d ac 2b 30 00 	lea    0x302bac(%rip),%rcx        # 0x1806d2230
   1803cf684:	e8 e7 ac ff ff       	call   0x1803ca370
   1803cf689:	eb 2a                	jmp    0x1803cf6b5
   1803cf68b:	4c 8d 0d b1 bf 1b 00 	lea    0x1bbfb1(%rip),%r9        # 0x18058b643
   1803cf692:	48 8d 0d 67 6b 4d 00 	lea    0x4d6b67(%rip),%rcx        # 0x1808a6200
   1803cf699:	ff 05 a1 21 d4 00    	incl   0xd421a1(%rip)        # 0x181111840
   1803cf69f:	4c 8d 05 3a 72 4d 00 	lea    0x4d723a(%rip),%r8        # 0x1808a68e0
   1803cf6a6:	48 8d 15 83 2b 30 00 	lea    0x302b83(%rip),%rdx        # 0x1806d2230
   1803cf6ad:	e8 ae 2e ee ff       	call   0x1802b2560
   1803cf6b2:	49 8b de             	mov    %r14,%rbx
   1803cf6b5:	ff 05 89 21 d4 00    	incl   0xd42189(%rip)        # 0x181111844
   1803cf6bb:	48 8d 3d 2e 2d 4d 00 	lea    0x4d2d2e(%rip),%rdi        # 0x1808a23f0
   1803cf6c2:	4c 8b c7             	mov    %rdi,%r8
   1803cf6c5:	48 89 1d 04 25 59 00 	mov    %rbx,0x592504(%rip)        # 0x180961bd0
   1803cf6cc:	45 33 c9             	xor    %r9d,%r9d
   1803cf6cf:	48 8d 15 f2 71 4d 00 	lea    0x4d71f2(%rip),%rdx        # 0x1808a68c8
   1803cf6d6:	48 8d 0d 53 2b 30 00 	lea    0x302b53(%rip),%rcx        # 0x1806d2230
   1803cf6dd:	e8 8e ac ff ff       	call   0x1803ca370
   1803cf6e2:	48 8d 0d 47 2b 30 00 	lea    0x302b47(%rip),%rcx        # 0x1806d2230
   1803cf6e9:	ff 15 91 ba 19 00    	call   *0x19ba91(%rip)        # 0x18056b180
   1803cf6ef:	48 8b d8             	mov    %rax,%rbx
   1803cf6f2:	48 85 c0             	test   %rax,%rax
   1803cf6f5:	0f 84 a3 00 00 00    	je     0x1803cf79e
   1803cf6fb:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803cf6fe:	33 c0                	xor    %eax,%eax
   1803cf700:	0f 11 85 f0 04 00 00 	movups %xmm0,0x4f0(%rbp)
   1803cf707:	48 89 85 00 05 00 00 	mov    %rax,0x500(%rbp)
   1803cf70e:	ff 15 7c bb 19 00    	call   *0x19bb7c(%rip)        # 0x18056b290
   1803cf714:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803cf71a:	4c 8d 85 f0 04 00 00 	lea    0x4f0(%rbp),%r8
   1803cf721:	48 8b c8             	mov    %rax,%rcx
   1803cf724:	48 8b d3             	mov    %rbx,%rdx
   1803cf727:	ff 15 6b bb 19 00    	call   *0x19bb6b(%rip)        # 0x18056b298
   1803cf72d:	85 c0                	test   %eax,%eax
   1803cf72f:	74 6d                	je     0x1803cf79e
   1803cf731:	48 8b 85 f0 04 00 00 	mov    0x4f0(%rbp),%rax
   1803cf738:	8b 8d f8 04 00 00    	mov    0x4f8(%rbp),%ecx
   1803cf73e:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803cf743:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803cf748:	48 85 c0             	test   %rax,%rax
   1803cf74b:	74 51                	je     0x1803cf79e
   1803cf74d:	48 85 c9             	test   %rcx,%rcx
   1803cf750:	74 4c                	je     0x1803cf79e
   1803cf752:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803cf757:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803cf75c:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803cf761:	48 c7 44 24 38 5f 00 	movq   $0x5f,0x38(%rsp)
   1803cf768:	00 00 
   1803cf76a:	e8 91 26 e0 ff       	call   0x1801d1e00
   1803cf76f:	48 8b d8             	mov    %rax,%rbx
   1803cf772:	48 85 c0             	test   %rax,%rax
   1803cf775:	75 0c                	jne    0x1803cf783
   1803cf777:	4c 8b cf             	mov    %rdi,%r9
   1803cf77a:	48 8d 0d 57 6a 4d 00 	lea    0x4d6a57(%rip),%rcx        # 0x1808a61d8
   1803cf781:	eb 29                	jmp    0x1803cf7ac
   1803cf783:	4c 8b c8             	mov    %rax,%r9
   1803cf786:	48 8d 15 3b 71 4d 00 	lea    0x4d713b(%rip),%rdx        # 0x1808a68c8
   1803cf78d:	4c 8b c7             	mov    %rdi,%r8
   1803cf790:	48 8d 0d 99 2a 30 00 	lea    0x302a99(%rip),%rcx        # 0x1806d2230
   1803cf797:	e8 d4 ab ff ff       	call   0x1803ca370
   1803cf79c:	eb 2a                	jmp    0x1803cf7c8
   1803cf79e:	4c 8d 0d 9e be 1b 00 	lea    0x1bbe9e(%rip),%r9        # 0x18058b643
   1803cf7a5:	48 8d 0d 54 6a 4d 00 	lea    0x4d6a54(%rip),%rcx        # 0x1808a6200
   1803cf7ac:	ff 05 8e 20 d4 00    	incl   0xd4208e(%rip)        # 0x181111840
   1803cf7b2:	4c 8d 05 0f 71 4d 00 	lea    0x4d710f(%rip),%r8        # 0x1808a68c8
   1803cf7b9:	48 8d 15 70 2a 30 00 	lea    0x302a70(%rip),%rdx        # 0x1806d2230
   1803cf7c0:	e8 9b 2d ee ff       	call   0x1802b2560
   1803cf7c5:	49 8b de             	mov    %r14,%rbx
   1803cf7c8:	ff 05 76 20 d4 00    	incl   0xd42076(%rip)        # 0x181111844
   1803cf7ce:	48 8d 3d cb 2b 4d 00 	lea    0x4d2bcb(%rip),%rdi        # 0x1808a23a0
   1803cf7d5:	4c 8b c7             	mov    %rdi,%r8
   1803cf7d8:	48 89 1d f9 23 59 00 	mov    %rbx,0x5923f9(%rip)        # 0x180961bd8
   1803cf7df:	45 33 c9             	xor    %r9d,%r9d
   1803cf7e2:	48 8d 15 c7 70 4d 00 	lea    0x4d70c7(%rip),%rdx        # 0x1808a68b0
   1803cf7e9:	48 8d 0d 40 2a 30 00 	lea    0x302a40(%rip),%rcx        # 0x1806d2230
   1803cf7f0:	e8 7b ab ff ff       	call   0x1803ca370
   1803cf7f5:	48 8d 0d 34 2a 30 00 	lea    0x302a34(%rip),%rcx        # 0x1806d2230
   1803cf7fc:	ff 15 7e b9 19 00    	call   *0x19b97e(%rip)        # 0x18056b180
   1803cf802:	48 8b d8             	mov    %rax,%rbx
   1803cf805:	48 85 c0             	test   %rax,%rax
   1803cf808:	0f 84 a3 00 00 00    	je     0x1803cf8b1
   1803cf80e:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803cf811:	33 c0                	xor    %eax,%eax
   1803cf813:	0f 11 85 08 05 00 00 	movups %xmm0,0x508(%rbp)
   1803cf81a:	48 89 85 18 05 00 00 	mov    %rax,0x518(%rbp)
   1803cf821:	ff 15 69 ba 19 00    	call   *0x19ba69(%rip)        # 0x18056b290
   1803cf827:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803cf82d:	4c 8d 85 08 05 00 00 	lea    0x508(%rbp),%r8
   1803cf834:	48 8b c8             	mov    %rax,%rcx
   1803cf837:	48 8b d3             	mov    %rbx,%rdx
   1803cf83a:	ff 15 58 ba 19 00    	call   *0x19ba58(%rip)        # 0x18056b298
   1803cf840:	85 c0                	test   %eax,%eax
   1803cf842:	74 6d                	je     0x1803cf8b1
   1803cf844:	48 8b 85 08 05 00 00 	mov    0x508(%rbp),%rax
   1803cf84b:	8b 8d 10 05 00 00    	mov    0x510(%rbp),%ecx
   1803cf851:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803cf856:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803cf85b:	48 85 c0             	test   %rax,%rax
   1803cf85e:	74 51                	je     0x1803cf8b1
   1803cf860:	48 85 c9             	test   %rcx,%rcx
   1803cf863:	74 4c                	je     0x1803cf8b1
   1803cf865:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803cf86a:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803cf86f:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803cf874:	48 c7 44 24 38 47 00 	movq   $0x47,0x38(%rsp)
   1803cf87b:	00 00 
   1803cf87d:	e8 7e 25 e0 ff       	call   0x1801d1e00
   1803cf882:	48 8b d8             	mov    %rax,%rbx
   1803cf885:	48 85 c0             	test   %rax,%rax
   1803cf888:	75 0c                	jne    0x1803cf896
   1803cf88a:	4c 8b cf             	mov    %rdi,%r9
   1803cf88d:	48 8d 0d 44 69 4d 00 	lea    0x4d6944(%rip),%rcx        # 0x1808a61d8
   1803cf894:	eb 29                	jmp    0x1803cf8bf
   1803cf896:	4c 8b c8             	mov    %rax,%r9
   1803cf899:	48 8d 15 10 70 4d 00 	lea    0x4d7010(%rip),%rdx        # 0x1808a68b0
   1803cf8a0:	4c 8b c7             	mov    %rdi,%r8
   1803cf8a3:	48 8d 0d 86 29 30 00 	lea    0x302986(%rip),%rcx        # 0x1806d2230
   1803cf8aa:	e8 c1 aa ff ff       	call   0x1803ca370
   1803cf8af:	eb 2a                	jmp    0x1803cf8db
   1803cf8b1:	4c 8d 0d 8b bd 1b 00 	lea    0x1bbd8b(%rip),%r9        # 0x18058b643
   1803cf8b8:	48 8d 0d 41 69 4d 00 	lea    0x4d6941(%rip),%rcx        # 0x1808a6200
   1803cf8bf:	ff 05 7b 1f d4 00    	incl   0xd41f7b(%rip)        # 0x181111840
   1803cf8c5:	4c 8d 05 e4 6f 4d 00 	lea    0x4d6fe4(%rip),%r8        # 0x1808a68b0
   1803cf8cc:	48 8d 15 5d 29 30 00 	lea    0x30295d(%rip),%rdx        # 0x1806d2230
   1803cf8d3:	e8 88 2c ee ff       	call   0x1802b2560
   1803cf8d8:	49 8b de             	mov    %r14,%rbx
   1803cf8db:	ff 05 63 1f d4 00    	incl   0xd41f63(%rip)        # 0x181111844
   1803cf8e1:	48 8d 3d 80 2a 4d 00 	lea    0x4d2a80(%rip),%rdi        # 0x1808a2368
   1803cf8e8:	4c 8b c7             	mov    %rdi,%r8
   1803cf8eb:	48 89 1d ee 22 59 00 	mov    %rbx,0x5922ee(%rip)        # 0x180961be0
   1803cf8f2:	45 33 c9             	xor    %r9d,%r9d
   1803cf8f5:	48 8d 15 9c 6f 4d 00 	lea    0x4d6f9c(%rip),%rdx        # 0x1808a6898
   1803cf8fc:	48 8d 0d 2d 29 30 00 	lea    0x30292d(%rip),%rcx        # 0x1806d2230
   1803cf903:	e8 68 aa ff ff       	call   0x1803ca370
   1803cf908:	48 8d 0d 21 29 30 00 	lea    0x302921(%rip),%rcx        # 0x1806d2230
   1803cf90f:	ff 15 6b b8 19 00    	call   *0x19b86b(%rip)        # 0x18056b180
   1803cf915:	48 8b d8             	mov    %rax,%rbx
   1803cf918:	48 85 c0             	test   %rax,%rax
   1803cf91b:	0f 84 a3 00 00 00    	je     0x1803cf9c4
   1803cf921:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803cf924:	33 c0                	xor    %eax,%eax
   1803cf926:	0f 11 85 20 05 00 00 	movups %xmm0,0x520(%rbp)
   1803cf92d:	48 89 85 30 05 00 00 	mov    %rax,0x530(%rbp)
   1803cf934:	ff 15 56 b9 19 00    	call   *0x19b956(%rip)        # 0x18056b290
   1803cf93a:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803cf940:	4c 8d 85 20 05 00 00 	lea    0x520(%rbp),%r8
   1803cf947:	48 8b c8             	mov    %rax,%rcx
   1803cf94a:	48 8b d3             	mov    %rbx,%rdx
   1803cf94d:	ff 15 45 b9 19 00    	call   *0x19b945(%rip)        # 0x18056b298
   1803cf953:	85 c0                	test   %eax,%eax
   1803cf955:	74 6d                	je     0x1803cf9c4
   1803cf957:	48 8b 85 20 05 00 00 	mov    0x520(%rbp),%rax
   1803cf95e:	8b 8d 28 05 00 00    	mov    0x528(%rbp),%ecx
   1803cf964:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803cf969:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803cf96e:	48 85 c0             	test   %rax,%rax
   1803cf971:	74 51                	je     0x1803cf9c4
   1803cf973:	48 85 c9             	test   %rcx,%rcx
   1803cf976:	74 4c                	je     0x1803cf9c4
   1803cf978:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803cf97d:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803cf982:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803cf987:	48 c7 44 24 38 2e 00 	movq   $0x2e,0x38(%rsp)
   1803cf98e:	00 00 
   1803cf990:	e8 6b 24 e0 ff       	call   0x1801d1e00
   1803cf995:	48 8b d8             	mov    %rax,%rbx
   1803cf998:	48 85 c0             	test   %rax,%rax
   1803cf99b:	75 0c                	jne    0x1803cf9a9
   1803cf99d:	4c 8b cf             	mov    %rdi,%r9
   1803cf9a0:	48 8d 0d 31 68 4d 00 	lea    0x4d6831(%rip),%rcx        # 0x1808a61d8
   1803cf9a7:	eb 29                	jmp    0x1803cf9d2
   1803cf9a9:	4c 8b c8             	mov    %rax,%r9
   1803cf9ac:	48 8d 15 e5 6e 4d 00 	lea    0x4d6ee5(%rip),%rdx        # 0x1808a6898
   1803cf9b3:	4c 8b c7             	mov    %rdi,%r8
   1803cf9b6:	48 8d 0d 73 28 30 00 	lea    0x302873(%rip),%rcx        # 0x1806d2230
   1803cf9bd:	e8 ae a9 ff ff       	call   0x1803ca370
   1803cf9c2:	eb 2a                	jmp    0x1803cf9ee
   1803cf9c4:	4c 8d 0d 78 bc 1b 00 	lea    0x1bbc78(%rip),%r9        # 0x18058b643
   1803cf9cb:	48 8d 0d 2e 68 4d 00 	lea    0x4d682e(%rip),%rcx        # 0x1808a6200
   1803cf9d2:	ff 05 68 1e d4 00    	incl   0xd41e68(%rip)        # 0x181111840
   1803cf9d8:	4c 8d 05 b9 6e 4d 00 	lea    0x4d6eb9(%rip),%r8        # 0x1808a6898
   1803cf9df:	48 8d 15 4a 28 30 00 	lea    0x30284a(%rip),%rdx        # 0x1806d2230
   1803cf9e6:	e8 75 2b ee ff       	call   0x1802b2560
   1803cf9eb:	49 8b de             	mov    %r14,%rbx
   1803cf9ee:	ff 05 50 1e d4 00    	incl   0xd41e50(%rip)        # 0x181111844
   1803cf9f4:	48 8d 3d 85 32 4d 00 	lea    0x4d3285(%rip),%rdi        # 0x1808a2c80
   1803cf9fb:	4c 8b c7             	mov    %rdi,%r8
   1803cf9fe:	48 89 1d e3 21 59 00 	mov    %rbx,0x5921e3(%rip)        # 0x180961be8
   1803cfa05:	45 33 c9             	xor    %r9d,%r9d
   1803cfa08:	48 8d 15 b1 6f 4d 00 	lea    0x4d6fb1(%rip),%rdx        # 0x1808a69c0
   1803cfa0f:	48 8d 0d 1a 28 30 00 	lea    0x30281a(%rip),%rcx        # 0x1806d2230
   1803cfa16:	e8 55 a9 ff ff       	call   0x1803ca370
   1803cfa1b:	48 8d 0d 0e 28 30 00 	lea    0x30280e(%rip),%rcx        # 0x1806d2230
   1803cfa22:	ff 15 58 b7 19 00    	call   *0x19b758(%rip)        # 0x18056b180
   1803cfa28:	48 8b d8             	mov    %rax,%rbx
   1803cfa2b:	48 85 c0             	test   %rax,%rax
   1803cfa2e:	0f 84 a3 00 00 00    	je     0x1803cfad7
   1803cfa34:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803cfa37:	33 c0                	xor    %eax,%eax
   1803cfa39:	0f 11 85 38 05 00 00 	movups %xmm0,0x538(%rbp)
   1803cfa40:	48 89 85 48 05 00 00 	mov    %rax,0x548(%rbp)
   1803cfa47:	ff 15 43 b8 19 00    	call   *0x19b843(%rip)        # 0x18056b290
   1803cfa4d:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803cfa53:	4c 8d 85 38 05 00 00 	lea    0x538(%rbp),%r8
   1803cfa5a:	48 8b c8             	mov    %rax,%rcx
   1803cfa5d:	48 8b d3             	mov    %rbx,%rdx
   1803cfa60:	ff 15 32 b8 19 00    	call   *0x19b832(%rip)        # 0x18056b298
   1803cfa66:	85 c0                	test   %eax,%eax
   1803cfa68:	74 6d                	je     0x1803cfad7
   1803cfa6a:	48 8b 85 38 05 00 00 	mov    0x538(%rbp),%rax
   1803cfa71:	8b 8d 40 05 00 00    	mov    0x540(%rbp),%ecx
   1803cfa77:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803cfa7c:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803cfa81:	48 85 c0             	test   %rax,%rax
   1803cfa84:	74 51                	je     0x1803cfad7
   1803cfa86:	48 85 c9             	test   %rcx,%rcx
   1803cfa89:	74 4c                	je     0x1803cfad7
   1803cfa8b:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803cfa90:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803cfa95:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803cfa9a:	48 c7 44 24 38 59 00 	movq   $0x59,0x38(%rsp)
   1803cfaa1:	00 00 
   1803cfaa3:	e8 58 23 e0 ff       	call   0x1801d1e00
   1803cfaa8:	48 8b d8             	mov    %rax,%rbx
   1803cfaab:	48 85 c0             	test   %rax,%rax
   1803cfaae:	75 0c                	jne    0x1803cfabc
   1803cfab0:	4c 8b cf             	mov    %rdi,%r9
   1803cfab3:	48 8d 0d 1e 67 4d 00 	lea    0x4d671e(%rip),%rcx        # 0x1808a61d8
   1803cfaba:	eb 29                	jmp    0x1803cfae5
   1803cfabc:	4c 8b c8             	mov    %rax,%r9
   1803cfabf:	48 8d 15 fa 6e 4d 00 	lea    0x4d6efa(%rip),%rdx        # 0x1808a69c0
   1803cfac6:	4c 8b c7             	mov    %rdi,%r8
   1803cfac9:	48 8d 0d 60 27 30 00 	lea    0x302760(%rip),%rcx        # 0x1806d2230
   1803cfad0:	e8 9b a8 ff ff       	call   0x1803ca370
   1803cfad5:	eb 2a                	jmp    0x1803cfb01
   1803cfad7:	4c 8d 0d 65 bb 1b 00 	lea    0x1bbb65(%rip),%r9        # 0x18058b643
   1803cfade:	48 8d 0d 1b 67 4d 00 	lea    0x4d671b(%rip),%rcx        # 0x1808a6200
   1803cfae5:	ff 05 55 1d d4 00    	incl   0xd41d55(%rip)        # 0x181111840
   1803cfaeb:	4c 8d 05 ce 6e 4d 00 	lea    0x4d6ece(%rip),%r8        # 0x1808a69c0
   1803cfaf2:	48 8d 15 37 27 30 00 	lea    0x302737(%rip),%rdx        # 0x1806d2230
   1803cfaf9:	e8 62 2a ee ff       	call   0x1802b2560
   1803cfafe:	49 8b de             	mov    %r14,%rbx
   1803cfb01:	ff 05 3d 1d d4 00    	incl   0xd41d3d(%rip)        # 0x181111844
   1803cfb07:	48 8d 3d 22 31 4d 00 	lea    0x4d3122(%rip),%rdi        # 0x1808a2c30
   1803cfb0e:	4c 8b c7             	mov    %rdi,%r8
   1803cfb11:	48 89 1d d8 20 59 00 	mov    %rbx,0x5920d8(%rip)        # 0x180961bf0
   1803cfb18:	45 33 c9             	xor    %r9d,%r9d
   1803cfb1b:	48 8d 15 8e 6e 4d 00 	lea    0x4d6e8e(%rip),%rdx        # 0x1808a69b0
   1803cfb22:	48 8d 0d 07 27 30 00 	lea    0x302707(%rip),%rcx        # 0x1806d2230
   1803cfb29:	e8 42 a8 ff ff       	call   0x1803ca370
   1803cfb2e:	48 8d 0d fb 26 30 00 	lea    0x3026fb(%rip),%rcx        # 0x1806d2230
   1803cfb35:	ff 15 45 b6 19 00    	call   *0x19b645(%rip)        # 0x18056b180
   1803cfb3b:	48 8b d8             	mov    %rax,%rbx
   1803cfb3e:	48 85 c0             	test   %rax,%rax
   1803cfb41:	0f 84 a3 00 00 00    	je     0x1803cfbea
   1803cfb47:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803cfb4a:	33 c0                	xor    %eax,%eax
   1803cfb4c:	0f 11 85 50 05 00 00 	movups %xmm0,0x550(%rbp)
   1803cfb53:	48 89 85 60 05 00 00 	mov    %rax,0x560(%rbp)
   1803cfb5a:	ff 15 30 b7 19 00    	call   *0x19b730(%rip)        # 0x18056b290
   1803cfb60:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803cfb66:	4c 8d 85 50 05 00 00 	lea    0x550(%rbp),%r8
   1803cfb6d:	48 8b c8             	mov    %rax,%rcx
   1803cfb70:	48 8b d3             	mov    %rbx,%rdx
   1803cfb73:	ff 15 1f b7 19 00    	call   *0x19b71f(%rip)        # 0x18056b298
   1803cfb79:	85 c0                	test   %eax,%eax
   1803cfb7b:	74 6d                	je     0x1803cfbea
   1803cfb7d:	48 8b 85 50 05 00 00 	mov    0x550(%rbp),%rax
   1803cfb84:	8b 8d 58 05 00 00    	mov    0x558(%rbp),%ecx
   1803cfb8a:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803cfb8f:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803cfb94:	48 85 c0             	test   %rax,%rax
   1803cfb97:	74 51                	je     0x1803cfbea
   1803cfb99:	48 85 c9             	test   %rcx,%rcx
   1803cfb9c:	74 4c                	je     0x1803cfbea
   1803cfb9e:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803cfba3:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803cfba8:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803cfbad:	48 c7 44 24 38 4d 00 	movq   $0x4d,0x38(%rsp)
   1803cfbb4:	00 00 
   1803cfbb6:	e8 45 22 e0 ff       	call   0x1801d1e00
   1803cfbbb:	48 8b d8             	mov    %rax,%rbx
   1803cfbbe:	48 85 c0             	test   %rax,%rax
   1803cfbc1:	75 0c                	jne    0x1803cfbcf
   1803cfbc3:	4c 8b cf             	mov    %rdi,%r9
   1803cfbc6:	48 8d 0d 0b 66 4d 00 	lea    0x4d660b(%rip),%rcx        # 0x1808a61d8
   1803cfbcd:	eb 29                	jmp    0x1803cfbf8
   1803cfbcf:	4c 8b c8             	mov    %rax,%r9
   1803cfbd2:	48 8d 15 d7 6d 4d 00 	lea    0x4d6dd7(%rip),%rdx        # 0x1808a69b0
   1803cfbd9:	4c 8b c7             	mov    %rdi,%r8
   1803cfbdc:	48 8d 0d 4d 26 30 00 	lea    0x30264d(%rip),%rcx        # 0x1806d2230
   1803cfbe3:	e8 88 a7 ff ff       	call   0x1803ca370
   1803cfbe8:	eb 2a                	jmp    0x1803cfc14
   1803cfbea:	4c 8d 0d 52 ba 1b 00 	lea    0x1bba52(%rip),%r9        # 0x18058b643
   1803cfbf1:	48 8d 0d 08 66 4d 00 	lea    0x4d6608(%rip),%rcx        # 0x1808a6200
   1803cfbf8:	ff 05 42 1c d4 00    	incl   0xd41c42(%rip)        # 0x181111840
   1803cfbfe:	4c 8d 05 ab 6d 4d 00 	lea    0x4d6dab(%rip),%r8        # 0x1808a69b0
   1803cfc05:	48 8d 15 24 26 30 00 	lea    0x302624(%rip),%rdx        # 0x1806d2230
   1803cfc0c:	e8 4f 29 ee ff       	call   0x1802b2560
   1803cfc11:	49 8b de             	mov    %r14,%rbx
   1803cfc14:	ff 05 2a 1c d4 00    	incl   0xd41c2a(%rip)        # 0x181111844
   1803cfc1a:	48 8d 3d af 2f 4d 00 	lea    0x4d2faf(%rip),%rdi        # 0x1808a2bd0
   1803cfc21:	4c 8b c7             	mov    %rdi,%r8
   1803cfc24:	48 89 1d cd 1f 59 00 	mov    %rbx,0x591fcd(%rip)        # 0x180961bf8
   1803cfc2b:	45 33 c9             	xor    %r9d,%r9d
   1803cfc2e:	48 8d 15 6b 6d 4d 00 	lea    0x4d6d6b(%rip),%rdx        # 0x1808a69a0
   1803cfc35:	48 8d 0d f4 25 30 00 	lea    0x3025f4(%rip),%rcx        # 0x1806d2230
   1803cfc3c:	e8 2f a7 ff ff       	call   0x1803ca370
   1803cfc41:	48 8d 0d e8 25 30 00 	lea    0x3025e8(%rip),%rcx        # 0x1806d2230
   1803cfc48:	ff 15 32 b5 19 00    	call   *0x19b532(%rip)        # 0x18056b180
   1803cfc4e:	48 8b d8             	mov    %rax,%rbx
   1803cfc51:	48 85 c0             	test   %rax,%rax
   1803cfc54:	0f 84 a3 00 00 00    	je     0x1803cfcfd
   1803cfc5a:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803cfc5d:	33 c0                	xor    %eax,%eax
   1803cfc5f:	0f 11 85 68 05 00 00 	movups %xmm0,0x568(%rbp)
   1803cfc66:	48 89 85 78 05 00 00 	mov    %rax,0x578(%rbp)
   1803cfc6d:	ff 15 1d b6 19 00    	call   *0x19b61d(%rip)        # 0x18056b290
   1803cfc73:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803cfc79:	4c 8d 85 68 05 00 00 	lea    0x568(%rbp),%r8
   1803cfc80:	48 8b c8             	mov    %rax,%rcx
   1803cfc83:	48 8b d3             	mov    %rbx,%rdx
   1803cfc86:	ff 15 0c b6 19 00    	call   *0x19b60c(%rip)        # 0x18056b298
   1803cfc8c:	85 c0                	test   %eax,%eax
   1803cfc8e:	74 6d                	je     0x1803cfcfd
   1803cfc90:	48 8b 85 68 05 00 00 	mov    0x568(%rbp),%rax
   1803cfc97:	8b 8d 70 05 00 00    	mov    0x570(%rbp),%ecx
   1803cfc9d:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803cfca2:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803cfca7:	48 85 c0             	test   %rax,%rax
   1803cfcaa:	74 51                	je     0x1803cfcfd
   1803cfcac:	48 85 c9             	test   %rcx,%rcx
   1803cfcaf:	74 4c                	je     0x1803cfcfd
   1803cfcb1:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803cfcb6:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803cfcbb:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803cfcc0:	48 c7 44 24 38 53 00 	movq   $0x53,0x38(%rsp)
   1803cfcc7:	00 00 
   1803cfcc9:	e8 32 21 e0 ff       	call   0x1801d1e00
   1803cfcce:	48 8b d8             	mov    %rax,%rbx
   1803cfcd1:	48 85 c0             	test   %rax,%rax
   1803cfcd4:	75 0c                	jne    0x1803cfce2
   1803cfcd6:	4c 8b cf             	mov    %rdi,%r9
   1803cfcd9:	48 8d 0d f8 64 4d 00 	lea    0x4d64f8(%rip),%rcx        # 0x1808a61d8
   1803cfce0:	eb 29                	jmp    0x1803cfd0b
   1803cfce2:	4c 8b c8             	mov    %rax,%r9
   1803cfce5:	48 8d 15 b4 6c 4d 00 	lea    0x4d6cb4(%rip),%rdx        # 0x1808a69a0
   1803cfcec:	4c 8b c7             	mov    %rdi,%r8
   1803cfcef:	48 8d 0d 3a 25 30 00 	lea    0x30253a(%rip),%rcx        # 0x1806d2230
   1803cfcf6:	e8 75 a6 ff ff       	call   0x1803ca370
   1803cfcfb:	eb 2a                	jmp    0x1803cfd27
   1803cfcfd:	4c 8d 0d 3f b9 1b 00 	lea    0x1bb93f(%rip),%r9        # 0x18058b643
   1803cfd04:	48 8d 0d f5 64 4d 00 	lea    0x4d64f5(%rip),%rcx        # 0x1808a6200
   1803cfd0b:	ff 05 2f 1b d4 00    	incl   0xd41b2f(%rip)        # 0x181111840
   1803cfd11:	4c 8d 05 88 6c 4d 00 	lea    0x4d6c88(%rip),%r8        # 0x1808a69a0
   1803cfd18:	48 8d 15 11 25 30 00 	lea    0x302511(%rip),%rdx        # 0x1806d2230
   1803cfd1f:	e8 3c 28 ee ff       	call   0x1802b2560
   1803cfd24:	49 8b de             	mov    %r14,%rbx
   1803cfd27:	ff 05 17 1b d4 00    	incl   0xd41b17(%rip)        # 0x181111844
   1803cfd2d:	48 8d 3d 54 2e 4d 00 	lea    0x4d2e54(%rip),%rdi        # 0x1808a2b88
   1803cfd34:	4c 8b c7             	mov    %rdi,%r8
   1803cfd37:	48 89 1d c2 1e 59 00 	mov    %rbx,0x591ec2(%rip)        # 0x180961c00
   1803cfd3e:	45 33 c9             	xor    %r9d,%r9d
   1803cfd41:	48 8d 15 40 6c 4d 00 	lea    0x4d6c40(%rip),%rdx        # 0x1808a6988
   1803cfd48:	48 8d 0d e1 24 30 00 	lea    0x3024e1(%rip),%rcx        # 0x1806d2230
   1803cfd4f:	e8 1c a6 ff ff       	call   0x1803ca370
   1803cfd54:	48 8d 0d d5 24 30 00 	lea    0x3024d5(%rip),%rcx        # 0x1806d2230
   1803cfd5b:	ff 15 1f b4 19 00    	call   *0x19b41f(%rip)        # 0x18056b180
   1803cfd61:	48 8b d8             	mov    %rax,%rbx
   1803cfd64:	48 85 c0             	test   %rax,%rax
   1803cfd67:	0f 84 a3 00 00 00    	je     0x1803cfe10
   1803cfd6d:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803cfd70:	33 c0                	xor    %eax,%eax
   1803cfd72:	0f 11 85 80 05 00 00 	movups %xmm0,0x580(%rbp)
   1803cfd79:	48 89 85 90 05 00 00 	mov    %rax,0x590(%rbp)
   1803cfd80:	ff 15 0a b5 19 00    	call   *0x19b50a(%rip)        # 0x18056b290
   1803cfd86:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803cfd8c:	4c 8d 85 80 05 00 00 	lea    0x580(%rbp),%r8
   1803cfd93:	48 8b c8             	mov    %rax,%rcx
   1803cfd96:	48 8b d3             	mov    %rbx,%rdx
   1803cfd99:	ff 15 f9 b4 19 00    	call   *0x19b4f9(%rip)        # 0x18056b298
   1803cfd9f:	85 c0                	test   %eax,%eax
   1803cfda1:	74 6d                	je     0x1803cfe10
   1803cfda3:	48 8b 85 80 05 00 00 	mov    0x580(%rbp),%rax
   1803cfdaa:	8b 8d 88 05 00 00    	mov    0x588(%rbp),%ecx
   1803cfdb0:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803cfdb5:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803cfdba:	48 85 c0             	test   %rax,%rax
   1803cfdbd:	74 51                	je     0x1803cfe10
   1803cfdbf:	48 85 c9             	test   %rcx,%rcx
   1803cfdc2:	74 4c                	je     0x1803cfe10
   1803cfdc4:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803cfdc9:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803cfdce:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803cfdd3:	48 c7 44 24 38 38 00 	movq   $0x38,0x38(%rsp)
   1803cfdda:	00 00 
   1803cfddc:	e8 1f 20 e0 ff       	call   0x1801d1e00
   1803cfde1:	48 8b d8             	mov    %rax,%rbx
   1803cfde4:	48 85 c0             	test   %rax,%rax
   1803cfde7:	75 0c                	jne    0x1803cfdf5
   1803cfde9:	4c 8b cf             	mov    %rdi,%r9
   1803cfdec:	48 8d 0d e5 63 4d 00 	lea    0x4d63e5(%rip),%rcx        # 0x1808a61d8
   1803cfdf3:	eb 29                	jmp    0x1803cfe1e
   1803cfdf5:	4c 8b c8             	mov    %rax,%r9
   1803cfdf8:	48 8d 15 89 6b 4d 00 	lea    0x4d6b89(%rip),%rdx        # 0x1808a6988
   1803cfdff:	4c 8b c7             	mov    %rdi,%r8
   1803cfe02:	48 8d 0d 27 24 30 00 	lea    0x302427(%rip),%rcx        # 0x1806d2230
   1803cfe09:	e8 62 a5 ff ff       	call   0x1803ca370
   1803cfe0e:	eb 2a                	jmp    0x1803cfe3a
   1803cfe10:	4c 8d 0d 2c b8 1b 00 	lea    0x1bb82c(%rip),%r9        # 0x18058b643
   1803cfe17:	48 8d 0d e2 63 4d 00 	lea    0x4d63e2(%rip),%rcx        # 0x1808a6200
   1803cfe1e:	ff 05 1c 1a d4 00    	incl   0xd41a1c(%rip)        # 0x181111840
   1803cfe24:	4c 8d 05 5d 6b 4d 00 	lea    0x4d6b5d(%rip),%r8        # 0x1808a6988
   1803cfe2b:	48 8d 15 fe 23 30 00 	lea    0x3023fe(%rip),%rdx        # 0x1806d2230
   1803cfe32:	e8 29 27 ee ff       	call   0x1802b2560
   1803cfe37:	49 8b de             	mov    %r14,%rbx
   1803cfe3a:	ff 05 04 1a d4 00    	incl   0xd41a04(%rip)        # 0x181111844
   1803cfe40:	48 8d 3d 79 2b 4d 00 	lea    0x4d2b79(%rip),%rdi        # 0x1808a29c0
   1803cfe47:	4c 8b c7             	mov    %rdi,%r8
   1803cfe4a:	48 89 1d b7 1d 59 00 	mov    %rbx,0x591db7(%rip)        # 0x180961c08
   1803cfe51:	45 33 c9             	xor    %r9d,%r9d
   1803cfe54:	48 8d 15 15 6b 4d 00 	lea    0x4d6b15(%rip),%rdx        # 0x1808a6970
   1803cfe5b:	48 8d 0d ce 23 30 00 	lea    0x3023ce(%rip),%rcx        # 0x1806d2230
   1803cfe62:	e8 09 a5 ff ff       	call   0x1803ca370
   1803cfe67:	48 8d 0d c2 23 30 00 	lea    0x3023c2(%rip),%rcx        # 0x1806d2230
   1803cfe6e:	ff 15 0c b3 19 00    	call   *0x19b30c(%rip)        # 0x18056b180
   1803cfe74:	48 8b d8             	mov    %rax,%rbx
   1803cfe77:	48 85 c0             	test   %rax,%rax
   1803cfe7a:	0f 84 a3 00 00 00    	je     0x1803cff23
   1803cfe80:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803cfe83:	33 c0                	xor    %eax,%eax
   1803cfe85:	0f 11 85 98 05 00 00 	movups %xmm0,0x598(%rbp)
   1803cfe8c:	48 89 85 a8 05 00 00 	mov    %rax,0x5a8(%rbp)
   1803cfe93:	ff 15 f7 b3 19 00    	call   *0x19b3f7(%rip)        # 0x18056b290
   1803cfe99:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803cfe9f:	4c 8d 85 98 05 00 00 	lea    0x598(%rbp),%r8
   1803cfea6:	48 8b c8             	mov    %rax,%rcx
   1803cfea9:	48 8b d3             	mov    %rbx,%rdx
   1803cfeac:	ff 15 e6 b3 19 00    	call   *0x19b3e6(%rip)        # 0x18056b298
   1803cfeb2:	85 c0                	test   %eax,%eax
   1803cfeb4:	74 6d                	je     0x1803cff23
   1803cfeb6:	48 8b 85 98 05 00 00 	mov    0x598(%rbp),%rax
   1803cfebd:	8b 8d a0 05 00 00    	mov    0x5a0(%rbp),%ecx
   1803cfec3:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803cfec8:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803cfecd:	48 85 c0             	test   %rax,%rax
   1803cfed0:	74 51                	je     0x1803cff23
   1803cfed2:	48 85 c9             	test   %rcx,%rcx
   1803cfed5:	74 4c                	je     0x1803cff23
   1803cfed7:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803cfedc:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803cfee1:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803cfee6:	48 c7 44 24 38 c6 01 	movq   $0x1c6,0x38(%rsp)
   1803cfeed:	00 00 
   1803cfeef:	e8 0c 1f e0 ff       	call   0x1801d1e00
   1803cfef4:	48 8b d8             	mov    %rax,%rbx
   1803cfef7:	48 85 c0             	test   %rax,%rax
   1803cfefa:	75 0c                	jne    0x1803cff08
   1803cfefc:	4c 8b cf             	mov    %rdi,%r9
   1803cfeff:	48 8d 0d d2 62 4d 00 	lea    0x4d62d2(%rip),%rcx        # 0x1808a61d8
   1803cff06:	eb 29                	jmp    0x1803cff31
   1803cff08:	4c 8b c8             	mov    %rax,%r9
   1803cff0b:	48 8d 15 5e 6a 4d 00 	lea    0x4d6a5e(%rip),%rdx        # 0x1808a6970
   1803cff12:	4c 8b c7             	mov    %rdi,%r8
   1803cff15:	48 8d 0d 14 23 30 00 	lea    0x302314(%rip),%rcx        # 0x1806d2230
   1803cff1c:	e8 4f a4 ff ff       	call   0x1803ca370
   1803cff21:	eb 2a                	jmp    0x1803cff4d
   1803cff23:	4c 8d 0d 19 b7 1b 00 	lea    0x1bb719(%rip),%r9        # 0x18058b643
   1803cff2a:	48 8d 0d cf 62 4d 00 	lea    0x4d62cf(%rip),%rcx        # 0x1808a6200
   1803cff31:	ff 05 09 19 d4 00    	incl   0xd41909(%rip)        # 0x181111840
   1803cff37:	4c 8d 05 32 6a 4d 00 	lea    0x4d6a32(%rip),%r8        # 0x1808a6970
   1803cff3e:	48 8d 15 eb 22 30 00 	lea    0x3022eb(%rip),%rdx        # 0x1806d2230
   1803cff45:	e8 16 26 ee ff       	call   0x1802b2560
   1803cff4a:	49 8b de             	mov    %r14,%rbx
   1803cff4d:	ff 05 f1 18 d4 00    	incl   0xd418f1(%rip)        # 0x181111844
   1803cff53:	48 8d 3d 96 28 4d 00 	lea    0x4d2896(%rip),%rdi        # 0x1808a27f0
   1803cff5a:	4c 8b c7             	mov    %rdi,%r8
   1803cff5d:	48 89 1d ac 1c 59 00 	mov    %rbx,0x591cac(%rip)        # 0x180961c10
   1803cff64:	45 33 c9             	xor    %r9d,%r9d
   1803cff67:	48 8d 15 ea 69 4d 00 	lea    0x4d69ea(%rip),%rdx        # 0x1808a6958
   1803cff6e:	48 8d 0d bb 22 30 00 	lea    0x3022bb(%rip),%rcx        # 0x1806d2230
   1803cff75:	e8 f6 a3 ff ff       	call   0x1803ca370
   1803cff7a:	48 8d 0d af 22 30 00 	lea    0x3022af(%rip),%rcx        # 0x1806d2230
   1803cff81:	ff 15 f9 b1 19 00    	call   *0x19b1f9(%rip)        # 0x18056b180
   1803cff87:	48 8b d8             	mov    %rax,%rbx
   1803cff8a:	48 85 c0             	test   %rax,%rax
   1803cff8d:	0f 84 a3 00 00 00    	je     0x1803d0036
   1803cff93:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803cff96:	33 c0                	xor    %eax,%eax
   1803cff98:	0f 11 85 b0 05 00 00 	movups %xmm0,0x5b0(%rbp)
   1803cff9f:	48 89 85 c0 05 00 00 	mov    %rax,0x5c0(%rbp)
   1803cffa6:	ff 15 e4 b2 19 00    	call   *0x19b2e4(%rip)        # 0x18056b290
   1803cffac:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803cffb2:	4c 8d 85 b0 05 00 00 	lea    0x5b0(%rbp),%r8
   1803cffb9:	48 8b c8             	mov    %rax,%rcx
   1803cffbc:	48 8b d3             	mov    %rbx,%rdx
   1803cffbf:	ff 15 d3 b2 19 00    	call   *0x19b2d3(%rip)        # 0x18056b298
   1803cffc5:	85 c0                	test   %eax,%eax
   1803cffc7:	74 6d                	je     0x1803d0036
   1803cffc9:	48 8b 85 b0 05 00 00 	mov    0x5b0(%rbp),%rax
   1803cffd0:	8b 8d b8 05 00 00    	mov    0x5b8(%rbp),%ecx
   1803cffd6:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803cffdb:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803cffe0:	48 85 c0             	test   %rax,%rax
   1803cffe3:	74 51                	je     0x1803d0036
   1803cffe5:	48 85 c9             	test   %rcx,%rcx
   1803cffe8:	74 4c                	je     0x1803d0036
   1803cffea:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803cffef:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803cfff4:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803cfff9:	48 c7 44 24 38 c6 01 	movq   $0x1c6,0x38(%rsp)
   1803d0000:	00 00 
   1803d0002:	e8 f9 1d e0 ff       	call   0x1801d1e00
   1803d0007:	48 8b d8             	mov    %rax,%rbx
   1803d000a:	48 85 c0             	test   %rax,%rax
   1803d000d:	75 0c                	jne    0x1803d001b
   1803d000f:	4c 8b cf             	mov    %rdi,%r9
   1803d0012:	48 8d 0d bf 61 4d 00 	lea    0x4d61bf(%rip),%rcx        # 0x1808a61d8
   1803d0019:	eb 29                	jmp    0x1803d0044
   1803d001b:	4c 8b c8             	mov    %rax,%r9
   1803d001e:	48 8d 15 33 69 4d 00 	lea    0x4d6933(%rip),%rdx        # 0x1808a6958
   1803d0025:	4c 8b c7             	mov    %rdi,%r8
   1803d0028:	48 8d 0d 01 22 30 00 	lea    0x302201(%rip),%rcx        # 0x1806d2230
   1803d002f:	e8 3c a3 ff ff       	call   0x1803ca370
   1803d0034:	eb 2a                	jmp    0x1803d0060
   1803d0036:	4c 8d 0d 06 b6 1b 00 	lea    0x1bb606(%rip),%r9        # 0x18058b643
   1803d003d:	48 8d 0d bc 61 4d 00 	lea    0x4d61bc(%rip),%rcx        # 0x1808a6200
   1803d0044:	ff 05 f6 17 d4 00    	incl   0xd417f6(%rip)        # 0x181111840
   1803d004a:	4c 8d 05 07 69 4d 00 	lea    0x4d6907(%rip),%r8        # 0x1808a6958
   1803d0051:	48 8d 15 d8 21 30 00 	lea    0x3021d8(%rip),%rdx        # 0x1806d2230
   1803d0058:	e8 03 25 ee ff       	call   0x1802b2560
   1803d005d:	49 8b de             	mov    %r14,%rbx
   1803d0060:	ff 05 de 17 d4 00    	incl   0xd417de(%rip)        # 0x181111844
   1803d0066:	48 8d 3d 4b 27 4d 00 	lea    0x4d274b(%rip),%rdi        # 0x1808a27b8
   1803d006d:	4c 8b c7             	mov    %rdi,%r8
   1803d0070:	48 89 1d a1 1b 59 00 	mov    %rbx,0x591ba1(%rip)        # 0x180961c18
   1803d0077:	45 33 c9             	xor    %r9d,%r9d
   1803d007a:	48 8d 15 c7 68 4d 00 	lea    0x4d68c7(%rip),%rdx        # 0x1808a6948
   1803d0081:	48 8d 0d a8 21 30 00 	lea    0x3021a8(%rip),%rcx        # 0x1806d2230
   1803d0088:	e8 e3 a2 ff ff       	call   0x1803ca370
   1803d008d:	48 8d 0d 9c 21 30 00 	lea    0x30219c(%rip),%rcx        # 0x1806d2230
   1803d0094:	ff 15 e6 b0 19 00    	call   *0x19b0e6(%rip)        # 0x18056b180
   1803d009a:	48 8b d8             	mov    %rax,%rbx
   1803d009d:	48 85 c0             	test   %rax,%rax
   1803d00a0:	0f 84 b2 00 00 00    	je     0x1803d0158
   1803d00a6:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d00a9:	33 c0                	xor    %eax,%eax
   1803d00ab:	0f 11 85 c8 05 00 00 	movups %xmm0,0x5c8(%rbp)
   1803d00b2:	48 89 85 d8 05 00 00 	mov    %rax,0x5d8(%rbp)
   1803d00b9:	ff 15 d1 b1 19 00    	call   *0x19b1d1(%rip)        # 0x18056b290
   1803d00bf:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d00c5:	4c 8d 85 c8 05 00 00 	lea    0x5c8(%rbp),%r8
   1803d00cc:	48 8b c8             	mov    %rax,%rcx
   1803d00cf:	48 8b d3             	mov    %rbx,%rdx
   1803d00d2:	ff 15 c0 b1 19 00    	call   *0x19b1c0(%rip)        # 0x18056b298
   1803d00d8:	85 c0                	test   %eax,%eax
   1803d00da:	74 7c                	je     0x1803d0158
   1803d00dc:	48 8b 85 c8 05 00 00 	mov    0x5c8(%rbp),%rax
   1803d00e3:	8b 8d d0 05 00 00    	mov    0x5d0(%rbp),%ecx
   1803d00e9:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d00ee:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d00f3:	48 85 c0             	test   %rax,%rax
   1803d00f6:	74 60                	je     0x1803d0158
   1803d00f8:	48 85 c9             	test   %rcx,%rcx
   1803d00fb:	74 5b                	je     0x1803d0158
   1803d00fd:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d0102:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d0107:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d010c:	48 c7 44 24 38 2e 00 	movq   $0x2e,0x38(%rsp)
   1803d0113:	00 00 
   1803d0115:	e8 e6 1c e0 ff       	call   0x1801d1e00
   1803d011a:	48 8b d8             	mov    %rax,%rbx
   1803d011d:	48 85 c0             	test   %rax,%rax
   1803d0120:	75 0c                	jne    0x1803d012e
   1803d0122:	4c 8b cf             	mov    %rdi,%r9
   1803d0125:	48 8d 0d ac 60 4d 00 	lea    0x4d60ac(%rip),%rcx        # 0x1808a61d8
   1803d012c:	eb 38                	jmp    0x1803d0166
   1803d012e:	4c 8b cb             	mov    %rbx,%r9
   1803d0131:	48 8d 15 10 68 4d 00 	lea    0x4d6810(%rip),%rdx        # 0x1808a6948
   1803d0138:	4c 8b c7             	mov    %rdi,%r8
   1803d013b:	48 8d 0d ee 20 30 00 	lea    0x3020ee(%rip),%rcx        # 0x1806d2230
   1803d0142:	e8 29 a2 ff ff       	call   0x1803ca370
   1803d0147:	48 8d 4b 08          	lea    0x8(%rbx),%rcx
   1803d014b:	e8 b0 10 c4 ff       	call   0x180011200
   1803d0150:	89 05 ca 1a 59 00    	mov    %eax,0x591aca(%rip)        # 0x180961c20
   1803d0156:	eb 27                	jmp    0x1803d017f
   1803d0158:	4c 8d 0d e4 b4 1b 00 	lea    0x1bb4e4(%rip),%r9        # 0x18058b643
   1803d015f:	48 8d 0d 9a 60 4d 00 	lea    0x4d609a(%rip),%rcx        # 0x1808a6200
   1803d0166:	ff 05 d4 16 d4 00    	incl   0xd416d4(%rip)        # 0x181111840
   1803d016c:	4c 8d 05 d5 67 4d 00 	lea    0x4d67d5(%rip),%r8        # 0x1808a6948
   1803d0173:	48 8d 15 b6 20 30 00 	lea    0x3020b6(%rip),%rdx        # 0x1806d2230
   1803d017a:	e8 e1 23 ee ff       	call   0x1802b2560
   1803d017f:	ff 05 bf 16 d4 00    	incl   0xd416bf(%rip)        # 0x181111844
   1803d0185:	48 8d 3d e4 25 4d 00 	lea    0x4d25e4(%rip),%rdi        # 0x1808a2770
   1803d018c:	4c 8b c7             	mov    %rdi,%r8
   1803d018f:	48 8d 15 a2 67 4d 00 	lea    0x4d67a2(%rip),%rdx        # 0x1808a6938
   1803d0196:	45 33 c9             	xor    %r9d,%r9d
   1803d0199:	48 8d 0d 90 20 30 00 	lea    0x302090(%rip),%rcx        # 0x1806d2230
   1803d01a0:	e8 cb a1 ff ff       	call   0x1803ca370
   1803d01a5:	48 8d 0d 84 20 30 00 	lea    0x302084(%rip),%rcx        # 0x1806d2230
   1803d01ac:	ff 15 ce af 19 00    	call   *0x19afce(%rip)        # 0x18056b180
   1803d01b2:	48 8b d8             	mov    %rax,%rbx
   1803d01b5:	48 85 c0             	test   %rax,%rax
   1803d01b8:	0f 84 b2 00 00 00    	je     0x1803d0270
   1803d01be:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d01c1:	33 c0                	xor    %eax,%eax
   1803d01c3:	0f 11 85 e0 05 00 00 	movups %xmm0,0x5e0(%rbp)
   1803d01ca:	48 89 85 f0 05 00 00 	mov    %rax,0x5f0(%rbp)
   1803d01d1:	ff 15 b9 b0 19 00    	call   *0x19b0b9(%rip)        # 0x18056b290
   1803d01d7:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d01dd:	4c 8d 85 e0 05 00 00 	lea    0x5e0(%rbp),%r8
   1803d01e4:	48 8b c8             	mov    %rax,%rcx
   1803d01e7:	48 8b d3             	mov    %rbx,%rdx
   1803d01ea:	ff 15 a8 b0 19 00    	call   *0x19b0a8(%rip)        # 0x18056b298
   1803d01f0:	85 c0                	test   %eax,%eax
   1803d01f2:	74 7c                	je     0x1803d0270
   1803d01f4:	48 8b 85 e0 05 00 00 	mov    0x5e0(%rbp),%rax
   1803d01fb:	8b 8d e8 05 00 00    	mov    0x5e8(%rbp),%ecx
   1803d0201:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d0206:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d020b:	48 85 c0             	test   %rax,%rax
   1803d020e:	74 60                	je     0x1803d0270
   1803d0210:	48 85 c9             	test   %rcx,%rcx
   1803d0213:	74 5b                	je     0x1803d0270
   1803d0215:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d021a:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d021f:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d0224:	48 c7 44 24 38 43 00 	movq   $0x43,0x38(%rsp)
   1803d022b:	00 00 
   1803d022d:	e8 ce 1b e0 ff       	call   0x1801d1e00
   1803d0232:	48 8b d8             	mov    %rax,%rbx
   1803d0235:	48 85 c0             	test   %rax,%rax
   1803d0238:	75 0c                	jne    0x1803d0246
   1803d023a:	4c 8b cf             	mov    %rdi,%r9
   1803d023d:	48 8d 0d 94 5f 4d 00 	lea    0x4d5f94(%rip),%rcx        # 0x1808a61d8
   1803d0244:	eb 38                	jmp    0x1803d027e
   1803d0246:	4c 8b cb             	mov    %rbx,%r9
   1803d0249:	48 8d 15 e8 66 4d 00 	lea    0x4d66e8(%rip),%rdx        # 0x1808a6938
   1803d0250:	4c 8b c7             	mov    %rdi,%r8
   1803d0253:	48 8d 0d d6 1f 30 00 	lea    0x301fd6(%rip),%rcx        # 0x1806d2230
   1803d025a:	e8 11 a1 ff ff       	call   0x1803ca370
   1803d025f:	48 8d 4b 0e          	lea    0xe(%rbx),%rcx
   1803d0263:	e8 98 0f c4 ff       	call   0x180011200
   1803d0268:	89 05 b6 19 59 00    	mov    %eax,0x5919b6(%rip)        # 0x180961c24
   1803d026e:	eb 27                	jmp    0x1803d0297
   1803d0270:	4c 8d 0d cc b3 1b 00 	lea    0x1bb3cc(%rip),%r9        # 0x18058b643
   1803d0277:	48 8d 0d 82 5f 4d 00 	lea    0x4d5f82(%rip),%rcx        # 0x1808a6200
   1803d027e:	ff 05 bc 15 d4 00    	incl   0xd415bc(%rip)        # 0x181111840
   1803d0284:	4c 8d 05 ad 66 4d 00 	lea    0x4d66ad(%rip),%r8        # 0x1808a6938
   1803d028b:	48 8d 15 9e 1f 30 00 	lea    0x301f9e(%rip),%rdx        # 0x1806d2230
   1803d0292:	e8 c9 22 ee ff       	call   0x1802b2560
   1803d0297:	ff 05 a7 15 d4 00    	incl   0xd415a7(%rip)        # 0x181111844
   1803d029d:	48 8d 3d 5c 2c 4d 00 	lea    0x4d2c5c(%rip),%rdi        # 0x1808a2f00
   1803d02a4:	4c 8b c7             	mov    %rdi,%r8
   1803d02a7:	48 8d 15 b2 67 4d 00 	lea    0x4d67b2(%rip),%rdx        # 0x1808a6a60
   1803d02ae:	45 33 c9             	xor    %r9d,%r9d
   1803d02b1:	48 8d 0d 78 1f 30 00 	lea    0x301f78(%rip),%rcx        # 0x1806d2230
   1803d02b8:	e8 b3 a0 ff ff       	call   0x1803ca370
   1803d02bd:	48 8d 0d 6c 1f 30 00 	lea    0x301f6c(%rip),%rcx        # 0x1806d2230
   1803d02c4:	ff 15 b6 ae 19 00    	call   *0x19aeb6(%rip)        # 0x18056b180
   1803d02ca:	48 8b d8             	mov    %rax,%rbx
   1803d02cd:	48 85 c0             	test   %rax,%rax
   1803d02d0:	0f 84 b2 00 00 00    	je     0x1803d0388
   1803d02d6:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d02d9:	33 c0                	xor    %eax,%eax
   1803d02db:	0f 11 85 f8 05 00 00 	movups %xmm0,0x5f8(%rbp)
   1803d02e2:	48 89 85 08 06 00 00 	mov    %rax,0x608(%rbp)
   1803d02e9:	ff 15 a1 af 19 00    	call   *0x19afa1(%rip)        # 0x18056b290
   1803d02ef:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d02f5:	4c 8d 85 f8 05 00 00 	lea    0x5f8(%rbp),%r8
   1803d02fc:	48 8b c8             	mov    %rax,%rcx
   1803d02ff:	48 8b d3             	mov    %rbx,%rdx
   1803d0302:	ff 15 90 af 19 00    	call   *0x19af90(%rip)        # 0x18056b298
   1803d0308:	85 c0                	test   %eax,%eax
   1803d030a:	74 7c                	je     0x1803d0388
   1803d030c:	48 8b 85 f8 05 00 00 	mov    0x5f8(%rbp),%rax
   1803d0313:	8b 8d 00 06 00 00    	mov    0x600(%rbp),%ecx
   1803d0319:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d031e:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d0323:	48 85 c0             	test   %rax,%rax
   1803d0326:	74 60                	je     0x1803d0388
   1803d0328:	48 85 c9             	test   %rcx,%rcx
   1803d032b:	74 5b                	je     0x1803d0388
   1803d032d:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d0332:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d0337:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d033c:	48 c7 44 24 38 58 00 	movq   $0x58,0x38(%rsp)
   1803d0343:	00 00 
   1803d0345:	e8 b6 1a e0 ff       	call   0x1801d1e00
   1803d034a:	48 8b d8             	mov    %rax,%rbx
   1803d034d:	48 85 c0             	test   %rax,%rax
   1803d0350:	75 0c                	jne    0x1803d035e
   1803d0352:	4c 8b cf             	mov    %rdi,%r9
   1803d0355:	48 8d 0d 7c 5e 4d 00 	lea    0x4d5e7c(%rip),%rcx        # 0x1808a61d8
   1803d035c:	eb 38                	jmp    0x1803d0396
   1803d035e:	4c 8b cb             	mov    %rbx,%r9
   1803d0361:	48 8d 15 f8 66 4d 00 	lea    0x4d66f8(%rip),%rdx        # 0x1808a6a60
   1803d0368:	4c 8b c7             	mov    %rdi,%r8
   1803d036b:	48 8d 0d be 1e 30 00 	lea    0x301ebe(%rip),%rcx        # 0x1806d2230
   1803d0372:	e8 f9 9f ff ff       	call   0x1803ca370
   1803d0377:	48 8d 4b 1c          	lea    0x1c(%rbx),%rcx
   1803d037b:	e8 80 0e c4 ff       	call   0x180011200
   1803d0380:	89 05 a2 18 59 00    	mov    %eax,0x5918a2(%rip)        # 0x180961c28
   1803d0386:	eb 27                	jmp    0x1803d03af
   1803d0388:	4c 8d 0d b4 b2 1b 00 	lea    0x1bb2b4(%rip),%r9        # 0x18058b643
   1803d038f:	48 8d 0d 6a 5e 4d 00 	lea    0x4d5e6a(%rip),%rcx        # 0x1808a6200
   1803d0396:	ff 05 a4 14 d4 00    	incl   0xd414a4(%rip)        # 0x181111840
   1803d039c:	4c 8d 05 bd 66 4d 00 	lea    0x4d66bd(%rip),%r8        # 0x1808a6a60
   1803d03a3:	48 8d 15 86 1e 30 00 	lea    0x301e86(%rip),%rdx        # 0x1806d2230
   1803d03aa:	e8 b1 21 ee ff       	call   0x1802b2560
   1803d03af:	ff 05 8f 14 d4 00    	incl   0xd4148f(%rip)        # 0x181111844
   1803d03b5:	48 8d 3d c4 40 4d 00 	lea    0x4d40c4(%rip),%rdi        # 0x1808a4480
   1803d03bc:	4c 8b c7             	mov    %rdi,%r8
   1803d03bf:	48 8d 15 c2 f6 32 00 	lea    0x32f6c2(%rip),%rdx        # 0x1806ffa88
   1803d03c6:	45 33 c9             	xor    %r9d,%r9d
   1803d03c9:	48 8d 0d 60 1e 30 00 	lea    0x301e60(%rip),%rcx        # 0x1806d2230
   1803d03d0:	e8 9b 9f ff ff       	call   0x1803ca370
   1803d03d5:	48 8d 0d 54 1e 30 00 	lea    0x301e54(%rip),%rcx        # 0x1806d2230
   1803d03dc:	ff 15 9e ad 19 00    	call   *0x19ad9e(%rip)        # 0x18056b180
   1803d03e2:	48 8b d8             	mov    %rax,%rbx
   1803d03e5:	48 85 c0             	test   %rax,%rax
   1803d03e8:	0f 84 a3 00 00 00    	je     0x1803d0491
   1803d03ee:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d03f1:	33 c0                	xor    %eax,%eax
   1803d03f3:	0f 11 85 10 06 00 00 	movups %xmm0,0x610(%rbp)
   1803d03fa:	48 89 85 20 06 00 00 	mov    %rax,0x620(%rbp)
   1803d0401:	ff 15 89 ae 19 00    	call   *0x19ae89(%rip)        # 0x18056b290
   1803d0407:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d040d:	4c 8d 85 10 06 00 00 	lea    0x610(%rbp),%r8
   1803d0414:	48 8b c8             	mov    %rax,%rcx
   1803d0417:	48 8b d3             	mov    %rbx,%rdx
   1803d041a:	ff 15 78 ae 19 00    	call   *0x19ae78(%rip)        # 0x18056b298
   1803d0420:	85 c0                	test   %eax,%eax
   1803d0422:	74 6d                	je     0x1803d0491
   1803d0424:	48 8b 85 10 06 00 00 	mov    0x610(%rbp),%rax
   1803d042b:	8b 8d 18 06 00 00    	mov    0x618(%rbp),%ecx
   1803d0431:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d0436:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d043b:	48 85 c0             	test   %rax,%rax
   1803d043e:	74 51                	je     0x1803d0491
   1803d0440:	48 85 c9             	test   %rcx,%rcx
   1803d0443:	74 4c                	je     0x1803d0491
   1803d0445:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d044a:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d044f:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d0454:	48 c7 44 24 38 5c 00 	movq   $0x5c,0x38(%rsp)
   1803d045b:	00 00 
   1803d045d:	e8 9e 19 e0 ff       	call   0x1801d1e00
   1803d0462:	48 8b d8             	mov    %rax,%rbx
   1803d0465:	48 85 c0             	test   %rax,%rax
   1803d0468:	75 0c                	jne    0x1803d0476
   1803d046a:	4c 8b cf             	mov    %rdi,%r9
   1803d046d:	48 8d 0d 64 5d 4d 00 	lea    0x4d5d64(%rip),%rcx        # 0x1808a61d8
   1803d0474:	eb 29                	jmp    0x1803d049f
   1803d0476:	4c 8b c8             	mov    %rax,%r9
   1803d0479:	48 8d 15 08 f6 32 00 	lea    0x32f608(%rip),%rdx        # 0x1806ffa88
   1803d0480:	4c 8b c7             	mov    %rdi,%r8
   1803d0483:	48 8d 0d a6 1d 30 00 	lea    0x301da6(%rip),%rcx        # 0x1806d2230
   1803d048a:	e8 e1 9e ff ff       	call   0x1803ca370
   1803d048f:	eb 2a                	jmp    0x1803d04bb
   1803d0491:	4c 8d 0d ab b1 1b 00 	lea    0x1bb1ab(%rip),%r9        # 0x18058b643
   1803d0498:	48 8d 0d 61 5d 4d 00 	lea    0x4d5d61(%rip),%rcx        # 0x1808a6200
   1803d049f:	ff 05 9b 13 d4 00    	incl   0xd4139b(%rip)        # 0x181111840
   1803d04a5:	4c 8d 05 dc f5 32 00 	lea    0x32f5dc(%rip),%r8        # 0x1806ffa88
   1803d04ac:	48 8d 15 7d 1d 30 00 	lea    0x301d7d(%rip),%rdx        # 0x1806d2230
   1803d04b3:	e8 a8 20 ee ff       	call   0x1802b2560
   1803d04b8:	49 8b de             	mov    %r14,%rbx
   1803d04bb:	ff 05 83 13 d4 00    	incl   0xd41383(%rip)        # 0x181111844
   1803d04c1:	48 8d 3d 18 40 4d 00 	lea    0x4d4018(%rip),%rdi        # 0x1808a44e0
   1803d04c8:	4c 8b c7             	mov    %rdi,%r8
   1803d04cb:	48 89 1d 9e 17 59 00 	mov    %rbx,0x59179e(%rip)        # 0x180961c70
   1803d04d2:	45 33 c9             	xor    %r9d,%r9d
   1803d04d5:	48 8d 15 c4 f5 32 00 	lea    0x32f5c4(%rip),%rdx        # 0x1806ffaa0
   1803d04dc:	48 8d 0d 4d 1d 30 00 	lea    0x301d4d(%rip),%rcx        # 0x1806d2230
   1803d04e3:	e8 88 9e ff ff       	call   0x1803ca370
   1803d04e8:	48 8d 0d 41 1d 30 00 	lea    0x301d41(%rip),%rcx        # 0x1806d2230
   1803d04ef:	ff 15 8b ac 19 00    	call   *0x19ac8b(%rip)        # 0x18056b180
   1803d04f5:	48 8b d8             	mov    %rax,%rbx
   1803d04f8:	48 85 c0             	test   %rax,%rax
   1803d04fb:	0f 84 a3 00 00 00    	je     0x1803d05a4
   1803d0501:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d0504:	33 c0                	xor    %eax,%eax
   1803d0506:	0f 11 85 28 06 00 00 	movups %xmm0,0x628(%rbp)
   1803d050d:	48 89 85 38 06 00 00 	mov    %rax,0x638(%rbp)
   1803d0514:	ff 15 76 ad 19 00    	call   *0x19ad76(%rip)        # 0x18056b290
   1803d051a:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d0520:	4c 8d 85 28 06 00 00 	lea    0x628(%rbp),%r8
   1803d0527:	48 8b c8             	mov    %rax,%rcx
   1803d052a:	48 8b d3             	mov    %rbx,%rdx
   1803d052d:	ff 15 65 ad 19 00    	call   *0x19ad65(%rip)        # 0x18056b298
   1803d0533:	85 c0                	test   %eax,%eax
   1803d0535:	74 6d                	je     0x1803d05a4
   1803d0537:	48 8b 85 28 06 00 00 	mov    0x628(%rbp),%rax
   1803d053e:	8b 8d 30 06 00 00    	mov    0x630(%rbp),%ecx
   1803d0544:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d0549:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d054e:	48 85 c0             	test   %rax,%rax
   1803d0551:	74 51                	je     0x1803d05a4
   1803d0553:	48 85 c9             	test   %rcx,%rcx
   1803d0556:	74 4c                	je     0x1803d05a4
   1803d0558:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d055d:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d0562:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d0567:	48 c7 44 24 38 82 00 	movq   $0x82,0x38(%rsp)
   1803d056e:	00 00 
   1803d0570:	e8 8b 18 e0 ff       	call   0x1801d1e00
   1803d0575:	48 8b d8             	mov    %rax,%rbx
   1803d0578:	48 85 c0             	test   %rax,%rax
   1803d057b:	75 0c                	jne    0x1803d0589
   1803d057d:	4c 8b cf             	mov    %rdi,%r9
   1803d0580:	48 8d 0d 51 5c 4d 00 	lea    0x4d5c51(%rip),%rcx        # 0x1808a61d8
   1803d0587:	eb 29                	jmp    0x1803d05b2
   1803d0589:	4c 8b c8             	mov    %rax,%r9
   1803d058c:	48 8d 15 0d f5 32 00 	lea    0x32f50d(%rip),%rdx        # 0x1806ffaa0
   1803d0593:	4c 8b c7             	mov    %rdi,%r8
   1803d0596:	48 8d 0d 93 1c 30 00 	lea    0x301c93(%rip),%rcx        # 0x1806d2230
   1803d059d:	e8 ce 9d ff ff       	call   0x1803ca370
   1803d05a2:	eb 2a                	jmp    0x1803d05ce
   1803d05a4:	4c 8d 0d 98 b0 1b 00 	lea    0x1bb098(%rip),%r9        # 0x18058b643
   1803d05ab:	48 8d 0d 4e 5c 4d 00 	lea    0x4d5c4e(%rip),%rcx        # 0x1808a6200
   1803d05b2:	ff 05 88 12 d4 00    	incl   0xd41288(%rip)        # 0x181111840
   1803d05b8:	4c 8d 05 e1 f4 32 00 	lea    0x32f4e1(%rip),%r8        # 0x1806ffaa0
   1803d05bf:	48 8d 15 6a 1c 30 00 	lea    0x301c6a(%rip),%rdx        # 0x1806d2230
   1803d05c6:	e8 95 1f ee ff       	call   0x1802b2560
   1803d05cb:	49 8b de             	mov    %r14,%rbx
   1803d05ce:	ff 05 70 12 d4 00    	incl   0xd41270(%rip)        # 0x181111844
   1803d05d4:	48 8d 3d f5 4e 4d 00 	lea    0x4d4ef5(%rip),%rdi        # 0x1808a54d0
   1803d05db:	4c 8b c7             	mov    %rdi,%r8
   1803d05de:	48 89 1d 93 16 59 00 	mov    %rbx,0x591693(%rip)        # 0x180961c78
   1803d05e5:	45 33 c9             	xor    %r9d,%r9d
   1803d05e8:	48 8d 15 61 64 4d 00 	lea    0x4d6461(%rip),%rdx        # 0x1808a6a50
   1803d05ef:	48 8d 0d d2 c2 33 00 	lea    0x33c2d2(%rip),%rcx        # 0x18070c8c8
   1803d05f6:	e8 75 9d ff ff       	call   0x1803ca370
   1803d05fb:	48 8d 0d c6 c2 33 00 	lea    0x33c2c6(%rip),%rcx        # 0x18070c8c8
   1803d0602:	ff 15 78 ab 19 00    	call   *0x19ab78(%rip)        # 0x18056b180
   1803d0608:	48 8b d8             	mov    %rax,%rbx
   1803d060b:	48 85 c0             	test   %rax,%rax
   1803d060e:	0f 84 a3 00 00 00    	je     0x1803d06b7
   1803d0614:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d0617:	33 c0                	xor    %eax,%eax
   1803d0619:	0f 11 85 40 06 00 00 	movups %xmm0,0x640(%rbp)
   1803d0620:	48 89 85 50 06 00 00 	mov    %rax,0x650(%rbp)
   1803d0627:	ff 15 63 ac 19 00    	call   *0x19ac63(%rip)        # 0x18056b290
   1803d062d:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d0633:	4c 8d 85 40 06 00 00 	lea    0x640(%rbp),%r8
   1803d063a:	48 8b c8             	mov    %rax,%rcx
   1803d063d:	48 8b d3             	mov    %rbx,%rdx
   1803d0640:	ff 15 52 ac 19 00    	call   *0x19ac52(%rip)        # 0x18056b298
   1803d0646:	85 c0                	test   %eax,%eax
   1803d0648:	74 6d                	je     0x1803d06b7
   1803d064a:	48 8b 85 40 06 00 00 	mov    0x640(%rbp),%rax
   1803d0651:	8b 8d 48 06 00 00    	mov    0x648(%rbp),%ecx
   1803d0657:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d065c:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d0661:	48 85 c0             	test   %rax,%rax
   1803d0664:	74 51                	je     0x1803d06b7
   1803d0666:	48 85 c9             	test   %rcx,%rcx
   1803d0669:	74 4c                	je     0x1803d06b7
   1803d066b:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d0670:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d0675:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d067a:	48 c7 44 24 38 60 00 	movq   $0x60,0x38(%rsp)
   1803d0681:	00 00 
   1803d0683:	e8 78 17 e0 ff       	call   0x1801d1e00
   1803d0688:	48 8b d8             	mov    %rax,%rbx
   1803d068b:	48 85 c0             	test   %rax,%rax
   1803d068e:	75 0c                	jne    0x1803d069c
   1803d0690:	4c 8b cf             	mov    %rdi,%r9
   1803d0693:	48 8d 0d 3e 5b 4d 00 	lea    0x4d5b3e(%rip),%rcx        # 0x1808a61d8
   1803d069a:	eb 29                	jmp    0x1803d06c5
   1803d069c:	4c 8b c8             	mov    %rax,%r9
   1803d069f:	48 8d 15 aa 63 4d 00 	lea    0x4d63aa(%rip),%rdx        # 0x1808a6a50
   1803d06a6:	4c 8b c7             	mov    %rdi,%r8
   1803d06a9:	48 8d 0d 18 c2 33 00 	lea    0x33c218(%rip),%rcx        # 0x18070c8c8
   1803d06b0:	e8 bb 9c ff ff       	call   0x1803ca370
   1803d06b5:	eb 2a                	jmp    0x1803d06e1
   1803d06b7:	4c 8d 0d 85 af 1b 00 	lea    0x1baf85(%rip),%r9        # 0x18058b643
   1803d06be:	48 8d 0d 3b 5b 4d 00 	lea    0x4d5b3b(%rip),%rcx        # 0x1808a6200
   1803d06c5:	ff 05 75 11 d4 00    	incl   0xd41175(%rip)        # 0x181111840
   1803d06cb:	4c 8d 05 7e 63 4d 00 	lea    0x4d637e(%rip),%r8        # 0x1808a6a50
   1803d06d2:	48 8d 15 ef c1 33 00 	lea    0x33c1ef(%rip),%rdx        # 0x18070c8c8
   1803d06d9:	e8 82 1e ee ff       	call   0x1802b2560
   1803d06de:	49 8b de             	mov    %r14,%rbx
   1803d06e1:	ff 05 5d 11 d4 00    	incl   0xd4115d(%rip)        # 0x181111844
   1803d06e7:	48 8d 3d 82 4a 4d 00 	lea    0x4d4a82(%rip),%rdi        # 0x1808a5170
   1803d06ee:	4c 8b c7             	mov    %rdi,%r8
   1803d06f1:	48 89 1d 88 15 59 00 	mov    %rbx,0x591588(%rip)        # 0x180961c80
   1803d06f8:	45 33 c9             	xor    %r9d,%r9d
   1803d06fb:	48 8d 15 36 63 4d 00 	lea    0x4d6336(%rip),%rdx        # 0x1808a6a38
   1803d0702:	48 8d 0d 27 1b 30 00 	lea    0x301b27(%rip),%rcx        # 0x1806d2230
   1803d0709:	e8 62 9c ff ff       	call   0x1803ca370
   1803d070e:	48 8d 0d 1b 1b 30 00 	lea    0x301b1b(%rip),%rcx        # 0x1806d2230
   1803d0715:	ff 15 65 aa 19 00    	call   *0x19aa65(%rip)        # 0x18056b180
   1803d071b:	48 8b d8             	mov    %rax,%rbx
   1803d071e:	48 85 c0             	test   %rax,%rax
   1803d0721:	0f 84 a3 00 00 00    	je     0x1803d07ca
   1803d0727:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d072a:	33 c0                	xor    %eax,%eax
   1803d072c:	0f 11 85 58 06 00 00 	movups %xmm0,0x658(%rbp)
   1803d0733:	48 89 85 68 06 00 00 	mov    %rax,0x668(%rbp)
   1803d073a:	ff 15 50 ab 19 00    	call   *0x19ab50(%rip)        # 0x18056b290
   1803d0740:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d0746:	4c 8d 85 58 06 00 00 	lea    0x658(%rbp),%r8
   1803d074d:	48 8b c8             	mov    %rax,%rcx
   1803d0750:	48 8b d3             	mov    %rbx,%rdx
   1803d0753:	ff 15 3f ab 19 00    	call   *0x19ab3f(%rip)        # 0x18056b298
   1803d0759:	85 c0                	test   %eax,%eax
   1803d075b:	74 6d                	je     0x1803d07ca
   1803d075d:	48 8b 85 58 06 00 00 	mov    0x658(%rbp),%rax
   1803d0764:	8b 8d 60 06 00 00    	mov    0x660(%rbp),%ecx
   1803d076a:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d076f:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d0774:	48 85 c0             	test   %rax,%rax
   1803d0777:	74 51                	je     0x1803d07ca
   1803d0779:	48 85 c9             	test   %rcx,%rcx
   1803d077c:	74 4c                	je     0x1803d07ca
   1803d077e:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d0783:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d0788:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d078d:	48 c7 44 24 38 4c 00 	movq   $0x4c,0x38(%rsp)
   1803d0794:	00 00 
   1803d0796:	e8 65 16 e0 ff       	call   0x1801d1e00
   1803d079b:	48 8b d8             	mov    %rax,%rbx
   1803d079e:	48 85 c0             	test   %rax,%rax
   1803d07a1:	75 0c                	jne    0x1803d07af
   1803d07a3:	4c 8b cf             	mov    %rdi,%r9
   1803d07a6:	48 8d 0d 2b 5a 4d 00 	lea    0x4d5a2b(%rip),%rcx        # 0x1808a61d8
   1803d07ad:	eb 29                	jmp    0x1803d07d8
   1803d07af:	4c 8b c8             	mov    %rax,%r9
   1803d07b2:	48 8d 15 7f 62 4d 00 	lea    0x4d627f(%rip),%rdx        # 0x1808a6a38
   1803d07b9:	4c 8b c7             	mov    %rdi,%r8
   1803d07bc:	48 8d 0d 6d 1a 30 00 	lea    0x301a6d(%rip),%rcx        # 0x1806d2230
   1803d07c3:	e8 a8 9b ff ff       	call   0x1803ca370
   1803d07c8:	eb 2a                	jmp    0x1803d07f4
   1803d07ca:	4c 8d 0d 72 ae 1b 00 	lea    0x1bae72(%rip),%r9        # 0x18058b643
   1803d07d1:	48 8d 0d 28 5a 4d 00 	lea    0x4d5a28(%rip),%rcx        # 0x1808a6200
   1803d07d8:	ff 05 62 10 d4 00    	incl   0xd41062(%rip)        # 0x181111840
   1803d07de:	4c 8d 05 53 62 4d 00 	lea    0x4d6253(%rip),%r8        # 0x1808a6a38
   1803d07e5:	48 8d 15 44 1a 30 00 	lea    0x301a44(%rip),%rdx        # 0x1806d2230
   1803d07ec:	e8 6f 1d ee ff       	call   0x1802b2560
   1803d07f1:	49 8b de             	mov    %r14,%rbx
   1803d07f4:	ff 05 4a 10 d4 00    	incl   0xd4104a(%rip)        # 0x181111844
   1803d07fa:	48 8d 3d 27 49 4d 00 	lea    0x4d4927(%rip),%rdi        # 0x1808a5128
   1803d0801:	4c 8b c7             	mov    %rdi,%r8
   1803d0804:	48 89 1d 8d 14 59 00 	mov    %rbx,0x59148d(%rip)        # 0x180961c98
   1803d080b:	45 33 c9             	xor    %r9d,%r9d
   1803d080e:	48 8d 15 13 62 4d 00 	lea    0x4d6213(%rip),%rdx        # 0x1808a6a28
   1803d0815:	48 8d 0d 14 1a 30 00 	lea    0x301a14(%rip),%rcx        # 0x1806d2230
   1803d081c:	e8 4f 9b ff ff       	call   0x1803ca370
   1803d0821:	48 8d 0d 08 1a 30 00 	lea    0x301a08(%rip),%rcx        # 0x1806d2230
   1803d0828:	ff 15 52 a9 19 00    	call   *0x19a952(%rip)        # 0x18056b180
   1803d082e:	48 8b d8             	mov    %rax,%rbx
   1803d0831:	48 85 c0             	test   %rax,%rax
   1803d0834:	0f 84 c2 00 00 00    	je     0x1803d08fc
   1803d083a:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d083d:	33 c0                	xor    %eax,%eax
   1803d083f:	0f 11 85 70 06 00 00 	movups %xmm0,0x670(%rbp)
   1803d0846:	48 89 85 80 06 00 00 	mov    %rax,0x680(%rbp)
   1803d084d:	ff 15 3d aa 19 00    	call   *0x19aa3d(%rip)        # 0x18056b290
   1803d0853:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d0859:	4c 8d 85 70 06 00 00 	lea    0x670(%rbp),%r8
   1803d0860:	48 8b c8             	mov    %rax,%rcx
   1803d0863:	48 8b d3             	mov    %rbx,%rdx
   1803d0866:	ff 15 2c aa 19 00    	call   *0x19aa2c(%rip)        # 0x18056b298
   1803d086c:	85 c0                	test   %eax,%eax
   1803d086e:	0f 84 88 00 00 00    	je     0x1803d08fc
   1803d0874:	48 8b 85 70 06 00 00 	mov    0x670(%rbp),%rax
   1803d087b:	8b 8d 78 06 00 00    	mov    0x678(%rbp),%ecx
   1803d0881:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d0886:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d088b:	48 85 c0             	test   %rax,%rax
   1803d088e:	74 6c                	je     0x1803d08fc
   1803d0890:	48 85 c9             	test   %rcx,%rcx
   1803d0893:	74 67                	je     0x1803d08fc
   1803d0895:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d089a:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d089f:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d08a4:	48 c7 44 24 38 3d 00 	movq   $0x3d,0x38(%rsp)
   1803d08ab:	00 00 
   1803d08ad:	e8 4e 15 e0 ff       	call   0x1801d1e00
   1803d08b2:	48 8b d8             	mov    %rax,%rbx
   1803d08b5:	48 85 c0             	test   %rax,%rax
   1803d08b8:	75 0c                	jne    0x1803d08c6
   1803d08ba:	4c 8b cf             	mov    %rdi,%r9
   1803d08bd:	48 8d 0d 14 59 4d 00 	lea    0x4d5914(%rip),%rcx        # 0x1808a61d8
   1803d08c4:	eb 44                	jmp    0x1803d090a
   1803d08c6:	4c 8b cb             	mov    %rbx,%r9
   1803d08c9:	48 8d 15 58 61 4d 00 	lea    0x4d6158(%rip),%rdx        # 0x1808a6a28
   1803d08d0:	4c 8b c7             	mov    %rdi,%r8
   1803d08d3:	48 8d 0d 56 19 30 00 	lea    0x301956(%rip),%rcx        # 0x1806d2230
   1803d08da:	e8 91 9a ff ff       	call   0x1803ca370
   1803d08df:	48 8d 4b 0e          	lea    0xe(%rbx),%rcx
   1803d08e3:	e8 e8 17 e0 ff       	call   0x1801d20d0
   1803d08e8:	48 89 05 99 13 59 00 	mov    %rax,0x591399(%rip)        # 0x180961c88
   1803d08ef:	48 8d 43 13          	lea    0x13(%rbx),%rax
   1803d08f3:	48 89 05 96 13 59 00 	mov    %rax,0x591396(%rip)        # 0x180961c90
   1803d08fa:	eb 27                	jmp    0x1803d0923
   1803d08fc:	4c 8d 0d 40 ad 1b 00 	lea    0x1bad40(%rip),%r9        # 0x18058b643
   1803d0903:	48 8d 0d f6 58 4d 00 	lea    0x4d58f6(%rip),%rcx        # 0x1808a6200
   1803d090a:	ff 05 30 0f d4 00    	incl   0xd40f30(%rip)        # 0x181111840
   1803d0910:	4c 8d 05 11 61 4d 00 	lea    0x4d6111(%rip),%r8        # 0x1808a6a28
   1803d0917:	48 8d 15 12 19 30 00 	lea    0x301912(%rip),%rdx        # 0x1806d2230
   1803d091e:	e8 3d 1c ee ff       	call   0x1802b2560
   1803d0923:	ff 05 1b 0f d4 00    	incl   0xd40f1b(%rip)        # 0x181111844
   1803d0929:	48 8d 3d 60 37 4d 00 	lea    0x4d3760(%rip),%rdi        # 0x1808a4090
   1803d0930:	4c 8b c7             	mov    %rdi,%r8
   1803d0933:	48 8d 15 d6 60 4d 00 	lea    0x4d60d6(%rip),%rdx        # 0x1808a6a10
   1803d093a:	45 33 c9             	xor    %r9d,%r9d
   1803d093d:	48 8d 0d ec 18 30 00 	lea    0x3018ec(%rip),%rcx        # 0x1806d2230
   1803d0944:	e8 27 9a ff ff       	call   0x1803ca370
   1803d0949:	48 8d 0d e0 18 30 00 	lea    0x3018e0(%rip),%rcx        # 0x1806d2230
   1803d0950:	ff 15 2a a8 19 00    	call   *0x19a82a(%rip)        # 0x18056b180
   1803d0956:	48 8b d8             	mov    %rax,%rbx
   1803d0959:	48 85 c0             	test   %rax,%rax
   1803d095c:	0f 84 04 01 00 00    	je     0x1803d0a66
   1803d0962:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d0965:	33 c0                	xor    %eax,%eax
   1803d0967:	0f 11 85 88 06 00 00 	movups %xmm0,0x688(%rbp)
   1803d096e:	48 89 85 98 06 00 00 	mov    %rax,0x698(%rbp)
   1803d0975:	ff 15 15 a9 19 00    	call   *0x19a915(%rip)        # 0x18056b290
   1803d097b:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d0981:	4c 8d 85 88 06 00 00 	lea    0x688(%rbp),%r8
   1803d0988:	48 8b c8             	mov    %rax,%rcx
   1803d098b:	48 8b d3             	mov    %rbx,%rdx
   1803d098e:	ff 15 04 a9 19 00    	call   *0x19a904(%rip)        # 0x18056b298
   1803d0994:	85 c0                	test   %eax,%eax
   1803d0996:	0f 84 ca 00 00 00    	je     0x1803d0a66
   1803d099c:	48 8b 85 88 06 00 00 	mov    0x688(%rbp),%rax
   1803d09a3:	8b 8d 90 06 00 00    	mov    0x690(%rbp),%ecx
   1803d09a9:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d09ae:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d09b3:	48 85 c0             	test   %rax,%rax
   1803d09b6:	0f 84 aa 00 00 00    	je     0x1803d0a66
   1803d09bc:	48 85 c9             	test   %rcx,%rcx
   1803d09bf:	0f 84 a1 00 00 00    	je     0x1803d0a66
   1803d09c5:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d09ca:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d09cf:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d09d4:	48 c7 44 24 38 d1 00 	movq   $0xd1,0x38(%rsp)
   1803d09db:	00 00 
   1803d09dd:	e8 1e 14 e0 ff       	call   0x1801d1e00
   1803d09e2:	48 8b d8             	mov    %rax,%rbx
   1803d09e5:	48 85 c0             	test   %rax,%rax
   1803d09e8:	75 0c                	jne    0x1803d09f6
   1803d09ea:	4c 8b cf             	mov    %rdi,%r9
   1803d09ed:	48 8d 0d e4 57 4d 00 	lea    0x4d57e4(%rip),%rcx        # 0x1808a61d8
   1803d09f4:	eb 7e                	jmp    0x1803d0a74
   1803d09f6:	4c 8b cb             	mov    %rbx,%r9
   1803d09f9:	48 8d 15 10 60 4d 00 	lea    0x4d6010(%rip),%rdx        # 0x1808a6a10
   1803d0a00:	4c 8b c7             	mov    %rdi,%r8
   1803d0a03:	48 8d 0d 26 18 30 00 	lea    0x301826(%rip),%rcx        # 0x1806d2230
   1803d0a0a:	e8 61 99 ff ff       	call   0x1803ca370
   1803d0a0f:	ba 02 00 00 00       	mov    $0x2,%edx
   1803d0a14:	41 b8 06 00 00 00    	mov    $0x6,%r8d
   1803d0a1a:	48 8b cb             	mov    %rbx,%rcx
   1803d0a1d:	e8 fe 16 e0 ff       	call   0x1801d2120
   1803d0a22:	48 8d 4b 17          	lea    0x17(%rbx),%rcx
   1803d0a26:	48 89 05 03 12 59 00 	mov    %rax,0x591203(%rip)        # 0x180961c30
   1803d0a2d:	ba 04 00 00 00       	mov    $0x4,%edx
   1803d0a32:	41 b8 08 00 00 00    	mov    $0x8,%r8d
   1803d0a38:	e8 e3 16 e0 ff       	call   0x1801d2120
   1803d0a3d:	48 8d 4b 30          	lea    0x30(%rbx),%rcx
   1803d0a41:	48 89 05 f0 11 59 00 	mov    %rax,0x5911f0(%rip)        # 0x180961c38
   1803d0a48:	e8 d3 16 e0 ff       	call   0x1801d2120
   1803d0a4d:	48 8d 4b 47          	lea    0x47(%rbx),%rcx
   1803d0a51:	48 89 05 e8 11 59 00 	mov    %rax,0x5911e8(%rip)        # 0x180961c40
   1803d0a58:	e8 c3 16 e0 ff       	call   0x1801d2120
   1803d0a5d:	48 89 05 e4 11 59 00 	mov    %rax,0x5911e4(%rip)        # 0x180961c48
   1803d0a64:	eb 27                	jmp    0x1803d0a8d
   1803d0a66:	4c 8d 0d d6 ab 1b 00 	lea    0x1babd6(%rip),%r9        # 0x18058b643
   1803d0a6d:	48 8d 0d 8c 57 4d 00 	lea    0x4d578c(%rip),%rcx        # 0x1808a6200
   1803d0a74:	ff 05 c6 0d d4 00    	incl   0xd40dc6(%rip)        # 0x181111840
   1803d0a7a:	4c 8d 05 8f 5f 4d 00 	lea    0x4d5f8f(%rip),%r8        # 0x1808a6a10
   1803d0a81:	48 8d 15 a8 17 30 00 	lea    0x3017a8(%rip),%rdx        # 0x1806d2230
   1803d0a88:	e8 d3 1a ee ff       	call   0x1802b2560
   1803d0a8d:	ff 05 b1 0d d4 00    	incl   0xd40db1(%rip)        # 0x181111844
   1803d0a93:	48 8d 3d 86 35 4d 00 	lea    0x4d3586(%rip),%rdi        # 0x1808a4020
   1803d0a9a:	4c 8b c7             	mov    %rdi,%r8
   1803d0a9d:	48 8d 15 54 5f 4d 00 	lea    0x4d5f54(%rip),%rdx        # 0x1808a69f8
   1803d0aa4:	45 33 c9             	xor    %r9d,%r9d
   1803d0aa7:	48 8d 0d 82 17 30 00 	lea    0x301782(%rip),%rcx        # 0x1806d2230
   1803d0aae:	e8 bd 98 ff ff       	call   0x1803ca370
   1803d0ab3:	48 8d 0d 76 17 30 00 	lea    0x301776(%rip),%rcx        # 0x1806d2230
   1803d0aba:	ff 15 c0 a6 19 00    	call   *0x19a6c0(%rip)        # 0x18056b180
   1803d0ac0:	48 8b d8             	mov    %rax,%rbx
   1803d0ac3:	48 85 c0             	test   %rax,%rax
   1803d0ac6:	0f 84 e9 00 00 00    	je     0x1803d0bb5
   1803d0acc:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d0acf:	33 c0                	xor    %eax,%eax
   1803d0ad1:	0f 11 85 a0 06 00 00 	movups %xmm0,0x6a0(%rbp)
   1803d0ad8:	48 89 85 b0 06 00 00 	mov    %rax,0x6b0(%rbp)
   1803d0adf:	ff 15 ab a7 19 00    	call   *0x19a7ab(%rip)        # 0x18056b290
   1803d0ae5:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d0aeb:	4c 8d 85 a0 06 00 00 	lea    0x6a0(%rbp),%r8
   1803d0af2:	48 8b c8             	mov    %rax,%rcx
   1803d0af5:	48 8b d3             	mov    %rbx,%rdx
   1803d0af8:	ff 15 9a a7 19 00    	call   *0x19a79a(%rip)        # 0x18056b298
   1803d0afe:	85 c0                	test   %eax,%eax
   1803d0b00:	0f 84 af 00 00 00    	je     0x1803d0bb5
   1803d0b06:	48 8b 85 a0 06 00 00 	mov    0x6a0(%rbp),%rax
   1803d0b0d:	8b 8d a8 06 00 00    	mov    0x6a8(%rbp),%ecx
   1803d0b13:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d0b18:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d0b1d:	48 85 c0             	test   %rax,%rax
   1803d0b20:	0f 84 8f 00 00 00    	je     0x1803d0bb5
   1803d0b26:	48 85 c9             	test   %rcx,%rcx
   1803d0b29:	0f 84 86 00 00 00    	je     0x1803d0bb5
   1803d0b2f:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d0b34:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d0b39:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d0b3e:	48 c7 44 24 38 66 00 	movq   $0x66,0x38(%rsp)
   1803d0b45:	00 00 
   1803d0b47:	e8 b4 12 e0 ff       	call   0x1801d1e00
   1803d0b4c:	48 8b d8             	mov    %rax,%rbx
   1803d0b4f:	48 85 c0             	test   %rax,%rax
   1803d0b52:	75 0c                	jne    0x1803d0b60
   1803d0b54:	4c 8b cf             	mov    %rdi,%r9
   1803d0b57:	48 8d 0d 7a 56 4d 00 	lea    0x4d567a(%rip),%rcx        # 0x1808a61d8
   1803d0b5e:	eb 63                	jmp    0x1803d0bc3
   1803d0b60:	4c 8b cb             	mov    %rbx,%r9
   1803d0b63:	48 8d 15 8e 5e 4d 00 	lea    0x4d5e8e(%rip),%rdx        # 0x1808a69f8
   1803d0b6a:	4c 8b c7             	mov    %rdi,%r8
   1803d0b6d:	48 8d 0d bc 16 30 00 	lea    0x3016bc(%rip),%rcx        # 0x1806d2230
   1803d0b74:	e8 f7 97 ff ff       	call   0x1803ca370
   1803d0b79:	ba 04 00 00 00       	mov    $0x4,%edx
   1803d0b7e:	41 b8 08 00 00 00    	mov    $0x8,%r8d
   1803d0b84:	48 8b cb             	mov    %rbx,%rcx
   1803d0b87:	e8 94 15 e0 ff       	call   0x1801d2120
   1803d0b8c:	48 8d 4b 19          	lea    0x19(%rbx),%rcx
   1803d0b90:	48 89 05 b9 10 59 00 	mov    %rax,0x5910b9(%rip)        # 0x180961c50
   1803d0b97:	e8 84 15 e0 ff       	call   0x1801d2120
   1803d0b9c:	48 8d 4b 21          	lea    0x21(%rbx),%rcx
   1803d0ba0:	48 89 05 b1 10 59 00 	mov    %rax,0x5910b1(%rip)        # 0x180961c58
   1803d0ba7:	e8 74 15 e0 ff       	call   0x1801d2120
   1803d0bac:	48 89 05 ad 10 59 00 	mov    %rax,0x5910ad(%rip)        # 0x180961c60
   1803d0bb3:	eb 27                	jmp    0x1803d0bdc
   1803d0bb5:	4c 8d 0d 87 aa 1b 00 	lea    0x1baa87(%rip),%r9        # 0x18058b643
   1803d0bbc:	48 8d 0d 3d 56 4d 00 	lea    0x4d563d(%rip),%rcx        # 0x1808a6200
   1803d0bc3:	ff 05 77 0c d4 00    	incl   0xd40c77(%rip)        # 0x181111840
   1803d0bc9:	4c 8d 05 28 5e 4d 00 	lea    0x4d5e28(%rip),%r8        # 0x1808a69f8
   1803d0bd0:	48 8d 15 59 16 30 00 	lea    0x301659(%rip),%rdx        # 0x1806d2230
   1803d0bd7:	e8 84 19 ee ff       	call   0x1802b2560
   1803d0bdc:	ff 05 62 0c d4 00    	incl   0xd40c62(%rip)        # 0x181111844
   1803d0be2:	48 8d 3d 7f 39 4d 00 	lea    0x4d397f(%rip),%rdi        # 0x1808a4568
   1803d0be9:	4c 8b c7             	mov    %rdi,%r8
   1803d0bec:	48 8d 15 f5 5d 4d 00 	lea    0x4d5df5(%rip),%rdx        # 0x1808a69e8
   1803d0bf3:	45 33 c9             	xor    %r9d,%r9d
   1803d0bf6:	48 8d 0d 33 16 30 00 	lea    0x301633(%rip),%rcx        # 0x1806d2230
   1803d0bfd:	e8 6e 97 ff ff       	call   0x1803ca370
   1803d0c02:	48 8d 0d 27 16 30 00 	lea    0x301627(%rip),%rcx        # 0x1806d2230
   1803d0c09:	ff 15 71 a5 19 00    	call   *0x19a571(%rip)        # 0x18056b180
   1803d0c0f:	48 8b d8             	mov    %rax,%rbx
   1803d0c12:	48 85 c0             	test   %rax,%rax
   1803d0c15:	0f 84 c2 00 00 00    	je     0x1803d0cdd
   1803d0c1b:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d0c1e:	33 c0                	xor    %eax,%eax
   1803d0c20:	0f 11 85 b8 06 00 00 	movups %xmm0,0x6b8(%rbp)
   1803d0c27:	48 89 85 c8 06 00 00 	mov    %rax,0x6c8(%rbp)
   1803d0c2e:	ff 15 5c a6 19 00    	call   *0x19a65c(%rip)        # 0x18056b290
   1803d0c34:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d0c3a:	4c 8d 85 b8 06 00 00 	lea    0x6b8(%rbp),%r8
   1803d0c41:	48 8b c8             	mov    %rax,%rcx
   1803d0c44:	48 8b d3             	mov    %rbx,%rdx
   1803d0c47:	ff 15 4b a6 19 00    	call   *0x19a64b(%rip)        # 0x18056b298
   1803d0c4d:	85 c0                	test   %eax,%eax
   1803d0c4f:	0f 84 88 00 00 00    	je     0x1803d0cdd
   1803d0c55:	48 8b 85 b8 06 00 00 	mov    0x6b8(%rbp),%rax
   1803d0c5c:	8b 8d c0 06 00 00    	mov    0x6c0(%rbp),%ecx
   1803d0c62:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d0c67:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d0c6c:	48 85 c0             	test   %rax,%rax
   1803d0c6f:	74 6c                	je     0x1803d0cdd
   1803d0c71:	48 85 c9             	test   %rcx,%rcx
   1803d0c74:	74 67                	je     0x1803d0cdd
   1803d0c76:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d0c7b:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d0c80:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d0c85:	48 c7 44 24 38 34 00 	movq   $0x34,0x38(%rsp)
   1803d0c8c:	00 00 
   1803d0c8e:	e8 6d 11 e0 ff       	call   0x1801d1e00
   1803d0c93:	48 8b d8             	mov    %rax,%rbx
   1803d0c96:	48 85 c0             	test   %rax,%rax
   1803d0c99:	75 0c                	jne    0x1803d0ca7
   1803d0c9b:	4c 8b cf             	mov    %rdi,%r9
   1803d0c9e:	48 8d 0d 33 55 4d 00 	lea    0x4d5533(%rip),%rcx        # 0x1808a61d8
   1803d0ca5:	eb 44                	jmp    0x1803d0ceb
   1803d0ca7:	4c 8b cb             	mov    %rbx,%r9
   1803d0caa:	48 8d 15 37 5d 4d 00 	lea    0x4d5d37(%rip),%rdx        # 0x1808a69e8
   1803d0cb1:	4c 8b c7             	mov    %rdi,%r8
   1803d0cb4:	48 8d 0d 75 15 30 00 	lea    0x301575(%rip),%rcx        # 0x1806d2230
   1803d0cbb:	e8 b0 96 ff ff       	call   0x1803ca370
   1803d0cc0:	48 8d 4b 05          	lea    0x5(%rbx),%rcx
   1803d0cc4:	ba 02 00 00 00       	mov    $0x2,%edx
   1803d0cc9:	41 b8 06 00 00 00    	mov    $0x6,%r8d
   1803d0ccf:	e8 4c 14 e0 ff       	call   0x1801d2120
   1803d0cd4:	48 89 05 8d 0f 59 00 	mov    %rax,0x590f8d(%rip)        # 0x180961c68
   1803d0cdb:	eb 27                	jmp    0x1803d0d04
   1803d0cdd:	4c 8d 0d 5f a9 1b 00 	lea    0x1ba95f(%rip),%r9        # 0x18058b643
   1803d0ce4:	48 8d 0d 15 55 4d 00 	lea    0x4d5515(%rip),%rcx        # 0x1808a6200
   1803d0ceb:	ff 05 4f 0b d4 00    	incl   0xd40b4f(%rip)        # 0x181111840
   1803d0cf1:	4c 8d 05 f0 5c 4d 00 	lea    0x4d5cf0(%rip),%r8        # 0x1808a69e8
   1803d0cf8:	48 8d 15 31 15 30 00 	lea    0x301531(%rip),%rdx        # 0x1806d2230
   1803d0cff:	e8 5c 18 ee ff       	call   0x1802b2560
   1803d0d04:	ff 05 3a 0b d4 00    	incl   0xd40b3a(%rip)        # 0x181111844
   1803d0d0a:	48 8d 3d 1f 21 4d 00 	lea    0x4d211f(%rip),%rdi        # 0x1808a2e30
   1803d0d11:	4c 8b c7             	mov    %rdi,%r8
   1803d0d14:	48 8d 15 b5 5c 4d 00 	lea    0x4d5cb5(%rip),%rdx        # 0x1808a69d0
   1803d0d1b:	45 33 c9             	xor    %r9d,%r9d
   1803d0d1e:	48 8d 0d 0b 15 30 00 	lea    0x30150b(%rip),%rcx        # 0x1806d2230
   1803d0d25:	e8 46 96 ff ff       	call   0x1803ca370
   1803d0d2a:	48 8d 0d ff 14 30 00 	lea    0x3014ff(%rip),%rcx        # 0x1806d2230
   1803d0d31:	ff 15 49 a4 19 00    	call   *0x19a449(%rip)        # 0x18056b180
   1803d0d37:	48 8b d8             	mov    %rax,%rbx
   1803d0d3a:	48 85 c0             	test   %rax,%rax
   1803d0d3d:	0f 84 a3 00 00 00    	je     0x1803d0de6
   1803d0d43:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d0d46:	33 c0                	xor    %eax,%eax
   1803d0d48:	0f 11 85 d0 06 00 00 	movups %xmm0,0x6d0(%rbp)
   1803d0d4f:	48 89 85 e0 06 00 00 	mov    %rax,0x6e0(%rbp)
   1803d0d56:	ff 15 34 a5 19 00    	call   *0x19a534(%rip)        # 0x18056b290
   1803d0d5c:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d0d62:	4c 8d 85 d0 06 00 00 	lea    0x6d0(%rbp),%r8
   1803d0d69:	48 8b c8             	mov    %rax,%rcx
   1803d0d6c:	48 8b d3             	mov    %rbx,%rdx
   1803d0d6f:	ff 15 23 a5 19 00    	call   *0x19a523(%rip)        # 0x18056b298
   1803d0d75:	85 c0                	test   %eax,%eax
   1803d0d77:	74 6d                	je     0x1803d0de6
   1803d0d79:	48 8b 85 d0 06 00 00 	mov    0x6d0(%rbp),%rax
   1803d0d80:	8b 8d d8 06 00 00    	mov    0x6d8(%rbp),%ecx
   1803d0d86:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d0d8b:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d0d90:	48 85 c0             	test   %rax,%rax
   1803d0d93:	74 51                	je     0x1803d0de6
   1803d0d95:	48 85 c9             	test   %rcx,%rcx
   1803d0d98:	74 4c                	je     0x1803d0de6
   1803d0d9a:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d0d9f:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d0da4:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d0da9:	48 c7 44 24 38 76 00 	movq   $0x76,0x38(%rsp)
   1803d0db0:	00 00 
   1803d0db2:	e8 49 10 e0 ff       	call   0x1801d1e00
   1803d0db7:	48 8b d8             	mov    %rax,%rbx
   1803d0dba:	48 85 c0             	test   %rax,%rax
   1803d0dbd:	75 0c                	jne    0x1803d0dcb
   1803d0dbf:	4c 8b cf             	mov    %rdi,%r9
   1803d0dc2:	48 8d 0d 0f 54 4d 00 	lea    0x4d540f(%rip),%rcx        # 0x1808a61d8
   1803d0dc9:	eb 29                	jmp    0x1803d0df4
   1803d0dcb:	4c 8b c8             	mov    %rax,%r9
   1803d0dce:	48 8d 15 fb 5b 4d 00 	lea    0x4d5bfb(%rip),%rdx        # 0x1808a69d0
   1803d0dd5:	4c 8b c7             	mov    %rdi,%r8
   1803d0dd8:	48 8d 0d 51 14 30 00 	lea    0x301451(%rip),%rcx        # 0x1806d2230
   1803d0ddf:	e8 8c 95 ff ff       	call   0x1803ca370
   1803d0de4:	eb 2a                	jmp    0x1803d0e10
   1803d0de6:	4c 8d 0d 56 a8 1b 00 	lea    0x1ba856(%rip),%r9        # 0x18058b643
   1803d0ded:	48 8d 0d 0c 54 4d 00 	lea    0x4d540c(%rip),%rcx        # 0x1808a6200
   1803d0df4:	ff 05 46 0a d4 00    	incl   0xd40a46(%rip)        # 0x181111840
   1803d0dfa:	4c 8d 05 cf 5b 4d 00 	lea    0x4d5bcf(%rip),%r8        # 0x1808a69d0
   1803d0e01:	48 8d 15 28 14 30 00 	lea    0x301428(%rip),%rdx        # 0x1806d2230
   1803d0e08:	e8 53 17 ee ff       	call   0x1802b2560
   1803d0e0d:	49 8b de             	mov    %r14,%rbx
   1803d0e10:	ff 05 2e 0a d4 00    	incl   0xd40a2e(%rip)        # 0x181111844
   1803d0e16:	48 8d 3d 9b 1f 4d 00 	lea    0x4d1f9b(%rip),%rdi        # 0x1808a2db8
   1803d0e1d:	4c 8b c7             	mov    %rdi,%r8
   1803d0e20:	48 89 1d 79 0e 59 00 	mov    %rbx,0x590e79(%rip)        # 0x180961ca0
   1803d0e27:	45 33 c9             	xor    %r9d,%r9d
   1803d0e2a:	48 8d 15 bf 5c 4d 00 	lea    0x4d5cbf(%rip),%rdx        # 0x1808a6af0
   1803d0e31:	48 8d 0d f8 13 30 00 	lea    0x3013f8(%rip),%rcx        # 0x1806d2230
   1803d0e38:	e8 33 95 ff ff       	call   0x1803ca370
   1803d0e3d:	48 8d 0d ec 13 30 00 	lea    0x3013ec(%rip),%rcx        # 0x1806d2230
   1803d0e44:	ff 15 36 a3 19 00    	call   *0x19a336(%rip)        # 0x18056b180
   1803d0e4a:	48 8b d8             	mov    %rax,%rbx
   1803d0e4d:	48 85 c0             	test   %rax,%rax
   1803d0e50:	0f 84 a3 00 00 00    	je     0x1803d0ef9
   1803d0e56:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d0e59:	33 c0                	xor    %eax,%eax
   1803d0e5b:	0f 11 85 e8 06 00 00 	movups %xmm0,0x6e8(%rbp)
   1803d0e62:	48 89 85 f8 06 00 00 	mov    %rax,0x6f8(%rbp)
   1803d0e69:	ff 15 21 a4 19 00    	call   *0x19a421(%rip)        # 0x18056b290
   1803d0e6f:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d0e75:	4c 8d 85 e8 06 00 00 	lea    0x6e8(%rbp),%r8
   1803d0e7c:	48 8b c8             	mov    %rax,%rcx
   1803d0e7f:	48 8b d3             	mov    %rbx,%rdx
   1803d0e82:	ff 15 10 a4 19 00    	call   *0x19a410(%rip)        # 0x18056b298
   1803d0e88:	85 c0                	test   %eax,%eax
   1803d0e8a:	74 6d                	je     0x1803d0ef9
   1803d0e8c:	48 8b 85 e8 06 00 00 	mov    0x6e8(%rbp),%rax
   1803d0e93:	8b 8d f0 06 00 00    	mov    0x6f0(%rbp),%ecx
   1803d0e99:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d0e9e:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d0ea3:	48 85 c0             	test   %rax,%rax
   1803d0ea6:	74 51                	je     0x1803d0ef9
   1803d0ea8:	48 85 c9             	test   %rcx,%rcx
   1803d0eab:	74 4c                	je     0x1803d0ef9
   1803d0ead:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d0eb2:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d0eb7:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d0ebc:	48 c7 44 24 38 3d 00 	movq   $0x3d,0x38(%rsp)
   1803d0ec3:	00 00 
   1803d0ec5:	e8 36 0f e0 ff       	call   0x1801d1e00
   1803d0eca:	48 8b d8             	mov    %rax,%rbx
   1803d0ecd:	48 85 c0             	test   %rax,%rax
   1803d0ed0:	75 0c                	jne    0x1803d0ede
   1803d0ed2:	4c 8b cf             	mov    %rdi,%r9
   1803d0ed5:	48 8d 0d fc 52 4d 00 	lea    0x4d52fc(%rip),%rcx        # 0x1808a61d8
   1803d0edc:	eb 29                	jmp    0x1803d0f07
   1803d0ede:	4c 8b c8             	mov    %rax,%r9
   1803d0ee1:	48 8d 15 08 5c 4d 00 	lea    0x4d5c08(%rip),%rdx        # 0x1808a6af0
   1803d0ee8:	4c 8b c7             	mov    %rdi,%r8
   1803d0eeb:	48 8d 0d 3e 13 30 00 	lea    0x30133e(%rip),%rcx        # 0x1806d2230
   1803d0ef2:	e8 79 94 ff ff       	call   0x1803ca370
   1803d0ef7:	eb 2a                	jmp    0x1803d0f23
   1803d0ef9:	4c 8d 0d 43 a7 1b 00 	lea    0x1ba743(%rip),%r9        # 0x18058b643
   1803d0f00:	48 8d 0d f9 52 4d 00 	lea    0x4d52f9(%rip),%rcx        # 0x1808a6200
   1803d0f07:	ff 05 33 09 d4 00    	incl   0xd40933(%rip)        # 0x181111840
   1803d0f0d:	4c 8d 05 dc 5b 4d 00 	lea    0x4d5bdc(%rip),%r8        # 0x1808a6af0
   1803d0f14:	48 8d 15 15 13 30 00 	lea    0x301315(%rip),%rdx        # 0x1806d2230
   1803d0f1b:	e8 40 16 ee ff       	call   0x1802b2560
   1803d0f20:	49 8b de             	mov    %r14,%rbx
   1803d0f23:	ff 05 1b 09 d4 00    	incl   0xd4091b(%rip)        # 0x181111844
   1803d0f29:	48 8d 3d 50 1e 4d 00 	lea    0x4d1e50(%rip),%rdi        # 0x1808a2d80
   1803d0f30:	4c 8b c7             	mov    %rdi,%r8
   1803d0f33:	48 89 1d 76 0d 59 00 	mov    %rbx,0x590d76(%rip)        # 0x180961cb0
   1803d0f3a:	45 33 c9             	xor    %r9d,%r9d
   1803d0f3d:	48 8d 15 9c 5b 4d 00 	lea    0x4d5b9c(%rip),%rdx        # 0x1808a6ae0
   1803d0f44:	48 8d 0d e5 12 30 00 	lea    0x3012e5(%rip),%rcx        # 0x1806d2230
   1803d0f4b:	e8 20 94 ff ff       	call   0x1803ca370
   1803d0f50:	48 8d 0d d9 12 30 00 	lea    0x3012d9(%rip),%rcx        # 0x1806d2230
   1803d0f57:	ff 15 23 a2 19 00    	call   *0x19a223(%rip)        # 0x18056b180
   1803d0f5d:	48 8b d8             	mov    %rax,%rbx
   1803d0f60:	48 85 c0             	test   %rax,%rax
   1803d0f63:	0f 84 a3 00 00 00    	je     0x1803d100c
   1803d0f69:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d0f6c:	33 c0                	xor    %eax,%eax
   1803d0f6e:	0f 11 85 00 07 00 00 	movups %xmm0,0x700(%rbp)
   1803d0f75:	48 89 85 10 07 00 00 	mov    %rax,0x710(%rbp)
   1803d0f7c:	ff 15 0e a3 19 00    	call   *0x19a30e(%rip)        # 0x18056b290
   1803d0f82:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d0f88:	4c 8d 85 00 07 00 00 	lea    0x700(%rbp),%r8
   1803d0f8f:	48 8b c8             	mov    %rax,%rcx
   1803d0f92:	48 8b d3             	mov    %rbx,%rdx
   1803d0f95:	ff 15 fd a2 19 00    	call   *0x19a2fd(%rip)        # 0x18056b298
   1803d0f9b:	85 c0                	test   %eax,%eax
   1803d0f9d:	74 6d                	je     0x1803d100c
   1803d0f9f:	48 8b 85 00 07 00 00 	mov    0x700(%rbp),%rax
   1803d0fa6:	8b 8d 08 07 00 00    	mov    0x708(%rbp),%ecx
   1803d0fac:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d0fb1:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d0fb6:	48 85 c0             	test   %rax,%rax
   1803d0fb9:	74 51                	je     0x1803d100c
   1803d0fbb:	48 85 c9             	test   %rcx,%rcx
   1803d0fbe:	74 4c                	je     0x1803d100c
   1803d0fc0:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d0fc5:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d0fca:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d0fcf:	48 c7 44 24 38 36 00 	movq   $0x36,0x38(%rsp)
   1803d0fd6:	00 00 
   1803d0fd8:	e8 23 0e e0 ff       	call   0x1801d1e00
   1803d0fdd:	48 8b d8             	mov    %rax,%rbx
   1803d0fe0:	48 85 c0             	test   %rax,%rax
   1803d0fe3:	75 0c                	jne    0x1803d0ff1
   1803d0fe5:	4c 8b cf             	mov    %rdi,%r9
   1803d0fe8:	48 8d 0d e9 51 4d 00 	lea    0x4d51e9(%rip),%rcx        # 0x1808a61d8
   1803d0fef:	eb 29                	jmp    0x1803d101a
   1803d0ff1:	4c 8b c8             	mov    %rax,%r9
   1803d0ff4:	48 8d 15 e5 5a 4d 00 	lea    0x4d5ae5(%rip),%rdx        # 0x1808a6ae0
   1803d0ffb:	4c 8b c7             	mov    %rdi,%r8
   1803d0ffe:	48 8d 0d 2b 12 30 00 	lea    0x30122b(%rip),%rcx        # 0x1806d2230
   1803d1005:	e8 66 93 ff ff       	call   0x1803ca370
   1803d100a:	eb 2a                	jmp    0x1803d1036
   1803d100c:	4c 8d 0d 30 a6 1b 00 	lea    0x1ba630(%rip),%r9        # 0x18058b643
   1803d1013:	48 8d 0d e6 51 4d 00 	lea    0x4d51e6(%rip),%rcx        # 0x1808a6200
   1803d101a:	ff 05 20 08 d4 00    	incl   0xd40820(%rip)        # 0x181111840
   1803d1020:	4c 8d 05 b9 5a 4d 00 	lea    0x4d5ab9(%rip),%r8        # 0x1808a6ae0
   1803d1027:	48 8d 15 02 12 30 00 	lea    0x301202(%rip),%rdx        # 0x1806d2230
   1803d102e:	e8 2d 15 ee ff       	call   0x1802b2560
   1803d1033:	49 8b de             	mov    %r14,%rbx
   1803d1036:	ff 05 08 08 d4 00    	incl   0xd40808(%rip)        # 0x181111844
   1803d103c:	48 8d 3d dd 1c 4d 00 	lea    0x4d1cdd(%rip),%rdi        # 0x1808a2d20
   1803d1043:	4c 8b c7             	mov    %rdi,%r8
   1803d1046:	48 89 1d 6b 0c 59 00 	mov    %rbx,0x590c6b(%rip)        # 0x180961cb8
   1803d104d:	45 33 c9             	xor    %r9d,%r9d
   1803d1050:	48 8d 15 79 5a 4d 00 	lea    0x4d5a79(%rip),%rdx        # 0x1808a6ad0
   1803d1057:	48 8d 0d d2 11 30 00 	lea    0x3011d2(%rip),%rcx        # 0x1806d2230
   1803d105e:	e8 0d 93 ff ff       	call   0x1803ca370
   1803d1063:	48 8d 0d c6 11 30 00 	lea    0x3011c6(%rip),%rcx        # 0x1806d2230
   1803d106a:	ff 15 10 a1 19 00    	call   *0x19a110(%rip)        # 0x18056b180
   1803d1070:	48 8b d8             	mov    %rax,%rbx
   1803d1073:	48 85 c0             	test   %rax,%rax
   1803d1076:	0f 84 a3 00 00 00    	je     0x1803d111f
   1803d107c:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d107f:	33 c0                	xor    %eax,%eax
   1803d1081:	0f 11 85 18 07 00 00 	movups %xmm0,0x718(%rbp)
   1803d1088:	48 89 85 28 07 00 00 	mov    %rax,0x728(%rbp)
   1803d108f:	ff 15 fb a1 19 00    	call   *0x19a1fb(%rip)        # 0x18056b290
   1803d1095:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d109b:	4c 8d 85 18 07 00 00 	lea    0x718(%rbp),%r8
   1803d10a2:	48 8b c8             	mov    %rax,%rcx
   1803d10a5:	48 8b d3             	mov    %rbx,%rdx
   1803d10a8:	ff 15 ea a1 19 00    	call   *0x19a1ea(%rip)        # 0x18056b298
   1803d10ae:	85 c0                	test   %eax,%eax
   1803d10b0:	74 6d                	je     0x1803d111f
   1803d10b2:	48 8b 85 18 07 00 00 	mov    0x718(%rbp),%rax
   1803d10b9:	8b 8d 20 07 00 00    	mov    0x720(%rbp),%ecx
   1803d10bf:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d10c4:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d10c9:	48 85 c0             	test   %rax,%rax
   1803d10cc:	74 51                	je     0x1803d111f
   1803d10ce:	48 85 c9             	test   %rcx,%rcx
   1803d10d1:	74 4c                	je     0x1803d111f
   1803d10d3:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d10d8:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d10dd:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d10e2:	48 c7 44 24 38 5a 00 	movq   $0x5a,0x38(%rsp)
   1803d10e9:	00 00 
   1803d10eb:	e8 10 0d e0 ff       	call   0x1801d1e00
   1803d10f0:	48 8b d8             	mov    %rax,%rbx
   1803d10f3:	48 85 c0             	test   %rax,%rax
   1803d10f6:	75 0c                	jne    0x1803d1104
   1803d10f8:	4c 8b cf             	mov    %rdi,%r9
   1803d10fb:	48 8d 0d d6 50 4d 00 	lea    0x4d50d6(%rip),%rcx        # 0x1808a61d8
   1803d1102:	eb 29                	jmp    0x1803d112d
   1803d1104:	4c 8b c8             	mov    %rax,%r9
   1803d1107:	48 8d 15 c2 59 4d 00 	lea    0x4d59c2(%rip),%rdx        # 0x1808a6ad0
   1803d110e:	4c 8b c7             	mov    %rdi,%r8
   1803d1111:	48 8d 0d 18 11 30 00 	lea    0x301118(%rip),%rcx        # 0x1806d2230
   1803d1118:	e8 53 92 ff ff       	call   0x1803ca370
   1803d111d:	eb 2a                	jmp    0x1803d1149
   1803d111f:	4c 8d 0d 1d a5 1b 00 	lea    0x1ba51d(%rip),%r9        # 0x18058b643
   1803d1126:	48 8d 0d d3 50 4d 00 	lea    0x4d50d3(%rip),%rcx        # 0x1808a6200
   1803d112d:	ff 05 0d 07 d4 00    	incl   0xd4070d(%rip)        # 0x181111840
   1803d1133:	4c 8d 05 96 59 4d 00 	lea    0x4d5996(%rip),%r8        # 0x1808a6ad0
   1803d113a:	48 8d 15 ef 10 30 00 	lea    0x3010ef(%rip),%rdx        # 0x1806d2230
   1803d1141:	e8 1a 14 ee ff       	call   0x1802b2560
   1803d1146:	49 8b de             	mov    %r14,%rbx
   1803d1149:	4c 8d 05 a8 1c 4d 00 	lea    0x4d1ca8(%rip),%r8        # 0x1808a2df8
   1803d1150:	48 89 1d 69 0b 59 00 	mov    %rbx,0x590b69(%rip)        # 0x180961cc0
   1803d1157:	48 8d 15 5a 59 4d 00 	lea    0x4d595a(%rip),%rdx        # 0x1808a6ab8
   1803d115e:	48 8d 0d cb 10 30 00 	lea    0x3010cb(%rip),%rcx        # 0x1806d2230
   1803d1165:	e8 66 94 ff ff       	call   0x1803ca5d0
   1803d116a:	48 8b d8             	mov    %rax,%rbx
   1803d116d:	48 85 c0             	test   %rax,%rax
   1803d1170:	0f 84 93 00 00 00    	je     0x1803d1209
   1803d1176:	48 05 08 00 ff ff    	add    $0xffffffffffff0008,%rax
   1803d117c:	49 3b c7             	cmp    %r15,%rax
   1803d117f:	77 44                	ja     0x1803d11c5
   1803d1181:	48 8d 4b 08          	lea    0x8(%rbx),%rcx
   1803d1185:	e8 96 00 c4 ff       	call   0x180011220
   1803d118a:	3c e8                	cmp    $0xe8,%al
   1803d118c:	75 37                	jne    0x1803d11c5
   1803d118e:	48 8d 4b 09          	lea    0x9(%rbx),%rcx
   1803d1192:	e8 69 00 c4 ff       	call   0x180011200
   1803d1197:	48 63 c8             	movslq %eax,%rcx
   1803d119a:	4c 8d 05 57 1c 4d 00 	lea    0x4d1c57(%rip),%r8        # 0x1808a2df8
   1803d11a1:	48 83 c3 0d          	add    $0xd,%rbx
   1803d11a5:	48 8d 15 0c 59 4d 00 	lea    0x4d590c(%rip),%rdx        # 0x1808a6ab8
   1803d11ac:	48 03 d9             	add    %rcx,%rbx
   1803d11af:	48 8d 0d 7a 10 30 00 	lea    0x30107a(%rip),%rcx        # 0x1806d2230
   1803d11b6:	4c 8b cb             	mov    %rbx,%r9
   1803d11b9:	e8 b2 91 ff ff       	call   0x1803ca370
   1803d11be:	48 85 db             	test   %rbx,%rbx
   1803d11c1:	74 1f                	je     0x1803d11e2
   1803d11c3:	eb 47                	jmp    0x1803d120c
   1803d11c5:	45 33 c9             	xor    %r9d,%r9d
   1803d11c8:	4c 8d 05 29 1c 4d 00 	lea    0x4d1c29(%rip),%r8        # 0x1808a2df8
   1803d11cf:	48 8d 15 e2 58 4d 00 	lea    0x4d58e2(%rip),%rdx        # 0x1808a6ab8
   1803d11d6:	48 8d 0d 53 10 30 00 	lea    0x301053(%rip),%rcx        # 0x1806d2230
   1803d11dd:	e8 8e 91 ff ff       	call   0x1803ca370
   1803d11e2:	ff 05 58 06 d4 00    	incl   0xd40658(%rip)        # 0x181111840
   1803d11e8:	4c 8d 0d 09 1c 4d 00 	lea    0x4d1c09(%rip),%r9        # 0x1808a2df8
   1803d11ef:	4c 8d 05 c2 58 4d 00 	lea    0x4d58c2(%rip),%r8        # 0x1808a6ab8
   1803d11f6:	48 8d 15 33 10 30 00 	lea    0x301033(%rip),%rdx        # 0x1806d2230
   1803d11fd:	48 8d 0d ac 4f 4d 00 	lea    0x4d4fac(%rip),%rcx        # 0x1808a61b0
   1803d1204:	e8 57 13 ee ff       	call   0x1802b2560
   1803d1209:	49 8b de             	mov    %r14,%rbx
   1803d120c:	4c 8d 05 cd 1a 4d 00 	lea    0x4d1acd(%rip),%r8        # 0x1808a2ce0
   1803d1213:	48 89 1d 8e 0a 59 00 	mov    %rbx,0x590a8e(%rip)        # 0x180961ca8
   1803d121a:	48 8d 15 87 58 4d 00 	lea    0x4d5887(%rip),%rdx        # 0x1808a6aa8
   1803d1221:	48 8d 0d 08 10 30 00 	lea    0x301008(%rip),%rcx        # 0x1806d2230
   1803d1228:	e8 a3 93 ff ff       	call   0x1803ca5d0
   1803d122d:	48 8b d8             	mov    %rax,%rbx
   1803d1230:	48 85 c0             	test   %rax,%rax
   1803d1233:	0f 84 93 00 00 00    	je     0x1803d12cc
   1803d1239:	48 05 05 00 ff ff    	add    $0xffffffffffff0005,%rax
   1803d123f:	49 3b c7             	cmp    %r15,%rax
   1803d1242:	77 44                	ja     0x1803d1288
   1803d1244:	48 8d 4b 05          	lea    0x5(%rbx),%rcx
   1803d1248:	e8 d3 ff c3 ff       	call   0x180011220
   1803d124d:	3c e8                	cmp    $0xe8,%al
   1803d124f:	75 37                	jne    0x1803d1288
   1803d1251:	48 8d 4b 06          	lea    0x6(%rbx),%rcx
   1803d1255:	e8 a6 ff c3 ff       	call   0x180011200
   1803d125a:	48 63 c8             	movslq %eax,%rcx
   1803d125d:	4c 8d 05 7c 1a 4d 00 	lea    0x4d1a7c(%rip),%r8        # 0x1808a2ce0
   1803d1264:	48 83 c3 0a          	add    $0xa,%rbx
   1803d1268:	48 8d 15 39 58 4d 00 	lea    0x4d5839(%rip),%rdx        # 0x1808a6aa8
   1803d126f:	48 03 d9             	add    %rcx,%rbx
   1803d1272:	48 8d 0d b7 0f 30 00 	lea    0x300fb7(%rip),%rcx        # 0x1806d2230
   1803d1279:	4c 8b cb             	mov    %rbx,%r9
   1803d127c:	e8 ef 90 ff ff       	call   0x1803ca370
   1803d1281:	48 85 db             	test   %rbx,%rbx
   1803d1284:	74 1f                	je     0x1803d12a5
   1803d1286:	eb 47                	jmp    0x1803d12cf
   1803d1288:	45 33 c9             	xor    %r9d,%r9d
   1803d128b:	4c 8d 05 4e 1a 4d 00 	lea    0x4d1a4e(%rip),%r8        # 0x1808a2ce0
   1803d1292:	48 8d 15 0f 58 4d 00 	lea    0x4d580f(%rip),%rdx        # 0x1808a6aa8
   1803d1299:	48 8d 0d 90 0f 30 00 	lea    0x300f90(%rip),%rcx        # 0x1806d2230
   1803d12a0:	e8 cb 90 ff ff       	call   0x1803ca370
   1803d12a5:	ff 05 95 05 d4 00    	incl   0xd40595(%rip)        # 0x181111840
   1803d12ab:	4c 8d 0d 2e 1a 4d 00 	lea    0x4d1a2e(%rip),%r9        # 0x1808a2ce0
   1803d12b2:	4c 8d 05 ef 57 4d 00 	lea    0x4d57ef(%rip),%r8        # 0x1808a6aa8
   1803d12b9:	48 8d 15 70 0f 30 00 	lea    0x300f70(%rip),%rdx        # 0x1806d2230
   1803d12c0:	48 8d 0d e9 4e 4d 00 	lea    0x4d4ee9(%rip),%rcx        # 0x1808a61b0
   1803d12c7:	e8 94 12 ee ff       	call   0x1802b2560
   1803d12cc:	49 8b de             	mov    %r14,%rbx
   1803d12cf:	4c 8d 05 aa 1d 4d 00 	lea    0x4d1daa(%rip),%r8        # 0x1808a3080
   1803d12d6:	48 89 1d eb 09 59 00 	mov    %rbx,0x5909eb(%rip)        # 0x180961cc8
   1803d12dd:	48 8d 15 e4 e5 32 00 	lea    0x32e5e4(%rip),%rdx        # 0x1806ff8c8
   1803d12e4:	48 8d 0d 45 0f 30 00 	lea    0x300f45(%rip),%rcx        # 0x1806d2230
   1803d12eb:	e8 e0 92 ff ff       	call   0x1803ca5d0
   1803d12f0:	48 8b d8             	mov    %rax,%rbx
   1803d12f3:	48 85 c0             	test   %rax,%rax
   1803d12f6:	0f 84 93 00 00 00    	je     0x1803d138f
   1803d12fc:	48 05 11 00 ff ff    	add    $0xffffffffffff0011,%rax
   1803d1302:	49 3b c7             	cmp    %r15,%rax
   1803d1305:	77 44                	ja     0x1803d134b
   1803d1307:	48 8d 4b 11          	lea    0x11(%rbx),%rcx
   1803d130b:	e8 10 ff c3 ff       	call   0x180011220
   1803d1310:	3c e8                	cmp    $0xe8,%al
   1803d1312:	75 37                	jne    0x1803d134b
   1803d1314:	48 8d 4b 12          	lea    0x12(%rbx),%rcx
   1803d1318:	e8 e3 fe c3 ff       	call   0x180011200
   1803d131d:	48 63 c8             	movslq %eax,%rcx
   1803d1320:	4c 8d 05 59 1d 4d 00 	lea    0x4d1d59(%rip),%r8        # 0x1808a3080
   1803d1327:	48 83 c3 16          	add    $0x16,%rbx
   1803d132b:	48 8d 15 96 e5 32 00 	lea    0x32e596(%rip),%rdx        # 0x1806ff8c8
   1803d1332:	48 03 d9             	add    %rcx,%rbx
   1803d1335:	48 8d 0d f4 0e 30 00 	lea    0x300ef4(%rip),%rcx        # 0x1806d2230
   1803d133c:	4c 8b cb             	mov    %rbx,%r9
   1803d133f:	e8 2c 90 ff ff       	call   0x1803ca370
   1803d1344:	48 85 db             	test   %rbx,%rbx
   1803d1347:	74 1f                	je     0x1803d1368
   1803d1349:	eb 47                	jmp    0x1803d1392
   1803d134b:	45 33 c9             	xor    %r9d,%r9d
   1803d134e:	4c 8d 05 2b 1d 4d 00 	lea    0x4d1d2b(%rip),%r8        # 0x1808a3080
   1803d1355:	48 8d 15 6c e5 32 00 	lea    0x32e56c(%rip),%rdx        # 0x1806ff8c8
   1803d135c:	48 8d 0d cd 0e 30 00 	lea    0x300ecd(%rip),%rcx        # 0x1806d2230
   1803d1363:	e8 08 90 ff ff       	call   0x1803ca370
   1803d1368:	ff 05 d2 04 d4 00    	incl   0xd404d2(%rip)        # 0x181111840
   1803d136e:	4c 8d 0d 0b 1d 4d 00 	lea    0x4d1d0b(%rip),%r9        # 0x1808a3080
   1803d1375:	4c 8d 05 4c e5 32 00 	lea    0x32e54c(%rip),%r8        # 0x1806ff8c8
   1803d137c:	48 8d 15 ad 0e 30 00 	lea    0x300ead(%rip),%rdx        # 0x1806d2230
   1803d1383:	48 8d 0d 26 4e 4d 00 	lea    0x4d4e26(%rip),%rcx        # 0x1808a61b0
   1803d138a:	e8 d1 11 ee ff       	call   0x1802b2560
   1803d138f:	49 8b de             	mov    %r14,%rbx
   1803d1392:	4c 8d 05 c7 1c 4d 00 	lea    0x4d1cc7(%rip),%r8        # 0x1808a3060
   1803d1399:	48 89 1d 88 09 59 00 	mov    %rbx,0x590988(%rip)        # 0x180961d28
   1803d13a0:	48 8d 15 b9 e5 32 00 	lea    0x32e5b9(%rip),%rdx        # 0x1806ff960
   1803d13a7:	48 8d 0d 8a f2 31 00 	lea    0x31f28a(%rip),%rcx        # 0x1806f0638
   1803d13ae:	e8 1d 92 ff ff       	call   0x1803ca5d0
   1803d13b3:	48 8b d8             	mov    %rax,%rbx
   1803d13b6:	48 85 c0             	test   %rax,%rax
   1803d13b9:	0f 84 92 00 00 00    	je     0x1803d1451
   1803d13bf:	48 05 00 00 ff ff    	add    $0xffffffffffff0000,%rax
   1803d13c5:	49 3b c7             	cmp    %r15,%rax
   1803d13c8:	77 43                	ja     0x1803d140d
   1803d13ca:	48 8b cb             	mov    %rbx,%rcx
   1803d13cd:	e8 4e fe c3 ff       	call   0x180011220
   1803d13d2:	3c e8                	cmp    $0xe8,%al
   1803d13d4:	75 37                	jne    0x1803d140d
   1803d13d6:	48 8d 4b 01          	lea    0x1(%rbx),%rcx
   1803d13da:	e8 21 fe c3 ff       	call   0x180011200
   1803d13df:	48 63 c8             	movslq %eax,%rcx
   1803d13e2:	4c 8d 05 77 1c 4d 00 	lea    0x4d1c77(%rip),%r8        # 0x1808a3060
   1803d13e9:	48 83 c3 05          	add    $0x5,%rbx
   1803d13ed:	48 8d 15 6c e5 32 00 	lea    0x32e56c(%rip),%rdx        # 0x1806ff960
   1803d13f4:	48 03 d9             	add    %rcx,%rbx
   1803d13f7:	48 8d 0d 3a f2 31 00 	lea    0x31f23a(%rip),%rcx        # 0x1806f0638
   1803d13fe:	4c 8b cb             	mov    %rbx,%r9
   1803d1401:	e8 6a 8f ff ff       	call   0x1803ca370
   1803d1406:	48 85 db             	test   %rbx,%rbx
   1803d1409:	74 1f                	je     0x1803d142a
   1803d140b:	eb 47                	jmp    0x1803d1454
   1803d140d:	45 33 c9             	xor    %r9d,%r9d
   1803d1410:	4c 8d 05 49 1c 4d 00 	lea    0x4d1c49(%rip),%r8        # 0x1808a3060
   1803d1417:	48 8d 15 42 e5 32 00 	lea    0x32e542(%rip),%rdx        # 0x1806ff960
   1803d141e:	48 8d 0d 13 f2 31 00 	lea    0x31f213(%rip),%rcx        # 0x1806f0638
   1803d1425:	e8 46 8f ff ff       	call   0x1803ca370
   1803d142a:	ff 05 10 04 d4 00    	incl   0xd40410(%rip)        # 0x181111840
   1803d1430:	4c 8d 0d 29 1c 4d 00 	lea    0x4d1c29(%rip),%r9        # 0x1808a3060
   1803d1437:	4c 8d 05 22 e5 32 00 	lea    0x32e522(%rip),%r8        # 0x1806ff960
   1803d143e:	48 8d 15 f3 f1 31 00 	lea    0x31f1f3(%rip),%rdx        # 0x1806f0638
   1803d1445:	48 8d 0d 64 4d 4d 00 	lea    0x4d4d64(%rip),%rcx        # 0x1808a61b0
   1803d144c:	e8 0f 11 ee ff       	call   0x1802b2560
   1803d1451:	49 8b de             	mov    %r14,%rbx
   1803d1454:	ff 05 ea 03 d4 00    	incl   0xd403ea(%rip)        # 0x181111844
   1803d145a:	48 8d 3d df 1d 4d 00 	lea    0x4d1ddf(%rip),%rdi        # 0x1808a3240
   1803d1461:	4c 8b c7             	mov    %rdi,%r8
   1803d1464:	48 89 1d c5 08 59 00 	mov    %rbx,0x5908c5(%rip)        # 0x180961d30
   1803d146b:	45 33 c9             	xor    %r9d,%r9d
   1803d146e:	48 8d 15 63 e6 32 00 	lea    0x32e663(%rip),%rdx        # 0x1806ffad8
   1803d1475:	48 8d 0d bc f1 31 00 	lea    0x31f1bc(%rip),%rcx        # 0x1806f0638
   1803d147c:	e8 ef 8e ff ff       	call   0x1803ca370
   1803d1481:	48 8d 0d b0 f1 31 00 	lea    0x31f1b0(%rip),%rcx        # 0x1806f0638
   1803d1488:	ff 15 f2 9c 19 00    	call   *0x199cf2(%rip)        # 0x18056b180
   1803d148e:	48 8b d8             	mov    %rax,%rbx
   1803d1491:	48 85 c0             	test   %rax,%rax
   1803d1494:	0f 84 a3 00 00 00    	je     0x1803d153d
   1803d149a:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d149d:	33 c0                	xor    %eax,%eax
   1803d149f:	0f 11 85 30 07 00 00 	movups %xmm0,0x730(%rbp)
   1803d14a6:	48 89 85 40 07 00 00 	mov    %rax,0x740(%rbp)
   1803d14ad:	ff 15 dd 9d 19 00    	call   *0x199ddd(%rip)        # 0x18056b290
   1803d14b3:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d14b9:	4c 8d 85 30 07 00 00 	lea    0x730(%rbp),%r8
   1803d14c0:	48 8b c8             	mov    %rax,%rcx
   1803d14c3:	48 8b d3             	mov    %rbx,%rdx
   1803d14c6:	ff 15 cc 9d 19 00    	call   *0x199dcc(%rip)        # 0x18056b298
   1803d14cc:	85 c0                	test   %eax,%eax
   1803d14ce:	74 6d                	je     0x1803d153d
   1803d14d0:	48 8b 85 30 07 00 00 	mov    0x730(%rbp),%rax
   1803d14d7:	8b 8d 38 07 00 00    	mov    0x738(%rbp),%ecx
   1803d14dd:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d14e2:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d14e7:	48 85 c0             	test   %rax,%rax
   1803d14ea:	74 51                	je     0x1803d153d
   1803d14ec:	48 85 c9             	test   %rcx,%rcx
   1803d14ef:	74 4c                	je     0x1803d153d
   1803d14f1:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d14f6:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d14fb:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d1500:	48 c7 44 24 38 85 00 	movq   $0x85,0x38(%rsp)
   1803d1507:	00 00 
   1803d1509:	e8 f2 08 e0 ff       	call   0x1801d1e00
   1803d150e:	48 8b d8             	mov    %rax,%rbx
   1803d1511:	48 85 c0             	test   %rax,%rax
   1803d1514:	75 0c                	jne    0x1803d1522
   1803d1516:	4c 8b cf             	mov    %rdi,%r9
   1803d1519:	48 8d 0d b8 4c 4d 00 	lea    0x4d4cb8(%rip),%rcx        # 0x1808a61d8
   1803d1520:	eb 29                	jmp    0x1803d154b
   1803d1522:	4c 8b c8             	mov    %rax,%r9
   1803d1525:	48 8d 15 ac e5 32 00 	lea    0x32e5ac(%rip),%rdx        # 0x1806ffad8
   1803d152c:	4c 8b c7             	mov    %rdi,%r8
   1803d152f:	48 8d 0d 02 f1 31 00 	lea    0x31f102(%rip),%rcx        # 0x1806f0638
   1803d1536:	e8 35 8e ff ff       	call   0x1803ca370
   1803d153b:	eb 2a                	jmp    0x1803d1567
   1803d153d:	4c 8d 0d ff a0 1b 00 	lea    0x1ba0ff(%rip),%r9        # 0x18058b643
   1803d1544:	48 8d 0d b5 4c 4d 00 	lea    0x4d4cb5(%rip),%rcx        # 0x1808a6200
   1803d154b:	ff 05 ef 02 d4 00    	incl   0xd402ef(%rip)        # 0x181111840
   1803d1551:	4c 8d 05 80 e5 32 00 	lea    0x32e580(%rip),%r8        # 0x1806ffad8
   1803d1558:	48 8d 15 d9 f0 31 00 	lea    0x31f0d9(%rip),%rdx        # 0x1806f0638
   1803d155f:	e8 fc 0f ee ff       	call   0x1802b2560
   1803d1564:	49 8b de             	mov    %r14,%rbx
   1803d1567:	ff 05 d7 02 d4 00    	incl   0xd402d7(%rip)        # 0x181111844
   1803d156d:	48 8d 3d 6c 1a 4d 00 	lea    0x4d1a6c(%rip),%rdi        # 0x1808a2fe0
   1803d1574:	4c 8b c7             	mov    %rdi,%r8
   1803d1577:	48 89 1d ba 07 59 00 	mov    %rbx,0x5907ba(%rip)        # 0x180961d38
   1803d157e:	45 33 c9             	xor    %r9d,%r9d
   1803d1581:	48 8d 15 10 55 4d 00 	lea    0x4d5510(%rip),%rdx        # 0x1808a6a98
   1803d1588:	48 8d 0d a9 f0 31 00 	lea    0x31f0a9(%rip),%rcx        # 0x1806f0638
   1803d158f:	e8 dc 8d ff ff       	call   0x1803ca370
   1803d1594:	48 8d 0d 9d f0 31 00 	lea    0x31f09d(%rip),%rcx        # 0x1806f0638
   1803d159b:	ff 15 df 9b 19 00    	call   *0x199bdf(%rip)        # 0x18056b180
   1803d15a1:	48 8b d8             	mov    %rax,%rbx
   1803d15a4:	48 85 c0             	test   %rax,%rax
   1803d15a7:	0f 84 c8 00 00 00    	je     0x1803d1675
   1803d15ad:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d15b0:	33 c0                	xor    %eax,%eax
   1803d15b2:	0f 11 85 48 07 00 00 	movups %xmm0,0x748(%rbp)
   1803d15b9:	48 89 85 58 07 00 00 	mov    %rax,0x758(%rbp)
   1803d15c0:	ff 15 ca 9c 19 00    	call   *0x199cca(%rip)        # 0x18056b290
   1803d15c6:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d15cc:	4c 8d 85 48 07 00 00 	lea    0x748(%rbp),%r8
   1803d15d3:	48 8b c8             	mov    %rax,%rcx
   1803d15d6:	48 8b d3             	mov    %rbx,%rdx
   1803d15d9:	ff 15 b9 9c 19 00    	call   *0x199cb9(%rip)        # 0x18056b298
   1803d15df:	85 c0                	test   %eax,%eax
   1803d15e1:	0f 84 8e 00 00 00    	je     0x1803d1675
   1803d15e7:	48 8b 85 48 07 00 00 	mov    0x748(%rbp),%rax
   1803d15ee:	8b 8d 50 07 00 00    	mov    0x750(%rbp),%ecx
   1803d15f4:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d15f9:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d15fe:	48 85 c0             	test   %rax,%rax
   1803d1601:	74 72                	je     0x1803d1675
   1803d1603:	48 85 c9             	test   %rcx,%rcx
   1803d1606:	74 6d                	je     0x1803d1675
   1803d1608:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d160d:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d1612:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d1617:	48 c7 44 24 38 1f 00 	movq   $0x1f,0x38(%rsp)
   1803d161e:	00 00 
   1803d1620:	e8 db 07 e0 ff       	call   0x1801d1e00
   1803d1625:	48 8b d8             	mov    %rax,%rbx
   1803d1628:	48 85 c0             	test   %rax,%rax
   1803d162b:	75 0c                	jne    0x1803d1639
   1803d162d:	4c 8b cf             	mov    %rdi,%r9
   1803d1630:	48 8d 0d a1 4b 4d 00 	lea    0x4d4ba1(%rip),%rcx        # 0x1808a61d8
   1803d1637:	eb 4a                	jmp    0x1803d1683
   1803d1639:	4c 8b cb             	mov    %rbx,%r9
   1803d163c:	48 8d 15 55 54 4d 00 	lea    0x4d5455(%rip),%rdx        # 0x1808a6a98
   1803d1643:	4c 8b c7             	mov    %rdi,%r8
   1803d1646:	48 8d 0d eb ef 31 00 	lea    0x31efeb(%rip),%rcx        # 0x1806f0638
   1803d164d:	e8 1e 8d ff ff       	call   0x1803ca370
   1803d1652:	ba 03 00 00 00       	mov    $0x3,%edx
   1803d1657:	48 89 1d 42 09 59 00 	mov    %rbx,0x590942(%rip)        # 0x180961fa0
   1803d165e:	41 b8 07 00 00 00    	mov    $0x7,%r8d
   1803d1664:	48 8b cb             	mov    %rbx,%rcx
   1803d1667:	e8 b4 0a e0 ff       	call   0x1801d2120
   1803d166c:	48 89 05 35 09 59 00 	mov    %rax,0x590935(%rip)        # 0x180961fa8
   1803d1673:	eb 2e                	jmp    0x1803d16a3
   1803d1675:	4c 8d 0d c7 9f 1b 00 	lea    0x1b9fc7(%rip),%r9        # 0x18058b643
   1803d167c:	48 8d 0d 7d 4b 4d 00 	lea    0x4d4b7d(%rip),%rcx        # 0x1808a6200
   1803d1683:	ff 05 b7 01 d4 00    	incl   0xd401b7(%rip)        # 0x181111840
   1803d1689:	4c 8d 05 08 54 4d 00 	lea    0x4d5408(%rip),%r8        # 0x1808a6a98
   1803d1690:	48 8d 15 a1 ef 31 00 	lea    0x31efa1(%rip),%rdx        # 0x1806f0638
   1803d1697:	e8 c4 0e ee ff       	call   0x1802b2560
   1803d169c:	4c 89 35 fd 08 59 00 	mov    %r14,0x5908fd(%rip)        # 0x180961fa0
   1803d16a3:	ff 05 9b 01 d4 00    	incl   0xd4019b(%rip)        # 0x181111844
   1803d16a9:	48 8d 3d f8 18 4d 00 	lea    0x4d18f8(%rip),%rdi        # 0x1808a2fa8
   1803d16b0:	4c 8b c7             	mov    %rdi,%r8
   1803d16b3:	48 8d 15 c6 53 4d 00 	lea    0x4d53c6(%rip),%rdx        # 0x1808a6a80
   1803d16ba:	45 33 c9             	xor    %r9d,%r9d
   1803d16bd:	48 8d 0d 74 ef 31 00 	lea    0x31ef74(%rip),%rcx        # 0x1806f0638
   1803d16c4:	e8 a7 8c ff ff       	call   0x1803ca370
   1803d16c9:	48 8d 0d 68 ef 31 00 	lea    0x31ef68(%rip),%rcx        # 0x1806f0638
   1803d16d0:	ff 15 aa 9a 19 00    	call   *0x199aaa(%rip)        # 0x18056b180
   1803d16d6:	48 8b d8             	mov    %rax,%rbx
   1803d16d9:	48 85 c0             	test   %rax,%rax
   1803d16dc:	0f 84 b2 00 00 00    	je     0x1803d1794
   1803d16e2:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d16e5:	33 c0                	xor    %eax,%eax
   1803d16e7:	0f 11 85 60 07 00 00 	movups %xmm0,0x760(%rbp)
   1803d16ee:	48 89 85 70 07 00 00 	mov    %rax,0x770(%rbp)
   1803d16f5:	ff 15 95 9b 19 00    	call   *0x199b95(%rip)        # 0x18056b290
   1803d16fb:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d1701:	4c 8d 85 60 07 00 00 	lea    0x760(%rbp),%r8
   1803d1708:	48 8b c8             	mov    %rax,%rcx
   1803d170b:	48 8b d3             	mov    %rbx,%rdx
   1803d170e:	ff 15 84 9b 19 00    	call   *0x199b84(%rip)        # 0x18056b298
   1803d1714:	85 c0                	test   %eax,%eax
   1803d1716:	74 7c                	je     0x1803d1794
   1803d1718:	48 8b 85 60 07 00 00 	mov    0x760(%rbp),%rax
   1803d171f:	8b 8d 68 07 00 00    	mov    0x768(%rbp),%ecx
   1803d1725:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d172a:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d172f:	48 85 c0             	test   %rax,%rax
   1803d1732:	74 60                	je     0x1803d1794
   1803d1734:	48 85 c9             	test   %rcx,%rcx
   1803d1737:	74 5b                	je     0x1803d1794
   1803d1739:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d173e:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d1743:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d1748:	48 c7 44 24 38 30 00 	movq   $0x30,0x38(%rsp)
   1803d174f:	00 00 
   1803d1751:	e8 aa 06 e0 ff       	call   0x1801d1e00
   1803d1756:	48 8b d8             	mov    %rax,%rbx
   1803d1759:	48 85 c0             	test   %rax,%rax
   1803d175c:	75 0c                	jne    0x1803d176a
   1803d175e:	4c 8b cf             	mov    %rdi,%r9
   1803d1761:	48 8d 0d 70 4a 4d 00 	lea    0x4d4a70(%rip),%rcx        # 0x1808a61d8
   1803d1768:	eb 38                	jmp    0x1803d17a2
   1803d176a:	4c 8b cb             	mov    %rbx,%r9
   1803d176d:	48 8d 15 0c 53 4d 00 	lea    0x4d530c(%rip),%rdx        # 0x1808a6a80
   1803d1774:	4c 8b c7             	mov    %rdi,%r8
   1803d1777:	48 8d 0d ba ee 31 00 	lea    0x31eeba(%rip),%rcx        # 0x1806f0638
   1803d177e:	e8 ed 8b ff ff       	call   0x1803ca370
   1803d1783:	48 8d 4b 05          	lea    0x5(%rbx),%rcx
   1803d1787:	e8 74 fa c3 ff       	call   0x180011200
   1803d178c:	89 05 1e 08 59 00    	mov    %eax,0x59081e(%rip)        # 0x180961fb0
   1803d1792:	eb 27                	jmp    0x1803d17bb
   1803d1794:	4c 8d 0d a8 9e 1b 00 	lea    0x1b9ea8(%rip),%r9        # 0x18058b643
   1803d179b:	48 8d 0d 5e 4a 4d 00 	lea    0x4d4a5e(%rip),%rcx        # 0x1808a6200
   1803d17a2:	ff 05 98 00 d4 00    	incl   0xd40098(%rip)        # 0x181111840
   1803d17a8:	4c 8d 05 d1 52 4d 00 	lea    0x4d52d1(%rip),%r8        # 0x1808a6a80
   1803d17af:	48 8d 15 82 ee 31 00 	lea    0x31ee82(%rip),%rdx        # 0x1806f0638
   1803d17b6:	e8 a5 0d ee ff       	call   0x1802b2560
   1803d17bb:	ff 05 83 00 d4 00    	incl   0xd40083(%rip)        # 0x181111844
   1803d17c1:	48 8d 3d 98 17 4d 00 	lea    0x4d1798(%rip),%rdi        # 0x1808a2f60
   1803d17c8:	4c 8b c7             	mov    %rdi,%r8
   1803d17cb:	48 8d 15 26 e5 32 00 	lea    0x32e526(%rip),%rdx        # 0x1806ffcf8
   1803d17d2:	45 33 c9             	xor    %r9d,%r9d
   1803d17d5:	48 8d 0d 54 0a 30 00 	lea    0x300a54(%rip),%rcx        # 0x1806d2230
   1803d17dc:	e8 8f 8b ff ff       	call   0x1803ca370
   1803d17e1:	48 8d 0d 48 0a 30 00 	lea    0x300a48(%rip),%rcx        # 0x1806d2230
   1803d17e8:	ff 15 92 99 19 00    	call   *0x199992(%rip)        # 0x18056b180
   1803d17ee:	48 8b d8             	mov    %rax,%rbx
   1803d17f1:	48 85 c0             	test   %rax,%rax
   1803d17f4:	0f 84 a3 00 00 00    	je     0x1803d189d
   1803d17fa:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d17fd:	33 c0                	xor    %eax,%eax
   1803d17ff:	0f 11 85 78 07 00 00 	movups %xmm0,0x778(%rbp)
   1803d1806:	48 89 85 88 07 00 00 	mov    %rax,0x788(%rbp)
   1803d180d:	ff 15 7d 9a 19 00    	call   *0x199a7d(%rip)        # 0x18056b290
   1803d1813:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d1819:	4c 8d 85 78 07 00 00 	lea    0x778(%rbp),%r8
   1803d1820:	48 8b c8             	mov    %rax,%rcx
   1803d1823:	48 8b d3             	mov    %rbx,%rdx
   1803d1826:	ff 15 6c 9a 19 00    	call   *0x199a6c(%rip)        # 0x18056b298
   1803d182c:	85 c0                	test   %eax,%eax
   1803d182e:	74 6d                	je     0x1803d189d
   1803d1830:	48 8b 85 78 07 00 00 	mov    0x778(%rbp),%rax
   1803d1837:	8b 8d 80 07 00 00    	mov    0x780(%rbp),%ecx
   1803d183d:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d1842:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d1847:	48 85 c0             	test   %rax,%rax
   1803d184a:	74 51                	je     0x1803d189d
   1803d184c:	48 85 c9             	test   %rcx,%rcx
   1803d184f:	74 4c                	je     0x1803d189d
   1803d1851:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d1856:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d185b:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d1860:	48 c7 44 24 38 47 00 	movq   $0x47,0x38(%rsp)
   1803d1867:	00 00 
   1803d1869:	e8 92 05 e0 ff       	call   0x1801d1e00
   1803d186e:	48 8b d8             	mov    %rax,%rbx
   1803d1871:	48 85 c0             	test   %rax,%rax
   1803d1874:	75 0c                	jne    0x1803d1882
   1803d1876:	4c 8b cf             	mov    %rdi,%r9
   1803d1879:	48 8d 0d 58 49 4d 00 	lea    0x4d4958(%rip),%rcx        # 0x1808a61d8
   1803d1880:	eb 29                	jmp    0x1803d18ab
   1803d1882:	4c 8b c8             	mov    %rax,%r9
   1803d1885:	48 8d 15 6c e4 32 00 	lea    0x32e46c(%rip),%rdx        # 0x1806ffcf8
   1803d188c:	4c 8b c7             	mov    %rdi,%r8
   1803d188f:	48 8d 0d 9a 09 30 00 	lea    0x30099a(%rip),%rcx        # 0x1806d2230
   1803d1896:	e8 d5 8a ff ff       	call   0x1803ca370
   1803d189b:	eb 2a                	jmp    0x1803d18c7
   1803d189d:	4c 8d 0d 9f 9d 1b 00 	lea    0x1b9d9f(%rip),%r9        # 0x18058b643
   1803d18a4:	48 8d 0d 55 49 4d 00 	lea    0x4d4955(%rip),%rcx        # 0x1808a6200
   1803d18ab:	ff 05 8f ff d3 00    	incl   0xd3ff8f(%rip)        # 0x181111840
   1803d18b1:	4c 8d 05 40 e4 32 00 	lea    0x32e440(%rip),%r8        # 0x1806ffcf8
   1803d18b8:	48 8d 15 71 09 30 00 	lea    0x300971(%rip),%rdx        # 0x1806d2230
   1803d18bf:	e8 9c 0c ee ff       	call   0x1802b2560
   1803d18c4:	49 8b de             	mov    %r14,%rbx
   1803d18c7:	ff 05 77 ff d3 00    	incl   0xd3ff77(%rip)        # 0x181111844
   1803d18cd:	48 8d 3d 6c 1a 4d 00 	lea    0x4d1a6c(%rip),%rdi        # 0x1808a3340
   1803d18d4:	4c 8b c7             	mov    %rdi,%r8
   1803d18d7:	48 89 1d 1a 07 59 00 	mov    %rbx,0x59071a(%rip)        # 0x180961ff8
   1803d18de:	45 33 c9             	xor    %r9d,%r9d
   1803d18e1:	48 8d 15 88 51 4d 00 	lea    0x4d5188(%rip),%rdx        # 0x1808a6a70
   1803d18e8:	48 8d 0d 41 09 30 00 	lea    0x300941(%rip),%rcx        # 0x1806d2230
   1803d18ef:	e8 7c 8a ff ff       	call   0x1803ca370
   1803d18f4:	48 8d 0d 35 09 30 00 	lea    0x300935(%rip),%rcx        # 0x1806d2230
   1803d18fb:	ff 15 7f 98 19 00    	call   *0x19987f(%rip)        # 0x18056b180
   1803d1901:	48 8b d8             	mov    %rax,%rbx
   1803d1904:	48 85 c0             	test   %rax,%rax
   1803d1907:	0f 84 cc 00 00 00    	je     0x1803d19d9
   1803d190d:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d1910:	33 c0                	xor    %eax,%eax
   1803d1912:	0f 11 85 90 07 00 00 	movups %xmm0,0x790(%rbp)
   1803d1919:	48 89 85 a0 07 00 00 	mov    %rax,0x7a0(%rbp)
   1803d1920:	ff 15 6a 99 19 00    	call   *0x19996a(%rip)        # 0x18056b290
   1803d1926:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d192c:	4c 8d 85 90 07 00 00 	lea    0x790(%rbp),%r8
   1803d1933:	48 8b c8             	mov    %rax,%rcx
   1803d1936:	48 8b d3             	mov    %rbx,%rdx
   1803d1939:	ff 15 59 99 19 00    	call   *0x199959(%rip)        # 0x18056b298
   1803d193f:	85 c0                	test   %eax,%eax
   1803d1941:	0f 84 92 00 00 00    	je     0x1803d19d9
   1803d1947:	48 8b 85 90 07 00 00 	mov    0x790(%rbp),%rax
   1803d194e:	8b 8d 98 07 00 00    	mov    0x798(%rbp),%ecx
   1803d1954:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d1959:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d195e:	48 85 c0             	test   %rax,%rax
   1803d1961:	74 76                	je     0x1803d19d9
   1803d1963:	48 85 c9             	test   %rcx,%rcx
   1803d1966:	74 71                	je     0x1803d19d9
   1803d1968:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d196d:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d1972:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d1977:	48 c7 44 24 38 25 00 	movq   $0x25,0x38(%rsp)
   1803d197e:	00 00 
   1803d1980:	e8 7b 04 e0 ff       	call   0x1801d1e00
   1803d1985:	48 8b d8             	mov    %rax,%rbx
   1803d1988:	48 85 c0             	test   %rax,%rax
   1803d198b:	75 0c                	jne    0x1803d1999
   1803d198d:	4c 8b cf             	mov    %rdi,%r9
   1803d1990:	48 8d 0d 41 48 4d 00 	lea    0x4d4841(%rip),%rcx        # 0x1808a61d8
   1803d1997:	eb 4e                	jmp    0x1803d19e7
   1803d1999:	4c 8b cb             	mov    %rbx,%r9
   1803d199c:	48 8d 15 cd 50 4d 00 	lea    0x4d50cd(%rip),%rdx        # 0x1808a6a70
   1803d19a3:	4c 8b c7             	mov    %rdi,%r8
   1803d19a6:	48 8d 0d 83 08 30 00 	lea    0x300883(%rip),%rcx        # 0x1806d2230
   1803d19ad:	e8 be 89 ff ff       	call   0x1803ca370
   1803d19b2:	ba 03 00 00 00       	mov    $0x3,%edx
   1803d19b7:	41 b8 07 00 00 00    	mov    $0x7,%r8d
   1803d19bd:	48 8b cb             	mov    %rbx,%rcx
   1803d19c0:	e8 5b 07 e0 ff       	call   0x1801d2120
   1803d19c5:	48 89 05 34 06 59 00 	mov    %rax,0x590634(%rip)        # 0x180962000
   1803d19cc:	48 8d 43 0e          	lea    0xe(%rbx),%rax
   1803d19d0:	48 89 05 39 06 59 00 	mov    %rax,0x590639(%rip)        # 0x180962010
   1803d19d7:	eb 27                	jmp    0x1803d1a00
   1803d19d9:	4c 8d 0d 63 9c 1b 00 	lea    0x1b9c63(%rip),%r9        # 0x18058b643
   1803d19e0:	48 8d 0d 19 48 4d 00 	lea    0x4d4819(%rip),%rcx        # 0x1808a6200
   1803d19e7:	ff 05 53 fe d3 00    	incl   0xd3fe53(%rip)        # 0x181111840
   1803d19ed:	4c 8d 05 7c 50 4d 00 	lea    0x4d507c(%rip),%r8        # 0x1808a6a70
   1803d19f4:	48 8d 15 35 08 30 00 	lea    0x300835(%rip),%rdx        # 0x1806d2230
   1803d19fb:	e8 60 0b ee ff       	call   0x1802b2560
   1803d1a00:	4c 8d 05 39 16 4d 00 	lea    0x4d1639(%rip),%r8        # 0x1808a3040
   1803d1a07:	48 8d 15 92 51 4d 00 	lea    0x4d5192(%rip),%rdx        # 0x1808a6ba0
   1803d1a0e:	48 8d 0d 23 ec 31 00 	lea    0x31ec23(%rip),%rcx        # 0x1806f0638
   1803d1a15:	e8 b6 8b ff ff       	call   0x1803ca5d0
   1803d1a1a:	48 8b c8             	mov    %rax,%rcx
   1803d1a1d:	48 85 c0             	test   %rax,%rax
   1803d1a20:	74 6e                	je     0x1803d1a90
   1803d1a22:	4c 63 48 03          	movslq 0x3(%rax),%r9
   1803d1a26:	4c 8d 05 13 16 4d 00 	lea    0x4d1613(%rip),%r8        # 0x1808a3040
   1803d1a2d:	48 05 07 00 ff ff    	add    $0xffffffffffff0007,%rax
   1803d1a33:	48 8d 15 66 51 4d 00 	lea    0x4d5166(%rip),%rdx        # 0x1808a6ba0
   1803d1a3a:	49 03 c1             	add    %r9,%rax
   1803d1a3d:	49 3b c7             	cmp    %r15,%rax
   1803d1a40:	77 18                	ja     0x1803d1a5a
   1803d1a42:	48 8d 59 07          	lea    0x7(%rcx),%rbx
   1803d1a46:	49 03 d9             	add    %r9,%rbx
   1803d1a49:	48 8d 0d e8 eb 31 00 	lea    0x31ebe8(%rip),%rcx        # 0x1806f0638
   1803d1a50:	4c 8b cb             	mov    %rbx,%r9
   1803d1a53:	e8 18 89 ff ff       	call   0x1803ca370
   1803d1a58:	eb 39                	jmp    0x1803d1a93
   1803d1a5a:	45 33 c9             	xor    %r9d,%r9d
   1803d1a5d:	48 8d 0d d4 eb 31 00 	lea    0x31ebd4(%rip),%rcx        # 0x1806f0638
   1803d1a64:	e8 07 89 ff ff       	call   0x1803ca370
   1803d1a69:	ff 05 d1 fd d3 00    	incl   0xd3fdd1(%rip)        # 0x181111840
   1803d1a6f:	4c 8d 0d ca 15 4d 00 	lea    0x4d15ca(%rip),%r9        # 0x1808a3040
   1803d1a76:	4c 8d 05 23 51 4d 00 	lea    0x4d5123(%rip),%r8        # 0x1808a6ba0
   1803d1a7d:	48 8d 15 b4 eb 31 00 	lea    0x31ebb4(%rip),%rdx        # 0x1806f0638
   1803d1a84:	48 8d 0d f5 46 4d 00 	lea    0x4d46f5(%rip),%rcx        # 0x1808a6180
   1803d1a8b:	e8 d0 0a ee ff       	call   0x1802b2560
   1803d1a90:	49 8b de             	mov    %r14,%rbx
   1803d1a93:	4c 8d 05 86 15 4d 00 	lea    0x4d1586(%rip),%r8        # 0x1808a3020
   1803d1a9a:	48 89 1d 77 05 59 00 	mov    %rbx,0x590577(%rip)        # 0x180962018
   1803d1aa1:	48 8d 15 e0 50 4d 00 	lea    0x4d50e0(%rip),%rdx        # 0x1808a6b88
   1803d1aa8:	48 8d 0d 89 eb 31 00 	lea    0x31eb89(%rip),%rcx        # 0x1806f0638
   1803d1aaf:	e8 1c 8b ff ff       	call   0x1803ca5d0
   1803d1ab4:	48 8b c8             	mov    %rax,%rcx
   1803d1ab7:	48 85 c0             	test   %rax,%rax
   1803d1aba:	74 6e                	je     0x1803d1b2a
   1803d1abc:	4c 63 48 03          	movslq 0x3(%rax),%r9
   1803d1ac0:	4c 8d 05 59 15 4d 00 	lea    0x4d1559(%rip),%r8        # 0x1808a3020
   1803d1ac7:	48 05 07 00 ff ff    	add    $0xffffffffffff0007,%rax
   1803d1acd:	48 8d 15 b4 50 4d 00 	lea    0x4d50b4(%rip),%rdx        # 0x1808a6b88
   1803d1ad4:	49 03 c1             	add    %r9,%rax
   1803d1ad7:	49 3b c7             	cmp    %r15,%rax
   1803d1ada:	77 18                	ja     0x1803d1af4
   1803d1adc:	48 8d 59 07          	lea    0x7(%rcx),%rbx
   1803d1ae0:	49 03 d9             	add    %r9,%rbx
   1803d1ae3:	48 8d 0d 4e eb 31 00 	lea    0x31eb4e(%rip),%rcx        # 0x1806f0638
   1803d1aea:	4c 8b cb             	mov    %rbx,%r9
   1803d1aed:	e8 7e 88 ff ff       	call   0x1803ca370
   1803d1af2:	eb 39                	jmp    0x1803d1b2d
   1803d1af4:	45 33 c9             	xor    %r9d,%r9d
   1803d1af7:	48 8d 0d 3a eb 31 00 	lea    0x31eb3a(%rip),%rcx        # 0x1806f0638
   1803d1afe:	e8 6d 88 ff ff       	call   0x1803ca370
   1803d1b03:	ff 05 37 fd d3 00    	incl   0xd3fd37(%rip)        # 0x181111840
   1803d1b09:	4c 8d 0d 10 15 4d 00 	lea    0x4d1510(%rip),%r9        # 0x1808a3020
   1803d1b10:	4c 8d 05 71 50 4d 00 	lea    0x4d5071(%rip),%r8        # 0x1808a6b88
   1803d1b17:	48 8d 15 1a eb 31 00 	lea    0x31eb1a(%rip),%rdx        # 0x1806f0638
   1803d1b1e:	48 8d 0d 5b 46 4d 00 	lea    0x4d465b(%rip),%rcx        # 0x1808a6180
   1803d1b25:	e8 36 0a ee ff       	call   0x1802b2560
   1803d1b2a:	49 8b de             	mov    %r14,%rbx
   1803d1b2d:	4c 8d 05 cc 14 4d 00 	lea    0x4d14cc(%rip),%r8        # 0x1808a3000
   1803d1b34:	48 89 1d e5 04 59 00 	mov    %rbx,0x5904e5(%rip)        # 0x180962020
   1803d1b3b:	48 8d 15 2e 50 4d 00 	lea    0x4d502e(%rip),%rdx        # 0x1808a6b70
   1803d1b42:	48 8d 0d e7 06 30 00 	lea    0x3006e7(%rip),%rcx        # 0x1806d2230
   1803d1b49:	e8 82 8a ff ff       	call   0x1803ca5d0
   1803d1b4e:	48 8b d8             	mov    %rax,%rbx
   1803d1b51:	48 85 c0             	test   %rax,%rax
   1803d1b54:	0f 84 92 00 00 00    	je     0x1803d1bec
   1803d1b5a:	48 05 00 00 ff ff    	add    $0xffffffffffff0000,%rax
   1803d1b60:	49 3b c7             	cmp    %r15,%rax
   1803d1b63:	77 43                	ja     0x1803d1ba8
   1803d1b65:	48 8b cb             	mov    %rbx,%rcx
   1803d1b68:	e8 b3 f6 c3 ff       	call   0x180011220
   1803d1b6d:	3c e8                	cmp    $0xe8,%al
   1803d1b6f:	75 37                	jne    0x1803d1ba8
   1803d1b71:	48 8d 4b 01          	lea    0x1(%rbx),%rcx
   1803d1b75:	e8 86 f6 c3 ff       	call   0x180011200
   1803d1b7a:	48 63 c8             	movslq %eax,%rcx
   1803d1b7d:	4c 8d 05 7c 14 4d 00 	lea    0x4d147c(%rip),%r8        # 0x1808a3000
   1803d1b84:	48 83 c3 05          	add    $0x5,%rbx
   1803d1b88:	48 8d 15 e1 4f 4d 00 	lea    0x4d4fe1(%rip),%rdx        # 0x1808a6b70
   1803d1b8f:	48 03 d9             	add    %rcx,%rbx
   1803d1b92:	48 8d 0d 97 06 30 00 	lea    0x300697(%rip),%rcx        # 0x1806d2230
   1803d1b99:	4c 8b cb             	mov    %rbx,%r9
   1803d1b9c:	e8 cf 87 ff ff       	call   0x1803ca370
   1803d1ba1:	48 85 db             	test   %rbx,%rbx
   1803d1ba4:	74 1f                	je     0x1803d1bc5
   1803d1ba6:	eb 47                	jmp    0x1803d1bef
   1803d1ba8:	45 33 c9             	xor    %r9d,%r9d
   1803d1bab:	4c 8d 05 4e 14 4d 00 	lea    0x4d144e(%rip),%r8        # 0x1808a3000
   1803d1bb2:	48 8d 15 b7 4f 4d 00 	lea    0x4d4fb7(%rip),%rdx        # 0x1808a6b70
   1803d1bb9:	48 8d 0d 70 06 30 00 	lea    0x300670(%rip),%rcx        # 0x1806d2230
   1803d1bc0:	e8 ab 87 ff ff       	call   0x1803ca370
   1803d1bc5:	ff 05 75 fc d3 00    	incl   0xd3fc75(%rip)        # 0x181111840
   1803d1bcb:	4c 8d 0d 2e 14 4d 00 	lea    0x4d142e(%rip),%r9        # 0x1808a3000
   1803d1bd2:	4c 8d 05 97 4f 4d 00 	lea    0x4d4f97(%rip),%r8        # 0x1808a6b70
   1803d1bd9:	48 8d 15 50 06 30 00 	lea    0x300650(%rip),%rdx        # 0x1806d2230
   1803d1be0:	48 8d 0d c9 45 4d 00 	lea    0x4d45c9(%rip),%rcx        # 0x1808a61b0
   1803d1be7:	e8 74 09 ee ff       	call   0x1802b2560
   1803d1bec:	49 8b de             	mov    %r14,%rbx
   1803d1bef:	4c 8d 05 82 15 4d 00 	lea    0x4d1582(%rip),%r8        # 0x1808a3178
   1803d1bf6:	48 89 1d 2b 04 59 00 	mov    %rbx,0x59042b(%rip)        # 0x180962028
   1803d1bfd:	48 8d 15 5c 4f 4d 00 	lea    0x4d4f5c(%rip),%rdx        # 0x1808a6b60
   1803d1c04:	48 8d 0d 25 06 30 00 	lea    0x300625(%rip),%rcx        # 0x1806d2230
   1803d1c0b:	e8 c0 89 ff ff       	call   0x1803ca5d0
   1803d1c10:	48 8b d8             	mov    %rax,%rbx
   1803d1c13:	48 85 c0             	test   %rax,%rax
   1803d1c16:	0f 84 92 00 00 00    	je     0x1803d1cae
   1803d1c1c:	48 05 00 00 ff ff    	add    $0xffffffffffff0000,%rax
   1803d1c22:	49 3b c7             	cmp    %r15,%rax
   1803d1c25:	77 43                	ja     0x1803d1c6a
   1803d1c27:	48 8b cb             	mov    %rbx,%rcx
   1803d1c2a:	e8 f1 f5 c3 ff       	call   0x180011220
   1803d1c2f:	3c e8                	cmp    $0xe8,%al
   1803d1c31:	75 37                	jne    0x1803d1c6a
   1803d1c33:	48 8d 4b 01          	lea    0x1(%rbx),%rcx
   1803d1c37:	e8 c4 f5 c3 ff       	call   0x180011200
   1803d1c3c:	48 63 c8             	movslq %eax,%rcx
   1803d1c3f:	4c 8d 05 32 15 4d 00 	lea    0x4d1532(%rip),%r8        # 0x1808a3178
   1803d1c46:	48 83 c3 05          	add    $0x5,%rbx
   1803d1c4a:	48 8d 15 0f 4f 4d 00 	lea    0x4d4f0f(%rip),%rdx        # 0x1808a6b60
   1803d1c51:	48 03 d9             	add    %rcx,%rbx
   1803d1c54:	48 8d 0d d5 05 30 00 	lea    0x3005d5(%rip),%rcx        # 0x1806d2230
   1803d1c5b:	4c 8b cb             	mov    %rbx,%r9
   1803d1c5e:	e8 0d 87 ff ff       	call   0x1803ca370
   1803d1c63:	48 85 db             	test   %rbx,%rbx
   1803d1c66:	74 1f                	je     0x1803d1c87
   1803d1c68:	eb 47                	jmp    0x1803d1cb1
   1803d1c6a:	45 33 c9             	xor    %r9d,%r9d
   1803d1c6d:	4c 8d 05 04 15 4d 00 	lea    0x4d1504(%rip),%r8        # 0x1808a3178
   1803d1c74:	48 8d 15 e5 4e 4d 00 	lea    0x4d4ee5(%rip),%rdx        # 0x1808a6b60
   1803d1c7b:	48 8d 0d ae 05 30 00 	lea    0x3005ae(%rip),%rcx        # 0x1806d2230
   1803d1c82:	e8 e9 86 ff ff       	call   0x1803ca370
   1803d1c87:	ff 05 b3 fb d3 00    	incl   0xd3fbb3(%rip)        # 0x181111840
   1803d1c8d:	4c 8d 0d e4 14 4d 00 	lea    0x4d14e4(%rip),%r9        # 0x1808a3178
   1803d1c94:	4c 8d 05 c5 4e 4d 00 	lea    0x4d4ec5(%rip),%r8        # 0x1808a6b60
   1803d1c9b:	48 8d 15 8e 05 30 00 	lea    0x30058e(%rip),%rdx        # 0x1806d2230
   1803d1ca2:	48 8d 0d 07 45 4d 00 	lea    0x4d4507(%rip),%rcx        # 0x1808a61b0
   1803d1ca9:	e8 b2 08 ee ff       	call   0x1802b2560
   1803d1cae:	49 8b de             	mov    %r14,%rbx
   1803d1cb1:	ff 05 8d fb d3 00    	incl   0xd3fb8d(%rip)        # 0x181111844
   1803d1cb7:	48 8d 3d b2 1b 4d 00 	lea    0x4d1bb2(%rip),%rdi        # 0x1808a3870
   1803d1cbe:	4c 8b c7             	mov    %rdi,%r8
   1803d1cc1:	48 89 1d 78 00 59 00 	mov    %rbx,0x590078(%rip)        # 0x180961d40
   1803d1cc8:	45 33 c9             	xor    %r9d,%r9d
   1803d1ccb:	48 8d 15 ce dc 32 00 	lea    0x32dcce(%rip),%rdx        # 0x1806ff9a0
   1803d1cd2:	48 8d 0d 57 05 30 00 	lea    0x300557(%rip),%rcx        # 0x1806d2230
   1803d1cd9:	e8 92 86 ff ff       	call   0x1803ca370
   1803d1cde:	48 8d 0d 4b 05 30 00 	lea    0x30054b(%rip),%rcx        # 0x1806d2230
   1803d1ce5:	ff 15 95 94 19 00    	call   *0x199495(%rip)        # 0x18056b180
   1803d1ceb:	48 8b d8             	mov    %rax,%rbx
   1803d1cee:	48 85 c0             	test   %rax,%rax
   1803d1cf1:	0f 84 a3 00 00 00    	je     0x1803d1d9a
   1803d1cf7:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d1cfa:	33 c0                	xor    %eax,%eax
   1803d1cfc:	0f 11 85 a8 07 00 00 	movups %xmm0,0x7a8(%rbp)
   1803d1d03:	48 89 85 b8 07 00 00 	mov    %rax,0x7b8(%rbp)
   1803d1d0a:	ff 15 80 95 19 00    	call   *0x199580(%rip)        # 0x18056b290
   1803d1d10:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d1d16:	4c 8d 85 a8 07 00 00 	lea    0x7a8(%rbp),%r8
   1803d1d1d:	48 8b c8             	mov    %rax,%rcx
   1803d1d20:	48 8b d3             	mov    %rbx,%rdx
   1803d1d23:	ff 15 6f 95 19 00    	call   *0x19956f(%rip)        # 0x18056b298
   1803d1d29:	85 c0                	test   %eax,%eax
   1803d1d2b:	74 6d                	je     0x1803d1d9a
   1803d1d2d:	48 8b 85 a8 07 00 00 	mov    0x7a8(%rbp),%rax
   1803d1d34:	8b 8d b0 07 00 00    	mov    0x7b0(%rbp),%ecx
   1803d1d3a:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d1d3f:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d1d44:	48 85 c0             	test   %rax,%rax
   1803d1d47:	74 51                	je     0x1803d1d9a
   1803d1d49:	48 85 c9             	test   %rcx,%rcx
   1803d1d4c:	74 4c                	je     0x1803d1d9a
   1803d1d4e:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d1d53:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d1d58:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d1d5d:	48 c7 44 24 38 70 00 	movq   $0x70,0x38(%rsp)
   1803d1d64:	00 00 
   1803d1d66:	e8 95 00 e0 ff       	call   0x1801d1e00
   1803d1d6b:	48 8b d8             	mov    %rax,%rbx
   1803d1d6e:	48 85 c0             	test   %rax,%rax
   1803d1d71:	75 0c                	jne    0x1803d1d7f
   1803d1d73:	4c 8b cf             	mov    %rdi,%r9
   1803d1d76:	48 8d 0d 5b 44 4d 00 	lea    0x4d445b(%rip),%rcx        # 0x1808a61d8
   1803d1d7d:	eb 29                	jmp    0x1803d1da8
   1803d1d7f:	4c 8b c8             	mov    %rax,%r9
   1803d1d82:	48 8d 15 17 dc 32 00 	lea    0x32dc17(%rip),%rdx        # 0x1806ff9a0
   1803d1d89:	4c 8b c7             	mov    %rdi,%r8
   1803d1d8c:	48 8d 0d 9d 04 30 00 	lea    0x30049d(%rip),%rcx        # 0x1806d2230
   1803d1d93:	e8 d8 85 ff ff       	call   0x1803ca370
   1803d1d98:	eb 2a                	jmp    0x1803d1dc4
   1803d1d9a:	4c 8d 0d a2 98 1b 00 	lea    0x1b98a2(%rip),%r9        # 0x18058b643
   1803d1da1:	48 8d 0d 58 44 4d 00 	lea    0x4d4458(%rip),%rcx        # 0x1808a6200
   1803d1da8:	ff 05 92 fa d3 00    	incl   0xd3fa92(%rip)        # 0x181111840
   1803d1dae:	4c 8d 05 eb db 32 00 	lea    0x32dbeb(%rip),%r8        # 0x1806ff9a0
   1803d1db5:	48 8d 15 74 04 30 00 	lea    0x300474(%rip),%rdx        # 0x1806d2230
   1803d1dbc:	e8 9f 07 ee ff       	call   0x1802b2560
   1803d1dc1:	49 8b de             	mov    %r14,%rbx
   1803d1dc4:	ff 05 7a fa d3 00    	incl   0xd3fa7a(%rip)        # 0x181111844
   1803d1dca:	48 8d 3d 1f 1b 4d 00 	lea    0x4d1b1f(%rip),%rdi        # 0x1808a38f0
   1803d1dd1:	4c 8b c7             	mov    %rdi,%r8
   1803d1dd4:	48 89 1d 6d ff 58 00 	mov    %rbx,0x58ff6d(%rip)        # 0x180961d48
   1803d1ddb:	45 33 c9             	xor    %r9d,%r9d
   1803d1dde:	48 8d 15 a3 db 32 00 	lea    0x32dba3(%rip),%rdx        # 0x1806ff988
   1803d1de5:	48 8d 0d 44 04 30 00 	lea    0x300444(%rip),%rcx        # 0x1806d2230
   1803d1dec:	e8 7f 85 ff ff       	call   0x1803ca370
   1803d1df1:	48 8d 0d 38 04 30 00 	lea    0x300438(%rip),%rcx        # 0x1806d2230
   1803d1df8:	ff 15 82 93 19 00    	call   *0x199382(%rip)        # 0x18056b180
   1803d1dfe:	48 8b d8             	mov    %rax,%rbx
   1803d1e01:	48 85 c0             	test   %rax,%rax
   1803d1e04:	0f 84 a3 00 00 00    	je     0x1803d1ead
   1803d1e0a:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d1e0d:	33 c0                	xor    %eax,%eax
   1803d1e0f:	0f 11 85 c0 07 00 00 	movups %xmm0,0x7c0(%rbp)
   1803d1e16:	48 89 85 d0 07 00 00 	mov    %rax,0x7d0(%rbp)
   1803d1e1d:	ff 15 6d 94 19 00    	call   *0x19946d(%rip)        # 0x18056b290
   1803d1e23:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d1e29:	4c 8d 85 c0 07 00 00 	lea    0x7c0(%rbp),%r8
   1803d1e30:	48 8b c8             	mov    %rax,%rcx
   1803d1e33:	48 8b d3             	mov    %rbx,%rdx
   1803d1e36:	ff 15 5c 94 19 00    	call   *0x19945c(%rip)        # 0x18056b298
   1803d1e3c:	85 c0                	test   %eax,%eax
   1803d1e3e:	74 6d                	je     0x1803d1ead
   1803d1e40:	48 8b 85 c0 07 00 00 	mov    0x7c0(%rbp),%rax
   1803d1e47:	8b 8d c8 07 00 00    	mov    0x7c8(%rbp),%ecx
   1803d1e4d:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d1e52:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d1e57:	48 85 c0             	test   %rax,%rax
   1803d1e5a:	74 51                	je     0x1803d1ead
   1803d1e5c:	48 85 c9             	test   %rcx,%rcx
   1803d1e5f:	74 4c                	je     0x1803d1ead
   1803d1e61:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d1e66:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d1e6b:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d1e70:	48 c7 44 24 38 50 00 	movq   $0x50,0x38(%rsp)
   1803d1e77:	00 00 
   1803d1e79:	e8 82 ff df ff       	call   0x1801d1e00
   1803d1e7e:	48 8b d8             	mov    %rax,%rbx
   1803d1e81:	48 85 c0             	test   %rax,%rax
   1803d1e84:	75 0c                	jne    0x1803d1e92
   1803d1e86:	4c 8b cf             	mov    %rdi,%r9
   1803d1e89:	48 8d 0d 48 43 4d 00 	lea    0x4d4348(%rip),%rcx        # 0x1808a61d8
   1803d1e90:	eb 29                	jmp    0x1803d1ebb
   1803d1e92:	4c 8b c8             	mov    %rax,%r9
   1803d1e95:	48 8d 15 ec da 32 00 	lea    0x32daec(%rip),%rdx        # 0x1806ff988
   1803d1e9c:	4c 8b c7             	mov    %rdi,%r8
   1803d1e9f:	48 8d 0d 8a 03 30 00 	lea    0x30038a(%rip),%rcx        # 0x1806d2230
   1803d1ea6:	e8 c5 84 ff ff       	call   0x1803ca370
   1803d1eab:	eb 2a                	jmp    0x1803d1ed7
   1803d1ead:	4c 8d 0d 8f 97 1b 00 	lea    0x1b978f(%rip),%r9        # 0x18058b643
   1803d1eb4:	48 8d 0d 45 43 4d 00 	lea    0x4d4345(%rip),%rcx        # 0x1808a6200
   1803d1ebb:	ff 05 7f f9 d3 00    	incl   0xd3f97f(%rip)        # 0x181111840
   1803d1ec1:	4c 8d 05 c0 da 32 00 	lea    0x32dac0(%rip),%r8        # 0x1806ff988
   1803d1ec8:	48 8d 15 61 03 30 00 	lea    0x300361(%rip),%rdx        # 0x1806d2230
   1803d1ecf:	e8 8c 06 ee ff       	call   0x1802b2560
   1803d1ed4:	49 8b de             	mov    %r14,%rbx
   1803d1ed7:	ff 05 67 f9 d3 00    	incl   0xd3f967(%rip)        # 0x181111844
   1803d1edd:	48 8d 3d 6c 1a 4d 00 	lea    0x4d1a6c(%rip),%rdi        # 0x1808a3950
   1803d1ee4:	4c 8b c7             	mov    %rdi,%r8
   1803d1ee7:	48 89 1d 62 fe 58 00 	mov    %rbx,0x58fe62(%rip)        # 0x180961d50
   1803d1eee:	45 33 c9             	xor    %r9d,%r9d
   1803d1ef1:	48 8d 15 58 4c 4d 00 	lea    0x4d4c58(%rip),%rdx        # 0x1808a6b50
   1803d1ef8:	48 8d 0d 31 03 30 00 	lea    0x300331(%rip),%rcx        # 0x1806d2230
   1803d1eff:	e8 6c 84 ff ff       	call   0x1803ca370
   1803d1f04:	48 8d 0d 25 03 30 00 	lea    0x300325(%rip),%rcx        # 0x1806d2230
   1803d1f0b:	ff 15 6f 92 19 00    	call   *0x19926f(%rip)        # 0x18056b180
   1803d1f11:	48 8b d8             	mov    %rax,%rbx
   1803d1f14:	48 85 c0             	test   %rax,%rax
   1803d1f17:	0f 84 a3 00 00 00    	je     0x1803d1fc0
   1803d1f1d:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d1f20:	33 c0                	xor    %eax,%eax
   1803d1f22:	0f 11 85 d8 07 00 00 	movups %xmm0,0x7d8(%rbp)
   1803d1f29:	48 89 85 e8 07 00 00 	mov    %rax,0x7e8(%rbp)
   1803d1f30:	ff 15 5a 93 19 00    	call   *0x19935a(%rip)        # 0x18056b290
   1803d1f36:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d1f3c:	4c 8d 85 d8 07 00 00 	lea    0x7d8(%rbp),%r8
   1803d1f43:	48 8b c8             	mov    %rax,%rcx
   1803d1f46:	48 8b d3             	mov    %rbx,%rdx
   1803d1f49:	ff 15 49 93 19 00    	call   *0x199349(%rip)        # 0x18056b298
   1803d1f4f:	85 c0                	test   %eax,%eax
   1803d1f51:	74 6d                	je     0x1803d1fc0
   1803d1f53:	48 8b 85 d8 07 00 00 	mov    0x7d8(%rbp),%rax
   1803d1f5a:	8b 8d e0 07 00 00    	mov    0x7e0(%rbp),%ecx
   1803d1f60:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d1f65:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d1f6a:	48 85 c0             	test   %rax,%rax
   1803d1f6d:	74 51                	je     0x1803d1fc0
   1803d1f6f:	48 85 c9             	test   %rcx,%rcx
   1803d1f72:	74 4c                	je     0x1803d1fc0
   1803d1f74:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d1f79:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d1f7e:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d1f83:	48 c7 44 24 38 7f 00 	movq   $0x7f,0x38(%rsp)
   1803d1f8a:	00 00 
   1803d1f8c:	e8 6f fe df ff       	call   0x1801d1e00
   1803d1f91:	48 8b d8             	mov    %rax,%rbx
   1803d1f94:	48 85 c0             	test   %rax,%rax
   1803d1f97:	75 0c                	jne    0x1803d1fa5
   1803d1f99:	4c 8b cf             	mov    %rdi,%r9
   1803d1f9c:	48 8d 0d 35 42 4d 00 	lea    0x4d4235(%rip),%rcx        # 0x1808a61d8
   1803d1fa3:	eb 29                	jmp    0x1803d1fce
   1803d1fa5:	4c 8b c8             	mov    %rax,%r9
   1803d1fa8:	48 8d 15 a1 4b 4d 00 	lea    0x4d4ba1(%rip),%rdx        # 0x1808a6b50
   1803d1faf:	4c 8b c7             	mov    %rdi,%r8
   1803d1fb2:	48 8d 0d 77 02 30 00 	lea    0x300277(%rip),%rcx        # 0x1806d2230
   1803d1fb9:	e8 b2 83 ff ff       	call   0x1803ca370
   1803d1fbe:	eb 2a                	jmp    0x1803d1fea
   1803d1fc0:	4c 8d 0d 7c 96 1b 00 	lea    0x1b967c(%rip),%r9        # 0x18058b643
   1803d1fc7:	48 8d 0d 32 42 4d 00 	lea    0x4d4232(%rip),%rcx        # 0x1808a6200
   1803d1fce:	ff 05 6c f8 d3 00    	incl   0xd3f86c(%rip)        # 0x181111840
   1803d1fd4:	4c 8d 05 75 4b 4d 00 	lea    0x4d4b75(%rip),%r8        # 0x1808a6b50
   1803d1fdb:	48 8d 15 4e 02 30 00 	lea    0x30024e(%rip),%rdx        # 0x1806d2230
   1803d1fe2:	e8 79 05 ee ff       	call   0x1802b2560
   1803d1fe7:	49 8b de             	mov    %r14,%rbx
   1803d1fea:	ff 05 54 f8 d3 00    	incl   0xd3f854(%rip)        # 0x181111844
   1803d1ff0:	48 8d 3d 59 14 4d 00 	lea    0x4d1459(%rip),%rdi        # 0x1808a3450
   1803d1ff7:	4c 8b c7             	mov    %rdi,%r8
   1803d1ffa:	48 89 1d 57 fd 58 00 	mov    %rbx,0x58fd57(%rip)        # 0x180961d58
   1803d2001:	45 33 c9             	xor    %r9d,%r9d
   1803d2004:	48 8d 15 2d 4b 4d 00 	lea    0x4d4b2d(%rip),%rdx        # 0x1808a6b38
   1803d200b:	48 8d 0d 1e 02 30 00 	lea    0x30021e(%rip),%rcx        # 0x1806d2230
   1803d2012:	e8 59 83 ff ff       	call   0x1803ca370
   1803d2017:	48 8d 0d 12 02 30 00 	lea    0x300212(%rip),%rcx        # 0x1806d2230
   1803d201e:	ff 15 5c 91 19 00    	call   *0x19915c(%rip)        # 0x18056b180
   1803d2024:	48 8b d8             	mov    %rax,%rbx
   1803d2027:	48 85 c0             	test   %rax,%rax
   1803d202a:	0f 84 a3 00 00 00    	je     0x1803d20d3
   1803d2030:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d2033:	33 c0                	xor    %eax,%eax
   1803d2035:	0f 11 85 f0 07 00 00 	movups %xmm0,0x7f0(%rbp)
   1803d203c:	48 89 85 00 08 00 00 	mov    %rax,0x800(%rbp)
   1803d2043:	ff 15 47 92 19 00    	call   *0x199247(%rip)        # 0x18056b290
   1803d2049:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d204f:	4c 8d 85 f0 07 00 00 	lea    0x7f0(%rbp),%r8
   1803d2056:	48 8b c8             	mov    %rax,%rcx
   1803d2059:	48 8b d3             	mov    %rbx,%rdx
   1803d205c:	ff 15 36 92 19 00    	call   *0x199236(%rip)        # 0x18056b298
   1803d2062:	85 c0                	test   %eax,%eax
   1803d2064:	74 6d                	je     0x1803d20d3
   1803d2066:	48 8b 85 f0 07 00 00 	mov    0x7f0(%rbp),%rax
   1803d206d:	8b 8d f8 07 00 00    	mov    0x7f8(%rbp),%ecx
   1803d2073:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d2078:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d207d:	48 85 c0             	test   %rax,%rax
   1803d2080:	74 51                	je     0x1803d20d3
   1803d2082:	48 85 c9             	test   %rcx,%rcx
   1803d2085:	74 4c                	je     0x1803d20d3
   1803d2087:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d208c:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d2091:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d2096:	48 c7 44 24 38 47 00 	movq   $0x47,0x38(%rsp)
   1803d209d:	00 00 
   1803d209f:	e8 5c fd df ff       	call   0x1801d1e00
   1803d20a4:	48 8b d8             	mov    %rax,%rbx
   1803d20a7:	48 85 c0             	test   %rax,%rax
   1803d20aa:	75 0c                	jne    0x1803d20b8
   1803d20ac:	4c 8b cf             	mov    %rdi,%r9
   1803d20af:	48 8d 0d 22 41 4d 00 	lea    0x4d4122(%rip),%rcx        # 0x1808a61d8
   1803d20b6:	eb 29                	jmp    0x1803d20e1
   1803d20b8:	4c 8b c8             	mov    %rax,%r9
   1803d20bb:	48 8d 15 76 4a 4d 00 	lea    0x4d4a76(%rip),%rdx        # 0x1808a6b38
   1803d20c2:	4c 8b c7             	mov    %rdi,%r8
   1803d20c5:	48 8d 0d 64 01 30 00 	lea    0x300164(%rip),%rcx        # 0x1806d2230
   1803d20cc:	e8 9f 82 ff ff       	call   0x1803ca370
   1803d20d1:	eb 2a                	jmp    0x1803d20fd
   1803d20d3:	4c 8d 0d 69 95 1b 00 	lea    0x1b9569(%rip),%r9        # 0x18058b643
   1803d20da:	48 8d 0d 1f 41 4d 00 	lea    0x4d411f(%rip),%rcx        # 0x1808a6200
   1803d20e1:	ff 05 59 f7 d3 00    	incl   0xd3f759(%rip)        # 0x181111840
   1803d20e7:	4c 8d 05 4a 4a 4d 00 	lea    0x4d4a4a(%rip),%r8        # 0x1808a6b38
   1803d20ee:	48 8d 15 3b 01 30 00 	lea    0x30013b(%rip),%rdx        # 0x1806d2230
   1803d20f5:	e8 66 04 ee ff       	call   0x1802b2560
   1803d20fa:	49 8b de             	mov    %r14,%rbx
   1803d20fd:	ff 05 41 f7 d3 00    	incl   0xd3f741(%rip)        # 0x181111844
   1803d2103:	48 8d 3d 16 14 4d 00 	lea    0x4d1416(%rip),%rdi        # 0x1808a3520
   1803d210a:	4c 8b c7             	mov    %rdi,%r8
   1803d210d:	48 89 1d 4c fc 58 00 	mov    %rbx,0x58fc4c(%rip)        # 0x180961d60
   1803d2114:	45 33 c9             	xor    %r9d,%r9d
   1803d2117:	48 8d 15 0a d9 32 00 	lea    0x32d90a(%rip),%rdx        # 0x1806ffa28
   1803d211e:	48 8d 0d 63 f0 4c 00 	lea    0x4cf063(%rip),%rcx        # 0x1808a1188
   1803d2125:	e8 46 82 ff ff       	call   0x1803ca370
   1803d212a:	48 8d 0d 57 f0 4c 00 	lea    0x4cf057(%rip),%rcx        # 0x1808a1188
   1803d2131:	ff 15 49 90 19 00    	call   *0x199049(%rip)        # 0x18056b180
   1803d2137:	48 8b d8             	mov    %rax,%rbx
   1803d213a:	48 85 c0             	test   %rax,%rax
   1803d213d:	0f 84 a3 00 00 00    	je     0x1803d21e6
   1803d2143:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d2146:	33 c0                	xor    %eax,%eax
   1803d2148:	0f 11 85 08 08 00 00 	movups %xmm0,0x808(%rbp)
   1803d214f:	48 89 85 18 08 00 00 	mov    %rax,0x818(%rbp)
   1803d2156:	ff 15 34 91 19 00    	call   *0x199134(%rip)        # 0x18056b290
   1803d215c:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d2162:	4c 8d 85 08 08 00 00 	lea    0x808(%rbp),%r8
   1803d2169:	48 8b c8             	mov    %rax,%rcx
   1803d216c:	48 8b d3             	mov    %rbx,%rdx
   1803d216f:	ff 15 23 91 19 00    	call   *0x199123(%rip)        # 0x18056b298
   1803d2175:	85 c0                	test   %eax,%eax
   1803d2177:	74 6d                	je     0x1803d21e6
   1803d2179:	48 8b 85 08 08 00 00 	mov    0x808(%rbp),%rax
   1803d2180:	8b 8d 10 08 00 00    	mov    0x810(%rbp),%ecx
   1803d2186:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d218b:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d2190:	48 85 c0             	test   %rax,%rax
   1803d2193:	74 51                	je     0x1803d21e6
   1803d2195:	48 85 c9             	test   %rcx,%rcx
   1803d2198:	74 4c                	je     0x1803d21e6
   1803d219a:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d219f:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d21a4:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d21a9:	48 c7 44 24 38 c0 00 	movq   $0xc0,0x38(%rsp)
   1803d21b0:	00 00 
   1803d21b2:	e8 49 fc df ff       	call   0x1801d1e00
   1803d21b7:	48 8b d8             	mov    %rax,%rbx
   1803d21ba:	48 85 c0             	test   %rax,%rax
   1803d21bd:	75 0c                	jne    0x1803d21cb
   1803d21bf:	4c 8b cf             	mov    %rdi,%r9
   1803d21c2:	48 8d 0d 0f 40 4d 00 	lea    0x4d400f(%rip),%rcx        # 0x1808a61d8
   1803d21c9:	eb 29                	jmp    0x1803d21f4
   1803d21cb:	4c 8b c8             	mov    %rax,%r9
   1803d21ce:	48 8d 15 53 d8 32 00 	lea    0x32d853(%rip),%rdx        # 0x1806ffa28
   1803d21d5:	4c 8b c7             	mov    %rdi,%r8
   1803d21d8:	48 8d 0d a9 ef 4c 00 	lea    0x4cefa9(%rip),%rcx        # 0x1808a1188
   1803d21df:	e8 8c 81 ff ff       	call   0x1803ca370
   1803d21e4:	eb 2a                	jmp    0x1803d2210
   1803d21e6:	4c 8d 0d 56 94 1b 00 	lea    0x1b9456(%rip),%r9        # 0x18058b643
   1803d21ed:	48 8d 0d 0c 40 4d 00 	lea    0x4d400c(%rip),%rcx        # 0x1808a6200
   1803d21f4:	ff 05 46 f6 d3 00    	incl   0xd3f646(%rip)        # 0x181111840
   1803d21fa:	4c 8d 05 27 d8 32 00 	lea    0x32d827(%rip),%r8        # 0x1806ffa28
   1803d2201:	48 8d 15 80 ef 4c 00 	lea    0x4cef80(%rip),%rdx        # 0x1808a1188
   1803d2208:	e8 53 03 ee ff       	call   0x1802b2560
   1803d220d:	49 8b de             	mov    %r14,%rbx
   1803d2210:	ff 05 2e f6 d3 00    	incl   0xd3f62e(%rip)        # 0x181111844
   1803d2216:	48 8d 3d 83 12 4d 00 	lea    0x4d1283(%rip),%rdi        # 0x1808a34a0
   1803d221d:	4c 8b c7             	mov    %rdi,%r8
   1803d2220:	48 89 1d 41 fb 58 00 	mov    %rbx,0x58fb41(%rip)        # 0x180961d68
   1803d2227:	45 33 c9             	xor    %r9d,%r9d
   1803d222a:	48 8d 15 df d7 32 00 	lea    0x32d7df(%rip),%rdx        # 0x1806ffa10
   1803d2231:	48 8d 0d 50 ef 4c 00 	lea    0x4cef50(%rip),%rcx        # 0x1808a1188
   1803d2238:	e8 33 81 ff ff       	call   0x1803ca370
   1803d223d:	48 8d 0d 44 ef 4c 00 	lea    0x4cef44(%rip),%rcx        # 0x1808a1188
   1803d2244:	ff 15 36 8f 19 00    	call   *0x198f36(%rip)        # 0x18056b180
   1803d224a:	48 8b d8             	mov    %rax,%rbx
   1803d224d:	48 85 c0             	test   %rax,%rax
   1803d2250:	0f 84 a3 00 00 00    	je     0x1803d22f9
   1803d2256:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d2259:	33 c0                	xor    %eax,%eax
   1803d225b:	0f 11 85 20 08 00 00 	movups %xmm0,0x820(%rbp)
   1803d2262:	48 89 85 30 08 00 00 	mov    %rax,0x830(%rbp)
   1803d2269:	ff 15 21 90 19 00    	call   *0x199021(%rip)        # 0x18056b290
   1803d226f:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d2275:	4c 8d 85 20 08 00 00 	lea    0x820(%rbp),%r8
   1803d227c:	48 8b c8             	mov    %rax,%rcx
   1803d227f:	48 8b d3             	mov    %rbx,%rdx
   1803d2282:	ff 15 10 90 19 00    	call   *0x199010(%rip)        # 0x18056b298
   1803d2288:	85 c0                	test   %eax,%eax
   1803d228a:	74 6d                	je     0x1803d22f9
   1803d228c:	48 8b 85 20 08 00 00 	mov    0x820(%rbp),%rax
   1803d2293:	8b 8d 28 08 00 00    	mov    0x828(%rbp),%ecx
   1803d2299:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d229e:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d22a3:	48 85 c0             	test   %rax,%rax
   1803d22a6:	74 51                	je     0x1803d22f9
   1803d22a8:	48 85 c9             	test   %rcx,%rcx
   1803d22ab:	74 4c                	je     0x1803d22f9
   1803d22ad:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d22b2:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d22b7:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d22bc:	48 c7 44 24 38 71 00 	movq   $0x71,0x38(%rsp)
   1803d22c3:	00 00 
   1803d22c5:	e8 36 fb df ff       	call   0x1801d1e00
   1803d22ca:	48 8b d8             	mov    %rax,%rbx
   1803d22cd:	48 85 c0             	test   %rax,%rax
   1803d22d0:	75 0c                	jne    0x1803d22de
   1803d22d2:	4c 8b cf             	mov    %rdi,%r9
   1803d22d5:	48 8d 0d fc 3e 4d 00 	lea    0x4d3efc(%rip),%rcx        # 0x1808a61d8
   1803d22dc:	eb 29                	jmp    0x1803d2307
   1803d22de:	4c 8b c8             	mov    %rax,%r9
   1803d22e1:	48 8d 15 28 d7 32 00 	lea    0x32d728(%rip),%rdx        # 0x1806ffa10
   1803d22e8:	4c 8b c7             	mov    %rdi,%r8
   1803d22eb:	48 8d 0d 96 ee 4c 00 	lea    0x4cee96(%rip),%rcx        # 0x1808a1188
   1803d22f2:	e8 79 80 ff ff       	call   0x1803ca370
   1803d22f7:	eb 2a                	jmp    0x1803d2323
   1803d22f9:	4c 8d 0d 43 93 1b 00 	lea    0x1b9343(%rip),%r9        # 0x18058b643
   1803d2300:	48 8d 0d f9 3e 4d 00 	lea    0x4d3ef9(%rip),%rcx        # 0x1808a6200
   1803d2307:	ff 05 33 f5 d3 00    	incl   0xd3f533(%rip)        # 0x181111840
   1803d230d:	4c 8d 05 fc d6 32 00 	lea    0x32d6fc(%rip),%r8        # 0x1806ffa10
   1803d2314:	48 8d 15 6d ee 4c 00 	lea    0x4cee6d(%rip),%rdx        # 0x1808a1188
   1803d231b:	e8 40 02 ee ff       	call   0x1802b2560
   1803d2320:	49 8b de             	mov    %r14,%rbx
   1803d2323:	ff 05 1b f5 d3 00    	incl   0xd3f51b(%rip)        # 0x181111844
   1803d2329:	48 8d 3d c0 12 4d 00 	lea    0x4d12c0(%rip),%rdi        # 0x1808a35f0
   1803d2330:	4c 8b c7             	mov    %rdi,%r8
   1803d2333:	48 89 1d 36 fa 58 00 	mov    %rbx,0x58fa36(%rip)        # 0x180961d70
   1803d233a:	45 33 c9             	xor    %r9d,%r9d
   1803d233d:	48 8d 15 b4 d6 32 00 	lea    0x32d6b4(%rip),%rdx        # 0x1806ff9f8
   1803d2344:	48 8d 0d e5 fe 2f 00 	lea    0x2ffee5(%rip),%rcx        # 0x1806d2230
   1803d234b:	e8 20 80 ff ff       	call   0x1803ca370
   1803d2350:	48 8d 0d d9 fe 2f 00 	lea    0x2ffed9(%rip),%rcx        # 0x1806d2230
   1803d2357:	ff 15 23 8e 19 00    	call   *0x198e23(%rip)        # 0x18056b180
   1803d235d:	48 8b d8             	mov    %rax,%rbx
   1803d2360:	48 85 c0             	test   %rax,%rax
   1803d2363:	0f 84 a3 00 00 00    	je     0x1803d240c
   1803d2369:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d236c:	33 c0                	xor    %eax,%eax
   1803d236e:	0f 11 85 38 08 00 00 	movups %xmm0,0x838(%rbp)
   1803d2375:	48 89 85 48 08 00 00 	mov    %rax,0x848(%rbp)
   1803d237c:	ff 15 0e 8f 19 00    	call   *0x198f0e(%rip)        # 0x18056b290
   1803d2382:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d2388:	4c 8d 85 38 08 00 00 	lea    0x838(%rbp),%r8
   1803d238f:	48 8b c8             	mov    %rax,%rcx
   1803d2392:	48 8b d3             	mov    %rbx,%rdx
   1803d2395:	ff 15 fd 8e 19 00    	call   *0x198efd(%rip)        # 0x18056b298
   1803d239b:	85 c0                	test   %eax,%eax
   1803d239d:	74 6d                	je     0x1803d240c
   1803d239f:	48 8b 85 38 08 00 00 	mov    0x838(%rbp),%rax
   1803d23a6:	8b 8d 40 08 00 00    	mov    0x840(%rbp),%ecx
   1803d23ac:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d23b1:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d23b6:	48 85 c0             	test   %rax,%rax
   1803d23b9:	74 51                	je     0x1803d240c
   1803d23bb:	48 85 c9             	test   %rcx,%rcx
   1803d23be:	74 4c                	je     0x1803d240c
   1803d23c0:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d23c5:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d23ca:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d23cf:	48 c7 44 24 38 6b 00 	movq   $0x6b,0x38(%rsp)
   1803d23d6:	00 00 
   1803d23d8:	e8 23 fa df ff       	call   0x1801d1e00
   1803d23dd:	48 8b d8             	mov    %rax,%rbx
   1803d23e0:	48 85 c0             	test   %rax,%rax
   1803d23e3:	75 0c                	jne    0x1803d23f1
   1803d23e5:	4c 8b cf             	mov    %rdi,%r9
   1803d23e8:	48 8d 0d e9 3d 4d 00 	lea    0x4d3de9(%rip),%rcx        # 0x1808a61d8
   1803d23ef:	eb 29                	jmp    0x1803d241a
   1803d23f1:	4c 8b c8             	mov    %rax,%r9
   1803d23f4:	48 8d 15 fd d5 32 00 	lea    0x32d5fd(%rip),%rdx        # 0x1806ff9f8
   1803d23fb:	4c 8b c7             	mov    %rdi,%r8
   1803d23fe:	48 8d 0d 2b fe 2f 00 	lea    0x2ffe2b(%rip),%rcx        # 0x1806d2230
   1803d2405:	e8 66 7f ff ff       	call   0x1803ca370
   1803d240a:	eb 2a                	jmp    0x1803d2436
   1803d240c:	4c 8d 0d 30 92 1b 00 	lea    0x1b9230(%rip),%r9        # 0x18058b643
   1803d2413:	48 8d 0d e6 3d 4d 00 	lea    0x4d3de6(%rip),%rcx        # 0x1808a6200
   1803d241a:	ff 05 20 f4 d3 00    	incl   0xd3f420(%rip)        # 0x181111840
   1803d2420:	4c 8d 05 d1 d5 32 00 	lea    0x32d5d1(%rip),%r8        # 0x1806ff9f8
   1803d2427:	48 8d 15 02 fe 2f 00 	lea    0x2ffe02(%rip),%rdx        # 0x1806d2230
   1803d242e:	e8 2d 01 ee ff       	call   0x1802b2560
   1803d2433:	49 8b de             	mov    %r14,%rbx
   1803d2436:	ff 05 08 f4 d3 00    	incl   0xd3f408(%rip)        # 0x181111844
   1803d243c:	48 8d 3d ad 0f 4d 00 	lea    0x4d0fad(%rip),%rdi        # 0x1808a33f0
   1803d2443:	4c 8b c7             	mov    %rdi,%r8
   1803d2446:	48 89 1d 2b f9 58 00 	mov    %rbx,0x58f92b(%rip)        # 0x180961d78
   1803d244d:	45 33 c9             	xor    %r9d,%r9d
   1803d2450:	48 8d 15 c9 46 4d 00 	lea    0x4d46c9(%rip),%rdx        # 0x1808a6b20
   1803d2457:	48 8d 0d d2 fd 2f 00 	lea    0x2ffdd2(%rip),%rcx        # 0x1806d2230
   1803d245e:	e8 0d 7f ff ff       	call   0x1803ca370
   1803d2463:	48 8d 0d c6 fd 2f 00 	lea    0x2ffdc6(%rip),%rcx        # 0x1806d2230
   1803d246a:	ff 15 10 8d 19 00    	call   *0x198d10(%rip)        # 0x18056b180
   1803d2470:	48 8b d8             	mov    %rax,%rbx
   1803d2473:	48 85 c0             	test   %rax,%rax
   1803d2476:	0f 84 c1 00 00 00    	je     0x1803d253d
   1803d247c:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d247f:	33 c0                	xor    %eax,%eax
   1803d2481:	0f 11 85 50 08 00 00 	movups %xmm0,0x850(%rbp)
   1803d2488:	48 89 85 60 08 00 00 	mov    %rax,0x860(%rbp)
   1803d248f:	ff 15 fb 8d 19 00    	call   *0x198dfb(%rip)        # 0x18056b290
   1803d2495:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d249b:	4c 8d 85 50 08 00 00 	lea    0x850(%rbp),%r8
   1803d24a2:	48 8b c8             	mov    %rax,%rcx
   1803d24a5:	48 8b d3             	mov    %rbx,%rdx
   1803d24a8:	ff 15 ea 8d 19 00    	call   *0x198dea(%rip)        # 0x18056b298
   1803d24ae:	85 c0                	test   %eax,%eax
   1803d24b0:	0f 84 87 00 00 00    	je     0x1803d253d
   1803d24b6:	48 8b 85 50 08 00 00 	mov    0x850(%rbp),%rax
   1803d24bd:	8b 8d 58 08 00 00    	mov    0x858(%rbp),%ecx
   1803d24c3:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d24c8:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d24cd:	48 85 c0             	test   %rax,%rax
   1803d24d0:	74 6b                	je     0x1803d253d
   1803d24d2:	48 85 c9             	test   %rcx,%rcx
   1803d24d5:	74 66                	je     0x1803d253d
   1803d24d7:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d24dc:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d24e1:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d24e6:	48 c7 44 24 38 52 00 	movq   $0x52,0x38(%rsp)
   1803d24ed:	00 00 
   1803d24ef:	e8 0c f9 df ff       	call   0x1801d1e00
   1803d24f4:	48 8b d8             	mov    %rax,%rbx
   1803d24f7:	48 85 c0             	test   %rax,%rax
   1803d24fa:	75 0c                	jne    0x1803d2508
   1803d24fc:	4c 8b cf             	mov    %rdi,%r9
   1803d24ff:	48 8d 0d d2 3c 4d 00 	lea    0x4d3cd2(%rip),%rcx        # 0x1808a61d8
   1803d2506:	eb 43                	jmp    0x1803d254b
   1803d2508:	4c 8b cb             	mov    %rbx,%r9
   1803d250b:	48 8d 15 0e 46 4d 00 	lea    0x4d460e(%rip),%rdx        # 0x1808a6b20
   1803d2512:	4c 8b c7             	mov    %rdi,%r8
   1803d2515:	48 8d 0d 14 fd 2f 00 	lea    0x2ffd14(%rip),%rcx        # 0x1806d2230
   1803d251c:	e8 4f 7e ff ff       	call   0x1803ca370
   1803d2521:	ba 02 00 00 00       	mov    $0x2,%edx
   1803d2526:	41 b8 06 00 00 00    	mov    $0x6,%r8d
   1803d252c:	48 8b cb             	mov    %rbx,%rcx
   1803d252f:	e8 ec fb df ff       	call   0x1801d2120
   1803d2534:	48 89 05 45 f8 58 00 	mov    %rax,0x58f845(%rip)        # 0x180961d80
   1803d253b:	eb 27                	jmp    0x1803d2564
   1803d253d:	4c 8d 0d ff 90 1b 00 	lea    0x1b90ff(%rip),%r9        # 0x18058b643
   1803d2544:	48 8d 0d b5 3c 4d 00 	lea    0x4d3cb5(%rip),%rcx        # 0x1808a6200
   1803d254b:	ff 05 ef f2 d3 00    	incl   0xd3f2ef(%rip)        # 0x181111840
   1803d2551:	4c 8d 05 c8 45 4d 00 	lea    0x4d45c8(%rip),%r8        # 0x1808a6b20
   1803d2558:	48 8d 15 d1 fc 2f 00 	lea    0x2ffcd1(%rip),%rdx        # 0x1806d2230
   1803d255f:	e8 fc ff ed ff       	call   0x1802b2560
   1803d2564:	ff 05 da f2 d3 00    	incl   0xd3f2da(%rip)        # 0x181111844
   1803d256a:	48 8d 3d ff 0d 4d 00 	lea    0x4d0dff(%rip),%rdi        # 0x1808a3370
   1803d2571:	4c 8b c7             	mov    %rdi,%r8
   1803d2574:	48 8d 15 8d 45 4d 00 	lea    0x4d458d(%rip),%rdx        # 0x1808a6b08
   1803d257b:	45 33 c9             	xor    %r9d,%r9d
   1803d257e:	48 8d 0d ab fc 2f 00 	lea    0x2ffcab(%rip),%rcx        # 0x1806d2230
   1803d2585:	e8 e6 7d ff ff       	call   0x1803ca370
   1803d258a:	48 8d 0d 9f fc 2f 00 	lea    0x2ffc9f(%rip),%rcx        # 0x1806d2230
   1803d2591:	ff 15 e9 8b 19 00    	call   *0x198be9(%rip)        # 0x18056b180
   1803d2597:	48 8b d8             	mov    %rax,%rbx
   1803d259a:	48 85 c0             	test   %rax,%rax
   1803d259d:	0f 84 c1 00 00 00    	je     0x1803d2664
   1803d25a3:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d25a6:	33 c0                	xor    %eax,%eax
   1803d25a8:	0f 11 85 68 08 00 00 	movups %xmm0,0x868(%rbp)
   1803d25af:	48 89 85 78 08 00 00 	mov    %rax,0x878(%rbp)
   1803d25b6:	ff 15 d4 8c 19 00    	call   *0x198cd4(%rip)        # 0x18056b290
   1803d25bc:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d25c2:	4c 8d 85 68 08 00 00 	lea    0x868(%rbp),%r8
   1803d25c9:	48 8b c8             	mov    %rax,%rcx
   1803d25cc:	48 8b d3             	mov    %rbx,%rdx
   1803d25cf:	ff 15 c3 8c 19 00    	call   *0x198cc3(%rip)        # 0x18056b298
   1803d25d5:	85 c0                	test   %eax,%eax
   1803d25d7:	0f 84 87 00 00 00    	je     0x1803d2664
   1803d25dd:	48 8b 85 68 08 00 00 	mov    0x868(%rbp),%rax
   1803d25e4:	8b 8d 70 08 00 00    	mov    0x870(%rbp),%ecx
   1803d25ea:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d25ef:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d25f4:	48 85 c0             	test   %rax,%rax
   1803d25f7:	74 6b                	je     0x1803d2664
   1803d25f9:	48 85 c9             	test   %rcx,%rcx
   1803d25fc:	74 66                	je     0x1803d2664
   1803d25fe:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d2603:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d2608:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d260d:	48 c7 44 24 38 78 00 	movq   $0x78,0x38(%rsp)
   1803d2614:	00 00 
   1803d2616:	e8 e5 f7 df ff       	call   0x1801d1e00
   1803d261b:	48 8b d8             	mov    %rax,%rbx
   1803d261e:	48 85 c0             	test   %rax,%rax
   1803d2621:	75 0c                	jne    0x1803d262f
   1803d2623:	4c 8b cf             	mov    %rdi,%r9
   1803d2626:	48 8d 0d ab 3b 4d 00 	lea    0x4d3bab(%rip),%rcx        # 0x1808a61d8
   1803d262d:	eb 43                	jmp    0x1803d2672
   1803d262f:	4c 8b cb             	mov    %rbx,%r9
   1803d2632:	48 8d 15 cf 44 4d 00 	lea    0x4d44cf(%rip),%rdx        # 0x1808a6b08
   1803d2639:	4c 8b c7             	mov    %rdi,%r8
   1803d263c:	48 8d 0d ed fb 2f 00 	lea    0x2ffbed(%rip),%rcx        # 0x1806d2230
   1803d2643:	e8 28 7d ff ff       	call   0x1803ca370
   1803d2648:	ba 04 00 00 00       	mov    $0x4,%edx
   1803d264d:	41 b8 08 00 00 00    	mov    $0x8,%r8d
   1803d2653:	48 8b cb             	mov    %rbx,%rcx
   1803d2656:	e8 c5 fa df ff       	call   0x1801d2120
   1803d265b:	48 89 05 26 f7 58 00 	mov    %rax,0x58f726(%rip)        # 0x180961d88
   1803d2662:	eb 27                	jmp    0x1803d268b
   1803d2664:	4c 8d 0d d8 8f 1b 00 	lea    0x1b8fd8(%rip),%r9        # 0x18058b643
   1803d266b:	48 8d 0d 8e 3b 4d 00 	lea    0x4d3b8e(%rip),%rcx        # 0x1808a6200
   1803d2672:	ff 05 c8 f1 d3 00    	incl   0xd3f1c8(%rip)        # 0x181111840
   1803d2678:	4c 8d 05 89 44 4d 00 	lea    0x4d4489(%rip),%r8        # 0x1808a6b08
   1803d267f:	48 8d 15 aa fb 2f 00 	lea    0x2ffbaa(%rip),%rdx        # 0x1806d2230
   1803d2686:	e8 d5 fe ed ff       	call   0x1802b2560
   1803d268b:	ff 05 b3 f1 d3 00    	incl   0xd3f1b3(%rip)        # 0x181111844
   1803d2691:	48 8d 3d 38 13 4d 00 	lea    0x4d1338(%rip),%rdi        # 0x1808a39d0
   1803d2698:	4c 8b c7             	mov    %rdi,%r8
   1803d269b:	48 8d 15 b6 45 4d 00 	lea    0x4d45b6(%rip),%rdx        # 0x1808a6c58
   1803d26a2:	45 33 c9             	xor    %r9d,%r9d
   1803d26a5:	48 8d 0d 84 fb 2f 00 	lea    0x2ffb84(%rip),%rcx        # 0x1806d2230
   1803d26ac:	e8 bf 7c ff ff       	call   0x1803ca370
   1803d26b1:	48 8d 0d 78 fb 2f 00 	lea    0x2ffb78(%rip),%rcx        # 0x1806d2230
   1803d26b8:	ff 15 c2 8a 19 00    	call   *0x198ac2(%rip)        # 0x18056b180
   1803d26be:	48 8b d8             	mov    %rax,%rbx
   1803d26c1:	48 85 c0             	test   %rax,%rax
   1803d26c4:	0f 84 c1 00 00 00    	je     0x1803d278b
   1803d26ca:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d26cd:	33 c0                	xor    %eax,%eax
   1803d26cf:	0f 11 85 80 08 00 00 	movups %xmm0,0x880(%rbp)
   1803d26d6:	48 89 85 90 08 00 00 	mov    %rax,0x890(%rbp)
   1803d26dd:	ff 15 ad 8b 19 00    	call   *0x198bad(%rip)        # 0x18056b290
   1803d26e3:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d26e9:	4c 8d 85 80 08 00 00 	lea    0x880(%rbp),%r8
   1803d26f0:	48 8b c8             	mov    %rax,%rcx
   1803d26f3:	48 8b d3             	mov    %rbx,%rdx
   1803d26f6:	ff 15 9c 8b 19 00    	call   *0x198b9c(%rip)        # 0x18056b298
   1803d26fc:	85 c0                	test   %eax,%eax
   1803d26fe:	0f 84 87 00 00 00    	je     0x1803d278b
   1803d2704:	48 8b 85 80 08 00 00 	mov    0x880(%rbp),%rax
   1803d270b:	8b 8d 88 08 00 00    	mov    0x888(%rbp),%ecx
   1803d2711:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d2716:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d271b:	48 85 c0             	test   %rax,%rax
   1803d271e:	74 6b                	je     0x1803d278b
   1803d2720:	48 85 c9             	test   %rcx,%rcx
   1803d2723:	74 66                	je     0x1803d278b
   1803d2725:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d272a:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d272f:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d2734:	48 c7 44 24 38 3f 00 	movq   $0x3f,0x38(%rsp)
   1803d273b:	00 00 
   1803d273d:	e8 be f6 df ff       	call   0x1801d1e00
   1803d2742:	48 8b d8             	mov    %rax,%rbx
   1803d2745:	48 85 c0             	test   %rax,%rax
   1803d2748:	75 0c                	jne    0x1803d2756
   1803d274a:	4c 8b cf             	mov    %rdi,%r9
   1803d274d:	48 8d 0d 84 3a 4d 00 	lea    0x4d3a84(%rip),%rcx        # 0x1808a61d8
   1803d2754:	eb 43                	jmp    0x1803d2799
   1803d2756:	4c 8b cb             	mov    %rbx,%r9
   1803d2759:	48 8d 15 f8 44 4d 00 	lea    0x4d44f8(%rip),%rdx        # 0x1808a6c58
   1803d2760:	4c 8b c7             	mov    %rdi,%r8
   1803d2763:	48 8d 0d c6 fa 2f 00 	lea    0x2ffac6(%rip),%rcx        # 0x1806d2230
   1803d276a:	e8 01 7c ff ff       	call   0x1803ca370
   1803d276f:	ba 04 00 00 00       	mov    $0x4,%edx
   1803d2774:	41 b8 08 00 00 00    	mov    $0x8,%r8d
   1803d277a:	48 8b cb             	mov    %rbx,%rcx
   1803d277d:	e8 9e f9 df ff       	call   0x1801d2120
   1803d2782:	48 89 05 07 f6 58 00 	mov    %rax,0x58f607(%rip)        # 0x180961d90
   1803d2789:	eb 27                	jmp    0x1803d27b2
   1803d278b:	4c 8d 0d b1 8e 1b 00 	lea    0x1b8eb1(%rip),%r9        # 0x18058b643
   1803d2792:	48 8d 0d 67 3a 4d 00 	lea    0x4d3a67(%rip),%rcx        # 0x1808a6200
   1803d2799:	ff 05 a1 f0 d3 00    	incl   0xd3f0a1(%rip)        # 0x181111840
   1803d279f:	4c 8d 05 b2 44 4d 00 	lea    0x4d44b2(%rip),%r8        # 0x1808a6c58
   1803d27a6:	48 8d 15 83 fa 2f 00 	lea    0x2ffa83(%rip),%rdx        # 0x1806d2230
   1803d27ad:	e8 ae fd ed ff       	call   0x1802b2560
   1803d27b2:	ff 05 8c f0 d3 00    	incl   0xd3f08c(%rip)        # 0x181111844
   1803d27b8:	48 8d 3d 61 09 4d 00 	lea    0x4d0961(%rip),%rdi        # 0x1808a3120
   1803d27bf:	4c 8b c7             	mov    %rdi,%r8
   1803d27c2:	48 8d 15 77 44 4d 00 	lea    0x4d4477(%rip),%rdx        # 0x1808a6c40
   1803d27c9:	45 33 c9             	xor    %r9d,%r9d
   1803d27cc:	48 8d 0d 5d fa 2f 00 	lea    0x2ffa5d(%rip),%rcx        # 0x1806d2230
   1803d27d3:	e8 98 7b ff ff       	call   0x1803ca370
   1803d27d8:	48 8d 0d 51 fa 2f 00 	lea    0x2ffa51(%rip),%rcx        # 0x1806d2230
   1803d27df:	ff 15 9b 89 19 00    	call   *0x19899b(%rip)        # 0x18056b180
   1803d27e5:	48 8b d8             	mov    %rax,%rbx
   1803d27e8:	48 85 c0             	test   %rax,%rax
   1803d27eb:	0f 84 a3 00 00 00    	je     0x1803d2894
   1803d27f1:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d27f4:	33 c0                	xor    %eax,%eax
   1803d27f6:	0f 11 85 98 08 00 00 	movups %xmm0,0x898(%rbp)
   1803d27fd:	48 89 85 a8 08 00 00 	mov    %rax,0x8a8(%rbp)
   1803d2804:	ff 15 86 8a 19 00    	call   *0x198a86(%rip)        # 0x18056b290
   1803d280a:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d2810:	4c 8d 85 98 08 00 00 	lea    0x898(%rbp),%r8
   1803d2817:	48 8b c8             	mov    %rax,%rcx
   1803d281a:	48 8b d3             	mov    %rbx,%rdx
   1803d281d:	ff 15 75 8a 19 00    	call   *0x198a75(%rip)        # 0x18056b298
   1803d2823:	85 c0                	test   %eax,%eax
   1803d2825:	74 6d                	je     0x1803d2894
   1803d2827:	48 8b 85 98 08 00 00 	mov    0x898(%rbp),%rax
   1803d282e:	8b 8d a0 08 00 00    	mov    0x8a0(%rbp),%ecx
   1803d2834:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d2839:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d283e:	48 85 c0             	test   %rax,%rax
   1803d2841:	74 51                	je     0x1803d2894
   1803d2843:	48 85 c9             	test   %rcx,%rcx
   1803d2846:	74 4c                	je     0x1803d2894
   1803d2848:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d284d:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d2852:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d2857:	48 c7 44 24 38 50 00 	movq   $0x50,0x38(%rsp)
   1803d285e:	00 00 
   1803d2860:	e8 9b f5 df ff       	call   0x1801d1e00
   1803d2865:	48 8b d8             	mov    %rax,%rbx
   1803d2868:	48 85 c0             	test   %rax,%rax
   1803d286b:	75 0c                	jne    0x1803d2879
   1803d286d:	4c 8b cf             	mov    %rdi,%r9
   1803d2870:	48 8d 0d 61 39 4d 00 	lea    0x4d3961(%rip),%rcx        # 0x1808a61d8
   1803d2877:	eb 29                	jmp    0x1803d28a2
   1803d2879:	4c 8b c8             	mov    %rax,%r9
   1803d287c:	48 8d 15 bd 43 4d 00 	lea    0x4d43bd(%rip),%rdx        # 0x1808a6c40
   1803d2883:	4c 8b c7             	mov    %rdi,%r8
   1803d2886:	48 8d 0d a3 f9 2f 00 	lea    0x2ff9a3(%rip),%rcx        # 0x1806d2230
   1803d288d:	e8 de 7a ff ff       	call   0x1803ca370
   1803d2892:	eb 2a                	jmp    0x1803d28be
   1803d2894:	4c 8d 0d a8 8d 1b 00 	lea    0x1b8da8(%rip),%r9        # 0x18058b643
   1803d289b:	48 8d 0d 5e 39 4d 00 	lea    0x4d395e(%rip),%rcx        # 0x1808a6200
   1803d28a2:	ff 05 98 ef d3 00    	incl   0xd3ef98(%rip)        # 0x181111840
   1803d28a8:	4c 8d 05 91 43 4d 00 	lea    0x4d4391(%rip),%r8        # 0x1808a6c40
   1803d28af:	48 8d 15 7a f9 2f 00 	lea    0x2ff97a(%rip),%rdx        # 0x1806d2230
   1803d28b6:	e8 a5 fc ed ff       	call   0x1802b2560
   1803d28bb:	49 8b de             	mov    %r14,%rbx
   1803d28be:	ff 05 80 ef d3 00    	incl   0xd3ef80(%rip)        # 0x181111844
   1803d28c4:	48 8d 3d f5 07 4d 00 	lea    0x4d07f5(%rip),%rdi        # 0x1808a30c0
   1803d28cb:	4c 8b c7             	mov    %rdi,%r8
   1803d28ce:	48 89 1d c3 f4 58 00 	mov    %rbx,0x58f4c3(%rip)        # 0x180961d98
   1803d28d5:	45 33 c9             	xor    %r9d,%r9d
   1803d28d8:	48 8d 15 49 43 4d 00 	lea    0x4d4349(%rip),%rdx        # 0x1808a6c28
   1803d28df:	48 8d 0d 4a f9 2f 00 	lea    0x2ff94a(%rip),%rcx        # 0x1806d2230
   1803d28e6:	e8 85 7a ff ff       	call   0x1803ca370
   1803d28eb:	48 8d 0d 3e f9 2f 00 	lea    0x2ff93e(%rip),%rcx        # 0x1806d2230
   1803d28f2:	ff 15 88 88 19 00    	call   *0x198888(%rip)        # 0x18056b180
   1803d28f8:	48 8b d8             	mov    %rax,%rbx
   1803d28fb:	48 85 c0             	test   %rax,%rax
   1803d28fe:	0f 84 a3 00 00 00    	je     0x1803d29a7
   1803d2904:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d2907:	33 c0                	xor    %eax,%eax
   1803d2909:	0f 11 85 b0 08 00 00 	movups %xmm0,0x8b0(%rbp)
   1803d2910:	48 89 85 c0 08 00 00 	mov    %rax,0x8c0(%rbp)
   1803d2917:	ff 15 73 89 19 00    	call   *0x198973(%rip)        # 0x18056b290
   1803d291d:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d2923:	4c 8d 85 b0 08 00 00 	lea    0x8b0(%rbp),%r8
   1803d292a:	48 8b c8             	mov    %rax,%rcx
   1803d292d:	48 8b d3             	mov    %rbx,%rdx
   1803d2930:	ff 15 62 89 19 00    	call   *0x198962(%rip)        # 0x18056b298
   1803d2936:	85 c0                	test   %eax,%eax
   1803d2938:	74 6d                	je     0x1803d29a7
   1803d293a:	48 8b 85 b0 08 00 00 	mov    0x8b0(%rbp),%rax
   1803d2941:	8b 8d b8 08 00 00    	mov    0x8b8(%rbp),%ecx
   1803d2947:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d294c:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d2951:	48 85 c0             	test   %rax,%rax
   1803d2954:	74 51                	je     0x1803d29a7
   1803d2956:	48 85 c9             	test   %rcx,%rcx
   1803d2959:	74 4c                	je     0x1803d29a7
   1803d295b:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d2960:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d2965:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d296a:	48 c7 44 24 38 50 00 	movq   $0x50,0x38(%rsp)
   1803d2971:	00 00 
   1803d2973:	e8 88 f4 df ff       	call   0x1801d1e00
   1803d2978:	48 8b d8             	mov    %rax,%rbx
   1803d297b:	48 85 c0             	test   %rax,%rax
   1803d297e:	75 0c                	jne    0x1803d298c
   1803d2980:	4c 8b cf             	mov    %rdi,%r9
   1803d2983:	48 8d 0d 4e 38 4d 00 	lea    0x4d384e(%rip),%rcx        # 0x1808a61d8
   1803d298a:	eb 29                	jmp    0x1803d29b5
   1803d298c:	4c 8b c8             	mov    %rax,%r9
   1803d298f:	48 8d 15 92 42 4d 00 	lea    0x4d4292(%rip),%rdx        # 0x1808a6c28
   1803d2996:	4c 8b c7             	mov    %rdi,%r8
   1803d2999:	48 8d 0d 90 f8 2f 00 	lea    0x2ff890(%rip),%rcx        # 0x1806d2230
   1803d29a0:	e8 cb 79 ff ff       	call   0x1803ca370
   1803d29a5:	eb 2a                	jmp    0x1803d29d1
   1803d29a7:	4c 8d 0d 95 8c 1b 00 	lea    0x1b8c95(%rip),%r9        # 0x18058b643
   1803d29ae:	48 8d 0d 4b 38 4d 00 	lea    0x4d384b(%rip),%rcx        # 0x1808a6200
   1803d29b5:	ff 05 85 ee d3 00    	incl   0xd3ee85(%rip)        # 0x181111840
   1803d29bb:	4c 8d 05 66 42 4d 00 	lea    0x4d4266(%rip),%r8        # 0x1808a6c28
   1803d29c2:	48 8d 15 67 f8 2f 00 	lea    0x2ff867(%rip),%rdx        # 0x1806d2230
   1803d29c9:	e8 92 fb ed ff       	call   0x1802b2560
   1803d29ce:	49 8b de             	mov    %r14,%rbx
   1803d29d1:	ff 05 6d ee d3 00    	incl   0xd3ee6d(%rip)        # 0x181111844
   1803d29d7:	48 8d 3d d2 0c 4d 00 	lea    0x4d0cd2(%rip),%rdi        # 0x1808a36b0
   1803d29de:	4c 8b c7             	mov    %rdi,%r8
   1803d29e1:	48 89 1d b8 f3 58 00 	mov    %rbx,0x58f3b8(%rip)        # 0x180961da0
   1803d29e8:	45 33 c9             	xor    %r9d,%r9d
   1803d29eb:	48 8d 15 1e 42 4d 00 	lea    0x4d421e(%rip),%rdx        # 0x1808a6c10
   1803d29f2:	48 8d 0d 37 f8 2f 00 	lea    0x2ff837(%rip),%rcx        # 0x1806d2230
   1803d29f9:	e8 72 79 ff ff       	call   0x1803ca370
   1803d29fe:	48 8d 0d 2b f8 2f 00 	lea    0x2ff82b(%rip),%rcx        # 0x1806d2230
   1803d2a05:	ff 15 75 87 19 00    	call   *0x198775(%rip)        # 0x18056b180
   1803d2a0b:	48 8b d8             	mov    %rax,%rbx
   1803d2a0e:	48 85 c0             	test   %rax,%rax
   1803d2a11:	0f 84 a3 00 00 00    	je     0x1803d2aba
   1803d2a17:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d2a1a:	33 c0                	xor    %eax,%eax
   1803d2a1c:	0f 11 85 c8 08 00 00 	movups %xmm0,0x8c8(%rbp)
   1803d2a23:	48 89 85 d8 08 00 00 	mov    %rax,0x8d8(%rbp)
   1803d2a2a:	ff 15 60 88 19 00    	call   *0x198860(%rip)        # 0x18056b290
   1803d2a30:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d2a36:	4c 8d 85 c8 08 00 00 	lea    0x8c8(%rbp),%r8
   1803d2a3d:	48 8b c8             	mov    %rax,%rcx
   1803d2a40:	48 8b d3             	mov    %rbx,%rdx
   1803d2a43:	ff 15 4f 88 19 00    	call   *0x19884f(%rip)        # 0x18056b298
   1803d2a49:	85 c0                	test   %eax,%eax
   1803d2a4b:	74 6d                	je     0x1803d2aba
   1803d2a4d:	48 8b 85 c8 08 00 00 	mov    0x8c8(%rbp),%rax
   1803d2a54:	8b 8d d0 08 00 00    	mov    0x8d0(%rbp),%ecx
   1803d2a5a:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d2a5f:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d2a64:	48 85 c0             	test   %rax,%rax
   1803d2a67:	74 51                	je     0x1803d2aba
   1803d2a69:	48 85 c9             	test   %rcx,%rcx
   1803d2a6c:	74 4c                	je     0x1803d2aba
   1803d2a6e:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d2a73:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d2a78:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d2a7d:	48 c7 44 24 38 50 00 	movq   $0x50,0x38(%rsp)
   1803d2a84:	00 00 
   1803d2a86:	e8 75 f3 df ff       	call   0x1801d1e00
   1803d2a8b:	48 8b d8             	mov    %rax,%rbx
   1803d2a8e:	48 85 c0             	test   %rax,%rax
   1803d2a91:	75 0c                	jne    0x1803d2a9f
   1803d2a93:	4c 8b cf             	mov    %rdi,%r9
   1803d2a96:	48 8d 0d 3b 37 4d 00 	lea    0x4d373b(%rip),%rcx        # 0x1808a61d8
   1803d2a9d:	eb 29                	jmp    0x1803d2ac8
   1803d2a9f:	4c 8b c8             	mov    %rax,%r9
   1803d2aa2:	48 8d 15 67 41 4d 00 	lea    0x4d4167(%rip),%rdx        # 0x1808a6c10
   1803d2aa9:	4c 8b c7             	mov    %rdi,%r8
   1803d2aac:	48 8d 0d 7d f7 2f 00 	lea    0x2ff77d(%rip),%rcx        # 0x1806d2230
   1803d2ab3:	e8 b8 78 ff ff       	call   0x1803ca370
   1803d2ab8:	eb 2a                	jmp    0x1803d2ae4
   1803d2aba:	4c 8d 0d 82 8b 1b 00 	lea    0x1b8b82(%rip),%r9        # 0x18058b643
   1803d2ac1:	48 8d 0d 38 37 4d 00 	lea    0x4d3738(%rip),%rcx        # 0x1808a6200
   1803d2ac8:	ff 05 72 ed d3 00    	incl   0xd3ed72(%rip)        # 0x181111840
   1803d2ace:	4c 8d 05 3b 41 4d 00 	lea    0x4d413b(%rip),%r8        # 0x1808a6c10
   1803d2ad5:	48 8d 15 54 f7 2f 00 	lea    0x2ff754(%rip),%rdx        # 0x1806d2230
   1803d2adc:	e8 7f fa ed ff       	call   0x1802b2560
   1803d2ae1:	49 8b de             	mov    %r14,%rbx
   1803d2ae4:	ff 05 5a ed d3 00    	incl   0xd3ed5a(%rip)        # 0x181111844
   1803d2aea:	48 8d 3d 6f 0b 4d 00 	lea    0x4d0b6f(%rip),%rdi        # 0x1808a3660
   1803d2af1:	4c 8b c7             	mov    %rdi,%r8
   1803d2af4:	48 89 1d ad f2 58 00 	mov    %rbx,0x58f2ad(%rip)        # 0x180961da8
   1803d2afb:	45 33 c9             	xor    %r9d,%r9d
   1803d2afe:	48 8d 15 eb 40 4d 00 	lea    0x4d40eb(%rip),%rdx        # 0x1808a6bf0
   1803d2b05:	48 8d 0d 24 f7 2f 00 	lea    0x2ff724(%rip),%rcx        # 0x1806d2230
   1803d2b0c:	e8 5f 78 ff ff       	call   0x1803ca370
   1803d2b11:	48 8d 0d 18 f7 2f 00 	lea    0x2ff718(%rip),%rcx        # 0x1806d2230
   1803d2b18:	ff 15 62 86 19 00    	call   *0x198662(%rip)        # 0x18056b180
   1803d2b1e:	48 8b d8             	mov    %rax,%rbx
   1803d2b21:	48 85 c0             	test   %rax,%rax
   1803d2b24:	0f 84 a3 00 00 00    	je     0x1803d2bcd
   1803d2b2a:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d2b2d:	33 c0                	xor    %eax,%eax
   1803d2b2f:	0f 11 85 e0 08 00 00 	movups %xmm0,0x8e0(%rbp)
   1803d2b36:	48 89 85 f0 08 00 00 	mov    %rax,0x8f0(%rbp)
   1803d2b3d:	ff 15 4d 87 19 00    	call   *0x19874d(%rip)        # 0x18056b290
   1803d2b43:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d2b49:	4c 8d 85 e0 08 00 00 	lea    0x8e0(%rbp),%r8
   1803d2b50:	48 8b c8             	mov    %rax,%rcx
   1803d2b53:	48 8b d3             	mov    %rbx,%rdx
   1803d2b56:	ff 15 3c 87 19 00    	call   *0x19873c(%rip)        # 0x18056b298
   1803d2b5c:	85 c0                	test   %eax,%eax
   1803d2b5e:	74 6d                	je     0x1803d2bcd
   1803d2b60:	48 8b 85 e0 08 00 00 	mov    0x8e0(%rbp),%rax
   1803d2b67:	8b 8d e8 08 00 00    	mov    0x8e8(%rbp),%ecx
   1803d2b6d:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d2b72:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d2b77:	48 85 c0             	test   %rax,%rax
   1803d2b7a:	74 51                	je     0x1803d2bcd
   1803d2b7c:	48 85 c9             	test   %rcx,%rcx
   1803d2b7f:	74 4c                	je     0x1803d2bcd
   1803d2b81:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d2b86:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d2b8b:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d2b90:	48 c7 44 24 38 43 00 	movq   $0x43,0x38(%rsp)
   1803d2b97:	00 00 
   1803d2b99:	e8 62 f2 df ff       	call   0x1801d1e00
   1803d2b9e:	48 8b d8             	mov    %rax,%rbx
   1803d2ba1:	48 85 c0             	test   %rax,%rax
   1803d2ba4:	75 0c                	jne    0x1803d2bb2
   1803d2ba6:	4c 8b cf             	mov    %rdi,%r9
   1803d2ba9:	48 8d 0d 28 36 4d 00 	lea    0x4d3628(%rip),%rcx        # 0x1808a61d8
   1803d2bb0:	eb 29                	jmp    0x1803d2bdb
   1803d2bb2:	4c 8b c8             	mov    %rax,%r9
   1803d2bb5:	48 8d 15 34 40 4d 00 	lea    0x4d4034(%rip),%rdx        # 0x1808a6bf0
   1803d2bbc:	4c 8b c7             	mov    %rdi,%r8
   1803d2bbf:	48 8d 0d 6a f6 2f 00 	lea    0x2ff66a(%rip),%rcx        # 0x1806d2230
   1803d2bc6:	e8 a5 77 ff ff       	call   0x1803ca370
   1803d2bcb:	eb 2a                	jmp    0x1803d2bf7
   1803d2bcd:	4c 8d 0d 6f 8a 1b 00 	lea    0x1b8a6f(%rip),%r9        # 0x18058b643
   1803d2bd4:	48 8d 0d 25 36 4d 00 	lea    0x4d3625(%rip),%rcx        # 0x1808a6200
   1803d2bdb:	ff 05 5f ec d3 00    	incl   0xd3ec5f(%rip)        # 0x181111840
   1803d2be1:	4c 8d 05 08 40 4d 00 	lea    0x4d4008(%rip),%r8        # 0x1808a6bf0
   1803d2be8:	48 8d 15 41 f6 2f 00 	lea    0x2ff641(%rip),%rdx        # 0x1806d2230
   1803d2bef:	e8 6c f9 ed ff       	call   0x1802b2560
   1803d2bf4:	49 8b de             	mov    %r14,%rbx
   1803d2bf7:	ff 05 47 ec d3 00    	incl   0xd3ec47(%rip)        # 0x181111844
   1803d2bfd:	48 8d 3d 64 23 4d 00 	lea    0x4d2364(%rip),%rdi        # 0x1808a4f68
   1803d2c04:	4c 8b c7             	mov    %rdi,%r8
   1803d2c07:	48 89 1d a2 f1 58 00 	mov    %rbx,0x58f1a2(%rip)        # 0x180961db0
   1803d2c0e:	45 33 c9             	xor    %r9d,%r9d
   1803d2c11:	48 8d 15 90 d0 32 00 	lea    0x32d090(%rip),%rdx        # 0x1806ffca8
   1803d2c18:	48 8d 0d 11 f6 2f 00 	lea    0x2ff611(%rip),%rcx        # 0x1806d2230
   1803d2c1f:	e8 4c 77 ff ff       	call   0x1803ca370
   1803d2c24:	48 8d 0d 05 f6 2f 00 	lea    0x2ff605(%rip),%rcx        # 0x1806d2230
   1803d2c2b:	ff 15 4f 85 19 00    	call   *0x19854f(%rip)        # 0x18056b180
   1803d2c31:	48 8b d8             	mov    %rax,%rbx
   1803d2c34:	48 85 c0             	test   %rax,%rax
   1803d2c37:	0f 84 a3 00 00 00    	je     0x1803d2ce0
   1803d2c3d:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d2c40:	33 c0                	xor    %eax,%eax
   1803d2c42:	0f 11 85 f8 08 00 00 	movups %xmm0,0x8f8(%rbp)
   1803d2c49:	48 89 85 08 09 00 00 	mov    %rax,0x908(%rbp)
   1803d2c50:	ff 15 3a 86 19 00    	call   *0x19863a(%rip)        # 0x18056b290
   1803d2c56:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d2c5c:	4c 8d 85 f8 08 00 00 	lea    0x8f8(%rbp),%r8
   1803d2c63:	48 8b c8             	mov    %rax,%rcx
   1803d2c66:	48 8b d3             	mov    %rbx,%rdx
   1803d2c69:	ff 15 29 86 19 00    	call   *0x198629(%rip)        # 0x18056b298
   1803d2c6f:	85 c0                	test   %eax,%eax
   1803d2c71:	74 6d                	je     0x1803d2ce0
   1803d2c73:	48 8b 85 f8 08 00 00 	mov    0x8f8(%rbp),%rax
   1803d2c7a:	8b 8d 00 09 00 00    	mov    0x900(%rbp),%ecx
   1803d2c80:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d2c85:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d2c8a:	48 85 c0             	test   %rax,%rax
   1803d2c8d:	74 51                	je     0x1803d2ce0
   1803d2c8f:	48 85 c9             	test   %rcx,%rcx
   1803d2c92:	74 4c                	je     0x1803d2ce0
   1803d2c94:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d2c99:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d2c9e:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d2ca3:	48 c7 44 24 38 3e 00 	movq   $0x3e,0x38(%rsp)
   1803d2caa:	00 00 
   1803d2cac:	e8 4f f1 df ff       	call   0x1801d1e00
   1803d2cb1:	48 8b d8             	mov    %rax,%rbx
   1803d2cb4:	48 85 c0             	test   %rax,%rax
   1803d2cb7:	75 0c                	jne    0x1803d2cc5
   1803d2cb9:	4c 8b cf             	mov    %rdi,%r9
   1803d2cbc:	48 8d 0d 15 35 4d 00 	lea    0x4d3515(%rip),%rcx        # 0x1808a61d8
   1803d2cc3:	eb 29                	jmp    0x1803d2cee
   1803d2cc5:	4c 8b c8             	mov    %rax,%r9
   1803d2cc8:	48 8d 15 d9 cf 32 00 	lea    0x32cfd9(%rip),%rdx        # 0x1806ffca8
   1803d2ccf:	4c 8b c7             	mov    %rdi,%r8
   1803d2cd2:	48 8d 0d 57 f5 2f 00 	lea    0x2ff557(%rip),%rcx        # 0x1806d2230
   1803d2cd9:	e8 92 76 ff ff       	call   0x1803ca370
   1803d2cde:	eb 2a                	jmp    0x1803d2d0a
   1803d2ce0:	4c 8d 0d 5c 89 1b 00 	lea    0x1b895c(%rip),%r9        # 0x18058b643
   1803d2ce7:	48 8d 0d 12 35 4d 00 	lea    0x4d3512(%rip),%rcx        # 0x1808a6200
   1803d2cee:	ff 05 4c eb d3 00    	incl   0xd3eb4c(%rip)        # 0x181111840
   1803d2cf4:	4c 8d 05 ad cf 32 00 	lea    0x32cfad(%rip),%r8        # 0x1806ffca8
   1803d2cfb:	48 8d 15 2e f5 2f 00 	lea    0x2ff52e(%rip),%rdx        # 0x1806d2230
   1803d2d02:	e8 59 f8 ed ff       	call   0x1802b2560
   1803d2d07:	49 8b de             	mov    %r14,%rbx
   1803d2d0a:	ff 05 34 eb d3 00    	incl   0xd3eb34(%rip)        # 0x181111844
   1803d2d10:	48 8d 3d 09 22 4d 00 	lea    0x4d2209(%rip),%rdi        # 0x1808a4f20
   1803d2d17:	4c 8b c7             	mov    %rdi,%r8
   1803d2d1a:	48 89 1d 97 f0 58 00 	mov    %rbx,0x58f097(%rip)        # 0x180961db8
   1803d2d21:	45 33 c9             	xor    %r9d,%r9d
   1803d2d24:	48 8d 15 6d cf 32 00 	lea    0x32cf6d(%rip),%rdx        # 0x1806ffc98
   1803d2d2b:	48 8d 0d fe f4 2f 00 	lea    0x2ff4fe(%rip),%rcx        # 0x1806d2230
   1803d2d32:	e8 39 76 ff ff       	call   0x1803ca370
   1803d2d37:	48 8d 0d f2 f4 2f 00 	lea    0x2ff4f2(%rip),%rcx        # 0x1806d2230
   1803d2d3e:	ff 15 3c 84 19 00    	call   *0x19843c(%rip)        # 0x18056b180
   1803d2d44:	48 8b d8             	mov    %rax,%rbx
   1803d2d47:	48 85 c0             	test   %rax,%rax
   1803d2d4a:	0f 84 a3 00 00 00    	je     0x1803d2df3
   1803d2d50:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d2d53:	33 c0                	xor    %eax,%eax
   1803d2d55:	0f 11 85 10 09 00 00 	movups %xmm0,0x910(%rbp)
   1803d2d5c:	48 89 85 20 09 00 00 	mov    %rax,0x920(%rbp)
   1803d2d63:	ff 15 27 85 19 00    	call   *0x198527(%rip)        # 0x18056b290
   1803d2d69:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d2d6f:	4c 8d 85 10 09 00 00 	lea    0x910(%rbp),%r8
   1803d2d76:	48 8b c8             	mov    %rax,%rcx
   1803d2d79:	48 8b d3             	mov    %rbx,%rdx
   1803d2d7c:	ff 15 16 85 19 00    	call   *0x198516(%rip)        # 0x18056b298
   1803d2d82:	85 c0                	test   %eax,%eax
   1803d2d84:	74 6d                	je     0x1803d2df3
   1803d2d86:	48 8b 85 10 09 00 00 	mov    0x910(%rbp),%rax
   1803d2d8d:	8b 8d 18 09 00 00    	mov    0x918(%rbp),%ecx
   1803d2d93:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d2d98:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d2d9d:	48 85 c0             	test   %rax,%rax
   1803d2da0:	74 51                	je     0x1803d2df3
   1803d2da2:	48 85 c9             	test   %rcx,%rcx
   1803d2da5:	74 4c                	je     0x1803d2df3
   1803d2da7:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d2dac:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d2db1:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d2db6:	48 c7 44 24 38 42 00 	movq   $0x42,0x38(%rsp)
   1803d2dbd:	00 00 
   1803d2dbf:	e8 3c f0 df ff       	call   0x1801d1e00
   1803d2dc4:	48 8b d8             	mov    %rax,%rbx
   1803d2dc7:	48 85 c0             	test   %rax,%rax
   1803d2dca:	75 0c                	jne    0x1803d2dd8
   1803d2dcc:	4c 8b cf             	mov    %rdi,%r9
   1803d2dcf:	48 8d 0d 02 34 4d 00 	lea    0x4d3402(%rip),%rcx        # 0x1808a61d8
   1803d2dd6:	eb 29                	jmp    0x1803d2e01
   1803d2dd8:	4c 8b c8             	mov    %rax,%r9
   1803d2ddb:	48 8d 15 b6 ce 32 00 	lea    0x32ceb6(%rip),%rdx        # 0x1806ffc98
   1803d2de2:	4c 8b c7             	mov    %rdi,%r8
   1803d2de5:	48 8d 0d 44 f4 2f 00 	lea    0x2ff444(%rip),%rcx        # 0x1806d2230
   1803d2dec:	e8 7f 75 ff ff       	call   0x1803ca370
   1803d2df1:	eb 2a                	jmp    0x1803d2e1d
   1803d2df3:	4c 8d 0d 49 88 1b 00 	lea    0x1b8849(%rip),%r9        # 0x18058b643
   1803d2dfa:	48 8d 0d ff 33 4d 00 	lea    0x4d33ff(%rip),%rcx        # 0x1808a6200
   1803d2e01:	ff 05 39 ea d3 00    	incl   0xd3ea39(%rip)        # 0x181111840
   1803d2e07:	4c 8d 05 8a ce 32 00 	lea    0x32ce8a(%rip),%r8        # 0x1806ffc98
   1803d2e0e:	48 8d 15 1b f4 2f 00 	lea    0x2ff41b(%rip),%rdx        # 0x1806d2230
   1803d2e15:	e8 46 f7 ed ff       	call   0x1802b2560
   1803d2e1a:	49 8b de             	mov    %r14,%rbx
   1803d2e1d:	ff 05 21 ea d3 00    	incl   0xd3ea21(%rip)        # 0x181111844
   1803d2e23:	48 8d 3d a6 20 4d 00 	lea    0x4d20a6(%rip),%rdi        # 0x1808a4ed0
   1803d2e2a:	4c 8b c7             	mov    %rdi,%r8
   1803d2e2d:	48 89 1d 8c ef 58 00 	mov    %rbx,0x58ef8c(%rip)        # 0x180961dc0
   1803d2e34:	45 33 c9             	xor    %r9d,%r9d
   1803d2e37:	48 8d 15 9a b9 30 00 	lea    0x30b99a(%rip),%rdx        # 0x1806de7d8
   1803d2e3e:	48 8d 0d eb f3 2f 00 	lea    0x2ff3eb(%rip),%rcx        # 0x1806d2230
   1803d2e45:	e8 26 75 ff ff       	call   0x1803ca370
   1803d2e4a:	48 8d 0d df f3 2f 00 	lea    0x2ff3df(%rip),%rcx        # 0x1806d2230
   1803d2e51:	ff 15 29 83 19 00    	call   *0x198329(%rip)        # 0x18056b180
   1803d2e57:	48 8b d8             	mov    %rax,%rbx
   1803d2e5a:	48 85 c0             	test   %rax,%rax
   1803d2e5d:	0f 84 a3 00 00 00    	je     0x1803d2f06
   1803d2e63:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d2e66:	33 c0                	xor    %eax,%eax
   1803d2e68:	0f 11 85 28 09 00 00 	movups %xmm0,0x928(%rbp)
   1803d2e6f:	48 89 85 38 09 00 00 	mov    %rax,0x938(%rbp)
   1803d2e76:	ff 15 14 84 19 00    	call   *0x198414(%rip)        # 0x18056b290
   1803d2e7c:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d2e82:	4c 8d 85 28 09 00 00 	lea    0x928(%rbp),%r8
   1803d2e89:	48 8b c8             	mov    %rax,%rcx
   1803d2e8c:	48 8b d3             	mov    %rbx,%rdx
   1803d2e8f:	ff 15 03 84 19 00    	call   *0x198403(%rip)        # 0x18056b298
   1803d2e95:	85 c0                	test   %eax,%eax
   1803d2e97:	74 6d                	je     0x1803d2f06
   1803d2e99:	48 8b 85 28 09 00 00 	mov    0x928(%rbp),%rax
   1803d2ea0:	8b 8d 30 09 00 00    	mov    0x930(%rbp),%ecx
   1803d2ea6:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d2eab:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d2eb0:	48 85 c0             	test   %rax,%rax
   1803d2eb3:	74 51                	je     0x1803d2f06
   1803d2eb5:	48 85 c9             	test   %rcx,%rcx
   1803d2eb8:	74 4c                	je     0x1803d2f06
   1803d2eba:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d2ebf:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d2ec4:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d2ec9:	48 c7 44 24 38 4e 00 	movq   $0x4e,0x38(%rsp)
   1803d2ed0:	00 00 
   1803d2ed2:	e8 29 ef df ff       	call   0x1801d1e00
   1803d2ed7:	48 8b d8             	mov    %rax,%rbx
   1803d2eda:	48 85 c0             	test   %rax,%rax
   1803d2edd:	75 0c                	jne    0x1803d2eeb
   1803d2edf:	4c 8b cf             	mov    %rdi,%r9
   1803d2ee2:	48 8d 0d ef 32 4d 00 	lea    0x4d32ef(%rip),%rcx        # 0x1808a61d8
   1803d2ee9:	eb 29                	jmp    0x1803d2f14
   1803d2eeb:	4c 8b c8             	mov    %rax,%r9
   1803d2eee:	48 8d 15 e3 b8 30 00 	lea    0x30b8e3(%rip),%rdx        # 0x1806de7d8
   1803d2ef5:	4c 8b c7             	mov    %rdi,%r8
   1803d2ef8:	48 8d 0d 31 f3 2f 00 	lea    0x2ff331(%rip),%rcx        # 0x1806d2230
   1803d2eff:	e8 6c 74 ff ff       	call   0x1803ca370
   1803d2f04:	eb 2a                	jmp    0x1803d2f30
   1803d2f06:	4c 8d 0d 36 87 1b 00 	lea    0x1b8736(%rip),%r9        # 0x18058b643
   1803d2f0d:	48 8d 0d ec 32 4d 00 	lea    0x4d32ec(%rip),%rcx        # 0x1808a6200
   1803d2f14:	ff 05 26 e9 d3 00    	incl   0xd3e926(%rip)        # 0x181111840
   1803d2f1a:	4c 8d 05 b7 b8 30 00 	lea    0x30b8b7(%rip),%r8        # 0x1806de7d8
   1803d2f21:	48 8d 15 08 f3 2f 00 	lea    0x2ff308(%rip),%rdx        # 0x1806d2230
   1803d2f28:	e8 33 f6 ed ff       	call   0x1802b2560
   1803d2f2d:	49 8b de             	mov    %r14,%rbx
   1803d2f30:	ff 05 0e e9 d3 00    	incl   0xd3e90e(%rip)        # 0x181111844
   1803d2f36:	48 8d 3d a3 23 4d 00 	lea    0x4d23a3(%rip),%rdi        # 0x1808a52e0
   1803d2f3d:	4c 8b c7             	mov    %rdi,%r8
   1803d2f40:	48 89 1d 81 ee 58 00 	mov    %rbx,0x58ee81(%rip)        # 0x180961dc8
   1803d2f47:	45 33 c9             	xor    %r9d,%r9d
   1803d2f4a:	48 8d 15 27 ca 32 00 	lea    0x32ca27(%rip),%rdx        # 0x1806ff978
   1803d2f51:	48 8d 0d d8 f2 2f 00 	lea    0x2ff2d8(%rip),%rcx        # 0x1806d2230
   1803d2f58:	e8 13 74 ff ff       	call   0x1803ca370
   1803d2f5d:	48 8d 0d cc f2 2f 00 	lea    0x2ff2cc(%rip),%rcx        # 0x1806d2230
   1803d2f64:	ff 15 16 82 19 00    	call   *0x198216(%rip)        # 0x18056b180
   1803d2f6a:	48 8b d8             	mov    %rax,%rbx
   1803d2f6d:	48 85 c0             	test   %rax,%rax
   1803d2f70:	0f 84 a3 00 00 00    	je     0x1803d3019
   1803d2f76:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d2f79:	33 c0                	xor    %eax,%eax
   1803d2f7b:	0f 11 85 40 09 00 00 	movups %xmm0,0x940(%rbp)
   1803d2f82:	48 89 85 50 09 00 00 	mov    %rax,0x950(%rbp)
   1803d2f89:	ff 15 01 83 19 00    	call   *0x198301(%rip)        # 0x18056b290
   1803d2f8f:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d2f95:	4c 8d 85 40 09 00 00 	lea    0x940(%rbp),%r8
   1803d2f9c:	48 8b c8             	mov    %rax,%rcx
   1803d2f9f:	48 8b d3             	mov    %rbx,%rdx
   1803d2fa2:	ff 15 f0 82 19 00    	call   *0x1982f0(%rip)        # 0x18056b298
   1803d2fa8:	85 c0                	test   %eax,%eax
   1803d2faa:	74 6d                	je     0x1803d3019
   1803d2fac:	48 8b 85 40 09 00 00 	mov    0x940(%rbp),%rax
   1803d2fb3:	8b 8d 48 09 00 00    	mov    0x948(%rbp),%ecx
   1803d2fb9:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d2fbe:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d2fc3:	48 85 c0             	test   %rax,%rax
   1803d2fc6:	74 51                	je     0x1803d3019
   1803d2fc8:	48 85 c9             	test   %rcx,%rcx
   1803d2fcb:	74 4c                	je     0x1803d3019
   1803d2fcd:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d2fd2:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d2fd7:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d2fdc:	48 c7 44 24 38 6b 00 	movq   $0x6b,0x38(%rsp)
   1803d2fe3:	00 00 
   1803d2fe5:	e8 16 ee df ff       	call   0x1801d1e00
   1803d2fea:	48 8b d8             	mov    %rax,%rbx
   1803d2fed:	48 85 c0             	test   %rax,%rax
   1803d2ff0:	75 0c                	jne    0x1803d2ffe
   1803d2ff2:	4c 8b cf             	mov    %rdi,%r9
   1803d2ff5:	48 8d 0d dc 31 4d 00 	lea    0x4d31dc(%rip),%rcx        # 0x1808a61d8
   1803d2ffc:	eb 29                	jmp    0x1803d3027
   1803d2ffe:	4c 8b c8             	mov    %rax,%r9
   1803d3001:	48 8d 15 70 c9 32 00 	lea    0x32c970(%rip),%rdx        # 0x1806ff978
   1803d3008:	4c 8b c7             	mov    %rdi,%r8
   1803d300b:	48 8d 0d 1e f2 2f 00 	lea    0x2ff21e(%rip),%rcx        # 0x1806d2230
   1803d3012:	e8 59 73 ff ff       	call   0x1803ca370
   1803d3017:	eb 2a                	jmp    0x1803d3043
   1803d3019:	4c 8d 0d 23 86 1b 00 	lea    0x1b8623(%rip),%r9        # 0x18058b643
   1803d3020:	48 8d 0d d9 31 4d 00 	lea    0x4d31d9(%rip),%rcx        # 0x1808a6200
   1803d3027:	ff 05 13 e8 d3 00    	incl   0xd3e813(%rip)        # 0x181111840
   1803d302d:	4c 8d 05 44 c9 32 00 	lea    0x32c944(%rip),%r8        # 0x1806ff978
   1803d3034:	48 8d 15 f5 f1 2f 00 	lea    0x2ff1f5(%rip),%rdx        # 0x1806d2230
   1803d303b:	e8 20 f5 ed ff       	call   0x1802b2560
   1803d3040:	49 8b de             	mov    %r14,%rbx
   1803d3043:	ff 05 fb e7 d3 00    	incl   0xd3e7fb(%rip)        # 0x181111844
   1803d3049:	48 8d 3d 40 22 4d 00 	lea    0x4d2240(%rip),%rdi        # 0x1808a5290
   1803d3050:	4c 8b c7             	mov    %rdi,%r8
   1803d3053:	48 89 1d 76 ed 58 00 	mov    %rbx,0x58ed76(%rip)        # 0x180961dd0
   1803d305a:	45 33 c9             	xor    %r9d,%r9d
   1803d305d:	48 8d 15 74 3b 4d 00 	lea    0x4d3b74(%rip),%rdx        # 0x1808a6bd8
   1803d3064:	48 8d 0d c5 f1 2f 00 	lea    0x2ff1c5(%rip),%rcx        # 0x1806d2230
   1803d306b:	e8 00 73 ff ff       	call   0x1803ca370
   1803d3070:	48 8d 0d b9 f1 2f 00 	lea    0x2ff1b9(%rip),%rcx        # 0x1806d2230
   1803d3077:	ff 15 03 81 19 00    	call   *0x198103(%rip)        # 0x18056b180
   1803d307d:	48 8b d8             	mov    %rax,%rbx
   1803d3080:	48 85 c0             	test   %rax,%rax
   1803d3083:	0f 84 c0 00 00 00    	je     0x1803d3149
   1803d3089:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d308c:	33 c0                	xor    %eax,%eax
   1803d308e:	0f 11 85 58 09 00 00 	movups %xmm0,0x958(%rbp)
   1803d3095:	48 89 85 68 09 00 00 	mov    %rax,0x968(%rbp)
   1803d309c:	ff 15 ee 81 19 00    	call   *0x1981ee(%rip)        # 0x18056b290
   1803d30a2:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d30a8:	4c 8d 85 58 09 00 00 	lea    0x958(%rbp),%r8
   1803d30af:	48 8b c8             	mov    %rax,%rcx
   1803d30b2:	48 8b d3             	mov    %rbx,%rdx
   1803d30b5:	ff 15 dd 81 19 00    	call   *0x1981dd(%rip)        # 0x18056b298
   1803d30bb:	85 c0                	test   %eax,%eax
   1803d30bd:	0f 84 86 00 00 00    	je     0x1803d3149
   1803d30c3:	48 8b 85 58 09 00 00 	mov    0x958(%rbp),%rax
   1803d30ca:	8b 8d 60 09 00 00    	mov    0x960(%rbp),%ecx
   1803d30d0:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d30d5:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d30da:	48 85 c0             	test   %rax,%rax
   1803d30dd:	74 6a                	je     0x1803d3149
   1803d30df:	48 85 c9             	test   %rcx,%rcx
   1803d30e2:	74 65                	je     0x1803d3149
   1803d30e4:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d30e9:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d30ee:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d30f3:	48 c7 44 24 38 43 00 	movq   $0x43,0x38(%rsp)
   1803d30fa:	00 00 
   1803d30fc:	e8 ff ec df ff       	call   0x1801d1e00
   1803d3101:	48 8b d8             	mov    %rax,%rbx
   1803d3104:	48 85 c0             	test   %rax,%rax
   1803d3107:	75 0c                	jne    0x1803d3115
   1803d3109:	4c 8b cf             	mov    %rdi,%r9
   1803d310c:	48 8d 0d c5 30 4d 00 	lea    0x4d30c5(%rip),%rcx        # 0x1808a61d8
   1803d3113:	eb 42                	jmp    0x1803d3157
   1803d3115:	4c 8b cb             	mov    %rbx,%r9
   1803d3118:	48 8d 15 b9 3a 4d 00 	lea    0x4d3ab9(%rip),%rdx        # 0x1808a6bd8
   1803d311f:	4c 8b c7             	mov    %rdi,%r8
   1803d3122:	48 8d 0d 07 f1 2f 00 	lea    0x2ff107(%rip),%rcx        # 0x1806d2230
   1803d3129:	e8 42 72 ff ff       	call   0x1803ca370
   1803d312e:	48 8d 4b 11          	lea    0x11(%rbx),%rcx
   1803d3132:	48 89 1d 9f ec 58 00 	mov    %rbx,0x58ec9f(%rip)        # 0x180961dd8
   1803d3139:	e8 c2 e0 c3 ff       	call   0x180011200
   1803d313e:	83 e8 0c             	sub    $0xc,%eax
   1803d3141:	89 05 99 ec 58 00    	mov    %eax,0x58ec99(%rip)        # 0x180961de0
   1803d3147:	eb 27                	jmp    0x1803d3170
   1803d3149:	4c 8d 0d f3 84 1b 00 	lea    0x1b84f3(%rip),%r9        # 0x18058b643
   1803d3150:	48 8d 0d a9 30 4d 00 	lea    0x4d30a9(%rip),%rcx        # 0x1808a6200
   1803d3157:	ff 05 e3 e6 d3 00    	incl   0xd3e6e3(%rip)        # 0x181111840
   1803d315d:	4c 8d 05 74 3a 4d 00 	lea    0x4d3a74(%rip),%r8        # 0x1808a6bd8
   1803d3164:	48 8d 15 c5 f0 2f 00 	lea    0x2ff0c5(%rip),%rdx        # 0x1806d2230
   1803d316b:	e8 f0 f3 ed ff       	call   0x1802b2560
   1803d3170:	ff 05 ce e6 d3 00    	incl   0xd3e6ce(%rip)        # 0x181111844
   1803d3176:	48 8d 3d 03 1d 4d 00 	lea    0x4d1d03(%rip),%rdi        # 0x1808a4e80
   1803d317d:	4c 8b c7             	mov    %rdi,%r8
   1803d3180:	48 8d 15 f9 ca 32 00 	lea    0x32caf9(%rip),%rdx        # 0x1806ffc80
   1803d3187:	45 33 c9             	xor    %r9d,%r9d
   1803d318a:	48 8d 0d 9f f0 2f 00 	lea    0x2ff09f(%rip),%rcx        # 0x1806d2230
   1803d3191:	e8 da 71 ff ff       	call   0x1803ca370
   1803d3196:	48 8d 0d 93 f0 2f 00 	lea    0x2ff093(%rip),%rcx        # 0x1806d2230
   1803d319d:	ff 15 dd 7f 19 00    	call   *0x197fdd(%rip)        # 0x18056b180
   1803d31a3:	48 8b d8             	mov    %rax,%rbx
   1803d31a6:	48 85 c0             	test   %rax,%rax
   1803d31a9:	0f 84 a3 00 00 00    	je     0x1803d3252
   1803d31af:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d31b2:	33 c0                	xor    %eax,%eax
   1803d31b4:	0f 11 85 70 09 00 00 	movups %xmm0,0x970(%rbp)
   1803d31bb:	48 89 85 80 09 00 00 	mov    %rax,0x980(%rbp)
   1803d31c2:	ff 15 c8 80 19 00    	call   *0x1980c8(%rip)        # 0x18056b290
   1803d31c8:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d31ce:	4c 8d 85 70 09 00 00 	lea    0x970(%rbp),%r8
   1803d31d5:	48 8b c8             	mov    %rax,%rcx
   1803d31d8:	48 8b d3             	mov    %rbx,%rdx
   1803d31db:	ff 15 b7 80 19 00    	call   *0x1980b7(%rip)        # 0x18056b298
   1803d31e1:	85 c0                	test   %eax,%eax
   1803d31e3:	74 6d                	je     0x1803d3252
   1803d31e5:	48 8b 85 70 09 00 00 	mov    0x970(%rbp),%rax
   1803d31ec:	8b 8d 78 09 00 00    	mov    0x978(%rbp),%ecx
   1803d31f2:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d31f7:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d31fc:	48 85 c0             	test   %rax,%rax
   1803d31ff:	74 51                	je     0x1803d3252
   1803d3201:	48 85 c9             	test   %rcx,%rcx
   1803d3204:	74 4c                	je     0x1803d3252
   1803d3206:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d320b:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d3210:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d3215:	48 c7 44 24 38 46 00 	movq   $0x46,0x38(%rsp)
   1803d321c:	00 00 
   1803d321e:	e8 dd eb df ff       	call   0x1801d1e00
   1803d3223:	48 8b d8             	mov    %rax,%rbx
   1803d3226:	48 85 c0             	test   %rax,%rax
   1803d3229:	75 0c                	jne    0x1803d3237
   1803d322b:	4c 8b cf             	mov    %rdi,%r9
   1803d322e:	48 8d 0d a3 2f 4d 00 	lea    0x4d2fa3(%rip),%rcx        # 0x1808a61d8
   1803d3235:	eb 29                	jmp    0x1803d3260
   1803d3237:	4c 8b c8             	mov    %rax,%r9
   1803d323a:	48 8d 15 3f ca 32 00 	lea    0x32ca3f(%rip),%rdx        # 0x1806ffc80
   1803d3241:	4c 8b c7             	mov    %rdi,%r8
   1803d3244:	48 8d 0d e5 ef 2f 00 	lea    0x2fefe5(%rip),%rcx        # 0x1806d2230
   1803d324b:	e8 20 71 ff ff       	call   0x1803ca370
   1803d3250:	eb 2a                	jmp    0x1803d327c
   1803d3252:	4c 8d 0d ea 83 1b 00 	lea    0x1b83ea(%rip),%r9        # 0x18058b643
   1803d3259:	48 8d 0d a0 2f 4d 00 	lea    0x4d2fa0(%rip),%rcx        # 0x1808a6200
   1803d3260:	ff 05 da e5 d3 00    	incl   0xd3e5da(%rip)        # 0x181111840
   1803d3266:	4c 8d 05 13 ca 32 00 	lea    0x32ca13(%rip),%r8        # 0x1806ffc80
   1803d326d:	48 8d 15 bc ef 2f 00 	lea    0x2fefbc(%rip),%rdx        # 0x1806d2230
   1803d3274:	e8 e7 f2 ed ff       	call   0x1802b2560
   1803d3279:	49 8b de             	mov    %r14,%rbx
   1803d327c:	ff 05 c2 e5 d3 00    	incl   0xd3e5c2(%rip)        # 0x181111844
   1803d3282:	48 8d 3d b7 1b 4d 00 	lea    0x4d1bb7(%rip),%rdi        # 0x1808a4e40
   1803d3289:	4c 8b c7             	mov    %rdi,%r8
   1803d328c:	48 89 1d 55 eb 58 00 	mov    %rbx,0x58eb55(%rip)        # 0x180961de8
   1803d3293:	45 33 c9             	xor    %r9d,%r9d
   1803d3296:	48 8d 15 2b 39 4d 00 	lea    0x4d392b(%rip),%rdx        # 0x1808a6bc8
   1803d329d:	48 8d 0d 8c ef 2f 00 	lea    0x2fef8c(%rip),%rcx        # 0x1806d2230
   1803d32a4:	e8 c7 70 ff ff       	call   0x1803ca370
   1803d32a9:	48 8d 0d 80 ef 2f 00 	lea    0x2fef80(%rip),%rcx        # 0x1806d2230
   1803d32b0:	ff 15 ca 7e 19 00    	call   *0x197eca(%rip)        # 0x18056b180
   1803d32b6:	48 8b d8             	mov    %rax,%rbx
   1803d32b9:	48 85 c0             	test   %rax,%rax
   1803d32bc:	0f 84 c5 00 00 00    	je     0x1803d3387
   1803d32c2:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d32c5:	33 c0                	xor    %eax,%eax
   1803d32c7:	0f 11 85 88 09 00 00 	movups %xmm0,0x988(%rbp)
   1803d32ce:	48 89 85 98 09 00 00 	mov    %rax,0x998(%rbp)
   1803d32d5:	ff 15 b5 7f 19 00    	call   *0x197fb5(%rip)        # 0x18056b290
   1803d32db:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d32e1:	4c 8d 85 88 09 00 00 	lea    0x988(%rbp),%r8
   1803d32e8:	48 8b c8             	mov    %rax,%rcx
   1803d32eb:	48 8b d3             	mov    %rbx,%rdx
   1803d32ee:	ff 15 a4 7f 19 00    	call   *0x197fa4(%rip)        # 0x18056b298
   1803d32f4:	85 c0                	test   %eax,%eax
   1803d32f6:	0f 84 8b 00 00 00    	je     0x1803d3387
   1803d32fc:	48 8b 85 88 09 00 00 	mov    0x988(%rbp),%rax
   1803d3303:	8b 8d 90 09 00 00    	mov    0x990(%rbp),%ecx
   1803d3309:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d330e:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d3313:	48 85 c0             	test   %rax,%rax
   1803d3316:	74 6f                	je     0x1803d3387
   1803d3318:	48 85 c9             	test   %rcx,%rcx
   1803d331b:	74 6a                	je     0x1803d3387
   1803d331d:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d3322:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d3327:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d332c:	48 c7 44 24 38 33 00 	movq   $0x33,0x38(%rsp)
   1803d3333:	00 00 
   1803d3335:	e8 c6 ea df ff       	call   0x1801d1e00
   1803d333a:	48 8b d8             	mov    %rax,%rbx
   1803d333d:	48 85 c0             	test   %rax,%rax
   1803d3340:	75 0c                	jne    0x1803d334e
   1803d3342:	4c 8b cf             	mov    %rdi,%r9
   1803d3345:	48 8d 0d 8c 2e 4d 00 	lea    0x4d2e8c(%rip),%rcx        # 0x1808a61d8
   1803d334c:	eb 47                	jmp    0x1803d3395
   1803d334e:	4c 8b cb             	mov    %rbx,%r9
   1803d3351:	48 8d 15 70 38 4d 00 	lea    0x4d3870(%rip),%rdx        # 0x1808a6bc8
   1803d3358:	4c 8b c7             	mov    %rdi,%r8
   1803d335b:	48 8d 0d ce ee 2f 00 	lea    0x2feece(%rip),%rcx        # 0x1806d2230
   1803d3362:	e8 09 70 ff ff       	call   0x1803ca370
   1803d3367:	48 8d 4b 05          	lea    0x5(%rbx),%rcx
   1803d336b:	e8 90 de c3 ff       	call   0x180011200
   1803d3370:	48 8d 4b 0b          	lea    0xb(%rbx),%rcx
   1803d3374:	89 05 76 ea 58 00    	mov    %eax,0x58ea76(%rip)        # 0x180961df0
   1803d337a:	e8 81 de c3 ff       	call   0x180011200
   1803d337f:	89 05 6f ea 58 00    	mov    %eax,0x58ea6f(%rip)        # 0x180961df4
   1803d3385:	eb 27                	jmp    0x1803d33ae
   1803d3387:	4c 8d 0d b5 82 1b 00 	lea    0x1b82b5(%rip),%r9        # 0x18058b643
   1803d338e:	48 8d 0d 6b 2e 4d 00 	lea    0x4d2e6b(%rip),%rcx        # 0x1808a6200
   1803d3395:	ff 05 a5 e4 d3 00    	incl   0xd3e4a5(%rip)        # 0x181111840
   1803d339b:	4c 8d 05 26 38 4d 00 	lea    0x4d3826(%rip),%r8        # 0x1808a6bc8
   1803d33a2:	48 8d 15 87 ee 2f 00 	lea    0x2fee87(%rip),%rdx        # 0x1806d2230
   1803d33a9:	e8 b2 f1 ed ff       	call   0x1802b2560
   1803d33ae:	ff 05 90 e4 d3 00    	incl   0xd3e490(%rip)        # 0x181111844
   1803d33b4:	48 8d 3d 75 04 4d 00 	lea    0x4d0475(%rip),%rdi        # 0x1808a3830
   1803d33bb:	4c 8b c7             	mov    %rdi,%r8
   1803d33be:	48 8d 15 fb c6 32 00 	lea    0x32c6fb(%rip),%rdx        # 0x1806ffac0
   1803d33c5:	45 33 c9             	xor    %r9d,%r9d
   1803d33c8:	48 8d 0d 61 ee 2f 00 	lea    0x2fee61(%rip),%rcx        # 0x1806d2230
   1803d33cf:	e8 9c 6f ff ff       	call   0x1803ca370
   1803d33d4:	48 8d 0d 55 ee 2f 00 	lea    0x2fee55(%rip),%rcx        # 0x1806d2230
   1803d33db:	ff 15 9f 7d 19 00    	call   *0x197d9f(%rip)        # 0x18056b180
   1803d33e1:	48 8b d8             	mov    %rax,%rbx
   1803d33e4:	48 85 c0             	test   %rax,%rax
   1803d33e7:	0f 84 a3 00 00 00    	je     0x1803d3490
   1803d33ed:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d33f0:	33 c0                	xor    %eax,%eax
   1803d33f2:	0f 11 85 a0 09 00 00 	movups %xmm0,0x9a0(%rbp)
   1803d33f9:	48 89 85 b0 09 00 00 	mov    %rax,0x9b0(%rbp)
   1803d3400:	ff 15 8a 7e 19 00    	call   *0x197e8a(%rip)        # 0x18056b290
   1803d3406:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d340c:	4c 8d 85 a0 09 00 00 	lea    0x9a0(%rbp),%r8
   1803d3413:	48 8b c8             	mov    %rax,%rcx
   1803d3416:	48 8b d3             	mov    %rbx,%rdx
   1803d3419:	ff 15 79 7e 19 00    	call   *0x197e79(%rip)        # 0x18056b298
   1803d341f:	85 c0                	test   %eax,%eax
   1803d3421:	74 6d                	je     0x1803d3490
   1803d3423:	48 8b 85 a0 09 00 00 	mov    0x9a0(%rbp),%rax
   1803d342a:	8b 8d a8 09 00 00    	mov    0x9a8(%rbp),%ecx
   1803d3430:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d3435:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d343a:	48 85 c0             	test   %rax,%rax
   1803d343d:	74 51                	je     0x1803d3490
   1803d343f:	48 85 c9             	test   %rcx,%rcx
   1803d3442:	74 4c                	je     0x1803d3490
   1803d3444:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d3449:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d344e:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d3453:	48 c7 44 24 38 35 00 	movq   $0x35,0x38(%rsp)
   1803d345a:	00 00 
   1803d345c:	e8 9f e9 df ff       	call   0x1801d1e00
   1803d3461:	48 8b d8             	mov    %rax,%rbx
   1803d3464:	48 85 c0             	test   %rax,%rax
   1803d3467:	75 0c                	jne    0x1803d3475
   1803d3469:	4c 8b cf             	mov    %rdi,%r9
   1803d346c:	48 8d 0d 65 2d 4d 00 	lea    0x4d2d65(%rip),%rcx        # 0x1808a61d8
   1803d3473:	eb 29                	jmp    0x1803d349e
   1803d3475:	4c 8b c8             	mov    %rax,%r9
   1803d3478:	48 8d 15 41 c6 32 00 	lea    0x32c641(%rip),%rdx        # 0x1806ffac0
   1803d347f:	4c 8b c7             	mov    %rdi,%r8
   1803d3482:	48 8d 0d a7 ed 2f 00 	lea    0x2feda7(%rip),%rcx        # 0x1806d2230
   1803d3489:	e8 e2 6e ff ff       	call   0x1803ca370
   1803d348e:	eb 2a                	jmp    0x1803d34ba
   1803d3490:	4c 8d 0d ac 81 1b 00 	lea    0x1b81ac(%rip),%r9        # 0x18058b643
   1803d3497:	48 8d 0d 62 2d 4d 00 	lea    0x4d2d62(%rip),%rcx        # 0x1808a6200
   1803d349e:	ff 05 9c e3 d3 00    	incl   0xd3e39c(%rip)        # 0x181111840
   1803d34a4:	4c 8d 05 15 c6 32 00 	lea    0x32c615(%rip),%r8        # 0x1806ffac0
   1803d34ab:	48 8d 15 7e ed 2f 00 	lea    0x2fed7e(%rip),%rdx        # 0x1806d2230
   1803d34b2:	e8 a9 f0 ed ff       	call   0x1802b2560
   1803d34b7:	49 8b de             	mov    %r14,%rbx
   1803d34ba:	ff 05 84 e3 d3 00    	incl   0xd3e384(%rip)        # 0x181111844
   1803d34c0:	48 8d 3d 39 03 4d 00 	lea    0x4d0339(%rip),%rdi        # 0x1808a3800
   1803d34c7:	4c 8b c7             	mov    %rdi,%r8
   1803d34ca:	48 89 1d 27 e9 58 00 	mov    %rbx,0x58e927(%rip)        # 0x180961df8
   1803d34d1:	45 33 c9             	xor    %r9d,%r9d
   1803d34d4:	48 8d 15 dd 36 4d 00 	lea    0x4d36dd(%rip),%rdx        # 0x1808a6bb8
   1803d34db:	48 8d 0d 4e ed 2f 00 	lea    0x2fed4e(%rip),%rcx        # 0x1806d2230
   1803d34e2:	e8 89 6e ff ff       	call   0x1803ca370
   1803d34e7:	48 8d 0d 42 ed 2f 00 	lea    0x2fed42(%rip),%rcx        # 0x1806d2230
   1803d34ee:	ff 15 8c 7c 19 00    	call   *0x197c8c(%rip)        # 0x18056b180
   1803d34f4:	48 8b d8             	mov    %rax,%rbx
   1803d34f7:	48 85 c0             	test   %rax,%rax
   1803d34fa:	0f 84 a3 00 00 00    	je     0x1803d35a3
   1803d3500:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d3503:	33 c0                	xor    %eax,%eax
   1803d3505:	0f 11 85 b8 09 00 00 	movups %xmm0,0x9b8(%rbp)
   1803d350c:	48 89 85 c8 09 00 00 	mov    %rax,0x9c8(%rbp)
   1803d3513:	ff 15 77 7d 19 00    	call   *0x197d77(%rip)        # 0x18056b290
   1803d3519:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d351f:	4c 8d 85 b8 09 00 00 	lea    0x9b8(%rbp),%r8
   1803d3526:	48 8b c8             	mov    %rax,%rcx
   1803d3529:	48 8b d3             	mov    %rbx,%rdx
   1803d352c:	ff 15 66 7d 19 00    	call   *0x197d66(%rip)        # 0x18056b298
   1803d3532:	85 c0                	test   %eax,%eax
   1803d3534:	74 6d                	je     0x1803d35a3
   1803d3536:	48 8b 85 b8 09 00 00 	mov    0x9b8(%rbp),%rax
   1803d353d:	8b 8d c0 09 00 00    	mov    0x9c0(%rbp),%ecx
   1803d3543:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d3548:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d354d:	48 85 c0             	test   %rax,%rax
   1803d3550:	74 51                	je     0x1803d35a3
   1803d3552:	48 85 c9             	test   %rcx,%rcx
   1803d3555:	74 4c                	je     0x1803d35a3
   1803d3557:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d355c:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d3561:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d3566:	48 c7 44 24 38 2e 00 	movq   $0x2e,0x38(%rsp)
   1803d356d:	00 00 
   1803d356f:	e8 8c e8 df ff       	call   0x1801d1e00
   1803d3574:	48 8b d8             	mov    %rax,%rbx
   1803d3577:	48 85 c0             	test   %rax,%rax
   1803d357a:	75 0c                	jne    0x1803d3588
   1803d357c:	4c 8b cf             	mov    %rdi,%r9
   1803d357f:	48 8d 0d 52 2c 4d 00 	lea    0x4d2c52(%rip),%rcx        # 0x1808a61d8
   1803d3586:	eb 29                	jmp    0x1803d35b1
   1803d3588:	4c 8b c8             	mov    %rax,%r9
   1803d358b:	48 8d 15 26 36 4d 00 	lea    0x4d3626(%rip),%rdx        # 0x1808a6bb8
   1803d3592:	4c 8b c7             	mov    %rdi,%r8
   1803d3595:	48 8d 0d 94 ec 2f 00 	lea    0x2fec94(%rip),%rcx        # 0x1806d2230
   1803d359c:	e8 cf 6d ff ff       	call   0x1803ca370
   1803d35a1:	eb 2a                	jmp    0x1803d35cd
   1803d35a3:	4c 8d 0d 99 80 1b 00 	lea    0x1b8099(%rip),%r9        # 0x18058b643
   1803d35aa:	48 8d 0d 4f 2c 4d 00 	lea    0x4d2c4f(%rip),%rcx        # 0x1808a6200
   1803d35b1:	ff 05 89 e2 d3 00    	incl   0xd3e289(%rip)        # 0x181111840
   1803d35b7:	4c 8d 05 fa 35 4d 00 	lea    0x4d35fa(%rip),%r8        # 0x1808a6bb8
   1803d35be:	48 8d 15 6b ec 2f 00 	lea    0x2fec6b(%rip),%rdx        # 0x1806d2230
   1803d35c5:	e8 96 ef ed ff       	call   0x1802b2560
   1803d35ca:	49 8b de             	mov    %r14,%rbx
   1803d35cd:	ff 05 71 e2 d3 00    	incl   0xd3e271(%rip)        # 0x181111844
   1803d35d3:	48 8d 3d d6 01 4d 00 	lea    0x4d01d6(%rip),%rdi        # 0x1808a37b0
   1803d35da:	4c 8b c7             	mov    %rdi,%r8
   1803d35dd:	48 89 1d 1c e8 58 00 	mov    %rbx,0x58e81c(%rip)        # 0x180961e00
   1803d35e4:	45 33 c9             	xor    %r9d,%r9d
   1803d35e7:	48 8d 15 2a 37 4d 00 	lea    0x4d372a(%rip),%rdx        # 0x1808a6d18
   1803d35ee:	48 8d 0d 3b ec 2f 00 	lea    0x2fec3b(%rip),%rcx        # 0x1806d2230
   1803d35f5:	e8 76 6d ff ff       	call   0x1803ca370
   1803d35fa:	48 8d 0d 2f ec 2f 00 	lea    0x2fec2f(%rip),%rcx        # 0x1806d2230
   1803d3601:	ff 15 79 7b 19 00    	call   *0x197b79(%rip)        # 0x18056b180
   1803d3607:	48 8b d8             	mov    %rax,%rbx
   1803d360a:	48 85 c0             	test   %rax,%rax
   1803d360d:	0f 84 a3 00 00 00    	je     0x1803d36b6
   1803d3613:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d3616:	33 c0                	xor    %eax,%eax
   1803d3618:	0f 11 85 d0 09 00 00 	movups %xmm0,0x9d0(%rbp)
   1803d361f:	48 89 85 e0 09 00 00 	mov    %rax,0x9e0(%rbp)
   1803d3626:	ff 15 64 7c 19 00    	call   *0x197c64(%rip)        # 0x18056b290
   1803d362c:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d3632:	4c 8d 85 d0 09 00 00 	lea    0x9d0(%rbp),%r8
   1803d3639:	48 8b c8             	mov    %rax,%rcx
   1803d363c:	48 8b d3             	mov    %rbx,%rdx
   1803d363f:	ff 15 53 7c 19 00    	call   *0x197c53(%rip)        # 0x18056b298
   1803d3645:	85 c0                	test   %eax,%eax
   1803d3647:	74 6d                	je     0x1803d36b6
   1803d3649:	48 8b 85 d0 09 00 00 	mov    0x9d0(%rbp),%rax
   1803d3650:	8b 8d d8 09 00 00    	mov    0x9d8(%rbp),%ecx
   1803d3656:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d365b:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d3660:	48 85 c0             	test   %rax,%rax
   1803d3663:	74 51                	je     0x1803d36b6
   1803d3665:	48 85 c9             	test   %rcx,%rcx
   1803d3668:	74 4c                	je     0x1803d36b6
   1803d366a:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d366f:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d3674:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d3679:	48 c7 44 24 38 4f 00 	movq   $0x4f,0x38(%rsp)
   1803d3680:	00 00 
   1803d3682:	e8 79 e7 df ff       	call   0x1801d1e00
   1803d3687:	48 8b d8             	mov    %rax,%rbx
   1803d368a:	48 85 c0             	test   %rax,%rax
   1803d368d:	75 0c                	jne    0x1803d369b
   1803d368f:	4c 8b cf             	mov    %rdi,%r9
   1803d3692:	48 8d 0d 3f 2b 4d 00 	lea    0x4d2b3f(%rip),%rcx        # 0x1808a61d8
   1803d3699:	eb 29                	jmp    0x1803d36c4
   1803d369b:	4c 8b c8             	mov    %rax,%r9
   1803d369e:	48 8d 15 73 36 4d 00 	lea    0x4d3673(%rip),%rdx        # 0x1808a6d18
   1803d36a5:	4c 8b c7             	mov    %rdi,%r8
   1803d36a8:	48 8d 0d 81 eb 2f 00 	lea    0x2feb81(%rip),%rcx        # 0x1806d2230
   1803d36af:	e8 bc 6c ff ff       	call   0x1803ca370
   1803d36b4:	eb 2a                	jmp    0x1803d36e0
   1803d36b6:	4c 8d 0d 86 7f 1b 00 	lea    0x1b7f86(%rip),%r9        # 0x18058b643
   1803d36bd:	48 8d 0d 3c 2b 4d 00 	lea    0x4d2b3c(%rip),%rcx        # 0x1808a6200
   1803d36c4:	ff 05 76 e1 d3 00    	incl   0xd3e176(%rip)        # 0x181111840
   1803d36ca:	4c 8d 05 47 36 4d 00 	lea    0x4d3647(%rip),%r8        # 0x1808a6d18
   1803d36d1:	48 8d 15 58 eb 2f 00 	lea    0x2feb58(%rip),%rdx        # 0x1806d2230
   1803d36d8:	e8 83 ee ed ff       	call   0x1802b2560
   1803d36dd:	49 8b de             	mov    %r14,%rbx
   1803d36e0:	ff 05 5e e1 d3 00    	incl   0xd3e15e(%rip)        # 0x181111844
   1803d36e6:	48 8d 3d 23 00 4d 00 	lea    0x4d0023(%rip),%rdi        # 0x1808a3710
   1803d36ed:	4c 8b c7             	mov    %rdi,%r8
   1803d36f0:	48 89 1d 11 e7 58 00 	mov    %rbx,0x58e711(%rip)        # 0x180961e08
   1803d36f7:	45 33 c9             	xor    %r9d,%r9d
   1803d36fa:	48 8d 15 07 36 4d 00 	lea    0x4d3607(%rip),%rdx        # 0x1808a6d08
   1803d3701:	48 8d 0d 28 eb 2f 00 	lea    0x2feb28(%rip),%rcx        # 0x1806d2230
   1803d3708:	e8 63 6c ff ff       	call   0x1803ca370
   1803d370d:	48 8d 0d 1c eb 2f 00 	lea    0x2feb1c(%rip),%rcx        # 0x1806d2230
   1803d3714:	ff 15 66 7a 19 00    	call   *0x197a66(%rip)        # 0x18056b180
   1803d371a:	48 8b d8             	mov    %rax,%rbx
   1803d371d:	48 85 c0             	test   %rax,%rax
   1803d3720:	0f 84 a3 00 00 00    	je     0x1803d37c9
   1803d3726:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d3729:	33 c0                	xor    %eax,%eax
   1803d372b:	0f 11 85 e8 09 00 00 	movups %xmm0,0x9e8(%rbp)
   1803d3732:	48 89 85 f8 09 00 00 	mov    %rax,0x9f8(%rbp)
   1803d3739:	ff 15 51 7b 19 00    	call   *0x197b51(%rip)        # 0x18056b290
   1803d373f:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d3745:	4c 8d 85 e8 09 00 00 	lea    0x9e8(%rbp),%r8
   1803d374c:	48 8b c8             	mov    %rax,%rcx
   1803d374f:	48 8b d3             	mov    %rbx,%rdx
   1803d3752:	ff 15 40 7b 19 00    	call   *0x197b40(%rip)        # 0x18056b298
   1803d3758:	85 c0                	test   %eax,%eax
   1803d375a:	74 6d                	je     0x1803d37c9
   1803d375c:	48 8b 85 e8 09 00 00 	mov    0x9e8(%rbp),%rax
   1803d3763:	8b 8d f0 09 00 00    	mov    0x9f0(%rbp),%ecx
   1803d3769:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d376e:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d3773:	48 85 c0             	test   %rax,%rax
   1803d3776:	74 51                	je     0x1803d37c9
   1803d3778:	48 85 c9             	test   %rcx,%rcx
   1803d377b:	74 4c                	je     0x1803d37c9
   1803d377d:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d3782:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d3787:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d378c:	48 c7 44 24 38 92 00 	movq   $0x92,0x38(%rsp)
   1803d3793:	00 00 
   1803d3795:	e8 66 e6 df ff       	call   0x1801d1e00
   1803d379a:	48 8b d8             	mov    %rax,%rbx
   1803d379d:	48 85 c0             	test   %rax,%rax
   1803d37a0:	75 0c                	jne    0x1803d37ae
   1803d37a2:	4c 8b cf             	mov    %rdi,%r9
   1803d37a5:	48 8d 0d 2c 2a 4d 00 	lea    0x4d2a2c(%rip),%rcx        # 0x1808a61d8
   1803d37ac:	eb 29                	jmp    0x1803d37d7
   1803d37ae:	4c 8b c8             	mov    %rax,%r9
   1803d37b1:	48 8d 15 50 35 4d 00 	lea    0x4d3550(%rip),%rdx        # 0x1808a6d08
   1803d37b8:	4c 8b c7             	mov    %rdi,%r8
   1803d37bb:	48 8d 0d 6e ea 2f 00 	lea    0x2fea6e(%rip),%rcx        # 0x1806d2230
   1803d37c2:	e8 a9 6b ff ff       	call   0x1803ca370
   1803d37c7:	eb 2a                	jmp    0x1803d37f3
   1803d37c9:	4c 8d 0d 73 7e 1b 00 	lea    0x1b7e73(%rip),%r9        # 0x18058b643
   1803d37d0:	48 8d 0d 29 2a 4d 00 	lea    0x4d2a29(%rip),%rcx        # 0x1808a6200
   1803d37d7:	ff 05 63 e0 d3 00    	incl   0xd3e063(%rip)        # 0x181111840
   1803d37dd:	4c 8d 05 24 35 4d 00 	lea    0x4d3524(%rip),%r8        # 0x1808a6d08
   1803d37e4:	48 8d 15 45 ea 2f 00 	lea    0x2fea45(%rip),%rdx        # 0x1806d2230
   1803d37eb:	e8 70 ed ed ff       	call   0x1802b2560
   1803d37f0:	49 8b de             	mov    %r14,%rbx
   1803d37f3:	ff 05 4b e0 d3 00    	incl   0xd3e04b(%rip)        # 0x181111844
   1803d37f9:	48 8d 3d 30 06 4d 00 	lea    0x4d0630(%rip),%rdi        # 0x1808a3e30
   1803d3800:	4c 8b c7             	mov    %rdi,%r8
   1803d3803:	48 89 1d 06 e6 58 00 	mov    %rbx,0x58e606(%rip)        # 0x180961e10
   1803d380a:	45 33 c9             	xor    %r9d,%r9d
   1803d380d:	48 8d 15 e4 34 4d 00 	lea    0x4d34e4(%rip),%rdx        # 0x1808a6cf8
   1803d3814:	48 8d 0d 15 ea 2f 00 	lea    0x2fea15(%rip),%rcx        # 0x1806d2230
   1803d381b:	e8 50 6b ff ff       	call   0x1803ca370
   1803d3820:	48 8d 0d 09 ea 2f 00 	lea    0x2fea09(%rip),%rcx        # 0x1806d2230
   1803d3827:	ff 15 53 79 19 00    	call   *0x197953(%rip)        # 0x18056b180
   1803d382d:	48 8b d8             	mov    %rax,%rbx
   1803d3830:	48 85 c0             	test   %rax,%rax
   1803d3833:	0f 84 a3 00 00 00    	je     0x1803d38dc
   1803d3839:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d383c:	33 c0                	xor    %eax,%eax
   1803d383e:	0f 11 85 00 0a 00 00 	movups %xmm0,0xa00(%rbp)
   1803d3845:	48 89 85 10 0a 00 00 	mov    %rax,0xa10(%rbp)
   1803d384c:	ff 15 3e 7a 19 00    	call   *0x197a3e(%rip)        # 0x18056b290
   1803d3852:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d3858:	4c 8d 85 00 0a 00 00 	lea    0xa00(%rbp),%r8
   1803d385f:	48 8b c8             	mov    %rax,%rcx
   1803d3862:	48 8b d3             	mov    %rbx,%rdx
   1803d3865:	ff 15 2d 7a 19 00    	call   *0x197a2d(%rip)        # 0x18056b298
   1803d386b:	85 c0                	test   %eax,%eax
   1803d386d:	74 6d                	je     0x1803d38dc
   1803d386f:	48 8b 85 00 0a 00 00 	mov    0xa00(%rbp),%rax
   1803d3876:	8b 8d 08 0a 00 00    	mov    0xa08(%rbp),%ecx
   1803d387c:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d3881:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d3886:	48 85 c0             	test   %rax,%rax
   1803d3889:	74 51                	je     0x1803d38dc
   1803d388b:	48 85 c9             	test   %rcx,%rcx
   1803d388e:	74 4c                	je     0x1803d38dc
   1803d3890:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d3895:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d389a:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d389f:	48 c7 44 24 38 61 00 	movq   $0x61,0x38(%rsp)
   1803d38a6:	00 00 
   1803d38a8:	e8 53 e5 df ff       	call   0x1801d1e00
   1803d38ad:	48 8b d8             	mov    %rax,%rbx
   1803d38b0:	48 85 c0             	test   %rax,%rax
   1803d38b3:	75 0c                	jne    0x1803d38c1
   1803d38b5:	4c 8b cf             	mov    %rdi,%r9
   1803d38b8:	48 8d 0d 19 29 4d 00 	lea    0x4d2919(%rip),%rcx        # 0x1808a61d8
   1803d38bf:	eb 29                	jmp    0x1803d38ea
   1803d38c1:	4c 8b c8             	mov    %rax,%r9
   1803d38c4:	48 8d 15 2d 34 4d 00 	lea    0x4d342d(%rip),%rdx        # 0x1808a6cf8
   1803d38cb:	4c 8b c7             	mov    %rdi,%r8
   1803d38ce:	48 8d 0d 5b e9 2f 00 	lea    0x2fe95b(%rip),%rcx        # 0x1806d2230
   1803d38d5:	e8 96 6a ff ff       	call   0x1803ca370
   1803d38da:	eb 2a                	jmp    0x1803d3906
   1803d38dc:	4c 8d 0d 60 7d 1b 00 	lea    0x1b7d60(%rip),%r9        # 0x18058b643
   1803d38e3:	48 8d 0d 16 29 4d 00 	lea    0x4d2916(%rip),%rcx        # 0x1808a6200
   1803d38ea:	ff 05 50 df d3 00    	incl   0xd3df50(%rip)        # 0x181111840
   1803d38f0:	4c 8d 05 01 34 4d 00 	lea    0x4d3401(%rip),%r8        # 0x1808a6cf8
   1803d38f7:	48 8d 15 32 e9 2f 00 	lea    0x2fe932(%rip),%rdx        # 0x1806d2230
   1803d38fe:	e8 5d ec ed ff       	call   0x1802b2560
   1803d3903:	49 8b de             	mov    %r14,%rbx
   1803d3906:	ff 05 38 df d3 00    	incl   0xd3df38(%rip)        # 0x181111844
   1803d390c:	48 8d 3d 7d 04 4d 00 	lea    0x4d047d(%rip),%rdi        # 0x1808a3d90
   1803d3913:	4c 8b c7             	mov    %rdi,%r8
   1803d3916:	48 89 1d fb e4 58 00 	mov    %rbx,0x58e4fb(%rip)        # 0x180961e18
   1803d391d:	45 33 c9             	xor    %r9d,%r9d
   1803d3920:	48 8d 15 c1 33 4d 00 	lea    0x4d33c1(%rip),%rdx        # 0x1808a6ce8
   1803d3927:	48 8d 0d 02 e9 2f 00 	lea    0x2fe902(%rip),%rcx        # 0x1806d2230
   1803d392e:	e8 3d 6a ff ff       	call   0x1803ca370
   1803d3933:	48 8d 0d f6 e8 2f 00 	lea    0x2fe8f6(%rip),%rcx        # 0x1806d2230
   1803d393a:	ff 15 40 78 19 00    	call   *0x197840(%rip)        # 0x18056b180
   1803d3940:	48 8b d8             	mov    %rax,%rbx
   1803d3943:	48 85 c0             	test   %rax,%rax
   1803d3946:	0f 84 a3 00 00 00    	je     0x1803d39ef
   1803d394c:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d394f:	33 c0                	xor    %eax,%eax
   1803d3951:	0f 11 85 18 0a 00 00 	movups %xmm0,0xa18(%rbp)
   1803d3958:	48 89 85 28 0a 00 00 	mov    %rax,0xa28(%rbp)
   1803d395f:	ff 15 2b 79 19 00    	call   *0x19792b(%rip)        # 0x18056b290
   1803d3965:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d396b:	4c 8d 85 18 0a 00 00 	lea    0xa18(%rbp),%r8
   1803d3972:	48 8b c8             	mov    %rax,%rcx
   1803d3975:	48 8b d3             	mov    %rbx,%rdx
   1803d3978:	ff 15 1a 79 19 00    	call   *0x19791a(%rip)        # 0x18056b298
   1803d397e:	85 c0                	test   %eax,%eax
   1803d3980:	74 6d                	je     0x1803d39ef
   1803d3982:	48 8b 85 18 0a 00 00 	mov    0xa18(%rbp),%rax
   1803d3989:	8b 8d 20 0a 00 00    	mov    0xa20(%rbp),%ecx
   1803d398f:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d3994:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d3999:	48 85 c0             	test   %rax,%rax
   1803d399c:	74 51                	je     0x1803d39ef
   1803d399e:	48 85 c9             	test   %rcx,%rcx
   1803d39a1:	74 4c                	je     0x1803d39ef
   1803d39a3:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d39a8:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d39ad:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d39b2:	48 c7 44 24 38 91 00 	movq   $0x91,0x38(%rsp)
   1803d39b9:	00 00 
   1803d39bb:	e8 40 e4 df ff       	call   0x1801d1e00
   1803d39c0:	48 8b d8             	mov    %rax,%rbx
   1803d39c3:	48 85 c0             	test   %rax,%rax
   1803d39c6:	75 0c                	jne    0x1803d39d4
   1803d39c8:	4c 8b cf             	mov    %rdi,%r9
   1803d39cb:	48 8d 0d 06 28 4d 00 	lea    0x4d2806(%rip),%rcx        # 0x1808a61d8
   1803d39d2:	eb 29                	jmp    0x1803d39fd
   1803d39d4:	4c 8b c8             	mov    %rax,%r9
   1803d39d7:	48 8d 15 0a 33 4d 00 	lea    0x4d330a(%rip),%rdx        # 0x1808a6ce8
   1803d39de:	4c 8b c7             	mov    %rdi,%r8
   1803d39e1:	48 8d 0d 48 e8 2f 00 	lea    0x2fe848(%rip),%rcx        # 0x1806d2230
   1803d39e8:	e8 83 69 ff ff       	call   0x1803ca370
   1803d39ed:	eb 2a                	jmp    0x1803d3a19
   1803d39ef:	4c 8d 0d 4d 7c 1b 00 	lea    0x1b7c4d(%rip),%r9        # 0x18058b643
   1803d39f6:	48 8d 0d 03 28 4d 00 	lea    0x4d2803(%rip),%rcx        # 0x1808a6200
   1803d39fd:	ff 05 3d de d3 00    	incl   0xd3de3d(%rip)        # 0x181111840
   1803d3a03:	4c 8d 05 de 32 4d 00 	lea    0x4d32de(%rip),%r8        # 0x1808a6ce8
   1803d3a0a:	48 8d 15 1f e8 2f 00 	lea    0x2fe81f(%rip),%rdx        # 0x1806d2230
   1803d3a11:	e8 4a eb ed ff       	call   0x1802b2560
   1803d3a16:	49 8b de             	mov    %r14,%rbx
   1803d3a19:	ff 05 25 de d3 00    	incl   0xd3de25(%rip)        # 0x181111844
   1803d3a1f:	48 8d 3d 6a 02 4d 00 	lea    0x4d026a(%rip),%rdi        # 0x1808a3c90
   1803d3a26:	4c 8b c7             	mov    %rdi,%r8
   1803d3a29:	48 89 1d f0 e3 58 00 	mov    %rbx,0x58e3f0(%rip)        # 0x180961e20
   1803d3a30:	45 33 c9             	xor    %r9d,%r9d
   1803d3a33:	48 8d 15 3e c1 32 00 	lea    0x32c13e(%rip),%rdx        # 0x1806ffb78
   1803d3a3a:	48 8d 0d ef e7 2f 00 	lea    0x2fe7ef(%rip),%rcx        # 0x1806d2230
   1803d3a41:	e8 2a 69 ff ff       	call   0x1803ca370
   1803d3a46:	48 8d 0d e3 e7 2f 00 	lea    0x2fe7e3(%rip),%rcx        # 0x1806d2230
   1803d3a4d:	ff 15 2d 77 19 00    	call   *0x19772d(%rip)        # 0x18056b180
   1803d3a53:	48 8b d8             	mov    %rax,%rbx
   1803d3a56:	48 85 c0             	test   %rax,%rax
   1803d3a59:	0f 84 99 00 00 00    	je     0x1803d3af8
   1803d3a5f:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d3a62:	33 c0                	xor    %eax,%eax
   1803d3a64:	0f 11 44 24 50       	movups %xmm0,0x50(%rsp)
   1803d3a69:	48 89 44 24 60       	mov    %rax,0x60(%rsp)
   1803d3a6e:	ff 15 1c 78 19 00    	call   *0x19781c(%rip)        # 0x18056b290
   1803d3a74:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d3a7a:	4c 8d 44 24 50       	lea    0x50(%rsp),%r8
   1803d3a7f:	48 8b c8             	mov    %rax,%rcx
   1803d3a82:	48 8b d3             	mov    %rbx,%rdx
   1803d3a85:	ff 15 0d 78 19 00    	call   *0x19780d(%rip)        # 0x18056b298
   1803d3a8b:	85 c0                	test   %eax,%eax
   1803d3a8d:	74 69                	je     0x1803d3af8
   1803d3a8f:	48 8b 44 24 50       	mov    0x50(%rsp),%rax
   1803d3a94:	8b 4c 24 58          	mov    0x58(%rsp),%ecx
   1803d3a98:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d3a9d:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d3aa2:	48 85 c0             	test   %rax,%rax
   1803d3aa5:	74 51                	je     0x1803d3af8
   1803d3aa7:	48 85 c9             	test   %rcx,%rcx
   1803d3aaa:	74 4c                	je     0x1803d3af8
   1803d3aac:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d3ab1:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d3ab6:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d3abb:	48 c7 44 24 38 fa 00 	movq   $0xfa,0x38(%rsp)
   1803d3ac2:	00 00 
   1803d3ac4:	e8 37 e3 df ff       	call   0x1801d1e00
   1803d3ac9:	48 8b d8             	mov    %rax,%rbx
   1803d3acc:	48 85 c0             	test   %rax,%rax
   1803d3acf:	75 0c                	jne    0x1803d3add
   1803d3ad1:	4c 8b cf             	mov    %rdi,%r9
   1803d3ad4:	48 8d 0d fd 26 4d 00 	lea    0x4d26fd(%rip),%rcx        # 0x1808a61d8
   1803d3adb:	eb 29                	jmp    0x1803d3b06
   1803d3add:	4c 8b c8             	mov    %rax,%r9
   1803d3ae0:	48 8d 15 91 c0 32 00 	lea    0x32c091(%rip),%rdx        # 0x1806ffb78
   1803d3ae7:	4c 8b c7             	mov    %rdi,%r8
   1803d3aea:	48 8d 0d 3f e7 2f 00 	lea    0x2fe73f(%rip),%rcx        # 0x1806d2230
   1803d3af1:	e8 7a 68 ff ff       	call   0x1803ca370
   1803d3af6:	eb 2a                	jmp    0x1803d3b22
   1803d3af8:	4c 8d 0d 44 7b 1b 00 	lea    0x1b7b44(%rip),%r9        # 0x18058b643
   1803d3aff:	48 8d 0d fa 26 4d 00 	lea    0x4d26fa(%rip),%rcx        # 0x1808a6200
   1803d3b06:	ff 05 34 dd d3 00    	incl   0xd3dd34(%rip)        # 0x181111840
   1803d3b0c:	4c 8d 05 65 c0 32 00 	lea    0x32c065(%rip),%r8        # 0x1806ffb78
   1803d3b13:	48 8d 15 16 e7 2f 00 	lea    0x2fe716(%rip),%rdx        # 0x1806d2230
   1803d3b1a:	e8 41 ea ed ff       	call   0x1802b2560
   1803d3b1f:	49 8b de             	mov    %r14,%rbx
   1803d3b22:	ff 05 1c dd d3 00    	incl   0xd3dd1c(%rip)        # 0x181111844
   1803d3b28:	48 8d 3d 19 00 4d 00 	lea    0x4d0019(%rip),%rdi        # 0x1808a3b48
   1803d3b2f:	4c 8b c7             	mov    %rdi,%r8
   1803d3b32:	48 89 1d ef e2 58 00 	mov    %rbx,0x58e2ef(%rip)        # 0x180961e28
   1803d3b39:	45 33 c9             	xor    %r9d,%r9d
   1803d3b3c:	48 8d 15 8d 31 4d 00 	lea    0x4d318d(%rip),%rdx        # 0x1808a6cd0
   1803d3b43:	48 8d 0d e6 e6 2f 00 	lea    0x2fe6e6(%rip),%rcx        # 0x1806d2230
   1803d3b4a:	e8 21 68 ff ff       	call   0x1803ca370
   1803d3b4f:	48 8d 0d da e6 2f 00 	lea    0x2fe6da(%rip),%rcx        # 0x1806d2230
   1803d3b56:	ff 15 24 76 19 00    	call   *0x197624(%rip)        # 0x18056b180
   1803d3b5c:	48 8b d8             	mov    %rax,%rbx
   1803d3b5f:	48 85 c0             	test   %rax,%rax
   1803d3b62:	0f 84 99 00 00 00    	je     0x1803d3c01
   1803d3b68:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d3b6b:	33 c0                	xor    %eax,%eax
   1803d3b6d:	0f 11 44 24 68       	movups %xmm0,0x68(%rsp)
   1803d3b72:	48 89 44 24 78       	mov    %rax,0x78(%rsp)
   1803d3b77:	ff 15 13 77 19 00    	call   *0x197713(%rip)        # 0x18056b290
   1803d3b7d:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d3b83:	4c 8d 44 24 68       	lea    0x68(%rsp),%r8
   1803d3b88:	48 8b c8             	mov    %rax,%rcx
   1803d3b8b:	48 8b d3             	mov    %rbx,%rdx
   1803d3b8e:	ff 15 04 77 19 00    	call   *0x197704(%rip)        # 0x18056b298
   1803d3b94:	85 c0                	test   %eax,%eax
   1803d3b96:	74 69                	je     0x1803d3c01
   1803d3b98:	48 8b 44 24 68       	mov    0x68(%rsp),%rax
   1803d3b9d:	8b 4c 24 70          	mov    0x70(%rsp),%ecx
   1803d3ba1:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d3ba6:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d3bab:	48 85 c0             	test   %rax,%rax
   1803d3bae:	74 51                	je     0x1803d3c01
   1803d3bb0:	48 85 c9             	test   %rcx,%rcx
   1803d3bb3:	74 4c                	je     0x1803d3c01
   1803d3bb5:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d3bba:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d3bbf:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d3bc4:	48 c7 44 24 38 3b 00 	movq   $0x3b,0x38(%rsp)
   1803d3bcb:	00 00 
   1803d3bcd:	e8 2e e2 df ff       	call   0x1801d1e00
   1803d3bd2:	48 8b d8             	mov    %rax,%rbx
   1803d3bd5:	48 85 c0             	test   %rax,%rax
   1803d3bd8:	75 0c                	jne    0x1803d3be6
   1803d3bda:	4c 8b cf             	mov    %rdi,%r9
   1803d3bdd:	48 8d 0d f4 25 4d 00 	lea    0x4d25f4(%rip),%rcx        # 0x1808a61d8
   1803d3be4:	eb 29                	jmp    0x1803d3c0f
   1803d3be6:	4c 8b c8             	mov    %rax,%r9
   1803d3be9:	48 8d 15 e0 30 4d 00 	lea    0x4d30e0(%rip),%rdx        # 0x1808a6cd0
   1803d3bf0:	4c 8b c7             	mov    %rdi,%r8
   1803d3bf3:	48 8d 0d 36 e6 2f 00 	lea    0x2fe636(%rip),%rcx        # 0x1806d2230
   1803d3bfa:	e8 71 67 ff ff       	call   0x1803ca370
   1803d3bff:	eb 2a                	jmp    0x1803d3c2b
   1803d3c01:	4c 8d 0d 3b 7a 1b 00 	lea    0x1b7a3b(%rip),%r9        # 0x18058b643
   1803d3c08:	48 8d 0d f1 25 4d 00 	lea    0x4d25f1(%rip),%rcx        # 0x1808a6200
   1803d3c0f:	ff 05 2b dc d3 00    	incl   0xd3dc2b(%rip)        # 0x181111840
   1803d3c15:	4c 8d 05 b4 30 4d 00 	lea    0x4d30b4(%rip),%r8        # 0x1808a6cd0
   1803d3c1c:	48 8d 15 0d e6 2f 00 	lea    0x2fe60d(%rip),%rdx        # 0x1806d2230
   1803d3c23:	e8 38 e9 ed ff       	call   0x1802b2560
   1803d3c28:	49 8b de             	mov    %r14,%rbx
   1803d3c2b:	ff 05 13 dc d3 00    	incl   0xd3dc13(%rip)        # 0x181111844
   1803d3c31:	4c 8d 05 88 fe 4c 00 	lea    0x4cfe88(%rip),%r8        # 0x1808a3ac0
   1803d3c38:	45 33 c9             	xor    %r9d,%r9d
   1803d3c3b:	48 89 1d ee e1 58 00 	mov    %rbx,0x58e1ee(%rip)        # 0x180961e30
   1803d3c42:	48 8d 15 67 30 4d 00 	lea    0x4d3067(%rip),%rdx        # 0x1808a6cb0
   1803d3c49:	48 8d 0d e0 e5 2f 00 	lea    0x2fe5e0(%rip),%rcx        # 0x1806d2230
   1803d3c50:	e8 1b 67 ff ff       	call   0x1803ca370
   1803d3c55:	48 8d 15 d4 e5 2f 00 	lea    0x2fe5d4(%rip),%rdx        # 0x1806d2230
   1803d3c5c:	48 8d 8d 30 0a 00 00 	lea    0xa30(%rbp),%rcx
   1803d3c63:	e8 f8 c4 c3 ff       	call   0x180010160
   1803d3c68:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d3c6d:	48 8d 8d 40 0a 00 00 	lea    0xa40(%rbp),%rcx
   1803d3c74:	0f 10 00             	movups (%rax),%xmm0
   1803d3c77:	0f 29 44 24 30       	movaps %xmm0,0x30(%rsp)
   1803d3c7c:	e8 ef e0 df ff       	call   0x1801d1d70
   1803d3c81:	48 8d 4c 24 30       	lea    0x30(%rsp),%rcx
   1803d3c86:	0f 10 00             	movups (%rax),%xmm0
   1803d3c89:	0f 11 44 24 30       	movups %xmm0,0x30(%rsp)
   1803d3c8e:	e8 1d dd c3 ff       	call   0x1800119b0
   1803d3c93:	84 c0                	test   %al,%al
   1803d3c95:	75 26                	jne    0x1803d3cbd
   1803d3c97:	4c 8d 0d a5 79 1b 00 	lea    0x1b79a5(%rip),%r9        # 0x18058b643
   1803d3c9e:	4c 8d 05 0b 30 4d 00 	lea    0x4d300b(%rip),%r8        # 0x1808a6cb0
   1803d3ca5:	48 8d 15 84 e5 2f 00 	lea    0x2fe584(%rip),%rdx        # 0x1806d2230
   1803d3cac:	48 8d 0d 4d 25 4d 00 	lea    0x4d254d(%rip),%rcx        # 0x1808a6200
   1803d3cb3:	e8 98 66 ff ff       	call   0x1803ca350
   1803d3cb8:	48 8b d8             	mov    %rax,%rbx
   1803d3cbb:	eb 75                	jmp    0x1803d3d32
   1803d3cbd:	48 8d 15 fc fd 4c 00 	lea    0x4cfdfc(%rip),%rdx        # 0x1808a3ac0
   1803d3cc4:	48 8d 8d 50 0a 00 00 	lea    0xa50(%rbp),%rcx
   1803d3ccb:	e8 90 c4 c3 ff       	call   0x180010160
   1803d3cd0:	48 8d 54 24 40       	lea    0x40(%rsp),%rdx
   1803d3cd5:	48 8d 4c 24 30       	lea    0x30(%rsp),%rcx
   1803d3cda:	0f 10 00             	movups (%rax),%xmm0
   1803d3cdd:	0f 29 44 24 40       	movaps %xmm0,0x40(%rsp)
   1803d3ce2:	e8 19 e1 df ff       	call   0x1801d1e00
   1803d3ce7:	48 8b d8             	mov    %rax,%rbx
   1803d3cea:	48 85 c0             	test   %rax,%rax
   1803d3ced:	75 26                	jne    0x1803d3d15
   1803d3cef:	4c 8d 0d ca fd 4c 00 	lea    0x4cfdca(%rip),%r9        # 0x1808a3ac0
   1803d3cf6:	4c 8d 05 b3 2f 4d 00 	lea    0x4d2fb3(%rip),%r8        # 0x1808a6cb0
   1803d3cfd:	48 8d 15 2c e5 2f 00 	lea    0x2fe52c(%rip),%rdx        # 0x1806d2230
   1803d3d04:	48 8d 0d cd 24 4d 00 	lea    0x4d24cd(%rip),%rcx        # 0x1808a61d8
   1803d3d0b:	e8 40 66 ff ff       	call   0x1803ca350
   1803d3d10:	48 8b d8             	mov    %rax,%rbx
   1803d3d13:	eb 1d                	jmp    0x1803d3d32
   1803d3d15:	4c 8b c8             	mov    %rax,%r9
   1803d3d18:	4c 8d 05 a1 fd 4c 00 	lea    0x4cfda1(%rip),%r8        # 0x1808a3ac0
   1803d3d1f:	48 8d 15 8a 2f 4d 00 	lea    0x4d2f8a(%rip),%rdx        # 0x1808a6cb0
   1803d3d26:	48 8d 0d 03 e5 2f 00 	lea    0x2fe503(%rip),%rcx        # 0x1806d2230
   1803d3d2d:	e8 3e 66 ff ff       	call   0x1803ca370
   1803d3d32:	4c 8d 05 37 fd 4c 00 	lea    0x4cfd37(%rip),%r8        # 0x1808a3a70
   1803d3d39:	48 89 1d f8 e0 58 00 	mov    %rbx,0x58e0f8(%rip)        # 0x180961e38
   1803d3d40:	48 8d 15 49 2f 4d 00 	lea    0x4d2f49(%rip),%rdx        # 0x1808a6c90
   1803d3d47:	48 8d 0d e2 e4 2f 00 	lea    0x2fe4e2(%rip),%rcx        # 0x1806d2230
   1803d3d4e:	e8 7d 68 ff ff       	call   0x1803ca5d0
   1803d3d53:	4c 8d 05 36 fe 4c 00 	lea    0x4cfe36(%rip),%r8        # 0x1808a3b90
   1803d3d5a:	48 89 05 df e0 58 00 	mov    %rax,0x58e0df(%rip)        # 0x180961e40
   1803d3d61:	48 8d 15 f8 bd 32 00 	lea    0x32bdf8(%rip),%rdx        # 0x1806ffb60
   1803d3d68:	48 8d 0d c1 e4 2f 00 	lea    0x2fe4c1(%rip),%rcx        # 0x1806d2230
   1803d3d6f:	e8 5c 68 ff ff       	call   0x1803ca5d0
   1803d3d74:	4c 8d 05 95 fc 4c 00 	lea    0x4cfc95(%rip),%r8        # 0x1808a3a10
   1803d3d7b:	48 89 05 c6 e0 58 00 	mov    %rax,0x58e0c6(%rip)        # 0x180961e48
   1803d3d82:	48 8d 15 e7 2e 4d 00 	lea    0x4d2ee7(%rip),%rdx        # 0x1808a6c70
   1803d3d89:	48 8d 0d a0 e4 2f 00 	lea    0x2fe4a0(%rip),%rcx        # 0x1806d2230
   1803d3d90:	e8 3b 68 ff ff       	call   0x1803ca5d0
   1803d3d95:	4c 8d 05 4c 02 4d 00 	lea    0x4d024c(%rip),%r8        # 0x1808a3fe8
   1803d3d9c:	48 89 05 ad e0 58 00 	mov    %rax,0x58e0ad(%rip)        # 0x180961e50
   1803d3da3:	48 8d 15 ae 30 4d 00 	lea    0x4d30ae(%rip),%rdx        # 0x1808a6e58
   1803d3daa:	48 8d 0d 7f e4 2f 00 	lea    0x2fe47f(%rip),%rcx        # 0x1806d2230
   1803d3db1:	e8 1a 68 ff ff       	call   0x1803ca5d0
   1803d3db6:	48 8b d8             	mov    %rax,%rbx
   1803d3db9:	48 85 c0             	test   %rax,%rax
   1803d3dbc:	0f 84 c9 01 00 00    	je     0x1803d3f8b
   1803d3dc2:	48 8d 15 ff 01 4d 00 	lea    0x4d01ff(%rip),%rdx        # 0x1808a3fc8
   1803d3dc9:	48 89 05 88 e0 58 00 	mov    %rax,0x58e088(%rip)        # 0x180961e58
   1803d3dd0:	48 8d 8d 60 0a 00 00 	lea    0xa60(%rbp),%rcx
   1803d3dd7:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d3ddc:	48 c7 44 24 48 00 01 	movq   $0x100,0x48(%rsp)
   1803d3de3:	00 00 
   1803d3de5:	e8 76 c3 c3 ff       	call   0x180010160
   1803d3dea:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d3def:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d3df4:	0f 10 00             	movups (%rax),%xmm0
   1803d3df7:	0f 29 44 24 30       	movaps %xmm0,0x30(%rsp)
   1803d3dfc:	e8 ff df df ff       	call   0x1801d1e00
   1803d3e01:	48 8b f8             	mov    %rax,%rdi
   1803d3e04:	48 85 c0             	test   %rax,%rax
   1803d3e07:	74 1f                	je     0x1803d3e28
   1803d3e09:	48 8d 48 03          	lea    0x3(%rax),%rcx
   1803d3e0d:	e8 ee d3 c3 ff       	call   0x180011200
   1803d3e12:	48 8d 4f 09          	lea    0x9(%rdi),%rcx
   1803d3e16:	89 05 64 e0 58 00    	mov    %eax,0x58e064(%rip)        # 0x180961e80
   1803d3e1c:	e8 af e2 df ff       	call   0x1801d20d0
   1803d3e21:	48 89 05 50 e0 58 00 	mov    %rax,0x58e050(%rip)        # 0x180961e78
   1803d3e28:	48 8d 15 81 01 4d 00 	lea    0x4d0181(%rip),%rdx        # 0x1808a3fb0
   1803d3e2f:	48 8d 8d 70 0a 00 00 	lea    0xa70(%rbp),%rcx
   1803d3e36:	e8 25 c3 c3 ff       	call   0x180010160
   1803d3e3b:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d3e40:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d3e45:	0f 10 00             	movups (%rax),%xmm0
   1803d3e48:	0f 29 44 24 30       	movaps %xmm0,0x30(%rsp)
   1803d3e4d:	e8 ae df df ff       	call   0x1801d1e00
   1803d3e52:	48 85 c0             	test   %rax,%rax
   1803d3e55:	74 10                	je     0x1803d3e67
   1803d3e57:	48 8d 48 05          	lea    0x5(%rax),%rcx
   1803d3e5b:	e8 70 e2 df ff       	call   0x1801d20d0
   1803d3e60:	48 89 05 f9 df 58 00 	mov    %rax,0x58dff9(%rip)        # 0x180961e60
   1803d3e67:	48 8d 15 da 00 4d 00 	lea    0x4d00da(%rip),%rdx        # 0x1808a3f48
   1803d3e6e:	48 8d 8d 80 0a 00 00 	lea    0xa80(%rbp),%rcx
   1803d3e75:	e8 e6 c2 c3 ff       	call   0x180010160
   1803d3e7a:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d3e7f:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d3e84:	0f 10 00             	movups (%rax),%xmm0
   1803d3e87:	0f 29 44 24 30       	movaps %xmm0,0x30(%rsp)
   1803d3e8c:	e8 6f df df ff       	call   0x1801d1e00
   1803d3e91:	48 8b f8             	mov    %rax,%rdi
   1803d3e94:	48 85 c0             	test   %rax,%rax
   1803d3e97:	74 20                	je     0x1803d3eb9
   1803d3e99:	48 8d 48 02          	lea    0x2(%rax),%rcx
   1803d3e9d:	e8 5e d3 c3 ff       	call   0x180011200
   1803d3ea2:	48 8d 4f 0b          	lea    0xb(%rdi),%rcx
   1803d3ea6:	89 05 d8 df 58 00    	mov    %eax,0x58dfd8(%rip)        # 0x180961e84
   1803d3eac:	e8 4f d3 c3 ff       	call   0x180011200
   1803d3eb1:	89 05 d1 df 58 00    	mov    %eax,0x58dfd1(%rip)        # 0x180961e88
   1803d3eb7:	eb 13                	jmp    0x1803d3ecc
   1803d3eb9:	48 8d 15 70 e3 2f 00 	lea    0x2fe370(%rip),%rdx        # 0x1806d2230
   1803d3ec0:	48 8d 0d 49 2f 4d 00 	lea    0x4d2f49(%rip),%rcx        # 0x1808a6e10
   1803d3ec7:	e8 94 e6 ed ff       	call   0x1802b2560
   1803d3ecc:	4c 39 35 a5 df 58 00 	cmp    %r14,0x58dfa5(%rip)        # 0x180961e78
   1803d3ed3:	74 09                	je     0x1803d3ede
   1803d3ed5:	4c 39 35 84 df 58 00 	cmp    %r14,0x58df84(%rip)        # 0x180961e60
   1803d3edc:	75 13                	jne    0x1803d3ef1
   1803d3ede:	48 8d 15 4b e3 2f 00 	lea    0x2fe34b(%rip),%rdx        # 0x1806d2230
   1803d3ee5:	48 8d 0d dc 2e 4d 00 	lea    0x4d2edc(%rip),%rcx        # 0x1808a6dc8
   1803d3eec:	e8 6f e6 ed ff       	call   0x1802b2560
   1803d3ef1:	48 8d 4b 04          	lea    0x4(%rbx),%rcx
   1803d3ef5:	e8 26 d3 c3 ff       	call   0x180011220
   1803d3efa:	3c e8                	cmp    $0xe8,%al
   1803d3efc:	75 10                	jne    0x1803d3f0e
   1803d3efe:	48 8d 4b 04          	lea    0x4(%rbx),%rcx
   1803d3f02:	e8 c9 e1 df ff       	call   0x1801d20d0
   1803d3f07:	48 89 05 5a df 58 00 	mov    %rax,0x58df5a(%rip)        # 0x180961e68
   1803d3f0e:	48 8b 05 4b df 58 00 	mov    0x58df4b(%rip),%rax        # 0x180961e60
   1803d3f15:	48 85 c0             	test   %rax,%rax
   1803d3f18:	74 4c                	je     0x1803d3f66
   1803d3f1a:	48 8d 15 57 00 4d 00 	lea    0x4d0057(%rip),%rdx        # 0x1808a3f78
   1803d3f21:	48 89 44 24 30       	mov    %rax,0x30(%rsp)
   1803d3f26:	48 8d 8d 90 0a 00 00 	lea    0xa90(%rbp),%rcx
   1803d3f2d:	48 c7 44 24 38 00 03 	movq   $0x300,0x38(%rsp)
   1803d3f34:	00 00 
   1803d3f36:	e8 25 c2 c3 ff       	call   0x180010160
   1803d3f3b:	48 8d 54 24 40       	lea    0x40(%rsp),%rdx
   1803d3f40:	48 8d 4c 24 30       	lea    0x30(%rsp),%rcx
   1803d3f45:	0f 10 00             	movups (%rax),%xmm0
   1803d3f48:	0f 29 44 24 40       	movaps %xmm0,0x40(%rsp)
   1803d3f4d:	e8 ae de df ff       	call   0x1801d1e00
   1803d3f52:	48 85 c0             	test   %rax,%rax
   1803d3f55:	74 0f                	je     0x1803d3f66
   1803d3f57:	48 8d 48 03          	lea    0x3(%rax),%rcx
   1803d3f5b:	e8 a0 d2 c3 ff       	call   0x180011200
   1803d3f60:	89 05 0a df 58 00    	mov    %eax,0x58df0a(%rip)        # 0x180961e70
   1803d3f66:	4c 39 35 fb de 58 00 	cmp    %r14,0x58defb(%rip)        # 0x180961e68
   1803d3f6d:	74 09                	je     0x1803d3f78
   1803d3f6f:	44 39 35 fa de 58 00 	cmp    %r14d,0x58defa(%rip)        # 0x180961e70
   1803d3f76:	75 13                	jne    0x1803d3f8b
   1803d3f78:	48 8d 15 b1 e2 2f 00 	lea    0x2fe2b1(%rip),%rdx        # 0x1806d2230
   1803d3f7f:	48 8d 0d fa 2d 4d 00 	lea    0x4d2dfa(%rip),%rcx        # 0x1808a6d80
   1803d3f86:	e8 d5 e5 ed ff       	call   0x1802b2560
   1803d3f8b:	4c 8d 05 86 ff 4c 00 	lea    0x4cff86(%rip),%r8        # 0x1808a3f18
   1803d3f92:	48 8d 15 d7 2d 4d 00 	lea    0x4d2dd7(%rip),%rdx        # 0x1808a6d70
   1803d3f99:	48 8d 0d 90 e2 2f 00 	lea    0x2fe290(%rip),%rcx        # 0x1806d2230
   1803d3fa0:	e8 2b 66 ff ff       	call   0x1803ca5d0
   1803d3fa5:	ff 05 99 d8 d3 00    	incl   0xd3d899(%rip)        # 0x181111844
   1803d3fab:	48 8d 3d 36 ff 4c 00 	lea    0x4cff36(%rip),%rdi        # 0x1808a3ee8
   1803d3fb2:	4c 8b c7             	mov    %rdi,%r8
   1803d3fb5:	48 89 05 d4 de 58 00 	mov    %rax,0x58ded4(%rip)        # 0x180961e90
   1803d3fbc:	45 33 c9             	xor    %r9d,%r9d
   1803d3fbf:	48 8d 15 92 2d 4d 00 	lea    0x4d2d92(%rip),%rdx        # 0x1808a6d58
   1803d3fc6:	48 8d 0d 63 e2 2f 00 	lea    0x2fe263(%rip),%rcx        # 0x1806d2230
   1803d3fcd:	e8 9e 63 ff ff       	call   0x1803ca370
   1803d3fd2:	48 8d 0d 57 e2 2f 00 	lea    0x2fe257(%rip),%rcx        # 0x1806d2230
   1803d3fd9:	ff 15 a1 71 19 00    	call   *0x1971a1(%rip)        # 0x18056b180
   1803d3fdf:	48 8b d8             	mov    %rax,%rbx
   1803d3fe2:	48 85 c0             	test   %rax,%rax
   1803d3fe5:	0f 84 94 00 00 00    	je     0x1803d407f
   1803d3feb:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d3fee:	33 c0                	xor    %eax,%eax
   1803d3ff0:	0f 11 45 80          	movups %xmm0,-0x80(%rbp)
   1803d3ff4:	48 89 45 90          	mov    %rax,-0x70(%rbp)
   1803d3ff8:	ff 15 92 72 19 00    	call   *0x197292(%rip)        # 0x18056b290
   1803d3ffe:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d4004:	4c 8d 45 80          	lea    -0x80(%rbp),%r8
   1803d4008:	48 8b c8             	mov    %rax,%rcx
   1803d400b:	48 8b d3             	mov    %rbx,%rdx
   1803d400e:	ff 15 84 72 19 00    	call   *0x197284(%rip)        # 0x18056b298
   1803d4014:	85 c0                	test   %eax,%eax
   1803d4016:	74 67                	je     0x1803d407f
   1803d4018:	48 8b 45 80          	mov    -0x80(%rbp),%rax
   1803d401c:	8b 4d 88             	mov    -0x78(%rbp),%ecx
   1803d401f:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d4024:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d4029:	48 85 c0             	test   %rax,%rax
   1803d402c:	74 51                	je     0x1803d407f
   1803d402e:	48 85 c9             	test   %rcx,%rcx
   1803d4031:	74 4c                	je     0x1803d407f
   1803d4033:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d4038:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d403d:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d4042:	48 c7 44 24 38 2e 00 	movq   $0x2e,0x38(%rsp)
   1803d4049:	00 00 
   1803d404b:	e8 b0 dd df ff       	call   0x1801d1e00
   1803d4050:	48 8b d8             	mov    %rax,%rbx
   1803d4053:	48 85 c0             	test   %rax,%rax
   1803d4056:	75 0c                	jne    0x1803d4064
   1803d4058:	4c 8b cf             	mov    %rdi,%r9
   1803d405b:	48 8d 0d 76 21 4d 00 	lea    0x4d2176(%rip),%rcx        # 0x1808a61d8
   1803d4062:	eb 29                	jmp    0x1803d408d
   1803d4064:	4c 8b c8             	mov    %rax,%r9
   1803d4067:	48 8d 15 ea 2c 4d 00 	lea    0x4d2cea(%rip),%rdx        # 0x1808a6d58
   1803d406e:	4c 8b c7             	mov    %rdi,%r8
   1803d4071:	48 8d 0d b8 e1 2f 00 	lea    0x2fe1b8(%rip),%rcx        # 0x1806d2230
   1803d4078:	e8 f3 62 ff ff       	call   0x1803ca370
   1803d407d:	eb 2a                	jmp    0x1803d40a9
   1803d407f:	4c 8d 0d bd 75 1b 00 	lea    0x1b75bd(%rip),%r9        # 0x18058b643
   1803d4086:	48 8d 0d 73 21 4d 00 	lea    0x4d2173(%rip),%rcx        # 0x1808a6200
   1803d408d:	ff 05 ad d7 d3 00    	incl   0xd3d7ad(%rip)        # 0x181111840
   1803d4093:	4c 8d 05 be 2c 4d 00 	lea    0x4d2cbe(%rip),%r8        # 0x1808a6d58
   1803d409a:	48 8d 15 8f e1 2f 00 	lea    0x2fe18f(%rip),%rdx        # 0x1806d2230
   1803d40a1:	e8 ba e4 ed ff       	call   0x1802b2560
   1803d40a6:	49 8b de             	mov    %r14,%rbx
   1803d40a9:	4c 8d 05 f0 fd 4c 00 	lea    0x4cfdf0(%rip),%r8        # 0x1808a3ea0
   1803d40b0:	48 89 1d e1 dd 58 00 	mov    %rbx,0x58dde1(%rip)        # 0x180961e98
   1803d40b7:	48 8d 15 82 2c 4d 00 	lea    0x4d2c82(%rip),%rdx        # 0x1808a6d40
   1803d40be:	48 8d 0d 6b e1 2f 00 	lea    0x2fe16b(%rip),%rcx        # 0x1806d2230
   1803d40c5:	e8 06 65 ff ff       	call   0x1803ca5d0
   1803d40ca:	4c 8d 05 ef 01 4d 00 	lea    0x4d01ef(%rip),%r8        # 0x1808a42c0
   1803d40d1:	48 89 05 c8 dd 58 00 	mov    %rax,0x58ddc8(%rip)        # 0x180961ea0
   1803d40d8:	48 8d 15 49 2c 4d 00 	lea    0x4d2c49(%rip),%rdx        # 0x1808a6d28
   1803d40df:	48 8d 0d 4a e1 2f 00 	lea    0x2fe14a(%rip),%rcx        # 0x1806d2230
   1803d40e6:	e8 e5 64 ff ff       	call   0x1803ca5d0
   1803d40eb:	4c 8d 05 6e 01 4d 00 	lea    0x4d016e(%rip),%r8        # 0x1808a4260
   1803d40f2:	48 89 05 af dd 58 00 	mov    %rax,0x58ddaf(%rip)        # 0x180961ea8
   1803d40f9:	48 8d 15 f8 2d 4d 00 	lea    0x4d2df8(%rip),%rdx        # 0x1808a6ef8
   1803d4100:	48 8d 0d 29 e1 2f 00 	lea    0x2fe129(%rip),%rcx        # 0x1806d2230
   1803d4107:	e8 c4 64 ff ff       	call   0x1803ca5d0
   1803d410c:	4c 8d 05 fd 00 4d 00 	lea    0x4d00fd(%rip),%r8        # 0x1808a4210
   1803d4113:	48 89 05 96 dd 58 00 	mov    %rax,0x58dd96(%rip)        # 0x180961eb0
   1803d411a:	48 8d 15 bf 2d 4d 00 	lea    0x4d2dbf(%rip),%rdx        # 0x1808a6ee0
   1803d4121:	48 8d 0d 08 e1 2f 00 	lea    0x2fe108(%rip),%rcx        # 0x1806d2230
   1803d4128:	e8 a3 64 ff ff       	call   0x1803ca5d0
   1803d412d:	4c 8d 05 9c 00 4d 00 	lea    0x4d009c(%rip),%r8        # 0x1808a41d0
   1803d4134:	48 89 05 7d dd 58 00 	mov    %rax,0x58dd7d(%rip)        # 0x180961eb8
   1803d413b:	48 8d 15 8e 2d 4d 00 	lea    0x4d2d8e(%rip),%rdx        # 0x1808a6ed0
   1803d4142:	48 8d 0d e7 e0 2f 00 	lea    0x2fe0e7(%rip),%rcx        # 0x1806d2230
   1803d4149:	e8 82 64 ff ff       	call   0x1803ca5d0
   1803d414e:	4c 8d 05 4b 00 4d 00 	lea    0x4d004b(%rip),%r8        # 0x1808a41a0
   1803d4155:	48 89 05 64 dd 58 00 	mov    %rax,0x58dd64(%rip)        # 0x180961ec0
   1803d415c:	48 8d 15 5d 2d 4d 00 	lea    0x4d2d5d(%rip),%rdx        # 0x1808a6ec0
   1803d4163:	48 8d 0d c6 e0 2f 00 	lea    0x2fe0c6(%rip),%rcx        # 0x1806d2230
   1803d416a:	e8 61 64 ff ff       	call   0x1803ca5d0
   1803d416f:	41 b9 0a 00 00 00    	mov    $0xa,%r9d
   1803d4175:	48 89 05 4c dd 58 00 	mov    %rax,0x58dd4c(%rip)        # 0x180961ec8
   1803d417c:	4c 8d 05 e5 ff 4c 00 	lea    0x4cffe5(%rip),%r8        # 0x1808a4168
   1803d4183:	48 8d 15 26 2d 4d 00 	lea    0x4d2d26(%rip),%rdx        # 0x1808a6eb0
   1803d418a:	48 8d 0d 9f e0 2f 00 	lea    0x2fe09f(%rip),%rcx        # 0x1806d2230
   1803d4191:	e8 3a 65 ff ff       	call   0x1803ca6d0
   1803d4196:	4c 8d 05 b3 02 4d 00 	lea    0x4d02b3(%rip),%r8        # 0x1808a4450
   1803d419d:	48 89 05 2c dd 58 00 	mov    %rax,0x58dd2c(%rip)        # 0x180961ed0
   1803d41a4:	48 8d 15 ed 2c 4d 00 	lea    0x4d2ced(%rip),%rdx        # 0x1808a6e98
   1803d41ab:	48 8d 0d 7e e0 2f 00 	lea    0x2fe07e(%rip),%rcx        # 0x1806d2230
   1803d41b2:	e8 19 64 ff ff       	call   0x1803ca5d0
   1803d41b7:	4c 8d 05 32 02 4d 00 	lea    0x4d0232(%rip),%r8        # 0x1808a43f0
   1803d41be:	48 89 05 13 dd 58 00 	mov    %rax,0x58dd13(%rip)        # 0x180961ed8
   1803d41c5:	48 8d 15 b4 2c 4d 00 	lea    0x4d2cb4(%rip),%rdx        # 0x1808a6e80
   1803d41cc:	48 8d 0d 5d e0 2f 00 	lea    0x2fe05d(%rip),%rcx        # 0x1806d2230
   1803d41d3:	e8 f8 63 ff ff       	call   0x1803ca5d0
   1803d41d8:	4c 8d 05 c9 01 4d 00 	lea    0x4d01c9(%rip),%r8        # 0x1808a43a8
   1803d41df:	48 89 05 fa dc 58 00 	mov    %rax,0x58dcfa(%rip)        # 0x180961ee0
   1803d41e6:	48 8d 15 83 2c 4d 00 	lea    0x4d2c83(%rip),%rdx        # 0x1808a6e70
   1803d41ed:	48 8d 0d 3c e0 2f 00 	lea    0x2fe03c(%rip),%rcx        # 0x1806d2230
   1803d41f4:	e8 d7 63 ff ff       	call   0x1803ca5d0
   1803d41f9:	48 85 c0             	test   %rax,%rax
   1803d41fc:	74 0f                	je     0x1803d420d
   1803d41fe:	48 8d 48 0a          	lea    0xa(%rax),%rcx
   1803d4202:	e8 f9 cf c3 ff       	call   0x180011200
   1803d4207:	89 05 db dc 58 00    	mov    %eax,0x58dcdb(%rip)        # 0x180961ee8
   1803d420d:	4c 8d 05 3c 01 4d 00 	lea    0x4d013c(%rip),%r8        # 0x1808a4350
   1803d4214:	48 8d 15 8d 2d 4d 00 	lea    0x4d2d8d(%rip),%rdx        # 0x1808a6fa8
   1803d421b:	48 8d 0d 0e e0 2f 00 	lea    0x2fe00e(%rip),%rcx        # 0x1806d2230
   1803d4222:	e8 a9 63 ff ff       	call   0x1803ca5d0
   1803d4227:	48 85 c0             	test   %rax,%rax
   1803d422a:	74 0f                	je     0x1803d423b
   1803d422c:	48 8d 48 03          	lea    0x3(%rax),%rcx
   1803d4230:	e8 cb cf c3 ff       	call   0x180011200
   1803d4235:	89 05 b1 dc 58 00    	mov    %eax,0x58dcb1(%rip)        # 0x180961eec
   1803d423b:	4c 8d 05 ce 00 4d 00 	lea    0x4d00ce(%rip),%r8        # 0x1808a4310
   1803d4242:	48 8d 15 47 2d 4d 00 	lea    0x4d2d47(%rip),%rdx        # 0x1808a6f90
   1803d4249:	48 8d 0d e0 df 2f 00 	lea    0x2fdfe0(%rip),%rcx        # 0x1806d2230
   1803d4250:	e8 7b 63 ff ff       	call   0x1803ca5d0
   1803d4255:	4c 8b c8             	mov    %rax,%r9
   1803d4258:	48 85 c0             	test   %rax,%rax
   1803d425b:	74 50                	je     0x1803d42ad
   1803d425d:	ba 03 00 00 00       	mov    $0x3,%edx
   1803d4262:	41 b8 07 00 00 00    	mov    $0x7,%r8d
   1803d4268:	48 8b c8             	mov    %rax,%rcx
   1803d426b:	e8 b0 de df ff       	call   0x1801d2120
   1803d4270:	48 8d 49 0a          	lea    0xa(%rcx),%rcx
   1803d4274:	48 89 05 75 dc 58 00 	mov    %rax,0x58dc75(%rip)        # 0x180961ef0
   1803d427b:	ba 02 00 00 00       	mov    $0x2,%edx
   1803d4280:	41 b8 06 00 00 00    	mov    $0x6,%r8d
   1803d4286:	e8 95 de df ff       	call   0x1801d2120
   1803d428b:	49 8d 49 10          	lea    0x10(%r9),%rcx
   1803d428f:	48 89 05 62 dc 58 00 	mov    %rax,0x58dc62(%rip)        # 0x180961ef8
   1803d4296:	ba 03 00 00 00       	mov    $0x3,%edx
   1803d429b:	41 b8 07 00 00 00    	mov    $0x7,%r8d
   1803d42a1:	e8 7a de df ff       	call   0x1801d2120
   1803d42a6:	48 89 05 53 dc 58 00 	mov    %rax,0x58dc53(%rip)        # 0x180961f00
   1803d42ad:	4c 8d 05 e4 04 4d 00 	lea    0x4d04e4(%rip),%r8        # 0x1808a4798
   1803d42b4:	48 8d 15 c5 2c 4d 00 	lea    0x4d2cc5(%rip),%rdx        # 0x1808a6f80
   1803d42bb:	48 8d 0d 6e df 2f 00 	lea    0x2fdf6e(%rip),%rcx        # 0x1806d2230
   1803d42c2:	e8 09 63 ff ff       	call   0x1803ca5d0
   1803d42c7:	4c 8d 05 8a 04 4d 00 	lea    0x4d048a(%rip),%r8        # 0x1808a4758
   1803d42ce:	48 89 05 33 dc 58 00 	mov    %rax,0x58dc33(%rip)        # 0x180961f08
   1803d42d5:	48 8d 15 8c 2c 4d 00 	lea    0x4d2c8c(%rip),%rdx        # 0x1808a6f68
   1803d42dc:	48 8d 0d 4d df 2f 00 	lea    0x2fdf4d(%rip),%rcx        # 0x1806d2230
   1803d42e3:	e8 e8 62 ff ff       	call   0x1803ca5d0
   1803d42e8:	4c 8d 05 39 04 4d 00 	lea    0x4d0439(%rip),%r8        # 0x1808a4728
   1803d42ef:	48 89 05 1a dc 58 00 	mov    %rax,0x58dc1a(%rip)        # 0x180961f10
   1803d42f6:	48 8d 15 53 2c 4d 00 	lea    0x4d2c53(%rip),%rdx        # 0x1808a6f50
   1803d42fd:	48 8d 0d 2c df 2f 00 	lea    0x2fdf2c(%rip),%rcx        # 0x1806d2230
   1803d4304:	e8 c7 62 ff ff       	call   0x1803ca5d0
   1803d4309:	4c 8d 05 d0 03 4d 00 	lea    0x4d03d0(%rip),%r8        # 0x1808a46e0
   1803d4310:	48 89 05 01 dc 58 00 	mov    %rax,0x58dc01(%rip)        # 0x180961f18
   1803d4317:	48 8d 15 e2 b7 32 00 	lea    0x32b7e2(%rip),%rdx        # 0x1806ffb00
   1803d431e:	48 8d 0d 0b df 2f 00 	lea    0x2fdf0b(%rip),%rcx        # 0x1806d2230
   1803d4325:	e8 a6 62 ff ff       	call   0x1803ca5d0
   1803d432a:	45 33 c9             	xor    %r9d,%r9d
   1803d432d:	48 89 05 ec db 58 00 	mov    %rax,0x58dbec(%rip)        # 0x180961f20
   1803d4334:	4c 8d 05 7d 03 4d 00 	lea    0x4d037d(%rip),%r8        # 0x1808a46b8
   1803d433b:	48 8d 15 f6 2b 4d 00 	lea    0x4d2bf6(%rip),%rdx        # 0x1808a6f38
   1803d4342:	48 8d 0d e7 de 2f 00 	lea    0x2fdee7(%rip),%rcx        # 0x1806d2230
   1803d4349:	e8 82 63 ff ff       	call   0x1803ca6d0
   1803d434e:	4c 8d 05 5b 0c 4d 00 	lea    0x4d0c5b(%rip),%r8        # 0x1808a4fb0
   1803d4355:	48 89 05 cc db 58 00 	mov    %rax,0x58dbcc(%rip)        # 0x180961f28
   1803d435c:	48 8d 15 2d d7 30 00 	lea    0x30d72d(%rip),%rdx        # 0x1806e1a90
   1803d4363:	48 8d 0d c6 de 2f 00 	lea    0x2fdec6(%rip),%rcx        # 0x1806d2230
   1803d436a:	e8 61 62 ff ff       	call   0x1803ca5d0
   1803d436f:	4c 8d 05 aa 02 4d 00 	lea    0x4d02aa(%rip),%r8        # 0x1808a4620
   1803d4376:	48 89 05 b3 db 58 00 	mov    %rax,0x58dbb3(%rip)        # 0x180961f30
   1803d437d:	48 8d 15 1c d7 30 00 	lea    0x30d71c(%rip),%rdx        # 0x1806e1aa0
   1803d4384:	48 8d 0d a5 de 2f 00 	lea    0x2fdea5(%rip),%rcx        # 0x1806d2230
   1803d438b:	e8 40 62 ff ff       	call   0x1803ca5d0
   1803d4390:	45 33 c9             	xor    %r9d,%r9d
   1803d4393:	48 c7 44 24 28 07 00 	movq   $0x7,0x28(%rsp)
   1803d439a:	00 00 
   1803d439c:	4c 8d 05 5d 02 4d 00 	lea    0x4d025d(%rip),%r8        # 0x1808a4600
   1803d43a3:	48 89 05 8e db 58 00 	mov    %rax,0x58db8e(%rip)        # 0x180961f38
   1803d43aa:	48 8d 15 6f 2b 4d 00 	lea    0x4d2b6f(%rip),%rdx        # 0x1808a6f20
   1803d43b1:	48 c7 44 24 20 03 00 	movq   $0x3,0x20(%rsp)
   1803d43b8:	00 00 
   1803d43ba:	48 8d 0d 6f de 2f 00 	lea    0x2fde6f(%rip),%rcx        # 0x1806d2230
   1803d43c1:	e8 ca 63 ff ff       	call   0x1803ca790
   1803d43c6:	4c 8d 05 d3 01 4d 00 	lea    0x4d01d3(%rip),%r8        # 0x1808a45a0
   1803d43cd:	48 89 05 6c db 58 00 	mov    %rax,0x58db6c(%rip)        # 0x180961f40
   1803d43d4:	48 8d 15 35 2b 4d 00 	lea    0x4d2b35(%rip),%rdx        # 0x1808a6f10
   1803d43db:	48 8d 0d 4e de 2f 00 	lea    0x2fde4e(%rip),%rcx        # 0x1806d2230
   1803d43e2:	e8 e9 61 ff ff       	call   0x1803ca5d0
   1803d43e7:	4c 8d 05 22 06 4d 00 	lea    0x4d0622(%rip),%r8        # 0x1808a4a10
   1803d43ee:	48 89 05 53 db 58 00 	mov    %rax,0x58db53(%rip)        # 0x180961f48
   1803d43f5:	48 8d 15 54 2c 4d 00 	lea    0x4d2c54(%rip),%rdx        # 0x1808a7050
   1803d43fc:	48 8d 0d 2d de 2f 00 	lea    0x2fde2d(%rip),%rcx        # 0x1806d2230
   1803d4403:	e8 c8 61 ff ff       	call   0x1803ca5d0
   1803d4408:	4c 8d 05 c1 05 4d 00 	lea    0x4d05c1(%rip),%r8        # 0x1808a49d0
   1803d440f:	48 89 05 3a db 58 00 	mov    %rax,0x58db3a(%rip)        # 0x180961f50
   1803d4416:	48 8d 15 23 2c 4d 00 	lea    0x4d2c23(%rip),%rdx        # 0x1808a7040
   1803d441d:	48 8d 0d 0c de 2f 00 	lea    0x2fde0c(%rip),%rcx        # 0x1806d2230
   1803d4424:	e8 a7 61 ff ff       	call   0x1803ca5d0
   1803d4429:	4c 8d 05 40 05 4d 00 	lea    0x4d0540(%rip),%r8        # 0x1808a4970
   1803d4430:	48 89 05 21 db 58 00 	mov    %rax,0x58db21(%rip)        # 0x180961f58
   1803d4437:	48 8d 15 ea 2b 4d 00 	lea    0x4d2bea(%rip),%rdx        # 0x1808a7028
   1803d443e:	48 8d 0d eb dd 2f 00 	lea    0x2fddeb(%rip),%rcx        # 0x1806d2230
   1803d4445:	e8 86 61 ff ff       	call   0x1803ca5d0
   1803d444a:	4c 8d 05 ef 04 4d 00 	lea    0x4d04ef(%rip),%r8        # 0x1808a4940
   1803d4451:	48 89 05 08 db 58 00 	mov    %rax,0x58db08(%rip)        # 0x180961f60
   1803d4458:	48 8d 15 89 b5 32 00 	lea    0x32b589(%rip),%rdx        # 0x1806ff9e8
   1803d445f:	48 8d 0d ca dd 2f 00 	lea    0x2fddca(%rip),%rcx        # 0x1806d2230
   1803d4466:	e8 65 61 ff ff       	call   0x1803ca5d0
   1803d446b:	4c 8d 05 6e 04 4d 00 	lea    0x4d046e(%rip),%r8        # 0x1808a48e0
   1803d4472:	48 89 05 ef da 58 00 	mov    %rax,0x58daef(%rip)        # 0x180961f68
   1803d4479:	48 8d 15 90 2b 4d 00 	lea    0x4d2b90(%rip),%rdx        # 0x1808a7010
   1803d4480:	48 8d 0d a9 dd 2f 00 	lea    0x2fdda9(%rip),%rcx        # 0x1806d2230
   1803d4487:	e8 44 61 ff ff       	call   0x1803ca5d0
   1803d448c:	4c 8d 05 fd 03 4d 00 	lea    0x4d03fd(%rip),%r8        # 0x1808a4890
   1803d4493:	48 89 05 d6 da 58 00 	mov    %rax,0x58dad6(%rip)        # 0x180961f70
   1803d449a:	48 8d 15 57 2b 4d 00 	lea    0x4d2b57(%rip),%rdx        # 0x1808a6ff8
   1803d44a1:	48 8d 0d 88 dd 2f 00 	lea    0x2fdd88(%rip),%rcx        # 0x1806d2230
   1803d44a8:	e8 23 61 ff ff       	call   0x1803ca5d0
   1803d44ad:	48 89 05 c4 da 58 00 	mov    %rax,0x58dac4(%rip)        # 0x180961f78
   1803d44b4:	4c 8d 05 25 09 4d 00 	lea    0x4d0925(%rip),%r8        # 0x1808a4de0
   1803d44bb:	48 8d 15 1e 2b 4d 00 	lea    0x4d2b1e(%rip),%rdx        # 0x1808a6fe0
   1803d44c2:	48 8d 0d 67 dd 2f 00 	lea    0x2fdd67(%rip),%rcx        # 0x1806d2230
   1803d44c9:	e8 02 61 ff ff       	call   0x1803ca5d0
   1803d44ce:	4c 8d 05 6b 03 4d 00 	lea    0x4d036b(%rip),%r8        # 0x1808a4840
   1803d44d5:	48 89 05 a4 da 58 00 	mov    %rax,0x58daa4(%rip)        # 0x180961f80
   1803d44dc:	48 8d 15 e5 2a 4d 00 	lea    0x4d2ae5(%rip),%rdx        # 0x1808a6fc8
   1803d44e3:	48 8d 0d 46 dd 2f 00 	lea    0x2fdd46(%rip),%rcx        # 0x1806d2230
   1803d44ea:	e8 e1 60 ff ff       	call   0x1803ca5d0
   1803d44ef:	4c 8d 05 ca 02 4d 00 	lea    0x4d02ca(%rip),%r8        # 0x1808a47c0
   1803d44f6:	48 89 05 8b da 58 00 	mov    %rax,0x58da8b(%rip)        # 0x180961f88
   1803d44fd:	48 8d 15 b4 2a 4d 00 	lea    0x4d2ab4(%rip),%rdx        # 0x1808a6fb8
   1803d4504:	48 8d 0d 25 dd 2f 00 	lea    0x2fdd25(%rip),%rcx        # 0x1806d2230
   1803d450b:	e8 c0 60 ff ff       	call   0x1803ca5d0
   1803d4510:	4c 8d 05 79 08 4d 00 	lea    0x4d0879(%rip),%r8        # 0x1808a4d90
   1803d4517:	48 89 05 72 da 58 00 	mov    %rax,0x58da72(%rip)        # 0x180961f90
   1803d451e:	48 8d 15 bb 2b 4d 00 	lea    0x4d2bbb(%rip),%rdx        # 0x1808a70e0
   1803d4525:	48 8d 0d 04 dd 2f 00 	lea    0x2fdd04(%rip),%rcx        # 0x1806d2230
   1803d452c:	e8 9f 60 ff ff       	call   0x1803ca5d0
   1803d4531:	4c 8d 05 f8 07 4d 00 	lea    0x4d07f8(%rip),%r8        # 0x1808a4d30
   1803d4538:	48 89 05 59 da 58 00 	mov    %rax,0x58da59(%rip)        # 0x180961f98
   1803d453f:	48 8d 15 8a 2b 4d 00 	lea    0x4d2b8a(%rip),%rdx        # 0x1808a70d0
   1803d4546:	48 8d 0d e3 dc 2f 00 	lea    0x2fdce3(%rip),%rcx        # 0x1806d2230
   1803d454d:	e8 7e 60 ff ff       	call   0x1803ca5d0
   1803d4552:	4c 8d 05 57 07 4d 00 	lea    0x4d0757(%rip),%r8        # 0x1808a4cb0
   1803d4559:	48 89 05 d0 da 58 00 	mov    %rax,0x58dad0(%rip)        # 0x180962030
   1803d4560:	48 8d 15 59 2b 4d 00 	lea    0x4d2b59(%rip),%rdx        # 0x1808a70c0
   1803d4567:	48 8d 0d c2 dc 2f 00 	lea    0x2fdcc2(%rip),%rcx        # 0x1806d2230
   1803d456e:	e8 5d 60 ff ff       	call   0x1803ca5d0
   1803d4573:	4c 8d 05 a6 06 4d 00 	lea    0x4d06a6(%rip),%r8        # 0x1808a4c20
   1803d457a:	48 89 05 b7 da 58 00 	mov    %rax,0x58dab7(%rip)        # 0x180962038
   1803d4581:	48 8d 15 28 2b 4d 00 	lea    0x4d2b28(%rip),%rdx        # 0x1808a70b0
   1803d4588:	48 8d 0d a1 dc 2f 00 	lea    0x2fdca1(%rip),%rcx        # 0x1806d2230
   1803d458f:	e8 3c 60 ff ff       	call   0x1803ca5d0
   1803d4594:	4c 8d 05 b5 05 4d 00 	lea    0x4d05b5(%rip),%r8        # 0x1808a4b50
   1803d459b:	48 89 05 9e da 58 00 	mov    %rax,0x58da9e(%rip)        # 0x180962040
   1803d45a2:	48 8d 15 ef 2a 4d 00 	lea    0x4d2aef(%rip),%rdx        # 0x1808a7098
   1803d45a9:	48 8d 0d 80 dc 2f 00 	lea    0x2fdc80(%rip),%rcx        # 0x1806d2230
   1803d45b0:	e8 1b 60 ff ff       	call   0x1803ca5d0
   1803d45b5:	4c 8d 05 14 05 4d 00 	lea    0x4d0514(%rip),%r8        # 0x1808a4ad0
   1803d45bc:	48 89 05 85 da 58 00 	mov    %rax,0x58da85(%rip)        # 0x180962048
   1803d45c3:	48 8d 15 be 2a 4d 00 	lea    0x4d2abe(%rip),%rdx        # 0x1808a7088
   1803d45ca:	48 8d 0d 5f dc 2f 00 	lea    0x2fdc5f(%rip),%rcx        # 0x1806d2230
   1803d45d1:	e8 fa 5f ff ff       	call   0x1803ca5d0
   1803d45d6:	4c 8d 05 73 04 4d 00 	lea    0x4d0473(%rip),%r8        # 0x1808a4a50
   1803d45dd:	48 89 05 6c da 58 00 	mov    %rax,0x58da6c(%rip)        # 0x180962050
   1803d45e4:	48 8d 15 8d 2a 4d 00 	lea    0x4d2a8d(%rip),%rdx        # 0x1808a7078
   1803d45eb:	48 8d 0d 3e dc 2f 00 	lea    0x2fdc3e(%rip),%rcx        # 0x1806d2230
   1803d45f2:	e8 d9 5f ff ff       	call   0x1803ca5d0
   1803d45f7:	4c 8d 05 a2 0a 4d 00 	lea    0x4d0aa2(%rip),%r8        # 0x1808a50a0
   1803d45fe:	48 89 05 53 da 58 00 	mov    %rax,0x58da53(%rip)        # 0x180962058
   1803d4605:	48 8d 15 5c 2a 4d 00 	lea    0x4d2a5c(%rip),%rdx        # 0x1808a7068
   1803d460c:	48 8d 0d 1d dc 2f 00 	lea    0x2fdc1d(%rip),%rcx        # 0x1806d2230
   1803d4613:	e8 b8 5f ff ff       	call   0x1803ca5d0
   1803d4618:	4c 8d 05 01 0a 4d 00 	lea    0x4d0a01(%rip),%r8        # 0x1808a5020
   1803d461f:	48 89 05 3a da 58 00 	mov    %rax,0x58da3a(%rip)        # 0x180962060
   1803d4626:	48 8d 15 73 2b 4d 00 	lea    0x4d2b73(%rip),%rdx        # 0x1808a71a0
   1803d462d:	48 8d 0d fc db 2f 00 	lea    0x2fdbfc(%rip),%rcx        # 0x1806d2230
   1803d4634:	e8 97 5f ff ff       	call   0x1803ca5d0
   1803d4639:	41 b9 04 00 00 00    	mov    $0x4,%r9d
   1803d463f:	48 c7 44 24 28 07 00 	movq   $0x7,0x28(%rsp)
   1803d4646:	00 00 
   1803d4648:	4c 8d 05 49 0e 4d 00 	lea    0x4d0e49(%rip),%r8        # 0x1808a5498
   1803d464f:	48 89 05 12 da 58 00 	mov    %rax,0x58da12(%rip)        # 0x180962068
   1803d4656:	48 8d 15 bb b6 32 00 	lea    0x32b6bb(%rip),%rdx        # 0x1806ffd18
   1803d465d:	48 c7 44 24 20 03 00 	movq   $0x3,0x20(%rsp)
   1803d4664:	00 00 
   1803d4666:	48 8d 0d 53 0b 4d 00 	lea    0x4d0b53(%rip),%rcx        # 0x1808a51c0
   1803d466d:	e8 1e 61 ff ff       	call   0x1803ca790
   1803d4672:	48 85 c0             	test   %rax,%rax
   1803d4675:	74 0f                	je     0x1803d4686
   1803d4677:	48 8b c8             	mov    %rax,%rcx
   1803d467a:	e8 21 ad c3 ff       	call   0x18000f3a0
   1803d467f:	48 89 05 ea d9 58 00 	mov    %rax,0x58d9ea(%rip)        # 0x180962070
   1803d4686:	41 b9 09 00 00 00    	mov    $0x9,%r9d
   1803d468c:	4c 8d 05 d5 0d 4d 00 	lea    0x4d0dd5(%rip),%r8        # 0x1808a5468
   1803d4693:	48 8d 15 ee 2a 4d 00 	lea    0x4d2aee(%rip),%rdx        # 0x1808a7188
   1803d469a:	48 8d 0d 1f 0b 4d 00 	lea    0x4d0b1f(%rip),%rcx        # 0x1808a51c0
   1803d46a1:	e8 2a 60 ff ff       	call   0x1803ca6d0
   1803d46a6:	45 33 c9             	xor    %r9d,%r9d
   1803d46a9:	48 c7 44 24 28 07 00 	movq   $0x7,0x28(%rsp)
   1803d46b0:	00 00 
   1803d46b2:	4c 8d 05 8f 0d 4d 00 	lea    0x4d0d8f(%rip),%r8        # 0x1808a5448
   1803d46b9:	48 89 05 b8 d9 58 00 	mov    %rax,0x58d9b8(%rip)        # 0x180962078
   1803d46c0:	48 8d 15 a9 2a 4d 00 	lea    0x4d2aa9(%rip),%rdx        # 0x1808a7170
   1803d46c7:	48 c7 44 24 20 03 00 	movq   $0x3,0x20(%rsp)
   1803d46ce:	00 00 
   1803d46d0:	48 8d 0d 59 db 2f 00 	lea    0x2fdb59(%rip),%rcx        # 0x1806d2230
   1803d46d7:	e8 b4 60 ff ff       	call   0x1803ca790
   1803d46dc:	4c 8d 05 35 0d 4d 00 	lea    0x4d0d35(%rip),%r8        # 0x1808a5418
   1803d46e3:	48 89 05 96 d9 58 00 	mov    %rax,0x58d996(%rip)        # 0x180962080
   1803d46ea:	48 8d 15 6f 2a 4d 00 	lea    0x4d2a6f(%rip),%rdx        # 0x1808a7160
   1803d46f1:	48 8d 0d 38 db 2f 00 	lea    0x2fdb38(%rip),%rcx        # 0x1806d2230
   1803d46f8:	e8 d3 5e ff ff       	call   0x1803ca5d0
   1803d46fd:	4c 8d 05 d4 0c 4d 00 	lea    0x4d0cd4(%rip),%r8        # 0x1808a53d8
   1803d4704:	48 89 05 7d d9 58 00 	mov    %rax,0x58d97d(%rip)        # 0x180962088
   1803d470b:	48 8d 15 2e 2a 4d 00 	lea    0x4d2a2e(%rip),%rdx        # 0x1808a7140
   1803d4712:	48 8d 0d 17 db 2f 00 	lea    0x2fdb17(%rip),%rcx        # 0x1806d2230
   1803d4719:	e8 b2 5e ff ff       	call   0x1803ca5d0
   1803d471e:	4c 8d 05 4b 0c 4d 00 	lea    0x4d0c4b(%rip),%r8        # 0x1808a5370
   1803d4725:	48 89 05 64 d9 58 00 	mov    %rax,0x58d964(%rip)        # 0x180962090
   1803d472c:	48 8d 15 f5 29 4d 00 	lea    0x4d29f5(%rip),%rdx        # 0x1808a7128
   1803d4733:	48 8d 0d f6 da 2f 00 	lea    0x2fdaf6(%rip),%rcx        # 0x1806d2230
   1803d473a:	e8 91 5e ff ff       	call   0x1803ca5d0
   1803d473f:	4c 8d 05 0a 0c 4d 00 	lea    0x4d0c0a(%rip),%r8        # 0x1808a5350
   1803d4746:	48 89 05 4b d9 58 00 	mov    %rax,0x58d94b(%rip)        # 0x180962098
   1803d474d:	48 8d 15 bc 29 4d 00 	lea    0x4d29bc(%rip),%rdx        # 0x1808a7110
   1803d4754:	48 8d 0d d5 da 2f 00 	lea    0x2fdad5(%rip),%rcx        # 0x1806d2230
   1803d475b:	e8 70 5e ff ff       	call   0x1803ca5d0
   1803d4760:	4c 8d 05 91 0f 4d 00 	lea    0x4d0f91(%rip),%r8        # 0x1808a56f8
   1803d4767:	48 89 05 32 d9 58 00 	mov    %rax,0x58d932(%rip)        # 0x1809620a0
   1803d476e:	48 8d 15 83 29 4d 00 	lea    0x4d2983(%rip),%rdx        # 0x1808a70f8
   1803d4775:	48 8d 0d b4 da 2f 00 	lea    0x2fdab4(%rip),%rcx        # 0x1806d2230
   1803d477c:	e8 4f 5e ff ff       	call   0x1803ca5d0
   1803d4781:	4c 8d 05 40 0f 4d 00 	lea    0x4d0f40(%rip),%r8        # 0x1808a56c8
   1803d4788:	48 89 05 19 d9 58 00 	mov    %rax,0x58d919(%rip)        # 0x1809620a8
   1803d478f:	48 8d 15 d2 2a 4d 00 	lea    0x4d2ad2(%rip),%rdx        # 0x1808a7268
   1803d4796:	48 8d 0d 93 da 2f 00 	lea    0x2fda93(%rip),%rcx        # 0x1806d2230
   1803d479d:	e8 2e 5e ff ff       	call   0x1803ca5d0
   1803d47a2:	4c 8d 05 c7 0e 4d 00 	lea    0x4d0ec7(%rip),%r8        # 0x1808a5670
   1803d47a9:	48 89 05 00 d9 58 00 	mov    %rax,0x58d900(%rip)        # 0x1809620b0
   1803d47b0:	48 8d 15 99 2a 4d 00 	lea    0x4d2a99(%rip),%rdx        # 0x1808a7250
   1803d47b7:	48 8d 0d 72 da 2f 00 	lea    0x2fda72(%rip),%rcx        # 0x1806d2230
   1803d47be:	e8 0d 5e ff ff       	call   0x1803ca5d0
   1803d47c3:	45 33 c9             	xor    %r9d,%r9d
   1803d47c6:	48 c7 44 24 28 07 00 	movq   $0x7,0x28(%rsp)
   1803d47cd:	00 00 
   1803d47cf:	4c 8d 05 72 0e 4d 00 	lea    0x4d0e72(%rip),%r8        # 0x1808a5648
   1803d47d6:	48 89 05 db d8 58 00 	mov    %rax,0x58d8db(%rip)        # 0x1809620b8
   1803d47dd:	48 8d 15 54 2a 4d 00 	lea    0x4d2a54(%rip),%rdx        # 0x1808a7238
   1803d47e4:	48 c7 44 24 20 03 00 	movq   $0x3,0x20(%rsp)
   1803d47eb:	00 00 
   1803d47ed:	48 8d 0d 3c da 2f 00 	lea    0x2fda3c(%rip),%rcx        # 0x1806d2230
   1803d47f4:	e8 97 5f ff ff       	call   0x1803ca790
   1803d47f9:	45 33 c9             	xor    %r9d,%r9d
   1803d47fc:	48 c7 44 24 28 07 00 	movq   $0x7,0x28(%rsp)
   1803d4803:	00 00 
   1803d4805:	4c 8d 05 14 0e 4d 00 	lea    0x4d0e14(%rip),%r8        # 0x1808a5620
   1803d480c:	48 89 05 ad d8 58 00 	mov    %rax,0x58d8ad(%rip)        # 0x1809620c0
   1803d4813:	48 8d 15 fe 29 4d 00 	lea    0x4d29fe(%rip),%rdx        # 0x1808a7218
   1803d481a:	48 c7 44 24 20 03 00 	movq   $0x3,0x20(%rsp)
   1803d4821:	00 00 
   1803d4823:	48 8d 0d 06 da 2f 00 	lea    0x2fda06(%rip),%rcx        # 0x1806d2230
   1803d482a:	e8 61 5f ff ff       	call   0x1803ca790
   1803d482f:	48 85 c0             	test   %rax,%rax
   1803d4832:	74 13                	je     0x1803d4847
   1803d4834:	48 8d 88 80 00 00 00 	lea    0x80(%rax),%rcx
   1803d483b:	e8 60 ab c3 ff       	call   0x18000f3a0
   1803d4840:	48 89 05 81 d8 58 00 	mov    %rax,0x58d881(%rip)        # 0x1809620c8
   1803d4847:	45 33 c9             	xor    %r9d,%r9d
   1803d484a:	4c 8d 05 af 0d 4d 00 	lea    0x4d0daf(%rip),%r8        # 0x1808a5600
   1803d4851:	48 8d 15 a8 29 4d 00 	lea    0x4d29a8(%rip),%rdx        # 0x1808a7200
   1803d4858:	48 8d 0d d1 d9 2f 00 	lea    0x2fd9d1(%rip),%rcx        # 0x1806d2230
   1803d485f:	e8 6c 5e ff ff       	call   0x1803ca6d0
   1803d4864:	ff 05 da cf d3 00    	incl   0xd3cfda(%rip)        # 0x181111844
   1803d486a:	48 8d 15 17 f3 2f 00 	lea    0x2ff317(%rip),%rdx        # 0x1806d3b88
   1803d4871:	48 8d 8d a0 0a 00 00 	lea    0xaa0(%rbp),%rcx
   1803d4878:	48 89 05 51 d8 58 00 	mov    %rax,0x58d851(%rip)        # 0x1809620d0
   1803d487f:	e8 dc b8 c3 ff       	call   0x180010160
   1803d4884:	48 8d 15 a5 d9 2f 00 	lea    0x2fd9a5(%rip),%rdx        # 0x1806d2230
   1803d488b:	48 8d 8d b0 0a 00 00 	lea    0xab0(%rbp),%rcx
   1803d4892:	0f 10 30             	movups (%rax),%xmm6
   1803d4895:	e8 c6 b8 c3 ff       	call   0x180010160
   1803d489a:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d489f:	48 8d 8d c0 0a 00 00 	lea    0xac0(%rbp),%rcx
   1803d48a6:	0f 10 00             	movups (%rax),%xmm0
   1803d48a9:	0f 29 44 24 30       	movaps %xmm0,0x30(%rsp)
   1803d48ae:	e8 bd d4 df ff       	call   0x1801d1d70
   1803d48b3:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d48b8:	0f 29 74 24 30       	movaps %xmm6,0x30(%rsp)
   1803d48bd:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d48c2:	0f 10 00             	movups (%rax),%xmm0
   1803d48c5:	0f 11 44 24 40       	movups %xmm0,0x40(%rsp)
   1803d48ca:	e8 41 d6 df ff       	call   0x1801d1f10
   1803d48cf:	0f 28 b4 24 00 0c 00 	movaps 0xc00(%rsp),%xmm6
   1803d48d6:	00 
   1803d48d7:	48 89 05 fa d7 58 00 	mov    %rax,0x58d7fa(%rip)        # 0x1809620d8
   1803d48de:	48 85 c0             	test   %rax,%rax
   1803d48e1:	75 21                	jne    0x1803d4904
   1803d48e3:	4c 8d 0d 59 6d 1b 00 	lea    0x1b6d59(%rip),%r9        # 0x18058b643
   1803d48ea:	4c 8d 05 97 f2 2f 00 	lea    0x2ff297(%rip),%r8        # 0x1806d3b88
   1803d48f1:	48 8d 15 38 d9 2f 00 	lea    0x2fd938(%rip),%rdx        # 0x1806d2230
   1803d48f8:	48 8d 0d 61 1b 4d 00 	lea    0x4d1b61(%rip),%rcx        # 0x1808a6460
   1803d48ff:	e8 4c 5a ff ff       	call   0x1803ca350
   1803d4904:	4c 8d 05 25 ca 4c 00 	lea    0x4cca25(%rip),%r8        # 0x1808a1330
   1803d490b:	48 8d 15 d6 28 4d 00 	lea    0x4d28d6(%rip),%rdx        # 0x1808a71e8
   1803d4912:	48 8d 0d 17 d9 2f 00 	lea    0x2fd917(%rip),%rcx        # 0x1806d2230
   1803d4919:	e8 b2 5c ff ff       	call   0x1803ca5d0
   1803d491e:	4c 8d 05 7b c9 4c 00 	lea    0x4cc97b(%rip),%r8        # 0x1808a12a0
   1803d4925:	48 89 05 dc d3 58 00 	mov    %rax,0x58d3dc(%rip)        # 0x180961d08
   1803d492c:	48 8d 15 5d b4 32 00 	lea    0x32b45d(%rip),%rdx        # 0x1806ffd90
   1803d4933:	48 8d 0d f6 d8 2f 00 	lea    0x2fd8f6(%rip),%rcx        # 0x1806d2230
   1803d493a:	e8 91 5c ff ff       	call   0x1803ca5d0
   1803d493f:	4c 8d 05 fa c8 4c 00 	lea    0x4cc8fa(%rip),%r8        # 0x1808a1240
   1803d4946:	48 89 05 cb d3 58 00 	mov    %rax,0x58d3cb(%rip)        # 0x180961d18
   1803d494d:	48 8d 15 b4 b3 32 00 	lea    0x32b3b4(%rip),%rdx        # 0x1806ffd08
   1803d4954:	48 8d 0d d5 d8 2f 00 	lea    0x2fd8d5(%rip),%rcx        # 0x1806d2230
   1803d495b:	e8 70 5c ff ff       	call   0x1803ca5d0
   1803d4960:	4c 8d 05 a1 c9 4c 00 	lea    0x4cc9a1(%rip),%r8        # 0x1808a1308
   1803d4967:	48 89 05 b2 d3 58 00 	mov    %rax,0x58d3b2(%rip)        # 0x180961d20
   1803d496e:	48 8d 15 5b 28 4d 00 	lea    0x4d285b(%rip),%rdx        # 0x1808a71d0
   1803d4975:	48 8d 0d 94 ed 2f 00 	lea    0x2fed94(%rip),%rcx        # 0x1806d3710
   1803d497c:	e8 4f 5c ff ff       	call   0x1803ca5d0
   1803d4981:	4c 8d 05 18 c7 4c 00 	lea    0x4cc718(%rip),%r8        # 0x1808a10a0
   1803d4988:	48 89 05 81 d3 58 00 	mov    %rax,0x58d381(%rip)        # 0x180961d10
   1803d498f:	48 8d 15 22 28 4d 00 	lea    0x4d2822(%rip),%rdx        # 0x1808a71b8
   1803d4996:	48 8d 0d 83 c3 4c 00 	lea    0x4cc383(%rip),%rcx        # 0x1808a0d20
   1803d499d:	e8 2e 5c ff ff       	call   0x1803ca5d0
   1803d49a2:	48 89 05 4f d3 58 00 	mov    %rax,0x58d34f(%rip)        # 0x180961cf8
   1803d49a9:	48 8b d8             	mov    %rax,%rbx
   1803d49ac:	48 85 c0             	test   %rax,%rax
   1803d49af:	0f 84 93 00 00 00    	je     0x1803d4a48
   1803d49b5:	48 8d 15 64 c3 4c 00 	lea    0x4cc364(%rip),%rdx        # 0x1808a0d20
   1803d49bc:	48 8d 8d d0 0a 00 00 	lea    0xad0(%rbp),%rcx
   1803d49c3:	e8 98 b7 c3 ff       	call   0x180010160
   1803d49c8:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d49cd:	48 8d 8d e0 0a 00 00 	lea    0xae0(%rbp),%rcx
   1803d49d4:	0f 10 00             	movups (%rax),%xmm0
   1803d49d7:	0f 29 44 24 30       	movaps %xmm0,0x30(%rsp)
   1803d49dc:	e8 8f d3 df ff       	call   0x1801d1d70
   1803d49e1:	48 8d 4b 01          	lea    0x1(%rbx),%rcx
   1803d49e5:	48 89 4c 24 30       	mov    %rcx,0x30(%rsp)
   1803d49ea:	48 8d 15 af c6 4c 00 	lea    0x4cc6af(%rip),%rdx        # 0x1808a10a0
   1803d49f1:	48 8b 08             	mov    (%rax),%rcx
   1803d49f4:	48 8b 40 08          	mov    0x8(%rax),%rax
   1803d49f8:	48 2b cb             	sub    %rbx,%rcx
   1803d49fb:	48 ff c8             	dec    %rax
   1803d49fe:	48 03 c8             	add    %rax,%rcx
   1803d4a01:	48 89 4c 24 38       	mov    %rcx,0x38(%rsp)
   1803d4a06:	48 8d 8d f0 0a 00 00 	lea    0xaf0(%rbp),%rcx
   1803d4a0d:	e8 4e b7 c3 ff       	call   0x180010160
   1803d4a12:	48 8d 54 24 40       	lea    0x40(%rsp),%rdx
   1803d4a17:	48 8d 4c 24 30       	lea    0x30(%rsp),%rcx
   1803d4a1c:	0f 10 00             	movups (%rax),%xmm0
   1803d4a1f:	0f 29 44 24 40       	movaps %xmm0,0x40(%rsp)
   1803d4a24:	e8 d7 d3 df ff       	call   0x1801d1e00
   1803d4a29:	48 89 05 d0 d2 58 00 	mov    %rax,0x58d2d0(%rip)        # 0x180961d00
   1803d4a30:	48 85 c0             	test   %rax,%rax
   1803d4a33:	75 13                	jne    0x1803d4a48
   1803d4a35:	48 8d 15 e4 c2 4c 00 	lea    0x4cc2e4(%rip),%rdx        # 0x1808a0d20
   1803d4a3c:	48 8d 0d d5 28 4d 00 	lea    0x4d28d5(%rip),%rcx        # 0x1808a7318
   1803d4a43:	e8 18 db ed ff       	call   0x1802b2560
   1803d4a48:	4c 8d 05 d9 07 4d 00 	lea    0x4d07d9(%rip),%r8        # 0x1808a5228
   1803d4a4f:	48 8d 15 b2 28 4d 00 	lea    0x4d28b2(%rip),%rdx        # 0x1808a7308
   1803d4a56:	48 8d 0d fb b4 32 00 	lea    0x32b4fb(%rip),%rcx        # 0x1806fff58
   1803d4a5d:	e8 6e 5b ff ff       	call   0x1803ca5d0
   1803d4a62:	4c 8d 05 77 07 4d 00 	lea    0x4d0777(%rip),%r8        # 0x1808a51e0
   1803d4a69:	48 89 05 70 d6 58 00 	mov    %rax,0x58d670(%rip)        # 0x1809620e0
   1803d4a70:	48 8d 15 81 28 4d 00 	lea    0x4d2881(%rip),%rdx        # 0x1808a72f8
   1803d4a77:	48 8d 0d da b4 32 00 	lea    0x32b4da(%rip),%rcx        # 0x1806fff58
   1803d4a7e:	e8 4d 5b ff ff       	call   0x1803ca5d0
   1803d4a83:	4c 8d 05 06 0b 4d 00 	lea    0x4d0b06(%rip),%r8        # 0x1808a5590
   1803d4a8a:	48 89 05 57 d6 58 00 	mov    %rax,0x58d657(%rip)        # 0x1809620e8
   1803d4a91:	48 8d 15 50 28 4d 00 	lea    0x4d2850(%rip),%rdx        # 0x1808a72e8
   1803d4a98:	48 8d 0d 09 e6 2f 00 	lea    0x2fe609(%rip),%rcx        # 0x1806d30a8
   1803d4a9f:	e8 2c 5b ff ff       	call   0x1803ca5d0
   1803d4aa4:	4c 8d 05 95 0a 4d 00 	lea    0x4d0a95(%rip),%r8        # 0x1808a5540
   1803d4aab:	48 89 05 3e d6 58 00 	mov    %rax,0x58d63e(%rip)        # 0x1809620f0
   1803d4ab2:	48 8d 15 1f 28 4d 00 	lea    0x4d281f(%rip),%rdx        # 0x1808a72d8
   1803d4ab9:	48 8d 0d e8 e5 2f 00 	lea    0x2fe5e8(%rip),%rcx        # 0x1806d30a8
   1803d4ac0:	e8 0b 5b ff ff       	call   0x1803ca5d0
   1803d4ac5:	4c 8d 05 3c 12 4d 00 	lea    0x4d123c(%rip),%r8        # 0x1808a5d08
   1803d4acc:	48 89 05 25 d6 58 00 	mov    %rax,0x58d625(%rip)        # 0x1809620f8
   1803d4ad3:	48 8d 15 1e b3 32 00 	lea    0x32b31e(%rip),%rdx        # 0x1806ffdf8
   1803d4ada:	48 8d 0d c7 e5 2f 00 	lea    0x2fe5c7(%rip),%rcx        # 0x1806d30a8
   1803d4ae1:	e8 ea 5a ff ff       	call   0x1803ca5d0
   1803d4ae6:	4c 8d 05 73 0e 4d 00 	lea    0x4d0e73(%rip),%r8        # 0x1808a5960
   1803d4aed:	48 89 05 8c d6 58 00 	mov    %rax,0x58d68c(%rip)        # 0x180962180
   1803d4af4:	48 8d 15 7d b2 32 00 	lea    0x32b27d(%rip),%rdx        # 0x1806ffd78
   1803d4afb:	48 8d 0d 2e d7 2f 00 	lea    0x2fd72e(%rip),%rcx        # 0x1806d2230
   1803d4b02:	e8 c9 5a ff ff       	call   0x1803ca5d0
   1803d4b07:	4c 8d 05 2a 0e 4d 00 	lea    0x4d0e2a(%rip),%r8        # 0x1808a5938
   1803d4b0e:	48 89 05 eb d5 58 00 	mov    %rax,0x58d5eb(%rip)        # 0x180962100
   1803d4b15:	48 8d 15 4c b2 32 00 	lea    0x32b24c(%rip),%rdx        # 0x1806ffd68
   1803d4b1c:	48 8d 0d 0d d7 2f 00 	lea    0x2fd70d(%rip),%rcx        # 0x1806d2230
   1803d4b23:	e8 a8 5a ff ff       	call   0x1803ca5d0
   1803d4b28:	4c 8d 05 b1 0d 4d 00 	lea    0x4d0db1(%rip),%r8        # 0x1808a58e0
   1803d4b2f:	48 89 05 d2 d5 58 00 	mov    %rax,0x58d5d2(%rip)        # 0x180962108
   1803d4b36:	48 8d 15 13 b2 32 00 	lea    0x32b213(%rip),%rdx        # 0x1806ffd50
   1803d4b3d:	48 8d 0d ec d6 2f 00 	lea    0x2fd6ec(%rip),%rcx        # 0x1806d2230
   1803d4b44:	e8 87 5a ff ff       	call   0x1803ca5d0
   1803d4b49:	4c 8d 05 30 0d 4d 00 	lea    0x4d0d30(%rip),%r8        # 0x1808a5880
   1803d4b50:	48 89 05 b9 d5 58 00 	mov    %rax,0x58d5b9(%rip)        # 0x180962110
   1803d4b57:	48 8d 15 62 27 4d 00 	lea    0x4d2762(%rip),%rdx        # 0x1808a72c0
   1803d4b5e:	48 8d 0d cb d6 2f 00 	lea    0x2fd6cb(%rip),%rcx        # 0x1806d2230
   1803d4b65:	e8 66 5a ff ff       	call   0x1803ca5d0
   1803d4b6a:	4c 8d 05 9f 0c 4d 00 	lea    0x4d0c9f(%rip),%r8        # 0x1808a5810
   1803d4b71:	48 89 05 a0 d5 58 00 	mov    %rax,0x58d5a0(%rip)        # 0x180962118
   1803d4b78:	48 8d 15 29 27 4d 00 	lea    0x4d2729(%rip),%rdx        # 0x1808a72a8
   1803d4b7f:	48 8d 0d aa d6 2f 00 	lea    0x2fd6aa(%rip),%rcx        # 0x1806d2230
   1803d4b86:	e8 45 5a ff ff       	call   0x1803ca5d0
   1803d4b8b:	4c 8d 05 0e 0c 4d 00 	lea    0x4d0c0e(%rip),%r8        # 0x1808a57a0
   1803d4b92:	48 89 05 87 d5 58 00 	mov    %rax,0x58d587(%rip)        # 0x180962120
   1803d4b99:	48 8d 15 e8 26 4d 00 	lea    0x4d26e8(%rip),%rdx        # 0x1808a7288
   1803d4ba0:	48 8d 0d 89 d6 2f 00 	lea    0x2fd689(%rip),%rcx        # 0x1806d2230
   1803d4ba7:	e8 24 5a ff ff       	call   0x1803ca5d0
   1803d4bac:	4c 8d 05 b5 0b 4d 00 	lea    0x4d0bb5(%rip),%r8        # 0x1808a5768
   1803d4bb3:	48 89 05 6e d5 58 00 	mov    %rax,0x58d56e(%rip)        # 0x180962128
   1803d4bba:	48 8d 15 2f 28 4d 00 	lea    0x4d282f(%rip),%rdx        # 0x1808a73f0
   1803d4bc1:	48 8d 0d 68 d6 2f 00 	lea    0x2fd668(%rip),%rcx        # 0x1806d2230
   1803d4bc8:	e8 03 5a ff ff       	call   0x1803ca5d0
   1803d4bcd:	48 85 c0             	test   %rax,%rax
   1803d4bd0:	74 0b                	je     0x1803d4bdd
   1803d4bd2:	48 83 c0 13          	add    $0x13,%rax
   1803d4bd6:	48 89 05 53 d5 58 00 	mov    %rax,0x58d553(%rip)        # 0x180962130
   1803d4bdd:	4c 8d 05 3c 0b 4d 00 	lea    0x4d0b3c(%rip),%r8        # 0x1808a5720
   1803d4be4:	48 8d 15 ed 27 4d 00 	lea    0x4d27ed(%rip),%rdx        # 0x1808a73d8
   1803d4beb:	48 8d 0d 3e d6 2f 00 	lea    0x2fd63e(%rip),%rcx        # 0x1806d2230
   1803d4bf2:	e8 d9 59 ff ff       	call   0x1803ca5d0
   1803d4bf7:	45 33 c9             	xor    %r9d,%r9d
   1803d4bfa:	48 89 05 37 d5 58 00 	mov    %rax,0x58d537(%rip)        # 0x180962138
   1803d4c01:	4c 8d 05 c8 0e 4d 00 	lea    0x4d0ec8(%rip),%r8        # 0x1808a5ad0
   1803d4c08:	48 8d 15 b1 27 4d 00 	lea    0x4d27b1(%rip),%rdx        # 0x1808a73c0
   1803d4c0f:	48 8d 0d 1a d6 2f 00 	lea    0x2fd61a(%rip),%rcx        # 0x1806d2230
   1803d4c16:	e8 b5 5a ff ff       	call   0x1803ca6d0
   1803d4c1b:	45 33 c9             	xor    %r9d,%r9d
   1803d4c1e:	48 c7 44 24 28 07 00 	movq   $0x7,0x28(%rsp)
   1803d4c25:	00 00 
   1803d4c27:	4c 8d 05 82 0e 4d 00 	lea    0x4d0e82(%rip),%r8        # 0x1808a5ab0
   1803d4c2e:	48 89 05 0b d5 58 00 	mov    %rax,0x58d50b(%rip)        # 0x180962140
   1803d4c35:	48 8d 15 6c 27 4d 00 	lea    0x4d276c(%rip),%rdx        # 0x1808a73a8
   1803d4c3c:	48 c7 44 24 20 03 00 	movq   $0x3,0x20(%rsp)
   1803d4c43:	00 00 
   1803d4c45:	48 8d 0d e4 d5 2f 00 	lea    0x2fd5e4(%rip),%rcx        # 0x1806d2230
   1803d4c4c:	e8 3f 5b ff ff       	call   0x1803ca790
   1803d4c51:	41 b9 04 00 00 00    	mov    $0x4,%r9d
   1803d4c57:	48 c7 44 24 28 07 00 	movq   $0x7,0x28(%rsp)
   1803d4c5e:	00 00 
   1803d4c60:	4c 8d 05 19 0e 4d 00 	lea    0x4d0e19(%rip),%r8        # 0x1808a5a80
   1803d4c67:	48 89 05 da d4 58 00 	mov    %rax,0x58d4da(%rip)        # 0x180962148
   1803d4c6e:	48 8d 15 fb cd 30 00 	lea    0x30cdfb(%rip),%rdx        # 0x1806e1a70
   1803d4c75:	48 c7 44 24 20 03 00 	movq   $0x3,0x20(%rsp)
   1803d4c7c:	00 00 
   1803d4c7e:	48 8d 0d ab d5 2f 00 	lea    0x2fd5ab(%rip),%rcx        # 0x1806d2230
   1803d4c85:	e8 06 5b ff ff       	call   0x1803ca790
   1803d4c8a:	48 85 c0             	test   %rax,%rax
   1803d4c8d:	74 10                	je     0x1803d4c9f
   1803d4c8f:	48 8d 48 78          	lea    0x78(%rax),%rcx
   1803d4c93:	e8 08 a7 c3 ff       	call   0x18000f3a0
   1803d4c98:	48 89 05 b1 d4 58 00 	mov    %rax,0x58d4b1(%rip)        # 0x180962150
   1803d4c9f:	4c 8d 05 3a 0d 4d 00 	lea    0x4d0d3a(%rip),%r8        # 0x1808a59e0
   1803d4ca6:	48 8d 15 73 b1 32 00 	lea    0x32b173(%rip),%rdx        # 0x1806ffe20
   1803d4cad:	48 8d 0d 7c d5 2f 00 	lea    0x2fd57c(%rip),%rcx        # 0x1806d2230
   1803d4cb4:	e8 17 59 ff ff       	call   0x1803ca5d0
   1803d4cb9:	4c 8d 05 a0 0d 4d 00 	lea    0x4d0da0(%rip),%r8        # 0x1808a5a60
   1803d4cc0:	48 89 05 91 d4 58 00 	mov    %rax,0x58d491(%rip)        # 0x180962158
   1803d4cc7:	48 8d 15 c2 26 4d 00 	lea    0x4d26c2(%rip),%rdx        # 0x1808a7390
   1803d4cce:	48 8d 0d 5b d5 2f 00 	lea    0x2fd55b(%rip),%rcx        # 0x1806d2230
   1803d4cd5:	e8 f6 58 ff ff       	call   0x1803ca5d0
   1803d4cda:	48 8b d8             	mov    %rax,%rbx
   1803d4cdd:	48 85 c0             	test   %rax,%rax
   1803d4ce0:	0f 84 92 00 00 00    	je     0x1803d4d78
   1803d4ce6:	48 05 00 00 ff ff    	add    $0xffffffffffff0000,%rax
   1803d4cec:	49 3b c7             	cmp    %r15,%rax
   1803d4cef:	77 43                	ja     0x1803d4d34
   1803d4cf1:	48 8b cb             	mov    %rbx,%rcx
   1803d4cf4:	e8 27 c5 c3 ff       	call   0x180011220
   1803d4cf9:	3c e8                	cmp    $0xe8,%al
   1803d4cfb:	75 37                	jne    0x1803d4d34
   1803d4cfd:	48 8d 4b 01          	lea    0x1(%rbx),%rcx
   1803d4d01:	e8 fa c4 c3 ff       	call   0x180011200
   1803d4d06:	48 63 c8             	movslq %eax,%rcx
   1803d4d09:	4c 8d 05 50 0d 4d 00 	lea    0x4d0d50(%rip),%r8        # 0x1808a5a60
   1803d4d10:	48 83 c3 05          	add    $0x5,%rbx
   1803d4d14:	48 8d 15 75 26 4d 00 	lea    0x4d2675(%rip),%rdx        # 0x1808a7390
   1803d4d1b:	48 03 d9             	add    %rcx,%rbx
   1803d4d1e:	48 8d 0d 0b d5 2f 00 	lea    0x2fd50b(%rip),%rcx        # 0x1806d2230
   1803d4d25:	4c 8b cb             	mov    %rbx,%r9
   1803d4d28:	e8 43 56 ff ff       	call   0x1803ca370
   1803d4d2d:	48 85 db             	test   %rbx,%rbx
   1803d4d30:	74 1f                	je     0x1803d4d51
   1803d4d32:	eb 47                	jmp    0x1803d4d7b
   1803d4d34:	45 33 c9             	xor    %r9d,%r9d
   1803d4d37:	4c 8d 05 22 0d 4d 00 	lea    0x4d0d22(%rip),%r8        # 0x1808a5a60
   1803d4d3e:	48 8d 15 4b 26 4d 00 	lea    0x4d264b(%rip),%rdx        # 0x1808a7390
   1803d4d45:	48 8d 0d e4 d4 2f 00 	lea    0x2fd4e4(%rip),%rcx        # 0x1806d2230
   1803d4d4c:	e8 1f 56 ff ff       	call   0x1803ca370
   1803d4d51:	ff 05 e9 ca d3 00    	incl   0xd3cae9(%rip)        # 0x181111840
   1803d4d57:	4c 8d 0d 02 0d 4d 00 	lea    0x4d0d02(%rip),%r9        # 0x1808a5a60
   1803d4d5e:	4c 8d 05 2b 26 4d 00 	lea    0x4d262b(%rip),%r8        # 0x1808a7390
   1803d4d65:	48 8d 15 c4 d4 2f 00 	lea    0x2fd4c4(%rip),%rdx        # 0x1806d2230
   1803d4d6c:	48 8d 0d 3d 14 4d 00 	lea    0x4d143d(%rip),%rcx        # 0x1808a61b0
   1803d4d73:	e8 e8 d7 ed ff       	call   0x1802b2560
   1803d4d78:	49 8b de             	mov    %r14,%rbx
   1803d4d7b:	4c 8d 05 be 0c 4d 00 	lea    0x4d0cbe(%rip),%r8        # 0x1808a5a40
   1803d4d82:	48 89 1d d7 d3 58 00 	mov    %rbx,0x58d3d7(%rip)        # 0x180962160
   1803d4d89:	48 8d 15 e8 25 4d 00 	lea    0x4d25e8(%rip),%rdx        # 0x1808a7378
   1803d4d90:	48 8d 0d 99 d4 2f 00 	lea    0x2fd499(%rip),%rcx        # 0x1806d2230
   1803d4d97:	e8 34 58 ff ff       	call   0x1803ca5d0
   1803d4d9c:	48 8b d8             	mov    %rax,%rbx
   1803d4d9f:	48 85 c0             	test   %rax,%rax
   1803d4da2:	0f 84 92 00 00 00    	je     0x1803d4e3a
   1803d4da8:	48 05 00 00 ff ff    	add    $0xffffffffffff0000,%rax
   1803d4dae:	49 3b c7             	cmp    %r15,%rax
   1803d4db1:	77 43                	ja     0x1803d4df6
   1803d4db3:	48 8b cb             	mov    %rbx,%rcx
   1803d4db6:	e8 65 c4 c3 ff       	call   0x180011220
   1803d4dbb:	3c e8                	cmp    $0xe8,%al
   1803d4dbd:	75 37                	jne    0x1803d4df6
   1803d4dbf:	48 8d 4b 01          	lea    0x1(%rbx),%rcx
   1803d4dc3:	e8 38 c4 c3 ff       	call   0x180011200
   1803d4dc8:	48 63 c8             	movslq %eax,%rcx
   1803d4dcb:	4c 8d 05 6e 0c 4d 00 	lea    0x4d0c6e(%rip),%r8        # 0x1808a5a40
   1803d4dd2:	48 83 c3 05          	add    $0x5,%rbx
   1803d4dd6:	48 8d 15 9b 25 4d 00 	lea    0x4d259b(%rip),%rdx        # 0x1808a7378
   1803d4ddd:	48 03 d9             	add    %rcx,%rbx
   1803d4de0:	48 8d 0d 49 d4 2f 00 	lea    0x2fd449(%rip),%rcx        # 0x1806d2230
   1803d4de7:	4c 8b cb             	mov    %rbx,%r9
   1803d4dea:	e8 81 55 ff ff       	call   0x1803ca370
   1803d4def:	48 85 db             	test   %rbx,%rbx
   1803d4df2:	74 1f                	je     0x1803d4e13
   1803d4df4:	eb 47                	jmp    0x1803d4e3d
   1803d4df6:	45 33 c9             	xor    %r9d,%r9d
   1803d4df9:	4c 8d 05 40 0c 4d 00 	lea    0x4d0c40(%rip),%r8        # 0x1808a5a40
   1803d4e00:	48 8d 15 71 25 4d 00 	lea    0x4d2571(%rip),%rdx        # 0x1808a7378
   1803d4e07:	48 8d 0d 22 d4 2f 00 	lea    0x2fd422(%rip),%rcx        # 0x1806d2230
   1803d4e0e:	e8 5d 55 ff ff       	call   0x1803ca370
   1803d4e13:	ff 05 27 ca d3 00    	incl   0xd3ca27(%rip)        # 0x181111840
   1803d4e19:	4c 8d 0d 20 0c 4d 00 	lea    0x4d0c20(%rip),%r9        # 0x1808a5a40
   1803d4e20:	4c 8d 05 51 25 4d 00 	lea    0x4d2551(%rip),%r8        # 0x1808a7378
   1803d4e27:	48 8d 15 02 d4 2f 00 	lea    0x2fd402(%rip),%rdx        # 0x1806d2230
   1803d4e2e:	48 8d 0d 7b 13 4d 00 	lea    0x4d137b(%rip),%rcx        # 0x1808a61b0
   1803d4e35:	e8 26 d7 ed ff       	call   0x1802b2560
   1803d4e3a:	49 8b de             	mov    %r14,%rbx
   1803d4e3d:	4c 8d 05 64 0b 4d 00 	lea    0x4d0b64(%rip),%r8        # 0x1808a59a8
   1803d4e44:	48 89 1d 1d d3 58 00 	mov    %rbx,0x58d31d(%rip)        # 0x180962168
   1803d4e4b:	48 8d 15 16 25 4d 00 	lea    0x4d2516(%rip),%rdx        # 0x1808a7368
   1803d4e52:	48 8d 0d d7 d3 2f 00 	lea    0x2fd3d7(%rip),%rcx        # 0x1806d2230
   1803d4e59:	e8 72 57 ff ff       	call   0x1803ca5d0
   1803d4e5e:	48 8b d8             	mov    %rax,%rbx
   1803d4e61:	48 85 c0             	test   %rax,%rax
   1803d4e64:	0f 84 93 00 00 00    	je     0x1803d4efd
   1803d4e6a:	48 05 08 00 ff ff    	add    $0xffffffffffff0008,%rax
   1803d4e70:	49 3b c7             	cmp    %r15,%rax
   1803d4e73:	77 44                	ja     0x1803d4eb9
   1803d4e75:	48 8d 4b 08          	lea    0x8(%rbx),%rcx
   1803d4e79:	e8 a2 c3 c3 ff       	call   0x180011220
   1803d4e7e:	3c e8                	cmp    $0xe8,%al
   1803d4e80:	75 37                	jne    0x1803d4eb9
   1803d4e82:	48 8d 4b 09          	lea    0x9(%rbx),%rcx
   1803d4e86:	e8 75 c3 c3 ff       	call   0x180011200
   1803d4e8b:	48 63 c8             	movslq %eax,%rcx
   1803d4e8e:	4c 8d 05 13 0b 4d 00 	lea    0x4d0b13(%rip),%r8        # 0x1808a59a8
   1803d4e95:	48 83 c3 0d          	add    $0xd,%rbx
   1803d4e99:	48 8d 15 c8 24 4d 00 	lea    0x4d24c8(%rip),%rdx        # 0x1808a7368
   1803d4ea0:	48 03 d9             	add    %rcx,%rbx
   1803d4ea3:	48 8d 0d 86 d3 2f 00 	lea    0x2fd386(%rip),%rcx        # 0x1806d2230
   1803d4eaa:	4c 8b cb             	mov    %rbx,%r9
   1803d4ead:	e8 be 54 ff ff       	call   0x1803ca370
   1803d4eb2:	48 85 db             	test   %rbx,%rbx
   1803d4eb5:	74 1f                	je     0x1803d4ed6
   1803d4eb7:	eb 47                	jmp    0x1803d4f00
   1803d4eb9:	45 33 c9             	xor    %r9d,%r9d
   1803d4ebc:	4c 8d 05 e5 0a 4d 00 	lea    0x4d0ae5(%rip),%r8        # 0x1808a59a8
   1803d4ec3:	48 8d 15 9e 24 4d 00 	lea    0x4d249e(%rip),%rdx        # 0x1808a7368
   1803d4eca:	48 8d 0d 5f d3 2f 00 	lea    0x2fd35f(%rip),%rcx        # 0x1806d2230
   1803d4ed1:	e8 9a 54 ff ff       	call   0x1803ca370
   1803d4ed6:	ff 05 64 c9 d3 00    	incl   0xd3c964(%rip)        # 0x181111840
   1803d4edc:	4c 8d 0d c5 0a 4d 00 	lea    0x4d0ac5(%rip),%r9        # 0x1808a59a8
   1803d4ee3:	4c 8d 05 7e 24 4d 00 	lea    0x4d247e(%rip),%r8        # 0x1808a7368
   1803d4eea:	48 8d 15 3f d3 2f 00 	lea    0x2fd33f(%rip),%rdx        # 0x1806d2230
   1803d4ef1:	48 8d 0d b8 12 4d 00 	lea    0x4d12b8(%rip),%rcx        # 0x1808a61b0
   1803d4ef8:	e8 63 d6 ed ff       	call   0x1802b2560
   1803d4efd:	49 8b de             	mov    %r14,%rbx
   1803d4f00:	4c 8d 05 81 0a 4d 00 	lea    0x4d0a81(%rip),%r8        # 0x1808a5988
   1803d4f07:	48 89 1d 62 d2 58 00 	mov    %rbx,0x58d262(%rip)        # 0x180962170
   1803d4f0e:	48 8d 15 fb ae 32 00 	lea    0x32aefb(%rip),%rdx        # 0x1806ffe10
   1803d4f15:	48 8d 0d 14 d3 2f 00 	lea    0x2fd314(%rip),%rcx        # 0x1806d2230
   1803d4f1c:	e8 af 56 ff ff       	call   0x1803ca5d0
   1803d4f21:	48 8b d8             	mov    %rax,%rbx
   1803d4f24:	48 85 c0             	test   %rax,%rax
   1803d4f27:	0f 84 93 00 00 00    	je     0x1803d4fc0
   1803d4f2d:	48 05 09 00 ff ff    	add    $0xffffffffffff0009,%rax
   1803d4f33:	49 3b c7             	cmp    %r15,%rax
   1803d4f36:	77 44                	ja     0x1803d4f7c
   1803d4f38:	48 8d 4b 09          	lea    0x9(%rbx),%rcx
   1803d4f3c:	e8 df c2 c3 ff       	call   0x180011220
   1803d4f41:	3c e8                	cmp    $0xe8,%al
   1803d4f43:	75 37                	jne    0x1803d4f7c
   1803d4f45:	48 8d 4b 0a          	lea    0xa(%rbx),%rcx
   1803d4f49:	e8 b2 c2 c3 ff       	call   0x180011200
   1803d4f4e:	48 63 c8             	movslq %eax,%rcx
   1803d4f51:	4c 8d 05 30 0a 4d 00 	lea    0x4d0a30(%rip),%r8        # 0x1808a5988
   1803d4f58:	48 83 c3 0e          	add    $0xe,%rbx
   1803d4f5c:	48 8d 15 ad ae 32 00 	lea    0x32aead(%rip),%rdx        # 0x1806ffe10
   1803d4f63:	48 03 d9             	add    %rcx,%rbx
   1803d4f66:	48 8d 0d c3 d2 2f 00 	lea    0x2fd2c3(%rip),%rcx        # 0x1806d2230
   1803d4f6d:	4c 8b cb             	mov    %rbx,%r9
   1803d4f70:	e8 fb 53 ff ff       	call   0x1803ca370
   1803d4f75:	48 85 db             	test   %rbx,%rbx
   1803d4f78:	74 1f                	je     0x1803d4f99
   1803d4f7a:	eb 47                	jmp    0x1803d4fc3
   1803d4f7c:	45 33 c9             	xor    %r9d,%r9d
   1803d4f7f:	4c 8d 05 02 0a 4d 00 	lea    0x4d0a02(%rip),%r8        # 0x1808a5988
   1803d4f86:	48 8d 15 83 ae 32 00 	lea    0x32ae83(%rip),%rdx        # 0x1806ffe10
   1803d4f8d:	48 8d 0d 9c d2 2f 00 	lea    0x2fd29c(%rip),%rcx        # 0x1806d2230
   1803d4f94:	e8 d7 53 ff ff       	call   0x1803ca370
   1803d4f99:	ff 05 a1 c8 d3 00    	incl   0xd3c8a1(%rip)        # 0x181111840
   1803d4f9f:	4c 8d 0d e2 09 4d 00 	lea    0x4d09e2(%rip),%r9        # 0x1808a5988
   1803d4fa6:	4c 8d 05 63 ae 32 00 	lea    0x32ae63(%rip),%r8        # 0x1806ffe10
   1803d4fad:	48 8d 15 7c d2 2f 00 	lea    0x2fd27c(%rip),%rdx        # 0x1806d2230
   1803d4fb4:	48 8d 0d f5 11 4d 00 	lea    0x4d11f5(%rip),%rcx        # 0x1808a61b0
   1803d4fbb:	e8 a0 d5 ed ff       	call   0x1802b2560
   1803d4fc0:	49 8b de             	mov    %r14,%rbx
   1803d4fc3:	4c 8d 05 26 0d 4d 00 	lea    0x4d0d26(%rip),%r8        # 0x1808a5cf0
   1803d4fca:	48 89 1d a7 d1 58 00 	mov    %rbx,0x58d1a7(%rip)        # 0x180962178
   1803d4fd1:	48 8d 15 80 23 4d 00 	lea    0x4d2380(%rip),%rdx        # 0x1808a7358
   1803d4fd8:	48 8d 0d 51 d2 2f 00 	lea    0x2fd251(%rip),%rcx        # 0x1806d2230
   1803d4fdf:	e8 ec 55 ff ff       	call   0x1803ca5d0
   1803d4fe4:	48 8b d8             	mov    %rax,%rbx
   1803d4fe7:	48 85 c0             	test   %rax,%rax
   1803d4fea:	0f 84 92 00 00 00    	je     0x1803d5082
   1803d4ff0:	48 05 00 00 ff ff    	add    $0xffffffffffff0000,%rax
   1803d4ff6:	49 3b c7             	cmp    %r15,%rax
   1803d4ff9:	77 43                	ja     0x1803d503e
   1803d4ffb:	48 8b cb             	mov    %rbx,%rcx
   1803d4ffe:	e8 1d c2 c3 ff       	call   0x180011220
   1803d5003:	3c e8                	cmp    $0xe8,%al
   1803d5005:	75 37                	jne    0x1803d503e
   1803d5007:	48 8d 4b 01          	lea    0x1(%rbx),%rcx
   1803d500b:	e8 f0 c1 c3 ff       	call   0x180011200
   1803d5010:	48 63 c8             	movslq %eax,%rcx
   1803d5013:	4c 8d 05 d6 0c 4d 00 	lea    0x4d0cd6(%rip),%r8        # 0x1808a5cf0
   1803d501a:	48 83 c3 05          	add    $0x5,%rbx
   1803d501e:	48 8d 15 33 23 4d 00 	lea    0x4d2333(%rip),%rdx        # 0x1808a7358
   1803d5025:	48 03 d9             	add    %rcx,%rbx
   1803d5028:	48 8d 0d 01 d2 2f 00 	lea    0x2fd201(%rip),%rcx        # 0x1806d2230
   1803d502f:	4c 8b cb             	mov    %rbx,%r9
   1803d5032:	e8 39 53 ff ff       	call   0x1803ca370
   1803d5037:	48 85 db             	test   %rbx,%rbx
   1803d503a:	74 1f                	je     0x1803d505b
   1803d503c:	eb 47                	jmp    0x1803d5085
   1803d503e:	45 33 c9             	xor    %r9d,%r9d
   1803d5041:	4c 8d 05 a8 0c 4d 00 	lea    0x4d0ca8(%rip),%r8        # 0x1808a5cf0
   1803d5048:	48 8d 15 09 23 4d 00 	lea    0x4d2309(%rip),%rdx        # 0x1808a7358
   1803d504f:	48 8d 0d da d1 2f 00 	lea    0x2fd1da(%rip),%rcx        # 0x1806d2230
   1803d5056:	e8 15 53 ff ff       	call   0x1803ca370
   1803d505b:	ff 05 df c7 d3 00    	incl   0xd3c7df(%rip)        # 0x181111840
   1803d5061:	4c 8d 0d 88 0c 4d 00 	lea    0x4d0c88(%rip),%r9        # 0x1808a5cf0
   1803d5068:	4c 8d 05 e9 22 4d 00 	lea    0x4d22e9(%rip),%r8        # 0x1808a7358
   1803d506f:	48 8d 15 ba d1 2f 00 	lea    0x2fd1ba(%rip),%rdx        # 0x1806d2230
   1803d5076:	48 8d 0d 33 11 4d 00 	lea    0x4d1133(%rip),%rcx        # 0x1808a61b0
   1803d507d:	e8 de d4 ed ff       	call   0x1802b2560
   1803d5082:	49 8b de             	mov    %r14,%rbx
   1803d5085:	ff 05 b9 c7 d3 00    	incl   0xd3c7b9(%rip)        # 0x181111844
   1803d508b:	48 8d 3d 0e 0c 4d 00 	lea    0x4d0c0e(%rip),%rdi        # 0x1808a5ca0
   1803d5092:	4c 8b c7             	mov    %rdi,%r8
   1803d5095:	48 89 1d ec d0 58 00 	mov    %rbx,0x58d0ec(%rip)        # 0x180962188
   1803d509c:	45 33 c9             	xor    %r9d,%r9d
   1803d509f:	48 8d 15 da 23 4d 00 	lea    0x4d23da(%rip),%rdx        # 0x1808a7480
   1803d50a6:	48 8d 0d 83 d1 2f 00 	lea    0x2fd183(%rip),%rcx        # 0x1806d2230
   1803d50ad:	e8 be 52 ff ff       	call   0x1803ca370
   1803d50b2:	48 8d 0d 77 d1 2f 00 	lea    0x2fd177(%rip),%rcx        # 0x1806d2230
   1803d50b9:	ff 15 c1 60 19 00    	call   *0x1960c1(%rip)        # 0x18056b180
   1803d50bf:	48 8b d8             	mov    %rax,%rbx
   1803d50c2:	48 85 c0             	test   %rax,%rax
   1803d50c5:	0f 84 94 00 00 00    	je     0x1803d515f
   1803d50cb:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d50ce:	33 c0                	xor    %eax,%eax
   1803d50d0:	0f 11 45 98          	movups %xmm0,-0x68(%rbp)
   1803d50d4:	48 89 45 a8          	mov    %rax,-0x58(%rbp)
   1803d50d8:	ff 15 b2 61 19 00    	call   *0x1961b2(%rip)        # 0x18056b290
   1803d50de:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d50e4:	4c 8d 45 98          	lea    -0x68(%rbp),%r8
   1803d50e8:	48 8b c8             	mov    %rax,%rcx
   1803d50eb:	48 8b d3             	mov    %rbx,%rdx
   1803d50ee:	ff 15 a4 61 19 00    	call   *0x1961a4(%rip)        # 0x18056b298
   1803d50f4:	85 c0                	test   %eax,%eax
   1803d50f6:	74 67                	je     0x1803d515f
   1803d50f8:	48 8b 45 98          	mov    -0x68(%rbp),%rax
   1803d50fc:	8b 4d a0             	mov    -0x60(%rbp),%ecx
   1803d50ff:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d5104:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d5109:	48 85 c0             	test   %rax,%rax
   1803d510c:	74 51                	je     0x1803d515f
   1803d510e:	48 85 c9             	test   %rcx,%rcx
   1803d5111:	74 4c                	je     0x1803d515f
   1803d5113:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d5118:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d511d:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d5122:	48 c7 44 24 38 4f 00 	movq   $0x4f,0x38(%rsp)
   1803d5129:	00 00 
   1803d512b:	e8 d0 cc df ff       	call   0x1801d1e00
   1803d5130:	48 8b d8             	mov    %rax,%rbx
   1803d5133:	48 85 c0             	test   %rax,%rax
   1803d5136:	75 0c                	jne    0x1803d5144
   1803d5138:	4c 8b cf             	mov    %rdi,%r9
   1803d513b:	48 8d 0d 96 10 4d 00 	lea    0x4d1096(%rip),%rcx        # 0x1808a61d8
   1803d5142:	eb 29                	jmp    0x1803d516d
   1803d5144:	4c 8b c8             	mov    %rax,%r9
   1803d5147:	48 8d 15 32 23 4d 00 	lea    0x4d2332(%rip),%rdx        # 0x1808a7480
   1803d514e:	4c 8b c7             	mov    %rdi,%r8
   1803d5151:	48 8d 0d d8 d0 2f 00 	lea    0x2fd0d8(%rip),%rcx        # 0x1806d2230
   1803d5158:	e8 13 52 ff ff       	call   0x1803ca370
   1803d515d:	eb 2a                	jmp    0x1803d5189
   1803d515f:	4c 8d 0d dd 64 1b 00 	lea    0x1b64dd(%rip),%r9        # 0x18058b643
   1803d5166:	48 8d 0d 93 10 4d 00 	lea    0x4d1093(%rip),%rcx        # 0x1808a6200
   1803d516d:	ff 05 cd c6 d3 00    	incl   0xd3c6cd(%rip)        # 0x181111840
   1803d5173:	4c 8d 05 06 23 4d 00 	lea    0x4d2306(%rip),%r8        # 0x1808a7480
   1803d517a:	48 8d 15 af d0 2f 00 	lea    0x2fd0af(%rip),%rdx        # 0x1806d2230
   1803d5181:	e8 da d3 ed ff       	call   0x1802b2560
   1803d5186:	49 8b de             	mov    %r14,%rbx
   1803d5189:	4c 8d 05 c0 0a 4d 00 	lea    0x4d0ac0(%rip),%r8        # 0x1808a5c50
   1803d5190:	48 89 1d f9 cf 58 00 	mov    %rbx,0x58cff9(%rip)        # 0x180962190
   1803d5197:	48 8d 15 ca 22 4d 00 	lea    0x4d22ca(%rip),%rdx        # 0x1808a7468
   1803d519e:	48 8d 0d 8b d0 2f 00 	lea    0x2fd08b(%rip),%rcx        # 0x1806d2230
   1803d51a5:	e8 26 54 ff ff       	call   0x1803ca5d0
   1803d51aa:	48 8b d8             	mov    %rax,%rbx
   1803d51ad:	48 85 c0             	test   %rax,%rax
   1803d51b0:	0f 84 a8 00 00 00    	je     0x1803d525e
   1803d51b6:	48 05 10 00 ff ff    	add    $0xffffffffffff0010,%rax
   1803d51bc:	49 3b c7             	cmp    %r15,%rax
   1803d51bf:	77 59                	ja     0x1803d521a
   1803d51c1:	48 8d 4b 10          	lea    0x10(%rbx),%rcx
   1803d51c5:	e8 56 c0 c3 ff       	call   0x180011220
   1803d51ca:	3c e8                	cmp    $0xe8,%al
   1803d51cc:	75 4c                	jne    0x1803d521a
   1803d51ce:	48 8d 4b 11          	lea    0x11(%rbx),%rcx
   1803d51d2:	e8 29 c0 c3 ff       	call   0x180011200
   1803d51d7:	48 63 f0             	movslq %eax,%rsi
   1803d51da:	48 8d 7b 15          	lea    0x15(%rbx),%rdi
   1803d51de:	48 03 fe             	add    %rsi,%rdi
   1803d51e1:	4c 8d 05 68 0a 4d 00 	lea    0x4d0a68(%rip),%r8        # 0x1808a5c50
   1803d51e8:	4c 8b cf             	mov    %rdi,%r9
   1803d51eb:	48 8d 15 76 22 4d 00 	lea    0x4d2276(%rip),%rdx        # 0x1808a7468
   1803d51f2:	48 8d 0d 37 d0 2f 00 	lea    0x2fd037(%rip),%rcx        # 0x1806d2230
   1803d51f9:	e8 72 51 ff ff       	call   0x1803ca370
   1803d51fe:	48 85 ff             	test   %rdi,%rdi
   1803d5201:	74 34                	je     0x1803d5237
   1803d5203:	48 8d 43 95          	lea    -0x6b(%rbx),%rax
   1803d5207:	48 89 3d 8a cf 58 00 	mov    %rdi,0x58cf8a(%rip)        # 0x180962198
   1803d520e:	48 03 c6             	add    %rsi,%rax
   1803d5211:	48 89 05 88 cf 58 00 	mov    %rax,0x58cf88(%rip)        # 0x1809621a0
   1803d5218:	eb 4b                	jmp    0x1803d5265
   1803d521a:	45 33 c9             	xor    %r9d,%r9d
   1803d521d:	4c 8d 05 2c 0a 4d 00 	lea    0x4d0a2c(%rip),%r8        # 0x1808a5c50
   1803d5224:	48 8d 15 3d 22 4d 00 	lea    0x4d223d(%rip),%rdx        # 0x1808a7468
   1803d522b:	48 8d 0d fe cf 2f 00 	lea    0x2fcffe(%rip),%rcx        # 0x1806d2230
   1803d5232:	e8 39 51 ff ff       	call   0x1803ca370
   1803d5237:	ff 05 03 c6 d3 00    	incl   0xd3c603(%rip)        # 0x181111840
   1803d523d:	4c 8d 0d 0c 0a 4d 00 	lea    0x4d0a0c(%rip),%r9        # 0x1808a5c50
   1803d5244:	4c 8d 05 1d 22 4d 00 	lea    0x4d221d(%rip),%r8        # 0x1808a7468
   1803d524b:	48 8d 15 de cf 2f 00 	lea    0x2fcfde(%rip),%rdx        # 0x1806d2230
   1803d5252:	48 8d 0d 57 0f 4d 00 	lea    0x4d0f57(%rip),%rcx        # 0x1808a61b0
   1803d5259:	e8 02 d3 ed ff       	call   0x1802b2560
   1803d525e:	4c 89 35 33 cf 58 00 	mov    %r14,0x58cf33(%rip)        # 0x180962198
   1803d5265:	4c 8d 05 bc 09 4d 00 	lea    0x4d09bc(%rip),%r8        # 0x1808a5c28
   1803d526c:	48 8d 15 e5 21 4d 00 	lea    0x4d21e5(%rip),%rdx        # 0x1808a7458
   1803d5273:	48 8d 0d b6 cf 2f 00 	lea    0x2fcfb6(%rip),%rcx        # 0x1806d2230
   1803d527a:	e8 51 53 ff ff       	call   0x1803ca5d0
   1803d527f:	48 8b b4 24 38 0c 00 	mov    0xc38(%rsp),%rsi
   1803d5286:	00 
   1803d5287:	48 8b d8             	mov    %rax,%rbx
   1803d528a:	48 85 c0             	test   %rax,%rax
   1803d528d:	0f 84 92 00 00 00    	je     0x1803d5325
   1803d5293:	48 05 00 00 ff ff    	add    $0xffffffffffff0000,%rax
   1803d5299:	49 3b c7             	cmp    %r15,%rax
   1803d529c:	77 43                	ja     0x1803d52e1
   1803d529e:	48 8b cb             	mov    %rbx,%rcx
   1803d52a1:	e8 7a bf c3 ff       	call   0x180011220
   1803d52a6:	3c e8                	cmp    $0xe8,%al
   1803d52a8:	75 37                	jne    0x1803d52e1
   1803d52aa:	48 8d 4b 01          	lea    0x1(%rbx),%rcx
   1803d52ae:	e8 4d bf c3 ff       	call   0x180011200
   1803d52b3:	48 63 c8             	movslq %eax,%rcx
   1803d52b6:	4c 8d 05 6b 09 4d 00 	lea    0x4d096b(%rip),%r8        # 0x1808a5c28
   1803d52bd:	48 83 c3 05          	add    $0x5,%rbx
   1803d52c1:	48 8d 15 90 21 4d 00 	lea    0x4d2190(%rip),%rdx        # 0x1808a7458
   1803d52c8:	48 03 d9             	add    %rcx,%rbx
   1803d52cb:	48 8d 0d 5e cf 2f 00 	lea    0x2fcf5e(%rip),%rcx        # 0x1806d2230
   1803d52d2:	4c 8b cb             	mov    %rbx,%r9
   1803d52d5:	e8 96 50 ff ff       	call   0x1803ca370
   1803d52da:	48 85 db             	test   %rbx,%rbx
   1803d52dd:	74 1f                	je     0x1803d52fe
   1803d52df:	eb 47                	jmp    0x1803d5328
   1803d52e1:	45 33 c9             	xor    %r9d,%r9d
   1803d52e4:	4c 8d 05 3d 09 4d 00 	lea    0x4d093d(%rip),%r8        # 0x1808a5c28
   1803d52eb:	48 8d 15 66 21 4d 00 	lea    0x4d2166(%rip),%rdx        # 0x1808a7458
   1803d52f2:	48 8d 0d 37 cf 2f 00 	lea    0x2fcf37(%rip),%rcx        # 0x1806d2230
   1803d52f9:	e8 72 50 ff ff       	call   0x1803ca370
   1803d52fe:	ff 05 3c c5 d3 00    	incl   0xd3c53c(%rip)        # 0x181111840
   1803d5304:	4c 8d 0d 1d 09 4d 00 	lea    0x4d091d(%rip),%r9        # 0x1808a5c28
   1803d530b:	4c 8d 05 46 21 4d 00 	lea    0x4d2146(%rip),%r8        # 0x1808a7458
   1803d5312:	48 8d 15 17 cf 2f 00 	lea    0x2fcf17(%rip),%rdx        # 0x1806d2230
   1803d5319:	48 8d 0d 90 0e 4d 00 	lea    0x4d0e90(%rip),%rcx        # 0x1808a61b0
   1803d5320:	e8 3b d2 ed ff       	call   0x1802b2560
   1803d5325:	49 8b de             	mov    %r14,%rbx
   1803d5328:	4c 8d 05 c1 08 4d 00 	lea    0x4d08c1(%rip),%r8        # 0x1808a5bf0
   1803d532f:	48 89 1d 72 ce 58 00 	mov    %rbx,0x58ce72(%rip)        # 0x1809621a8
   1803d5336:	48 8d 15 0b 21 4d 00 	lea    0x4d210b(%rip),%rdx        # 0x1808a7448
   1803d533d:	48 8d 0d ec ce 2f 00 	lea    0x2fceec(%rip),%rcx        # 0x1806d2230
   1803d5344:	e8 87 52 ff ff       	call   0x1803ca5d0
   1803d5349:	48 8b c8             	mov    %rax,%rcx
   1803d534c:	48 85 c0             	test   %rax,%rax
   1803d534f:	74 6e                	je     0x1803d53bf
   1803d5351:	4c 63 48 03          	movslq 0x3(%rax),%r9
   1803d5355:	4c 8d 05 94 08 4d 00 	lea    0x4d0894(%rip),%r8        # 0x1808a5bf0
   1803d535c:	48 05 07 00 ff ff    	add    $0xffffffffffff0007,%rax
   1803d5362:	48 8d 15 df 20 4d 00 	lea    0x4d20df(%rip),%rdx        # 0x1808a7448
   1803d5369:	49 03 c1             	add    %r9,%rax
   1803d536c:	49 3b c7             	cmp    %r15,%rax
   1803d536f:	77 18                	ja     0x1803d5389
   1803d5371:	48 8d 59 07          	lea    0x7(%rcx),%rbx
   1803d5375:	49 03 d9             	add    %r9,%rbx
   1803d5378:	48 8d 0d b1 ce 2f 00 	lea    0x2fceb1(%rip),%rcx        # 0x1806d2230
   1803d537f:	4c 8b cb             	mov    %rbx,%r9
   1803d5382:	e8 e9 4f ff ff       	call   0x1803ca370
   1803d5387:	eb 39                	jmp    0x1803d53c2
   1803d5389:	45 33 c9             	xor    %r9d,%r9d
   1803d538c:	48 8d 0d 9d ce 2f 00 	lea    0x2fce9d(%rip),%rcx        # 0x1806d2230
   1803d5393:	e8 d8 4f ff ff       	call   0x1803ca370
   1803d5398:	ff 05 a2 c4 d3 00    	incl   0xd3c4a2(%rip)        # 0x181111840
   1803d539e:	4c 8d 0d 4b 08 4d 00 	lea    0x4d084b(%rip),%r9        # 0x1808a5bf0
   1803d53a5:	4c 8d 05 9c 20 4d 00 	lea    0x4d209c(%rip),%r8        # 0x1808a7448
   1803d53ac:	48 8d 15 7d ce 2f 00 	lea    0x2fce7d(%rip),%rdx        # 0x1806d2230
   1803d53b3:	48 8d 0d c6 0d 4d 00 	lea    0x4d0dc6(%rip),%rcx        # 0x1808a6180
   1803d53ba:	e8 a1 d1 ed ff       	call   0x1802b2560
   1803d53bf:	49 8b de             	mov    %r14,%rbx
   1803d53c2:	ff 05 7c c4 d3 00    	incl   0xd3c47c(%rip)        # 0x181111844
   1803d53c8:	48 8d 3d c1 07 4d 00 	lea    0x4d07c1(%rip),%rdi        # 0x1808a5b90
   1803d53cf:	4c 8b c7             	mov    %rdi,%r8
   1803d53d2:	48 89 1d d7 cd 58 00 	mov    %rbx,0x58cdd7(%rip)        # 0x1809621b0
   1803d53d9:	45 33 c9             	xor    %r9d,%r9d
   1803d53dc:	48 8d 15 55 20 4d 00 	lea    0x4d2055(%rip),%rdx        # 0x1808a7438
   1803d53e3:	48 8d 0d 46 ce 2f 00 	lea    0x2fce46(%rip),%rcx        # 0x1806d2230
   1803d53ea:	e8 81 4f ff ff       	call   0x1803ca370
   1803d53ef:	48 8d 0d 3a ce 2f 00 	lea    0x2fce3a(%rip),%rcx        # 0x1806d2230
   1803d53f6:	ff 15 84 5d 19 00    	call   *0x195d84(%rip)        # 0x18056b180
   1803d53fc:	48 8b d8             	mov    %rax,%rbx
   1803d53ff:	48 85 c0             	test   %rax,%rax
   1803d5402:	0f 84 94 00 00 00    	je     0x1803d549c
   1803d5408:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d540b:	33 c0                	xor    %eax,%eax
   1803d540d:	0f 11 45 b0          	movups %xmm0,-0x50(%rbp)
   1803d5411:	48 89 45 c0          	mov    %rax,-0x40(%rbp)
   1803d5415:	ff 15 75 5e 19 00    	call   *0x195e75(%rip)        # 0x18056b290
   1803d541b:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d5421:	4c 8d 45 b0          	lea    -0x50(%rbp),%r8
   1803d5425:	48 8b c8             	mov    %rax,%rcx
   1803d5428:	48 8b d3             	mov    %rbx,%rdx
   1803d542b:	ff 15 67 5e 19 00    	call   *0x195e67(%rip)        # 0x18056b298
   1803d5431:	85 c0                	test   %eax,%eax
   1803d5433:	74 67                	je     0x1803d549c
   1803d5435:	48 8b 45 b0          	mov    -0x50(%rbp),%rax
   1803d5439:	8b 4d b8             	mov    -0x48(%rbp),%ecx
   1803d543c:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d5441:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d5446:	48 85 c0             	test   %rax,%rax
   1803d5449:	74 51                	je     0x1803d549c
   1803d544b:	48 85 c9             	test   %rcx,%rcx
   1803d544e:	74 4c                	je     0x1803d549c
   1803d5450:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d5455:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d545a:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d545f:	48 c7 44 24 38 5f 00 	movq   $0x5f,0x38(%rsp)
   1803d5466:	00 00 
   1803d5468:	e8 93 c9 df ff       	call   0x1801d1e00
   1803d546d:	48 8b d8             	mov    %rax,%rbx
   1803d5470:	48 85 c0             	test   %rax,%rax
   1803d5473:	75 0c                	jne    0x1803d5481
   1803d5475:	4c 8b cf             	mov    %rdi,%r9
   1803d5478:	48 8d 0d 59 0d 4d 00 	lea    0x4d0d59(%rip),%rcx        # 0x1808a61d8
   1803d547f:	eb 29                	jmp    0x1803d54aa
   1803d5481:	4c 8b c8             	mov    %rax,%r9
   1803d5484:	48 8d 15 ad 1f 4d 00 	lea    0x4d1fad(%rip),%rdx        # 0x1808a7438
   1803d548b:	4c 8b c7             	mov    %rdi,%r8
   1803d548e:	48 8d 0d 9b cd 2f 00 	lea    0x2fcd9b(%rip),%rcx        # 0x1806d2230
   1803d5495:	e8 d6 4e ff ff       	call   0x1803ca370
   1803d549a:	eb 2a                	jmp    0x1803d54c6
   1803d549c:	4c 8d 0d a0 61 1b 00 	lea    0x1b61a0(%rip),%r9        # 0x18058b643
   1803d54a3:	48 8d 0d 56 0d 4d 00 	lea    0x4d0d56(%rip),%rcx        # 0x1808a6200
   1803d54aa:	ff 05 90 c3 d3 00    	incl   0xd3c390(%rip)        # 0x181111840
   1803d54b0:	4c 8d 05 81 1f 4d 00 	lea    0x4d1f81(%rip),%r8        # 0x1808a7438
   1803d54b7:	48 8d 15 72 cd 2f 00 	lea    0x2fcd72(%rip),%rdx        # 0x1806d2230
   1803d54be:	e8 9d d0 ed ff       	call   0x1802b2560
   1803d54c3:	49 8b de             	mov    %r14,%rbx
   1803d54c6:	ff 05 78 c3 d3 00    	incl   0xd3c378(%rip)        # 0x181111844
   1803d54cc:	48 8d 3d 1d 06 4d 00 	lea    0x4d061d(%rip),%rdi        # 0x1808a5af0
   1803d54d3:	4c 8b c7             	mov    %rdi,%r8
   1803d54d6:	48 89 1d db cc 58 00 	mov    %rbx,0x58ccdb(%rip)        # 0x1809621b8
   1803d54dd:	45 33 c9             	xor    %r9d,%r9d
   1803d54e0:	48 8d 15 41 1f 4d 00 	lea    0x4d1f41(%rip),%rdx        # 0x1808a7428
   1803d54e7:	48 8d 0d 42 cd 2f 00 	lea    0x2fcd42(%rip),%rcx        # 0x1806d2230
   1803d54ee:	e8 7d 4e ff ff       	call   0x1803ca370
   1803d54f3:	48 8d 0d 36 cd 2f 00 	lea    0x2fcd36(%rip),%rcx        # 0x1806d2230
   1803d54fa:	ff 15 80 5c 19 00    	call   *0x195c80(%rip)        # 0x18056b180
   1803d5500:	48 8b d8             	mov    %rax,%rbx
   1803d5503:	48 85 c0             	test   %rax,%rax
   1803d5506:	0f 84 f1 00 00 00    	je     0x1803d55fd
   1803d550c:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d550f:	33 c0                	xor    %eax,%eax
   1803d5511:	0f 11 45 c8          	movups %xmm0,-0x38(%rbp)
   1803d5515:	48 89 45 d8          	mov    %rax,-0x28(%rbp)
   1803d5519:	ff 15 71 5d 19 00    	call   *0x195d71(%rip)        # 0x18056b290
   1803d551f:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d5525:	4c 8d 45 c8          	lea    -0x38(%rbp),%r8
   1803d5529:	48 8b c8             	mov    %rax,%rcx
   1803d552c:	48 8b d3             	mov    %rbx,%rdx
   1803d552f:	ff 15 63 5d 19 00    	call   *0x195d63(%rip)        # 0x18056b298
   1803d5535:	85 c0                	test   %eax,%eax
   1803d5537:	0f 84 c0 00 00 00    	je     0x1803d55fd
   1803d553d:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
   1803d5541:	8b 4d d0             	mov    -0x30(%rbp),%ecx
   1803d5544:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d5549:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d554e:	48 85 c0             	test   %rax,%rax
   1803d5551:	0f 84 a6 00 00 00    	je     0x1803d55fd
   1803d5557:	48 85 c9             	test   %rcx,%rcx
   1803d555a:	0f 84 9d 00 00 00    	je     0x1803d55fd
   1803d5560:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d5565:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d556a:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d556f:	48 c7 44 24 38 96 00 	movq   $0x96,0x38(%rsp)
   1803d5576:	00 00 
   1803d5578:	e8 83 c8 df ff       	call   0x1801d1e00
   1803d557d:	48 8b d8             	mov    %rax,%rbx
   1803d5580:	48 85 c0             	test   %rax,%rax
   1803d5583:	75 0c                	jne    0x1803d5591
   1803d5585:	4c 8b cf             	mov    %rdi,%r9
   1803d5588:	48 8d 0d 49 0c 4d 00 	lea    0x4d0c49(%rip),%rcx        # 0x1808a61d8
   1803d558f:	eb 7a                	jmp    0x1803d560b
   1803d5591:	4c 8b cb             	mov    %rbx,%r9
   1803d5594:	48 8d 15 8d 1e 4d 00 	lea    0x4d1e8d(%rip),%rdx        # 0x1808a7428
   1803d559b:	4c 8b c7             	mov    %rdi,%r8
   1803d559e:	48 8d 0d 8b cc 2f 00 	lea    0x2fcc8b(%rip),%rcx        # 0x1806d2230
   1803d55a5:	e8 c6 4d ff ff       	call   0x1803ca370
   1803d55aa:	48 8d 4b 12          	lea    0x12(%rbx),%rcx
   1803d55ae:	48 89 1d 0b cc 58 00 	mov    %rbx,0x58cc0b(%rip)        # 0x1809621c0
   1803d55b5:	ba 03 00 00 00       	mov    $0x3,%edx
   1803d55ba:	41 b8 07 00 00 00    	mov    $0x7,%r8d
   1803d55c0:	e8 5b cb df ff       	call   0x1801d2120
   1803d55c5:	48 89 05 0c cc 58 00 	mov    %rax,0x58cc0c(%rip)        # 0x1809621d8
   1803d55cc:	48 05 00 00 ff ff    	add    $0xffffffffffff0000,%rax
   1803d55d2:	49 3b c7             	cmp    %r15,%rax
   1803d55d5:	76 54                	jbe    0x1803d562b
   1803d55d7:	4c 8b cf             	mov    %rdi,%r9
   1803d55da:	4c 89 35 f7 cb 58 00 	mov    %r14,0x58cbf7(%rip)        # 0x1809621d8
   1803d55e1:	4c 8d 05 30 1e 4d 00 	lea    0x4d1e30(%rip),%r8        # 0x1808a7418
   1803d55e8:	48 8d 15 41 cc 2f 00 	lea    0x2fcc41(%rip),%rdx        # 0x1806d2230
   1803d55ef:	48 8d 0d 8a 0b 4d 00 	lea    0x4d0b8a(%rip),%rcx        # 0x1808a6180
   1803d55f6:	e8 55 4d ff ff       	call   0x1803ca350
   1803d55fb:	eb 2e                	jmp    0x1803d562b
   1803d55fd:	4c 8d 0d 3f 60 1b 00 	lea    0x1b603f(%rip),%r9        # 0x18058b643
   1803d5604:	48 8d 0d f5 0b 4d 00 	lea    0x4d0bf5(%rip),%rcx        # 0x1808a6200
   1803d560b:	ff 05 2f c2 d3 00    	incl   0xd3c22f(%rip)        # 0x181111840
   1803d5611:	4c 8d 05 10 1e 4d 00 	lea    0x4d1e10(%rip),%r8        # 0x1808a7428
   1803d5618:	48 8d 15 11 cc 2f 00 	lea    0x2fcc11(%rip),%rdx        # 0x1806d2230
   1803d561f:	e8 3c cf ed ff       	call   0x1802b2560
   1803d5624:	4c 89 35 95 cb 58 00 	mov    %r14,0x58cb95(%rip)        # 0x1809621c0
   1803d562b:	ff 05 13 c2 d3 00    	incl   0xd3c213(%rip)        # 0x181111844
   1803d5631:	48 8d 3d 28 0a 4d 00 	lea    0x4d0a28(%rip),%rdi        # 0x1808a6060
   1803d5638:	4c 8b c7             	mov    %rdi,%r8
   1803d563b:	48 8d 15 c6 1d 4d 00 	lea    0x4d1dc6(%rip),%rdx        # 0x1808a7408
   1803d5642:	45 33 c9             	xor    %r9d,%r9d
   1803d5645:	48 8d 0d e4 cb 2f 00 	lea    0x2fcbe4(%rip),%rcx        # 0x1806d2230
   1803d564c:	e8 1f 4d ff ff       	call   0x1803ca370
   1803d5651:	48 8d 0d d8 cb 2f 00 	lea    0x2fcbd8(%rip),%rcx        # 0x1806d2230
   1803d5658:	ff 15 22 5b 19 00    	call   *0x195b22(%rip)        # 0x18056b180
   1803d565e:	4c 8b bc 24 10 0c 00 	mov    0xc10(%rsp),%r15
   1803d5665:	00 
   1803d5666:	48 8b d8             	mov    %rax,%rbx
   1803d5669:	48 85 c0             	test   %rax,%rax
   1803d566c:	0f 84 94 00 00 00    	je     0x1803d5706
   1803d5672:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d5675:	33 c0                	xor    %eax,%eax
   1803d5677:	0f 11 45 e0          	movups %xmm0,-0x20(%rbp)
   1803d567b:	48 89 45 f0          	mov    %rax,-0x10(%rbp)
   1803d567f:	ff 15 0b 5c 19 00    	call   *0x195c0b(%rip)        # 0x18056b290
   1803d5685:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d568b:	4c 8d 45 e0          	lea    -0x20(%rbp),%r8
   1803d568f:	48 8b c8             	mov    %rax,%rcx
   1803d5692:	48 8b d3             	mov    %rbx,%rdx
   1803d5695:	ff 15 fd 5b 19 00    	call   *0x195bfd(%rip)        # 0x18056b298
   1803d569b:	85 c0                	test   %eax,%eax
   1803d569d:	74 67                	je     0x1803d5706
   1803d569f:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
   1803d56a3:	8b 4d e8             	mov    -0x18(%rbp),%ecx
   1803d56a6:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d56ab:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d56b0:	48 85 c0             	test   %rax,%rax
   1803d56b3:	74 51                	je     0x1803d5706
   1803d56b5:	48 85 c9             	test   %rcx,%rcx
   1803d56b8:	74 4c                	je     0x1803d5706
   1803d56ba:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d56bf:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d56c4:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d56c9:	48 c7 44 24 38 8c 00 	movq   $0x8c,0x38(%rsp)
   1803d56d0:	00 00 
   1803d56d2:	e8 29 c7 df ff       	call   0x1801d1e00
   1803d56d7:	48 8b d8             	mov    %rax,%rbx
   1803d56da:	48 85 c0             	test   %rax,%rax
   1803d56dd:	75 0c                	jne    0x1803d56eb
   1803d56df:	4c 8b cf             	mov    %rdi,%r9
   1803d56e2:	48 8d 0d ef 0a 4d 00 	lea    0x4d0aef(%rip),%rcx        # 0x1808a61d8
   1803d56e9:	eb 29                	jmp    0x1803d5714
   1803d56eb:	4c 8b c8             	mov    %rax,%r9
   1803d56ee:	48 8d 15 13 1d 4d 00 	lea    0x4d1d13(%rip),%rdx        # 0x1808a7408
   1803d56f5:	4c 8b c7             	mov    %rdi,%r8
   1803d56f8:	48 8d 0d 31 cb 2f 00 	lea    0x2fcb31(%rip),%rcx        # 0x1806d2230
   1803d56ff:	e8 6c 4c ff ff       	call   0x1803ca370
   1803d5704:	eb 2a                	jmp    0x1803d5730
   1803d5706:	4c 8d 0d 36 5f 1b 00 	lea    0x1b5f36(%rip),%r9        # 0x18058b643
   1803d570d:	48 8d 0d ec 0a 4d 00 	lea    0x4d0aec(%rip),%rcx        # 0x1808a6200
   1803d5714:	ff 05 26 c1 d3 00    	incl   0xd3c126(%rip)        # 0x181111840
   1803d571a:	4c 8d 05 e7 1c 4d 00 	lea    0x4d1ce7(%rip),%r8        # 0x1808a7408
   1803d5721:	48 8d 15 08 cb 2f 00 	lea    0x2fcb08(%rip),%rdx        # 0x1806d2230
   1803d5728:	e8 33 ce ed ff       	call   0x1802b2560
   1803d572d:	49 8b de             	mov    %r14,%rbx
   1803d5730:	ff 05 0e c1 d3 00    	incl   0xd3c10e(%rip)        # 0x181111844
   1803d5736:	48 8d 3d d3 08 4d 00 	lea    0x4d08d3(%rip),%rdi        # 0x1808a6010
   1803d573d:	4c 8b c7             	mov    %rdi,%r8
   1803d5740:	48 89 1d 81 ca 58 00 	mov    %rbx,0x58ca81(%rip)        # 0x1809621c8
   1803d5747:	45 33 c9             	xor    %r9d,%r9d
   1803d574a:	48 8d 15 ef 1d 4d 00 	lea    0x4d1def(%rip),%rdx        # 0x1808a7540
   1803d5751:	48 8d 0d d8 ca 2f 00 	lea    0x2fcad8(%rip),%rcx        # 0x1806d2230
   1803d5758:	e8 13 4c ff ff       	call   0x1803ca370
   1803d575d:	48 8d 0d cc ca 2f 00 	lea    0x2fcacc(%rip),%rcx        # 0x1806d2230
   1803d5764:	ff 15 16 5a 19 00    	call   *0x195a16(%rip)        # 0x18056b180
   1803d576a:	48 8b d8             	mov    %rax,%rbx
   1803d576d:	48 85 c0             	test   %rax,%rax
   1803d5770:	0f 84 94 00 00 00    	je     0x1803d580a
   1803d5776:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d5779:	33 c0                	xor    %eax,%eax
   1803d577b:	0f 11 45 f8          	movups %xmm0,-0x8(%rbp)
   1803d577f:	48 89 45 08          	mov    %rax,0x8(%rbp)
   1803d5783:	ff 15 07 5b 19 00    	call   *0x195b07(%rip)        # 0x18056b290
   1803d5789:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d578f:	4c 8d 45 f8          	lea    -0x8(%rbp),%r8
   1803d5793:	48 8b c8             	mov    %rax,%rcx
   1803d5796:	48 8b d3             	mov    %rbx,%rdx
   1803d5799:	ff 15 f9 5a 19 00    	call   *0x195af9(%rip)        # 0x18056b298
   1803d579f:	85 c0                	test   %eax,%eax
   1803d57a1:	74 67                	je     0x1803d580a
   1803d57a3:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
   1803d57a7:	8b 4d 00             	mov    0x0(%rbp),%ecx
   1803d57aa:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d57af:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d57b4:	48 85 c0             	test   %rax,%rax
   1803d57b7:	74 51                	je     0x1803d580a
   1803d57b9:	48 85 c9             	test   %rcx,%rcx
   1803d57bc:	74 4c                	je     0x1803d580a
   1803d57be:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d57c3:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d57c8:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d57cd:	48 c7 44 24 38 4d 00 	movq   $0x4d,0x38(%rsp)
   1803d57d4:	00 00 
   1803d57d6:	e8 25 c6 df ff       	call   0x1801d1e00
   1803d57db:	48 8b d8             	mov    %rax,%rbx
   1803d57de:	48 85 c0             	test   %rax,%rax
   1803d57e1:	75 0c                	jne    0x1803d57ef
   1803d57e3:	4c 8b cf             	mov    %rdi,%r9
   1803d57e6:	48 8d 0d eb 09 4d 00 	lea    0x4d09eb(%rip),%rcx        # 0x1808a61d8
   1803d57ed:	eb 29                	jmp    0x1803d5818
   1803d57ef:	4c 8b c8             	mov    %rax,%r9
   1803d57f2:	48 8d 15 47 1d 4d 00 	lea    0x4d1d47(%rip),%rdx        # 0x1808a7540
   1803d57f9:	4c 8b c7             	mov    %rdi,%r8
   1803d57fc:	48 8d 0d 2d ca 2f 00 	lea    0x2fca2d(%rip),%rcx        # 0x1806d2230
   1803d5803:	e8 68 4b ff ff       	call   0x1803ca370
   1803d5808:	eb 2a                	jmp    0x1803d5834
   1803d580a:	4c 8d 0d 32 5e 1b 00 	lea    0x1b5e32(%rip),%r9        # 0x18058b643
   1803d5811:	48 8d 0d e8 09 4d 00 	lea    0x4d09e8(%rip),%rcx        # 0x1808a6200
   1803d5818:	ff 05 22 c0 d3 00    	incl   0xd3c022(%rip)        # 0x181111840
   1803d581e:	4c 8d 05 1b 1d 4d 00 	lea    0x4d1d1b(%rip),%r8        # 0x1808a7540
   1803d5825:	48 8d 15 04 ca 2f 00 	lea    0x2fca04(%rip),%rdx        # 0x1806d2230
   1803d582c:	e8 2f cd ed ff       	call   0x1802b2560
   1803d5831:	49 8b de             	mov    %r14,%rbx
   1803d5834:	ff 05 0a c0 d3 00    	incl   0xd3c00a(%rip)        # 0x181111844
   1803d583a:	48 8d 3d 6f 07 4d 00 	lea    0x4d076f(%rip),%rdi        # 0x1808a5fb0
   1803d5841:	4c 8b c7             	mov    %rdi,%r8
   1803d5844:	48 89 1d 85 c9 58 00 	mov    %rbx,0x58c985(%rip)        # 0x1809621d0
   1803d584b:	45 33 c9             	xor    %r9d,%r9d
   1803d584e:	48 8d 15 db 1c 4d 00 	lea    0x4d1cdb(%rip),%rdx        # 0x1808a7530
   1803d5855:	48 8d 0d d4 c9 2f 00 	lea    0x2fc9d4(%rip),%rcx        # 0x1806d2230
   1803d585c:	e8 0f 4b ff ff       	call   0x1803ca370
   1803d5861:	48 8d 0d c8 c9 2f 00 	lea    0x2fc9c8(%rip),%rcx        # 0x1806d2230
   1803d5868:	ff 15 12 59 19 00    	call   *0x195912(%rip)        # 0x18056b180
   1803d586e:	48 8b d8             	mov    %rax,%rbx
   1803d5871:	48 85 c0             	test   %rax,%rax
   1803d5874:	0f 84 94 00 00 00    	je     0x1803d590e
   1803d587a:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d587d:	33 c0                	xor    %eax,%eax
   1803d587f:	0f 11 45 10          	movups %xmm0,0x10(%rbp)
   1803d5883:	48 89 45 20          	mov    %rax,0x20(%rbp)
   1803d5887:	ff 15 03 5a 19 00    	call   *0x195a03(%rip)        # 0x18056b290
   1803d588d:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d5893:	4c 8d 45 10          	lea    0x10(%rbp),%r8
   1803d5897:	48 8b c8             	mov    %rax,%rcx
   1803d589a:	48 8b d3             	mov    %rbx,%rdx
   1803d589d:	ff 15 f5 59 19 00    	call   *0x1959f5(%rip)        # 0x18056b298
   1803d58a3:	85 c0                	test   %eax,%eax
   1803d58a5:	74 67                	je     0x1803d590e
   1803d58a7:	48 8b 45 10          	mov    0x10(%rbp),%rax
   1803d58ab:	8b 4d 18             	mov    0x18(%rbp),%ecx
   1803d58ae:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d58b3:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d58b8:	48 85 c0             	test   %rax,%rax
   1803d58bb:	74 51                	je     0x1803d590e
   1803d58bd:	48 85 c9             	test   %rcx,%rcx
   1803d58c0:	74 4c                	je     0x1803d590e
   1803d58c2:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d58c7:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d58cc:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d58d1:	48 c7 44 24 38 58 00 	movq   $0x58,0x38(%rsp)
   1803d58d8:	00 00 
   1803d58da:	e8 21 c5 df ff       	call   0x1801d1e00
   1803d58df:	48 8b d8             	mov    %rax,%rbx
   1803d58e2:	48 85 c0             	test   %rax,%rax
   1803d58e5:	75 0c                	jne    0x1803d58f3
   1803d58e7:	4c 8b cf             	mov    %rdi,%r9
   1803d58ea:	48 8d 0d e7 08 4d 00 	lea    0x4d08e7(%rip),%rcx        # 0x1808a61d8
   1803d58f1:	eb 29                	jmp    0x1803d591c
   1803d58f3:	4c 8b c8             	mov    %rax,%r9
   1803d58f6:	48 8d 15 33 1c 4d 00 	lea    0x4d1c33(%rip),%rdx        # 0x1808a7530
   1803d58fd:	4c 8b c7             	mov    %rdi,%r8
   1803d5900:	48 8d 0d 29 c9 2f 00 	lea    0x2fc929(%rip),%rcx        # 0x1806d2230
   1803d5907:	e8 64 4a ff ff       	call   0x1803ca370
   1803d590c:	eb 2a                	jmp    0x1803d5938
   1803d590e:	4c 8d 0d 2e 5d 1b 00 	lea    0x1b5d2e(%rip),%r9        # 0x18058b643
   1803d5915:	48 8d 0d e4 08 4d 00 	lea    0x4d08e4(%rip),%rcx        # 0x1808a6200
   1803d591c:	ff 05 1e bf d3 00    	incl   0xd3bf1e(%rip)        # 0x181111840
   1803d5922:	4c 8d 05 07 1c 4d 00 	lea    0x4d1c07(%rip),%r8        # 0x1808a7530
   1803d5929:	48 8d 15 00 c9 2f 00 	lea    0x2fc900(%rip),%rdx        # 0x1806d2230
   1803d5930:	e8 2b cc ed ff       	call   0x1802b2560
   1803d5935:	49 8b de             	mov    %r14,%rbx
   1803d5938:	ff 05 06 bf d3 00    	incl   0xd3bf06(%rip)        # 0x181111844
   1803d593e:	48 8d 3d 0b 06 4d 00 	lea    0x4d060b(%rip),%rdi        # 0x1808a5f50
   1803d5945:	4c 8b c7             	mov    %rdi,%r8
   1803d5948:	48 89 1d 91 c8 58 00 	mov    %rbx,0x58c891(%rip)        # 0x1809621e0
   1803d594f:	45 33 c9             	xor    %r9d,%r9d
   1803d5952:	48 8d 15 c7 1b 4d 00 	lea    0x4d1bc7(%rip),%rdx        # 0x1808a7520
   1803d5959:	48 8d 0d d0 c8 2f 00 	lea    0x2fc8d0(%rip),%rcx        # 0x1806d2230
   1803d5960:	e8 0b 4a ff ff       	call   0x1803ca370
   1803d5965:	48 8d 0d c4 c8 2f 00 	lea    0x2fc8c4(%rip),%rcx        # 0x1806d2230
   1803d596c:	ff 15 0e 58 19 00    	call   *0x19580e(%rip)        # 0x18056b180
   1803d5972:	48 8b d8             	mov    %rax,%rbx
   1803d5975:	48 85 c0             	test   %rax,%rax
   1803d5978:	0f 84 94 00 00 00    	je     0x1803d5a12
   1803d597e:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d5981:	33 c0                	xor    %eax,%eax
   1803d5983:	0f 11 45 28          	movups %xmm0,0x28(%rbp)
   1803d5987:	48 89 45 38          	mov    %rax,0x38(%rbp)
   1803d598b:	ff 15 ff 58 19 00    	call   *0x1958ff(%rip)        # 0x18056b290
   1803d5991:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d5997:	4c 8d 45 28          	lea    0x28(%rbp),%r8
   1803d599b:	48 8b c8             	mov    %rax,%rcx
   1803d599e:	48 8b d3             	mov    %rbx,%rdx
   1803d59a1:	ff 15 f1 58 19 00    	call   *0x1958f1(%rip)        # 0x18056b298
   1803d59a7:	85 c0                	test   %eax,%eax
   1803d59a9:	74 67                	je     0x1803d5a12
   1803d59ab:	48 8b 45 28          	mov    0x28(%rbp),%rax
   1803d59af:	8b 4d 30             	mov    0x30(%rbp),%ecx
   1803d59b2:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d59b7:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d59bc:	48 85 c0             	test   %rax,%rax
   1803d59bf:	74 51                	je     0x1803d5a12
   1803d59c1:	48 85 c9             	test   %rcx,%rcx
   1803d59c4:	74 4c                	je     0x1803d5a12
   1803d59c6:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d59cb:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d59d0:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d59d5:	48 c7 44 24 38 5f 00 	movq   $0x5f,0x38(%rsp)
   1803d59dc:	00 00 
   1803d59de:	e8 1d c4 df ff       	call   0x1801d1e00
   1803d59e3:	48 8b d8             	mov    %rax,%rbx
   1803d59e6:	48 85 c0             	test   %rax,%rax
   1803d59e9:	75 0c                	jne    0x1803d59f7
   1803d59eb:	4c 8b cf             	mov    %rdi,%r9
   1803d59ee:	48 8d 0d e3 07 4d 00 	lea    0x4d07e3(%rip),%rcx        # 0x1808a61d8
   1803d59f5:	eb 29                	jmp    0x1803d5a20
   1803d59f7:	4c 8b c8             	mov    %rax,%r9
   1803d59fa:	48 8d 15 1f 1b 4d 00 	lea    0x4d1b1f(%rip),%rdx        # 0x1808a7520
   1803d5a01:	4c 8b c7             	mov    %rdi,%r8
   1803d5a04:	48 8d 0d 25 c8 2f 00 	lea    0x2fc825(%rip),%rcx        # 0x1806d2230
   1803d5a0b:	e8 60 49 ff ff       	call   0x1803ca370
   1803d5a10:	eb 2a                	jmp    0x1803d5a3c
   1803d5a12:	4c 8d 0d 2a 5c 1b 00 	lea    0x1b5c2a(%rip),%r9        # 0x18058b643
   1803d5a19:	48 8d 0d e0 07 4d 00 	lea    0x4d07e0(%rip),%rcx        # 0x1808a6200
   1803d5a20:	ff 05 1a be d3 00    	incl   0xd3be1a(%rip)        # 0x181111840
   1803d5a26:	4c 8d 05 f3 1a 4d 00 	lea    0x4d1af3(%rip),%r8        # 0x1808a7520
   1803d5a2d:	48 8d 15 fc c7 2f 00 	lea    0x2fc7fc(%rip),%rdx        # 0x1806d2230
   1803d5a34:	e8 27 cb ed ff       	call   0x1802b2560
   1803d5a39:	49 8b de             	mov    %r14,%rbx
   1803d5a3c:	ff 05 02 be d3 00    	incl   0xd3be02(%rip)        # 0x181111844
   1803d5a42:	48 8d 3d a7 04 4d 00 	lea    0x4d04a7(%rip),%rdi        # 0x1808a5ef0
   1803d5a49:	4c 8b c7             	mov    %rdi,%r8
   1803d5a4c:	48 89 1d 95 c7 58 00 	mov    %rbx,0x58c795(%rip)        # 0x1809621e8
   1803d5a53:	45 33 c9             	xor    %r9d,%r9d
   1803d5a56:	48 8d 15 b3 1a 4d 00 	lea    0x4d1ab3(%rip),%rdx        # 0x1808a7510
   1803d5a5d:	48 8d 0d cc c7 2f 00 	lea    0x2fc7cc(%rip),%rcx        # 0x1806d2230
   1803d5a64:	e8 07 49 ff ff       	call   0x1803ca370
   1803d5a69:	48 8d 0d c0 c7 2f 00 	lea    0x2fc7c0(%rip),%rcx        # 0x1806d2230
   1803d5a70:	ff 15 0a 57 19 00    	call   *0x19570a(%rip)        # 0x18056b180
   1803d5a76:	48 8b d8             	mov    %rax,%rbx
   1803d5a79:	48 85 c0             	test   %rax,%rax
   1803d5a7c:	0f 84 94 00 00 00    	je     0x1803d5b16
   1803d5a82:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d5a85:	33 c0                	xor    %eax,%eax
   1803d5a87:	0f 11 45 40          	movups %xmm0,0x40(%rbp)
   1803d5a8b:	48 89 45 50          	mov    %rax,0x50(%rbp)
   1803d5a8f:	ff 15 fb 57 19 00    	call   *0x1957fb(%rip)        # 0x18056b290
   1803d5a95:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d5a9b:	4c 8d 45 40          	lea    0x40(%rbp),%r8
   1803d5a9f:	48 8b c8             	mov    %rax,%rcx
   1803d5aa2:	48 8b d3             	mov    %rbx,%rdx
   1803d5aa5:	ff 15 ed 57 19 00    	call   *0x1957ed(%rip)        # 0x18056b298
   1803d5aab:	85 c0                	test   %eax,%eax
   1803d5aad:	74 67                	je     0x1803d5b16
   1803d5aaf:	48 8b 45 40          	mov    0x40(%rbp),%rax
   1803d5ab3:	8b 4d 48             	mov    0x48(%rbp),%ecx
   1803d5ab6:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d5abb:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d5ac0:	48 85 c0             	test   %rax,%rax
   1803d5ac3:	74 51                	je     0x1803d5b16
   1803d5ac5:	48 85 c9             	test   %rcx,%rcx
   1803d5ac8:	74 4c                	je     0x1803d5b16
   1803d5aca:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d5acf:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d5ad4:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d5ad9:	48 c7 44 24 38 52 00 	movq   $0x52,0x38(%rsp)
   1803d5ae0:	00 00 
   1803d5ae2:	e8 19 c3 df ff       	call   0x1801d1e00
   1803d5ae7:	48 8b d8             	mov    %rax,%rbx
   1803d5aea:	48 85 c0             	test   %rax,%rax
   1803d5aed:	75 0c                	jne    0x1803d5afb
   1803d5aef:	4c 8b cf             	mov    %rdi,%r9
   1803d5af2:	48 8d 0d df 06 4d 00 	lea    0x4d06df(%rip),%rcx        # 0x1808a61d8
   1803d5af9:	eb 29                	jmp    0x1803d5b24
   1803d5afb:	4c 8b c8             	mov    %rax,%r9
   1803d5afe:	48 8d 15 0b 1a 4d 00 	lea    0x4d1a0b(%rip),%rdx        # 0x1808a7510
   1803d5b05:	4c 8b c7             	mov    %rdi,%r8
   1803d5b08:	48 8d 0d 21 c7 2f 00 	lea    0x2fc721(%rip),%rcx        # 0x1806d2230
   1803d5b0f:	e8 5c 48 ff ff       	call   0x1803ca370
   1803d5b14:	eb 2a                	jmp    0x1803d5b40
   1803d5b16:	4c 8d 0d 26 5b 1b 00 	lea    0x1b5b26(%rip),%r9        # 0x18058b643
   1803d5b1d:	48 8d 0d dc 06 4d 00 	lea    0x4d06dc(%rip),%rcx        # 0x1808a6200
   1803d5b24:	ff 05 16 bd d3 00    	incl   0xd3bd16(%rip)        # 0x181111840
   1803d5b2a:	4c 8d 05 df 19 4d 00 	lea    0x4d19df(%rip),%r8        # 0x1808a7510
   1803d5b31:	48 8d 15 f8 c6 2f 00 	lea    0x2fc6f8(%rip),%rdx        # 0x1806d2230
   1803d5b38:	e8 23 ca ed ff       	call   0x1802b2560
   1803d5b3d:	49 8b de             	mov    %r14,%rbx
   1803d5b40:	ff 05 fe bc d3 00    	incl   0xd3bcfe(%rip)        # 0x181111844
   1803d5b46:	48 8d 3d 33 03 4d 00 	lea    0x4d0333(%rip),%rdi        # 0x1808a5e80
   1803d5b4d:	4c 8b c7             	mov    %rdi,%r8
   1803d5b50:	48 89 1d 99 c6 58 00 	mov    %rbx,0x58c699(%rip)        # 0x1809621f0
   1803d5b57:	45 33 c9             	xor    %r9d,%r9d
   1803d5b5a:	48 8d 15 8f 19 4d 00 	lea    0x4d198f(%rip),%rdx        # 0x1808a74f0
   1803d5b61:	48 8d 0d c8 c6 2f 00 	lea    0x2fc6c8(%rip),%rcx        # 0x1806d2230
   1803d5b68:	e8 03 48 ff ff       	call   0x1803ca370
   1803d5b6d:	48 8d 0d bc c6 2f 00 	lea    0x2fc6bc(%rip),%rcx        # 0x1806d2230
   1803d5b74:	ff 15 06 56 19 00    	call   *0x195606(%rip)        # 0x18056b180
   1803d5b7a:	48 8b d8             	mov    %rax,%rbx
   1803d5b7d:	48 85 c0             	test   %rax,%rax
   1803d5b80:	0f 84 94 00 00 00    	je     0x1803d5c1a
   1803d5b86:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d5b89:	33 c0                	xor    %eax,%eax
   1803d5b8b:	0f 11 45 58          	movups %xmm0,0x58(%rbp)
   1803d5b8f:	48 89 45 68          	mov    %rax,0x68(%rbp)
   1803d5b93:	ff 15 f7 56 19 00    	call   *0x1956f7(%rip)        # 0x18056b290
   1803d5b99:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d5b9f:	4c 8d 45 58          	lea    0x58(%rbp),%r8
   1803d5ba3:	48 8b c8             	mov    %rax,%rcx
   1803d5ba6:	48 8b d3             	mov    %rbx,%rdx
   1803d5ba9:	ff 15 e9 56 19 00    	call   *0x1956e9(%rip)        # 0x18056b298
   1803d5baf:	85 c0                	test   %eax,%eax
   1803d5bb1:	74 67                	je     0x1803d5c1a
   1803d5bb3:	48 8b 45 58          	mov    0x58(%rbp),%rax
   1803d5bb7:	8b 4d 60             	mov    0x60(%rbp),%ecx
   1803d5bba:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d5bbf:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d5bc4:	48 85 c0             	test   %rax,%rax
   1803d5bc7:	74 51                	je     0x1803d5c1a
   1803d5bc9:	48 85 c9             	test   %rcx,%rcx
   1803d5bcc:	74 4c                	je     0x1803d5c1a
   1803d5bce:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d5bd3:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d5bd8:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d5bdd:	48 c7 44 24 38 65 00 	movq   $0x65,0x38(%rsp)
   1803d5be4:	00 00 
   1803d5be6:	e8 15 c2 df ff       	call   0x1801d1e00
   1803d5beb:	48 8b d8             	mov    %rax,%rbx
   1803d5bee:	48 85 c0             	test   %rax,%rax
   1803d5bf1:	75 0c                	jne    0x1803d5bff
   1803d5bf3:	4c 8b cf             	mov    %rdi,%r9
   1803d5bf6:	48 8d 0d db 05 4d 00 	lea    0x4d05db(%rip),%rcx        # 0x1808a61d8
   1803d5bfd:	eb 29                	jmp    0x1803d5c28
   1803d5bff:	4c 8b c8             	mov    %rax,%r9
   1803d5c02:	48 8d 15 e7 18 4d 00 	lea    0x4d18e7(%rip),%rdx        # 0x1808a74f0
   1803d5c09:	4c 8b c7             	mov    %rdi,%r8
   1803d5c0c:	48 8d 0d 1d c6 2f 00 	lea    0x2fc61d(%rip),%rcx        # 0x1806d2230
   1803d5c13:	e8 58 47 ff ff       	call   0x1803ca370
   1803d5c18:	eb 2a                	jmp    0x1803d5c44
   1803d5c1a:	4c 8d 0d 22 5a 1b 00 	lea    0x1b5a22(%rip),%r9        # 0x18058b643
   1803d5c21:	48 8d 0d d8 05 4d 00 	lea    0x4d05d8(%rip),%rcx        # 0x1808a6200
   1803d5c28:	ff 05 12 bc d3 00    	incl   0xd3bc12(%rip)        # 0x181111840
   1803d5c2e:	4c 8d 05 bb 18 4d 00 	lea    0x4d18bb(%rip),%r8        # 0x1808a74f0
   1803d5c35:	48 8d 15 f4 c5 2f 00 	lea    0x2fc5f4(%rip),%rdx        # 0x1806d2230
   1803d5c3c:	e8 1f c9 ed ff       	call   0x1802b2560
   1803d5c41:	49 8b de             	mov    %r14,%rbx
   1803d5c44:	ff 05 fa bb d3 00    	incl   0xd3bbfa(%rip)        # 0x181111844
   1803d5c4a:	48 8d 3d 4f 01 4d 00 	lea    0x4d014f(%rip),%rdi        # 0x1808a5da0
   1803d5c51:	4c 8b c7             	mov    %rdi,%r8
   1803d5c54:	48 89 1d 9d c5 58 00 	mov    %rbx,0x58c59d(%rip)        # 0x1809621f8
   1803d5c5b:	45 33 c9             	xor    %r9d,%r9d
   1803d5c5e:	48 8d 15 7b 18 4d 00 	lea    0x4d187b(%rip),%rdx        # 0x1808a74e0
   1803d5c65:	48 8d 0d c4 c5 2f 00 	lea    0x2fc5c4(%rip),%rcx        # 0x1806d2230
   1803d5c6c:	e8 ff 46 ff ff       	call   0x1803ca370
   1803d5c71:	48 8d 0d b8 c5 2f 00 	lea    0x2fc5b8(%rip),%rcx        # 0x1806d2230
   1803d5c78:	ff 15 02 55 19 00    	call   *0x195502(%rip)        # 0x18056b180
   1803d5c7e:	4c 8b b4 24 18 0c 00 	mov    0xc18(%rsp),%r14
   1803d5c85:	00 
   1803d5c86:	48 8b d8             	mov    %rax,%rbx
   1803d5c89:	48 85 c0             	test   %rax,%rax
   1803d5c8c:	0f 84 ce 00 00 00    	je     0x1803d5d60
   1803d5c92:	0f 57 c0             	xorps  %xmm0,%xmm0
   1803d5c95:	33 c0                	xor    %eax,%eax
   1803d5c97:	0f 11 45 70          	movups %xmm0,0x70(%rbp)
   1803d5c9b:	48 89 85 80 00 00 00 	mov    %rax,0x80(%rbp)
   1803d5ca2:	ff 15 e8 55 19 00    	call   *0x1955e8(%rip)        # 0x18056b290
   1803d5ca8:	41 b9 18 00 00 00    	mov    $0x18,%r9d
   1803d5cae:	4c 8d 45 70          	lea    0x70(%rbp),%r8
   1803d5cb2:	48 8b c8             	mov    %rax,%rcx
   1803d5cb5:	48 8b d3             	mov    %rbx,%rdx
   1803d5cb8:	ff 15 da 55 19 00    	call   *0x1955da(%rip)        # 0x18056b298
   1803d5cbe:	85 c0                	test   %eax,%eax
   1803d5cc0:	0f 84 9a 00 00 00    	je     0x1803d5d60
   1803d5cc6:	48 8b 45 70          	mov    0x70(%rbp),%rax
   1803d5cca:	8b 4d 78             	mov    0x78(%rbp),%ecx
   1803d5ccd:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   1803d5cd2:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   1803d5cd7:	48 85 c0             	test   %rax,%rax
   1803d5cda:	0f 84 80 00 00 00    	je     0x1803d5d60
   1803d5ce0:	48 85 c9             	test   %rcx,%rcx
   1803d5ce3:	74 7b                	je     0x1803d5d60
   1803d5ce5:	48 8d 54 24 30       	lea    0x30(%rsp),%rdx
   1803d5cea:	48 89 7c 24 30       	mov    %rdi,0x30(%rsp)
   1803d5cef:	48 8d 4c 24 40       	lea    0x40(%rsp),%rcx
   1803d5cf4:	48 c7 44 24 38 d1 00 	movq   $0xd1,0x38(%rsp)
   1803d5cfb:	00 00 
   1803d5cfd:	e8 fe c0 df ff       	call   0x1801d1e00
   1803d5d02:	48 8b d8             	mov    %rax,%rbx
   1803d5d05:	48 85 c0             	test   %rax,%rax
   1803d5d08:	75 0c                	jne    0x1803d5d16
   1803d5d0a:	4c 8b cf             	mov    %rdi,%r9
   1803d5d0d:	48 8d 0d c4 04 4d 00 	lea    0x4d04c4(%rip),%rcx        # 0x1808a61d8
   1803d5d14:	eb 58                	jmp    0x1803d5d6e
   1803d5d16:	4c 8b cb             	mov    %rbx,%r9
   1803d5d19:	48 8d 15 c0 17 4d 00 	lea    0x4d17c0(%rip),%rdx        # 0x1808a74e0
   1803d5d20:	4c 8b c7             	mov    %rdi,%r8
   1803d5d23:	48 8d 0d 06 c5 2f 00 	lea    0x2fc506(%rip),%rcx        # 0x1806d2230
   1803d5d2a:	e8 41 46 ff ff       	call   0x1803ca370
   1803d5d2f:	48 8d 4b 08          	lea    0x8(%rbx),%rcx
   1803d5d33:	e8 c8 b4 c3 ff       	call   0x180011200
   1803d5d38:	48 8d 4b 2b          	lea    0x2b(%rbx),%rcx
   1803d5d3c:	89 05 ce c4 58 00    	mov    %eax,0x58c4ce(%rip)        # 0x180962210
   1803d5d42:	e8 89 c3 df ff       	call   0x1801d20d0
   1803d5d47:	48 8d 4b 49          	lea    0x49(%rbx),%rcx
   1803d5d4b:	48 89 05 ae c4 58 00 	mov    %rax,0x58c4ae(%rip)        # 0x180962200
   1803d5d52:	e8 79 c3 df ff       	call   0x1801d20d0
   1803d5d57:	48 89 05 aa c4 58 00 	mov    %rax,0x58c4aa(%rip)        # 0x180962208
   1803d5d5e:	eb 27                	jmp    0x1803d5d87
   1803d5d60:	4c 8d 0d dc 58 1b 00 	lea    0x1b58dc(%rip),%r9        # 0x18058b643
   1803d5d67:	48 8d 0d 92 04 4d 00 	lea    0x4d0492(%rip),%rcx        # 0x1808a6200
   1803d5d6e:	ff 05 cc ba d3 00    	incl   0xd3bacc(%rip)        # 0x181111840
   1803d5d74:	4c 8d 05 65 17 4d 00 	lea    0x4d1765(%rip),%r8        # 0x1808a74e0
   1803d5d7b:	48 8d 15 ae c4 2f 00 	lea    0x2fc4ae(%rip),%rdx        # 0x1806d2230
   1803d5d82:	e8 d9 c7 ed ff       	call   0x1802b2560
   1803d5d87:	44 8b 0d b2 ba d3 00 	mov    0xd3bab2(%rip),%r9d        # 0x181111840
   1803d5d8e:	48 8b bc 24 40 0c 00 	mov    0xc40(%rsp),%rdi
   1803d5d95:	00 
   1803d5d96:	48 8b 9c 24 30 0c 00 	mov    0xc30(%rsp),%rbx
   1803d5d9d:	00 
   1803d5d9e:	45 85 c9             	test   %r9d,%r9d
   1803d5da1:	74 1b                	je     0x1803d5dbe
   1803d5da3:	44 8b 05 9a ba d3 00 	mov    0xd3ba9a(%rip),%r8d        # 0x181111844
   1803d5daa:	48 8d 0d 07 17 4d 00 	lea    0x4d1707(%rip),%rcx        # 0x1808a74b8
   1803d5db1:	41 8b d0             	mov    %r8d,%edx
   1803d5db4:	41 2b d1             	sub    %r9d,%edx
   1803d5db7:	e8 a4 c7 ed ff       	call   0x1802b2560
   1803d5dbc:	eb 12                	jmp    0x1803d5dd0
   1803d5dbe:	8b 15 80 ba d3 00    	mov    0xd3ba80(%rip),%edx        # 0x181111844
   1803d5dc4:	48 8d 0d cd 16 4d 00 	lea    0x4d16cd(%rip),%rcx        # 0x1808a7498
   1803d5dcb:	e8 90 c7 ed ff       	call   0x1802b2560
   1803d5dd0:	48 83 3d f8 bb 58 00 	cmpq   $0x0,0x58bbf8(%rip)        # 0x1809619d0
   1803d5dd7:	00 
   1803d5dd8:	74 1c                	je     0x1803d5df6
   1803d5dda:	48 83 3d fe bb 58 00 	cmpq   $0x0,0x58bbfe(%rip)        # 0x1809619e0
   1803d5de1:	00 
   1803d5de2:	74 12                	je     0x1803d5df6
   1803d5de4:	c6 05 31 c4 58 00 01 	movb   $0x1,0x58c431(%rip)        # 0x18096221c
   1803d5deb:	b0 01                	mov    $0x1,%al
   1803d5ded:	48 81 c4 20 0c 00 00 	add    $0xc20,%rsp
   1803d5df4:	5d                   	pop    %rbp
   1803d5df5:	c3                   	ret
   1803d5df6:	c6 05 1f c4 58 00 00 	movb   $0x0,0x58c41f(%rip)        # 0x18096221c
   1803d5dfd:	32 c0                	xor    %al,%al
   1803d5dff:	48 81 c4 20 0c 00 00 	add    $0xc20,%rsp
   1803d5e06:	5d                   	pop    %rbp
   1803d5e07:	c3                   	ret
   1803d5e08:	cc                   	int3
   1803d5e09:	cc                   	int3
   1803d5e0a:	cc                   	int3
   1803d5e0b:	cc                   	int3
   1803d5e0c:	cc                   	int3
   1803d5e0d:	cc                   	int3
   1803d5e0e:	cc                   	int3
   1803d5e0f:	cc                   	int3

# Range 0x181261130 to 0x1812614f0 (exclusive)

/home/mata/ac_reconphase/newnl.dll:     file format pei-x86-64


Disassembly of section .model:

0000000181261130 <.model+0xa3130>:
   181261130:	48 8b c1             	mov    %rcx,%rax
   181261133:	4c 8b c9             	mov    %rcx,%r9
   181261136:	4c 8d 15 13 22 ff ff 	lea    -0xdded(%rip),%r10        # 0x181253350
   18126113d:	0f b6 d2             	movzbl %dl,%edx
   181261140:	49 bb 01 01 01 01 01 	movabs $0x101010101010101,%r11
   181261147:	01 01 01 
   18126114a:	4c 0f af da          	imul   %rdx,%r11
   18126114e:	66 49 0f 6e c3       	movq   %r11,%xmm0
   181261153:	49 83 f8 0f          	cmp    $0xf,%r8
   181261157:	0f 87 83 00 00 00    	ja     0x1812611e0
   18126115d:	0f 1f 00             	nopl   (%rax)
   181261160:	49 03 c8             	add    %r8,%rcx
   181261163:	47 8b 8c 82 20 6b 01 	mov    0x16b20(%r10,%r8,4),%r9d
   18126116a:	00 
   18126116b:	4d 03 ca             	add    %r10,%r9
   18126116e:	41 ff e1             	jmp    *%r9
   181261171:	4c 89 59 f1          	mov    %r11,-0xf(%rcx)
   181261175:	44 89 59 f9          	mov    %r11d,-0x7(%rcx)
   181261179:	66 44 89 59 fd       	mov    %r11w,-0x3(%rcx)
   18126117e:	44 88 59 ff          	mov    %r11b,-0x1(%rcx)
   181261182:	c3                   	ret
   181261183:	4c 89 59 f2          	mov    %r11,-0xe(%rcx)
   181261187:	44 89 59 fa          	mov    %r11d,-0x6(%rcx)
   18126118b:	66 44 89 59 fe       	mov    %r11w,-0x2(%rcx)
   181261190:	c3                   	ret
   181261191:	66 66 66 66 66 66 66 	data16 data16 data16 data16 data16 data16 nopw 0x0(%rax,%rax,1)
   181261198:	0f 1f 84 00 00 00 00 
   18126119f:	00 
   1812611a0:	4c 89 59 f3          	mov    %r11,-0xd(%rcx)
   1812611a4:	44 89 59 fb          	mov    %r11d,-0x5(%rcx)
   1812611a8:	44 88 59 ff          	mov    %r11b,-0x1(%rcx)
   1812611ac:	c3                   	ret
   1812611ad:	0f 1f 00             	nopl   (%rax)
   1812611b0:	4c 89 59 f4          	mov    %r11,-0xc(%rcx)
   1812611b4:	44 89 59 fc          	mov    %r11d,-0x4(%rcx)
   1812611b8:	c3                   	ret
   1812611b9:	4c 89 59 f5          	mov    %r11,-0xb(%rcx)
   1812611bd:	66 44 89 59 fd       	mov    %r11w,-0x3(%rcx)
   1812611c2:	44 88 59 ff          	mov    %r11b,-0x1(%rcx)
   1812611c6:	c3                   	ret
   1812611c7:	4c 89 59 f7          	mov    %r11,-0x9(%rcx)
   1812611cb:	44 88 59 ff          	mov    %r11b,-0x1(%rcx)
   1812611cf:	c3                   	ret
   1812611d0:	4c 89 59 f6          	mov    %r11,-0xa(%rcx)
   1812611d4:	66 44 89 59 fe       	mov    %r11w,-0x2(%rcx)
   1812611d9:	c3                   	ret
   1812611da:	4c 89 59 f8          	mov    %r11,-0x8(%rcx)
   1812611de:	c3                   	ret
   1812611df:	90                   	nop
   1812611e0:	66 0f 6c c0          	punpcklqdq %xmm0,%xmm0
   1812611e4:	49 83 f8 20          	cmp    $0x20,%r8
   1812611e8:	77 0c                	ja     0x1812611f6
   1812611ea:	f3 0f 7f 01          	movdqu %xmm0,(%rcx)
   1812611ee:	f3 42 0f 7f 44 01 f0 	movdqu %xmm0,-0x10(%rcx,%r8,1)
   1812611f5:	c3                   	ret
   1812611f6:	83 3d db b1 00 00 03 	cmpl   $0x3,0xb1db(%rip)        # 0x18126c3d8
   1812611fd:	0f 82 dd 01 00 00    	jb     0x1812613e0
   181261203:	4c 3b 05 d6 b1 00 00 	cmp    0xb1d6(%rip),%r8        # 0x18126c3e0
   18126120a:	76 16                	jbe    0x181261222
   18126120c:	4c 3b 05 d5 b1 00 00 	cmp    0xb1d5(%rip),%r8        # 0x18126c3e8
   181261213:	77 0d                	ja     0x181261222
   181261215:	f6 05 40 dd 0c 00 02 	testb  $0x2,0xcdd40(%rip)        # 0x18132ef5c
   18126121c:	0f 85 fe fe ff ff    	jne    0x181261120
   181261222:	c4 e3 7d 18 c0 01    	vinsertf128 $0x1,%xmm0,%ymm0,%ymm0
   181261228:	4c 8b c9             	mov    %rcx,%r9
   18126122b:	49 83 e1 1f          	and    $0x1f,%r9
   18126122f:	49 83 e9 20          	sub    $0x20,%r9
   181261233:	49 2b c9             	sub    %r9,%rcx
   181261236:	49 2b d1             	sub    %r9,%rdx
   181261239:	4d 03 c1             	add    %r9,%r8
   18126123c:	49 81 f8 00 01 00 00 	cmp    $0x100,%r8
   181261243:	76 65                	jbe    0x1812612aa
   181261245:	4c 3b 05 9c b1 00 00 	cmp    0xb19c(%rip),%r8        # 0x18126c3e8
   18126124c:	0f 87 ce 00 00 00    	ja     0x181261320
   181261252:	66 66 66 66 66 66 0f 	data16 data16 data16 data16 data16 nopw 0x0(%rax,%rax,1)
   181261259:	1f 84 00 00 00 00 00 
   181261260:	c5 fd 7f 01          	vmovdqa %ymm0,(%rcx)
   181261264:	c5 fd 7f 41 20       	vmovdqa %ymm0,0x20(%rcx)
   181261269:	c5 fd 7f 41 40       	vmovdqa %ymm0,0x40(%rcx)
   18126126e:	c5 fd 7f 41 60       	vmovdqa %ymm0,0x60(%rcx)
   181261273:	c5 fd 7f 81 80 00 00 	vmovdqa %ymm0,0x80(%rcx)
   18126127a:	00 
   18126127b:	c5 fd 7f 81 a0 00 00 	vmovdqa %ymm0,0xa0(%rcx)
   181261282:	00 
   181261283:	c5 fd 7f 81 c0 00 00 	vmovdqa %ymm0,0xc0(%rcx)
   18126128a:	00 
   18126128b:	c5 fd 7f 81 e0 00 00 	vmovdqa %ymm0,0xe0(%rcx)
   181261292:	00 
   181261293:	48 81 c1 00 01 00 00 	add    $0x100,%rcx
   18126129a:	49 81 e8 00 01 00 00 	sub    $0x100,%r8
   1812612a1:	49 81 f8 00 01 00 00 	cmp    $0x100,%r8
   1812612a8:	73 b6                	jae    0x181261260
   1812612aa:	4d 8d 48 1f          	lea    0x1f(%r8),%r9
   1812612ae:	49 83 e1 e0          	and    $0xffffffffffffffe0,%r9
   1812612b2:	4d 8b d9             	mov    %r9,%r11
   1812612b5:	49 c1 eb 05          	shr    $0x5,%r11
   1812612b9:	47 8b 9c 9a 60 6b 01 	mov    0x16b60(%r10,%r11,4),%r11d
   1812612c0:	00 
   1812612c1:	4d 03 da             	add    %r10,%r11
   1812612c4:	41 ff e3             	jmp    *%r11
   1812612c7:	c4 a1 7e 7f 84 09 00 	vmovdqu %ymm0,-0x100(%rcx,%r9,1)
   1812612ce:	ff ff ff 
   1812612d1:	c4 a1 7e 7f 84 09 20 	vmovdqu %ymm0,-0xe0(%rcx,%r9,1)
   1812612d8:	ff ff ff 
   1812612db:	c4 a1 7e 7f 84 09 40 	vmovdqu %ymm0,-0xc0(%rcx,%r9,1)
   1812612e2:	ff ff ff 
   1812612e5:	c4 a1 7e 7f 84 09 60 	vmovdqu %ymm0,-0xa0(%rcx,%r9,1)
   1812612ec:	ff ff ff 
   1812612ef:	c4 a1 7e 7f 44 09 80 	vmovdqu %ymm0,-0x80(%rcx,%r9,1)
   1812612f6:	c4 a1 7e 7f 44 09 a0 	vmovdqu %ymm0,-0x60(%rcx,%r9,1)
   1812612fd:	c4 a1 7e 7f 44 09 c0 	vmovdqu %ymm0,-0x40(%rcx,%r9,1)
   181261304:	c4 a1 7e 7f 44 01 e0 	vmovdqu %ymm0,-0x20(%rcx,%r8,1)
   18126130b:	c5 fe 7f 00          	vmovdqu %ymm0,(%rax)
   18126130f:	c5 f8 77             	vzeroupper
   181261312:	c3                   	ret
   181261313:	66 66 66 66 66 0f 1f 	data16 data16 data16 data16 nopw 0x0(%rax,%rax,1)
   18126131a:	84 00 00 00 00 00 
   181261320:	c5 fd e7 01          	vmovntdq %ymm0,(%rcx)
   181261324:	c5 fd e7 41 20       	vmovntdq %ymm0,0x20(%rcx)
   181261329:	c5 fd e7 41 40       	vmovntdq %ymm0,0x40(%rcx)
   18126132e:	c5 fd e7 41 60       	vmovntdq %ymm0,0x60(%rcx)
   181261333:	c5 fd e7 81 80 00 00 	vmovntdq %ymm0,0x80(%rcx)
   18126133a:	00 
   18126133b:	c5 fd e7 81 a0 00 00 	vmovntdq %ymm0,0xa0(%rcx)
   181261342:	00 
   181261343:	c5 fd e7 81 c0 00 00 	vmovntdq %ymm0,0xc0(%rcx)
   18126134a:	00 
   18126134b:	c5 fd e7 81 e0 00 00 	vmovntdq %ymm0,0xe0(%rcx)
   181261352:	00 
   181261353:	48 81 c1 00 01 00 00 	add    $0x100,%rcx
   18126135a:	49 81 e8 00 01 00 00 	sub    $0x100,%r8
   181261361:	49 81 f8 00 01 00 00 	cmp    $0x100,%r8
   181261368:	73 b6                	jae    0x181261320
   18126136a:	4d 8d 48 1f          	lea    0x1f(%r8),%r9
   18126136e:	49 83 e1 e0          	and    $0xffffffffffffffe0,%r9
   181261372:	4d 8b d9             	mov    %r9,%r11
   181261375:	49 c1 eb 05          	shr    $0x5,%r11
   181261379:	47 8b 9c 9a 84 6b 01 	mov    0x16b84(%r10,%r11,4),%r11d
   181261380:	00 
   181261381:	4d 03 da             	add    %r10,%r11
   181261384:	41 ff e3             	jmp    *%r11
   181261387:	c4 a1 7d e7 84 09 00 	vmovntdq %ymm0,-0x100(%rcx,%r9,1)
   18126138e:	ff ff ff 
   181261391:	c4 a1 7d e7 84 09 20 	vmovntdq %ymm0,-0xe0(%rcx,%r9,1)
   181261398:	ff ff ff 
   18126139b:	c4 a1 7d e7 84 09 40 	vmovntdq %ymm0,-0xc0(%rcx,%r9,1)
   1812613a2:	ff ff ff 
   1812613a5:	c4 a1 7d e7 84 09 60 	vmovntdq %ymm0,-0xa0(%rcx,%r9,1)
   1812613ac:	ff ff ff 
   1812613af:	c4 a1 7d e7 44 09 80 	vmovntdq %ymm0,-0x80(%rcx,%r9,1)
   1812613b6:	c4 a1 7d e7 44 09 a0 	vmovntdq %ymm0,-0x60(%rcx,%r9,1)
   1812613bd:	c4 a1 7d e7 44 09 c0 	vmovntdq %ymm0,-0x40(%rcx,%r9,1)
   1812613c4:	c4 a1 7e 7f 44 01 e0 	vmovdqu %ymm0,-0x20(%rcx,%r8,1)
   1812613cb:	c5 fe 7f 00          	vmovdqu %ymm0,(%rax)
   1812613cf:	0f ae f8             	sfence
   1812613d2:	c5 f8 77             	vzeroupper
   1812613d5:	c3                   	ret
   1812613d6:	66 66 0f 1f 84 00 00 	data16 nopw 0x0(%rax,%rax,1)
   1812613dd:	00 00 00 
   1812613e0:	4c 3b 05 f9 af 00 00 	cmp    0xaff9(%rip),%r8        # 0x18126c3e0
   1812613e7:	76 0d                	jbe    0x1812613f6
   1812613e9:	f6 05 6c db 0c 00 02 	testb  $0x2,0xcdb6c(%rip)        # 0x18132ef5c
   1812613f0:	0f 85 2a fd ff ff    	jne    0x181261120
   1812613f6:	4c 8b c9             	mov    %rcx,%r9
   1812613f9:	49 83 e1 0f          	and    $0xf,%r9
   1812613fd:	49 83 e9 10          	sub    $0x10,%r9
   181261401:	49 2b c9             	sub    %r9,%rcx
   181261404:	49 2b d1             	sub    %r9,%rdx
   181261407:	4d 03 c1             	add    %r9,%r8
   18126140a:	49 81 f8 80 00 00 00 	cmp    $0x80,%r8
   181261411:	76 4b                	jbe    0x18126145e
   181261413:	66 66 66 66 66 0f 1f 	data16 data16 data16 data16 nopw 0x0(%rax,%rax,1)
   18126141a:	84 00 00 00 00 00 
   181261420:	66 0f 7f 01          	movdqa %xmm0,(%rcx)
   181261424:	66 0f 7f 41 10       	movdqa %xmm0,0x10(%rcx)
   181261429:	66 0f 7f 41 20       	movdqa %xmm0,0x20(%rcx)
   18126142e:	66 0f 7f 41 30       	movdqa %xmm0,0x30(%rcx)
   181261433:	66 0f 7f 41 40       	movdqa %xmm0,0x40(%rcx)
   181261438:	66 0f 7f 41 50       	movdqa %xmm0,0x50(%rcx)
   18126143d:	66 0f 7f 41 60       	movdqa %xmm0,0x60(%rcx)
   181261442:	66 0f 7f 41 70       	movdqa %xmm0,0x70(%rcx)
   181261447:	48 81 c1 80 00 00 00 	add    $0x80,%rcx
   18126144e:	49 81 e8 80 00 00 00 	sub    $0x80,%r8
   181261455:	49 81 f8 80 00 00 00 	cmp    $0x80,%r8
   18126145c:	73 c2                	jae    0x181261420
   18126145e:	4d 8d 48 0f          	lea    0xf(%r8),%r9
   181261462:	49 83 e1 f0          	and    $0xfffffffffffffff0,%r9
   181261466:	4d 8b d9             	mov    %r9,%r11
   181261469:	49 c1 eb 04          	shr    $0x4,%r11
   18126146d:	47 8b 9c 9a a8 6b 01 	mov    0x16ba8(%r10,%r11,4),%r11d
   181261474:	00 
   181261475:	4d 03 da             	add    %r10,%r11
   181261478:	41 ff e3             	jmp    *%r11
   18126147b:	f3 42 0f 7f 44 09 80 	movdqu %xmm0,-0x80(%rcx,%r9,1)
   181261482:	f3 42 0f 7f 44 09 90 	movdqu %xmm0,-0x70(%rcx,%r9,1)
   181261489:	f3 42 0f 7f 44 09 a0 	movdqu %xmm0,-0x60(%rcx,%r9,1)
   181261490:	f3 42 0f 7f 44 09 b0 	movdqu %xmm0,-0x50(%rcx,%r9,1)
   181261497:	f3 42 0f 7f 44 09 c0 	movdqu %xmm0,-0x40(%rcx,%r9,1)
   18126149e:	f3 42 0f 7f 44 09 d0 	movdqu %xmm0,-0x30(%rcx,%r9,1)
   1812614a5:	f3 42 0f 7f 44 09 e0 	movdqu %xmm0,-0x20(%rcx,%r9,1)
   1812614ac:	f3 42 0f 7f 44 01 f0 	movdqu %xmm0,-0x10(%rcx,%r8,1)
   1812614b3:	f3 0f 7f 00          	movdqu %xmm0,(%rax)
   1812614b7:	c3                   	ret
   1812614b8:	cc                   	int3
   1812614b9:	cc                   	int3
   1812614ba:	cc                   	int3
   1812614bb:	cc                   	int3
   1812614bc:	cc                   	int3
   1812614bd:	cc                   	int3
   1812614be:	cc                   	int3
   1812614bf:	cc                   	int3
   1812614c0:	cc                   	int3
   1812614c1:	cc                   	int3
   1812614c2:	cc                   	int3
   1812614c3:	cc                   	int3
   1812614c4:	cc                   	int3
   1812614c5:	cc                   	int3
   1812614c6:	66 66 0f 1f 84 00 00 	data16 nopw 0x0(%rax,%rax,1)
   1812614cd:	00 00 00 
   1812614d0:	40 55                	rex push %rbp
   1812614d2:	48 83 ec 20          	sub    $0x20,%rsp
   1812614d6:	48 8b ea             	mov    %rdx,%rbp
   1812614d9:	0f b6 4d 60          	movzbl 0x60(%rbp),%ecx
   1812614dd:	48 83 c4 20          	add    $0x20,%rsp
   1812614e1:	5d                   	pop    %rbp
   1812614e2:	e9 29 3e ff ff       	jmp    0x181255310
   1812614e7:	cc                   	int3
   1812614e8:	cc                   	int3
   1812614e9:	cc                   	int3
   1812614ea:	cc                   	int3
   1812614eb:	cc                   	int3
   1812614ec:	cc                   	int3
   1812614ed:	cc                   	int3
   1812614ee:	cc                   	int3
   1812614ef:	cc                   	int3
