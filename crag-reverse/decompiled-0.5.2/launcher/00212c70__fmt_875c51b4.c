// 00212c70 fmt

/* <f64 as core[c0acaeba6ab4c2e0]::fmt::Display>::fmt */

void __rustcall
<f64_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x10000000) == 0) {
    core[c0acaeba6ab4c2e0]::fmt::float::float_to_decimal_common_shortest::<f64>
              (param_2,uVar1 >> 0x15 & 1,0);
    return;
  }
  core[c0acaeba6ab4c2e0]::fmt::float::float_to_decimal_common_exact::<f64>
            (*param_1,param_2,uVar1 >> 0x15 & 1,*(undefined2 *)(param_2 + 0x16));
  return;
}


