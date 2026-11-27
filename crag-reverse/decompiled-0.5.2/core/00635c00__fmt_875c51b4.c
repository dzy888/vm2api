// 00635c00 fmt

/* <tokio[d7d91d38da47d894]::sync::mpsc::error::TrySendError<alloc[12e961f32105355]::string::String>
   as core[c0acaeba6ab4c2e0]::fmt::Display>::fmt */

void __rustcall
<tokio[d7d91d38da47d894]::sync::mpsc::error::TrySendError<alloc[12e961f32105355]::string::String>as_core[c0acaeba6ab4c2e0]::fmt::Display>
::fmt(char *param_1)

{
  char *local_20;
  undefined8 local_18;
  char **local_10;
  code *local_8;
  
  local_20 = "no available capacity";
  if (*param_1 != '\0') {
    local_20 = "channel closed";
  }
  local_18 = 0x15;
  if (*param_1 != '\0') {
    local_18 = 0xe;
  }
  local_10 = &local_20;
  local_8 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
  (*(code *)PTR_write_007994b0)
            (&local_10,&anon_e1419182c2f95519b50f33ebe2147d9d_32_llvm_4643690396931717954);
  return;
}


