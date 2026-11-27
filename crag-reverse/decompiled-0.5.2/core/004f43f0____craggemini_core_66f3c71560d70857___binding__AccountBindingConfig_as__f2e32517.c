// 004f43f0 <<craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor>

/* <serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>
   as 
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_identifier::<<craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor> */

undefined1 * __rustcall
<serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_identifier::
<<craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor>
          (undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 local_21;
  
  switch(*param_2) {
  case 1:
    uVar2 = (ulonglong)(byte)param_2[1];
    break;
  default:
    uVar1 = ::
            <serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>
            ::invalid_type(param_2,&local_21,
                           anon_2c3f00c6db51fc4e52b1607637b553f4_154_llvm_6489901693990513673);
    *(undefined8 *)(param_1 + 8) = uVar1;
    *param_1 = 1;
    return param_1;
  case 4:
    uVar2 = *(ulonglong *)(param_2 + 8);
    break;
  case 0xc:
    lVar3 = *(longlong *)(param_2 + 8);
    <<craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
    ::visit_str::<serde_json[dc3825464c436029]::error::Error>
              (param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
    goto LAB_004f448d;
  case 0xd:
    <<craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
    ::visit_str::<serde_json[dc3825464c436029]::error::Error>
              (param_1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
    goto LAB_004f446c;
  case 0xe:
    lVar3 = *(longlong *)(param_2 + 8);
    <<craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
    ::visit_bytes::<serde_json[dc3825464c436029]::error::Error>
              (param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
LAB_004f448d:
    if (lVar3 == 0) {
      return param_1;
    }
    (*(code *)PTR___rust_dealloc_00798fc8)();
    return param_1;
  case 0xf:
    <<craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
    ::visit_bytes::<serde_json[dc3825464c436029]::error::Error>
              (param_1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
    goto LAB_004f446c;
  }
  <<craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
  ::visit_u64::<serde_json[dc3825464c436029]::error::Error>(param_1,uVar2);
LAB_004f446c:
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_core[48776c27239fa21f]::private::content::Content>
            (param_2);
  return param_1;
}


