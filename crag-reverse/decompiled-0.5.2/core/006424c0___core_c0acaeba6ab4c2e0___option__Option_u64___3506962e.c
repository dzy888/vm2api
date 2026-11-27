// 006424c0 <core[c0acaeba6ab4c2e0]::option::Option<u64>>

/* WARNING: Switch with 1 destination removed at 0x00642528 */
/* <serde_json[dc3825464c436029]::value::ser::SerializeMap as
   serde_core[48776c27239fa21f]::ser::SerializeStruct>::serialize_field::<core[c0acaeba6ab4c2e0]::option::Option<u64>>
    */

longlong __rustcall
<serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
::serialize_field::<core[c0acaeba6ab4c2e0]::option::Option<u64>>
          (longlong *param_1,char *param_2,longlong param_3,int *param_4)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  undefined1 uVar4;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  char local_a8;
  undefined7 uStack_a7;
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  char local_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  char local_50 [32];
  
  lVar2 = *param_1;
  if (lVar2 == -2) {
    if (((param_3 != 0x1e) ||
        (auVar6[0] = -(param_2[0xe] == DAT_001845d0), auVar6[1] = -(param_2[0xf] == UNK_001845d1),
        auVar6[2] = -(param_2[0x10] == UNK_001845d2), auVar6[3] = -(param_2[0x11] == UNK_001845d3),
        auVar6[4] = -(param_2[0x12] == UNK_001845d4), auVar6[5] = -(param_2[0x13] == UNK_001845d5),
        auVar6[6] = -(param_2[0x14] == UNK_001845d6), auVar6[7] = -(param_2[0x15] == UNK_001845d7),
        auVar6[8] = -(param_2[0x16] == UNK_001845d8), auVar6[9] = -(param_2[0x17] == UNK_001845d9),
        auVar6[10] = -(param_2[0x18] == UNK_001845da),
        auVar6[0xb] = -(param_2[0x19] == UNK_001845db),
        auVar6[0xc] = -(param_2[0x1a] == UNK_001845dc),
        auVar6[0xd] = -(param_2[0x1b] == UNK_001845dd),
        auVar6[0xe] = -(param_2[0x1c] == UNK_001845de),
        auVar6[0xf] = -(param_2[0x1d] == UNK_001845df),
        auVar5[0] = -(*param_2 == s__serde_json__pri1_001837c0[0]),
        auVar5[1] = -(param_2[1] == s__serde_json__pri1_001837c0[1]),
        auVar5[2] = -(param_2[2] == s__serde_json__pri1_001837c0[2]),
        auVar5[3] = -(param_2[3] == s__serde_json__pri1_001837c0[3]),
        auVar5[4] = -(param_2[4] == s__serde_json__pri1_001837c0[4]),
        auVar5[5] = -(param_2[5] == s__serde_json__pri1_001837c0[5]),
        auVar5[6] = -(param_2[6] == s__serde_json__pri1_001837c0[6]),
        auVar5[7] = -(param_2[7] == s__serde_json__pri1_001837c0[7]),
        auVar5[8] = -(param_2[8] == s__serde_json__pri1_001837c0[8]),
        auVar5[9] = -(param_2[9] == s__serde_json__pri1_001837c0[9]),
        auVar5[10] = -(param_2[10] == s__serde_json__pri1_001837c0[10]),
        auVar5[0xb] = -(param_2[0xb] == s__serde_json__pri1_001837c0[0xb]),
        auVar5[0xc] = -(param_2[0xc] == s__serde_json__pri1_001837c0[0xc]),
        auVar5[0xd] = -(param_2[0xd] == s__serde_json__pri1_001837c0[0xd]),
        auVar5[0xe] = -(param_2[0xe] == s__serde_json__pri1_001837c0[0xe]),
        auVar5[0xf] = -(param_2[0xf] == s__serde_json__pri1_001837c0[0xf]), auVar5 = auVar5 & auVar6
        , (ushort)((ushort)(SUB161(auVar5 >> 7,0) & 1) | (ushort)(SUB161(auVar5 >> 0xf,0) & 1) << 1
                   | (ushort)(SUB161(auVar5 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar5 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar5 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar5 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar5 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar5 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar5 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar5 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar5 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar5 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar5 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar5 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar5 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar5[0xf] >> 7) << 0xf) != 0xffff)) || (*param_4 == 1)) {
      lVar2 = (*(code *)PTR_syntax_00799910)(param_4,0);
      return lVar2;
    }
    (*(code *)PTR_serialize_unit_0079a1b0)();
    if (local_a8 == -1) {
      return lStack_a0;
    }
    if ((char)param_1[1] != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (param_1 + 1);
    }
    param_1[3] = local_98;
    param_1[4] = lStack_90;
    param_1[1] = CONCAT71(uStack_a7,local_a8);
    param_1[2] = lStack_a0;
  }
  else {
    uVar4 = param_3 == 0;
    piVar3 = param_4;
    if (-1 < param_3) goto LAB_00642541;
    do {
      uVar4 = 1;
      (*(code *)PTR_handle_error_00798ff0)();
      piVar3 = param_4;
LAB_00642541:
      if ((bool)uVar4) {
        lVar1 = 1;
        goto joined_r0x00642592;
      }
      param_4 = piVar3;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar1 = (*(code *)PTR___rust_alloc_00799000)();
    } while (lVar1 == 0);
    (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa,param_3);
joined_r0x00642592:
    if ((lVar2 != -1) && (lVar2 != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    param_1[1] = lVar1;
    param_1[2] = param_3;
    *param_1 = -1;
    local_80 = param_1[1];
    local_78 = param_1[2];
    local_60 = *(undefined8 *)(piVar3 + 2);
    local_70[0] = (char)*piVar3 * '\x02';
    local_68 = 0;
    local_88 = param_3;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(local_50,param_1 + 3,&local_88,local_70);
    if (local_50[0] != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(local_50)
      ;
    }
  }
  return 0;
}


