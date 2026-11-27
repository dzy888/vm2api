// 00600be0 <core[c0acaeba6ab4c2e0]::marker::PhantomData<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>>

/* <serde_json[dc3825464c436029]::value::de::MapDeserializer as
   serde_core[48776c27239fa21f]::de::MapAccess>::next_value_seed::<core[c0acaeba6ab4c2e0]::marker::PhantomData<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>>
    */

longlong * __rustcall
<serde_json[dc3825464c436029]::value::de::MapDeserializer_as_serde_core[48776c27239fa21f]::de::MapAccess>
::next_value_seed::
<core[c0acaeba6ab4c2e0]::marker::PhantomData<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>>
          (longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_59;
  char local_58;
  undefined4 local_57;
  undefined4 uStack_53;
  undefined4 uStack_4f;
  undefined2 uStack_4b;
  undefined1 uStack_49;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char local_38;
  undefined7 local_37;
  undefined1 uStack_30;
  undefined4 local_2f;
  undefined2 local_2b;
  undefined1 local_29;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_58 = *(char *)(param_2 + 0x48);
  *(undefined1 *)(param_2 + 0x48) = 0xff;
  if (local_58 == -1) {
    lVar4 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::ser::Error>
            ::custom::<&str>(anon_1b4a85c95499e1b671cf4fa96a1b6d0f_88_llvm_10049508496007902178,0x10
                            );
    param_1[1] = lVar4;
  }
  else {
    local_57 = *(undefined4 *)(param_2 + 0x49);
    uStack_53 = *(undefined4 *)(param_2 + 0x4d);
    uVar2 = *(undefined8 *)(param_2 + 0x49);
    uStack_4f = *(undefined4 *)(param_2 + 0x51);
    uStack_48 = *(undefined4 *)(param_2 + 0x58);
    uStack_44 = *(undefined4 *)(param_2 + 0x5c);
    lVar4 = *(longlong *)(param_2 + 0x58);
    uStack_40 = *(undefined4 *)(param_2 + 0x60);
    uStack_3c = *(undefined4 *)(param_2 + 100);
    lVar3 = *(longlong *)(param_2 + 0x60);
    uStack_4b = (undefined2)*(undefined4 *)(param_2 + 0x55);
    uStack_49 = (undefined1)((uint)*(undefined4 *)(param_2 + 0x55) >> 0x10);
    if (local_58 == '\0') {
      *param_1 = -1;
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_58);
      return param_1;
    }
    local_37 = (undefined7)uVar2;
    uStack_30 = (undefined1)((ulonglong)uVar2 >> 0x38);
    local_2b = uStack_4b;
    local_29 = uStack_49;
    if (local_58 == '\x03') {
      lVar1 = CONCAT17(uStack_49,CONCAT25(uStack_4b,CONCAT41(uStack_4f,uStack_30)));
      if (lVar1 != -1) {
        *param_1 = lVar1;
        param_1[1] = lVar4;
        param_1[2] = lVar3;
        return param_1;
      }
      param_1[1] = lVar4;
    }
    else {
      local_38 = local_58;
      local_2f = uStack_4f;
      local_28 = uStack_48;
      uStack_24 = uStack_44;
      uStack_20 = uStack_40;
      uStack_1c = uStack_3c;
      lVar4 = ::<serde_json[dc3825464c436029]::value::Value>::invalid_type::
              <serde_json[dc3825464c436029]::error::Error>
                        (&local_38,&local_59,
                         anon_1b4a85c95499e1b671cf4fa96a1b6d0f_81_llvm_10049508496007902178);
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_58);
      param_1[1] = lVar4;
    }
  }
  *param_1 = -2;
  return param_1;
}


