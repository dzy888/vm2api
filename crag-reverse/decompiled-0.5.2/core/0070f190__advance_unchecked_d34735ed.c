// 0070f190 advance_unchecked

/* <bytes[e9829e187354639b]::bytes_mut::BytesMut>::advance_unchecked */

void __rustcall
<bytes[e9829e187354639b]::bytes_mut::BytesMut>::advance_unchecked
          (longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  if (param_2 != 0) {
    uVar1 = param_1[3];
    if ((uVar1 & 1) != 0) {
      uVar6 = uVar1 >> 5;
      if (uVar6 + param_2 >> 0x3b == 0) {
        plVar5 = (longlong *)((ulonglong)((uint)uVar1 & 0x1f) | (uVar6 + param_2) * 0x20);
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        plVar5 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
        if (plVar5 == (longlong *)0x0) {
          (*(code *)PTR_handle_alloc_error_007991d8)();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar4 = *param_1;
        lVar2 = param_1[1];
        *plVar5 = uVar6 + param_1[2];
        plVar5[1] = lVar4 - uVar6;
        plVar5[2] = lVar2 + uVar6;
        plVar5[3] = (ulonglong)((uint)uVar1 >> 2 & 7);
        plVar5[4] = 1;
      }
      param_1[3] = (longlong)plVar5;
    }
    *param_1 = *param_1 + param_2;
    lVar4 = 0;
    if (param_2 <= (ulonglong)param_1[1]) {
      lVar4 = param_1[1] - param_2;
    }
    param_1[1] = lVar4;
    param_1[2] = param_1[2] - param_2;
  }
  return;
}


