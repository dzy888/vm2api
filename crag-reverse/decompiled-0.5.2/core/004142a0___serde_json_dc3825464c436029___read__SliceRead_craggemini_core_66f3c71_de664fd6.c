// 004142a0 <serde_json[dc3825464c436029]::read::SliceRead,craggemini_core[66f3c71560d70857]::resume::PersistedSessions>

/* serde_json[dc3825464c436029]::de::from_trait::<serde_json[dc3825464c436029]::read::SliceRead,
   craggemini_core[66f3c71560d70857]::resume::PersistedSessions> */

longlong * __rustcall
serde_json[dc3825464c436029]::de::from_trait::
<serde_json[dc3825464c436029]::read::SliceRead,craggemini_core[66f3c71560d70857]::resume::PersistedSessions>
          (longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  longlong local_a8 [3];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  ulonglong local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 local_70;
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
  longlong local_38;
  undefined8 local_28 [3];
  
  local_90 = *param_2;
  uStack_8c = param_2[1];
  uStack_88 = param_2[2];
  uStack_84 = param_2[3];
  local_80 = *(ulonglong *)(param_2 + 4);
  uStack_78 = param_2[6];
  uStack_74 = param_2[7];
  local_a8[0] = 0;
  local_a8[1] = 1;
  local_a8[2] = 0;
  local_70 = 0x80;
  uVar4 = <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
          ::deserialize_struct::
          <<craggemini_core[66f3c71560d70857]::resume::PersistedSessions_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                    (param_1,local_a8);
  if (*param_1 != -1) {
    local_38 = param_1[6];
    uVar4 = (undefined4)*param_1;
    uStack_64 = *(undefined4 *)((longlong)param_1 + 4);
    uStack_60 = (undefined4)param_1[1];
    uStack_5c = *(undefined4 *)((longlong)param_1 + 0xc);
    local_58 = (undefined4)param_1[2];
    uStack_54 = *(undefined4 *)((longlong)param_1 + 0x14);
    uStack_50 = (undefined4)param_1[3];
    uStack_4c = *(undefined4 *)((longlong)param_1 + 0x1c);
    local_48 = (undefined4)param_1[4];
    uStack_44 = *(undefined4 *)((longlong)param_1 + 0x24);
    uStack_40 = (undefined4)param_1[5];
    uStack_3c = *(undefined4 *)((longlong)param_1 + 0x2c);
    local_68 = uVar4;
    if (local_80 < CONCAT44(uStack_84,uStack_88)) {
      do {
        uVar2 = local_80 + 1;
        uVar3 = (ulonglong)*(byte *)(CONCAT44(uStack_8c,local_90) + -1 + uVar2);
        if ((0x20 < uVar3) || ((0x100002600U >> (uVar3 & 0x3f) & 1) == 0)) {
          local_28[0] = 0x16;
          lVar1 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(local_a8,local_28);
          param_1[1] = lVar1;
          *param_1 = -1;
          uVar4 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <craggemini_core[66f3c71560d70857]::resume::PersistedSessions>(&local_68);
          break;
        }
        local_80 = uVar2;
      } while (uVar2 != CONCAT44(uStack_84,uStack_88));
    }
  }
  if (local_a8[0] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar4,1);
  }
  return param_1;
}


