// 00067160 spec_to_string

/* <core[c0acaeba6ab4c2e0]::io::error::Error as
   alloc[12e961f32105355]::string::SpecToString>::spec_to_string */

void __rustcall
<core[c0acaeba6ab4c2e0]::io::error::Error_as_alloc[12e961f32105355]::string::SpecToString>::
spec_to_string(undefined8 *param_1)

{
  code *pcVar1;
  char cVar2;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined **local_18;
  undefined8 local_10;
  
  local_38 = 0;
  uStack_30 = 1;
  local_28 = 0;
  local_10 = 0x60000020;
  local_20 = &local_38;
  local_18 = &PTR_<alloc[12e961f32105355]::string::String>_000c0a58;
  cVar2 = (*(code *)PTR_fmt_000c3bb8)();
  if (cVar2 != '\0') {
    (*(code *)PTR_unwrap_failed_000c3c78)
              (&DAT_000c0570,&local_39,
               &PTR_anon_59e2fb66b8c947e9c506f2bec78bddb3_45_llvm_10337461052197347093_000c0a88);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  param_1[2] = local_28;
  *param_1 = local_38;
  param_1[1] = uStack_30;
  return;
}


