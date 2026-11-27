// 005c7320 <serde_json[dc3825464c436029]::value::ser::Serializer>

/* <craggemini_core[66f3c71560d70857]::tools::GroundingSupport as
   serde_core[48776c27239fa21f]::ser::Serialize>::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>
    */

undefined1 * __rustcall
<craggemini_core[66f3c71560d70857]::tools::GroundingSupport_as_serde_core[48776c27239fa21f]::ser::Serialize>
::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>
          (undefined1 *param_1,longlong param_2)

{
  longlong lVar1;
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
  
  local_78 = 0xffffffffffffffff;
  uStack_60 = 0;
  uStack_50 = 0;
  lVar1 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
          ::serialize_field::<usize>
                    (&local_78,anon_30b5cef53457a6ea696e8d7e9f6273d6_23_llvm_8436237269785592069,0xb
                     ,param_2 + 0x30);
  if (lVar1 == 0) {
    lVar1 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
            ::serialize_field::<usize>
                      (&local_78,anon_30b5cef53457a6ea696e8d7e9f6273d6_24_llvm_8436237269785592069,9
                       ,param_2 + 0x38);
    if (lVar1 == 0) {
      lVar1 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
              ::serialize_field::<alloc[12e961f32105355]::string::String>
                        (&local_78,"text",4,param_2);
      if ((lVar1 == 0) &&
         (lVar1 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                  ::serialize_field::<alloc[12e961f32105355]::vec::Vec<usize>>
                            (&local_78,
                             anon_30b5cef53457a6ea696e8d7e9f6273d6_26_llvm_8436237269785592069,0xd,
                             param_2 + 0x18), lVar1 == 0)) {
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
  *(longlong *)(param_1 + 8) = lVar1;
  *param_1 = 0xff;
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::ser::SerializeMap>
            (&local_78);
  return param_1;
}


