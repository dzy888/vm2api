// 00188c10 clone

/* <alloc[12e961f32105355]::vec::Vec<craggemini[b21da2d71f2da7a3]::license::host::HostGrant> as
   core[c0acaeba6ab4c2e0]::clone::Clone>::clone */

ulonglong * __rustcall
<alloc[12e961f32105355]::vec::Vec<craggemini[b21da2d71f2da7a3]::license::host::HostGrant>as_core[c0acaeba6ab4c2e0]::clone::Clone>
::clone(ulonglong *param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(ulonglong *)(param_2 + 0x10);
  uVar5 = uVar1 * 0x10;
  if (uVar5 < 0x7ffffffffffffff9 && uVar1 >> 0x3c == 0) goto LAB_00188c51;
  puVar2 = (ulonglong *)0x0;
  while( true ) {
    param_1 = puVar2;
    (*(code *)PTR_handle_error_00219c78)();
LAB_00188c51:
    if (uVar5 == 0) break;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
    uVar3 = (*(code *)PTR___rust_alloc_00219c88)();
    puVar2 = (ulonglong *)&DAT_00000008;
    if (uVar3 != 0) {
      uVar4 = uVar1;
LAB_00188c88:
      *param_1 = uVar4;
      param_1[1] = uVar3;
      param_1[2] = 0;
      if (uVar1 != 0) {
        (*(code *)PTR_memcpy_00219c60)(uVar4,uVar5);
        param_1[2] = uVar1;
      }
      return param_1;
    }
  }
  uVar3 = 8;
  uVar4 = 0;
  goto LAB_00188c88;
}


