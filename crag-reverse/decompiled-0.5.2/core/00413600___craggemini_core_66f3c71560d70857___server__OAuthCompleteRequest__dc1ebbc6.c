// 00413600 <craggemini_core[66f3c71560d70857]::server::OAuthCompleteRequest>

/* serde_json[dc3825464c436029]::de::from_slice::<craggemini_core[66f3c71560d70857]::server::OAuthCompleteRequest>
    */

longlong * __rustcall
serde_json[dc3825464c436029]::de::from_slice::
<craggemini_core[66f3c71560d70857]::server::OAuthCompleteRequest>
          (longlong *param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  longlong local_e0 [4];
  ulonglong local_c0;
  ulonglong local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined8 local_a0 [3];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  longlong lStack_20;
  longlong local_18;
  
  local_e0[0] = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_e0[1] = 1;
  local_e0[2] = 0;
  local_a8 = 0x80;
  local_e0[3] = param_2;
  local_c0 = param_3;
  uVar4 = <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
          ::deserialize_struct::
          <<craggemini_core[66f3c71560d70857]::server::OAuthCompleteRequest_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                    (param_1,local_e0);
  if (*param_1 != -1) {
    local_18 = param_1[0xe];
    local_28 = param_1[0xc];
    lStack_20 = param_1[0xd];
    local_38 = param_1[10];
    lStack_30 = param_1[0xb];
    local_48 = param_1[8];
    lStack_40 = param_1[9];
    uVar4 = (undefined4)*param_1;
    uStack_84 = *(undefined4 *)((longlong)param_1 + 4);
    uStack_80 = (undefined4)param_1[1];
    uStack_7c = *(undefined4 *)((longlong)param_1 + 0xc);
    local_78 = (undefined4)param_1[2];
    uStack_74 = *(undefined4 *)((longlong)param_1 + 0x14);
    uStack_70 = (undefined4)param_1[3];
    uStack_6c = *(undefined4 *)((longlong)param_1 + 0x1c);
    local_68 = (undefined4)param_1[4];
    uStack_64 = *(undefined4 *)((longlong)param_1 + 0x24);
    uStack_60 = (undefined4)param_1[5];
    uStack_5c = *(undefined4 *)((longlong)param_1 + 0x2c);
    local_58 = (undefined4)param_1[6];
    uStack_54 = *(undefined4 *)((longlong)param_1 + 0x34);
    uStack_50 = (undefined4)param_1[7];
    uStack_4c = *(undefined4 *)((longlong)param_1 + 0x3c);
    local_88 = uVar4;
    if (local_b8 < local_c0) {
      do {
        uVar2 = local_b8 + 1;
        uVar3 = (ulonglong)*(byte *)(local_e0[3] + -1 + uVar2);
        if ((0x20 < uVar3) || ((0x100002600U >> (uVar3 & 0x3f) & 1) == 0)) {
          local_a0[0] = 0x16;
          lVar1 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(local_e0,local_a0);
          param_1[1] = lVar1;
          *param_1 = -1;
          uVar4 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <craggemini_core[66f3c71560d70857]::server::OAuthCompleteRequest>(&local_88);
          if (local_e0[0] == 0) {
            return param_1;
          }
          goto LAB_00413700;
        }
        local_b8 = uVar2;
      } while (uVar2 != local_c0);
    }
  }
  if (local_e0[0] != 0) {
LAB_00413700:
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar4,1);
  }
  return param_1;
}


