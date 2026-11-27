// 001f9540 drop

/* <std[6c98fd8553dbae28]::sys::process::unix::common::cstring_array::CStringArray as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<std[6c98fd8553dbae28]::sys::process::unix::common::cstring_array::CStringArray_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong param_1,undefined8 param_2,longlong param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  puVar3 = PTR_from_raw_0021a780;
  puVar2 = PTR___rust_dealloc_00219c40;
  lVar5 = *(longlong *)(param_1 + 0x10) + -1;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    (*(code *)PTR_slice_index_fail_00219d80)(&PTR_s__rustc_48a229ceaefd4985c50990b14_002181a0,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (lVar5 != 0) {
    lVar6 = 0;
    do {
      puVar4 = (undefined1 *)(*(code *)puVar3)();
      *puVar4 = 0;
      bVar7 = param_3 != 0;
      param_3 = 0;
      if (bVar7) {
        param_3 = 1;
        (*(code *)puVar2)();
      }
      lVar6 = lVar6 + 8;
    } while (lVar5 * 8 != lVar6);
  }
  return;
}


