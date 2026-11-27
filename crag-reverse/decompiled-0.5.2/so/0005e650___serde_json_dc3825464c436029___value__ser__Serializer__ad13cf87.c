// 0005e650 <serde_json[dc3825464c436029]::value::ser::Serializer>

/* <agy_bridge[64a9e9deac6c45ce]::protocol::CapturedHeaders as
   serde_core[48776c27239fa21f]::ser::Serialize>::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>
    */

undefined1 * __rustcall
<agy_bridge[64a9e9deac6c45ce]::protocol::CapturedHeaders_as_serde_core[48776c27239fa21f]::ser::Serialize>
::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>
          (undefined1 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
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
  
  lVar1 = param_2[3];
  lVar2 = param_2[6];
  lVar3 = param_2[9];
  lVar4 = param_2[0xc];
  local_70 = param_2[0xf];
  local_a0 = 0xffffffffffffffff;
  uStack_88 = 0;
  uStack_78 = 0;
  if (*param_2 == -1) {
LAB_0005e6c0:
    if (lVar1 != -1) {
      lVar5 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
              ::serialize_field::
              <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
                        (&local_a0,"retry_aft",0xb,param_2 + 3);
      if (lVar5 != 0) goto LAB_0005e782;
    }
    if (lVar2 != -1) {
      lVar5 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
              ::serialize_field::
              <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
                        (&local_a0,"r",10,param_2 + 6);
      if (lVar5 != 0) goto LAB_0005e782;
    }
    if (lVar3 != -1) {
      lVar5 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
              ::serialize_field::
              <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
                        (&local_a0,"g",0xb,param_2 + 9);
      if (lVar5 != 0) goto LAB_0005e782;
    }
    if (lVar4 != -1) {
      lVar5 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
              ::serialize_field::
              <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
                        (&local_a0,"g",0xc,param_2 + 0xc);
      if (lVar5 != 0) goto LAB_0005e782;
    }
    if (local_70 != -1) {
      lVar5 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
              ::serialize_field::
              <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
                        (&local_a0,anon_34149b187fc8a78ca9bac708ccea6bb6_5_llvm_9637358227933645321,
                         0x10,param_2 + 0xf);
      if (lVar5 != 0) goto LAB_0005e782;
    }
    local_48 = local_80;
    uStack_44 = uStack_7c;
    uStack_40 = (undefined4)uStack_78;
    uStack_3c = uStack_78._4_4_;
    local_58 = local_90;
    uStack_54 = uStack_8c;
    uStack_50 = (undefined4)uStack_88;
    uStack_4c = uStack_88._4_4_;
    local_68 = (undefined4)local_a0;
    uStack_64 = local_a0._4_4_;
    uStack_60 = uStack_98;
    uStack_5c = uStack_94;
    (*(code *)PTR_end_000c3d78)();
  }
  else {
    lVar5 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
            ::serialize_field::
            <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
                      (&local_a0,"content_type",0xc,param_2);
    if (lVar5 == 0) goto LAB_0005e6c0;
LAB_0005e782:
    *(longlong *)(param_1 + 8) = lVar5;
    *param_1 = 0xff;
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::ser::SerializeMap>
              (&local_a0);
  }
  return param_1;
}


