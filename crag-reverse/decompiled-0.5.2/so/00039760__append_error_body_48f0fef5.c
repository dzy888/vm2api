// 00039760 append_error_body

/* <agy_bridge[64a9e9deac6c45ce]::StreamSlot>::append_error_body */

void __rustcall
<agy_bridge[64a9e9deac6c45ce]::StreamSlot>::append_error_body
          (longlong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xe0);
  if (lVar1 == -1) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 1;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    lVar1 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = *(ulonglong *)(param_1 + 0xf0);
    if (0xffff < uVar2) {
      return;
    }
  }
  uVar3 = 0x10000 - uVar2;
  if (param_3 <= 0x10000 - uVar2) {
    uVar3 = param_3;
  }
  if (lVar1 - uVar2 < uVar3) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(param_1 + 0xe0,uVar2,uVar3,1,1);
    uVar2 = *(ulonglong *)(param_1 + 0xf0);
  }
  (*(code *)PTR_memcpy_000c3aa8)();
  *(ulonglong *)(param_1 + 0xf0) = uVar2 + uVar3;
  return;
}


