// 00725340 fmt

/* <serde_core[48776c27239fa21f]::de::WithDecimalPoint as core[c0acaeba6ab4c2e0]::fmt::Display>::fmt
    */

undefined8 __rustcall
<serde_core[48776c27239fa21f]::de::WithDecimalPoint_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt
          (ulonglong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong *local_28;
  undefined *local_20;
  undefined8 local_18;
  char local_10;
  
  local_28 = param_1;
  if (0x7fefffffffffffff < (*param_1 & 0x7fffffffffffffff)) {
    local_20 = PTR_fmt_0079ab80;
    uVar2 = (*(code *)PTR_write_007994b0)
                      (&local_28,&anon_e1419182c2f95519b50f33ebe2147d9d_32_llvm_4643690396931717954)
    ;
    return uVar2;
  }
  local_10 = '\0';
  local_20 = PTR_fmt_0079ab80;
  local_18 = param_2;
  cVar1 = (*(code *)PTR_write_007994b0)
                    (&local_28,&anon_e1419182c2f95519b50f33ebe2147d9d_32_llvm_4643690396931717954);
  if (cVar1 != '\0') {
    return 1;
  }
  if ((local_10 == '\0') && (cVar1 = (*(code *)PTR_write_str_00799488)(), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}


