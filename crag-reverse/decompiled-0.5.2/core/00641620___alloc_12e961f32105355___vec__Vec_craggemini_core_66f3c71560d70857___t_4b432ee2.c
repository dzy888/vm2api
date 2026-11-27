// 00641620 <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::tools::GroundingSupport>>

/* WARNING: Switch with 1 destination removed at 0x0064167c */
/* WARNING: Switch with 1 destination removed at 0x006416f7 */
/* <serde_json[dc3825464c436029]::value::ser::SerializeMap as
   serde_core[48776c27239fa21f]::ser::SerializeStruct>::serialize_field::<alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::tools::GroundingSupport>>
    */

undefined8 __rustcall
<serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
::serialize_field::
<alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::tools::GroundingSupport>>
          (longlong *param_1,char *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  char local_98 [8];
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [8];
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  char local_50 [32];
  
  lVar1 = *param_1;
  if (lVar1 == -2) {
    if ((param_3 == 0x1e) &&
       (auVar7[0] = -(param_2[0xe] == DAT_001845d0), auVar7[1] = -(param_2[0xf] == UNK_001845d1),
       auVar7[2] = -(param_2[0x10] == UNK_001845d2), auVar7[3] = -(param_2[0x11] == UNK_001845d3),
       auVar7[4] = -(param_2[0x12] == UNK_001845d4), auVar7[5] = -(param_2[0x13] == UNK_001845d5),
       auVar7[6] = -(param_2[0x14] == UNK_001845d6), auVar7[7] = -(param_2[0x15] == UNK_001845d7),
       auVar7[8] = -(param_2[0x16] == UNK_001845d8), auVar7[9] = -(param_2[0x17] == UNK_001845d9),
       auVar7[10] = -(param_2[0x18] == UNK_001845da), auVar7[0xb] = -(param_2[0x19] == UNK_001845db)
       , auVar7[0xc] = -(param_2[0x1a] == UNK_001845dc),
       auVar7[0xd] = -(param_2[0x1b] == UNK_001845dd),
       auVar7[0xe] = -(param_2[0x1c] == UNK_001845de),
       auVar7[0xf] = -(param_2[0x1d] == UNK_001845df),
       auVar6[0] = -(*param_2 == s__serde_json__pri1_001837c0[0]),
       auVar6[1] = -(param_2[1] == s__serde_json__pri1_001837c0[1]),
       auVar6[2] = -(param_2[2] == s__serde_json__pri1_001837c0[2]),
       auVar6[3] = -(param_2[3] == s__serde_json__pri1_001837c0[3]),
       auVar6[4] = -(param_2[4] == s__serde_json__pri1_001837c0[4]),
       auVar6[5] = -(param_2[5] == s__serde_json__pri1_001837c0[5]),
       auVar6[6] = -(param_2[6] == s__serde_json__pri1_001837c0[6]),
       auVar6[7] = -(param_2[7] == s__serde_json__pri1_001837c0[7]),
       auVar6[8] = -(param_2[8] == s__serde_json__pri1_001837c0[8]),
       auVar6[9] = -(param_2[9] == s__serde_json__pri1_001837c0[9]),
       auVar6[10] = -(param_2[10] == s__serde_json__pri1_001837c0[10]),
       auVar6[0xb] = -(param_2[0xb] == s__serde_json__pri1_001837c0[0xb]),
       auVar6[0xc] = -(param_2[0xc] == s__serde_json__pri1_001837c0[0xc]),
       auVar6[0xd] = -(param_2[0xd] == s__serde_json__pri1_001837c0[0xd]),
       auVar6[0xe] = -(param_2[0xe] == s__serde_json__pri1_001837c0[0xe]),
       auVar6[0xf] = -(param_2[0xf] == s__serde_json__pri1_001837c0[0xf]), auVar6 = auVar6 & auVar7,
       (ushort)((ushort)(SUB161(auVar6 >> 7,0) & 1) | (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar6[0xf] >> 7) << 0xf) == 0xffff)) {
      uVar5 = (*(code *)PTR_syntax_00799910)(auVar6._0_8_,0);
      return uVar5;
    }
    uVar5 = (*(code *)PTR_syntax_00799910)(param_4,0);
    return uVar5;
  }
  uVar4 = param_3 == 0;
  uVar5 = param_4;
  if (-1 < param_3) goto LAB_00641695;
  plVar3 = (longlong *)0x0;
  uVar4 = true;
  while( true ) {
    (*(code *)PTR_handle_error_00798ff0)();
    uVar5 = param_4;
    param_1 = plVar3;
LAB_00641695:
    if ((bool)uVar4) break;
    param_4 = uVar5;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    plVar3 = (longlong *)0x1;
    lVar2 = (*(code *)PTR___rust_alloc_00799000)();
    uVar4 = lVar2 == 0;
    if (!(bool)uVar4) {
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa,param_3);
      if (lVar1 != -1) {
LAB_00641709:
        if (lVar1 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
      }
LAB_00641726:
      param_1[1] = lVar2;
      param_1[2] = param_3;
      *param_1 = -1;
      local_a8 = param_1[1];
      local_a0 = param_1[2];
      local_b0 = param_3;
      uVar5 = <serde_json[dc3825464c436029]::value::ser::Serializer_as_serde_core[48776c27239fa21f]::ser::Serializer>
              ::collect_seq::
              <&alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::tools::GroundingSupport>>
                        (local_98,uVar5);
      if (local_98[0] == -1) {
        if (param_3 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar5,1);
        }
      }
      else {
        local_68 = local_88;
        uStack_60 = uStack_80;
        uStack_70 = uStack_90;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(local_50,param_1 + 3,&local_b0,local_78);
        if (local_50[0] != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (local_50);
        }
        uStack_90 = 0;
      }
      return uStack_90;
    }
  }
  lVar2 = 1;
  if (lVar1 == -1) goto LAB_00641726;
  goto LAB_00641709;
}


