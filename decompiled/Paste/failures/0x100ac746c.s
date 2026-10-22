// Assembly fallback only; C pseudocode generation failed.
// Range: 0x100ac746c <= address < 0x100ac9000
// Boundary: next Ghidra-discovered entry; not a proof of the complete semantic function body.

.local/targets/Paste.arm64:	file format mach-o arm64

Disassembly of section __TEXT,__text:

00000001001f4290 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs>:
100ac746c:     	str	x28, [sp, #-0x60]!
100ac7470:     	stp	x27, x26, [sp, #0x10]
100ac7474:     	stp	x25, x24, [sp, #0x20]
100ac7478:     	stp	x23, x22, [sp, #0x30]
100ac747c:     	stp	x20, x19, [sp, #0x40]
100ac7480:     	stp	x29, x30, [sp, #0x50]
100ac7484:     	add	x29, sp, #0x50
100ac7488:     	sub	sp, sp, #0xc10
100ac748c:     	mov	x19, sp
100ac7490:     	mov	x22, x21
100ac7494:     	mov	x23, x2
100ac7498:     	str	x1, [x19, #0x58]
100ac749c:     	str	x0, [x19, #0xd8]
100ac74a0:     	adrp	x8, 0x100ea8000 <_writev+0x100ea8000>
100ac74a4:     	ldr	x8, [x8, #0x2f0]
100ac74a8:     	ldr	x8, [x8]
100ac74ac:     	stur	x8, [x29, #-0x68]
100ac74b0:     	mov	x0, #0x0                ; =0
100ac74b4:     	bl	0x100bf4974 <_writev+0x100bf4974>
100ac74b8:     	mov	x24, x0
100ac74bc:     	ldur	x8, [x0, #-0x8]
100ac74c0:     	str	x8, [x19, #0x90]
100ac74c4:     	ldr	x8, [x8, #0x40]
100ac74c8:     	mov	x9, sp
100ac74cc:     	add	x8, x8, #0xf
100ac74d0:     	and	x8, x8, #0xfffffffffffffff0
100ac74d4:     	sub	x25, x9, x8
100ac74d8:     	mov	sp, x25
100ac74dc:     	mov	x9, sp
100ac74e0:     	sub	x8, x9, x8
100ac74e4:     	str	x8, [x19, #0x98]
100ac74e8:     	mov	sp, x8
100ac74ec:     	mov	x0, #0x0                ; =0
100ac74f0:     	bl	0x100bf7c74 <_writev+0x100bf7c74>
100ac74f4:     	str	x0, [x19, #0xb8]
100ac74f8:     	ldur	x27, [x0, #-0x8]
100ac74fc:     	ldr	x8, [x27, #0x40]
100ac7500:     	mov	x9, sp
100ac7504:     	add	x8, x8, #0xf
100ac7508:     	and	x8, x8, #0xfffffffffffffff0
100ac750c:     	sub	x28, x9, x8
100ac7510:     	mov	sp, x28
100ac7514:     	mov	x9, sp
100ac7518:     	sub	x9, x9, x8
100ac751c:     	str	x9, [x19, #0xd0]
100ac7520:     	mov	sp, x9
100ac7524:     	mov	x9, sp
100ac7528:     	sub	x8, x9, x8
100ac752c:     	str	x8, [x19, #0xc8]
100ac7530:     	mov	sp, x8
100ac7534:     	adrp	x0, 0x100ff8000 <_writev+0x100ff8000>
100ac7538:     	add	x0, x0, #0x468
100ac753c:     	adrp	x1, 0x100c94000 <_writev+0x100c94000>
100ac7540:     	add	x1, x1, #0x440
100ac7544:     	bl	0x1000f7830 <__text+0xf4c98>
100ac7548:     	ldur	x8, [x0, #-0x8]
100ac754c:     	ldr	x8, [x8, #0x40]
100ac7550:     	add	x8, x8, #0xf
100ac7554:     	and	x8, x8, #0xfffffffffffffff0
100ac7558:     	mov	x9, sp
100ac755c:     	sub	x9, x9, x8
100ac7560:     	mov	sp, x9
100ac7564:     	adrp	x8, 0x101058000 <_writev+0x101058000>
100ac7568:     	add	x8, x8, #0x2f0
100ac756c:     	ldr	x8, [x8]
100ac7570:     	ldrb	w8, [x20, x8]
100ac7574:     	cmp	w8, #0x1
100ac7578:     	b.ne	0x100ac75b0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3320>
100ac757c:     	bl	0x100ab8c74 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c49e4>
100ac7580:     	mov	x1, x0
100ac7584:     	adrp	x0, 0x100f31000 <_writev+0x100f31000>
100ac7588:     	add	x0, x0, #0x130
100ac758c:     	mov	x2, #0x0                ; =0
100ac7590:     	mov	w3, #0x0                ; =0
100ac7594:     	bl	0x100bfc504 <_writev+0x100bfc504>
100ac7598:     	mov	x23, x0
100ac759c:     	mov	w8, #0x1                ; =1
100ac75a0:     	strb	w8, [x1]
100ac75a4:     	mov	x21, x0
100ac75a8:     	bl	0x100bfcc3c <_writev+0x100bfcc3c>
100ac75ac:     	b	0x100ac8b08 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4878>
100ac75b0:     	str	x23, [x19, #0xa0]
100ac75b4:     	mov	x23, x9
100ac75b8:     	mov	x0, x9
100ac75bc:     	mov	x21, x22
100ac75c0:     	bl	0x100ac9000 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4d70>
100ac75c4:     	str	x21, [x19, #0x48]
100ac75c8:     	cbz	x21, 0x100ac75d4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3344>
100ac75cc:     	ldr	x23, [x19, #0x48]
100ac75d0:     	b	0x100ac8b08 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4878>
100ac75d4:     	str	x23, [x19, #0x20]
100ac75d8:     	str	x0, [x19, #0x50]
100ac75dc:     	str	x20, [x19, #0x68]
100ac75e0:     	ldr	x8, [x19, #0xa0]
100ac75e4:     	cbz	x8, 0x100ac7644 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d33b4>
100ac75e8:     	adrp	x8, 0x101058000 <_writev+0x101058000>
100ac75ec:     	add	x8, x8, #0x2d8
100ac75f0:     	ldr	x8, [x8]
100ac75f4:     	ldr	x10, [x19, #0x68]
100ac75f8:     	add	x8, x10, x8
100ac75fc:     	ldr	x9, [x8, #0x48]
100ac7600:     	lsr	x9, x9, #60
100ac7604:     	cmp	x9, #0xf
100ac7608:     	b.lo	0x100ac7624 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3394>
100ac760c:     	adrp	x8, 0x101058000 <_writev+0x101058000>
100ac7610:     	add	x8, x8, #0x2e0
100ac7614:     	ldr	x8, [x8]
100ac7618:     	add	x8, x10, x8
100ac761c:     	ldr	w22, [x8, #0x10]
100ac7620:     	b	0x100ac7628 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3398>
100ac7624:     	ldr	x22, [x8, #0x38]
100ac7628:     	ldr	x20, [x19, #0xd8]
100ac762c:     	bl	0x100adc4fc <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8e826c>
100ac7630:     	subs	x2, x22, x0
100ac7634:     	b.lo	0x100ac8fb0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4d20>
100ac7638:     	tbnz	x2, #0x3f, 0x100ac8fb4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4d24>
100ac763c:     	ldr	x0, [x19, #0xa0]
100ac7640:     	bl	0x100c0e420 <_writev+0x100c0e420>
100ac7644:     	add	x22, x19, #0x3e8
100ac7648:     	adrp	x8, 0x100c30000 <_writev+0x100c30000>
100ac764c:     	ldr	q0, [x8, #0x310]
100ac7650:     	str	q0, [x19, #0x6e0]
100ac7654:     	ldr	x20, [x19, #0x68]
100ac7658:     	bl	0x100ad00d0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8dbe40>
100ac765c:     	mov	x23, x0
100ac7660:     	adrp	x8, 0x101058000 <_writev+0x101058000>
100ac7664:     	add	x8, x8, #0x308
100ac7668:     	ldr	x8, [x8]
100ac766c:     	str	x8, [x19, #0x88]
100ac7670:     	add	x8, x19, #0x3e8
100ac7674:     	mov	x20, x0
100ac7678:     	bl	0x100bf9d98 <_writev+0x100bf9d98>
100ac767c:     	ldp	q0, q1, [x22, #0xc0]
100ac7680:     	str	q0, [x19, #0x5a0]
100ac7684:     	str	q1, [x19, #0x5b0]
100ac7688:     	ldr	q0, [x22, #0xe0]
100ac768c:     	str	q0, [x19, #0x5c0]
100ac7690:     	ldr	x8, [x19, #0x4d8]
100ac7694:     	str	x8, [x19, #0x5d0]
100ac7698:     	ldp	q0, q1, [x22, #0x80]
100ac769c:     	str	q0, [x19, #0x560]
100ac76a0:     	str	q1, [x19, #0x570]
100ac76a4:     	ldp	q0, q1, [x22, #0xa0]
100ac76a8:     	str	q0, [x19, #0x580]
100ac76ac:     	str	q1, [x19, #0x590]
100ac76b0:     	ldp	q0, q1, [x22, #0x40]
100ac76b4:     	str	q0, [x19, #0x520]
100ac76b8:     	str	q1, [x19, #0x530]
100ac76bc:     	ldp	q0, q1, [x22, #0x60]
100ac76c0:     	str	q0, [x19, #0x540]
100ac76c4:     	str	q1, [x19, #0x550]
100ac76c8:     	ldp	q0, q1, [x22]
100ac76cc:     	str	q0, [x19, #0x4e0]
100ac76d0:     	str	q1, [x19, #0x4f0]
100ac76d4:     	ldp	q0, q1, [x22, #0x20]
100ac76d8:     	str	q0, [x19, #0x500]
100ac76dc:     	str	q1, [x19, #0x510]
100ac76e0:     	ldr	q0, [x19, #0x5a0]
100ac76e4:     	ldr	q1, [x19, #0x5b0]
100ac76e8:     	str	q0, [x19, #0x6a0]
100ac76ec:     	str	q1, [x19, #0x6b0]
100ac76f0:     	ldr	q0, [x19, #0x5c0]
100ac76f4:     	str	q0, [x19, #0x6c0]
100ac76f8:     	ldr	x8, [x19, #0x5d0]
100ac76fc:     	str	x8, [x19, #0x6d0]
100ac7700:     	ldr	q0, [x19, #0x560]
100ac7704:     	ldr	q1, [x19, #0x570]
100ac7708:     	str	q0, [x19, #0x660]
100ac770c:     	str	q1, [x19, #0x670]
100ac7710:     	ldr	q0, [x19, #0x580]
100ac7714:     	ldr	q1, [x19, #0x590]
100ac7718:     	str	q0, [x19, #0x680]
100ac771c:     	str	q1, [x19, #0x690]
100ac7720:     	ldr	q0, [x19, #0x520]
100ac7724:     	ldr	q1, [x19, #0x530]
100ac7728:     	str	q0, [x19, #0x620]
100ac772c:     	str	q1, [x19, #0x630]
100ac7730:     	ldr	q0, [x19, #0x540]
100ac7734:     	ldr	q1, [x19, #0x550]
100ac7738:     	str	q0, [x19, #0x640]
100ac773c:     	str	q1, [x19, #0x650]
100ac7740:     	ldr	q0, [x19, #0x4e0]
100ac7744:     	ldr	q1, [x19, #0x4f0]
100ac7748:     	str	q0, [x19, #0x5e0]
100ac774c:     	str	q1, [x19, #0x5f0]
100ac7750:     	ldr	q0, [x19, #0x500]
100ac7754:     	ldr	q1, [x19, #0x510]
100ac7758:     	str	q0, [x19, #0x600]
100ac775c:     	str	q1, [x19, #0x610]
100ac7760:     	add	x0, x19, #0x4e0
100ac7764:     	bl	0x100aca508 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d6278>
100ac7768:     	cmp	w0, #0x1
100ac776c:     	b.ne	0x100ac7828 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3598>
100ac7770:     	mov	x0, x23
100ac7774:     	bl	0x100bfc9c0 <_writev+0x100bfc9c0>
100ac7778:     	ldr	x20, [x19, #0x88]
100ac777c:     	ldr	x23, [x19, #0x50]
100ac7780:     	ldr	x0, [x23, x20]
100ac7784:     	bl	0x100bfba78 <_writev+0x100bfba78>
100ac7788:     	tbnz	x0, #0x3f, 0x100ac8874 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d45e4>
100ac778c:     	mov	x24, x0
100ac7790:     	ldr	x28, [x19, #0x6e0]
100ac7794:     	ldr	x22, [x19, #0x6e8]
100ac7798:     	ldr	x25, [x23, x20]
100ac779c:     	lsr	x8, x22, #62
100ac77a0:     	cmp	w8, #0x1
100ac77a4:     	b.gt	0x100ac88e0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4650>
100ac77a8:     	cbnz	w8, 0x100ac8940 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d46b0>
100ac77ac:     	strb	w28, [x19, #0x3e8]
100ac77b0:     	lsr	x8, x28, #8
100ac77b4:     	strb	w8, [x19, #0x3e9]
100ac77b8:     	lsr	x8, x28, #16
100ac77bc:     	strb	w8, [x19, #0x3ea]
100ac77c0:     	lsr	x8, x28, #24
100ac77c4:     	strb	w8, [x19, #0x3eb]
100ac77c8:     	lsr	x8, x28, #32
100ac77cc:     	strb	w8, [x19, #0x3ec]
100ac77d0:     	lsr	x8, x28, #40
100ac77d4:     	strb	w8, [x19, #0x3ed]
100ac77d8:     	lsr	x8, x28, #48
100ac77dc:     	strb	w8, [x19, #0x3ee]
100ac77e0:     	lsr	x8, x28, #56
100ac77e4:     	strb	w8, [x19, #0x3ef]
100ac77e8:     	lsr	x8, x22, #8
100ac77ec:     	strb	w22, [x19, #0x3f0]
100ac77f0:     	lsr	x9, x22, #16
100ac77f4:     	strb	w8, [x19, #0x3f1]
100ac77f8:     	lsr	x8, x22, #24
100ac77fc:     	strb	w9, [x19, #0x3f2]
100ac7800:     	lsr	x9, x22, #32
100ac7804:     	strb	w8, [x19, #0x3f3]
100ac7808:     	lsr	x8, x22, #40
100ac780c:     	strb	w9, [x19, #0x3f4]
100ac7810:     	strb	w8, [x19, #0x3f5]
100ac7814:     	tst	x22, #0xff000000000000
100ac7818:     	b.eq	0x100ac8a90 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4800>
100ac781c:     	ubfx	x2, x22, #48, #8
100ac7820:     	add	x0, x19, #0x3e8
100ac7824:     	b	0x100ac89a0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4710>
100ac7828:     	str	xzr, [x19, #0x70]
100ac782c:     	adrp	x8, 0x100ea7000 <_writev+0x100ea7000>
100ac7830:     	ldr	x8, [x8, #0x208]
100ac7834:     	adrp	x9, 0x100ea7000 <_writev+0x100ea7000>
100ac7838:     	ldr	x9, [x9, #0x200]
100ac783c:     	ldr	w8, [x8]
100ac7840:     	str	w8, [x19, #0x44]
100ac7844:     	ldr	w8, [x9]
100ac7848:     	str	w8, [x19, #0x2c]
100ac784c:     	stp	x24, x23, [x19, #0xa8]
100ac7850:     	str	x25, [x19, #0x30]
100ac7854:     	ldr	x24, [x19, #0xb8]
100ac7858:     	stp	x28, x27, [x19, #0x78]
100ac785c:     	ldr	x25, [x19, #0xc8]
100ac7860:     	b	0x100ac79a4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3714>
100ac7864:     	ldr	x8, [x19, #0x698]
100ac7868:     	lsr	x8, x8, #60
100ac786c:     	cmp	x8, #0xf
100ac7870:     	mov	w8, #0x10               ; =16
100ac7874:     	csel	x20, x8, xzr, lo
100ac7878:     	add	x0, x19, #0x4e0
100ac787c:     	adrp	x1, 0x100ff8000 <_writev+0x100ff8000>
100ac7880:     	add	x1, x1, #0x490
100ac7884:     	adrp	x2, 0x100c94000 <_writev+0x100c94000>
100ac7888:     	add	x2, x2, #0x450
100ac788c:     	bl	0x1000fb4c4 <__text+0xf892c>
100ac7890:     	adds	x8, x24, x20
100ac7894:     	str	x8, [x19, #0x70]
100ac7898:     	b.hs	0x100ac8f70 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4ce0>
100ac789c:     	add	x8, x19, #0x3e8
100ac78a0:     	mov	x20, x23
100ac78a4:     	bl	0x100bf9d98 <_writev+0x100bf9d98>
100ac78a8:     	add	x9, x19, #0x3e8
100ac78ac:     	ldp	q0, q1, [x9, #0xc0]
100ac78b0:     	str	q0, [x19, #0x5a0]
100ac78b4:     	str	q1, [x19, #0x5b0]
100ac78b8:     	ldr	q0, [x9, #0xe0]
100ac78bc:     	str	q0, [x19, #0x5c0]
100ac78c0:     	ldr	x8, [x19, #0x4d8]
100ac78c4:     	str	x8, [x19, #0x5d0]
100ac78c8:     	ldp	q0, q1, [x9, #0x80]
100ac78cc:     	str	q0, [x19, #0x560]
100ac78d0:     	str	q1, [x19, #0x570]
100ac78d4:     	ldp	q0, q1, [x9, #0xa0]
100ac78d8:     	str	q0, [x19, #0x580]
100ac78dc:     	str	q1, [x19, #0x590]
100ac78e0:     	ldp	q0, q1, [x9, #0x40]
100ac78e4:     	str	q0, [x19, #0x520]
100ac78e8:     	str	q1, [x19, #0x530]
100ac78ec:     	ldp	q0, q1, [x9, #0x60]
100ac78f0:     	str	q0, [x19, #0x540]
100ac78f4:     	str	q1, [x19, #0x550]
100ac78f8:     	ldp	q0, q1, [x9]
100ac78fc:     	str	q0, [x19, #0x4e0]
100ac7900:     	str	q1, [x19, #0x4f0]
100ac7904:     	ldp	q0, q1, [x9, #0x20]
100ac7908:     	str	q0, [x19, #0x500]
100ac790c:     	str	q1, [x19, #0x510]
100ac7910:     	ldr	q0, [x19, #0x5a0]
100ac7914:     	ldr	q1, [x19, #0x5b0]
100ac7918:     	str	q0, [x19, #0x6a0]
100ac791c:     	str	q1, [x19, #0x6b0]
100ac7920:     	ldr	q0, [x19, #0x5c0]
100ac7924:     	str	q0, [x19, #0x6c0]
100ac7928:     	ldr	x8, [x19, #0x5d0]
100ac792c:     	str	x8, [x19, #0x6d0]
100ac7930:     	ldr	q0, [x19, #0x560]
100ac7934:     	ldr	q1, [x19, #0x570]
100ac7938:     	str	q0, [x19, #0x660]
100ac793c:     	str	q1, [x19, #0x670]
100ac7940:     	ldr	q0, [x19, #0x580]
100ac7944:     	ldr	q1, [x19, #0x590]
100ac7948:     	str	q0, [x19, #0x680]
100ac794c:     	str	q1, [x19, #0x690]
100ac7950:     	ldr	q0, [x19, #0x520]
100ac7954:     	ldr	q1, [x19, #0x530]
100ac7958:     	str	q0, [x19, #0x620]
100ac795c:     	str	q1, [x19, #0x630]
100ac7960:     	ldr	q0, [x19, #0x540]
100ac7964:     	ldr	q1, [x19, #0x550]
100ac7968:     	str	q0, [x19, #0x640]
100ac796c:     	str	q1, [x19, #0x650]
100ac7970:     	ldr	q0, [x19, #0x4e0]
100ac7974:     	ldr	q1, [x19, #0x4f0]
100ac7978:     	str	q0, [x19, #0x5e0]
100ac797c:     	str	q1, [x19, #0x5f0]
100ac7980:     	ldr	q0, [x19, #0x500]
100ac7984:     	ldr	q1, [x19, #0x510]
100ac7988:     	str	q0, [x19, #0x600]
100ac798c:     	str	q1, [x19, #0x610]
100ac7990:     	add	x0, x19, #0x4e0
100ac7994:     	bl	0x100aca508 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d6278>
100ac7998:     	cmp	w0, #0x1
100ac799c:     	ldr	x24, [x19, #0xb8]
100ac79a0:     	b.eq	0x100ac7770 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d34e0>
100ac79a4:     	ldr	q0, [x19, #0x6b0]
100ac79a8:     	ldr	q1, [x19, #0x6c0]
100ac79ac:     	ldr	q2, [x19, #0x6a0]
100ac79b0:     	ldr	q3, [x19, #0x690]
100ac79b4:     	str	q2, [x19, #0xbc0]
100ac79b8:     	str	q0, [x19, #0xbd0]
100ac79bc:     	str	q1, [x19, #0xbe0]
100ac79c0:     	ldr	q0, [x19, #0x670]
100ac79c4:     	ldr	q1, [x19, #0x680]
100ac79c8:     	ldr	q2, [x19, #0x660]
100ac79cc:     	ldr	q4, [x19, #0x650]
100ac79d0:     	str	q2, [x19, #0xb80]
100ac79d4:     	str	q0, [x19, #0xb90]
100ac79d8:     	str	q1, [x19, #0xba0]
100ac79dc:     	str	q3, [x19, #0xbb0]
100ac79e0:     	ldr	q0, [x19, #0x620]
100ac79e4:     	ldr	q1, [x19, #0x620]
100ac79e8:     	ldr	q2, [x19, #0x630]
100ac79ec:     	ldr	q3, [x19, #0x630]
100ac79f0:     	str	q0, [x19, #0xb40]
100ac79f4:     	str	q2, [x19, #0xb50]
100ac79f8:     	ldr	q0, [x19, #0x640]
100ac79fc:     	str	q0, [x19, #0xb60]
100ac7a00:     	str	q4, [x19, #0xb70]
100ac7a04:     	ldr	q0, [x19, #0x5e0]
100ac7a08:     	ldr	q2, [x19, #0x5e0]
100ac7a0c:     	ldr	q4, [x19, #0x5f0]
100ac7a10:     	ldr	q5, [x19, #0x5f0]
100ac7a14:     	str	q0, [x19, #0xb00]
100ac7a18:     	str	q4, [x19, #0xb10]
100ac7a1c:     	ldr	q0, [x19, #0x610]
100ac7a20:     	ldr	q4, [x19, #0x610]
100ac7a24:     	ldr	q6, [x19, #0x600]
100ac7a28:     	ldr	q7, [x19, #0x600]
100ac7a2c:     	str	q6, [x19, #0xb20]
100ac7a30:     	str	q0, [x19, #0xb30]
100ac7a34:     	str	q1, [x19, #0xad0]
100ac7a38:     	str	q3, [x19, #0xae0]
100ac7a3c:     	str	q2, [x19, #0xa90]
100ac7a40:     	str	q5, [x19, #0xaa0]
100ac7a44:     	ldr	x8, [x19, #0x6d0]
100ac7a48:     	str	x8, [x19, #0xbf0]
100ac7a4c:     	ldr	x8, [x19, #0x640]
100ac7a50:     	str	x8, [x19, #0xaf0]
100ac7a54:     	str	q4, [x19, #0xac0]
100ac7a58:     	str	q7, [x19, #0xab0]
100ac7a5c:     	ldrb	w8, [x19, #0x5e9]
100ac7a60:     	tbnz	w8, #0x3, 0x100ac7aa8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3818>
100ac7a64:     	add	x0, x19, #0x5e0
100ac7a68:     	add	x1, x19, #0x3e8
100ac7a6c:     	bl	0x100abcdd8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c8b48>
100ac7a70:     	adrp	x8, 0x100ff8000 <_writev+0x100ff8000>
100ac7a74:     	ldr	x8, [x8, #0x630]
100ac7a78:     	cmn	x8, #0x1
100ac7a7c:     	b.ne	0x100ac8844 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d45b4>
100ac7a80:     	mov	x0, x24
100ac7a84:     	adrp	x1, 0x101058000 <_writev+0x101058000>
100ac7a88:     	add	x1, x1, #0x310
100ac7a8c:     	bl	0x1000cd990 <__text+0xcadf8>
100ac7a90:     	mov	x1, x0
100ac7a94:     	ldr	x26, [x27, #0x10]
100ac7a98:     	mov	x0, x25
100ac7a9c:     	mov	x2, x24
100ac7aa0:     	blr	x26
100ac7aa4:     	b	0x100ac7ac0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3830>
100ac7aa8:     	add	x0, x19, #0x5e0
100ac7aac:     	add	x1, x19, #0x3e8
100ac7ab0:     	bl	0x100abcdd8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c8b48>
100ac7ab4:     	mov	x8, x25
100ac7ab8:     	bl	0x100bf7c38 <_writev+0x100bf7c38>
100ac7abc:     	ldr	x26, [x27, #0x10]
100ac7ac0:     	ldr	x20, [x19, #0x610]
100ac7ac4:     	ldr	x22, [x19, #0x618]
100ac7ac8:     	ldr	x23, [x19, #0xd0]
100ac7acc:     	mov	x0, x23
100ac7ad0:     	mov	x1, x25
100ac7ad4:     	mov	x2, x24
100ac7ad8:     	blr	x26
100ac7adc:     	mov	x0, x20
100ac7ae0:     	mov	x1, x22
100ac7ae4:     	mov	x2, x23
100ac7ae8:     	bl	0x100bf7bf0 <_writev+0x100bf7bf0>
100ac7aec:     	cmp	x1, #0x0
100ac7af0:     	csel	x8, xzr, x0, eq
100ac7af4:     	str	x8, [x19, #0xc0]
100ac7af8:     	mov	x8, #-0x2000000000000000 ; =-2305843009213693952
100ac7afc:     	csel	x20, x8, x1, eq
100ac7b00:     	ldr	x27, [x27, #0x8]
100ac7b04:     	mov	x0, x25
100ac7b08:     	mov	x1, x24
100ac7b0c:     	blr	x27
100ac7b10:     	ldr	x9, [x19, #0xd8]
100ac7b14:     	ldp	q0, q1, [x9, #0x40]
100ac7b18:     	str	q0, [x19, #0x9f0]
100ac7b1c:     	str	q1, [x19, #0xa00]
100ac7b20:     	ldr	x8, [x9, #0x60]
100ac7b24:     	str	x8, [x19, #0xa10]
100ac7b28:     	ldp	q0, q1, [x9]
100ac7b2c:     	str	q0, [x19, #0x9b0]
100ac7b30:     	str	q1, [x19, #0x9c0]
100ac7b34:     	ldp	q1, q0, [x9, #0x20]
100ac7b38:     	str	q0, [x19, #0x9e0]
100ac7b3c:     	str	q1, [x19, #0x9d0]
100ac7b40:     	ldrb	w8, [x19, #0x9b9]
100ac7b44:     	tbnz	w8, #0x3, 0x100ac7b7c <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d38ec>
100ac7b48:     	adrp	x8, 0x100ff8000 <_writev+0x100ff8000>
100ac7b4c:     	ldr	x8, [x8, #0x630]
100ac7b50:     	cmn	x8, #0x1
100ac7b54:     	b.ne	0x100ac885c <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d45cc>
100ac7b58:     	mov	x0, x24
100ac7b5c:     	adrp	x1, 0x101058000 <_writev+0x101058000>
100ac7b60:     	add	x1, x1, #0x310
100ac7b64:     	bl	0x1000cd990 <__text+0xcadf8>
100ac7b68:     	mov	x1, x0
100ac7b6c:     	mov	x0, x28
100ac7b70:     	mov	x2, x24
100ac7b74:     	blr	x26
100ac7b78:     	b	0x100ac7b84 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d38f4>
100ac7b7c:     	mov	x8, x28
100ac7b80:     	bl	0x100bf7c38 <_writev+0x100bf7c38>
100ac7b84:     	mov	x23, x24
100ac7b88:     	ldr	x24, [x19, #0x9e0]
100ac7b8c:     	ldr	x25, [x19, #0x9e8]
100ac7b90:     	ldr	x22, [x19, #0xd0]
100ac7b94:     	mov	x0, x22
100ac7b98:     	mov	x1, x28
100ac7b9c:     	mov	x2, x23
100ac7ba0:     	blr	x26
100ac7ba4:     	mov	x0, x24
100ac7ba8:     	mov	x1, x25
100ac7bac:     	mov	x2, x22
100ac7bb0:     	bl	0x100bf7bf0 <_writev+0x100bf7bf0>
100ac7bb4:     	cmp	x1, #0x0
100ac7bb8:     	csel	x24, xzr, x0, eq
100ac7bbc:     	mov	x8, #-0x2000000000000000 ; =-2305843009213693952
100ac7bc0:     	csel	x25, x8, x1, eq
100ac7bc4:     	mov	x0, x28
100ac7bc8:     	mov	x1, x23
100ac7bcc:     	blr	x27
100ac7bd0:     	ldr	x0, [x19, #0xc0]
100ac7bd4:     	cmp	x0, x24
100ac7bd8:     	b.ne	0x100ac7c04 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3974>
100ac7bdc:     	cmp	x20, x25
100ac7be0:     	b.ne	0x100ac7c04 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3974>
100ac7be4:     	mov	x0, x20
100ac7be8:     	bl	0x100bfc594 <_writev+0x100bfc594>
100ac7bec:     	mov	x0, x25
100ac7bf0:     	bl	0x100bfc594 <_writev+0x100bfc594>
100ac7bf4:     	ldp	x26, x23, [x19, #0xa8]
100ac7bf8:     	ldp	x28, x27, [x19, #0x78]
100ac7bfc:     	ldr	x25, [x19, #0xc8]
100ac7c00:     	b	0x100ac7c3c <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d39ac>
100ac7c04:     	mov	x1, x20
100ac7c08:     	mov	x2, x24
100ac7c0c:     	mov	x3, x25
100ac7c10:     	mov	w4, #0x0                ; =0
100ac7c14:     	bl	0x100bfa3e0 <_writev+0x100bfa3e0>
100ac7c18:     	mov	x22, x0
100ac7c1c:     	mov	x0, x20
100ac7c20:     	bl	0x100bfc594 <_writev+0x100bfc594>
100ac7c24:     	mov	x0, x25
100ac7c28:     	bl	0x100bfc594 <_writev+0x100bfc594>
100ac7c2c:     	ldp	x26, x23, [x19, #0xa8]
100ac7c30:     	ldp	x28, x27, [x19, #0x78]
100ac7c34:     	ldr	x25, [x19, #0xc8]
100ac7c38:     	tbz	w22, #0x0, 0x100ac7e80 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3bf0>
100ac7c3c:     	ldr	w8, [x19, #0x658]
100ac7c40:     	ldr	x9, [x19, #0xd8]
100ac7c44:     	ldr	w9, [x9, #0x78]
100ac7c48:     	cmp	w8, w9
100ac7c4c:     	b.ne	0x100ac7e80 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3bf0>
100ac7c50:     	ldrh	w22, [x19, #0x5e6]
100ac7c54:     	and	w8, w22, #0xff
100ac7c58:     	cmp	w8, #0x2c
100ac7c5c:     	b.hi	0x100ac7c78 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d39e8>
100ac7c60:     	add	x8, x19, #0x6f0
100ac7c64:     	add	x20, x19, #0xa90
100ac7c68:     	bl	0x100adaf98 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8e6d08>
100ac7c6c:     	ldrb	w8, [x19, #0x714]
100ac7c70:     	cmp	w8, #0x1
100ac7c74:     	b.eq	0x100ac7c98 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3a08>
100ac7c78:     	add	x8, x19, #0x718
100ac7c7c:     	add	x20, x19, #0xa90
100ac7c80:     	bl	0x100adaf98 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8e6d08>
100ac7c84:     	ldrb	w8, [x19, #0x73c]
100ac7c88:     	cmp	w8, #0x1
100ac7c8c:     	b.eq	0x100ac7c98 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3a08>
100ac7c90:     	ldr	x24, [x19, #0x730]
100ac7c94:     	cbnz	x24, 0x100ac7c9c <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3a0c>
100ac7c98:     	ldr	w24, [x19, #0x60c]
100ac7c9c:     	ldrb	w8, [x19, #0x9b6]
100ac7ca0:     	cmp	w8, #0x2c
100ac7ca4:     	b.hi	0x100ac7cc0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3a30>
100ac7ca8:     	add	x8, x19, #0x740
100ac7cac:     	add	x20, x19, #0x9b0
100ac7cb0:     	bl	0x100adaf98 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8e6d08>
100ac7cb4:     	ldrb	w8, [x19, #0x764]
100ac7cb8:     	cmp	w8, #0x1
100ac7cbc:     	b.eq	0x100ac7ce0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3a50>
100ac7cc0:     	add	x8, x19, #0x768
100ac7cc4:     	add	x20, x19, #0x9b0
100ac7cc8:     	bl	0x100adaf98 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8e6d08>
100ac7ccc:     	ldrb	w8, [x19, #0x78c]
100ac7cd0:     	cmp	w8, #0x1
100ac7cd4:     	b.eq	0x100ac7ce0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3a50>
100ac7cd8:     	ldr	x8, [x19, #0x780]
100ac7cdc:     	cbnz	x8, 0x100ac7ce4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3a54>
100ac7ce0:     	ldr	w8, [x19, #0x9dc]
100ac7ce4:     	cmp	x24, x8
100ac7ce8:     	b.ne	0x100ac7e80 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3bf0>
100ac7cec:     	ldrh	w8, [x19, #0x664]
100ac7cf0:     	ldrh	w9, [x19, #0x666]
100ac7cf4:     	add	x8, x8, x9
100ac7cf8:     	add	x24, x8, #0x1e
100ac7cfc:     	ldrh	w8, [x19, #0x650]
100ac7d00:     	cbz	w8, 0x100ac7d44 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3ab4>
100ac7d04:     	and	w8, w22, #0xff
100ac7d08:     	cmp	w8, #0x2c
100ac7d0c:     	b.ls	0x100ac7d84 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3af4>
100ac7d10:     	ldr	x8, [x19, #0x6b8]
100ac7d14:     	lsr	x8, x8, #60
100ac7d18:     	cmp	x8, #0xe
100ac7d1c:     	b.ls	0x100ac7df0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3b60>
100ac7d20:     	add	x8, x19, #0x8e8
100ac7d24:     	add	x20, x19, #0xa90
100ac7d28:     	bl	0x100adaf98 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8e6d08>
100ac7d2c:     	ldrb	w8, [x19, #0x90c]
100ac7d30:     	cmp	w8, #0x1
100ac7d34:     	b.eq	0x100ac7e28 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3b98>
100ac7d38:     	ldr	x8, [x19, #0x8f8]
100ac7d3c:     	cbnz	x8, 0x100ac7ed4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3c44>
100ac7d40:     	b	0x100ac7e28 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3b98>
100ac7d44:     	and	w8, w22, #0xff
100ac7d48:     	cmp	w8, #0x2c
100ac7d4c:     	b.ls	0x100ac7db0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3b20>
100ac7d50:     	ldr	x8, [x19, #0x6b8]
100ac7d54:     	lsr	x8, x8, #60
100ac7d58:     	cmp	x8, #0xe
100ac7d5c:     	b.ls	0x100ac7e70 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3be0>
100ac7d60:     	add	x8, x19, #0x960
100ac7d64:     	add	x20, x19, #0xa90
100ac7d68:     	bl	0x100adaf98 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8e6d08>
100ac7d6c:     	ldrb	w8, [x19, #0x984]
100ac7d70:     	cmp	w8, #0x1
100ac7d74:     	b.eq	0x100ac7e60 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3bd0>
100ac7d78:     	ldr	x8, [x19, #0x968]
100ac7d7c:     	cbnz	x8, 0x100ac7ed4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3c44>
100ac7d80:     	b	0x100ac7e60 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3bd0>
100ac7d84:     	add	x8, x19, #0x898
100ac7d88:     	add	x20, x19, #0xa90
100ac7d8c:     	bl	0x100adaf98 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8e6d08>
100ac7d90:     	ldrb	w8, [x19, #0x8bc]
100ac7d94:     	cmp	w8, #0x1
100ac7d98:     	b.ne	0x100ac7e00 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3b70>
100ac7d9c:     	ldr	x8, [x19, #0x698]
100ac7da0:     	add	x10, x19, #0x5e0
100ac7da4:     	add	x9, x10, #0xc8
100ac7da8:     	add	x10, x10, #0x14
100ac7dac:     	b	0x100ac7dd8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3b48>
100ac7db0:     	add	x8, x19, #0x910
100ac7db4:     	add	x20, x19, #0xa90
100ac7db8:     	bl	0x100adaf98 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8e6d08>
100ac7dbc:     	ldrb	w8, [x19, #0x934]
100ac7dc0:     	cmp	w8, #0x1
100ac7dc4:     	b.ne	0x100ac7e38 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3ba8>
100ac7dc8:     	ldr	x8, [x19, #0x698]
100ac7dcc:     	add	x10, x19, #0x5e0
100ac7dd0:     	add	x9, x10, #0xcc
100ac7dd4:     	add	x10, x10, #0x18
100ac7dd8:     	lsr	x8, x8, #60
100ac7ddc:     	cmp	x8, #0xe
100ac7de0:     	csel	x8, x10, x9, hi
100ac7de4:     	ldr	w8, [x8]
100ac7de8:     	add	x24, x24, x8
100ac7dec:     	b	0x100ac7ef4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3c64>
100ac7df0:     	ldr	x8, [x19, #0x6c8]
100ac7df4:     	adds	x24, x24, x8
100ac7df8:     	b.lo	0x100ac7edc <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3c4c>
100ac7dfc:     	b	0x100ac8f60 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4cd0>
100ac7e00:     	ldr	x8, [x19, #0x6b8]
100ac7e04:     	lsr	x8, x8, #60
100ac7e08:     	cmp	x8, #0xf
100ac7e0c:     	b.lo	0x100ac7ed0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3c40>
100ac7e10:     	add	x8, x19, #0x8c0
100ac7e14:     	add	x20, x19, #0xa90
100ac7e18:     	bl	0x100adaf98 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8e6d08>
100ac7e1c:     	ldrb	w8, [x19, #0x8e4]
100ac7e20:     	cmp	w8, #0x1
100ac7e24:     	b.ne	0x100ac7d20 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3a90>
100ac7e28:     	ldr	w8, [x19, #0x5f4]
100ac7e2c:     	adds	x24, x24, x8
100ac7e30:     	b.lo	0x100ac7edc <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3c4c>
100ac7e34:     	b	0x100ac8f60 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4cd0>
100ac7e38:     	ldr	x8, [x19, #0x6b8]
100ac7e3c:     	lsr	x8, x8, #60
100ac7e40:     	cmp	x8, #0xf
100ac7e44:     	b.lo	0x100ac7e70 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3be0>
100ac7e48:     	add	x8, x19, #0x938
100ac7e4c:     	add	x20, x19, #0xa90
100ac7e50:     	bl	0x100adaf98 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8e6d08>
100ac7e54:     	ldrb	w8, [x19, #0x95c]
100ac7e58:     	cmp	w8, #0x1
100ac7e5c:     	b.ne	0x100ac7d60 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3ad0>
100ac7e60:     	ldr	w8, [x19, #0x5f8]
100ac7e64:     	adds	x24, x24, x8
100ac7e68:     	b.lo	0x100ac7edc <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3c4c>
100ac7e6c:     	b	0x100ac8f60 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4cd0>
100ac7e70:     	ldr	x8, [x19, #0x6d0]
100ac7e74:     	adds	x24, x24, x8
100ac7e78:     	b.lo	0x100ac7edc <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3c4c>
100ac7e7c:     	b	0x100ac8f60 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4cd0>
100ac7e80:     	ldrb	w8, [x19, #0x5e6]
100ac7e84:     	cmp	w8, #0x2c
100ac7e88:     	b.hi	0x100ac7ea4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3c14>
100ac7e8c:     	add	x8, x19, #0x790
100ac7e90:     	add	x20, x19, #0xa90
100ac7e94:     	bl	0x100adaf98 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8e6d08>
100ac7e98:     	ldrb	w8, [x19, #0x7b4]
100ac7e9c:     	cmp	w8, #0x1
100ac7ea0:     	b.eq	0x100ac7f50 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3cc0>
100ac7ea4:     	add	x8, x19, #0x7b8
100ac7ea8:     	add	x20, x19, #0xa90
100ac7eac:     	bl	0x100adaf98 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8e6d08>
100ac7eb0:     	ldrb	w8, [x19, #0x7dc]
100ac7eb4:     	cmp	w8, #0x1
100ac7eb8:     	b.eq	0x100ac7f50 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3cc0>
100ac7ebc:     	ldr	x22, [x19, #0x7d0]
100ac7ec0:     	cbz	x22, 0x100ac7f50 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3cc0>
100ac7ec4:     	ldr	x24, [x19, #0x90]
100ac7ec8:     	tbz	x22, #0x3f, 0x100ac7f58 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3cc8>
100ac7ecc:     	b	0x100ac8fbc <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4d2c>
100ac7ed0:     	ldr	x8, [x19, #0x6c8]
100ac7ed4:     	adds	x24, x24, x8
100ac7ed8:     	b.hs	0x100ac8f60 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4cd0>
100ac7edc:     	and	w8, w22, #0xff
100ac7ee0:     	cmp	w8, #0x2d
100ac7ee4:     	b.lo	0x100ac7ef4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3c64>
100ac7ee8:     	add	x0, x19, #0x5e0
100ac7eec:     	bl	0x100abce14 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c8b84>
100ac7ef0:     	b	0x100ac7f14 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3c84>
100ac7ef4:     	add	x8, x19, #0x988
100ac7ef8:     	add	x20, x19, #0xa90
100ac7efc:     	bl	0x100adaf98 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8e6d08>
100ac7f00:     	add	x0, x19, #0x5e0
100ac7f04:     	bl	0x100abce14 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c8b84>
100ac7f08:     	ldrb	w8, [x19, #0x9ac]
100ac7f0c:     	cmp	w8, #0x1
100ac7f10:     	b.eq	0x100ac7864 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d35d4>
100ac7f14:     	ldr	x8, [x19, #0x6b8]
100ac7f18:     	lsr	x8, x8, #60
100ac7f1c:     	cmp	x8, #0xf
100ac7f20:     	mov	w8, #0x18               ; =24
100ac7f24:     	csel	x20, x8, xzr, lo
100ac7f28:     	add	x0, x19, #0x4e0
100ac7f2c:     	adrp	x1, 0x100ff8000 <_writev+0x100ff8000>
100ac7f30:     	add	x1, x1, #0x490
100ac7f34:     	adrp	x2, 0x100c94000 <_writev+0x100c94000>
100ac7f38:     	add	x2, x2, #0x450
100ac7f3c:     	bl	0x1000fb4c4 <__text+0xf892c>
100ac7f40:     	adds	x8, x24, x20
100ac7f44:     	str	x8, [x19, #0x70]
100ac7f48:     	b.lo	0x100ac789c <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d360c>
100ac7f4c:     	b	0x100ac8f64 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4cd4>
100ac7f50:     	ldr	w22, [x19, #0x60c]
100ac7f54:     	ldr	x24, [x19, #0x90]
100ac7f58:     	ldr	x8, [x19, #0x68]
100ac7f5c:     	ldr	x9, [x19, #0x88]
100ac7f60:     	ldr	x0, [x8, x9]
100ac7f64:     	mov	x1, x22
100ac7f68:     	mov	w2, #0x0                ; =0
100ac7f6c:     	bl	0x100bfba30 <_writev+0x100bfba30>
100ac7f70:     	add	x20, x19, #0xb00
100ac7f74:     	bl	0x100adc4fc <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8e826c>
100ac7f78:     	add	x20, x19, #0xb00
100ac7f7c:     	bl	0x100adc4fc <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8e826c>
100ac7f80:     	tbnz	x0, #0x3f, 0x100ac8fc0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4d30>
100ac7f84:     	mov	x27, x0
100ac7f88:     	str	x22, [x19, #0x8]
100ac7f8c:     	cbz	x0, 0x100ac8674 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d43e4>
100ac7f90:     	str	xzr, [x19, #0xc0]
100ac7f94:     	mov	x9, #0x0                ; =0
100ac7f98:     	ldr	x8, [x19, #0x58]
100ac7f9c:     	cmp	x27, x8
100ac7fa0:     	csel	x28, x27, x8, lt
100ac7fa4:     	str	x27, [x19, #0x38]
100ac7fa8:     	subs	x8, x27, x9
100ac7fac:     	b.vs	0x100ac8f68 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4cd8>
100ac7fb0:     	str	x9, [x19, #0x60]
100ac7fb4:     	cmp	x8, x28
100ac7fb8:     	csel	x28, x8, x28, lt
100ac7fbc:     	ldr	x8, [x19, #0x68]
100ac7fc0:     	ldr	x9, [x19, #0x88]
100ac7fc4:     	ldr	x20, [x8, x9]
100ac7fc8:     	mov	x0, x28
100ac7fcc:     	mov	x1, #-0x1               ; =-1
100ac7fd0:     	bl	0x100bfca08 <_writev+0x100bfca08>
100ac7fd4:     	mov	x25, x0
100ac7fd8:     	mov	w1, #0x1                ; =1
100ac7fdc:     	mov	x2, x28
100ac7fe0:     	mov	x3, x20
100ac7fe4:     	bl	0x100bfb9e8 <_writev+0x100bfb9e8>
100ac7fe8:     	mov	x22, x0
100ac7fec:     	mov	x0, x20
100ac7ff0:     	bl	0x100bfb988 <_writev+0x100bfb988>
100ac7ff4:     	cmp	w0, #0x1
100ac7ff8:     	b.ge	0x100ac89b0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4720>
100ac7ffc:     	ldr	x23, [x19, #0x98]
100ac8000:     	adrp	x8, 0x10094a000 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x755d70>
100ac8004:     	add	x8, x8, #0x398
100ac8008:     	stp	x8, xzr, [x23]
100ac800c:     	ldr	x8, [x24, #0x68]
100ac8010:     	mov	x0, x23
100ac8014:     	ldr	w1, [x19, #0x44]
100ac8018:     	mov	x2, x26
100ac801c:     	blr	x8
100ac8020:     	mov	x20, x23
100ac8024:     	bl	0x100bf4968 <_writev+0x100bf4968>
100ac8028:     	mov	x27, x1
100ac802c:     	cbz	x22, 0x100ac80f8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3e68>
100ac8030:     	mov	x20, x0
100ac8034:     	mov	x0, #0x0                ; =0
100ac8038:     	bl	0x100bf43f8 <_writev+0x100bf43f8>
100ac803c:     	ldr	w1, [x0, #0x30]
100ac8040:     	ldrh	w2, [x0, #0x34]
100ac8044:     	bl	0x100bfc510 <_writev+0x100bfc510>
100ac8048:     	mov	x21, x0
100ac804c:     	mov	x0, x27
100ac8050:     	bl	0x100bfc9d8 <_writev+0x100bfc9d8>
100ac8054:     	mov	x0, x25
100ac8058:     	mov	x1, x22
100ac805c:     	mov	w2, #0x0                ; =0
100ac8060:     	mov	x3, x20
100ac8064:     	mov	x4, x27
100ac8068:     	mov	x5, #0x0                ; =0
100ac806c:     	mov	x20, x21
100ac8070:     	bl	0x100bf4398 <_writev+0x100bf4398>
100ac8074:     	mov	x20, x0
100ac8078:     	ldr	x8, [x24, #0x10]
100ac807c:     	ldr	x25, [x19, #0x30]
100ac8080:     	mov	x0, x25
100ac8084:     	mov	x1, x23
100ac8088:     	mov	x2, x26
100ac808c:     	blr	x8
100ac8090:     	ldr	x8, [x24, #0x58]
100ac8094:     	mov	x0, x25
100ac8098:     	mov	x1, x26
100ac809c:     	blr	x8
100ac80a0:     	ldr	w8, [x19, #0x2c]
100ac80a4:     	cmp	w0, w8
100ac80a8:     	b.ne	0x100ac8134 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3ea4>
100ac80ac:     	add	x0, x19, #0x3e8
100ac80b0:     	bl	0x100bf43ec <_writev+0x100bf43ec>
100ac80b4:     	mov	x8, x0
100ac80b8:     	ldr	x9, [x1]
100ac80bc:     	orr	x9, x9, #0x8000000000000000
100ac80c0:     	str	x9, [x1]
100ac80c4:     	add	x0, x19, #0x3e8
100ac80c8:     	mov	w1, #0x0                ; =0
100ac80cc:     	blr	x8
100ac80d0:     	cmp	x22, #0xe
100ac80d4:     	b.le	0x100ac814c <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3ebc>
100ac80d8:     	mov	x0, x27
100ac80dc:     	bl	0x100bfc9c0 <_writev+0x100bfc9c0>
100ac80e0:     	mov	w8, #0x7fffffff         ; =2147483647
100ac80e4:     	cmp	x22, x8
100ac80e8:     	b.hs	0x100ac8188 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3ef8>
100ac80ec:     	lsl	x25, x22, #32
100ac80f0:     	orr	x27, x20, #0x4000000000000000
100ac80f4:     	b	0x100ac8230 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3fa0>
100ac80f8:     	mov	x20, x23
100ac80fc:     	bl	0x100bf4968 <_writev+0x100bf4968>
100ac8100:     	mov	x8, x0
100ac8104:     	mov	x20, x1
100ac8108:     	mov	x0, x25
100ac810c:     	mov	x1, #0x0                ; =0
100ac8110:     	blr	x8
100ac8114:     	mov	x0, x27
100ac8118:     	bl	0x100bfc9c0 <_writev+0x100bfc9c0>
100ac811c:     	mov	x0, x20
100ac8120:     	bl	0x100bfc9c0 <_writev+0x100bfc9c0>
100ac8124:     	mov	x25, #0x0               ; =0
100ac8128:     	mov	x27, #-0x4000000000000000 ; =-4611686018427387904
100ac812c:     	mov	x0, x23
100ac8130:     	b	0x100ac8234 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3fa4>
100ac8134:     	ldr	x8, [x24, #0x8]
100ac8138:     	mov	x0, x25
100ac813c:     	mov	x1, x26
100ac8140:     	blr	x8
100ac8144:     	cmp	x22, #0xe
100ac8148:     	b.gt	0x100ac80d8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3e48>
100ac814c:     	tbnz	x22, #0x3f, 0x100ac8f78 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4ce8>
100ac8150:     	bl	0x100bf43b0 <_writev+0x100bf43b0>
100ac8154:     	cbz	x0, 0x100ac81ac <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3f1c>
100ac8158:     	mov	x24, x0
100ac815c:     	bl	0x100bf43d4 <_writev+0x100bf43d4>
100ac8160:     	negs	x8, x0
100ac8164:     	b.vs	0x100ac8fb8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4d28>
100ac8168:     	add	x25, x8, x24
100ac816c:     	bl	0x100bf43c8 <_writev+0x100bf43c8>
100ac8170:     	cbz	x25, 0x100ac81c0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3f30>
100ac8174:     	mov	w9, #0x0                ; =0
100ac8178:     	cmp	x0, x22
100ac817c:     	csel	x2, x0, x22, lt
100ac8180:     	add	x8, x2, x25
100ac8184:     	b	0x100ac81cc <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3f3c>
100ac8188:     	mov	x0, #0x0                ; =0
100ac818c:     	bl	0x100bf49a4 <_writev+0x100bf49a4>
100ac8190:     	mov	w1, #0x20               ; =32
100ac8194:     	mov	w2, #0x7                ; =7
100ac8198:     	bl	0x100bfc510 <_writev+0x100bfc510>
100ac819c:     	mov	x25, x0
100ac81a0:     	stp	xzr, x22, [x0, #0x10]
100ac81a4:     	orr	x27, x20, #0x8000000000000000
100ac81a8:     	b	0x100ac8230 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3fa0>
100ac81ac:     	bl	0x100bf43c8 <_writev+0x100bf43c8>
100ac81b0:     	mov	x2, #0x0                ; =0
100ac81b4:     	mov	x8, #0x0                ; =0
100ac81b8:     	mov	x25, #0x0               ; =0
100ac81bc:     	b	0x100ac81c8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3f38>
100ac81c0:     	mov	x2, #0x0                ; =0
100ac81c4:     	mov	x8, #0x0                ; =0
100ac81c8:     	mov	w9, #0x1                ; =1
100ac81cc:     	ldr	x24, [x19, #0x90]
100ac81d0:     	add	x10, x19, #0x3e8
100ac81d4:     	stur	xzr, [x10, #0x6]
100ac81d8:     	str	xzr, [x19, #0x3e8]
100ac81dc:     	strb	w2, [x19, #0x3f6]
100ac81e0:     	tbnz	w9, #0x0, 0x100ac81f8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3f68>
100ac81e4:     	cmp	x8, x25
100ac81e8:     	b.eq	0x100ac81f8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3f68>
100ac81ec:     	add	x0, x19, #0x3e8
100ac81f0:     	mov	x1, x25
100ac81f4:     	bl	0x100bfbdb4 <_writev+0x100bfbdb4>
100ac81f8:     	ldr	x25, [x19, #0x3e8]
100ac81fc:     	ldrb	w8, [x19, #0x3f6]
100ac8200:     	ldrh	w9, [x19, #0x3f4]
100ac8204:     	orr	w8, w9, w8, lsl #16
100ac8208:     	ldr	w9, [x19, #0x3f0]
100ac820c:     	orr	x22, x9, x8, lsl #32
100ac8210:     	mov	x0, x27
100ac8214:     	bl	0x100bfc9c0 <_writev+0x100bfc9c0>
100ac8218:     	mov	x0, x20
100ac821c:     	bl	0x100bfc9c0 <_writev+0x100bfc9c0>
100ac8220:     	ldr	x8, [x19, #0x18]
100ac8224:     	and	x8, x8, #0xf00000000000000
100ac8228:     	orr	x27, x8, x22
100ac822c:     	str	x27, [x19, #0x18]
100ac8230:     	ldr	x0, [x19, #0x98]
100ac8234:     	ldr	x8, [x24, #0x8]
100ac8238:     	mov	x1, x26
100ac823c:     	blr	x8
100ac8240:     	ldr	x0, [x19, #0xa0]
100ac8244:     	cbz	x0, 0x100ac8250 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3fc0>
100ac8248:     	bl	0x100c05660 <_writev+0x100c05660>
100ac824c:     	tbnz	w0, #0x0, 0x100ac8a18 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4788>
100ac8250:     	ldr	x8, [x19, #0x88]
100ac8254:     	ldr	x9, [x19, #0x50]
100ac8258:     	ldr	x20, [x9, x8]
100ac825c:     	lsr	x26, x27, #62
100ac8260:     	cmp	w26, #0x1
100ac8264:     	b.gt	0x100ac82e8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4058>
100ac8268:     	cbnz	w26, 0x100ac8350 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d40c0>
100ac826c:     	strb	w25, [x19, #0x3e8]
100ac8270:     	lsr	x8, x25, #8
100ac8274:     	strb	w8, [x19, #0x3e9]
100ac8278:     	lsr	x8, x25, #16
100ac827c:     	strb	w8, [x19, #0x3ea]
100ac8280:     	lsr	x8, x25, #24
100ac8284:     	strb	w8, [x19, #0x3eb]
100ac8288:     	lsr	x8, x25, #32
100ac828c:     	strb	w8, [x19, #0x3ec]
100ac8290:     	lsr	x8, x25, #40
100ac8294:     	strb	w8, [x19, #0x3ed]
100ac8298:     	lsr	x8, x25, #48
100ac829c:     	strb	w8, [x19, #0x3ee]
100ac82a0:     	lsr	x8, x25, #56
100ac82a4:     	strb	w8, [x19, #0x3ef]
100ac82a8:     	lsr	x8, x27, #8
100ac82ac:     	strb	w27, [x19, #0x3f0]
100ac82b0:     	lsr	x9, x27, #16
100ac82b4:     	strb	w8, [x19, #0x3f1]
100ac82b8:     	lsr	x8, x27, #24
100ac82bc:     	strb	w9, [x19, #0x3f2]
100ac82c0:     	lsr	x9, x27, #32
100ac82c4:     	strb	w8, [x19, #0x3f3]
100ac82c8:     	lsr	x8, x27, #40
100ac82cc:     	strb	w9, [x19, #0x3f4]
100ac82d0:     	strb	w8, [x19, #0x3f5]
100ac82d4:     	tst	x27, #0xff000000000000
100ac82d8:     	b.eq	0x100ac83e8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4158>
100ac82dc:     	ubfx	x2, x27, #48, #8
100ac82e0:     	add	x0, x19, #0x3e8
100ac82e4:     	b	0x100ac83c8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4138>
100ac82e8:     	cmp	w26, #0x2
100ac82ec:     	b.ne	0x100ac83e8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4158>
100ac82f0:     	str	x20, [x19, #0x10]
100ac82f4:     	ldp	x23, x22, [x25, #0x10]
100ac82f8:     	and	x20, x27, #0x3fffffffffffffff
100ac82fc:     	bl	0x100bf43b0 <_writev+0x100bf43b0>
100ac8300:     	mov	x24, x0
100ac8304:     	cbz	x0, 0x100ac831c <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d408c>
100ac8308:     	and	x20, x27, #0x3fffffffffffffff
100ac830c:     	bl	0x100bf43d4 <_writev+0x100bf43d4>
100ac8310:     	subs	x8, x23, x0
100ac8314:     	b.vs	0x100ac8fc4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4d34>
100ac8318:     	add	x24, x8, x24
100ac831c:     	subs	x22, x22, x23
100ac8320:     	b.vs	0x100ac8f80 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4cf0>
100ac8324:     	and	x20, x27, #0x3fffffffffffffff
100ac8328:     	bl	0x100bf43c8 <_writev+0x100bf43c8>
100ac832c:     	ldr	x20, [x19, #0x10]
100ac8330:     	cbz	x24, 0x100ac83e8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4158>
100ac8334:     	cmp	x0, x22
100ac8338:     	csel	x8, x0, x22, lt
100ac833c:     	cbz	x8, 0x100ac83e8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4158>
100ac8340:     	ldp	x9, x8, [x25, #0x10]
100ac8344:     	subs	x2, x8, x9
100ac8348:     	b.vc	0x100ac83c4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4134>
100ac834c:     	b	0x100ac8fe0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4d50>
100ac8350:     	sxtw	x22, w25
100ac8354:     	asr	x8, x25, #32
100ac8358:     	subs	x8, x8, x22
100ac835c:     	str	x8, [x19, #0x10]
100ac8360:     	b.lt	0x100ac8f7c <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4cec>
100ac8364:     	mov	x23, x28
100ac8368:     	mov	x28, x20
100ac836c:     	and	x20, x27, #0x3fffffffffffffff
100ac8370:     	bl	0x100bf43b0 <_writev+0x100bf43b0>
100ac8374:     	cbz	x0, 0x100ac83d8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4148>
100ac8378:     	mov	x24, x0
100ac837c:     	and	x20, x27, #0x3fffffffffffffff
100ac8380:     	bl	0x100bf43d4 <_writev+0x100bf43d4>
100ac8384:     	subs	x8, x22, x0
100ac8388:     	b.vs	0x100ac8fc8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4d38>
100ac838c:     	add	x24, x8, x24
100ac8390:     	and	x20, x27, #0x3fffffffffffffff
100ac8394:     	bl	0x100bf43c8 <_writev+0x100bf43c8>
100ac8398:     	mov	x20, x28
100ac839c:     	mov	x28, x23
100ac83a0:     	cbz	x24, 0x100ac83e8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4158>
100ac83a4:     	ldr	x8, [x19, #0x10]
100ac83a8:     	cmp	x0, x8
100ac83ac:     	csel	x8, x0, x8, lt
100ac83b0:     	cbz	x8, 0x100ac83e8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4158>
100ac83b4:     	lsr	x8, x25, #32
100ac83b8:     	subs	w8, w8, w25
100ac83bc:     	b.vs	0x100ac8fe4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4d54>
100ac83c0:     	sxtw	x2, w8
100ac83c4:     	mov	x0, x24
100ac83c8:     	mov	w1, #0x1                ; =1
100ac83cc:     	mov	x3, x20
100ac83d0:     	bl	0x100bfbad8 <_writev+0x100bfbad8>
100ac83d4:     	b	0x100ac83e8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4158>
100ac83d8:     	and	x20, x27, #0x3fffffffffffffff
100ac83dc:     	bl	0x100bf43c8 <_writev+0x100bf43c8>
100ac83e0:     	mov	x20, x28
100ac83e4:     	mov	x28, x23
100ac83e8:     	mov	x0, x20
100ac83ec:     	bl	0x100bfb988 <_writev+0x100bfb988>
100ac83f0:     	cmp	w0, #0x1
100ac83f4:     	b.ge	0x100ac89f0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4760>
100ac83f8:     	ldr	x22, [x19, #0xa0]
100ac83fc:     	cbz	x22, 0x100ac845c <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d41cc>
100ac8400:     	cmp	w26, #0x1
100ac8404:     	b.gt	0x100ac8414 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4184>
100ac8408:     	cbnz	w26, 0x100ac842c <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d419c>
100ac840c:     	ubfx	x20, x27, #48, #8
100ac8410:     	b	0x100ac8444 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d41b4>
100ac8414:     	cmp	w26, #0x2
100ac8418:     	b.ne	0x100ac8440 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d41b0>
100ac841c:     	ldp	x9, x8, [x25, #0x10]
100ac8420:     	subs	x20, x8, x9
100ac8424:     	b.vc	0x100ac8444 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d41b4>
100ac8428:     	b	0x100ac8fd0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4d40>
100ac842c:     	lsr	x8, x25, #32
100ac8430:     	subs	w8, w8, w25
100ac8434:     	b.vs	0x100ac8fcc <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4d3c>
100ac8438:     	sxtw	x20, w8
100ac843c:     	b	0x100ac8444 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d41b4>
100ac8440:     	mov	x20, #0x0               ; =0
100ac8444:     	mov	x0, x22
100ac8448:     	bl	0x100bff880 <_writev+0x100bff880>
100ac844c:     	adds	x2, x0, x20
100ac8450:     	b.vs	0x100ac8f74 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4ce4>
100ac8454:     	mov	x0, x22
100ac8458:     	bl	0x100c0af60 <_writev+0x100c0af60>
100ac845c:     	cmp	w26, #0x1
100ac8460:     	b.gt	0x100ac850c <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d427c>
100ac8464:     	ldr	x24, [x19, #0x90]
100ac8468:     	cbnz	w26, 0x100ac859c <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d430c>
100ac846c:     	strb	w25, [x19, #0x3e8]
100ac8470:     	lsr	x8, x25, #8
100ac8474:     	strb	w8, [x19, #0x3e9]
100ac8478:     	lsr	x8, x25, #16
100ac847c:     	strb	w8, [x19, #0x3ea]
100ac8480:     	lsr	x8, x25, #24
100ac8484:     	strb	w8, [x19, #0x3eb]
100ac8488:     	lsr	x8, x25, #32
100ac848c:     	strb	w8, [x19, #0x3ec]
100ac8490:     	lsr	x8, x25, #40
100ac8494:     	strb	w8, [x19, #0x3ed]
100ac8498:     	lsr	x8, x25, #48
100ac849c:     	strb	w8, [x19, #0x3ee]
100ac84a0:     	lsr	x8, x25, #56
100ac84a4:     	strb	w8, [x19, #0x3ef]
100ac84a8:     	lsr	x8, x27, #8
100ac84ac:     	strb	w27, [x19, #0x3f0]
100ac84b0:     	lsr	x9, x27, #16
100ac84b4:     	strb	w8, [x19, #0x3f1]
100ac84b8:     	lsr	x8, x27, #24
100ac84bc:     	strb	w9, [x19, #0x3f2]
100ac84c0:     	lsr	x9, x27, #32
100ac84c4:     	strb	w8, [x19, #0x3f3]
100ac84c8:     	lsr	x8, x27, #40
100ac84cc:     	strb	w9, [x19, #0x3f4]
100ac84d0:     	ubfx	x2, x27, #48, #8
100ac84d4:     	strb	w8, [x19, #0x3f5]
100ac84d8:     	add	x1, x19, #0x3e8
100ac84dc:     	ldr	x0, [x19, #0xc0]
100ac84e0:     	bl	0x100bfb7c0 <_writev+0x100bfb7c0>
100ac84e4:     	mov	x20, x0
100ac84e8:     	mov	x0, x25
100ac84ec:     	mov	x1, x27
100ac84f0:     	bl	0x10003bf2c <__text+0x39394>
100ac84f4:     	str	x20, [x19, #0xc0]
100ac84f8:     	lsr	x8, x20, #32
100ac84fc:     	ldr	x23, [x19, #0xb0]
100ac8500:     	cbnz	x8, 0x100ac8f88 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4cf8>
100ac8504:     	ldr	x26, [x19, #0xa8]
100ac8508:     	b	0x100ac8654 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d43c4>
100ac850c:     	cmp	w26, #0x2
100ac8510:     	b.ne	0x100ac8614 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4384>
100ac8514:     	ldp	x23, x24, [x25, #0x10]
100ac8518:     	and	x20, x27, #0x3fffffffffffffff
100ac851c:     	bl	0x100bf43b0 <_writev+0x100bf43b0>
100ac8520:     	mov	x22, x0
100ac8524:     	ldr	x26, [x19, #0xa8]
100ac8528:     	cbz	x0, 0x100ac8540 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d42b0>
100ac852c:     	and	x20, x27, #0x3fffffffffffffff
100ac8530:     	bl	0x100bf43d4 <_writev+0x100bf43d4>
100ac8534:     	subs	x8, x23, x0
100ac8538:     	b.vs	0x100ac8fd4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4d44>
100ac853c:     	add	x22, x8, x22
100ac8540:     	cmp	x24, x23
100ac8544:     	b.vs	0x100ac8f90 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4d00>
100ac8548:     	and	x20, x27, #0x3fffffffffffffff
100ac854c:     	bl	0x100bf43c8 <_writev+0x100bf43c8>
100ac8550:     	ldp	x9, x8, [x25, #0x10]
100ac8554:     	subs	x2, x8, x9
100ac8558:     	ldr	x24, [x19, #0x90]
100ac855c:     	ldr	x23, [x19, #0xb0]
100ac8560:     	b.vs	0x100ac8f98 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4d08>
100ac8564:     	tbnz	x2, #0x3f, 0x100ac8fa0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4d10>
100ac8568:     	lsr	x8, x2, #32
100ac856c:     	cbnz	x8, 0x100ac8fa8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4d18>
100ac8570:     	ldr	x0, [x19, #0xc0]
100ac8574:     	mov	x1, x22
100ac8578:     	bl	0x100bfb7c0 <_writev+0x100bfb7c0>
100ac857c:     	mov	x20, x0
100ac8580:     	mov	x0, x25
100ac8584:     	mov	x1, x27
100ac8588:     	bl	0x10003bf2c <__text+0x39394>
100ac858c:     	str	x20, [x19, #0xc0]
100ac8590:     	lsr	x8, x20, #32
100ac8594:     	cbz	x8, 0x100ac8654 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d43c4>
100ac8598:     	b	0x100ac8fac <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4d1c>
100ac859c:     	sxtw	x23, w25
100ac85a0:     	cmp	x23, x25, asr #32
100ac85a4:     	b.gt	0x100ac8f84 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4cf4>
100ac85a8:     	and	x20, x27, #0x3fffffffffffffff
100ac85ac:     	bl	0x100bf43b0 <_writev+0x100bf43b0>
100ac85b0:     	mov	x22, x0
100ac85b4:     	cbz	x0, 0x100ac85cc <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d433c>
100ac85b8:     	and	x20, x27, #0x3fffffffffffffff
100ac85bc:     	bl	0x100bf43d4 <_writev+0x100bf43d4>
100ac85c0:     	subs	x8, x23, x0
100ac85c4:     	b.vs	0x100ac8fd8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4d48>
100ac85c8:     	add	x22, x8, x22
100ac85cc:     	and	x20, x27, #0x3fffffffffffffff
100ac85d0:     	bl	0x100bf43c8 <_writev+0x100bf43c8>
100ac85d4:     	ldp	x26, x23, [x19, #0xa8]
100ac85d8:     	lsr	x8, x25, #32
100ac85dc:     	subs	w2, w8, w25
100ac85e0:     	b.vs	0x100ac8f94 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4d04>
100ac85e4:     	tbnz	w2, #0x1f, 0x100ac8f9c <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4d0c>
100ac85e8:     	ldr	x0, [x19, #0xc0]
100ac85ec:     	mov	x1, x22
100ac85f0:     	bl	0x100bfb7c0 <_writev+0x100bfb7c0>
100ac85f4:     	mov	x20, x0
100ac85f8:     	mov	x0, x25
100ac85fc:     	mov	x1, x27
100ac8600:     	bl	0x10003bf2c <__text+0x39394>
100ac8604:     	str	x20, [x19, #0xc0]
100ac8608:     	lsr	x8, x20, #32
100ac860c:     	cbz	x8, 0x100ac8654 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d43c4>
100ac8610:     	b	0x100ac8fa4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4d14>
100ac8614:     	add	x8, x19, #0x3e8
100ac8618:     	stur	xzr, [x8, #0x6]
100ac861c:     	str	xzr, [x19, #0x3e8]
100ac8620:     	add	x1, x19, #0x3e8
100ac8624:     	ldr	x0, [x19, #0xc0]
100ac8628:     	mov	w2, #0x0                ; =0
100ac862c:     	bl	0x100bfb7c0 <_writev+0x100bfb7c0>
100ac8630:     	mov	x20, x0
100ac8634:     	mov	x0, x25
100ac8638:     	mov	x1, x27
100ac863c:     	bl	0x10003bf2c <__text+0x39394>
100ac8640:     	str	x20, [x19, #0xc0]
100ac8644:     	lsr	x8, x20, #32
100ac8648:     	ldp	x26, x23, [x19, #0xa8]
100ac864c:     	ldr	x24, [x19, #0x90]
100ac8650:     	cbnz	x8, 0x100ac8f8c <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4cfc>
100ac8654:     	ldr	x25, [x19, #0xc8]
100ac8658:     	ldr	x27, [x19, #0x38]
100ac865c:     	ldr	x9, [x19, #0x60]
100ac8660:     	adds	x9, x9, x28
100ac8664:     	b.vs	0x100ac8f6c <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4cdc>
100ac8668:     	cmp	x9, x27
100ac866c:     	b.lt	0x100ac7fa8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3d18>
100ac8670:     	b	0x100ac8690 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4400>
100ac8674:     	mov	x0, #0x0                ; =0
100ac8678:     	mov	x1, #-0x4000000000000000 ; =-4611686018427387904
100ac867c:     	ldr	x2, [x19, #0xa0]
100ac8680:     	ldp	x21, x3, [x19, #0x48]
100ac8684:     	bl	0x100ac9480 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d51f0>
100ac8688:     	str	x21, [x19, #0x48]
100ac868c:     	cbnz	x21, 0x100ac8f58 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4cc8>
100ac8690:     	ldr	x8, [x19, #0x70]
100ac8694:     	ldr	x9, [x19, #0x8]
100ac8698:     	subs	x22, x9, x8
100ac869c:     	b.lo	0x100ac8fdc <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4d4c>
100ac86a0:     	add	x8, x19, #0x7e0
100ac86a4:     	add	x20, x19, #0xa90
100ac86a8:     	bl	0x100adaf98 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8e6d08>
100ac86ac:     	add	x8, x19, #0x808
100ac86b0:     	add	x0, x19, #0x7e0
100ac86b4:     	mov	x1, x22
100ac86b8:     	bl	0x100adc1b8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8e7f28>
100ac86bc:     	mov	w8, #-0x1               ; =-1
100ac86c0:     	cmp	x22, x8
100ac86c4:     	csel	x20, x22, x8, lo
100ac86c8:     	add	x0, x19, #0x5e0
100ac86cc:     	add	x1, x19, #0x3e8
100ac86d0:     	bl	0x100abcdd8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c8b48>
100ac86d4:     	add	x8, x19, #0x830
100ac86d8:     	add	x0, x19, #0xa90
100ac86dc:     	add	x1, x19, #0x808
100ac86e0:     	mov	x2, x20
100ac86e4:     	bl	0x100ade824 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8ea594>
100ac86e8:     	add	x20, x19, #0x830
100ac86ec:     	bl	0x100ad7750 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8e34c0>
100ac86f0:     	mov	x22, x0
100ac86f4:     	mov	x24, x1
100ac86f8:     	add	x20, x19, #0x6e0
100ac86fc:     	bl	0x100bf4a64 <_writev+0x100bf4a64>
100ac8700:     	add	x0, x19, #0x5e0
100ac8704:     	bl	0x100abce14 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c8b84>
100ac8708:     	add	x0, x19, #0x4e0
100ac870c:     	adrp	x1, 0x100ff8000 <_writev+0x100ff8000>
100ac8710:     	add	x1, x1, #0x490
100ac8714:     	adrp	x2, 0x100c94000 <_writev+0x100c94000>
100ac8718:     	add	x2, x2, #0x450
100ac871c:     	bl	0x1000fb4c4 <__text+0xf892c>
100ac8720:     	mov	x0, x22
100ac8724:     	mov	x1, x24
100ac8728:     	bl	0x10003bf2c <__text+0x39394>
100ac872c:     	add	x0, x19, #0x830
100ac8730:     	bl	0x100abce14 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c8b84>
100ac8734:     	add	x8, x19, #0x3e8
100ac8738:     	mov	x20, x23
100ac873c:     	bl	0x100bf9d98 <_writev+0x100bf9d98>
100ac8740:     	add	x9, x19, #0x3e8
100ac8744:     	ldp	q0, q1, [x9, #0xc0]
100ac8748:     	str	q0, [x19, #0x5a0]
100ac874c:     	str	q1, [x19, #0x5b0]
100ac8750:     	ldr	q0, [x9, #0xe0]
100ac8754:     	str	q0, [x19, #0x5c0]
100ac8758:     	ldr	x8, [x19, #0x4d8]
100ac875c:     	str	x8, [x19, #0x5d0]
100ac8760:     	ldp	q0, q1, [x9, #0x80]
100ac8764:     	str	q0, [x19, #0x560]
100ac8768:     	str	q1, [x19, #0x570]
100ac876c:     	ldp	q0, q1, [x9, #0xa0]
100ac8770:     	str	q0, [x19, #0x580]
100ac8774:     	str	q1, [x19, #0x590]
100ac8778:     	ldp	q0, q1, [x9, #0x40]
100ac877c:     	str	q0, [x19, #0x520]
100ac8780:     	str	q1, [x19, #0x530]
100ac8784:     	ldp	q0, q1, [x9, #0x60]
100ac8788:     	str	q0, [x19, #0x540]
100ac878c:     	str	q1, [x19, #0x550]
100ac8790:     	ldp	q0, q1, [x9]
100ac8794:     	str	q0, [x19, #0x4e0]
100ac8798:     	str	q1, [x19, #0x4f0]
100ac879c:     	ldp	q0, q1, [x9, #0x20]
100ac87a0:     	str	q0, [x19, #0x500]
100ac87a4:     	str	q1, [x19, #0x510]
100ac87a8:     	ldr	q0, [x19, #0x5a0]
100ac87ac:     	ldr	q1, [x19, #0x5b0]
100ac87b0:     	str	q0, [x19, #0x6a0]
100ac87b4:     	str	q1, [x19, #0x6b0]
100ac87b8:     	ldr	q0, [x19, #0x5c0]
100ac87bc:     	str	q0, [x19, #0x6c0]
100ac87c0:     	ldr	x8, [x19, #0x5d0]
100ac87c4:     	str	x8, [x19, #0x6d0]
100ac87c8:     	ldr	q0, [x19, #0x560]
100ac87cc:     	ldr	q1, [x19, #0x570]
100ac87d0:     	str	q0, [x19, #0x660]
100ac87d4:     	str	q1, [x19, #0x670]
100ac87d8:     	ldr	q0, [x19, #0x580]
100ac87dc:     	ldr	q1, [x19, #0x590]
100ac87e0:     	str	q0, [x19, #0x680]
100ac87e4:     	str	q1, [x19, #0x690]
100ac87e8:     	ldr	q0, [x19, #0x520]
100ac87ec:     	ldr	q1, [x19, #0x530]
100ac87f0:     	str	q0, [x19, #0x620]
100ac87f4:     	str	q1, [x19, #0x630]
100ac87f8:     	ldr	q0, [x19, #0x540]
100ac87fc:     	ldr	q1, [x19, #0x550]
100ac8800:     	str	q0, [x19, #0x640]
100ac8804:     	str	q1, [x19, #0x650]
100ac8808:     	ldr	q0, [x19, #0x4e0]
100ac880c:     	ldr	q1, [x19, #0x4f0]
100ac8810:     	str	q0, [x19, #0x5e0]
100ac8814:     	str	q1, [x19, #0x5f0]
100ac8818:     	ldr	q0, [x19, #0x500]
100ac881c:     	ldr	q1, [x19, #0x510]
100ac8820:     	str	q0, [x19, #0x600]
100ac8824:     	str	q1, [x19, #0x610]
100ac8828:     	add	x0, x19, #0x4e0
100ac882c:     	bl	0x100aca508 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d6278>
100ac8830:     	cmp	w0, #0x1
100ac8834:     	ldr	x24, [x19, #0xb8]
100ac8838:     	ldp	x28, x27, [x19, #0x78]
100ac883c:     	b.ne	0x100ac79a4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d3714>
100ac8840:     	b	0x100ac7770 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d34e0>
100ac8844:     	adrp	x0, 0x100ff8000 <_writev+0x100ff8000>
100ac8848:     	add	x0, x0, #0x630
100ac884c:     	adrp	x1, 0x100adc000 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8e7d70>
100ac8850:     	add	x1, x1, #0xca4
100ac8854:     	bl	0x100bfc99c <_writev+0x100bfc99c>
100ac8858:     	b	0x100ac7a80 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d37f0>
100ac885c:     	adrp	x0, 0x100ff8000 <_writev+0x100ff8000>
100ac8860:     	add	x0, x0, #0x630
100ac8864:     	adrp	x1, 0x100adc000 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8e7d70>
100ac8868:     	add	x1, x1, #0xca4
100ac886c:     	bl	0x100bfc99c <_writev+0x100bfc99c>
100ac8870:     	b	0x100ac7b58 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d38c8>
100ac8874:     	bl	0x100ab8c74 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c49e4>
100ac8878:     	mov	x1, x0
100ac887c:     	adrp	x0, 0x100f31000 <_writev+0x100f31000>
100ac8880:     	add	x0, x0, #0x130
100ac8884:     	mov	x2, #0x0                ; =0
100ac8888:     	mov	w3, #0x0                ; =0
100ac888c:     	bl	0x100bfc504 <_writev+0x100bfc504>
100ac8890:     	mov	x20, x23
100ac8894:     	mov	x23, x0
100ac8898:     	mov	w8, #0x1                ; =1
100ac889c:     	strb	w8, [x1]
100ac88a0:     	mov	x21, x0
100ac88a4:     	bl	0x100bfcc3c <_writev+0x100bfcc3c>
100ac88a8:     	ldr	x0, [x19, #0x6e0]
100ac88ac:     	ldr	x1, [x19, #0x6e8]
100ac88b0:     	bl	0x10003bf2c <__text+0x39394>
100ac88b4:     	ldr	x22, [x19, #0x20]
100ac88b8:     	mov	x0, x22
100ac88bc:     	bl	0x100ac9380 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d50f0>
100ac88c0:     	mov	x0, x20
100ac88c4:     	bl	0x100bfc9c0 <_writev+0x100bfc9c0>
100ac88c8:     	adrp	x1, 0x100ff8000 <_writev+0x100ff8000>
100ac88cc:     	add	x1, x1, #0x468
100ac88d0:     	adrp	x2, 0x100c94000 <_writev+0x100c94000>
100ac88d4:     	add	x2, x2, #0x440
100ac88d8:     	mov	x0, x22
100ac88dc:     	b	0x100ac8b04 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4874>
100ac88e0:     	cmp	w8, #0x2
100ac88e4:     	b.ne	0x100ac8a90 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4800>
100ac88e8:     	ldp	x23, x26, [x28, #0x10]
100ac88ec:     	and	x20, x22, #0x3fffffffffffffff
100ac88f0:     	bl	0x100bf43b0 <_writev+0x100bf43b0>
100ac88f4:     	mov	x27, x0
100ac88f8:     	cbz	x0, 0x100ac8910 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4680>
100ac88fc:     	and	x20, x22, #0x3fffffffffffffff
100ac8900:     	bl	0x100bf43d4 <_writev+0x100bf43d4>
100ac8904:     	subs	x8, x23, x0
100ac8908:     	b.vs	0x100ac8ff0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4d60>
100ac890c:     	add	x27, x8, x27
100ac8910:     	subs	x23, x26, x23
100ac8914:     	b.vs	0x100ac8fec <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4d5c>
100ac8918:     	and	x20, x22, #0x3fffffffffffffff
100ac891c:     	bl	0x100bf43c8 <_writev+0x100bf43c8>
100ac8920:     	cbz	x27, 0x100ac8a90 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4800>
100ac8924:     	cmp	x0, x23
100ac8928:     	csel	x8, x0, x23, lt
100ac892c:     	cbz	x8, 0x100ac8a90 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4800>
100ac8930:     	ldp	x9, x8, [x28, #0x10]
100ac8934:     	subs	x2, x8, x9
100ac8938:     	b.vc	0x100ac899c <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d470c>
100ac893c:     	brk	#0x1
100ac8940:     	sxtw	x26, w28
100ac8944:     	asr	x8, x28, #32
100ac8948:     	subs	x23, x8, x26
100ac894c:     	b.lt	0x100ac8fe8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4d58>
100ac8950:     	and	x20, x22, #0x3fffffffffffffff
100ac8954:     	bl	0x100bf43b0 <_writev+0x100bf43b0>
100ac8958:     	cbz	x0, 0x100ac8a88 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d47f8>
100ac895c:     	mov	x27, x0
100ac8960:     	and	x20, x22, #0x3fffffffffffffff
100ac8964:     	bl	0x100bf43d4 <_writev+0x100bf43d4>
100ac8968:     	subs	x8, x26, x0
100ac896c:     	b.vs	0x100ac8ff4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4d64>
100ac8970:     	add	x27, x8, x27
100ac8974:     	and	x20, x22, #0x3fffffffffffffff
100ac8978:     	bl	0x100bf43c8 <_writev+0x100bf43c8>
100ac897c:     	cbz	x27, 0x100ac8a90 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4800>
100ac8980:     	cmp	x0, x23
100ac8984:     	csel	x8, x0, x23, lt
100ac8988:     	cbz	x8, 0x100ac8a90 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4800>
100ac898c:     	lsr	x8, x28, #32
100ac8990:     	subs	w8, w8, w28
100ac8994:     	b.vs	0x100ac8ff8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4d68>
100ac8998:     	sxtw	x2, w8
100ac899c:     	mov	x0, x27
100ac89a0:     	mov	w1, #0x1                ; =1
100ac89a4:     	mov	x3, x25
100ac89a8:     	bl	0x100bfbad8 <_writev+0x100bfbad8>
100ac89ac:     	b	0x100ac8a90 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4800>
100ac89b0:     	mov	x0, x25
100ac89b4:     	mov	x1, #-0x1               ; =-1
100ac89b8:     	mov	x2, #-0x1               ; =-1
100ac89bc:     	bl	0x100bfca14 <_writev+0x100bfca14>
100ac89c0:     	bl	0x100abcb78 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c88e8>
100ac89c4:     	mov	x1, x0
100ac89c8:     	adrp	x0, 0x100f31000 <_writev+0x100f31000>
100ac89cc:     	add	x0, x0, #0x588
100ac89d0:     	mov	x2, #0x0                ; =0
100ac89d4:     	mov	w3, #0x0                ; =0
100ac89d8:     	bl	0x100bfc504 <_writev+0x100bfc504>
100ac89dc:     	mov	x23, x0
100ac89e0:     	strb	wzr, [x1]
100ac89e4:     	mov	x21, x0
100ac89e8:     	bl	0x100bfcc3c <_writev+0x100bfcc3c>
100ac89ec:     	b	0x100ac8a54 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d47c4>
100ac89f0:     	bl	0x100abcb78 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c88e8>
100ac89f4:     	mov	x1, x0
100ac89f8:     	adrp	x0, 0x100f31000 <_writev+0x100f31000>
100ac89fc:     	add	x0, x0, #0x588
100ac8a00:     	mov	x2, #0x0                ; =0
100ac8a04:     	mov	w3, #0x0                ; =0
100ac8a08:     	bl	0x100bfc504 <_writev+0x100bfc504>
100ac8a0c:     	mov	x23, x0
100ac8a10:     	mov	w8, #0x1                ; =1
100ac8a14:     	b	0x100ac8a3c <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d47ac>
100ac8a18:     	bl	0x100ab8c74 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c49e4>
100ac8a1c:     	mov	x1, x0
100ac8a20:     	adrp	x0, 0x100f31000 <_writev+0x100f31000>
100ac8a24:     	add	x0, x0, #0x130
100ac8a28:     	mov	x2, #0x0                ; =0
100ac8a2c:     	mov	w3, #0x0                ; =0
100ac8a30:     	bl	0x100bfc504 <_writev+0x100bfc504>
100ac8a34:     	mov	x23, x0
100ac8a38:     	mov	w8, #0x5                ; =5
100ac8a3c:     	strb	w8, [x1]
100ac8a40:     	mov	x21, x0
100ac8a44:     	bl	0x100bfcc3c <_writev+0x100bfcc3c>
100ac8a48:     	mov	x0, x25
100ac8a4c:     	mov	x1, x27
100ac8a50:     	bl	0x10003bf2c <__text+0x39394>
100ac8a54:     	adrp	x1, 0x100ff8000 <_writev+0x100ff8000>
100ac8a58:     	add	x1, x1, #0x490
100ac8a5c:     	adrp	x2, 0x100c94000 <_writev+0x100c94000>
100ac8a60:     	add	x2, x2, #0x450
100ac8a64:     	add	x0, x19, #0x4e0
100ac8a68:     	bl	0x1000fb4c4 <__text+0xf892c>
100ac8a6c:     	ldr	x0, [x19, #0xb0]
100ac8a70:     	bl	0x100bfc9c0 <_writev+0x100bfc9c0>
100ac8a74:     	add	x0, x19, #0x5e0
100ac8a78:     	bl	0x100abce14 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c8b84>
100ac8a7c:     	ldr	x0, [x19, #0x6e0]
100ac8a80:     	ldr	x1, [x19, #0x6e8]
100ac8a84:     	b	0x100ac8ad8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4848>
100ac8a88:     	and	x20, x22, #0x3fffffffffffffff
100ac8a8c:     	bl	0x100bf43c8 <_writev+0x100bf43c8>
100ac8a90:     	mov	x0, x25
100ac8a94:     	bl	0x100bfb988 <_writev+0x100bfb988>
100ac8a98:     	cmp	w0, #0x1
100ac8a9c:     	b.lt	0x100ac8b44 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d48b4>
100ac8aa0:     	bl	0x100abcb78 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c88e8>
100ac8aa4:     	mov	x1, x0
100ac8aa8:     	adrp	x0, 0x100f31000 <_writev+0x100f31000>
100ac8aac:     	add	x0, x0, #0x588
100ac8ab0:     	mov	x2, #0x0                ; =0
100ac8ab4:     	mov	w3, #0x0                ; =0
100ac8ab8:     	bl	0x100bfc504 <_writev+0x100bfc504>
100ac8abc:     	mov	x23, x0
100ac8ac0:     	mov	w8, #0x1                ; =1
100ac8ac4:     	strb	w8, [x1]
100ac8ac8:     	mov	x21, x0
100ac8acc:     	bl	0x100bfcc3c <_writev+0x100bfcc3c>
100ac8ad0:     	mov	x0, x28
100ac8ad4:     	mov	x1, x22
100ac8ad8:     	bl	0x10003bf2c <__text+0x39394>
100ac8adc:     	ldr	x20, [x19, #0x20]
100ac8ae0:     	mov	x0, x20
100ac8ae4:     	bl	0x100ac9380 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d50f0>
100ac8ae8:     	ldr	x0, [x19, #0x50]
100ac8aec:     	bl	0x100bfc9c0 <_writev+0x100bfc9c0>
100ac8af0:     	adrp	x1, 0x100ff8000 <_writev+0x100ff8000>
100ac8af4:     	add	x1, x1, #0x468
100ac8af8:     	adrp	x2, 0x100c94000 <_writev+0x100c94000>
100ac8afc:     	add	x2, x2, #0x440
100ac8b00:     	mov	x0, x20
100ac8b04:     	bl	0x1000fb4c4 <__text+0xf892c>
100ac8b08:     	ldur	x8, [x29, #-0x68]
100ac8b0c:     	adrp	x9, 0x100ea8000 <_writev+0x100ea8000>
100ac8b10:     	ldr	x9, [x9, #0x2f0]
100ac8b14:     	ldr	x9, [x9]
100ac8b18:     	cmp	x9, x8
100ac8b1c:     	b.ne	0x100ac8ffc <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4d6c>
100ac8b20:     	mov	x21, x23
100ac8b24:     	sub	sp, x29, #0x50
100ac8b28:     	ldp	x29, x30, [sp, #0x50]
100ac8b2c:     	ldp	x20, x19, [sp, #0x40]
100ac8b30:     	ldp	x23, x22, [sp, #0x30]
100ac8b34:     	ldp	x25, x24, [sp, #0x20]
100ac8b38:     	ldp	x27, x26, [sp, #0x10]
100ac8b3c:     	ldr	x28, [sp], #0x60
100ac8b40:     	ret
100ac8b44:     	ldr	x20, [x19, #0x50]
100ac8b48:     	ldr	x8, [x19, #0x88]
100ac8b4c:     	ldr	x0, [x20, x8]
100ac8b50:     	bl	0x100bfba78 <_writev+0x100bfba78>
100ac8b54:     	tbnz	x0, #0x3f, 0x100ac8cfc <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4a6c>
100ac8b58:     	str	x28, [x19, #0xd0]
100ac8b5c:     	adrp	x8, 0x101058000 <_writev+0x101058000>
100ac8b60:     	add	x8, x8, #0x2e0
100ac8b64:     	ldr	x8, [x8]
100ac8b68:     	ldr	x25, [x19, #0x68]
100ac8b6c:     	add	x9, x25, x8
100ac8b70:     	ldp	q0, q1, [x9]
100ac8b74:     	stp	q0, q1, [x19, #0x2b0]
100ac8b78:     	stp	x9, x0, [x19, #0xc0]
100ac8b7c:     	ldr	x9, [x9, #0x20]
100ac8b80:     	str	x9, [x19, #0x2d0]
100ac8b84:     	add	x26, x20, x8
100ac8b88:     	ldp	q3, q2, [x26]
100ac8b8c:     	ldr	x8, [x26, #0x20]
100ac8b90:     	str	x8, [x19, #0x300]
100ac8b94:     	stp	q3, q2, [x19, #0x2e0]
100ac8b98:     	str	x9, [x26, #0x20]
100ac8b9c:     	stp	q0, q1, [x26]
100ac8ba0:     	add	x0, x19, #0x2b0
100ac8ba4:     	add	x1, x19, #0x3e8
100ac8ba8:     	bl	0x100abcbb8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c8928>
100ac8bac:     	add	x0, x19, #0x2e0
100ac8bb0:     	bl	0x100abcbf4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c8964>
100ac8bb4:     	adrp	x8, 0x101058000 <_writev+0x101058000>
100ac8bb8:     	add	x8, x8, #0x2d8
100ac8bbc:     	ldr	x8, [x8]
100ac8bc0:     	add	x28, x25, x8
100ac8bc4:     	ldp	q0, q1, [x28]
100ac8bc8:     	stp	q0, q1, [x19, #0x310]
100ac8bcc:     	ldr	w9, [x28, #0x60]
100ac8bd0:     	str	w9, [x19, #0x370]
100ac8bd4:     	ldp	q1, q0, [x28, #0x30]
100ac8bd8:     	ldp	q4, q3, [x28, #0x40]
100ac8bdc:     	stp	q0, q3, [x19, #0x350]
100ac8be0:     	ldp	q0, q5, [x28, #0x20]
100ac8be4:     	ldp	q2, q3, [x28]
100ac8be8:     	ldr	q6, [x28, #0x20]
100ac8bec:     	stp	q0, q5, [x19, #0x330]
100ac8bf0:     	add	x23, x20, x8
100ac8bf4:     	ldp	q5, q0, [x23, #0x40]
100ac8bf8:     	ldr	q7, [x23, #0x30]
100ac8bfc:     	ldr	w8, [x23, #0x60]
100ac8c00:     	str	w8, [x19, #0x3e0]
100ac8c04:     	stp	q7, q5, [x19, #0x3b0]
100ac8c08:     	str	q0, [x19, #0x3d0]
100ac8c0c:     	ldp	q5, q0, [x23]
100ac8c10:     	ldr	q7, [x23, #0x20]
100ac8c14:     	stp	q0, q7, [x19, #0x390]
100ac8c18:     	str	q5, [x19, #0x380]
100ac8c1c:     	ldr	q0, [x28, #0x50]
100ac8c20:     	ldr	w8, [x28, #0x60]
100ac8c24:     	str	w8, [x23, #0x60]
100ac8c28:     	stp	q4, q0, [x23, #0x40]
100ac8c2c:     	stp	q6, q1, [x23, #0x20]
100ac8c30:     	stp	q2, q3, [x23]
100ac8c34:     	adrp	x25, 0x100ff8000 <_writev+0x100ff8000>
100ac8c38:     	add	x25, x25, #0x2d0
100ac8c3c:     	adrp	x27, 0x100c94000 <_writev+0x100c94000>
100ac8c40:     	add	x27, x27, #0x208
100ac8c44:     	add	x0, x19, #0x310
100ac8c48:     	add	x1, x19, #0x3e8
100ac8c4c:     	mov	x2, x25
100ac8c50:     	mov	x3, x27
100ac8c54:     	bl	0x1000f8cac <__text+0xf6114>
100ac8c58:     	add	x0, x19, #0x380
100ac8c5c:     	mov	x1, x25
100ac8c60:     	mov	x2, x27
100ac8c64:     	bl	0x1000fb4c4 <__text+0xf892c>
100ac8c68:     	ldr	x9, [x19, #0xd8]
100ac8c6c:     	ldp	q0, q1, [x9, #0x40]
100ac8c70:     	str	q0, [x19, #0xa60]
100ac8c74:     	str	q1, [x19, #0xa70]
100ac8c78:     	ldr	x8, [x9, #0x60]
100ac8c7c:     	str	x8, [x19, #0xa80]
100ac8c80:     	ldp	q0, q1, [x9]
100ac8c84:     	str	q0, [x19, #0xa20]
100ac8c88:     	str	q1, [x19, #0xa30]
100ac8c8c:     	ldp	q1, q0, [x9, #0x20]
100ac8c90:     	str	q0, [x19, #0xa50]
100ac8c94:     	str	q1, [x19, #0xa40]
100ac8c98:     	add	x8, x19, #0x3e8
100ac8c9c:     	add	x0, x19, #0xa20
100ac8ca0:     	mov	x1, x24
100ac8ca4:     	ldr	x2, [x19, #0xc8]
100ac8ca8:     	mov	w3, #0x0                ; =0
100ac8cac:     	ldr	x21, [x19, #0x48]
100ac8cb0:     	bl	0x100abbee8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c7c58>
100ac8cb4:     	mov	x24, x21
100ac8cb8:     	cbz	x21, 0x100ac8d38 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4aa8>
100ac8cbc:     	ldr	x0, [x19, #0xd0]
100ac8cc0:     	mov	x1, x22
100ac8cc4:     	bl	0x10003bf2c <__text+0x39394>
100ac8cc8:     	ldr	x22, [x19, #0x20]
100ac8ccc:     	mov	x0, x22
100ac8cd0:     	bl	0x100ac9380 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d50f0>
100ac8cd4:     	mov	x0, x20
100ac8cd8:     	bl	0x100bfc9c0 <_writev+0x100bfc9c0>
100ac8cdc:     	adrp	x1, 0x100ff8000 <_writev+0x100ff8000>
100ac8ce0:     	add	x1, x1, #0x468
100ac8ce4:     	adrp	x2, 0x100c94000 <_writev+0x100c94000>
100ac8ce8:     	add	x2, x2, #0x440
100ac8cec:     	mov	x0, x22
100ac8cf0:     	bl	0x1000fb4c4 <__text+0xf892c>
100ac8cf4:     	mov	x23, x24
100ac8cf8:     	b	0x100ac8b08 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4878>
100ac8cfc:     	bl	0x100ab8c74 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c49e4>
100ac8d00:     	mov	x1, x0
100ac8d04:     	adrp	x0, 0x100f31000 <_writev+0x100f31000>
100ac8d08:     	add	x0, x0, #0x130
100ac8d0c:     	mov	x2, #0x0                ; =0
100ac8d10:     	mov	w3, #0x0                ; =0
100ac8d14:     	bl	0x100bfc504 <_writev+0x100bfc504>
100ac8d18:     	mov	x23, x0
100ac8d1c:     	mov	w8, #0x1                ; =1
100ac8d20:     	strb	w8, [x1]
100ac8d24:     	mov	x21, x0
100ac8d28:     	bl	0x100bfcc3c <_writev+0x100bfcc3c>
100ac8d2c:     	mov	x0, x28
100ac8d30:     	mov	x1, x22
100ac8d34:     	b	0x100ac88b0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d4620>
100ac8d38:     	ldr	w8, [x19, #0x3e8]
100ac8d3c:     	add	x27, x19, #0x3e8
100ac8d40:     	ldur	d0, [x27, #0x4]
100ac8d44:     	ldur	d1, [x27, #0xc]
100ac8d48:     	ldrh	w9, [x19, #0x3fc]
100ac8d4c:     	ldur	q2, [x27, #0x18]
100ac8d50:     	ldur	q3, [x27, #0x28]
100ac8d54:     	ldur	q4, [x27, #0x38]
100ac8d58:     	ldur	q5, [x27, #0x48]
100ac8d5c:     	ldur	q6, [x27, #0x58]
100ac8d60:     	ldur	q7, [x27, #0x68]
100ac8d64:     	ldur	q16, [x27, #0x78]
100ac8d68:     	ldr	w10, [x19, #0x470]
100ac8d6c:     	str	w8, [x19, #0x3e8]
100ac8d70:     	stur	d0, [x27, #0x4]
100ac8d74:     	stur	d1, [x27, #0xc]
100ac8d78:     	strh	w9, [x19, #0x3fc]
100ac8d7c:     	stur	q2, [x27, #0x18]
100ac8d80:     	stur	q3, [x27, #0x28]
100ac8d84:     	stur	q4, [x27, #0x38]
100ac8d88:     	stur	q5, [x27, #0x48]
100ac8d8c:     	stur	q6, [x27, #0x58]
100ac8d90:     	stur	q7, [x27, #0x68]
100ac8d94:     	stur	q16, [x27, #0x78]
100ac8d98:     	str	w10, [x19, #0x470]
100ac8d9c:     	ldr	x8, [x26, #0x20]
100ac8da0:     	ldp	q1, q0, [x26]
100ac8da4:     	stp	q1, q0, [x19, #0x170]
100ac8da8:     	str	x8, [x19, #0x190]
100ac8dac:     	ldp	q0, q1, [x27]
100ac8db0:     	ldr	x8, [x19, #0x408]
100ac8db4:     	str	x8, [x26, #0x20]
100ac8db8:     	stp	q0, q1, [x26]
100ac8dbc:     	adrp	x25, 0x100ff8000 <_writev+0x100ff8000>
100ac8dc0:     	add	x25, x25, #0x488
100ac8dc4:     	adrp	x26, 0x100c94000 <_writev+0x100c94000>
100ac8dc8:     	add	x26, x26, #0x350
100ac8dcc:     	add	x0, x19, #0x3e8
100ac8dd0:     	add	x1, x19, #0xe0
100ac8dd4:     	mov	x2, x25
100ac8dd8:     	mov	x3, x26
100ac8ddc:     	bl	0x1000f8cac <__text+0xf6114>
100ac8de0:     	add	x0, x19, #0x170
100ac8de4:     	bl	0x100abcbf4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c8964>
100ac8de8:     	ldp	q0, q1, [x23]
100ac8dec:     	ldr	q2, [x23, #0x20]
100ac8df0:     	stp	q1, q2, [x19, #0x1b0]
100ac8df4:     	str	q0, [x19, #0x1a0]
100ac8df8:     	ldp	q0, q1, [x23, #0x30]
100ac8dfc:     	ldr	q2, [x23, #0x50]
100ac8e00:     	ldr	w8, [x23, #0x60]
100ac8e04:     	str	w8, [x19, #0x200]
100ac8e08:     	stp	q1, q2, [x19, #0x1e0]
100ac8e0c:     	str	q0, [x19, #0x1d0]
100ac8e10:     	ldur	q0, [x27, #0x68]
100ac8e14:     	ldur	q1, [x27, #0x78]
100ac8e18:     	ldr	w8, [x19, #0x470]
100ac8e1c:     	ldur	q2, [x27, #0x58]
100ac8e20:     	str	w8, [x23, #0x60]
100ac8e24:     	stp	q0, q1, [x23, #0x40]
100ac8e28:     	str	q2, [x23, #0x30]
100ac8e2c:     	ldur	q0, [x27, #0x48]
100ac8e30:     	ldur	q1, [x27, #0x38]
100ac8e34:     	ldur	q2, [x27, #0x28]
100ac8e38:     	stp	q2, q1, [x23]
100ac8e3c:     	str	q0, [x23, #0x20]
100ac8e40:     	adrp	x1, 0x100ff8000 <_writev+0x100ff8000>
100ac8e44:     	add	x1, x1, #0x2d0
100ac8e48:     	adrp	x23, 0x100c94000 <_writev+0x100c94000>
100ac8e4c:     	add	x23, x23, #0x208
100ac8e50:     	add	x0, x19, #0x1a0
100ac8e54:     	mov	x2, x23
100ac8e58:     	bl	0x1000fb4c4 <__text+0xf892c>
100ac8e5c:     	ldr	x9, [x19, #0xc0]
100ac8e60:     	ldp	q0, q1, [x9]
100ac8e64:     	stp	q0, q1, [x19, #0x210]
100ac8e68:     	ldr	x8, [x9, #0x20]
100ac8e6c:     	str	x8, [x19, #0x230]
100ac8e70:     	ldp	q0, q1, [x27]
100ac8e74:     	stp	q0, q1, [x9]
100ac8e78:     	ldr	x8, [x19, #0x408]
100ac8e7c:     	str	x8, [x9, #0x20]
100ac8e80:     	add	x0, x19, #0x3e8
100ac8e84:     	add	x1, x19, #0xe0
100ac8e88:     	mov	x2, x25
100ac8e8c:     	mov	x25, x20
100ac8e90:     	mov	x3, x26
100ac8e94:     	bl	0x1000f8cac <__text+0xf6114>
100ac8e98:     	add	x0, x19, #0x210
100ac8e9c:     	bl	0x100abcbf4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c8964>
100ac8ea0:     	ldp	q0, q1, [x28, #0x40]
100ac8ea4:     	stp	q0, q1, [x19, #0x280]
100ac8ea8:     	ldr	w8, [x28, #0x60]
100ac8eac:     	str	w8, [x19, #0x2a0]
100ac8eb0:     	ldp	q0, q1, [x28]
100ac8eb4:     	stp	q0, q1, [x19, #0x240]
100ac8eb8:     	ldp	q1, q0, [x28, #0x20]
100ac8ebc:     	stp	q1, q0, [x19, #0x260]
100ac8ec0:     	ldur	q0, [x27, #0x28]
100ac8ec4:     	ldur	q1, [x27, #0x38]
100ac8ec8:     	stp	q0, q1, [x28]
100ac8ecc:     	ldur	q0, [x27, #0x48]
100ac8ed0:     	ldur	q1, [x27, #0x58]
100ac8ed4:     	ldur	q2, [x27, #0x68]
100ac8ed8:     	ldur	q3, [x27, #0x78]
100ac8edc:     	ldr	w8, [x19, #0x470]
100ac8ee0:     	str	w8, [x28, #0x60]
100ac8ee4:     	stp	q2, q3, [x28, #0x40]
100ac8ee8:     	stp	q0, q1, [x28, #0x20]
100ac8eec:     	add	x0, x19, #0x240
100ac8ef0:     	adrp	x1, 0x100ff8000 <_writev+0x100ff8000>
100ac8ef4:     	add	x1, x1, #0x2d0
100ac8ef8:     	mov	x2, x23
100ac8efc:     	bl	0x1000fb4c4 <__text+0xf892c>
100ac8f00:     	ldr	x8, [x19, #0x88]
100ac8f04:     	ldr	x0, [x20, x8]
100ac8f08:     	bl	0x100bfb994 <_writev+0x100bfb994>
100ac8f0c:     	mov	x0, x20
100ac8f10:     	ldr	x20, [x19, #0x68]
100ac8f14:     	mov	x21, x24
100ac8f18:     	bl	0x100ac9780 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d54f0>
100ac8f1c:     	mov	x23, x21
100ac8f20:     	ldr	x0, [x19, #0xd0]
100ac8f24:     	mov	x1, x22
100ac8f28:     	bl	0x10003bf2c <__text+0x39394>
100ac8f2c:     	adrp	x1, 0x100ff8000 <_writev+0x100ff8000>
100ac8f30:     	add	x1, x1, #0x488
100ac8f34:     	adrp	x2, 0x100c94000 <_writev+0x100c94000>
100ac8f38:     	add	x2, x2, #0x350
100ac8f3c:     	add	x0, x19, #0x3e8
100ac8f40:     	bl	0x1000fb4c4 <__text+0xf892c>
100ac8f44:     	ldr	x20, [x19, #0x20]
100ac8f48:     	mov	x0, x20
100ac8f4c:     	bl	0x100ac9380 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d50f0>
100ac8f50:     	mov	x0, x25
100ac8f54:     	b	0x100ac8aec <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d485c>
100ac8f58:     	ldr	x23, [x19, #0x48]
100ac8f5c:     	b	0x100ac8a54 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d47c4>
100ac8f60:     	brk	#0x1
100ac8f64:     	brk	#0x1
100ac8f68:     	brk	#0x1
100ac8f6c:     	brk	#0x1
100ac8f70:     	brk	#0x1
100ac8f74:     	brk	#0x1
100ac8f78:     	brk	#0x1
100ac8f7c:     	brk	#0x1
100ac8f80:     	brk	#0x1
100ac8f84:     	brk	#0x1
100ac8f88:     	brk	#0x1
100ac8f8c:     	brk	#0x1
100ac8f90:     	brk	#0x1
100ac8f94:     	brk	#0x1
100ac8f98:     	brk	#0x1
100ac8f9c:     	brk	#0x1
100ac8fa0:     	brk	#0x1
100ac8fa4:     	brk	#0x1
100ac8fa8:     	brk	#0x1
100ac8fac:     	brk	#0x1
100ac8fb0:     	brk	#0x1
100ac8fb4:     	brk	#0x1
100ac8fb8:     	brk	#0x1
100ac8fbc:     	brk	#0x1
100ac8fc0:     	brk	#0x1
100ac8fc4:     	brk	#0x1
100ac8fc8:     	brk	#0x1
100ac8fcc:     	brk	#0x1
100ac8fd0:     	brk	#0x1
100ac8fd4:     	brk	#0x1
100ac8fd8:     	brk	#0x1
100ac8fdc:     	brk	#0x1
100ac8fe0:     	brk	#0x1
100ac8fe4:     	brk	#0x1
100ac8fe8:     	brk	#0x1
100ac8fec:     	brk	#0x1
100ac8ff0:     	brk	#0x1
100ac8ff4:     	brk	#0x1
100ac8ff8:     	brk	#0x1
100ac8ffc:     	bl	0x100bfb5a4 <_writev+0x100bfb5a4>
