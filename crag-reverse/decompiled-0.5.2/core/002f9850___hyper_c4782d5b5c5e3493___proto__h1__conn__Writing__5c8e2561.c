// 002f9850 <hyper[c4782d5b5c5e3493]::proto::h1::conn::Writing>

/* WARNING: Switch with 1 destination removed at 0x002f98f8 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<hyper[c4782d5b5c5e3493]::proto::h1::conn::Writing> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<hyper[c4782d5b5c5e3493]::proto::h1::conn::Writing>
          (longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  if (((3 < lVar1 + 0x7ffffffffffffffeU || lVar1 + 0x7ffffffffffffffeU == 1) &&
      (-0x7fffffffffffffff < lVar1)) && (lVar1 != -1)) {
    if (param_1[2] != 0) {
      lVar2 = param_1[1] + 0x38;
      lVar3 = 1 - param_1[2];
      do {
        if (*(longlong *)(lVar2 + -0x38) != 0) {
          (**(code **)(*(longlong *)(lVar2 + -0x38) + 0x20))();
        }
        lVar2 = lVar2 + 0x20;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 1);
    }
    if (lVar1 != 0) {
      (*(code *)PTR_free_0079adc8)();
      return;
    }
  }
  return;
}


