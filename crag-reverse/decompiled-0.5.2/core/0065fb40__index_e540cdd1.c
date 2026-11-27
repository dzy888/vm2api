// 0065fb40 index

/* <str as
   core[c0acaeba6ab4c2e0]::ops::index::Index<core[c0acaeba6ab4c2e0]::ops::range::RangeFrom<usize>>>::index
    */

undefined1  [16] __rustcall
<str_as_core[c0acaeba6ab4c2e0]::ops::index::Index<core[c0acaeba6ab4c2e0]::ops::range::RangeFrom<usize>>>
::index(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  undefined8 in_RAX;
  undefined1 uVar1;
  undefined1 auVar2 [16];
  
  if (param_3 != 0) {
    uVar1 = param_2 == param_3;
    if (param_2 <= param_3) goto LAB_0065fb61;
    uVar1 = *(char *)(param_1 + param_3) == -0x41;
    if (*(char *)(param_1 + param_3) < -0x40) {
      do {
        *(undefined8 *)((longlong)register0x00000020 + -8) = in_RAX;
        *(undefined8 *)((longlong)register0x00000020 + -0x10) = 0x65fb61;
        in_RAX = (*(code *)PTR_slice_error_fail_00799408)(param_2);
        register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
LAB_0065fb61:
      } while (!(bool)uVar1);
    }
  }
  auVar2._8_8_ = param_2 - param_3;
  auVar2._0_8_ = param_1 + param_3;
  return auVar2;
}


