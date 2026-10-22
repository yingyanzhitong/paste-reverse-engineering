// Assembly fallback only; C pseudocode generation failed.
// Range: 0x100ac35f8 <= address < 0x100ac52c4
// Boundary: next Ghidra-discovered entry; not a proof of the complete semantic function body.

.local/targets/Paste.arm64:	file format mach-o arm64

Disassembly of section __TEXT,__text:

00000001001f4290 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs>:
100ac35f8:     	stp	d9, d8, [sp, #-0x70]!
100ac35fc:     	str	x28, [sp, #0x10]
100ac3600:     	stp	x27, x26, [sp, #0x20]
100ac3604:     	stp	x25, x24, [sp, #0x30]
100ac3608:     	stp	x23, x22, [sp, #0x40]
100ac360c:     	stp	x20, x19, [sp, #0x50]
100ac3610:     	stp	x29, x30, [sp, #0x60]
100ac3614:     	add	x29, sp, #0x60
100ac3618:     	sub	sp, sp, #0x4f0
100ac361c:     	mov	x19, sp
100ac3620:     	mov	x22, x21
100ac3624:     	str	x7, [x19, #0xd0]
100ac3628:     	mov	x23, x6
100ac362c:     	mov	x20, x5
100ac3630:     	str	x4, [x19, #0x90]
100ac3634:     	mov	x24, x3
100ac3638:     	mov	x26, x2
100ac363c:     	str	x1, [x19, #0xc0]
100ac3640:     	str	x0, [x19, #0xa0]
100ac3644:     	ldr	x28, [x29, #0x18]
100ac3648:     	adrp	x8, 0x100ea8000 <_writev+0x100ea8000>
100ac364c:     	ldr	x8, [x8, #0x2f0]
100ac3650:     	ldr	x8, [x8]
100ac3654:     	stur	x8, [x29, #-0x78]
100ac3658:     	mov	x0, #0x0                ; =0
100ac365c:     	bl	0x100bf4974 <_writev+0x100bf4974>
100ac3660:     	str	x0, [x19, #0xb8]
100ac3664:     	ldur	x27, [x0, #-0x8]
100ac3668:     	ldr	x8, [x27, #0x40]
100ac366c:     	mov	x9, sp
100ac3670:     	add	x8, x8, #0xf
100ac3674:     	and	x8, x8, #0xfffffffffffffff0
100ac3678:     	sub	x25, x9, x8
100ac367c:     	mov	sp, x25
100ac3680:     	adrp	x8, 0x101058000 <_writev+0x101058000>
100ac3684:     	add	x8, x8, #0x2f0
100ac3688:     	ldr	x8, [x8]
100ac368c:     	ldrb	w8, [x28, x8]
100ac3690:     	cmp	w8, #0x1
100ac3694:     	b.ne	0x100ac36cc <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cf43c>
100ac3698:     	bl	0x100ab8c74 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c49e4>
100ac369c:     	mov	x1, x0
100ac36a0:     	adrp	x0, 0x100f31000 <_writev+0x100f31000>
100ac36a4:     	add	x0, x0, #0x130
100ac36a8:     	mov	x2, #0x0                ; =0
100ac36ac:     	mov	w3, #0x0                ; =0
100ac36b0:     	bl	0x100bfc504 <_writev+0x100bfc504>
100ac36b4:     	mov	x26, x0
100ac36b8:     	mov	w8, #0x1                ; =1
100ac36bc:     	strb	w8, [x1]
100ac36c0:     	mov	x21, x0
100ac36c4:     	bl	0x100bfcc3c <_writev+0x100bfcc3c>
100ac36c8:     	b	0x100ac5170 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0ee0>
100ac36cc:     	str	w23, [x19, #0x50]
100ac36d0:     	str	w20, [x19, #0x34]
100ac36d4:     	add	x20, x19, #0x160
100ac36d8:     	ldr	x23, [x29, #0x10]
100ac36dc:     	cbz	x23, 0x100ac36f4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cf464>
100ac36e0:     	and	w8, w26, #0xff
100ac36e4:     	cmp	w8, #0x1
100ac36e8:     	csinc	x2, x24, xzr, ne
100ac36ec:     	mov	x0, x23
100ac36f0:     	bl	0x100c0e420 <_writev+0x100c0e420>
100ac36f4:     	str	x23, [x19, #0x40]
100ac36f8:     	str	x24, [x19, #0x80]
100ac36fc:     	adrp	x8, 0x101058000 <_writev+0x101058000>
100ac3700:     	add	x8, x8, #0x2e0
100ac3704:     	ldr	x8, [x8]
100ac3708:     	add	x8, x28, x8
100ac370c:     	ldp	q1, q0, [x8]
100ac3710:     	stp	q1, q0, [x20, #0x240]
100ac3714:     	str	x8, [x19, #0x78]
100ac3718:     	ldr	x8, [x8, #0x20]
100ac371c:     	str	x8, [x19, #0x3c0]
100ac3720:     	ldr	w23, [x19, #0x3b0]
100ac3724:     	adrp	x8, 0x101058000 <_writev+0x101058000>
100ac3728:     	add	x8, x8, #0x2d8
100ac372c:     	ldr	x8, [x8]
100ac3730:     	add	x24, x28, x8
100ac3734:     	ldp	q0, q1, [x24, #0x40]
100ac3738:     	stp	q0, q1, [x20, #0x1b0]
100ac373c:     	ldr	w8, [x24, #0x60]
100ac3740:     	str	w8, [x19, #0x330]
100ac3744:     	ldp	q0, q1, [x24]
100ac3748:     	stp	q0, q1, [x20, #0x170]
100ac374c:     	ldp	q1, q0, [x24, #0x20]
100ac3750:     	stp	q1, q0, [x20, #0x190]
100ac3754:     	ldr	x8, [x24, #0x48]
100ac3758:     	lsr	x8, x8, #60
100ac375c:     	cmp	x8, #0xf
100ac3760:     	b.hs	0x100ac376c <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cf4dc>
100ac3764:     	ldr	x23, [x24, #0x38]
100ac3768:     	tbnz	x23, #0x3f, 0x100ac4da8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0b18>
100ac376c:     	str	w26, [x19, #0x5c]
100ac3770:     	str	x22, [x19, #0x38]
100ac3774:     	adrp	x8, 0x101058000 <_writev+0x101058000>
100ac3778:     	add	x8, x8, #0x308
100ac377c:     	ldr	x22, [x8]
100ac3780:     	ldr	x26, [x28, x22]
100ac3784:     	add	x0, x19, #0x3a0
100ac3788:     	add	x1, x19, #0x190
100ac378c:     	bl	0x100abcbb8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c8928>
100ac3790:     	adrp	x2, 0x100ff8000 <_writev+0x100ff8000>
100ac3794:     	add	x2, x2, #0x2d0
100ac3798:     	adrp	x3, 0x100c94000 <_writev+0x100c94000>
100ac379c:     	add	x3, x3, #0x208
100ac37a0:     	add	x0, x19, #0x2d0
100ac37a4:     	add	x1, x19, #0x190
100ac37a8:     	bl	0x1000f8cac <__text+0xf6114>
100ac37ac:     	mov	x0, x26
100ac37b0:     	mov	x1, x23
100ac37b4:     	mov	w2, #0x0                ; =0
100ac37b8:     	bl	0x100bfba30 <_writev+0x100bfba30>
100ac37bc:     	ldr	x8, [x24, #0x48]
100ac37c0:     	lsr	x8, x8, #60
100ac37c4:     	cmp	x8, #0xf
100ac37c8:     	b.lo	0x100ac37d8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cf548>
100ac37cc:     	ldr	x8, [x19, #0x78]
100ac37d0:     	ldr	w20, [x8, #0xc]
100ac37d4:     	b	0x100ac37e0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cf550>
100ac37d8:     	ldr	x20, [x24, #0x30]
100ac37dc:     	tbnz	x20, #0x3f, 0x100ac4dac <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0b1c>
100ac37e0:     	str	x23, [x19, #0x60]
100ac37e4:     	str	x24, [x19, #0x28]
100ac37e8:     	ldr	x23, [x28, x22]
100ac37ec:     	mov	x0, x20
100ac37f0:     	mov	x1, #-0x1               ; =-1
100ac37f4:     	bl	0x100bfca08 <_writev+0x100bfca08>
100ac37f8:     	mov	x26, x0
100ac37fc:     	mov	w1, #0x1                ; =1
100ac3800:     	mov	x2, x20
100ac3804:     	mov	x3, x23
100ac3808:     	bl	0x100bfb9e8 <_writev+0x100bfb9e8>
100ac380c:     	mov	x24, x0
100ac3810:     	mov	x0, x23
100ac3814:     	bl	0x100bfb988 <_writev+0x100bfb988>
100ac3818:     	cmp	w0, #0x1
100ac381c:     	b.lt	0x100ac3880 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cf5f0>
100ac3820:     	mov	x0, x26
100ac3824:     	mov	x1, #-0x1               ; =-1
100ac3828:     	mov	x2, #-0x1               ; =-1
100ac382c:     	bl	0x100bfca14 <_writev+0x100bfca14>
100ac3830:     	bl	0x100abcb78 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c88e8>
100ac3834:     	mov	x1, x0
100ac3838:     	adrp	x0, 0x100f31000 <_writev+0x100f31000>
100ac383c:     	add	x0, x0, #0x588
100ac3840:     	mov	x2, #0x0                ; =0
100ac3844:     	mov	w3, #0x0                ; =0
100ac3848:     	bl	0x100bfc504 <_writev+0x100bfc504>
100ac384c:     	mov	x26, x0
100ac3850:     	strb	wzr, [x1]
100ac3854:     	mov	x21, x0
100ac3858:     	bl	0x100bfcc3c <_writev+0x100bfcc3c>
100ac385c:     	adrp	x1, 0x100ff8000 <_writev+0x100ff8000>
100ac3860:     	add	x1, x1, #0x2d0
100ac3864:     	adrp	x2, 0x100c94000 <_writev+0x100c94000>
100ac3868:     	add	x2, x2, #0x208
100ac386c:     	add	x0, x19, #0x2d0
100ac3870:     	bl	0x1000fb4c4 <__text+0xf892c>
100ac3874:     	add	x0, x19, #0x3a0
100ac3878:     	bl	0x100abcbf4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c8964>
100ac387c:     	b	0x100ac5170 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0ee0>
100ac3880:     	str	x20, [x19, #0x48]
100ac3884:     	adrp	x8, 0x10094a000 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x755d70>
100ac3888:     	add	x8, x8, #0x398
100ac388c:     	stp	x8, xzr, [x25]
100ac3890:     	adrp	x8, 0x100ea7000 <_writev+0x100ea7000>
100ac3894:     	ldr	x8, [x8, #0x208]
100ac3898:     	ldr	w1, [x8]
100ac389c:     	ldr	x8, [x27, #0x68]
100ac38a0:     	mov	x0, x25
100ac38a4:     	ldr	x2, [x19, #0xb8]
100ac38a8:     	blr	x8
100ac38ac:     	mov	x0, x26
100ac38b0:     	mov	x1, x24
100ac38b4:     	mov	x2, x25
100ac38b8:     	bl	0x100abfa10 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cb780>
100ac38bc:     	mov	x24, x0
100ac38c0:     	mov	x23, x1
100ac38c4:     	ldr	x0, [x28, x22]
100ac38c8:     	ldr	x1, [x19, #0x60]
100ac38cc:     	mov	w2, #0x0                ; =0
100ac38d0:     	bl	0x100bfba30 <_writev+0x100bfba30>
100ac38d4:     	str	x22, [x19, #0x20]
100ac38d8:     	ldr	x0, [x28, x22]
100ac38dc:     	bl	0x100bfba78 <_writev+0x100bfba78>
100ac38e0:     	tbnz	x0, #0x3f, 0x100ac395c <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cf6cc>
100ac38e4:     	mov	x22, x0
100ac38e8:     	ldr	x20, [x19, #0x90]
100ac38ec:     	bl	0x100ad5fe0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8e1d50>
100ac38f0:     	str	w0, [x19, #0x60]
100ac38f4:     	bl	0x100ad610c <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8e1e7c>
100ac38f8:     	str	w0, [x19, #0x14]
100ac38fc:     	ldr	x20, [x19, #0x80]
100ac3900:     	tbnz	x20, #0x3f, 0x100ac5200 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0f70>
100ac3904:     	str	x22, [x19, #0x8]
100ac3908:     	str	x24, [x19, #0xb8]
100ac390c:     	str	x23, [x19, #0x90]
100ac3910:     	ldr	x22, [x19, #0xc0]
100ac3914:     	mov	x0, x22
100ac3918:     	mov	w1, #0x2                ; =2
100ac391c:     	bl	0x100bfc5b8 <_writev+0x100bfc5b8>
100ac3920:     	ldr	x0, [x19, #0xa0]
100ac3924:     	mov	x1, x22
100ac3928:     	bl	0x100ac0904 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cc674>
100ac392c:     	mov	x24, x0
100ac3930:     	mov	x25, x1
100ac3934:     	mov	w23, #-0x1              ; =-1
100ac3938:     	cmp	x20, x23
100ac393c:     	b.hs	0x100ac39b8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cf728>
100ac3940:     	mov	w22, #0x0               ; =0
100ac3944:     	mov	w26, #0x0               ; =0
100ac3948:     	mov	x9, #0x0                ; =0
100ac394c:     	mov	x8, #0x0                ; =0
100ac3950:     	mov	w27, #0x14              ; =20
100ac3954:     	mov	x23, x20
100ac3958:     	b	0x100ac39d0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cf740>
100ac395c:     	bl	0x100ab8c74 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c49e4>
100ac3960:     	mov	x1, x0
100ac3964:     	adrp	x0, 0x100f31000 <_writev+0x100f31000>
100ac3968:     	add	x0, x0, #0x130
100ac396c:     	mov	x2, #0x0                ; =0
100ac3970:     	mov	w3, #0x0                ; =0
100ac3974:     	bl	0x100bfc504 <_writev+0x100bfc504>
100ac3978:     	mov	x26, x0
100ac397c:     	mov	w8, #0x1                ; =1
100ac3980:     	strb	w8, [x1]
100ac3984:     	mov	x21, x0
100ac3988:     	bl	0x100bfcc3c <_writev+0x100bfcc3c>
100ac398c:     	adrp	x1, 0x100ff8000 <_writev+0x100ff8000>
100ac3990:     	add	x1, x1, #0x2d0
100ac3994:     	adrp	x2, 0x100c94000 <_writev+0x100c94000>
100ac3998:     	add	x2, x2, #0x208
100ac399c:     	add	x0, x19, #0x2d0
100ac39a0:     	bl	0x1000fb4c4 <__text+0xf892c>
100ac39a4:     	add	x0, x19, #0x3a0
100ac39a8:     	bl	0x100abcbf4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c8964>
100ac39ac:     	mov	x0, x24
100ac39b0:     	mov	x1, x23
100ac39b4:     	b	0x100ac516c <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0edc>
100ac39b8:     	mov	w27, #0x2d              ; =45
100ac39bc:     	mov	w22, #0x14              ; =20
100ac39c0:     	mov	w26, #-0x1              ; =-1
100ac39c4:     	mov	w9, #0x1                ; =1
100ac39c8:     	movk	w9, #0x10, lsl #16
100ac39cc:     	mov	x8, x20
100ac39d0:     	lsr	x10, x25, #62
100ac39d4:     	cmp	w10, #0x1
100ac39d8:     	str	x28, [x19, #0x18]
100ac39dc:     	b.gt	0x100ac39ec <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cf75c>
100ac39e0:     	cbnz	w10, 0x100ac3a04 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cf774>
100ac39e4:     	ubfx	x28, x25, #48, #8
100ac39e8:     	b	0x100ac3a28 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cf798>
100ac39ec:     	cmp	w10, #0x2
100ac39f0:     	b.ne	0x100ac3a24 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cf794>
100ac39f4:     	ldp	x11, x10, [x24, #0x10]
100ac39f8:     	subs	x28, x10, x11
100ac39fc:     	b.vc	0x100ac3a14 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cf784>
100ac3a00:     	brk	#0x1
100ac3a04:     	lsr	x10, x24, #32
100ac3a08:     	subs	w10, w10, w24
100ac3a0c:     	b.vs	0x100ac5234 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0fa4>
100ac3a10:     	sxtw	x28, w10
100ac3a14:     	tbnz	x28, #0x3f, 0x100ac5204 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0f74>
100ac3a18:     	lsr	x10, x28, #16
100ac3a1c:     	cbz	x10, 0x100ac3a28 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cf798>
100ac3a20:     	brk	#0x1
100ac3a24:     	mov	x28, #0x0               ; =0
100ac3a28:     	mov	w10, #-0x1              ; =-1
100ac3a2c:     	ldr	x11, [x19, #0x80]
100ac3a30:     	cmp	x11, x10
100ac3a34:     	b.hs	0x100ac3a44 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cf7b4>
100ac3a38:     	mov	x0, #0x0                ; =0
100ac3a3c:     	mov	x1, #-0x4000000000000000 ; =-4611686018427387904
100ac3a40:     	b	0x100ac3a64 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cf7d4>
100ac3a44:     	strh	w9, [x19, #0x120]
100ac3a48:     	lsr	x9, x9, #16
100ac3a4c:     	strh	w9, [x19, #0x122]
100ac3a50:     	stp	xzr, xzr, [x19, #0x130]
100ac3a54:     	str	x8, [x19, #0x128]
100ac3a58:     	str	wzr, [x19, #0x140]
100ac3a5c:     	add	x20, x19, #0x120
100ac3a60:     	bl	0x100adacb4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8e6a24>
100ac3a64:     	mov	w8, #0x4b50             ; =19280
100ac3a68:     	movk	w8, #0x403, lsl #16
100ac3a6c:     	str	w8, [x19, #0x288]
100ac3a70:     	ldr	w8, [x19, #0x5c]
100ac3a74:     	and	w8, w8, #0xff
100ac3a78:     	ldr	w9, [x19, #0x50]
100ac3a7c:     	tst	w9, #0xff
100ac3a80:     	strh	w27, [x19, #0x28c]
100ac3a84:     	ccmp	w8, #0x0, #0x0, ne
100ac3a88:     	mov	w8, #0x800              ; =2048
100ac3a8c:     	strh	w8, [x19, #0x28e]
100ac3a90:     	mov	w8, #0x8                ; =8
100ac3a94:     	csel	w8, wzr, w8, ne
100ac3a98:     	str	w8, [x19, #0x4]
100ac3a9c:     	strh	w8, [x19, #0x290]
100ac3aa0:     	ldr	w8, [x19, #0x14]
100ac3aa4:     	strh	w8, [x19, #0x292]
100ac3aa8:     	ldr	w8, [x19, #0x60]
100ac3aac:     	strh	w8, [x19, #0x294]
100ac3ab0:     	str	wzr, [x19, #0x298]
100ac3ab4:     	str	w26, [x19, #0x29c]
100ac3ab8:     	str	w23, [x19, #0x2a0]
100ac3abc:     	strh	w28, [x19, #0x2a4]
100ac3ac0:     	strh	w22, [x19, #0x2a6]
100ac3ac4:     	str	x24, [x19, #0x2a8]
100ac3ac8:     	str	x25, [x19, #0x2b0]
100ac3acc:     	str	x0, [x19, #0x2b8]
100ac3ad0:     	str	x1, [x19, #0x2c0]
100ac3ad4:     	str	xzr, [x19, #0x2c8]
100ac3ad8:     	add	x8, x19, #0x1a9
100ac3adc:     	ldur	q0, [x8, #0xff]
100ac3ae0:     	add	x8, x19, #0x1b9
100ac3ae4:     	ldur	q1, [x8, #0xff]
100ac3ae8:     	stur	xzr, [x29, #-0x80]
100ac3aec:     	add	x8, x19, #0x160
100ac3af0:     	stp	q0, q1, [x8, #0x350]
100ac3af4:     	add	x9, x19, #0x199
100ac3af8:     	ldur	q0, [x9, #0xff]
100ac3afc:     	add	x9, x19, #0x189
100ac3b00:     	ldur	q1, [x9, #0xff]
100ac3b04:     	stp	q1, q0, [x8, #0x330]
100ac3b08:     	sub	x20, x29, #0xc0
100ac3b0c:     	bl	0x100ad63a8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8e2118>
100ac3b10:     	mov	x24, x0
100ac3b14:     	mov	x25, x1
100ac3b18:     	ldp	x9, x8, [x19, #0x18]
100ac3b1c:     	ldr	x11, [x9, x8]
100ac3b20:     	lsr	x8, x1, #62
100ac3b24:     	cmp	w8, #0x1
100ac3b28:     	b.gt	0x100ac3bc4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cf934>
100ac3b2c:     	lsr	x23, x24, #32
100ac3b30:     	cbnz	w8, 0x100ac3c48 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cf9b8>
100ac3b34:     	strb	w24, [x19, #0x190]
100ac3b38:     	lsr	x8, x24, #8
100ac3b3c:     	strb	w8, [x19, #0x191]
100ac3b40:     	lsr	x8, x24, #16
100ac3b44:     	strb	w8, [x19, #0x192]
100ac3b48:     	lsr	x8, x24, #24
100ac3b4c:     	strb	w8, [x19, #0x193]
100ac3b50:     	lsr	x8, x24, #40
100ac3b54:     	strb	w23, [x19, #0x194]
100ac3b58:     	lsr	x9, x24, #48
100ac3b5c:     	strb	w8, [x19, #0x195]
100ac3b60:     	lsr	x8, x24, #56
100ac3b64:     	strb	w9, [x19, #0x196]
100ac3b68:     	lsr	x9, x25, #8
100ac3b6c:     	strb	w8, [x19, #0x197]
100ac3b70:     	lsr	x8, x25, #16
100ac3b74:     	strb	w25, [x19, #0x198]
100ac3b78:     	lsr	x10, x25, #24
100ac3b7c:     	strb	w9, [x19, #0x199]
100ac3b80:     	lsr	x9, x25, #32
100ac3b84:     	strb	w8, [x19, #0x19a]
100ac3b88:     	lsr	x8, x25, #40
100ac3b8c:     	strb	w10, [x19, #0x19b]
100ac3b90:     	strb	w9, [x19, #0x19c]
100ac3b94:     	strb	w8, [x19, #0x19d]
100ac3b98:     	tst	x25, #0xff000000000000
100ac3b9c:     	ldr	x20, [x19, #0x48]
100ac3ba0:     	b.eq	0x100ac3cd0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cfa40>
100ac3ba4:     	ubfx	x2, x25, #48, #8
100ac3ba8:     	add	x0, x19, #0x190
100ac3bac:     	mov	w1, #0x1                ; =1
100ac3bb0:     	mov	x22, x11
100ac3bb4:     	mov	x3, x11
100ac3bb8:     	bl	0x100bfbad8 <_writev+0x100bfbad8>
100ac3bbc:     	mov	x11, x22
100ac3bc0:     	b	0x100ac3cd0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cfa40>
100ac3bc4:     	cmp	w8, #0x2
100ac3bc8:     	ldr	x20, [x19, #0x48]
100ac3bcc:     	b.ne	0x100ac3cd0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cfa40>
100ac3bd0:     	mov	x27, x11
100ac3bd4:     	ldp	x23, x26, [x24, #0x10]
100ac3bd8:     	and	x20, x25, #0x3fffffffffffffff
100ac3bdc:     	bl	0x100bf43b0 <_writev+0x100bf43b0>
100ac3be0:     	mov	x22, x0
100ac3be4:     	cbz	x0, 0x100ac3bfc <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cf96c>
100ac3be8:     	and	x20, x25, #0x3fffffffffffffff
100ac3bec:     	bl	0x100bf43d4 <_writev+0x100bf43d4>
100ac3bf0:     	subs	x8, x23, x0
100ac3bf4:     	b.vs	0x100ac5240 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0fb0>
100ac3bf8:     	add	x22, x8, x22
100ac3bfc:     	subs	x23, x26, x23
100ac3c00:     	b.vs	0x100ac523c <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0fac>
100ac3c04:     	and	x20, x25, #0x3fffffffffffffff
100ac3c08:     	bl	0x100bf43c8 <_writev+0x100bf43c8>
100ac3c0c:     	ldr	x20, [x19, #0x48]
100ac3c10:     	mov	x11, x27
100ac3c14:     	cbz	x22, 0x100ac3cd0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cfa40>
100ac3c18:     	cmp	x0, x23
100ac3c1c:     	csel	x8, x0, x23, lt
100ac3c20:     	cbz	x8, 0x100ac3cd0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cfa40>
100ac3c24:     	ldp	x9, x8, [x24, #0x10]
100ac3c28:     	subs	x2, x8, x9
100ac3c2c:     	b.vs	0x100ac5254 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0fc4>
100ac3c30:     	mov	x0, x22
100ac3c34:     	mov	w1, #0x1                ; =1
100ac3c38:     	mov	x3, x27
100ac3c3c:     	bl	0x100bfbad8 <_writev+0x100bfbad8>
100ac3c40:     	mov	x11, x27
100ac3c44:     	b	0x100ac3cd0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cfa40>
100ac3c48:     	sxtw	x27, w24
100ac3c4c:     	asr	x8, x24, #32
100ac3c50:     	subs	x26, x8, x27
100ac3c54:     	b.lt	0x100ac5238 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0fa8>
100ac3c58:     	mov	x28, x11
100ac3c5c:     	and	x20, x25, #0x3fffffffffffffff
100ac3c60:     	bl	0x100bf43b0 <_writev+0x100bf43b0>
100ac3c64:     	cbz	x0, 0x100ac3cc0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cfa30>
100ac3c68:     	mov	x22, x0
100ac3c6c:     	and	x20, x25, #0x3fffffffffffffff
100ac3c70:     	bl	0x100bf43d4 <_writev+0x100bf43d4>
100ac3c74:     	subs	x8, x27, x0
100ac3c78:     	b.vs	0x100ac5244 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0fb4>
100ac3c7c:     	add	x22, x8, x22
100ac3c80:     	and	x20, x25, #0x3fffffffffffffff
100ac3c84:     	bl	0x100bf43c8 <_writev+0x100bf43c8>
100ac3c88:     	ldr	x20, [x19, #0x48]
100ac3c8c:     	mov	x11, x28
100ac3c90:     	cbz	x22, 0x100ac3cd0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cfa40>
100ac3c94:     	cmp	x0, x26
100ac3c98:     	csel	x8, x0, x26, lt
100ac3c9c:     	cbz	x8, 0x100ac3cd0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cfa40>
100ac3ca0:     	subs	w8, w23, w24
100ac3ca4:     	b.vs	0x100ac5260 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0fd0>
100ac3ca8:     	sxtw	x2, w8
100ac3cac:     	mov	x0, x22
100ac3cb0:     	mov	w1, #0x1                ; =1
100ac3cb4:     	mov	x3, x28
100ac3cb8:     	bl	0x100bfbad8 <_writev+0x100bfbad8>
100ac3cbc:     	b	0x100ac3ccc <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cfa3c>
100ac3cc0:     	and	x20, x25, #0x3fffffffffffffff
100ac3cc4:     	bl	0x100bf43c8 <_writev+0x100bf43c8>
100ac3cc8:     	ldr	x20, [x19, #0x48]
100ac3ccc:     	mov	x11, x28
100ac3cd0:     	mov	x0, x11
100ac3cd4:     	bl	0x100bfb988 <_writev+0x100bfb988>
100ac3cd8:     	cmp	w0, #0x1
100ac3cdc:     	b.lt	0x100ac3ea4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cfc14>
100ac3ce0:     	ldr	x0, [x19, #0xc0]
100ac3ce4:     	bl	0x100bfc594 <_writev+0x100bfc594>
100ac3ce8:     	bl	0x100abcb78 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c88e8>
100ac3cec:     	mov	x1, x0
100ac3cf0:     	adrp	x0, 0x100f31000 <_writev+0x100f31000>
100ac3cf4:     	add	x0, x0, #0x588
100ac3cf8:     	mov	x2, #0x0                ; =0
100ac3cfc:     	mov	w3, #0x0                ; =0
100ac3d00:     	bl	0x100bfc504 <_writev+0x100bfc504>
100ac3d04:     	mov	x26, x0
100ac3d08:     	mov	w8, #0x1                ; =1
100ac3d0c:     	strb	w8, [x1]
100ac3d10:     	mov	x21, x0
100ac3d14:     	bl	0x100bfcc3c <_writev+0x100bfcc3c>
100ac3d18:     	add	x0, x19, #0x288
100ac3d1c:     	bl	0x100aca454 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d61c4>
100ac3d20:     	mov	x0, x24
100ac3d24:     	mov	x1, x25
100ac3d28:     	bl	0x10003bf2c <__text+0x39394>
100ac3d2c:     	mov	x22, #0x0               ; =0
100ac3d30:     	ldp	x25, x23, [x19, #0x18]
100ac3d34:     	ldr	x27, [x19, #0x90]
100ac3d38:     	str	x26, [x19, #0x160]
100ac3d3c:     	mov	x0, x26
100ac3d40:     	bl	0x100bfc714 <_writev+0x100bfc714>
100ac3d44:     	adrp	x0, 0x100ff8000 <_writev+0x100ff8000>
100ac3d48:     	add	x0, x0, #0x480
100ac3d4c:     	adrp	x1, 0x100c94000 <_writev+0x100c94000>
100ac3d50:     	add	x1, x1, #0x348
100ac3d54:     	bl	0x1000f7830 <__text+0xf4c98>
100ac3d58:     	mov	x2, x0
100ac3d5c:     	adrp	x3, 0x100f31000 <_writev+0x100f31000>
100ac3d60:     	add	x3, x3, #0x130
100ac3d64:     	add	x0, x19, #0xf7
100ac3d68:     	add	x1, x19, #0x160
100ac3d6c:     	mov	x4, #0x0                ; =0
100ac3d70:     	bl	0x100bfc690 <_writev+0x100bfc690>
100ac3d74:     	cbz	w0, 0x100ac3e94 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cfc04>
100ac3d78:     	ldrb	w8, [x19, #0xf7]
100ac3d7c:     	cmp	w8, #0x5
100ac3d80:     	b.ne	0x100ac3e94 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cfc04>
100ac3d84:     	str	x22, [x19, #0xc0]
100ac3d88:     	mov	x0, x26
100ac3d8c:     	bl	0x100bfc708 <_writev+0x100bfc708>
100ac3d90:     	ldr	x0, [x25, x23]
100ac3d94:     	bl	0x100bfb994 <_writev+0x100bfb994>
100ac3d98:     	ldr	x0, [x25, x23]
100ac3d9c:     	bl	0x100bfb9ac <_writev+0x100bfb9ac>
100ac3da0:     	ldr	x22, [x19, #0x8]
100ac3da4:     	mov	x1, x22
100ac3da8:     	bl	0x100bfba84 <_writev+0x100bfba84>
100ac3dac:     	ldr	x0, [x25, x23]
100ac3db0:     	mov	x1, x22
100ac3db4:     	mov	w2, #0x0                ; =0
100ac3db8:     	bl	0x100bfba30 <_writev+0x100bfba30>
100ac3dbc:     	ldr	x24, [x25, x23]
100ac3dc0:     	lsr	x25, x27, #62
100ac3dc4:     	cmp	w25, #0x1
100ac3dc8:     	b.gt	0x100ac4068 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cfdd8>
100ac3dcc:     	cbnz	w25, 0x100ac42c0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0030>
100ac3dd0:     	ldr	x9, [x19, #0xb8]
100ac3dd4:     	strb	w9, [x19, #0x190]
100ac3dd8:     	lsr	x8, x9, #8
100ac3ddc:     	strb	w8, [x19, #0x191]
100ac3de0:     	lsr	x8, x9, #16
100ac3de4:     	strb	w8, [x19, #0x192]
100ac3de8:     	lsr	x8, x9, #24
100ac3dec:     	strb	w8, [x19, #0x193]
100ac3df0:     	lsr	x8, x9, #32
100ac3df4:     	strb	w8, [x19, #0x194]
100ac3df8:     	lsr	x8, x9, #40
100ac3dfc:     	strb	w8, [x19, #0x195]
100ac3e00:     	lsr	x8, x9, #48
100ac3e04:     	strb	w8, [x19, #0x196]
100ac3e08:     	lsr	x8, x9, #56
100ac3e0c:     	strb	w8, [x19, #0x197]
100ac3e10:     	lsr	x8, x27, #8
100ac3e14:     	strb	w27, [x19, #0x198]
100ac3e18:     	lsr	x9, x27, #16
100ac3e1c:     	strb	w8, [x19, #0x199]
100ac3e20:     	lsr	x8, x27, #24
100ac3e24:     	strb	w9, [x19, #0x19a]
100ac3e28:     	lsr	x9, x27, #32
100ac3e2c:     	strb	w8, [x19, #0x19b]
100ac3e30:     	lsr	x8, x27, #40
100ac3e34:     	strb	w9, [x19, #0x19c]
100ac3e38:     	strb	w8, [x19, #0x19d]
100ac3e3c:     	cbz	x20, 0x100ac4650 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d03c0>
100ac3e40:     	and	x8, x27, #0xff000000000000
100ac3e44:     	cbz	x8, 0x100ac4650 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d03c0>
100ac3e48:     	mov	x22, #0x0               ; =0
100ac3e4c:     	add	x26, x19, #0x190
100ac3e50:     	ldr	x28, [x19, #0xd0]
100ac3e54:     	subs	x8, x20, x22
100ac3e58:     	b.lo	0x100ac5208 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0f78>
100ac3e5c:     	tbnz	x8, #0x3f, 0x100ac520c <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0f7c>
100ac3e60:     	cmp	x28, x8
100ac3e64:     	csel	x20, x28, x8, lt
100ac3e68:     	add	x0, x26, x22
100ac3e6c:     	mov	w1, #0x1                ; =1
100ac3e70:     	mov	x2, x20
100ac3e74:     	mov	x3, x24
100ac3e78:     	bl	0x100bfbad8 <_writev+0x100bfbad8>
100ac3e7c:     	tbnz	x28, #0x3f, 0x100ac5210 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0f80>
100ac3e80:     	add	x22, x20, x22
100ac3e84:     	ldr	x20, [x19, #0x48]
100ac3e88:     	cmp	x22, x20
100ac3e8c:     	b.lo	0x100ac3e54 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cfbc4>
100ac3e90:     	b	0x100ac4650 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d03c0>
100ac3e94:     	ldr	x0, [x19, #0x160]
100ac3e98:     	bl	0x100bfc708 <_writev+0x100bfc708>
100ac3e9c:     	ldr	x0, [x25, x23]
100ac3ea0:     	b	0x100ac5140 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0eb0>
100ac3ea4:     	mov	x0, x24
100ac3ea8:     	mov	x1, x25
100ac3eac:     	bl	0x10003bf2c <__text+0x39394>
100ac3eb0:     	ldr	w8, [x19, #0x5c]
100ac3eb4:     	ands	w8, w8, #0xff
100ac3eb8:     	b.eq	0x100ac3ef8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cfc68>
100ac3ebc:     	cmp	w8, #0x1
100ac3ec0:     	ldr	x25, [x19, #0x18]
100ac3ec4:     	b.ne	0x100ac3fdc <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cfd4c>
100ac3ec8:     	ldr	x0, [x19, #0x40]
100ac3ecc:     	ldr	x27, [x19, #0x90]
100ac3ed0:     	cbz	x0, 0x100ac41ac <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cff1c>
100ac3ed4:     	bl	0x100bfbf70 <_writev+0x100bfbf70>
100ac3ed8:     	mov	x20, x0
100ac3edc:     	bl	0x100c108c0 <_writev+0x100c108c0>
100ac3ee0:     	mov	x2, x0
100ac3ee4:     	mov	x0, x20
100ac3ee8:     	bl	0x100c0af60 <_writev+0x100c0af60>
100ac3eec:     	mov	x0, x20
100ac3ef0:     	bl	0x100bfbf64 <_writev+0x100bfbf64>
100ac3ef4:     	b	0x100ac41ac <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cff1c>
100ac3ef8:     	ldr	w8, [x19, #0x50]
100ac3efc:     	and	w8, w8, #0xff
100ac3f00:     	cmp	w8, #0x1
100ac3f04:     	ldr	x25, [x19, #0x18]
100ac3f08:     	b.ne	0x100ac4118 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cfe88>
100ac3f0c:     	adrp	x0, 0x100f30000 <_writev+0x100f30000>
100ac3f10:     	add	x0, x0, #0xd58
100ac3f14:     	mov	w1, #0x18               ; =24
100ac3f18:     	mov	w2, #0x7                ; =7
100ac3f1c:     	bl	0x100bfc510 <_writev+0x100bfc510>
100ac3f20:     	mov	x20, x0
100ac3f24:     	mov	x24, x0
100ac3f28:     	str	xzr, [x24, #0x10]!
100ac3f2c:     	adrp	x0, 0x100f30000 <_writev+0x100f30000>
100ac3f30:     	add	x0, x0, #0xe48
100ac3f34:     	mov	w1, #0x20               ; =32
100ac3f38:     	mov	w2, #0x7                ; =7
100ac3f3c:     	bl	0x100bfc510 <_writev+0x100bfc510>
100ac3f40:     	mov	x22, x0
100ac3f44:     	stp	x20, x25, [x0, #0x10]
100ac3f48:     	adrp	x8, 0x100ac7000 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d2d70>
100ac3f4c:     	add	x8, x8, #0x2a0
100ac3f50:     	ldr	x9, [x19, #0x40]
100ac3f54:     	stp	x9, x8, [x19, #0x1a0]
100ac3f58:     	str	xzr, [x19, #0x1b0]
100ac3f5c:     	mov	x0, x20
100ac3f60:     	bl	0x100bfc9d8 <_writev+0x100bfc9d8>
100ac3f64:     	mov	x0, x25
100ac3f68:     	bl	0x100bfc9d8 <_writev+0x100bfc9d8>
100ac3f6c:     	adrp	x4, 0x100acc000 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d7d70>
100ac3f70:     	add	x4, x4, #0x6b4
100ac3f74:     	adrp	x6, 0x100acc000 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d7d70>
100ac3f78:     	add	x6, x6, #0x6a0
100ac3f7c:     	add	x5, x19, #0x190
100ac3f80:     	mov	w0, #0x0                ; =0
100ac3f84:     	ldr	x1, [x19, #0x80]
100ac3f88:     	ldr	x2, [x19, #0xd0]
100ac3f8c:     	mov	w3, #0x0                ; =0
100ac3f90:     	mov	x7, x22
100ac3f94:     	ldr	x21, [x19, #0x38]
100ac3f98:     	bl	0x100ad4034 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8dfda4>
100ac3f9c:     	ldr	x23, [x19, #0x20]
100ac3fa0:     	str	x21, [x19, #0x38]
100ac3fa4:     	ldr	x27, [x19, #0x90]
100ac3fa8:     	cbz	x21, 0x100ac4614 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0384>
100ac3fac:     	ldr	x0, [x19, #0xc0]
100ac3fb0:     	bl	0x100bfc594 <_writev+0x100bfc594>
100ac3fb4:     	add	x0, x19, #0x288
100ac3fb8:     	bl	0x100aca454 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d61c4>
100ac3fbc:     	mov	x0, x20
100ac3fc0:     	bl	0x100bfc9c0 <_writev+0x100bfc9c0>
100ac3fc4:     	mov	x0, x22
100ac3fc8:     	bl	0x100bfc9c0 <_writev+0x100bfc9c0>
100ac3fcc:     	mov	x22, #0x0               ; =0
100ac3fd0:     	ldr	x20, [x19, #0x48]
100ac3fd4:     	ldr	x26, [x19, #0x38]
100ac3fd8:     	b	0x100ac3d38 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cfaa8>
100ac3fdc:     	add	x8, x19, #0x160
100ac3fe0:     	stur	xzr, [x8, #0x36]
100ac3fe4:     	str	xzr, [x19, #0x190]
100ac3fe8:     	add	x1, x19, #0x190
100ac3fec:     	mov	x0, #0x0                ; =0
100ac3ff0:     	mov	w2, #0x0                ; =0
100ac3ff4:     	bl	0x100bfb7c0 <_writev+0x100bfb7c0>
100ac3ff8:     	lsr	x8, x0, #32
100ac3ffc:     	ldr	x22, [x19, #0x40]
100ac4000:     	ldr	x27, [x19, #0x90]
100ac4004:     	cbnz	x8, 0x100ac5250 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0fc0>
100ac4008:     	mov	x26, x0
100ac400c:     	ldr	x23, [x19, #0x20]
100ac4010:     	ldr	x0, [x25, x23]
100ac4014:     	bl	0x100bfb988 <_writev+0x100bfb988>
100ac4018:     	cmp	w0, #0x1
100ac401c:     	b.lt	0x100ac4368 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d00d8>
100ac4020:     	ldr	x0, [x19, #0xc0]
100ac4024:     	bl	0x100bfc594 <_writev+0x100bfc594>
100ac4028:     	bl	0x100abcb78 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c88e8>
100ac402c:     	mov	x1, x0
100ac4030:     	adrp	x0, 0x100f31000 <_writev+0x100f31000>
100ac4034:     	add	x0, x0, #0x588
100ac4038:     	mov	x2, #0x0                ; =0
100ac403c:     	mov	w3, #0x0                ; =0
100ac4040:     	bl	0x100bfc504 <_writev+0x100bfc504>
100ac4044:     	mov	x26, x0
100ac4048:     	mov	w8, #0x1                ; =1
100ac404c:     	strb	w8, [x1]
100ac4050:     	mov	x21, x0
100ac4054:     	bl	0x100bfcc3c <_writev+0x100bfcc3c>
100ac4058:     	add	x0, x19, #0x288
100ac405c:     	bl	0x100aca454 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d61c4>
100ac4060:     	mov	x22, #0x0               ; =0
100ac4064:     	b	0x100ac3d38 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cfaa8>
100ac4068:     	cmp	w25, #0x2
100ac406c:     	b.ne	0x100ac4650 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d03c0>
100ac4070:     	ldr	x8, [x19, #0xb8]
100ac4074:     	mov	x23, x27
100ac4078:     	ldp	x26, x27, [x8, #0x10]
100ac407c:     	and	x20, x23, #0x3fffffffffffffff
100ac4080:     	bl	0x100bf43b0 <_writev+0x100bf43b0>
100ac4084:     	mov	x22, x0
100ac4088:     	cbz	x0, 0x100ac40a0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cfe10>
100ac408c:     	and	x20, x23, #0x3fffffffffffffff
100ac4090:     	bl	0x100bf43d4 <_writev+0x100bf43d4>
100ac4094:     	subs	x8, x26, x0
100ac4098:     	b.vs	0x100ac5264 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0fd4>
100ac409c:     	add	x22, x8, x22
100ac40a0:     	ldr	x23, [x19, #0x20]
100ac40a4:     	subs	x26, x27, x26
100ac40a8:     	b.vs	0x100ac525c <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0fcc>
100ac40ac:     	ldr	x27, [x19, #0x90]
100ac40b0:     	and	x20, x27, #0x3fffffffffffffff
100ac40b4:     	bl	0x100bf43c8 <_writev+0x100bf43c8>
100ac40b8:     	cbz	x22, 0x100ac4650 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d03c0>
100ac40bc:     	cmp	x0, x26
100ac40c0:     	csel	x8, x0, x26, lt
100ac40c4:     	ldr	x9, [x19, #0x48]
100ac40c8:     	cbz	x9, 0x100ac4650 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d03c0>
100ac40cc:     	cbz	x8, 0x100ac4650 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d03c0>
100ac40d0:     	mov	x26, #0x0               ; =0
100ac40d4:     	ldr	x28, [x19, #0xd0]
100ac40d8:     	subs	x8, x9, x26
100ac40dc:     	b.lo	0x100ac5214 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0f84>
100ac40e0:     	tbnz	x8, #0x3f, 0x100ac5218 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0f88>
100ac40e4:     	cmp	x28, x8
100ac40e8:     	csel	x20, x28, x8, lt
100ac40ec:     	add	x0, x22, x26
100ac40f0:     	mov	w1, #0x1                ; =1
100ac40f4:     	mov	x2, x20
100ac40f8:     	mov	x3, x24
100ac40fc:     	bl	0x100bfbad8 <_writev+0x100bfbad8>
100ac4100:     	tbnz	x28, #0x3f, 0x100ac521c <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0f8c>
100ac4104:     	add	x26, x20, x26
100ac4108:     	ldr	x9, [x19, #0x48]
100ac410c:     	cmp	x26, x9
100ac4110:     	b.lo	0x100ac40d8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cfe48>
100ac4114:     	b	0x100ac4650 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d03c0>
100ac4118:     	ldr	x23, [x19, #0x20]
100ac411c:     	ldr	x8, [x19, #0x80]
100ac4120:     	ldr	x28, [x19, #0x40]
100ac4124:     	ldr	x27, [x19, #0x90]
100ac4128:     	cbz	x8, 0x100ac41ac <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cff1c>
100ac412c:     	mov	x20, #0x0               ; =0
100ac4130:     	mov	x26, #0x0               ; =0
100ac4134:     	cbz	x28, 0x100ac4144 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cfeb4>
100ac4138:     	mov	x0, x28
100ac413c:     	bl	0x100c05660 <_writev+0x100c05660>
100ac4140:     	cbnz	w0, 0x100ac4a64 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d07d4>
100ac4144:     	add	x8, x19, #0x160
100ac4148:     	stur	xzr, [x8, #0x36]
100ac414c:     	str	xzr, [x19, #0x190]
100ac4150:     	add	x1, x19, #0x190
100ac4154:     	mov	x0, x26
100ac4158:     	mov	w2, #0x0                ; =0
100ac415c:     	bl	0x100bfb7c0 <_writev+0x100bfb7c0>
100ac4160:     	lsr	x8, x0, #32
100ac4164:     	cbnz	x8, 0x100ac5220 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0f90>
100ac4168:     	mov	x26, x0
100ac416c:     	ldr	x0, [x25, x23]
100ac4170:     	bl	0x100bfb988 <_writev+0x100bfb988>
100ac4174:     	cmp	w0, #0x1
100ac4178:     	b.ge	0x100ac47fc <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d056c>
100ac417c:     	ldr	x24, [x19, #0xd0]
100ac4180:     	adds	x22, x20, x24
100ac4184:     	b.vs	0x100ac5224 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0f94>
100ac4188:     	mov	x0, x28
100ac418c:     	mov	x2, #0x0                ; =0
100ac4190:     	bl	0x100c0af60 <_writev+0x100c0af60>
100ac4194:     	add	x20, x20, x24
100ac4198:     	ldr	x8, [x19, #0x80]
100ac419c:     	cmp	x22, x8
100ac41a0:     	b.lt	0x100ac4134 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cfea4>
100ac41a4:     	mov	x23, #0x0               ; =0
100ac41a8:     	b	0x100ac41b4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cff24>
100ac41ac:     	mov	w26, #0x0               ; =0
100ac41b0:     	mov	x23, #0x0               ; =0
100ac41b4:     	ldr	x20, [x19, #0x20]
100ac41b8:     	ldr	x0, [x25, x20]
100ac41bc:     	bl	0x100bfba78 <_writev+0x100bfba78>
100ac41c0:     	tbnz	x0, #0x3f, 0x100ac4228 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cff98>
100ac41c4:     	mov	x28, x0
100ac41c8:     	ldr	x0, [x25, x20]
100ac41cc:     	ldr	x1, [x19, #0x8]
100ac41d0:     	mov	w2, #0x0                ; =0
100ac41d4:     	bl	0x100bfba30 <_writev+0x100bfba30>
100ac41d8:     	tbnz	x23, #0x3f, 0x100ac5248 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0fb8>
100ac41dc:     	ldr	x0, [x19, #0xa0]
100ac41e0:     	ldr	x1, [x19, #0xc0]
100ac41e4:     	bl	0x100ac0904 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cc674>
100ac41e8:     	mov	x25, x0
100ac41ec:     	mov	x27, x1
100ac41f0:     	mov	w17, #-0x1              ; =-1
100ac41f4:     	ldr	x9, [x19, #0x80]
100ac41f8:     	cmp	x9, x17
100ac41fc:     	ccmp	x23, x17, #0x2, lo
100ac4200:     	cset	w8, lo
100ac4204:     	b.hs	0x100ac4278 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cffe8>
100ac4208:     	mov	w12, #0x0               ; =0
100ac420c:     	mov	x11, #0x0               ; =0
100ac4210:     	mov	w22, #0x14              ; =20
100ac4214:     	mov	x17, x9
100ac4218:     	mov	x14, x23
100ac421c:     	str	xzr, [x19, #0x80]
100ac4220:     	mov	x23, #0x0               ; =0
100ac4224:     	b	0x100ac428c <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cfffc>
100ac4228:     	ldr	x0, [x19, #0xc0]
100ac422c:     	bl	0x100bfc594 <_writev+0x100bfc594>
100ac4230:     	bl	0x100ab8c74 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c49e4>
100ac4234:     	mov	x1, x0
100ac4238:     	adrp	x0, 0x100f31000 <_writev+0x100f31000>
100ac423c:     	add	x0, x0, #0x130
100ac4240:     	mov	x2, #0x0                ; =0
100ac4244:     	mov	w3, #0x0                ; =0
100ac4248:     	bl	0x100bfc504 <_writev+0x100bfc504>
100ac424c:     	mov	x26, x0
100ac4250:     	mov	w8, #0x1                ; =1
100ac4254:     	strb	w8, [x1]
100ac4258:     	mov	x21, x0
100ac425c:     	bl	0x100bfcc3c <_writev+0x100bfcc3c>
100ac4260:     	add	x0, x19, #0x288
100ac4264:     	bl	0x100aca454 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d61c4>
100ac4268:     	mov	x22, #0x0               ; =0
100ac426c:     	mov	x23, x20
100ac4270:     	ldr	x20, [x19, #0x48]
100ac4274:     	b	0x100ac3d38 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cfaa8>
100ac4278:     	mov	w22, #0x2d              ; =45
100ac427c:     	mov	w12, #0x14              ; =20
100ac4280:     	mov	w14, #-0x1              ; =-1
100ac4284:     	mov	w11, #0x1               ; =1
100ac4288:     	movk	w11, #0x10, lsl #16
100ac428c:     	lsr	x9, x27, #62
100ac4290:     	cmp	w9, #0x1
100ac4294:     	str	x28, [x19, #0x50]
100ac4298:     	b.gt	0x100ac42a8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0018>
100ac429c:     	cbnz	w9, 0x100ac4394 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0104>
100ac42a0:     	ubfx	x24, x27, #48, #8
100ac42a4:     	b	0x100ac43b8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0128>
100ac42a8:     	cmp	w9, #0x2
100ac42ac:     	b.ne	0x100ac43b4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0124>
100ac42b0:     	ldp	x10, x9, [x25, #0x10]
100ac42b4:     	subs	x24, x9, x10
100ac42b8:     	b.vc	0x100ac43a4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0114>
100ac42bc:     	brk	#0x1
100ac42c0:     	ldr	x8, [x19, #0xb8]
100ac42c4:     	sxtw	x23, w8
100ac42c8:     	asr	x8, x8, #32
100ac42cc:     	subs	x26, x8, x23
100ac42d0:     	b.lt	0x100ac5258 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0fc8>
100ac42d4:     	ldr	x27, [x19, #0x90]
100ac42d8:     	and	x20, x27, #0x3fffffffffffffff
100ac42dc:     	bl	0x100bf43b0 <_writev+0x100bf43b0>
100ac42e0:     	cbz	x0, 0x100ac4644 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d03b4>
100ac42e4:     	mov	x22, x0
100ac42e8:     	and	x20, x27, #0x3fffffffffffffff
100ac42ec:     	bl	0x100bf43d4 <_writev+0x100bf43d4>
100ac42f0:     	subs	x8, x23, x0
100ac42f4:     	b.vs	0x100ac5268 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0fd8>
100ac42f8:     	add	x22, x8, x22
100ac42fc:     	and	x20, x27, #0x3fffffffffffffff
100ac4300:     	bl	0x100bf43c8 <_writev+0x100bf43c8>
100ac4304:     	ldr	x23, [x19, #0x20]
100ac4308:     	cbz	x22, 0x100ac4650 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d03c0>
100ac430c:     	cmp	x0, x26
100ac4310:     	csel	x8, x0, x26, lt
100ac4314:     	ldr	x9, [x19, #0x48]
100ac4318:     	cbz	x9, 0x100ac4650 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d03c0>
100ac431c:     	cbz	x8, 0x100ac4650 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d03c0>
100ac4320:     	mov	x26, #0x0               ; =0
100ac4324:     	ldr	x28, [x19, #0xd0]
100ac4328:     	subs	x8, x9, x26
100ac432c:     	b.lo	0x100ac5228 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0f98>
100ac4330:     	tbnz	x8, #0x3f, 0x100ac522c <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0f9c>
100ac4334:     	cmp	x28, x8
100ac4338:     	csel	x20, x28, x8, lt
100ac433c:     	add	x0, x22, x26
100ac4340:     	mov	w1, #0x1                ; =1
100ac4344:     	mov	x2, x20
100ac4348:     	mov	x3, x24
100ac434c:     	bl	0x100bfbad8 <_writev+0x100bfbad8>
100ac4350:     	tbnz	x28, #0x3f, 0x100ac5230 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0fa0>
100ac4354:     	add	x26, x20, x26
100ac4358:     	ldr	x9, [x19, #0x48]
100ac435c:     	cmp	x26, x9
100ac4360:     	b.lo	0x100ac4328 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0098>
100ac4364:     	b	0x100ac4650 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d03c0>
100ac4368:     	cbz	x22, 0x100ac41b0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cff20>
100ac436c:     	mov	x0, x22
100ac4370:     	bl	0x100bfbf70 <_writev+0x100bfbf70>
100ac4374:     	mov	x20, x0
100ac4378:     	bl	0x100c108c0 <_writev+0x100c108c0>
100ac437c:     	mov	x2, x0
100ac4380:     	mov	x0, x20
100ac4384:     	bl	0x100c0af60 <_writev+0x100c0af60>
100ac4388:     	mov	x0, x20
100ac438c:     	bl	0x100bfbf64 <_writev+0x100bfbf64>
100ac4390:     	b	0x100ac41b0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cff20>
100ac4394:     	lsr	x9, x25, #32
100ac4398:     	subs	w9, w9, w25
100ac439c:     	b.vs	0x100ac526c <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0fdc>
100ac43a0:     	sxtw	x24, w9
100ac43a4:     	tbnz	x24, #0x3f, 0x100ac524c <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0fbc>
100ac43a8:     	lsr	x9, x24, #16
100ac43ac:     	cbz	x9, 0x100ac43b8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0128>
100ac43b0:     	brk	#0x1
100ac43b4:     	mov	x24, #0x0               ; =0
100ac43b8:     	tbz	w8, #0x0, 0x100ac43c8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0138>
100ac43bc:     	mov	x0, #0x0                ; =0
100ac43c0:     	mov	x1, #-0x4000000000000000 ; =-4611686018427387904
100ac43c4:     	b	0x100ac440c <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d017c>
100ac43c8:     	strh	w11, [x19, #0xf8]
100ac43cc:     	lsr	x8, x11, #16
100ac43d0:     	strh	w8, [x19, #0xfa]
100ac43d4:     	ldr	x8, [x19, #0x80]
100ac43d8:     	stp	x8, x23, [x19, #0x100]
100ac43dc:     	str	xzr, [x19, #0x110]
100ac43e0:     	str	wzr, [x19, #0x118]
100ac43e4:     	add	x20, x19, #0xf8
100ac43e8:     	mov	x23, x12
100ac43ec:     	str	x26, [x19, #0xc0]
100ac43f0:     	mov	x26, x14
100ac43f4:     	mov	x28, x17
100ac43f8:     	bl	0x100adacb4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8e6a24>
100ac43fc:     	mov	x17, x28
100ac4400:     	mov	x14, x26
100ac4404:     	ldr	x26, [x19, #0xc0]
100ac4408:     	mov	x12, x23
100ac440c:     	mov	w8, #0x4b50             ; =19280
100ac4410:     	movk	w8, #0x403, lsl #16
100ac4414:     	ldr	w9, [x19, #0x4]
100ac4418:     	str	w8, [x19, #0x220]
100ac441c:     	strh	w22, [x19, #0x224]
100ac4420:     	mov	w8, #0x800              ; =2048
100ac4424:     	strh	w8, [x19, #0x226]
100ac4428:     	strh	w9, [x19, #0x228]
100ac442c:     	ldr	w8, [x19, #0x14]
100ac4430:     	strh	w8, [x19, #0x22a]
100ac4434:     	ldr	w8, [x19, #0x60]
100ac4438:     	strh	w8, [x19, #0x22c]
100ac443c:     	str	w26, [x19, #0x230]
100ac4440:     	str	w14, [x19, #0x234]
100ac4444:     	str	w17, [x19, #0x238]
100ac4448:     	strh	w24, [x19, #0x23c]
100ac444c:     	strh	w12, [x19, #0x23e]
100ac4450:     	str	x25, [x19, #0x240]
100ac4454:     	str	x27, [x19, #0x248]
100ac4458:     	str	x0, [x19, #0x250]
100ac445c:     	str	x1, [x19, #0x258]
100ac4460:     	str	xzr, [x19, #0x260]
100ac4464:     	add	x8, x19, #0x160
100ac4468:     	ldp	q0, q1, [x8, #0xc0]
100ac446c:     	ldp	q2, q3, [x8, #0xe0]
100ac4470:     	str	xzr, [x19, #0x480]
100ac4474:     	stp	q2, q3, [x8, #0x300]
100ac4478:     	stp	q0, q1, [x8, #0x2e0]
100ac447c:     	add	x20, x19, #0x440
100ac4480:     	bl	0x100ad63a8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8e2118>
100ac4484:     	mov	x25, x0
100ac4488:     	mov	x24, x1
100ac448c:     	ldp	x9, x8, [x19, #0x18]
100ac4490:     	mov	x28, x9
100ac4494:     	ldr	x26, [x9, x8]
100ac4498:     	lsr	x8, x1, #62
100ac449c:     	cmp	w8, #0x1
100ac44a0:     	b.gt	0x100ac452c <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d029c>
100ac44a4:     	cbnz	w8, 0x100ac459c <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d030c>
100ac44a8:     	strb	w25, [x19, #0x190]
100ac44ac:     	lsr	x8, x25, #8
100ac44b0:     	strb	w8, [x19, #0x191]
100ac44b4:     	lsr	x8, x25, #16
100ac44b8:     	strb	w8, [x19, #0x192]
100ac44bc:     	lsr	x8, x25, #24
100ac44c0:     	strb	w8, [x19, #0x193]
100ac44c4:     	lsr	x8, x25, #32
100ac44c8:     	strb	w8, [x19, #0x194]
100ac44cc:     	lsr	x8, x25, #40
100ac44d0:     	strb	w8, [x19, #0x195]
100ac44d4:     	lsr	x8, x25, #48
100ac44d8:     	strb	w8, [x19, #0x196]
100ac44dc:     	lsr	x8, x25, #56
100ac44e0:     	strb	w8, [x19, #0x197]
100ac44e4:     	lsr	x8, x24, #8
100ac44e8:     	strb	w24, [x19, #0x198]
100ac44ec:     	lsr	x9, x24, #16
100ac44f0:     	strb	w8, [x19, #0x199]
100ac44f4:     	lsr	x8, x24, #24
100ac44f8:     	strb	w9, [x19, #0x19a]
100ac44fc:     	lsr	x9, x24, #32
100ac4500:     	strb	w8, [x19, #0x19b]
100ac4504:     	lsr	x8, x24, #40
100ac4508:     	strb	w9, [x19, #0x19c]
100ac450c:     	strb	w8, [x19, #0x19d]
100ac4510:     	tst	x24, #0xff000000000000
100ac4514:     	ldr	x27, [x19, #0x90]
100ac4518:     	ldr	x20, [x19, #0x48]
100ac451c:     	b.eq	0x100ac4834 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d05a4>
100ac4520:     	ubfx	x2, x24, #48, #8
100ac4524:     	add	x0, x19, #0x190
100ac4528:     	b	0x100ac4604 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0374>
100ac452c:     	cmp	w8, #0x2
100ac4530:     	ldr	x27, [x19, #0x90]
100ac4534:     	ldr	x20, [x19, #0x48]
100ac4538:     	b.ne	0x100ac4834 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d05a4>
100ac453c:     	ldp	x23, x27, [x25, #0x10]
100ac4540:     	and	x20, x24, #0x3fffffffffffffff
100ac4544:     	bl	0x100bf43b0 <_writev+0x100bf43b0>
100ac4548:     	mov	x22, x0
100ac454c:     	cbz	x0, 0x100ac4564 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d02d4>
100ac4550:     	and	x20, x24, #0x3fffffffffffffff
100ac4554:     	bl	0x100bf43d4 <_writev+0x100bf43d4>
100ac4558:     	subs	x8, x23, x0
100ac455c:     	b.vs	0x100ac5280 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0ff0>
100ac4560:     	add	x22, x8, x22
100ac4564:     	subs	x23, x27, x23
100ac4568:     	b.vs	0x100ac5274 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0fe4>
100ac456c:     	and	x20, x24, #0x3fffffffffffffff
100ac4570:     	bl	0x100bf43c8 <_writev+0x100bf43c8>
100ac4574:     	ldr	x27, [x19, #0x90]
100ac4578:     	ldr	x20, [x19, #0x48]
100ac457c:     	cbz	x22, 0x100ac4834 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d05a4>
100ac4580:     	cmp	x0, x23
100ac4584:     	csel	x8, x0, x23, lt
100ac4588:     	cbz	x8, 0x100ac4834 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d05a4>
100ac458c:     	ldp	x9, x8, [x25, #0x10]
100ac4590:     	subs	x2, x8, x9
100ac4594:     	b.vc	0x100ac4600 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0370>
100ac4598:     	brk	#0x1
100ac459c:     	sxtw	x27, w25
100ac45a0:     	asr	x8, x25, #32
100ac45a4:     	subs	x23, x8, x27
100ac45a8:     	b.lt	0x100ac5270 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0fe0>
100ac45ac:     	and	x20, x24, #0x3fffffffffffffff
100ac45b0:     	bl	0x100bf43b0 <_writev+0x100bf43b0>
100ac45b4:     	cbz	x0, 0x100ac4824 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0594>
100ac45b8:     	mov	x22, x0
100ac45bc:     	and	x20, x24, #0x3fffffffffffffff
100ac45c0:     	bl	0x100bf43d4 <_writev+0x100bf43d4>
100ac45c4:     	subs	x8, x27, x0
100ac45c8:     	b.vs	0x100ac5284 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0ff4>
100ac45cc:     	add	x22, x8, x22
100ac45d0:     	and	x20, x24, #0x3fffffffffffffff
100ac45d4:     	bl	0x100bf43c8 <_writev+0x100bf43c8>
100ac45d8:     	ldr	x27, [x19, #0x90]
100ac45dc:     	ldr	x20, [x19, #0x48]
100ac45e0:     	cbz	x22, 0x100ac4834 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d05a4>
100ac45e4:     	cmp	x0, x23
100ac45e8:     	csel	x8, x0, x23, lt
100ac45ec:     	cbz	x8, 0x100ac4834 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d05a4>
100ac45f0:     	lsr	x8, x25, #32
100ac45f4:     	subs	w8, w8, w25
100ac45f8:     	b.vs	0x100ac5298 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d1008>
100ac45fc:     	sxtw	x2, w8
100ac4600:     	mov	x0, x22
100ac4604:     	mov	w1, #0x1                ; =1
100ac4608:     	mov	x3, x26
100ac460c:     	bl	0x100bfbad8 <_writev+0x100bfbad8>
100ac4610:     	b	0x100ac4834 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d05a4>
100ac4614:     	mov	x26, x0
100ac4618:     	add	x1, x19, #0x148
100ac461c:     	mov	x0, x24
100ac4620:     	mov	x2, #0x0                ; =0
100ac4624:     	mov	x3, #0x0                ; =0
100ac4628:     	bl	0x100bfc588 <_writev+0x100bfc588>
100ac462c:     	ldr	x23, [x20, #0x10]
100ac4630:     	mov	x0, x20
100ac4634:     	bl	0x100bfc9c0 <_writev+0x100bfc9c0>
100ac4638:     	mov	x0, x22
100ac463c:     	bl	0x100bfc9c0 <_writev+0x100bfc9c0>
100ac4640:     	b	0x100ac41b4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cff24>
100ac4644:     	and	x20, x27, #0x3fffffffffffffff
100ac4648:     	bl	0x100bf43c8 <_writev+0x100bf43c8>
100ac464c:     	ldr	x23, [x19, #0x20]
100ac4650:     	mov	x0, x24
100ac4654:     	bl	0x100bfb988 <_writev+0x100bfb988>
100ac4658:     	cmp	w0, #0x1
100ac465c:     	b.lt	0x100ac4698 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0408>
100ac4660:     	bl	0x100abcb78 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c88e8>
100ac4664:     	mov	x1, x0
100ac4668:     	adrp	x0, 0x100f31000 <_writev+0x100f31000>
100ac466c:     	add	x0, x0, #0x588
100ac4670:     	mov	x2, #0x0                ; =0
100ac4674:     	mov	w3, #0x0                ; =0
100ac4678:     	bl	0x100bfc504 <_writev+0x100bfc504>
100ac467c:     	mov	x26, x0
100ac4680:     	mov	w8, #0x1                ; =1
100ac4684:     	strb	w8, [x1]
100ac4688:     	mov	x21, x0
100ac468c:     	bl	0x100bfcc3c <_writev+0x100bfcc3c>
100ac4690:     	ldr	x22, [x19, #0x18]
100ac4694:     	b	0x100ac5134 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0ea4>
100ac4698:     	ldr	x8, [x19, #0x18]
100ac469c:     	ldr	x24, [x8, x23]
100ac46a0:     	str	xzr, [x19, #0xe8]
100ac46a4:     	cmp	w25, #0x1
100ac46a8:     	b.gt	0x100ac473c <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d04ac>
100ac46ac:     	cbnz	w25, 0x100ac47a0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0510>
100ac46b0:     	ldr	x9, [x19, #0xb8]
100ac46b4:     	strb	w9, [x19, #0x190]
100ac46b8:     	lsr	x8, x9, #8
100ac46bc:     	strb	w8, [x19, #0x191]
100ac46c0:     	lsr	x8, x9, #16
100ac46c4:     	strb	w8, [x19, #0x192]
100ac46c8:     	lsr	x8, x9, #24
100ac46cc:     	strb	w8, [x19, #0x193]
100ac46d0:     	lsr	x8, x9, #32
100ac46d4:     	strb	w8, [x19, #0x194]
100ac46d8:     	lsr	x8, x9, #40
100ac46dc:     	strb	w8, [x19, #0x195]
100ac46e0:     	lsr	x8, x9, #48
100ac46e4:     	strb	w8, [x19, #0x196]
100ac46e8:     	lsr	x8, x9, #56
100ac46ec:     	strb	w8, [x19, #0x197]
100ac46f0:     	lsr	x8, x27, #8
100ac46f4:     	strb	w27, [x19, #0x198]
100ac46f8:     	lsr	x9, x27, #16
100ac46fc:     	strb	w8, [x19, #0x199]
100ac4700:     	lsr	x8, x27, #24
100ac4704:     	strb	w9, [x19, #0x19a]
100ac4708:     	lsr	x9, x27, #32
100ac470c:     	strb	w8, [x19, #0x19b]
100ac4710:     	lsr	x8, x27, #40
100ac4714:     	strb	w9, [x19, #0x19c]
100ac4718:     	strb	w8, [x19, #0x19d]
100ac471c:     	tst	x27, #0xff000000000000
100ac4720:     	b.eq	0x100ac4ac8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0838>
100ac4724:     	ubfx	x2, x27, #48, #8
100ac4728:     	add	x0, x19, #0x190
100ac472c:     	mov	w1, #0x1                ; =1
100ac4730:     	mov	x3, x24
100ac4734:     	bl	0x100bfbad8 <_writev+0x100bfbad8>
100ac4738:     	b	0x100ac4ac8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0838>
100ac473c:     	cmp	w25, #0x2
100ac4740:     	b.ne	0x100ac4ac8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0838>
100ac4744:     	ldr	x8, [x19, #0xb8]
100ac4748:     	ldp	x25, x26, [x8, #0x10]
100ac474c:     	and	x20, x27, #0x3fffffffffffffff
100ac4750:     	bl	0x100bf43b0 <_writev+0x100bf43b0>
100ac4754:     	mov	x22, x0
100ac4758:     	cbz	x0, 0x100ac4770 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d04e0>
100ac475c:     	and	x20, x27, #0x3fffffffffffffff
100ac4760:     	bl	0x100bf43d4 <_writev+0x100bf43d4>
100ac4764:     	subs	x8, x25, x0
100ac4768:     	b.vs	0x100ac528c <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0ffc>
100ac476c:     	add	x22, x8, x22
100ac4770:     	subs	x25, x26, x25
100ac4774:     	b.vs	0x100ac527c <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0fec>
100ac4778:     	and	x20, x27, #0x3fffffffffffffff
100ac477c:     	bl	0x100bf43c8 <_writev+0x100bf43c8>
100ac4780:     	cmp	x0, x25
100ac4784:     	csel	x8, x0, x25, lt
100ac4788:     	add	x8, x8, x22
100ac478c:     	cmp	x22, #0x0
100ac4790:     	csel	x1, xzr, x8, eq
100ac4794:     	add	x2, x19, #0xe8
100ac4798:     	mov	x0, x22
100ac479c:     	b	0x100ac4ab8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0828>
100ac47a0:     	ldr	x8, [x19, #0xb8]
100ac47a4:     	sxtw	x26, w8
100ac47a8:     	asr	x8, x8, #32
100ac47ac:     	subs	x25, x8, x26
100ac47b0:     	b.lt	0x100ac5278 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0fe8>
100ac47b4:     	and	x20, x27, #0x3fffffffffffffff
100ac47b8:     	bl	0x100bf43b0 <_writev+0x100bf43b0>
100ac47bc:     	cbz	x0, 0x100ac4aa4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0814>
100ac47c0:     	mov	x22, x0
100ac47c4:     	and	x20, x27, #0x3fffffffffffffff
100ac47c8:     	bl	0x100bf43d4 <_writev+0x100bf43d4>
100ac47cc:     	subs	x8, x26, x0
100ac47d0:     	b.vs	0x100ac5290 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d1000>
100ac47d4:     	add	x22, x8, x22
100ac47d8:     	and	x20, x27, #0x3fffffffffffffff
100ac47dc:     	bl	0x100bf43c8 <_writev+0x100bf43c8>
100ac47e0:     	cmp	x0, x25
100ac47e4:     	csel	x8, x0, x25, lt
100ac47e8:     	add	x8, x8, x22
100ac47ec:     	cmp	x22, #0x0
100ac47f0:     	csel	x0, xzr, x22, eq
100ac47f4:     	csel	x1, xzr, x8, eq
100ac47f8:     	b	0x100ac4ab4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0824>
100ac47fc:     	bl	0x100abcb78 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c88e8>
100ac4800:     	mov	x1, x0
100ac4804:     	adrp	x0, 0x100f31000 <_writev+0x100f31000>
100ac4808:     	add	x0, x0, #0x588
100ac480c:     	mov	x2, #0x0                ; =0
100ac4810:     	mov	w3, #0x0                ; =0
100ac4814:     	bl	0x100bfc504 <_writev+0x100bfc504>
100ac4818:     	mov	x26, x0
100ac481c:     	mov	w8, #0x1                ; =1
100ac4820:     	b	0x100ac4a88 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d07f8>
100ac4824:     	and	x20, x24, #0x3fffffffffffffff
100ac4828:     	bl	0x100bf43c8 <_writev+0x100bf43c8>
100ac482c:     	ldr	x27, [x19, #0x90]
100ac4830:     	ldr	x20, [x19, #0x48]
100ac4834:     	mov	x0, x26
100ac4838:     	bl	0x100bfb988 <_writev+0x100bfb988>
100ac483c:     	cmp	w0, #0x1
100ac4840:     	b.lt	0x100ac48a0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0610>
100ac4844:     	bl	0x100abcb78 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c88e8>
100ac4848:     	mov	x1, x0
100ac484c:     	adrp	x0, 0x100f31000 <_writev+0x100f31000>
100ac4850:     	add	x0, x0, #0x588
100ac4854:     	mov	x2, #0x0                ; =0
100ac4858:     	mov	w3, #0x0                ; =0
100ac485c:     	bl	0x100bfc504 <_writev+0x100bfc504>
100ac4860:     	mov	x26, x0
100ac4864:     	mov	w8, #0x1                ; =1
100ac4868:     	strb	w8, [x1]
100ac486c:     	mov	x21, x0
100ac4870:     	bl	0x100bfcc3c <_writev+0x100bfcc3c>
100ac4874:     	add	x0, x19, #0x288
100ac4878:     	bl	0x100aca454 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d61c4>
100ac487c:     	add	x0, x19, #0x220
100ac4880:     	bl	0x100aca454 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d61c4>
100ac4884:     	mov	x0, x25
100ac4888:     	mov	x1, x24
100ac488c:     	bl	0x10003bf2c <__text+0x39394>
100ac4890:     	mov	x22, #0x0               ; =0
100ac4894:     	ldr	x23, [x19, #0x20]
100ac4898:     	mov	x25, x28
100ac489c:     	b	0x100ac3d38 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cfaa8>
100ac48a0:     	add	x0, x19, #0x288
100ac48a4:     	bl	0x100aca454 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d61c4>
100ac48a8:     	mov	x0, x25
100ac48ac:     	mov	x1, x24
100ac48b0:     	bl	0x10003bf2c <__text+0x39394>
100ac48b4:     	ldr	x23, [x19, #0x20]
100ac48b8:     	mov	x25, x28
100ac48bc:     	ldr	x0, [x28, x23]
100ac48c0:     	ldr	x28, [x19, #0x50]
100ac48c4:     	mov	x1, x28
100ac48c8:     	mov	w2, #0x0                ; =0
100ac48cc:     	bl	0x100bfba30 <_writev+0x100bfba30>
100ac48d0:     	ldr	x20, [x25, x23]
100ac48d4:     	str	xzr, [x19, #0x160]
100ac48d8:     	lsr	x8, x27, #62
100ac48dc:     	cmp	w8, #0x1
100ac48e0:     	b.gt	0x100ac4970 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d06e0>
100ac48e4:     	ldr	x21, [x19, #0x38]
100ac48e8:     	ldr	w24, [x19, #0x5c]
100ac48ec:     	cbnz	w8, 0x100ac498c <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d06fc>
100ac48f0:     	ldr	x11, [x19, #0xb8]
100ac48f4:     	lsr	x8, x11, #8
100ac48f8:     	strb	w11, [x19, #0x190]
100ac48fc:     	lsr	x9, x11, #16
100ac4900:     	lsr	x10, x11, #24
100ac4904:     	strb	w8, [x19, #0x191]
100ac4908:     	strb	w9, [x19, #0x192]
100ac490c:     	lsr	x8, x11, #32
100ac4910:     	lsr	x9, x11, #40
100ac4914:     	strb	w10, [x19, #0x193]
100ac4918:     	strb	w8, [x19, #0x194]
100ac491c:     	lsr	x8, x11, #48
100ac4920:     	lsr	x10, x11, #56
100ac4924:     	strb	w9, [x19, #0x195]
100ac4928:     	strb	w8, [x19, #0x196]
100ac492c:     	lsr	x8, x27, #8
100ac4930:     	lsr	x9, x27, #16
100ac4934:     	strb	w10, [x19, #0x197]
100ac4938:     	strb	w27, [x19, #0x198]
100ac493c:     	lsr	x10, x27, #24
100ac4940:     	lsr	x11, x27, #32
100ac4944:     	strb	w8, [x19, #0x199]
100ac4948:     	strb	w9, [x19, #0x19a]
100ac494c:     	lsr	x8, x27, #40
100ac4950:     	lsr	x9, x27, #48
100ac4954:     	strb	w10, [x19, #0x19b]
100ac4958:     	strb	w11, [x19, #0x19c]
100ac495c:     	add	x10, x19, #0x190
100ac4960:     	strb	w8, [x19, #0x19d]
100ac4964:     	add	x1, x10, w9, uxtb
100ac4968:     	add	x0, x19, #0x190
100ac496c:     	b	0x100ac49d0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0740>
100ac4970:     	cmp	w8, #0x2
100ac4974:     	ldr	x21, [x19, #0x38]
100ac4978:     	ldr	w24, [x19, #0x5c]
100ac497c:     	b.ne	0x100ac49bc <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d072c>
100ac4980:     	ldr	x8, [x19, #0xb8]
100ac4984:     	ldp	x0, x1, [x8, #0x10]
100ac4988:     	b	0x100ac49a0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0710>
100ac498c:     	ldr	x8, [x19, #0xb8]
100ac4990:     	sxtw	x0, w8
100ac4994:     	asr	x1, x8, #32
100ac4998:     	cmp	x1, x0
100ac499c:     	b.lt	0x100ac5294 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d1004>
100ac49a0:     	and	x2, x27, #0x3fffffffffffffff
100ac49a4:     	add	x3, x19, #0x160
100ac49a8:     	ldr	x4, [x19, #0x48]
100ac49ac:     	ldr	x5, [x19, #0xd0]
100ac49b0:     	mov	x6, x20
100ac49b4:     	bl	0x100ac9f90 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d5d00>
100ac49b8:     	b	0x100ac49e4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0754>
100ac49bc:     	add	x8, x19, #0x160
100ac49c0:     	stur	xzr, [x8, #0x36]
100ac49c4:     	str	xzr, [x19, #0x190]
100ac49c8:     	add	x0, x19, #0x190
100ac49cc:     	add	x1, x19, #0x190
100ac49d0:     	add	x2, x19, #0x160
100ac49d4:     	ldr	x3, [x19, #0x48]
100ac49d8:     	ldr	x4, [x19, #0xd0]
100ac49dc:     	mov	x5, x20
100ac49e0:     	bl	0x100ad5e08 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8e1b78>
100ac49e4:     	mov	x22, x21
100ac49e8:     	mov	x0, x20
100ac49ec:     	bl	0x100bfb988 <_writev+0x100bfb988>
100ac49f0:     	cmp	w0, #0x1
100ac49f4:     	b.lt	0x100ac4a2c <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d079c>
100ac49f8:     	bl	0x100abcb78 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c88e8>
100ac49fc:     	mov	x1, x0
100ac4a00:     	adrp	x0, 0x100f31000 <_writev+0x100f31000>
100ac4a04:     	add	x0, x0, #0x588
100ac4a08:     	mov	x2, #0x0                ; =0
100ac4a0c:     	mov	w3, #0x0                ; =0
100ac4a10:     	bl	0x100bfc504 <_writev+0x100bfc504>
100ac4a14:     	mov	x26, x0
100ac4a18:     	mov	w8, #0x1                ; =1
100ac4a1c:     	strb	w8, [x1]
100ac4a20:     	mov	x21, x0
100ac4a24:     	bl	0x100bfcc3c <_writev+0x100bfcc3c>
100ac4a28:     	b	0x100ac4c9c <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0a0c>
100ac4a2c:     	ldr	w12, [x19, #0x34]
100ac4a30:     	and	w9, w12, #0xff0000
100ac4a34:     	and	w8, w24, #0xff
100ac4a38:     	mov	w10, #0x1a4             ; =420
100ac4a3c:     	mov	w11, #0x1ed             ; =493
100ac4a40:     	cmp	w8, #0x1
100ac4a44:     	csel	w10, w11, w10, eq
100ac4a48:     	cmp	w9, #0x10, lsl #12      ; =0x10000
100ac4a4c:     	csel	w20, w10, w12, eq
100ac4a50:     	cbz	w8, 0x100ac4c68 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d09d8>
100ac4a54:     	cmp	w8, #0x1
100ac4a58:     	b.ne	0x100ac4c70 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d09e0>
100ac4a5c:     	bl	0x100bf5334 <_writev+0x100bf5334>
100ac4a60:     	b	0x100ac4c74 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d09e4>
100ac4a64:     	bl	0x100ab8c74 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c49e4>
100ac4a68:     	mov	x1, x0
100ac4a6c:     	adrp	x0, 0x100f31000 <_writev+0x100f31000>
100ac4a70:     	add	x0, x0, #0x130
100ac4a74:     	mov	x2, #0x0                ; =0
100ac4a78:     	mov	w3, #0x0                ; =0
100ac4a7c:     	bl	0x100bfc504 <_writev+0x100bfc504>
100ac4a80:     	mov	x26, x0
100ac4a84:     	mov	w8, #0x5                ; =5
100ac4a88:     	strb	w8, [x1]
100ac4a8c:     	mov	x21, x26
100ac4a90:     	bl	0x100bfcc3c <_writev+0x100bfcc3c>
100ac4a94:     	ldr	x0, [x19, #0xc0]
100ac4a98:     	bl	0x100bfc594 <_writev+0x100bfc594>
100ac4a9c:     	add	x0, x19, #0x288
100ac4aa0:     	b	0x100ac4ca0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0a10>
100ac4aa4:     	and	x20, x27, #0x3fffffffffffffff
100ac4aa8:     	bl	0x100bf43c8 <_writev+0x100bf43c8>
100ac4aac:     	mov	x0, #0x0                ; =0
100ac4ab0:     	mov	x1, #0x0                ; =0
100ac4ab4:     	add	x2, x19, #0xe8
100ac4ab8:     	ldp	x3, x21, [x19, #0xb8]
100ac4abc:     	mov	x4, x27
100ac4ac0:     	mov	x5, x24
100ac4ac4:     	bl	0x100ad5d64 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8e1ad4>
100ac4ac8:     	mov	x0, x24
100ac4acc:     	bl	0x100bfb988 <_writev+0x100bfb988>
100ac4ad0:     	cmp	w0, #0x1
100ac4ad4:     	ldr	x22, [x19, #0x18]
100ac4ad8:     	b.lt	0x100ac4b10 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0880>
100ac4adc:     	bl	0x100abcb78 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c88e8>
100ac4ae0:     	mov	x1, x0
100ac4ae4:     	adrp	x0, 0x100f31000 <_writev+0x100f31000>
100ac4ae8:     	add	x0, x0, #0x588
100ac4aec:     	mov	x2, #0x0                ; =0
100ac4af0:     	mov	w3, #0x0                ; =0
100ac4af4:     	bl	0x100bfc504 <_writev+0x100bfc504>
100ac4af8:     	mov	x26, x0
100ac4afc:     	mov	w8, #0x1                ; =1
100ac4b00:     	strb	w8, [x1]
100ac4b04:     	mov	x21, x0
100ac4b08:     	bl	0x100bfcc3c <_writev+0x100bfcc3c>
100ac4b0c:     	b	0x100ac5134 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0ea4>
100ac4b10:     	ldr	x8, [x19, #0x318]
100ac4b14:     	lsr	x8, x8, #60
100ac4b18:     	cmp	x8, #0xe
100ac4b1c:     	b.hi	0x100ac4f5c <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0ccc>
100ac4b20:     	add	x9, x19, #0x160
100ac4b24:     	ldp	q0, q1, [x9, #0x1b0]
100ac4b28:     	stp	q0, q1, [x9, #0x2b0]
100ac4b2c:     	ldr	w8, [x19, #0x330]
100ac4b30:     	str	w8, [x19, #0x430]
100ac4b34:     	ldp	q2, q3, [x9, #0x170]
100ac4b38:     	stp	q2, q3, [x9, #0x270]
100ac4b3c:     	ldp	q5, q4, [x9, #0x190]
100ac4b40:     	stp	q5, q4, [x9, #0x290]
100ac4b44:     	stp	q2, q3, [x9, #0x30]
100ac4b48:     	str	w8, [x19, #0x1f0]
100ac4b4c:     	stp	q5, q4, [x9, #0x50]
100ac4b50:     	stp	q0, q1, [x9, #0x70]
100ac4b54:     	add	x0, x19, #0x190
100ac4b58:     	add	x1, x19, #0x220
100ac4b5c:     	bl	0x100aca488 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d61f8>
100ac4b60:     	add	x20, x19, #0x3d0
100ac4b64:     	bl	0x100accae0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d8850>
100ac4b68:     	mov	x24, x0
100ac4b6c:     	mov	x23, x1
100ac4b70:     	ldr	x8, [x19, #0x20]
100ac4b74:     	ldr	x25, [x22, x8]
100ac4b78:     	lsr	x8, x1, #62
100ac4b7c:     	cmp	w8, #0x1
100ac4b80:     	b.gt	0x100ac4c04 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0974>
100ac4b84:     	cbnz	w8, 0x100ac4cf8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0a68>
100ac4b88:     	strb	w24, [x19, #0x220]
100ac4b8c:     	lsr	x8, x24, #8
100ac4b90:     	strb	w8, [x19, #0x221]
100ac4b94:     	lsr	x8, x24, #16
100ac4b98:     	strb	w8, [x19, #0x222]
100ac4b9c:     	lsr	x8, x24, #24
100ac4ba0:     	strb	w8, [x19, #0x223]
100ac4ba4:     	lsr	x8, x24, #32
100ac4ba8:     	strb	w8, [x19, #0x224]
100ac4bac:     	lsr	x8, x24, #40
100ac4bb0:     	strb	w8, [x19, #0x225]
100ac4bb4:     	lsr	x8, x24, #48
100ac4bb8:     	strb	w8, [x19, #0x226]
100ac4bbc:     	lsr	x8, x24, #56
100ac4bc0:     	strb	w8, [x19, #0x227]
100ac4bc4:     	lsr	x8, x23, #8
100ac4bc8:     	strb	w23, [x19, #0x228]
100ac4bcc:     	lsr	x9, x23, #16
100ac4bd0:     	strb	w8, [x19, #0x229]
100ac4bd4:     	lsr	x8, x23, #24
100ac4bd8:     	strb	w9, [x19, #0x22a]
100ac4bdc:     	lsr	x9, x23, #32
100ac4be0:     	strb	w8, [x19, #0x22b]
100ac4be4:     	lsr	x8, x23, #40
100ac4be8:     	strb	w9, [x19, #0x22c]
100ac4bec:     	strb	w8, [x19, #0x22d]
100ac4bf0:     	tst	x23, #0xff000000000000
100ac4bf4:     	b.eq	0x100ac4ed8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0c48>
100ac4bf8:     	ubfx	x2, x23, #48, #8
100ac4bfc:     	add	x0, x19, #0x220
100ac4c00:     	b	0x100ac4d5c <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0acc>
100ac4c04:     	cmp	w8, #0x2
100ac4c08:     	b.ne	0x100ac4ed8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0c48>
100ac4c0c:     	ldp	x26, x27, [x24, #0x10]
100ac4c10:     	and	x20, x23, #0x3fffffffffffffff
100ac4c14:     	bl	0x100bf43b0 <_writev+0x100bf43b0>
100ac4c18:     	mov	x22, x0
100ac4c1c:     	cbz	x0, 0x100ac4c34 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d09a4>
100ac4c20:     	and	x20, x23, #0x3fffffffffffffff
100ac4c24:     	bl	0x100bf43d4 <_writev+0x100bf43d4>
100ac4c28:     	subs	x8, x26, x0
100ac4c2c:     	b.vs	0x100ac52b4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d1024>
100ac4c30:     	add	x22, x8, x22
100ac4c34:     	subs	x26, x27, x26
100ac4c38:     	b.vs	0x100ac52a8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d1018>
100ac4c3c:     	and	x20, x23, #0x3fffffffffffffff
100ac4c40:     	bl	0x100bf43c8 <_writev+0x100bf43c8>
100ac4c44:     	ldr	x27, [x19, #0x90]
100ac4c48:     	cbz	x22, 0x100ac4ed8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0c48>
100ac4c4c:     	cmp	x0, x26
100ac4c50:     	csel	x8, x0, x26, lt
100ac4c54:     	cbz	x8, 0x100ac4ed8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0c48>
100ac4c58:     	ldp	x9, x8, [x24, #0x10]
100ac4c5c:     	subs	x2, x8, x9
100ac4c60:     	b.vc	0x100ac4d58 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0ac8>
100ac4c64:     	brk	#0x1
100ac4c68:     	bl	0x100bf5358 <_writev+0x100bf5358>
100ac4c6c:     	b	0x100ac4c74 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d09e4>
100ac4c70:     	bl	0x100bf534c <_writev+0x100bf534c>
100ac4c74:     	orr	w8, w0, w20
100ac4c78:     	lsl	w2, w8, #16
100ac4c7c:     	add	x8, x19, #0x338
100ac4c80:     	add	x0, x19, #0x440
100ac4c84:     	ldr	x1, [x19, #0x8]
100ac4c88:     	mov	x20, x25
100ac4c8c:     	mov	x21, x22
100ac4c90:     	bl	0x100abb758 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c74c8>
100ac4c94:     	mov	x26, x21
100ac4c98:     	cbz	x21, 0x100ac4cb0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0a20>
100ac4c9c:     	add	x0, x19, #0x220
100ac4ca0:     	bl	0x100aca454 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d61c4>
100ac4ca4:     	mov	x22, #0x0               ; =0
100ac4ca8:     	ldr	x20, [x19, #0x48]
100ac4cac:     	b	0x100ac3d38 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8cfaa8>
100ac4cb0:     	ldr	x0, [x25, x23]
100ac4cb4:     	bl	0x100bfba78 <_writev+0x100bfba78>
100ac4cb8:     	tbnz	x0, #0x3f, 0x100ac4d6c <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0adc>
100ac4cbc:     	mov	x2, x0
100ac4cc0:     	add	x8, x19, #0x190
100ac4cc4:     	add	x0, x19, #0x338
100ac4cc8:     	mov	x1, x28
100ac4ccc:     	mov	w3, #0x1                ; =1
100ac4cd0:     	mov	x20, x25
100ac4cd4:     	mov	x21, x26
100ac4cd8:     	bl	0x100abbee8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c7c58>
100ac4cdc:     	mov	x26, x21
100ac4ce0:     	cbz	x21, 0x100ac4db0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0b20>
100ac4ce4:     	add	x0, x19, #0x220
100ac4ce8:     	bl	0x100aca454 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d61c4>
100ac4cec:     	add	x0, x19, #0x338
100ac4cf0:     	bl	0x100abce14 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c8b84>
100ac4cf4:     	b	0x100ac4ca4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0a14>
100ac4cf8:     	sxtw	x27, w24
100ac4cfc:     	asr	x8, x24, #32
100ac4d00:     	subs	x26, x8, x27
100ac4d04:     	b.lt	0x100ac52a4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d1014>
100ac4d08:     	and	x20, x23, #0x3fffffffffffffff
100ac4d0c:     	bl	0x100bf43b0 <_writev+0x100bf43b0>
100ac4d10:     	cbz	x0, 0x100ac4ecc <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0c3c>
100ac4d14:     	mov	x22, x0
100ac4d18:     	and	x20, x23, #0x3fffffffffffffff
100ac4d1c:     	bl	0x100bf43d4 <_writev+0x100bf43d4>
100ac4d20:     	subs	x8, x27, x0
100ac4d24:     	b.vs	0x100ac52b8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d1028>
100ac4d28:     	add	x22, x8, x22
100ac4d2c:     	and	x20, x23, #0x3fffffffffffffff
100ac4d30:     	bl	0x100bf43c8 <_writev+0x100bf43c8>
100ac4d34:     	ldr	x27, [x19, #0x90]
100ac4d38:     	cbz	x22, 0x100ac4ed8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0c48>
100ac4d3c:     	cmp	x0, x26
100ac4d40:     	csel	x8, x0, x26, lt
100ac4d44:     	cbz	x8, 0x100ac4ed8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0c48>
100ac4d48:     	lsr	x8, x24, #32
100ac4d4c:     	subs	w8, w8, w24
100ac4d50:     	b.vs	0x100ac52c0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d1030>
100ac4d54:     	sxtw	x2, w8
100ac4d58:     	mov	x0, x22
100ac4d5c:     	mov	w1, #0x1                ; =1
100ac4d60:     	mov	x3, x25
100ac4d64:     	bl	0x100bfbad8 <_writev+0x100bfbad8>
100ac4d68:     	b	0x100ac4ed8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0c48>
100ac4d6c:     	bl	0x100ab8c74 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c49e4>
100ac4d70:     	mov	x1, x0
100ac4d74:     	adrp	x0, 0x100f31000 <_writev+0x100f31000>
100ac4d78:     	add	x0, x0, #0x130
100ac4d7c:     	mov	x2, #0x0                ; =0
100ac4d80:     	mov	w3, #0x0                ; =0
100ac4d84:     	bl	0x100bfc504 <_writev+0x100bfc504>
100ac4d88:     	mov	x26, x0
100ac4d8c:     	mov	w8, #0x1                ; =1
100ac4d90:     	strb	w8, [x1]
100ac4d94:     	mov	x21, x0
100ac4d98:     	bl	0x100bfcc3c <_writev+0x100bfcc3c>
100ac4d9c:     	add	x0, x19, #0x338
100ac4da0:     	bl	0x100abce14 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c8b84>
100ac4da4:     	b	0x100ac4c9c <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0a0c>
100ac4da8:     	brk	#0x1
100ac4dac:     	brk	#0x1
100ac4db0:     	ldr	w20, [x19, #0x190]
100ac4db4:     	add	x28, x19, #0x160
100ac4db8:     	ldur	d8, [x28, #0x34]
100ac4dbc:     	ldur	d9, [x28, #0x3c]
100ac4dc0:     	ldrh	w22, [x19, #0x1a4]
100ac4dc4:     	ldp	x23, x24, [x19, #0x1a8]
100ac4dc8:     	ldur	q1, [x28, #0x68]
100ac4dcc:     	ldur	q2, [x28, #0x58]
100ac4dd0:     	ldur	q0, [x28, #0x88]
100ac4dd4:     	stp	q0, q1, [x19, #0xc0]
100ac4dd8:     	ldur	q0, [x28, #0x78]
100ac4ddc:     	stp	q0, q2, [x19, #0x80]
100ac4de0:     	ldur	q0, [x28, #0xa8]
100ac4de4:     	str	q0, [x19, #0xa0]
100ac4de8:     	ldur	q0, [x28, #0x98]
100ac4dec:     	str	q0, [x19, #0x60]
100ac4df0:     	str	x26, [x19, #0x38]
100ac4df4:     	mov	x26, x25
100ac4df8:     	ldr	w25, [x19, #0x218]
100ac4dfc:     	add	x0, x19, #0x338
100ac4e00:     	bl	0x100abce14 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c8b84>
100ac4e04:     	add	x0, x19, #0x220
100ac4e08:     	bl	0x100aca454 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d61c4>
100ac4e0c:     	ldr	x9, [x19, #0x78]
100ac4e10:     	ldp	q0, q1, [x9]
100ac4e14:     	str	q0, [x19, #0x160]
100ac4e18:     	str	q1, [x28, #0x10]
100ac4e1c:     	ldr	x8, [x9, #0x20]
100ac4e20:     	str	x8, [x19, #0x180]
100ac4e24:     	str	w20, [x9]
100ac4e28:     	stur	d8, [x9, #0x4]
100ac4e2c:     	stur	d9, [x9, #0xc]
100ac4e30:     	strh	w22, [x9, #0x14]
100ac4e34:     	stp	x23, x24, [x9, #0x18]
100ac4e38:     	add	x0, x19, #0x160
100ac4e3c:     	bl	0x100abcbf4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c8964>
100ac4e40:     	ldr	x9, [x19, #0x28]
100ac4e44:     	ldp	q0, q1, [x9, #0x40]
100ac4e48:     	stp	q0, q1, [x28, #0x70]
100ac4e4c:     	ldr	w8, [x9, #0x60]
100ac4e50:     	str	w8, [x19, #0x1f0]
100ac4e54:     	ldp	q0, q1, [x9]
100ac4e58:     	stp	q0, q1, [x28, #0x30]
100ac4e5c:     	ldp	q1, q0, [x9, #0x20]
100ac4e60:     	stp	q1, q0, [x28, #0x50]
100ac4e64:     	ldr	q1, [x19, #0x90]
100ac4e68:     	ldr	q0, [x19, #0xd0]
100ac4e6c:     	stp	q1, q0, [x9]
100ac4e70:     	ldr	q1, [x19, #0x80]
100ac4e74:     	ldr	q0, [x19, #0xc0]
100ac4e78:     	stp	q1, q0, [x9, #0x20]
100ac4e7c:     	ldr	q1, [x19, #0x60]
100ac4e80:     	ldr	q0, [x19, #0xa0]
100ac4e84:     	stp	q1, q0, [x9, #0x40]
100ac4e88:     	str	w25, [x9, #0x60]
100ac4e8c:     	adrp	x20, 0x100ff8000 <_writev+0x100ff8000>
100ac4e90:     	add	x20, x20, #0x2d0
100ac4e94:     	adrp	x22, 0x100c94000 <_writev+0x100c94000>
100ac4e98:     	add	x22, x22, #0x208
100ac4e9c:     	add	x0, x19, #0x190
100ac4ea0:     	mov	x1, x20
100ac4ea4:     	mov	x2, x22
100ac4ea8:     	bl	0x1000fb4c4 <__text+0xf892c>
100ac4eac:     	ldr	x8, [x19, #0x20]
100ac4eb0:     	ldr	x0, [x26, x8]
100ac4eb4:     	ldr	x26, [x19, #0x38]
100ac4eb8:     	bl	0x100bfb994 <_writev+0x100bfb994>
100ac4ebc:     	add	x0, x19, #0x2d0
100ac4ec0:     	mov	x1, x20
100ac4ec4:     	mov	x2, x22
100ac4ec8:     	b	0x100ac5158 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0ec8>
100ac4ecc:     	and	x20, x23, #0x3fffffffffffffff
100ac4ed0:     	bl	0x100bf43c8 <_writev+0x100bf43c8>
100ac4ed4:     	ldr	x27, [x19, #0x90]
100ac4ed8:     	mov	x0, x25
100ac4edc:     	bl	0x100bfb988 <_writev+0x100bfb988>
100ac4ee0:     	cmp	w0, #0x1
100ac4ee4:     	b.lt	0x100ac4f34 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0ca4>
100ac4ee8:     	bl	0x100abcb78 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c88e8>
100ac4eec:     	mov	x1, x0
100ac4ef0:     	adrp	x0, 0x100f31000 <_writev+0x100f31000>
100ac4ef4:     	add	x0, x0, #0x588
100ac4ef8:     	mov	x2, #0x0                ; =0
100ac4efc:     	mov	w3, #0x0                ; =0
100ac4f00:     	bl	0x100bfc504 <_writev+0x100bfc504>
100ac4f04:     	mov	x26, x0
100ac4f08:     	mov	w8, #0x1                ; =1
100ac4f0c:     	strb	w8, [x1]
100ac4f10:     	mov	x21, x0
100ac4f14:     	bl	0x100bfcc3c <_writev+0x100bfcc3c>
100ac4f18:     	adrp	x1, 0x100ff8000 <_writev+0x100ff8000>
100ac4f1c:     	add	x1, x1, #0x2d0
100ac4f20:     	adrp	x2, 0x100c94000 <_writev+0x100c94000>
100ac4f24:     	add	x2, x2, #0x208
100ac4f28:     	add	x0, x19, #0x2d0
100ac4f2c:     	bl	0x1000fb4c4 <__text+0xf892c>
100ac4f30:     	b	0x100ac5124 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0e94>
100ac4f34:     	adrp	x1, 0x100ff8000 <_writev+0x100ff8000>
100ac4f38:     	add	x1, x1, #0x2d0
100ac4f3c:     	adrp	x2, 0x100c94000 <_writev+0x100c94000>
100ac4f40:     	add	x2, x2, #0x208
100ac4f44:     	add	x0, x19, #0x2d0
100ac4f48:     	bl	0x1000fb4c4 <__text+0xf892c>
100ac4f4c:     	mov	x0, x24
100ac4f50:     	mov	x1, x23
100ac4f54:     	bl	0x10003bf2c <__text+0x39394>
100ac4f58:     	ldr	x22, [x19, #0x18]
100ac4f5c:     	add	x20, x19, #0x3a0
100ac4f60:     	bl	0x100acf2b4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8db024>
100ac4f64:     	mov	x24, x0
100ac4f68:     	mov	x23, x1
100ac4f6c:     	ldr	x8, [x19, #0x20]
100ac4f70:     	ldr	x25, [x22, x8]
100ac4f74:     	lsr	x8, x1, #62
100ac4f78:     	cmp	w8, #0x1
100ac4f7c:     	b.gt	0x100ac5000 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0d70>
100ac4f80:     	cbnz	w8, 0x100ac5064 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0dd4>
100ac4f84:     	strb	w24, [x19, #0x190]
100ac4f88:     	lsr	x8, x24, #8
100ac4f8c:     	strb	w8, [x19, #0x191]
100ac4f90:     	lsr	x8, x24, #16
100ac4f94:     	strb	w8, [x19, #0x192]
100ac4f98:     	lsr	x8, x24, #24
100ac4f9c:     	strb	w8, [x19, #0x193]
100ac4fa0:     	lsr	x8, x24, #32
100ac4fa4:     	strb	w8, [x19, #0x194]
100ac4fa8:     	lsr	x8, x24, #40
100ac4fac:     	strb	w8, [x19, #0x195]
100ac4fb0:     	lsr	x8, x24, #48
100ac4fb4:     	strb	w8, [x19, #0x196]
100ac4fb8:     	lsr	x8, x24, #56
100ac4fbc:     	strb	w8, [x19, #0x197]
100ac4fc0:     	lsr	x8, x23, #8
100ac4fc4:     	strb	w23, [x19, #0x198]
100ac4fc8:     	lsr	x9, x23, #16
100ac4fcc:     	strb	w8, [x19, #0x199]
100ac4fd0:     	lsr	x8, x23, #24
100ac4fd4:     	strb	w9, [x19, #0x19a]
100ac4fd8:     	lsr	x9, x23, #32
100ac4fdc:     	strb	w8, [x19, #0x19b]
100ac4fe0:     	lsr	x8, x23, #40
100ac4fe4:     	strb	w9, [x19, #0x19c]
100ac4fe8:     	strb	w8, [x19, #0x19d]
100ac4fec:     	tst	x23, #0xff000000000000
100ac4ff0:     	b.eq	0x100ac50e4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0e54>
100ac4ff4:     	ubfx	x2, x23, #48, #8
100ac4ff8:     	add	x0, x19, #0x190
100ac4ffc:     	b	0x100ac50c8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0e38>
100ac5000:     	cmp	w8, #0x2
100ac5004:     	b.ne	0x100ac50e4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0e54>
100ac5008:     	ldp	x26, x27, [x24, #0x10]
100ac500c:     	and	x20, x23, #0x3fffffffffffffff
100ac5010:     	bl	0x100bf43b0 <_writev+0x100bf43b0>
100ac5014:     	mov	x22, x0
100ac5018:     	cbz	x0, 0x100ac5030 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0da0>
100ac501c:     	and	x20, x23, #0x3fffffffffffffff
100ac5020:     	bl	0x100bf43d4 <_writev+0x100bf43d4>
100ac5024:     	subs	x8, x26, x0
100ac5028:     	b.vs	0x100ac52ac <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d101c>
100ac502c:     	add	x22, x8, x22
100ac5030:     	subs	x26, x27, x26
100ac5034:     	b.vs	0x100ac52a0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d1010>
100ac5038:     	and	x20, x23, #0x3fffffffffffffff
100ac503c:     	bl	0x100bf43c8 <_writev+0x100bf43c8>
100ac5040:     	ldr	x27, [x19, #0x90]
100ac5044:     	cbz	x22, 0x100ac50e4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0e54>
100ac5048:     	cmp	x0, x26
100ac504c:     	csel	x8, x0, x26, lt
100ac5050:     	cbz	x8, 0x100ac50e4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0e54>
100ac5054:     	ldp	x9, x8, [x24, #0x10]
100ac5058:     	subs	x2, x8, x9
100ac505c:     	b.vc	0x100ac50c4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0e34>
100ac5060:     	brk	#0x1
100ac5064:     	sxtw	x27, w24
100ac5068:     	asr	x8, x24, #32
100ac506c:     	subs	x26, x8, x27
100ac5070:     	b.lt	0x100ac529c <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d100c>
100ac5074:     	and	x20, x23, #0x3fffffffffffffff
100ac5078:     	bl	0x100bf43b0 <_writev+0x100bf43b0>
100ac507c:     	cbz	x0, 0x100ac50d8 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0e48>
100ac5080:     	mov	x22, x0
100ac5084:     	and	x20, x23, #0x3fffffffffffffff
100ac5088:     	bl	0x100bf43d4 <_writev+0x100bf43d4>
100ac508c:     	subs	x8, x27, x0
100ac5090:     	b.vs	0x100ac52b0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d1020>
100ac5094:     	add	x22, x8, x22
100ac5098:     	and	x20, x23, #0x3fffffffffffffff
100ac509c:     	bl	0x100bf43c8 <_writev+0x100bf43c8>
100ac50a0:     	ldr	x27, [x19, #0x90]
100ac50a4:     	cbz	x22, 0x100ac50e4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0e54>
100ac50a8:     	cmp	x0, x26
100ac50ac:     	csel	x8, x0, x26, lt
100ac50b0:     	cbz	x8, 0x100ac50e4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0e54>
100ac50b4:     	lsr	x8, x24, #32
100ac50b8:     	subs	w8, w8, w24
100ac50bc:     	b.vs	0x100ac52bc <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d102c>
100ac50c0:     	sxtw	x2, w8
100ac50c4:     	mov	x0, x22
100ac50c8:     	mov	w1, #0x1                ; =1
100ac50cc:     	mov	x3, x25
100ac50d0:     	bl	0x100bfbad8 <_writev+0x100bfbad8>
100ac50d4:     	b	0x100ac50e4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0e54>
100ac50d8:     	and	x20, x23, #0x3fffffffffffffff
100ac50dc:     	bl	0x100bf43c8 <_writev+0x100bf43c8>
100ac50e0:     	ldr	x27, [x19, #0x90]
100ac50e4:     	mov	x0, x25
100ac50e8:     	bl	0x100bfb988 <_writev+0x100bfb988>
100ac50ec:     	cmp	w0, #0x1
100ac50f0:     	b.lt	0x100ac51b0 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0f20>
100ac50f4:     	bl	0x100abcb78 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c88e8>
100ac50f8:     	mov	x1, x0
100ac50fc:     	adrp	x0, 0x100f31000 <_writev+0x100f31000>
100ac5100:     	add	x0, x0, #0x588
100ac5104:     	mov	x2, #0x0                ; =0
100ac5108:     	mov	w3, #0x0                ; =0
100ac510c:     	bl	0x100bfc504 <_writev+0x100bfc504>
100ac5110:     	mov	x26, x0
100ac5114:     	mov	w8, #0x1                ; =1
100ac5118:     	strb	w8, [x1]
100ac511c:     	mov	x21, x0
100ac5120:     	bl	0x100bfcc3c <_writev+0x100bfcc3c>
100ac5124:     	mov	x0, x24
100ac5128:     	mov	x1, x23
100ac512c:     	bl	0x10003bf2c <__text+0x39394>
100ac5130:     	ldp	x22, x23, [x19, #0x18]
100ac5134:     	ldr	x0, [x19, #0x160]
100ac5138:     	bl	0x100bfc708 <_writev+0x100bfc708>
100ac513c:     	ldr	x0, [x22, x23]
100ac5140:     	bl	0x100bfb994 <_writev+0x100bfb994>
100ac5144:     	adrp	x1, 0x100ff8000 <_writev+0x100ff8000>
100ac5148:     	add	x1, x1, #0x2d0
100ac514c:     	adrp	x2, 0x100c94000 <_writev+0x100c94000>
100ac5150:     	add	x2, x2, #0x208
100ac5154:     	add	x0, x19, #0x2d0
100ac5158:     	bl	0x1000fb4c4 <__text+0xf892c>
100ac515c:     	add	x0, x19, #0x3a0
100ac5160:     	bl	0x100abcbf4 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c8964>
100ac5164:     	ldr	x0, [x19, #0xb8]
100ac5168:     	mov	x1, x27
100ac516c:     	bl	0x10003bf2c <__text+0x39394>
100ac5170:     	ldur	x8, [x29, #-0x78]
100ac5174:     	adrp	x9, 0x100ea8000 <_writev+0x100ea8000>
100ac5178:     	ldr	x9, [x9, #0x2f0]
100ac517c:     	ldr	x9, [x9]
100ac5180:     	cmp	x9, x8
100ac5184:     	b.ne	0x100ac5288 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0ff8>
100ac5188:     	mov	x21, x26
100ac518c:     	sub	sp, x29, #0x60
100ac5190:     	ldp	x29, x30, [sp, #0x60]
100ac5194:     	ldp	x20, x19, [sp, #0x50]
100ac5198:     	ldp	x23, x22, [sp, #0x40]
100ac519c:     	ldp	x25, x24, [sp, #0x30]
100ac51a0:     	ldp	x27, x26, [sp, #0x20]
100ac51a4:     	ldr	x28, [sp, #0x10]
100ac51a8:     	ldp	d9, d8, [sp], #0x70
100ac51ac:     	ret
100ac51b0:     	mov	x0, x24
100ac51b4:     	mov	x1, x23
100ac51b8:     	bl	0x10003bf2c <__text+0x39394>
100ac51bc:     	bl	0x100ab8c74 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8c49e4>
100ac51c0:     	mov	x1, x0
100ac51c4:     	adrp	x0, 0x100f31000 <_writev+0x100f31000>
100ac51c8:     	add	x0, x0, #0x130
100ac51cc:     	mov	x2, #0x0                ; =0
100ac51d0:     	mov	w3, #0x0                ; =0
100ac51d4:     	bl	0x100bfc504 <_writev+0x100bfc504>
100ac51d8:     	mov	x26, x0
100ac51dc:     	mov	w8, #0x5                ; =5
100ac51e0:     	strb	w8, [x1]
100ac51e4:     	mov	x21, x0
100ac51e8:     	bl	0x100bfcc3c <_writev+0x100bfcc3c>
100ac51ec:     	ldr	x0, [x19, #0x160]
100ac51f0:     	bl	0x100bfc708 <_writev+0x100bfc708>
100ac51f4:     	ldp	x9, x8, [x19, #0x18]
100ac51f8:     	ldr	x0, [x9, x8]
100ac51fc:     	b	0x100ac5140 <_$s9PasteCore23ListCollectionViewModelC11cancellable33_C50A33E0B7603F4E2FF65E9E00B7E6B5LL7Combine11Cancellable_pSgvs+0x8d0eb0>
100ac5200:     	brk	#0x1
100ac5204:     	brk	#0x1
100ac5208:     	brk	#0x1
100ac520c:     	brk	#0x1
100ac5210:     	brk	#0x1
100ac5214:     	brk	#0x1
100ac5218:     	brk	#0x1
100ac521c:     	brk	#0x1
100ac5220:     	brk	#0x1
100ac5224:     	brk	#0x1
100ac5228:     	brk	#0x1
100ac522c:     	brk	#0x1
100ac5230:     	brk	#0x1
100ac5234:     	brk	#0x1
100ac5238:     	brk	#0x1
100ac523c:     	brk	#0x1
100ac5240:     	brk	#0x1
100ac5244:     	brk	#0x1
100ac5248:     	brk	#0x1
100ac524c:     	brk	#0x1
100ac5250:     	brk	#0x1
100ac5254:     	brk	#0x1
100ac5258:     	brk	#0x1
100ac525c:     	brk	#0x1
100ac5260:     	brk	#0x1
100ac5264:     	brk	#0x1
100ac5268:     	brk	#0x1
100ac526c:     	brk	#0x1
100ac5270:     	brk	#0x1
100ac5274:     	brk	#0x1
100ac5278:     	brk	#0x1
100ac527c:     	brk	#0x1
100ac5280:     	brk	#0x1
100ac5284:     	brk	#0x1
100ac5288:     	bl	0x100bfb5a4 <_writev+0x100bfb5a4>
100ac528c:     	brk	#0x1
100ac5290:     	brk	#0x1
100ac5294:     	brk	#0x1
100ac5298:     	brk	#0x1
100ac529c:     	brk	#0x1
100ac52a0:     	brk	#0x1
100ac52a4:     	brk	#0x1
100ac52a8:     	brk	#0x1
100ac52ac:     	brk	#0x1
100ac52b0:     	brk	#0x1
100ac52b4:     	brk	#0x1
100ac52b8:     	brk	#0x1
100ac52bc:     	brk	#0x1
100ac52c0:     	brk	#0x1
