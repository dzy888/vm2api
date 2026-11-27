// 00064720 <&alloc[12e961f32105355]::string::String>

/* serde_json[dc3825464c436029]::value::to_value::<&alloc[12e961f32105355]::string::String> */

char * __rustcall
serde_json[dc3825464c436029]::value::to_value::<&alloc[12e961f32105355]::string::String>
          (char *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  char *pcVar2;
  longlong lVar3;
  undefined1 uVar4;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  uVar4 = lVar1 == 0;
  if (-1 < lVar1) goto LAB_00064741;
  uVar4 = true;
  pcVar2 = (char *)0x0;
  while( true ) {
    param_1 = pcVar2;
    (*(code *)PTR_handle_error_000c3a98)();
LAB_00064741:
    if ((bool)uVar4) break;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
    lVar3 = (*(code *)PTR___rust_alloc_000c3a90)();
    uVar4 = lVar3 == 0;
    pcVar2 = Elf64_Ehdr_00000000.e_ident_magic_str;
    if (!(bool)uVar4) {
      (*(code *)PTR_memcpy_000c3aa8)(param_4,lVar1);
LAB_00064786:
      *param_1 = '\x03';
      *(longlong *)(param_1 + 8) = lVar1;
      *(longlong *)(param_1 + 0x10) = lVar3;
      *(longlong *)(param_1 + 0x18) = lVar1;
      return param_1;
    }
  }
  lVar3 = 1;
  goto LAB_00064786;
}


