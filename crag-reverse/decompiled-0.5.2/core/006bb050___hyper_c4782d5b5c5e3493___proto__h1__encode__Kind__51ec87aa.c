// 006bb050 <hyper[c4782d5b5c5e3493]::proto::h1::encode::Kind>

/* WARNING: Switch with 1 destination removed at 0x006bb0d8 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<hyper[c4782d5b5c5e3493]::proto::h1::encode::Kind> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<hyper[c4782d5b5c5e3493]::proto::h1::encode::Kind>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  if ((-0x7fffffffffffffff < lVar1) && (lVar1 != -1)) {
    if (param_1[2] != 0) {
      lVar2 = param_1[1] + 0x38;
      lVar3 = 1 - param_1[2];
      do {
        if (*(longlong *)(lVar2 + -0x38) != 0) {
          (**(code **)(*(longlong *)(lVar2 + -0x38) + 0x20))(param_4,*(undefined8 *)(lVar2 + -0x28))
          ;
        }
        lVar2 = lVar2 + 0x20;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 1);
    }
    if (lVar1 != 0) {
      (*(code *)PTR_free_0079adc8)(param_4,8);
      return;
    }
  }
  return;
}


