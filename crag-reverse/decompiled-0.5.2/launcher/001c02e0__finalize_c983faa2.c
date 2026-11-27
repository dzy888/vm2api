// 001c02e0 finalize

/* <polyval[1df58e1208c50bb2]::backend::autodetect::Polyval as
   universal_hash[1e98f6c6ee470aee]::UniversalHash>::finalize */

undefined8 * __rustcall
<polyval[1df58e1208c50bb2]::backend::autodetect::Polyval_as_universal_hash[1e98f6c6ee470aee]::UniversalHash>
::finalize(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *param_1 = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  return param_1;
}


