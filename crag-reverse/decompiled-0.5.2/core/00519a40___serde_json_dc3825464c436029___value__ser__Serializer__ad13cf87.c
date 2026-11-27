// 00519a40 <serde_json[dc3825464c436029]::value::ser::Serializer>

/* <craggemini_core[66f3c71560d70857]::license::LicenseStatus as
   serde_core[48776c27239fa21f]::ser::Serialize>::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>
    */

undefined1 * __rustcall
<craggemini_core[66f3c71560d70857]::license::LicenseStatus_as_serde_core[48776c27239fa21f]::ser::Serialize>
::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>
          (undefined1 *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  lVar2 = param_2[0x14];
  lVar3 = param_2[0x16];
  lVar4 = param_2[0x18];
  lVar5 = param_2[0xf];
  local_70 = param_2[9];
  local_78 = param_2[0xc];
  cVar1 = *(char *)((longlong)param_2 + 0xf1);
  local_80 = *param_2;
  local_88 = param_2[2];
  local_90 = param_2[4];
  local_98 = param_2[0x1a];
  local_a0 = param_2[0x1c];
  local_d0 = -1;
  uStack_b8 = 0;
  uStack_a8 = 0;
  lVar6 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
          ::serialize_field::<&str>
                    (&local_d0,&anon_ec7f14c74815bf4c93b295cfd0665412_128_llvm_7806621557641746444,7
                     ,param_2 + 0x10);
  if ((((((((lVar6 == 0) &&
           (lVar6 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                    ::serialize_field::<&str>
                              (&local_d0,
                               &anon_ec7f14c74815bf4c93b295cfd0665412_61_llvm_7806621557641746444,6,
                               param_2 + 0x12), lVar6 == 0)) &&
          (lVar6 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                   ::serialize_field::<bool>(&local_d0,&DAT_0019b4f3,5,param_2 + 0x1e), lVar6 == 0))
         && (lVar6 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                     ::serialize_field::<alloc[12e961f32105355]::string::String>
                               (&local_d0,
                                &anon_ec7f14c74815bf4c93b295cfd0665412_129_llvm_7806621557641746444,
                                5,param_2 + 6), lVar6 == 0)) &&
        (((lVar2 == 0 ||
          (lVar6 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                   ::serialize_field::<core[c0acaeba6ab4c2e0]::option::Option<&str>>
                             (&local_d0,&DAT_0019b4f8,7,param_2 + 0x14), lVar6 == 0)) &&
         ((lVar3 == 0 ||
          (lVar6 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                   ::serialize_field::<core[c0acaeba6ab4c2e0]::option::Option<&str>>
                             (&local_d0,"kind",4,param_2 + 0x16), lVar6 == 0)))))) &&
       ((((lVar4 == 0 ||
          (lVar6 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                   ::serialize_field::<core[c0acaeba6ab4c2e0]::option::Option<&str>>
                             (&local_d0,&DAT_0019b4ff,5,param_2 + 0x18), lVar6 == 0)) &&
         (((int)lVar5 == 0 ||
          (lVar6 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                   ::serialize_field::<core[c0acaeba6ab4c2e0]::option::Option<u32>>
                             (&local_d0,
                              &anon_30b5cef53457a6ea696e8d7e9f6273d6_31_llvm_8436237269785592069,4,
                              param_2 + 0xf), lVar6 == 0)))) &&
        ((((local_70 == -1 ||
           (lVar6 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                    ::serialize_field::
                    <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
                              (&local_d0,
                               anon_ec7f14c74815bf4c93b295cfd0665412_141_llvm_7806621557641746444,10
                               ,param_2 + 9), lVar6 == 0)) &&
          ((local_78 == -1 ||
           (lVar6 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                    ::serialize_field::
                    <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
                              (&local_d0,
                               anon_ec7f14c74815bf4c93b295cfd0665412_147_llvm_7806621557641746444,
                               0xe,param_2 + 0xc), lVar6 == 0)))) &&
         ((cVar1 == -1 ||
          (lVar6 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                   ::serialize_field::
                   <core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::license::Term>>
                             (&local_d0,
                              &anon_ec7f14c74815bf4c93b295cfd0665412_146_llvm_7806621557641746444,4,
                              (longlong)param_2 + 0xf1), lVar6 == 0)))))))) &&
      (((local_80 == 0 ||
        (lVar6 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                 ::serialize_field::<core[c0acaeba6ab4c2e0]::option::Option<i64>>
                           (&local_d0,
                            anon_ec7f14c74815bf4c93b295cfd0665412_143_llvm_7806621557641746444,9,
                            param_2), lVar6 == 0)) &&
       ((((local_88 == 0 ||
          (lVar6 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                   ::serialize_field::<core[c0acaeba6ab4c2e0]::option::Option<i64>>
                             (&local_d0,
                              anon_ec7f14c74815bf4c93b295cfd0665412_144_llvm_7806621557641746444,10,
                              param_2 + 2), lVar6 == 0)) &&
         ((local_90 == 0 ||
          (lVar6 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                   ::serialize_field::<core[c0acaeba6ab4c2e0]::option::Option<i64>>
                             (&local_d0,
                              anon_ec7f14c74815bf4c93b295cfd0665412_145_llvm_7806621557641746444,10,
                              param_2 + 4), lVar6 == 0)))) &&
        ((local_98 == 0 ||
         (lVar6 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                  ::serialize_field::<core[c0acaeba6ab4c2e0]::option::Option<&str>>
                            (&local_d0,
                             &anon_1b4a85c95499e1b671cf4fa96a1b6d0f_20_llvm_10049508496007902178,4,
                             param_2 + 0x1a), lVar6 == 0)))))))) &&
     ((local_a0 == 0 ||
      (lVar6 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
               ::serialize_field::<core[c0acaeba6ab4c2e0]::option::Option<&str>>
                         (&local_d0,&DAT_0019b504,7,param_2 + 0x1c), lVar6 == 0)))) {
    local_48 = local_b0;
    uStack_44 = uStack_ac;
    uStack_40 = (undefined4)uStack_a8;
    uStack_3c = uStack_a8._4_4_;
    local_58 = local_c0;
    uStack_54 = uStack_bc;
    uStack_50 = (undefined4)uStack_b8;
    uStack_4c = uStack_b8._4_4_;
    local_68 = (undefined4)local_d0;
    uStack_64 = local_d0._4_4_;
    uStack_60 = uStack_c8;
    uStack_5c = uStack_c4;
    (*(code *)PTR_end_007996f8)();
    return param_1;
  }
  lVar2 = local_d0;
  *(longlong *)(param_1 + 8) = lVar6;
  *param_1 = 0xff;
  if (local_d0 == -2) {
    if ((char)uStack_c8 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&uStack_c8);
    }
  }
  else {
    uVar7 = <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
            ::drop(&uStack_b8);
    if ((lVar2 != -1) && (lVar2 != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar7,1);
    }
  }
  return param_1;
}


