// 00030cf0 <<agy_bridge[64a9e9deac6c45ce]::Runtime>::dispatch::{closure#17}>

/* <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>::or_else::<<agy_bridge[64a9e9deac6c45ce]::Runtime>::dispatch::{closure#17}>
    */

void __rustcall
<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>::or_else::
<<agy_bridge[64a9e9deac6c45ce]::Runtime>::dispatch::_closure_17_>
          (longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  if (*param_2 != -1) {
    param_1[2] = param_2[2];
    lVar2 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar2;
    return;
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
  pcVar4 = (char *)(*(code *)PTR___rust_alloc_000c3a90)();
  uVar3 = s_e_stream_read_failed_0000bcd4._8_8_;
  if (pcVar4 == (char *)0x0) {
    (*(code *)PTR_handle_error_000c3a98)();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined8 *)(pcVar4 + 0x10) = s_e_stream_read_failed_0000bcd4._0_8_;
  *(undefined8 *)(pcVar4 + 0x18) = uVar3;
  uVar3 = s_upstream_respons_0000bcc4._8_8_;
  *(undefined8 *)pcVar4 = s_upstream_respons_0000bcc4._0_8_;
  *(undefined8 *)(pcVar4 + 8) = uVar3;
  pcVar4[0x20] = 'i';
  pcVar4[0x21] = 'l';
  pcVar4[0x22] = 'e';
  pcVar4[0x23] = 'd';
  *param_1 = 0x24;
  param_1[1] = (longlong)pcVar4;
  param_1[2] = 0x24;
  return;
}


