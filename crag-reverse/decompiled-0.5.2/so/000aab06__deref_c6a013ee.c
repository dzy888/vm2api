// 000aab06 deref

/* <gimli[a7f20a324fd82d99]::read::abbrev::Attributes as
   core[c0acaeba6ab4c2e0]::ops::deref::Deref>::deref */

undefined1  [16] __rustcall
<gimli[a7f20a324fd82d99]::read::abbrev::Attributes_as_core[c0acaeba6ab4c2e0]::ops::deref::Deref>::
deref(int *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (*param_1 == 1) {
    piVar1 = *(int **)(param_1 + 4);
    uVar3 = *(ulonglong *)(param_1 + 6);
  }
  else {
    uVar3 = *(ulonglong *)(param_1 + 2);
    if (5 < uVar3) {
      uVar2 = 5;
      auVar5._0_8_ = (*(code *)PTR_slice_index_fail_000c3bb0)
                               (&PTR_s__rust_deps_gimli_0_32_3_src_read_000c2468,5);
      auVar5._8_8_ = uVar2;
      return auVar5;
    }
    piVar1 = param_1 + 4;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = piVar1;
  return auVar4;
}


