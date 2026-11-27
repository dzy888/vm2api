// 00643600 <&alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>>

/* <serde_json[dc3825464c436029]::value::ser::Serializer as
   serde_core[48776c27239fa21f]::ser::Serializer>::collect_seq::<&alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>>
    */

undefined1 * __rustcall
<serde_json[dc3825464c436029]::value::ser::Serializer_as_serde_core[48776c27239fa21f]::ser::Serializer>
::collect_seq::<&alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>>
          (undefined1 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined7 uStack_68;
  undefined1 uStack_61;
  longlong local_48;
  
  uVar10 = uStack_70;
  uVar9 = uStack_74;
  uVar8 = local_78;
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
      lVar13 = 0;
      do {
        lVar3 = *(longlong *)(lVar1 + 0x10 + lVar13);
        if (lVar3 < 0) {
LAB_00643754:
          (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        if (lVar3 == 0) {
          lVar11 = 1;
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          lVar11 = (*(code *)PTR___rust_alloc_00799000)();
          if (lVar11 == 0) goto LAB_00643754;
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,lVar3);
        }
        local_78 = CONCAT31(local_78._1_3_,3);
        if (local_48 == CONCAT44(uStack_74,uVar8)) {
          (*(code *)PTR_grow_one_00799310)();
        }
        lVar6 = CONCAT44(uStack_6c,uStack_70);
        lVar12 = local_48 * 0x20;
        *(undefined1 *)(lVar6 + lVar12) = 3;
        *(longlong *)(lVar6 + 8 + lVar12) = lVar3;
        *(longlong *)(lVar6 + 0x10 + lVar12) = lVar11;
        *(longlong *)(lVar6 + 0x18 + lVar12) = lVar3;
        local_48 = local_48 + 1;
        lVar13 = lVar13 + 0x18;
      } while (lVar2 * 0x18 != lVar13);
    }
    uVar5 = CONCAT44(uStack_74,uVar8);
    uVar7 = CONCAT44(uStack_6c,uStack_70);
    uStack_74._3_1_ = (undefined1)uVar8;
    uStack_70 = (undefined4)((ulonglong)uVar5 >> 8);
    uStack_6c._3_1_ = (undefined1)uVar10;
    uStack_68 = (undefined7)((ulonglong)uVar7 >> 8);
    *param_1 = 4;
    *(ulonglong *)(param_1 + 1) = CONCAT44(uStack_74,local_78);
    *(ulonglong *)(param_1 + 9) =
         CONCAT44(CONCAT13(uStack_6c._3_1_,(int3)((uint)uVar9 >> 8)),uStack_70);
    *(ulonglong *)(param_1 + 0x10) = CONCAT71(uStack_68,uStack_6c._3_1_);
    *(longlong *)(param_1 + 0x18) = local_48;
  }
  return param_1;
}


