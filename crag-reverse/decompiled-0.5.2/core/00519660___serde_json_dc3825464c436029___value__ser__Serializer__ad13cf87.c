// 00519660 <serde_json[dc3825464c436029]::value::ser::Serializer>

/* <craggemini_core[66f3c71560d70857]::resume::InterruptionMeta as
   serde_core[48776c27239fa21f]::ser::Serialize>::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>
    */

undefined1 * __rustcall
<craggemini_core[66f3c71560d70857]::resume::InterruptionMeta_as_serde_core[48776c27239fa21f]::ser::Serialize>
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
          ::serialize_field::
          <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
                    (&local_78,&anon_ec7f14c74815bf4c93b295cfd0665412_46_llvm_7806621557641746444,7,
                     param_2 + 0x18);
  if (lVar2 == 0) {
    lVar2 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
            ::serialize_field::<alloc[12e961f32105355]::string::String>
                      (&local_78,&anon_ec7f14c74815bf4c93b295cfd0665412_47_llvm_7806621557641746444,
                       6,param_2);
    if (lVar2 == 0) {
      lVar2 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
              ::serialize_field::<bool>
                        (&local_78,anon_ec7f14c74815bf4c93b295cfd0665412_48_llvm_7806621557641746444
                         ,0xe,param_2 + 0x3c);
      if (lVar2 == 0) {
        lVar2 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                ::serialize_field::<u32>
                          (&local_78,
                           anon_ec7f14c74815bf4c93b295cfd0665412_49_llvm_7806621557641746444,0xe,
                           param_2 + 0x38);
        if ((lVar2 == 0) &&
           (lVar2 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                    ::serialize_field::<usize>
                              (&local_78,
                               anon_ec7f14c74815bf4c93b295cfd0665412_50_llvm_7806621557641746444,10,
                               param_2 + 0x30), lVar2 == 0)) {
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


