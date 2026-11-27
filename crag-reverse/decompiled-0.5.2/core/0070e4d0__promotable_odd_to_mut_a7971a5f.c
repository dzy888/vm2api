// 0070e4d0 promotable_odd_to_mut

/* bytes[e9829e187354639b]::bytes::promotable_odd_to_mut */

ulonglong * __rustcall
bytes[e9829e187354639b]::bytes::promotable_odd_to_mut
          (ulonglong *param_1,ulonglong param_2,longlong param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong *local_38;
  
  if ((param_2 & 1) == 0) {
    shared_to_mut_impl(param_1);
  }
  else {
    local_48 = (param_3 - param_2) + param_4;
    uVar3 = 0x3f;
    if (local_48 >> 10 != 0) {
      for (; (local_48 >> 10) >> uVar3 == 0; uVar3 = uVar3 - 1) {
      }
    }
    uVar4 = (uVar3 ^ 0xffffffffffffffc0) + 0x41;
    uVar3 = 7;
    if (uVar4 < 7) {
      uVar3 = uVar4;
    }
    puVar1 = (ulonglong *)((uVar3 & 0xffffffff) * 4 + 1);
    uVar3 = param_3 - param_2;
    local_50 = param_2;
    local_40 = local_48;
    local_38 = puVar1;
    if (uVar3 != 0) {
      if (uVar3 >> 0x3b == 0) {
        local_38 = puVar1 + uVar3 * 4;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        local_38 = (ulonglong *)(*(code *)PTR___rust_alloc_00799000)();
        if (local_38 == (ulonglong *)0x0) {
          (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        *local_38 = local_48;
        local_38[1] = param_2;
        local_38[2] = local_48;
        local_38[3] = (ulonglong)((uint)((ulonglong)puVar1 >> 2) & 7);
        local_38[4] = 1;
      }
      local_50 = param_2 + uVar3;
      bVar5 = uVar3 <= local_48;
      uVar3 = local_48 - uVar3;
      local_48 = 0;
      if (bVar5) {
        local_48 = uVar3;
      }
      local_40 = param_4;
    }
    param_1[2] = local_40;
    param_1[3] = (ulonglong)local_38;
    *param_1 = local_50;
    param_1[1] = local_48;
  }
  return param_1;
}


