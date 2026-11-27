// 006f44d0 fmt

/* <tokio[d7d91d38da47d894]::time::error::Error as core[c0acaeba6ab4c2e0]::fmt::Display>::fmt */

void __rustcall
<tokio[d7d91d38da47d894]::time::error::Error_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt
          (char *param_1)

{
  undefined *local_20;
  undefined8 local_18;
  undefined **local_10;
  code *local_8;
  
  local_20 = &DAT_001b6ba4 + *(int *)(&DAT_001b6ba4 + (ulonglong)(byte)(*param_1 - 1) * 4);
  local_18 = *(undefined8 *)(&DAT_001b6bb0 + (ulonglong)(byte)(*param_1 - 1) * 8);
  local_10 = &local_20;
  local_8 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
  (*(code *)PTR_write_007994b0)
            (&local_10,&anon_e1419182c2f95519b50f33ebe2147d9d_32_llvm_4643690396931717954);
  return;
}


