// 004f4240 <serde_core[48776c27239fa21f]::de::impls::PathBufVisitor>

/* <serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>
   as 
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_string::<serde_core[48776c27239fa21f]::de::impls::PathBufVisitor>
    */

longlong * __rustcall
<serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_string::<serde_core[48776c27239fa21f]::de::impls::PathBufVisitor>
          (longlong *param_1,undefined1 *param_2)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 extraout_XMM0_Da;
  undefined1 local_59;
  longlong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  switch(*param_2) {
  case 0xc:
    param_1[2] = *(longlong *)(param_2 + 0x18);
    lVar3 = *(longlong *)(param_2 + 0x10);
    *param_1 = *(longlong *)(param_2 + 8);
    param_1[1] = lVar3;
    return param_1;
  case 0xd:
    lVar3 = *(longlong *)(param_2 + 0x10);
    if (lVar3 < 0) {
LAB_004f42eb:
      (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (lVar3 == 0) {
      lVar2 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar2 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar2 == 0) goto LAB_004f42eb;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,lVar3);
    }
    *param_1 = lVar3;
    param_1[1] = lVar2;
    param_1[2] = lVar3;
    break;
  case 0xe:
    lVar3 = *(longlong *)(param_2 + 8);
    lVar2 = *(longlong *)(param_2 + 0x10);
    lVar5 = *(longlong *)(param_2 + 0x18);
    (*(code *)PTR_from_utf8_00799468)(&switchD_004f4271::switchdataD_00198414,lVar5);
    lVar4 = lVar2;
    if ((char)local_58 != '\0') {
      if (lVar3 != -1) {
        local_40 = (undefined4)local_50;
        uStack_3c = local_50._4_4_;
        uStack_38 = (undefined4)uStack_48;
        uStack_34 = uStack_48._4_4_;
        local_58 = lVar3;
        local_50 = lVar2;
        uStack_48 = lVar5;
        lVar3 = <serde_core[48776c27239fa21f]::de::impls::PathBufVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
                ::visit_byte_buf::<serde_json[dc3825464c436029]::error::Error>::_closure_0_
                          (&local_59,&local_58);
        goto LAB_004f4384;
      }
      lVar4 = lVar5;
      lVar5 = local_50;
      lVar3 = lVar2;
    }
    *param_1 = lVar3;
    param_1[1] = lVar4;
    param_1[2] = lVar5;
    return param_1;
  case 0xf:
    <serde_core[48776c27239fa21f]::de::impls::PathBufVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
    ::visit_bytes::<serde_json[dc3825464c436029]::error::Error>
              (param_1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
    break;
  default:
    lVar3 = ::
            <serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>
            ::invalid_type(param_2,&local_59,
                           anon_2c3f00c6db51fc4e52b1607637b553f4_152_llvm_6489901693990513673);
LAB_004f4384:
    param_1[1] = lVar3;
    *param_1 = -1;
    return param_1;
  }
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_core[48776c27239fa21f]::private::content::Content>
            (param_2);
  return param_1;
}


