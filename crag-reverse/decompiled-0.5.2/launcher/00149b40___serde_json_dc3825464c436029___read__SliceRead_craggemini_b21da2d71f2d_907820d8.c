// 00149b40 <serde_json[dc3825464c436029]::read::SliceRead,craggemini[b21da2d71f2da7a3]::Context>

/* serde_json[dc3825464c436029]::de::from_trait::<serde_json[dc3825464c436029]::read::SliceRead,
   craggemini[b21da2d71f2da7a3]::Context> */

longlong * __rustcall
serde_json[dc3825464c436029]::de::from_trait::
<serde_json[dc3825464c436029]::read::SliceRead,craggemini[b21da2d71f2da7a3]::Context>
          (longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  longlong local_d0 [3];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  ulonglong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98;
  undefined8 local_90 [3];
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
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  longlong lStack_20;
  
  local_b8 = *param_2;
  uStack_b4 = param_2[1];
  uStack_b0 = param_2[2];
  uStack_ac = param_2[3];
  local_a8 = *(ulonglong *)(param_2 + 4);
  uStack_a0 = param_2[6];
  uStack_9c = param_2[7];
  local_d0[0] = 0;
  local_d0[1] = 1;
  local_d0[2] = 0;
  local_98 = 0x80;
  uVar4 = <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
          ::deserialize_struct::
          <<craggemini[b21da2d71f2da7a3]::Context_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                    (param_1,local_d0);
  if (*param_1 != -1) {
    local_28 = param_1[10];
    lStack_20 = param_1[0xb];
    local_38 = param_1[8];
    lStack_30 = param_1[9];
    uVar4 = (undefined4)*param_1;
    uStack_74 = *(undefined4 *)((longlong)param_1 + 4);
    uStack_70 = (undefined4)param_1[1];
    uStack_6c = *(undefined4 *)((longlong)param_1 + 0xc);
    local_68 = (undefined4)param_1[2];
    uStack_64 = *(undefined4 *)((longlong)param_1 + 0x14);
    uStack_60 = (undefined4)param_1[3];
    uStack_5c = *(undefined4 *)((longlong)param_1 + 0x1c);
    local_58 = (undefined4)param_1[4];
    uStack_54 = *(undefined4 *)((longlong)param_1 + 0x24);
    uStack_50 = (undefined4)param_1[5];
    uStack_4c = *(undefined4 *)((longlong)param_1 + 0x2c);
    local_48 = (undefined4)param_1[6];
    uStack_44 = *(undefined4 *)((longlong)param_1 + 0x34);
    uStack_40 = (undefined4)param_1[7];
    uStack_3c = *(undefined4 *)((longlong)param_1 + 0x3c);
    local_78 = uVar4;
    if (local_a8 < CONCAT44(uStack_ac,uStack_b0)) {
      do {
        uVar2 = local_a8 + 1;
        uVar3 = (ulonglong)*(byte *)(CONCAT44(uStack_b4,local_b8) + -1 + uVar2);
        if ((0x20 < uVar3) || ((0x100002600U >> (uVar3 & 0x3f) & 1) == 0)) {
          local_90[0] = 0x16;
          lVar1 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(local_d0,local_90);
          param_1[1] = lVar1;
          *param_1 = -1;
          uVar4 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini[b21da2d71f2da7a3]::Context>
                            (&local_78);
          if (local_d0[0] == 0) {
            return param_1;
          }
          goto LAB_00149c30;
        }
        local_a8 = uVar2;
      } while (uVar2 != CONCAT44(uStack_ac,uStack_b0));
    }
  }
  if (local_d0[0] != 0) {
LAB_00149c30:
    (*(code *)PTR___rust_dealloc_00219c40)(uVar4,1);
  }
  return param_1;
}


