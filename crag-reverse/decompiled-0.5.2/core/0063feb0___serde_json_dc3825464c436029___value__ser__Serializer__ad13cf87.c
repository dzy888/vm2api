// 0063feb0 <serde_json[dc3825464c436029]::value::ser::Serializer>

/* <craggemini_core[66f3c71560d70857]::binding::CalibrationProof as
   serde_core[48776c27239fa21f]::ser::Serialize>::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>
    */

undefined1 * __rustcall
<craggemini_core[66f3c71560d70857]::binding::CalibrationProof_as_serde_core[48776c27239fa21f]::ser::Serialize>
::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>
          (undefined1 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_78 = -1;
  uStack_60 = 0;
  uStack_50 = 0;
  lVar2 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
          ::serialize_field::<bool>
                    (&local_78,anon_63b06cc94833867f683611f039574387_64_llvm_6903579140370050947,10,
                     param_2 + 0xd0);
  if (lVar2 == 0) {
    lVar2 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
            ::serialize_field::<alloc[12e961f32105355]::string::String>
                      (&local_78,anon_63b06cc94833867f683611f039574387_36_llvm_6903579140370050947,
                       10,param_2 + 0x10);
    if (lVar2 == 0) {
      lVar2 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
              ::serialize_field::<alloc[12e961f32105355]::string::String>
                        (&local_78,
                         &anon_63b06cc94833867f683611f039574387_37_llvm_6903579140370050947,6,
                         param_2 + 0x28);
      if (lVar2 == 0) {
        lVar2 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                ::serialize_field::<alloc[12e961f32105355]::string::String>
                          (&local_78,
                           &anon_63b06cc94833867f683611f039574387_41_llvm_6903579140370050947,8,
                           param_2 + 0x40);
        if (lVar2 == 0) {
          lVar2 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                  ::serialize_field::<alloc[12e961f32105355]::string::String>
                            (&local_78,
                             anon_63b06cc94833867f683611f039574387_43_llvm_6903579140370050947,0xc,
                             param_2 + 0x58);
          if (lVar2 == 0) {
            lVar2 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                    ::serialize_field::<craggemini_core[66f3c71560d70857]::binding::ProxyScheme>
                              (&local_78,param_2 + 0xd1);
            if (lVar2 == 0) {
              lVar2 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                      ::serialize_field::<alloc[12e961f32105355]::string::String>
                                (&local_78,
                                 anon_63b06cc94833867f683611f039574387_66_llvm_6903579140370050947,
                                 0xe,param_2 + 0x70);
              if (lVar2 == 0) {
                lVar2 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                        ::serialize_field::<alloc[12e961f32105355]::string::String>
                                  (&local_78,
                                   anon_63b06cc94833867f683611f039574387_67_llvm_6903579140370050947
                                   ,0xc,param_2 + 0x88);
                if (lVar2 == 0) {
                  lVar2 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                          ::serialize_field::<core[c0acaeba6ab4c2e0]::option::Option<u64>>
                                    (&local_78,
                                     anon_63b06cc94833867f683611f039574387_68_llvm_6903579140370050947
                                     ,10,param_2);
                  if (lVar2 == 0) {
                    lVar2 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                            ::serialize_field::
                            <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
                                      (&local_78,
                                       anon_63b06cc94833867f683611f039574387_69_llvm_6903579140370050947
                                       ,0xd,param_2 + 0xa0);
                    if ((lVar2 == 0) &&
                       (lVar2 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                                ::serialize_field::
                                <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
                                          (&local_78,
                                           &
                                           anon_63b06cc94833867f683611f039574387_70_llvm_6903579140370050947
                                           ,5,param_2 + 0xb8), lVar2 == 0)) {
                      local_28 = local_58;
                      uStack_24 = uStack_54;
                      uStack_20 = (undefined4)uStack_50;
                      uStack_1c = uStack_50._4_4_;
                      local_38 = local_68;
                      uStack_34 = uStack_64;
                      uStack_30 = (undefined4)uStack_60;
                      uStack_2c = uStack_60._4_4_;
                      local_48 = (undefined4)local_78;
                      uStack_44 = local_78._4_4_;
                      uStack_40 = uStack_70;
                      uStack_3c = uStack_6c;
                      (*(code *)PTR_end_007996f8)();
                      return param_1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar1 = local_78;
  *(longlong *)(param_1 + 8) = lVar2;
  *param_1 = 0xff;
  if (local_78 == -2) {
    if ((char)uStack_70 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&uStack_70);
    }
  }
  else {
    uVar3 = <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
            ::drop(&uStack_60);
    if ((lVar1 != -1) && (lVar1 != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar3,1);
    }
  }
  return param_1;
}


