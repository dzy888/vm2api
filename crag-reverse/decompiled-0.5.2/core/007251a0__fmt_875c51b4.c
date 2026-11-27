// 007251a0 fmt

/* <serde_core[48776c27239fa21f]::de::OneOf as core[c0acaeba6ab4c2e0]::fmt::Display>::fmt */

undefined8 __rustcall
<serde_core[48776c27239fa21f]::de::OneOf_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong local_58;
  undefined1 *local_50;
  code *local_48;
  undefined1 *local_40;
  code *local_38;
  
  lVar7 = param_1[1];
  if (lVar7 == 1) {
    local_50 = (undefined1 *)*param_1;
    puVar5 = &DAT_0018a67b;
  }
  else {
    if (lVar7 != 2) {
      if (lVar7 == 0) {
        (*(code *)PTR_panic_00799338)(param_4,&PTR_s__vendor_serde_core_1_0_229_src_d_00795f40);
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      cVar3 = (*(code *)PTR_write_str_00799488)(param_4,7);
      local_50 = (undefined1 *)&local_58;
      if (cVar3 != '\0') {
        return 1;
      }
      lVar6 = *param_1;
      local_48 = <&&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      local_58 = lVar6;
      cVar3 = (*(code *)PTR_write_007994b0)(&local_50,&DAT_0018a67b);
      puVar2 = PTR_write_007994b0;
      puVar5 = PTR_write_str_00799488;
      if (cVar3 == '\0') {
        lVar7 = lVar7 * 0x10 + -0x10;
        while( true ) {
          lVar6 = lVar6 + 0x10;
          local_58 = lVar6;
          cVar3 = (*(code *)puVar5)();
          if (cVar3 != '\0') break;
          local_48 = <&&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
          local_50 = (undefined1 *)&local_58;
          cVar3 = (*(code *)puVar2)(&local_50,&DAT_0018a67b);
          if (cVar3 != '\0') {
            return 1;
          }
          lVar7 = lVar7 + -0x10;
          if (lVar7 == 0) {
            return 0;
          }
        }
      }
      return 1;
    }
    local_50 = (undefined1 *)*param_1;
    local_40 = local_50 + 0x10;
    local_38 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
    puVar5 = &DAT_001884e8;
  }
  local_48 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
  uVar4 = (*(code *)PTR_write_007994b0)(&local_50,puVar5);
  return uVar4;
}


