// 00643d50 <&alloc[12e961f32105355]::vec::Vec<usize>>

/* <serde_json[dc3825464c436029]::value::ser::Serializer as
   serde_core[48776c27239fa21f]::ser::Serializer>::collect_seq::<&alloc[12e961f32105355]::vec::Vec<usize>>
    */

undefined1 * __rustcall
<serde_json[dc3825464c436029]::value::ser::Serializer_as_serde_core[48776c27239fa21f]::ser::Serializer>
::collect_seq::<&alloc[12e961f32105355]::vec::Vec<usize>>
          (undefined1 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined7 uStack_68;
  undefined1 uStack_61;
  longlong local_48;
  
  uVar7 = uStack_70;
  uVar6 = uStack_74;
  uVar5 = local_78;
  lVar1 = *(longlong *)(param_2 + 8);
  lVar2 = *(longlong *)(param_2 + 0x10);
  (*(code *)PTR_serialize_seq_0079a1e0)(param_4,lVar2);
  if (CONCAT44(uStack_74,local_78) == -1) {
    *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_6c,uStack_70);
    *param_1 = 0xff;
  }
  else {
    local_48 = CONCAT17(uStack_61,uStack_68);
    if (lVar2 != 0) {
      uVar10 = local_48 << 5;
      lVar9 = 0;
      do {
        uVar3 = *(undefined8 *)(lVar1 + lVar9);
        local_78 = CONCAT31(local_78._1_3_,2);
        if (local_48 == CONCAT44(uStack_74,uVar5)) {
          (*(code *)PTR_grow_one_00799310)();
        }
        lVar8 = CONCAT44(uStack_6c,uStack_70) + (uVar10 | 0x10);
        *(undefined1 *)(lVar8 + -0x10 + lVar9 * 4) = 2;
        *(undefined8 *)(lVar8 + -8 + lVar9 * 4) = 0;
        *(undefined8 *)(lVar8 + lVar9 * 4) = uVar3;
        local_48 = local_48 + 1;
        lVar9 = lVar9 + 8;
      } while (lVar2 * 8 != lVar9);
    }
    uVar3 = CONCAT44(uStack_74,uVar5);
    uVar4 = CONCAT44(uStack_6c,uStack_70);
    uStack_74._3_1_ = (undefined1)uVar5;
    uStack_70 = (undefined4)((ulonglong)uVar3 >> 8);
    uStack_6c._3_1_ = (undefined1)uVar7;
    uStack_68 = (undefined7)((ulonglong)uVar4 >> 8);
    *param_1 = 4;
    *(ulonglong *)(param_1 + 1) = CONCAT44(uStack_74,local_78);
    *(ulonglong *)(param_1 + 9) =
         CONCAT44(CONCAT13(uStack_6c._3_1_,(int3)((uint)uVar6 >> 8)),uStack_70);
    *(ulonglong *)(param_1 + 0x10) = CONCAT71(uStack_68,uStack_6c._3_1_);
    *(longlong *)(param_1 + 0x18) = local_48;
  }
  return param_1;
}


