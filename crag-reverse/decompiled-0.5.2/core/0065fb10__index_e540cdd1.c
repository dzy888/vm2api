// 0065fb10 index

/* <str as
   core[c0acaeba6ab4c2e0]::ops::index::Index<core[c0acaeba6ab4c2e0]::ops::range::RangeTo<usize>>>::index
    */

undefined1  [16] __rustcall
<str_as_core[c0acaeba6ab4c2e0]::ops::index::Index<core[c0acaeba6ab4c2e0]::ops::range::RangeTo<usize>>>
::index(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  undefined8 in_RAX;
  undefined1 uVar1;
  undefined1 auVar2 [16];
  
  if (param_3 != 0) {
    uVar1 = param_3 == param_2;
    if (param_2 <= param_3) goto LAB_0065fb33;
    if (*(char *)(param_1 + param_3) < -0x40) {
      do {
        *(undefined8 *)((longlong)register0x00000020 + -8) = in_RAX;
        uVar1 = 1;
        *(undefined8 *)((longlong)register0x00000020 + -0x10) = 0x65fb33;
        in_RAX = (*(code *)PTR_slice_error_fail_00799408)();
        register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
LAB_0065fb33:
      } while (!(bool)uVar1);
    }
  }
  auVar2._8_8_ = param_3;
  auVar2._0_8_ = param_1;
  return auVar2;
}


