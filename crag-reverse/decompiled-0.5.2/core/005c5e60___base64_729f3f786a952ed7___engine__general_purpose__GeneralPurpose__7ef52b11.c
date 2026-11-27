// 005c5e60 <base64[729f3f786a952ed7]::engine::general_purpose::GeneralPurpose>

/* base64[729f3f786a952ed7]::engine::Engine::decode::inner::<base64[729f3f786a952ed7]::engine::general_purpose::GeneralPurpose>
    */

ulonglong * __rustcall
base64[729f3f786a952ed7]::engine::Engine::decode::inner::
<base64[729f3f786a952ed7]::engine::general_purpose::GeneralPurpose>
          (ulonglong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int local_58;
  byte local_50;
  uint local_4f;
  uint3 local_4b;
  ulonglong local_48;
  
  uVar4 = param_4 + 3U >> 2;
  uVar3 = uVar4 * 3;
  if (uVar4 == 0) {
    uVar2 = 1;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    uVar2 = (*(code *)PTR___rust_alloc_zeroed_007997c8)();
    if (uVar2 == 0) {
      (*(code *)PTR_handle_error_00798ff0)();
      if (uVar4 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
  }
  (*(code *)PTR_internal_decode_0079a030)(param_4,param_3,uVar2,uVar3);
  if (local_58 == 2) {
    if ((ulonglong)local_50 == 0xff) {
      (*(code *)PTR_panic_fmt_007991a8)();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar3 = (ulonglong)local_4f << 8 | (ulonglong)local_4b << 0x28 | (ulonglong)local_50;
    param_1[1] = uVar3;
    param_1[2] = local_48;
    *param_1 = 0xffffffffffffffff;
    if (uVar4 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar3,1);
    }
  }
  else {
    if (uVar3 <= local_48) {
      local_48 = uVar3;
    }
    *param_1 = uVar3;
    param_1[1] = uVar2;
    param_1[2] = local_48;
  }
  return param_1;
}


