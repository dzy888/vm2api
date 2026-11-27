// 002e3990 index

/* <alloc[12e961f32105355]::string::String as
   core[c0acaeba6ab4c2e0]::ops::index::Index<core[c0acaeba6ab4c2e0]::ops::range::RangeTo<usize>>>::index
    */

longlong __rustcall
<alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::ops::index::Index<core[c0acaeba6ab4c2e0]::ops::range::RangeTo<usize>>>
::index(longlong param_1,ulonglong param_2)

{
  undefined8 in_RAX;
  
  if (0xc < param_2) goto LAB_002e39ad;
  if (param_2 != 0xc) {
    do {
      *(undefined8 *)((longlong)register0x00000020 + -8) = in_RAX;
      *(undefined8 *)((longlong)register0x00000020 + -0x10) = 0x2e39ad;
      in_RAX = (*(code *)PTR_slice_error_fail_00799408)
                         (0xc,0,&
                                PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_00784a98
                         );
      register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
LAB_002e39ad:
    } while (*(char *)(param_1 + 0xc) < -0x40);
  }
  return param_1;
}


