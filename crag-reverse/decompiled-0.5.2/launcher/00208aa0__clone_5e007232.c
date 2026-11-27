// 00208aa0 clone

/* <alloc[12e961f32105355]::string::String as core[c0acaeba6ab4c2e0]::clone::Clone>::clone */

longlong * __rustcall
<alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::clone::Clone>::clone
          (longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  if (lVar1 == 0) {
    lVar3 = 1;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
    lVar3 = (*(code *)PTR___rust_alloc_00219c88)();
    if (lVar3 == 0) {
      (*(code *)PTR_handle_error_00219c78)();
      pcVar2 = (code *)swi(3);
      plVar4 = (longlong *)(*pcVar2)();
      return plVar4;
    }
    (*(code *)PTR_memcpy_00219c60)(param_4,lVar1);
  }
  *param_1 = lVar1;
  param_1[1] = lVar3;
  param_1[2] = lVar1;
  return param_1;
}


