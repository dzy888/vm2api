// 00643ea0 <&alloc[12e961f32105355]::vec::Vec<u32>>

/* <serde_json[dc3825464c436029]::value::ser::Serializer as
   serde_core[48776c27239fa21f]::ser::Serializer>::collect_seq::<&alloc[12e961f32105355]::vec::Vec<u32>>
    */

undefined1 * __rustcall
<serde_json[dc3825464c436029]::value::ser::Serializer_as_serde_core[48776c27239fa21f]::ser::Serializer>
::collect_seq::<&alloc[12e961f32105355]::vec::Vec<u32>>
          (undefined1 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined7 uStack_68;
  undefined1 uStack_61;
  longlong local_48;
  
  uVar8 = uStack_70;
  uVar7 = uStack_74;
  uVar6 = local_78;
  lVar2 = *(longlong *)(param_2 + 8);
  lVar3 = *(longlong *)(param_2 + 0x10);
  (*(code *)PTR_serialize_seq_0079a1e0)(param_4,lVar3);
  if (CONCAT44(uStack_74,local_78) == -1) {
    *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_6c,uStack_70);
    *param_1 = 0xff;
  }
  else {
    local_48 = CONCAT17(uStack_61,uStack_68);
    if (lVar3 != 0) {
      uVar11 = local_48 << 5;
      lVar10 = 0;
      do {
        uVar1 = *(uint *)(lVar2 + lVar10);
        local_78 = CONCAT31(local_78._1_3_,2);
        if (local_48 == CONCAT44(uStack_74,uVar6)) {
          (*(code *)PTR_grow_one_00799310)();
        }
        lVar9 = CONCAT44(uStack_6c,uStack_70) + (uVar11 | 0x10);
        *(undefined1 *)(lVar9 + -0x10 + lVar10 * 8) = 2;
        *(undefined8 *)(lVar9 + -8 + lVar10 * 8) = 0;
        *(ulonglong *)(lVar9 + lVar10 * 8) = (ulonglong)uVar1;
        local_48 = local_48 + 1;
        lVar10 = lVar10 + 4;
      } while (lVar3 * 4 != lVar10);
    }
    uVar4 = CONCAT44(uStack_74,uVar6);
    uVar5 = CONCAT44(uStack_6c,uStack_70);
    uStack_74._3_1_ = (undefined1)uVar6;
    uStack_70 = (undefined4)((ulonglong)uVar4 >> 8);
    uStack_6c._3_1_ = (undefined1)uVar8;
    uStack_68 = (undefined7)((ulonglong)uVar5 >> 8);
    *param_1 = 4;
    *(ulonglong *)(param_1 + 1) = CONCAT44(uStack_74,local_78);
    *(ulonglong *)(param_1 + 9) =
         CONCAT44(CONCAT13(uStack_6c._3_1_,(int3)((uint)uVar7 >> 8)),uStack_70);
    *(ulonglong *)(param_1 + 0x10) = CONCAT71(uStack_68,uStack_6c._3_1_);
    *(longlong *)(param_1 + 0x18) = local_48;
  }
  return param_1;
}


