// 00056c50 <serde_core[48776c27239fa21f]::de::impls::OptionVisitor<bool>>

/* <serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>
   as 
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_option::<serde_core[48776c27239fa21f]::de::impls::OptionVisitor<bool>>
    */

undefined2 * __rustcall
<serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_option::<serde_core[48776c27239fa21f]::de::impls::OptionVisitor<bool>>
          (undefined2 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 extraout_XMM0_Da;
  undefined1 local_39;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  switch(*param_2) {
  case 0:
    uVar1 = param_2[1];
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <serde_core[48776c27239fa21f]::private::content::Content>(param_2);
    *(undefined1 *)((longlong)param_1 + 1) = uVar1;
    *(undefined1 *)param_1 = 0;
    break;
  default:
    uVar3 = <serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>
            ::invalid_type(param_2,&local_39,
                           anon_2d8481ed190668a1c8db75e0b2a3e95f_42_llvm_17988842640040923845);
    *(undefined8 *)(param_1 + 4) = uVar3;
    *(undefined1 *)param_1 = 1;
    break;
  case 0x10:
  case 0x12:
    *param_1 = 0x200;
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <serde_core[48776c27239fa21f]::private::content::Content>(param_2);
    break;
  case 0x11:
    puVar2 = *(undefined4 **)(param_2 + 8);
    local_38 = *puVar2;
    uStack_34 = puVar2[1];
    uStack_30 = puVar2[2];
    uStack_2c = puVar2[3];
    local_28 = puVar2[4];
    uStack_24 = puVar2[5];
    uStack_20 = puVar2[6];
    uStack_1c = puVar2[7];
    bVar4 = (char)local_38 != '\0';
    if (bVar4) {
      uVar3 = <serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>
              ::invalid_type(&local_38,&local_39,
                             anon_2d8481ed190668a1c8db75e0b2a3e95f_42_llvm_17988842640040923845);
      *(undefined8 *)(param_1 + 4) = uVar3;
      uVar5 = extraout_XMM0_Da;
    }
    else {
      local_38._1_1_ = (undefined1)((uint)local_38 >> 8);
      uVar1 = local_38._1_1_;
      uVar5 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
              <serde_core[48776c27239fa21f]::private::content::Content>(&local_38);
      *(undefined1 *)((longlong)param_1 + 1) = uVar1;
    }
    *(bool *)param_1 = bVar4;
    (*(code *)PTR___rust_dealloc_000c3aa0)(uVar5,8);
  }
  return param_1;
}


