// 00064690 <&core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>

/* serde_json[dc3825464c436029]::value::to_value::<&core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
    */

char * __rustcall
serde_json[dc3825464c436029]::value::to_value::
<&core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
          (char *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  char *pcVar2;
  longlong lVar3;
  
  if (*param_2 != -1) {
    lVar1 = param_2[2];
    if (lVar1 < 0) {
      pcVar2 = (char *)0x0;
    }
    else {
      if (lVar1 == 0) {
        lVar3 = 1;
LAB_00064701:
        *param_1 = '\x03';
        *(longlong *)(param_1 + 8) = lVar1;
        *(longlong *)(param_1 + 0x10) = lVar3;
        *(longlong *)(param_1 + 0x18) = lVar1;
        return param_1;
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
      lVar3 = (*(code *)PTR___rust_alloc_000c3a90)();
      pcVar2 = Elf64_Ehdr_00000000.e_ident_magic_str;
      if (lVar3 != 0) {
        (*(code *)PTR_memcpy_000c3aa8)(param_4,lVar1);
        goto LAB_00064701;
      }
    }
    param_1 = pcVar2;
    (*(code *)PTR_handle_error_000c3a98)();
  }
  *param_1 = '\0';
  return param_1;
}


