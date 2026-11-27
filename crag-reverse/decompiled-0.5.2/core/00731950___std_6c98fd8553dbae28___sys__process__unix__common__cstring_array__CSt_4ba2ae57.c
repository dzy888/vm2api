// 00731950 <std[6c98fd8553dbae28]::sys::process::unix::common::cstring_array::CStringArray>

/* WARNING: Switch with 1 destination removed at 0x007319dd */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sys::process::unix::common::cstring_array::CStringArray>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<std[6c98fd8553dbae28]::sys::process::unix::common::cstring_array::CStringArray>
          (longlong *param_1,undefined8 param_2,longlong param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  puVar3 = PTR_from_raw_0079ac50;
  puVar2 = PTR___rust_dealloc_00798fc8;
  lVar6 = param_1[2] + -1;
  if (param_1[2] == 0) {
    (*(code *)PTR_slice_index_fail_007993c8)(&PTR_s__rustc_48a229ceaefd4985c50990b14_007972a0,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (lVar6 != 0) {
    lVar5 = 0;
    do {
      puVar4 = (undefined1 *)(*(code *)puVar3)();
      *puVar4 = 0;
      bVar7 = param_3 != 0;
      param_3 = 0;
      if (bVar7) {
        param_3 = 1;
        (*(code *)puVar2)();
      }
      lVar5 = lVar5 + 8;
    } while (lVar6 * 8 != lVar5);
  }
  if (*param_1 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)();
  return;
}


