// 00643b70 <&alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::tools::GroundingSupport>>

/* <serde_json[dc3825464c436029]::value::ser::Serializer as
   serde_core[48776c27239fa21f]::ser::Serializer>::collect_seq::<&alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::tools::GroundingSupport>>
    */

undefined1 * __rustcall
<serde_json[dc3825464c436029]::value::ser::Serializer_as_serde_core[48776c27239fa21f]::ser::Serializer>
::collect_seq::
<&alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::tools::GroundingSupport>>
          (undefined1 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  longlong local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined7 uStack_60;
  undefined1 uStack_59;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar7 = uStack_68;
  uVar6 = uStack_6c;
  lVar8 = *(longlong *)(param_2 + 8);
  lVar9 = *(longlong *)(param_2 + 0x10);
  (*(code *)PTR_serialize_seq_0079a1e0)(param_4,lVar9);
  puVar5 = PTR_grow_one_00799310;
  if (CONCAT44(uStack_6c,local_70) == -1) {
    *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_64,uStack_68);
    *param_1 = 0xff;
  }
  else {
    local_78 = CONCAT17(uStack_59,uStack_60);
    if (lVar9 != 0) {
      lVar9 = lVar9 << 6;
      do {
        uVar10 = <craggemini_core[66f3c71560d70857]::tools::GroundingSupport_as_serde_core[48776c27239fa21f]::ser::Serialize>
                 ::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>
                           (&local_50,lVar8);
        if ((char)local_50 == -1) {
          *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_44,uStack_48);
          *param_1 = 0xff;
          lVar8 = CONCAT44(uStack_64,uStack_68);
          for (local_78 = local_78 + 1; local_78 != 1; local_78 = local_78 + -1) {
            uVar10 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                     <serde_json[dc3825464c436029]::value::Value>(lVar8);
            lVar8 = lVar8 + 0x20;
          }
          if (CONCAT44(uStack_6c,local_70) == 0) {
            return param_1;
          }
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar10,8);
          return param_1;
        }
        if (local_78 == CONCAT44(uStack_6c,local_70)) {
          (*(code *)puVar5)();
        }
        lVar8 = lVar8 + 0x40;
        puVar2 = (undefined8 *)(CONCAT44(uStack_64,uStack_68) + 0x10 + local_78 * 0x20);
        *puVar2 = local_40;
        puVar2[1] = uStack_38;
        puVar1 = (undefined4 *)(CONCAT44(uStack_64,uStack_68) + local_78 * 0x20);
        *puVar1 = local_50;
        puVar1[1] = uStack_4c;
        puVar1[2] = uStack_48;
        puVar1[3] = uStack_44;
        local_78 = local_78 + 1;
        lVar9 = lVar9 + -0x40;
      } while (lVar9 != 0);
    }
    uVar3 = CONCAT44(uStack_6c,local_70);
    uVar4 = CONCAT44(uStack_64,uStack_68);
    uStack_6c._3_1_ = (undefined1)local_70;
    uStack_68 = (undefined4)((ulonglong)uVar3 >> 8);
    uStack_64._3_1_ = (undefined1)uVar7;
    uStack_60 = (undefined7)((ulonglong)uVar4 >> 8);
    *param_1 = 4;
    *(ulonglong *)(param_1 + 1) = CONCAT44(uStack_6c,local_70);
    *(ulonglong *)(param_1 + 9) =
         CONCAT44(CONCAT13(uStack_64._3_1_,(int3)((uint)uVar6 >> 8)),uStack_68);
    *(ulonglong *)(param_1 + 0x10) = CONCAT71(uStack_60,uStack_64._3_1_);
    *(longlong *)(param_1 + 0x18) = local_78;
  }
  return param_1;
}


