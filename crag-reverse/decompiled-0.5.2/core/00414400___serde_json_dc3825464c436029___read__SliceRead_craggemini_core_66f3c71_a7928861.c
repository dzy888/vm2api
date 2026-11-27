// 00414400 <serde_json[dc3825464c436029]::read::SliceRead,craggemini_core[66f3c71560d70857]::resume::PersistedStickyIndex>

/* serde_json[dc3825464c436029]::de::from_trait::<serde_json[dc3825464c436029]::read::SliceRead,
   craggemini_core[66f3c71560d70857]::resume::PersistedStickyIndex> */

longlong * __rustcall
serde_json[dc3825464c436029]::de::from_trait::
<serde_json[dc3825464c436029]::read::SliceRead,craggemini_core[66f3c71560d70857]::resume::PersistedStickyIndex>
          (longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  longlong local_d8 [3];
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  ulonglong local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
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
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  undefined8 local_28 [3];
  
  local_c0 = *param_2;
  uStack_bc = param_2[1];
  uStack_b8 = param_2[2];
  uStack_b4 = param_2[3];
  local_b0 = *(ulonglong *)(param_2 + 4);
  uStack_a8 = param_2[6];
  uStack_a4 = param_2[7];
  local_d8[0] = 0;
  local_d8[1] = 1;
  local_d8[2] = 0;
  local_a0 = 0x80;
  uVar4 = <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
          ::deserialize_struct::
          <<craggemini_core[66f3c71560d70857]::resume::PersistedStickyIndex_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                    (param_1,local_d8);
  if (*param_1 != 0) {
    local_38 = param_1[0xc];
    local_48 = param_1[10];
    lStack_40 = param_1[0xb];
    local_58 = param_1[8];
    lStack_50 = param_1[9];
    uVar4 = (undefined4)*param_1;
    uStack_94 = *(undefined4 *)((longlong)param_1 + 4);
    uStack_90 = (undefined4)param_1[1];
    uStack_8c = *(undefined4 *)((longlong)param_1 + 0xc);
    local_88 = (undefined4)param_1[2];
    uStack_84 = *(undefined4 *)((longlong)param_1 + 0x14);
    uStack_80 = (undefined4)param_1[3];
    uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
    local_78 = (undefined4)param_1[4];
    uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
    uStack_70 = (undefined4)param_1[5];
    uStack_6c = *(undefined4 *)((longlong)param_1 + 0x2c);
    local_68 = (undefined4)param_1[6];
    uStack_64 = *(undefined4 *)((longlong)param_1 + 0x34);
    uStack_60 = (undefined4)param_1[7];
    uStack_5c = *(undefined4 *)((longlong)param_1 + 0x3c);
    local_98 = uVar4;
    if (local_b0 < CONCAT44(uStack_b4,uStack_b8)) {
      do {
        uVar2 = local_b0 + 1;
        uVar3 = (ulonglong)*(byte *)(CONCAT44(uStack_bc,local_c0) + -1 + uVar2);
        if ((0x20 < uVar3) || ((0x100002600U >> (uVar3 & 0x3f) & 1) == 0)) {
          local_28[0] = 0x16;
          lVar1 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(local_d8,local_28);
          param_1[1] = lVar1;
          *param_1 = 0;
          <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::StickyConvBinding)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
          ::drop(&local_98);
          uVar4 = <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::ResponseBinding)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
                  ::drop(&local_68);
          break;
        }
        local_b0 = uVar2;
      } while (uVar2 != CONCAT44(uStack_b4,uStack_b8));
    }
  }
  if (local_d8[0] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar4,1);
  }
  return param_1;
}


