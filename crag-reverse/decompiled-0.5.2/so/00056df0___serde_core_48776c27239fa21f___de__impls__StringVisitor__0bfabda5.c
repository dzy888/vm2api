// 00056df0 <serde_core[48776c27239fa21f]::de::impls::StringVisitor>

/* <serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>
   as 
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
    */

longlong * __rustcall
<serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
          (longlong *param_1,undefined1 *param_2)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 extraout_XMM0_Da;
  undefined1 local_49;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  switch(*param_2) {
  case 0xc:
    param_1[2] = *(longlong *)(param_2 + 0x18);
    lVar3 = *(longlong *)(param_2 + 0x10);
    *param_1 = *(longlong *)(param_2 + 8);
    param_1[1] = lVar3;
    break;
  case 0xd:
    lVar3 = *(longlong *)(param_2 + 0x10);
    if (lVar3 < 0) {
LAB_00056e77:
      (*(code *)PTR_handle_error_000c3a98)();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (lVar3 == 0) {
      lVar2 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
      lVar2 = (*(code *)PTR___rust_alloc_000c3a90)();
      if (lVar2 == 0) goto LAB_00056e77;
      (*(code *)PTR_memcpy_000c3aa8)(extraout_XMM0_Da,lVar3);
    }
    *param_1 = lVar3;
    param_1[1] = lVar2;
    param_1[2] = lVar3;
    goto LAB_00056ece;
  case 0xe:
    local_38 = *(undefined8 *)(param_2 + 0x18);
    local_48 = *(undefined4 *)(param_2 + 8);
    uStack_44 = *(undefined4 *)(param_2 + 0xc);
    uStack_40 = *(undefined4 *)(param_2 + 0x10);
    uStack_3c = *(undefined4 *)(param_2 + 0x14);
    <serde_core[48776c27239fa21f]::de::impls::StringVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
    ::visit_byte_buf::<serde_json[dc3825464c436029]::error::Error>(param_1,&local_48);
    break;
  case 0xf:
    <serde_core[48776c27239fa21f]::de::impls::StringVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
    ::visit_bytes::<serde_json[dc3825464c436029]::error::Error>
              (param_1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
LAB_00056ece:
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <serde_core[48776c27239fa21f]::private::content::Content>(param_2);
    break;
  default:
    lVar3 = <serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>
            ::invalid_type(param_2,&local_49,
                           anon_2d8481ed190668a1c8db75e0b2a3e95f_48_llvm_17988842640040923845);
    param_1[1] = lVar3;
    *param_1 = -1;
  }
  return param_1;
}


