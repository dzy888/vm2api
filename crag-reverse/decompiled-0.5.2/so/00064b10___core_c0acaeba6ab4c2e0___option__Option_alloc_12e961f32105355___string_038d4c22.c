// 00064b10 <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>

/* WARNING: Switch with 1 destination removed at 0x00064b79 */
/* <serde_json[dc3825464c436029]::value::ser::SerializeMap as
   serde_core[48776c27239fa21f]::ser::SerializeStruct>::serialize_field::<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
    */

longlong __rustcall
<serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
::serialize_field::<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
          (longlong *param_1,char *param_2,longlong param_3,longlong *param_4)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 uVar5;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  char local_a8;
  undefined7 uStack_a7;
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined1 local_70 [8];
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  char local_50 [32];
  
  plVar4 = (longlong *)*param_1;
  if (plVar4 == (longlong *)0xfffffffffffffffe) {
    if (((param_3 != 0x1e) ||
        (auVar7[0] = -(param_2[0xe] == DAT_00009140), auVar7[1] = -(param_2[0xf] == UNK_00009141),
        auVar7[2] = -(param_2[0x10] == UNK_00009142), auVar7[3] = -(param_2[0x11] == UNK_00009143),
        auVar7[4] = -(param_2[0x12] == UNK_00009144), auVar7[5] = -(param_2[0x13] == UNK_00009145),
        auVar7[6] = -(param_2[0x14] == UNK_00009146), auVar7[7] = -(param_2[0x15] == UNK_00009147),
        auVar7[8] = -(param_2[0x16] == UNK_00009148), auVar7[9] = -(param_2[0x17] == UNK_00009149),
        auVar7[10] = -(param_2[0x18] == UNK_0000914a),
        auVar7[0xb] = -(param_2[0x19] == UNK_0000914b),
        auVar7[0xc] = -(param_2[0x1a] == UNK_0000914c),
        auVar7[0xd] = -(param_2[0x1b] == UNK_0000914d),
        auVar7[0xe] = -(param_2[0x1c] == UNK_0000914e),
        auVar7[0xf] = -(param_2[0x1d] == UNK_0000914f), auVar6[0] = -(*param_2 == DAT_00008f00),
        auVar6[1] = -(param_2[1] == UNK_00008f01), auVar6[2] = -(param_2[2] == UNK_00008f02),
        auVar6[3] = -(param_2[3] == UNK_00008f03), auVar6[4] = -(param_2[4] == UNK_00008f04),
        auVar6[5] = -(param_2[5] == UNK_00008f05), auVar6[6] = -(param_2[6] == UNK_00008f06),
        auVar6[7] = -(param_2[7] == UNK_00008f07), auVar6[8] = -(param_2[8] == UNK_00008f08),
        auVar6[9] = -(param_2[9] == UNK_00008f09), auVar6[10] = -(param_2[10] == UNK_00008f0a),
        auVar6[0xb] = -(param_2[0xb] == UNK_00008f0b), auVar6[0xc] = -(param_2[0xc] == UNK_00008f0c)
        , auVar6[0xd] = -(param_2[0xd] == UNK_00008f0d),
        auVar6[0xe] = -(param_2[0xe] == UNK_00008f0e), auVar6[0xf] = -(param_2[0xf] == UNK_00008f0f)
        , auVar6 = auVar6 & auVar7,
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
                (ushort)(byte)(auVar6[0xf] >> 7) << 0xf) != 0xffff)) || (*param_4 != -1)) {
      lVar2 = (*(code *)PTR_syntax_000c3d50)(param_4,0);
      return lVar2;
    }
    (*(code *)PTR_serialize_unit_000c3e88)();
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
    uVar5 = param_3 == 0;
    plVar3 = param_4;
    if (-1 < param_3) goto LAB_00064b92;
    do {
      uVar5 = 1;
      (*(code *)PTR_handle_error_000c3a98)();
      plVar3 = param_4;
LAB_00064b92:
      if ((bool)uVar5) {
        lVar2 = 1;
        goto joined_r0x00064be3;
      }
      param_4 = plVar3;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
      lVar2 = (*(code *)PTR___rust_alloc_000c3a90)();
    } while (lVar2 == 0);
    (*(code *)PTR_memcpy_000c3aa8)(extraout_XMM0_Qa,param_3);
joined_r0x00064be3:
    if ((plVar4 != (longlong *)0xffffffffffffffff) && (plVar4 != (longlong *)0x0)) {
      (*(code *)PTR___rust_dealloc_000c3aa0)();
      plVar4 = plVar3;
    }
    param_1[1] = lVar2;
    param_1[2] = param_3;
    *param_1 = -1;
    local_80 = param_1[1];
    local_78 = param_1[2];
    local_88 = param_3;
    if (*plVar3 == -1) {
      uVar5 = 0;
    }
    else {
      plVar4 = (longlong *)plVar3[2];
      if ((longlong)plVar4 < 0) {
LAB_00064c39:
        (*(code *)PTR_handle_error_000c3a98)();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar5 = 3;
      if (plVar4 == (longlong *)0x0) {
        lVar2 = 1;
        plVar4 = (longlong *)0x0;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
        lVar2 = (*(code *)PTR___rust_alloc_000c3a90)();
        if (lVar2 == 0) goto LAB_00064c39;
        (*(code *)PTR_memcpy_000c3aa8)(extraout_XMM0_Qa_00,plVar4);
      }
    }
    local_70[0] = uVar5;
    local_68 = plVar4;
    local_60 = lVar2;
    local_58 = plVar4;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(local_50,param_1 + 3,&local_88,local_70);
    if (local_50[0] != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(local_50)
      ;
    }
  }
  return 0;
}


