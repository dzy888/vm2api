// 006426a0 <alloc[12e961f32105355]::string::String>

/* WARNING: Switch with 1 destination removed at 0x006426ff */
/* <serde_json[dc3825464c436029]::value::ser::SerializeMap as
   serde_core[48776c27239fa21f]::ser::SerializeStruct>::serialize_field::<alloc[12e961f32105355]::string::String>
    */

longlong __rustcall
<serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
::serialize_field::<alloc[12e961f32105355]::string::String>
          (longlong *param_1,char *param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  char local_a8;
  undefined7 uStack_a7;
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined1 local_70 [8];
  longlong local_68;
  longlong local_60;
  longlong local_58;
  char local_50 [32];
  
  lVar5 = *param_1;
  if (lVar5 == -2) {
    if ((param_3 != 0x1e) ||
       (auVar8[0] = -(param_2[0xe] == DAT_001845d0), auVar8[1] = -(param_2[0xf] == UNK_001845d1),
       auVar8[2] = -(param_2[0x10] == UNK_001845d2), auVar8[3] = -(param_2[0x11] == UNK_001845d3),
       auVar8[4] = -(param_2[0x12] == UNK_001845d4), auVar8[5] = -(param_2[0x13] == UNK_001845d5),
       auVar8[6] = -(param_2[0x14] == UNK_001845d6), auVar8[7] = -(param_2[0x15] == UNK_001845d7),
       auVar8[8] = -(param_2[0x16] == UNK_001845d8), auVar8[9] = -(param_2[0x17] == UNK_001845d9),
       auVar8[10] = -(param_2[0x18] == UNK_001845da), auVar8[0xb] = -(param_2[0x19] == UNK_001845db)
       , auVar8[0xc] = -(param_2[0x1a] == UNK_001845dc),
       auVar8[0xd] = -(param_2[0x1b] == UNK_001845dd),
       auVar8[0xe] = -(param_2[0x1c] == UNK_001845de),
       auVar8[0xf] = -(param_2[0x1d] == UNK_001845df),
       auVar7[0] = -(*param_2 == s__serde_json__pri1_001837c0[0]),
       auVar7[1] = -(param_2[1] == s__serde_json__pri1_001837c0[1]),
       auVar7[2] = -(param_2[2] == s__serde_json__pri1_001837c0[2]),
       auVar7[3] = -(param_2[3] == s__serde_json__pri1_001837c0[3]),
       auVar7[4] = -(param_2[4] == s__serde_json__pri1_001837c0[4]),
       auVar7[5] = -(param_2[5] == s__serde_json__pri1_001837c0[5]),
       auVar7[6] = -(param_2[6] == s__serde_json__pri1_001837c0[6]),
       auVar7[7] = -(param_2[7] == s__serde_json__pri1_001837c0[7]),
       auVar7[8] = -(param_2[8] == s__serde_json__pri1_001837c0[8]),
       auVar7[9] = -(param_2[9] == s__serde_json__pri1_001837c0[9]),
       auVar7[10] = -(param_2[10] == s__serde_json__pri1_001837c0[10]),
       auVar7[0xb] = -(param_2[0xb] == s__serde_json__pri1_001837c0[0xb]),
       auVar7[0xc] = -(param_2[0xc] == s__serde_json__pri1_001837c0[0xc]),
       auVar7[0xd] = -(param_2[0xd] == s__serde_json__pri1_001837c0[0xd]),
       auVar7[0xe] = -(param_2[0xe] == s__serde_json__pri1_001837c0[0xe]),
       auVar7[0xf] = -(param_2[0xf] == s__serde_json__pri1_001837c0[0xf]), auVar7 = auVar7 & auVar8,
       (ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar7[0xf] >> 7) << 0xf) != 0xffff)) {
      lVar5 = (*(code *)PTR_syntax_00799910)(param_4,0);
      return lVar5;
    }
    uVar1 = *(undefined8 *)(param_4 + 8);
    (*(code *)PTR_serialize_str_0079a1b8)(auVar7._0_8_,*(undefined8 *)(param_4 + 0x10));
    if (local_a8 == -1) {
      return lStack_a0;
    }
    if ((char)param_1[1] != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (param_1 + 1,uVar1);
    }
    param_1[3] = local_98;
    param_1[4] = lStack_90;
    param_1[1] = CONCAT71(uStack_a7,local_a8);
    param_1[2] = lStack_a0;
  }
  else {
    uVar6 = param_3 == 0;
    lVar4 = param_4;
    if (-1 < param_3) goto LAB_00642718;
    do {
      uVar6 = 1;
      (*(code *)PTR_handle_error_00798ff0)();
      lVar4 = param_4;
LAB_00642718:
      if ((bool)uVar6) {
        lVar3 = 1;
        goto joined_r0x006427b9;
      }
      param_4 = lVar4;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar3 = (*(code *)PTR___rust_alloc_00799000)();
    } while (lVar3 == 0);
    (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa,param_3);
joined_r0x006427b9:
    if ((lVar5 != -1) && (lVar5 != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    param_1[1] = lVar3;
    param_1[2] = param_3;
    *param_1 = -1;
    local_80 = param_1[1];
    local_78 = param_1[2];
    lVar5 = *(longlong *)(lVar4 + 0x10);
    local_88 = param_3;
    if (lVar5 < 0) {
LAB_00642809:
      (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (lVar5 == 0) {
      lVar4 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar4 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar4 == 0) goto LAB_00642809;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_00,lVar5);
    }
    local_70[0] = 3;
    local_68 = lVar5;
    local_60 = lVar4;
    local_58 = lVar5;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(local_50,param_1 + 3,&local_88,local_70);
    if (local_50[0] != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(local_50)
      ;
    }
  }
  return 0;
}


