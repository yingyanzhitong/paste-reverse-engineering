.text
.p2align 2
.globl _oracle_call_context
_oracle_call_context:
  stp x20, x30, [sp, #-16]!
  mov x16, x0
  mov x20, x1
  mov x0, x2
  blr x16
  ldp x20, x30, [sp], #16
  ret

// f_1002d4830 uses an indirect Array result in x8, and writes an Error through
// x3 when it sets the Swift error flag x21. Data occupies x0/x1, maximum x2.
.p2align 2
.globl _oracle_call_request
_oracle_call_request:
  stp x21, x30, [sp, #-16]!
  mov x16, x0
  mov x8, x3
  mov x3, x4
  ldp x0, x1, [x1]
  mov x21, #0
  blr x16
  mov x0, x21
  ldp x21, x30, [sp], #16
  ret
