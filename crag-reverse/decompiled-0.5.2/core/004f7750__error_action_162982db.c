// 004f7750 error_action

/* WARNING: Type propagation algorithm not settling */
/* <craggemini_core[66f3c71560d70857]::protocol::Failure>::error_action */

undefined1 __rustcall
<craggemini_core[66f3c71560d70857]::protocol::Failure>::error_action(longlong param_1)

{
  byte bVar1;
  ushort uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong *puVar8;
  ushort uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  ushort *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong *plVar20;
  longlong lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  char local_44;
  
  uVar3 = *(ulonglong *)(param_1 + 0x10);
  lVar4 = *(longlong *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar2 = *(ushort *)(param_1 + 0x38);
    plVar20 = (longlong *)0x1;
    lVar21 = 0;
    puVar8 = *(ulonglong **)(param_1 + 8);
joined_r0x004f77f5:
    uVar7 = 0;
    plVar6 = (longlong *)0x1;
  }
  else {
    puVar16 = (ushort *)(param_1 + 0x38);
    if (*(char *)(lVar4 + 0x170) != '\0') {
      puVar16 = (ushort *)(lVar4 + 0x172);
    }
    if (*(longlong *)(lVar4 + 0x10) == -1) {
      lVar21 = 0;
      plVar20 = (longlong *)0x1;
      uVar2 = *puVar16;
      lVar5 = *(longlong *)(lVar4 + 0x28);
    }
    else {
      plVar20 = *(longlong **)(lVar4 + 0x18);
      lVar21 = *(longlong *)(lVar4 + 0x20);
      uVar2 = *puVar16;
      lVar5 = *(longlong *)(lVar4 + 0x28);
    }
    if (lVar5 == -1) {
      puVar8 = *(ulonglong **)(param_1 + 8);
      goto joined_r0x004f77f5;
    }
    plVar6 = *(longlong **)(lVar4 + 0x30);
    uVar7 = *(undefined8 *)(lVar4 + 0x38);
    puVar8 = *(ulonglong **)(param_1 + 8);
  }
  if ((uVar3 == 0x1a) &&
     (auVar59[0] = -(*(char *)((longlong)puVar8 + 10) == s_inking_signature_00183690[0]),
     auVar59[1] = -(*(char *)((longlong)puVar8 + 0xb) == s_inking_signature_00183690[1]),
     auVar59[2] = -(*(char *)((longlong)puVar8 + 0xc) == s_inking_signature_00183690[2]),
     auVar59[3] = -(*(char *)((longlong)puVar8 + 0xd) == s_inking_signature_00183690[3]),
     auVar59[4] = -(*(char *)((longlong)puVar8 + 0xe) == s_inking_signature_00183690[4]),
     auVar59[5] = -(*(char *)((longlong)puVar8 + 0xf) == s_inking_signature_00183690[5]),
     auVar59[6] = -((char)puVar8[2] == s_inking_signature_00183690[6]),
     auVar59[7] = -(*(char *)((longlong)puVar8 + 0x11) == s_inking_signature_00183690[7]),
     auVar59[8] = -(*(char *)((longlong)puVar8 + 0x12) == s_inking_signature_00183690[8]),
     auVar59[9] = -(*(char *)((longlong)puVar8 + 0x13) == s_inking_signature_00183690[9]),
     auVar59[10] = -(*(char *)((longlong)puVar8 + 0x14) == s_inking_signature_00183690[10]),
     auVar59[0xb] = -(*(char *)((longlong)puVar8 + 0x15) == s_inking_signature_00183690[0xb]),
     auVar59[0xc] = -(*(char *)((longlong)puVar8 + 0x16) == s_inking_signature_00183690[0xc]),
     auVar59[0xd] = -(*(char *)((longlong)puVar8 + 0x17) == s_inking_signature_00183690[0xd]),
     auVar59[0xe] = -((char)puVar8[3] == s_inking_signature_00183690[0xe]),
     auVar59[0xf] = -(*(char *)((longlong)puVar8 + 0x19) == s_inking_signature_00183690[0xf]),
     auVar22[0] = -((char)*puVar8 == DAT_00183340),
     auVar22[1] = -(*(char *)((longlong)puVar8 + 1) == UNK_00183341),
     auVar22[2] = -(*(char *)((longlong)puVar8 + 2) == UNK_00183342),
     auVar22[3] = -(*(char *)((longlong)puVar8 + 3) == UNK_00183343),
     auVar22[4] = -(*(char *)((longlong)puVar8 + 4) == UNK_00183344),
     auVar22[5] = -(*(char *)((longlong)puVar8 + 5) == UNK_00183345),
     auVar22[6] = -(*(char *)((longlong)puVar8 + 6) == UNK_00183346),
     auVar22[7] = -(*(char *)((longlong)puVar8 + 7) == UNK_00183347),
     auVar22[8] = -((char)puVar8[1] == UNK_00183348),
     auVar22[9] = -(*(char *)((longlong)puVar8 + 9) == UNK_00183349),
     auVar22[10] = -(*(char *)((longlong)puVar8 + 10) == UNK_0018334a),
     auVar22[0xb] = -(*(char *)((longlong)puVar8 + 0xb) == UNK_0018334b),
     auVar22[0xc] = -(*(char *)((longlong)puVar8 + 0xc) == UNK_0018334c),
     auVar22[0xd] = -(*(char *)((longlong)puVar8 + 0xd) == UNK_0018334d),
     auVar22[0xe] = -(*(char *)((longlong)puVar8 + 0xe) == UNK_0018334e),
     auVar22[0xf] = -(*(char *)((longlong)puVar8 + 0xf) == UNK_0018334f),
     auVar22 = auVar22 & auVar59,
     (ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
             (ushort)(byte)(auVar22[0xf] >> 7) << 0xf) == 0xffff)) {
    return 1;
  }
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0x175) != '\0')) {
    return 1;
  }
  if (uVar3 == 0x19) {
    auVar60[0] = -(*(char *)((longlong)puVar8 + 9) == DAT_00184580);
    auVar60[1] = -(*(char *)((longlong)puVar8 + 10) == UNK_00184581);
    auVar60[2] = -(*(char *)((longlong)puVar8 + 0xb) == UNK_00184582);
    auVar60[3] = -(*(char *)((longlong)puVar8 + 0xc) == UNK_00184583);
    auVar60[4] = -(*(char *)((longlong)puVar8 + 0xd) == UNK_00184584);
    auVar60[5] = -(*(char *)((longlong)puVar8 + 0xe) == UNK_00184585);
    auVar60[6] = -(*(char *)((longlong)puVar8 + 0xf) == UNK_00184586);
    auVar60[7] = -((char)puVar8[2] == UNK_00184587);
    auVar60[8] = -(*(char *)((longlong)puVar8 + 0x11) == UNK_00184588);
    auVar60[9] = -(*(char *)((longlong)puVar8 + 0x12) == UNK_00184589);
    auVar60[10] = -(*(char *)((longlong)puVar8 + 0x13) == UNK_0018458a);
    auVar60[0xb] = -(*(char *)((longlong)puVar8 + 0x14) == UNK_0018458b);
    auVar60[0xc] = -(*(char *)((longlong)puVar8 + 0x15) == UNK_0018458c);
    auVar60[0xd] = -(*(char *)((longlong)puVar8 + 0x16) == UNK_0018458d);
    auVar60[0xe] = -(*(char *)((longlong)puVar8 + 0x17) == UNK_0018458e);
    auVar60[0xf] = -((char)puVar8[3] == UNK_0018458f);
    auVar23[0] = -((char)*puVar8 == s_tool_continuatio_00182a80[0]);
    auVar23[1] = -(*(char *)((longlong)puVar8 + 1) == s_tool_continuatio_00182a80[1]);
    auVar23[2] = -(*(char *)((longlong)puVar8 + 2) == s_tool_continuatio_00182a80[2]);
    auVar23[3] = -(*(char *)((longlong)puVar8 + 3) == s_tool_continuatio_00182a80[3]);
    auVar23[4] = -(*(char *)((longlong)puVar8 + 4) == s_tool_continuatio_00182a80[4]);
    auVar23[5] = -(*(char *)((longlong)puVar8 + 5) == s_tool_continuatio_00182a80[5]);
    auVar23[6] = -(*(char *)((longlong)puVar8 + 6) == s_tool_continuatio_00182a80[6]);
    auVar23[7] = -(*(char *)((longlong)puVar8 + 7) == s_tool_continuatio_00182a80[7]);
    auVar23[8] = -((char)puVar8[1] == s_tool_continuatio_00182a80[8]);
    auVar23[9] = -(*(char *)((longlong)puVar8 + 9) == s_tool_continuatio_00182a80[9]);
    auVar23[10] = -(*(char *)((longlong)puVar8 + 10) == s_tool_continuatio_00182a80[10]);
    auVar23[0xb] = -(*(char *)((longlong)puVar8 + 0xb) == s_tool_continuatio_00182a80[0xb]);
    auVar23[0xc] = -(*(char *)((longlong)puVar8 + 0xc) == s_tool_continuatio_00182a80[0xc]);
    auVar23[0xd] = -(*(char *)((longlong)puVar8 + 0xd) == s_tool_continuatio_00182a80[0xd]);
    auVar23[0xe] = -(*(char *)((longlong)puVar8 + 0xe) == s_tool_continuatio_00182a80[0xe]);
    auVar23[0xf] = -(*(char *)((longlong)puVar8 + 0xf) == s_tool_continuatio_00182a80[0xf]);
    auVar23 = auVar23 & auVar60;
    if ((ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar23[0xf] >> 7) << 0xf) == 0xffff) {
      return 1;
    }
    bVar10 = false;
LAB_004f7872:
    bVar14 = false;
LAB_004f7874:
    bVar12 = false;
LAB_004f7876:
    bVar13 = bVar10;
    if (*puVar8 == 0x5f65736e6563696c) {
      return 0;
    }
  }
  else {
    if (uVar3 == 0x10) {
      auVar26[0] = -((char)*puVar8 == s_resume_not_found_00183d60[0]);
      auVar26[1] = -(*(char *)((longlong)puVar8 + 1) == s_resume_not_found_00183d60[1]);
      auVar26[2] = -(*(char *)((longlong)puVar8 + 2) == s_resume_not_found_00183d60[2]);
      auVar26[3] = -(*(char *)((longlong)puVar8 + 3) == s_resume_not_found_00183d60[3]);
      auVar26[4] = -(*(char *)((longlong)puVar8 + 4) == s_resume_not_found_00183d60[4]);
      auVar26[5] = -(*(char *)((longlong)puVar8 + 5) == s_resume_not_found_00183d60[5]);
      auVar26[6] = -(*(char *)((longlong)puVar8 + 6) == s_resume_not_found_00183d60[6]);
      auVar26[7] = -(*(char *)((longlong)puVar8 + 7) == s_resume_not_found_00183d60[7]);
      auVar26[8] = -((char)puVar8[1] == s_resume_not_found_00183d60[8]);
      auVar26[9] = -(*(char *)((longlong)puVar8 + 9) == s_resume_not_found_00183d60[9]);
      auVar26[10] = -(*(char *)((longlong)puVar8 + 10) == s_resume_not_found_00183d60[10]);
      auVar26[0xb] = -(*(char *)((longlong)puVar8 + 0xb) == s_resume_not_found_00183d60[0xb]);
      auVar26[0xc] = -(*(char *)((longlong)puVar8 + 0xc) == s_resume_not_found_00183d60[0xc]);
      auVar26[0xd] = -(*(char *)((longlong)puVar8 + 0xd) == s_resume_not_found_00183d60[0xd]);
      auVar26[0xe] = -(*(char *)((longlong)puVar8 + 0xe) == s_resume_not_found_00183d60[0xe]);
      auVar26[0xf] = -(*(char *)((longlong)puVar8 + 0xf) == s_resume_not_found_00183d60[0xf]);
      bVar10 = true;
      if ((ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar26[0xf] >> 7) << 0xf) == 0xffff) {
        return 1;
      }
      goto LAB_004f7872;
    }
    if (uVar3 == 0x16) {
      auVar62[0] = -(*(char *)((longlong)puVar8 + 6) == s_sation_not_found_001830e0[0]);
      auVar62[1] = -(*(char *)((longlong)puVar8 + 7) == s_sation_not_found_001830e0[1]);
      auVar62[2] = -((char)puVar8[1] == s_sation_not_found_001830e0[2]);
      auVar62[3] = -(*(char *)((longlong)puVar8 + 9) == s_sation_not_found_001830e0[3]);
      auVar62[4] = -(*(char *)((longlong)puVar8 + 10) == s_sation_not_found_001830e0[4]);
      auVar62[5] = -(*(char *)((longlong)puVar8 + 0xb) == s_sation_not_found_001830e0[5]);
      auVar62[6] = -(*(char *)((longlong)puVar8 + 0xc) == s_sation_not_found_001830e0[6]);
      auVar62[7] = -(*(char *)((longlong)puVar8 + 0xd) == s_sation_not_found_001830e0[7]);
      auVar62[8] = -(*(char *)((longlong)puVar8 + 0xe) == s_sation_not_found_001830e0[8]);
      auVar62[9] = -(*(char *)((longlong)puVar8 + 0xf) == s_sation_not_found_001830e0[9]);
      auVar62[10] = -((char)puVar8[2] == s_sation_not_found_001830e0[10]);
      auVar62[0xb] = -(*(char *)((longlong)puVar8 + 0x11) == s_sation_not_found_001830e0[0xb]);
      auVar62[0xc] = -(*(char *)((longlong)puVar8 + 0x12) == s_sation_not_found_001830e0[0xc]);
      auVar62[0xd] = -(*(char *)((longlong)puVar8 + 0x13) == s_sation_not_found_001830e0[0xd]);
      auVar62[0xe] = -(*(char *)((longlong)puVar8 + 0x14) == s_sation_not_found_001830e0[0xe]);
      auVar62[0xf] = -(*(char *)((longlong)puVar8 + 0x15) == s_sation_not_found_001830e0[0xf]);
      auVar25[0] = -((char)*puVar8 == s_conversation_not_00183fc0[0]);
      auVar25[1] = -(*(char *)((longlong)puVar8 + 1) == s_conversation_not_00183fc0[1]);
      auVar25[2] = -(*(char *)((longlong)puVar8 + 2) == s_conversation_not_00183fc0[2]);
      auVar25[3] = -(*(char *)((longlong)puVar8 + 3) == s_conversation_not_00183fc0[3]);
      auVar25[4] = -(*(char *)((longlong)puVar8 + 4) == s_conversation_not_00183fc0[4]);
      auVar25[5] = -(*(char *)((longlong)puVar8 + 5) == s_conversation_not_00183fc0[5]);
      auVar25[6] = -(*(char *)((longlong)puVar8 + 6) == s_conversation_not_00183fc0[6]);
      auVar25[7] = -(*(char *)((longlong)puVar8 + 7) == s_conversation_not_00183fc0[7]);
      auVar25[8] = -((char)puVar8[1] == s_conversation_not_00183fc0[8]);
      auVar25[9] = -(*(char *)((longlong)puVar8 + 9) == s_conversation_not_00183fc0[9]);
      auVar25[10] = -(*(char *)((longlong)puVar8 + 10) == s_conversation_not_00183fc0[10]);
      auVar25[0xb] = -(*(char *)((longlong)puVar8 + 0xb) == s_conversation_not_00183fc0[0xb]);
      auVar25[0xc] = -(*(char *)((longlong)puVar8 + 0xc) == s_conversation_not_00183fc0[0xc]);
      auVar25[0xd] = -(*(char *)((longlong)puVar8 + 0xd) == s_conversation_not_00183fc0[0xd]);
      auVar25[0xe] = -(*(char *)((longlong)puVar8 + 0xe) == s_conversation_not_00183fc0[0xe]);
      auVar25[0xf] = -(*(char *)((longlong)puVar8 + 0xf) == s_conversation_not_00183fc0[0xf]);
      auVar25 = auVar25 & auVar62;
      bVar12 = true;
      if ((ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar25[0xf] >> 7) << 0xf) == 0xffff) {
        return 1;
      }
      bVar14 = false;
      bVar10 = false;
      goto LAB_004f7876;
    }
    if (uVar3 == 0x17) {
      auVar61[0] = -(*(char *)((longlong)puVar8 + 7) == s_session_conflict_00183af0[0]);
      auVar61[1] = -((char)puVar8[1] == s_session_conflict_00183af0[1]);
      auVar61[2] = -(*(char *)((longlong)puVar8 + 9) == s_session_conflict_00183af0[2]);
      auVar61[3] = -(*(char *)((longlong)puVar8 + 10) == s_session_conflict_00183af0[3]);
      auVar61[4] = -(*(char *)((longlong)puVar8 + 0xb) == s_session_conflict_00183af0[4]);
      auVar61[5] = -(*(char *)((longlong)puVar8 + 0xc) == s_session_conflict_00183af0[5]);
      auVar61[6] = -(*(char *)((longlong)puVar8 + 0xd) == s_session_conflict_00183af0[6]);
      auVar61[7] = -(*(char *)((longlong)puVar8 + 0xe) == s_session_conflict_00183af0[7]);
      auVar61[8] = -(*(char *)((longlong)puVar8 + 0xf) == s_session_conflict_00183af0[8]);
      auVar61[9] = -((char)puVar8[2] == s_session_conflict_00183af0[9]);
      auVar61[10] = -(*(char *)((longlong)puVar8 + 0x11) == s_session_conflict_00183af0[10]);
      auVar61[0xb] = -(*(char *)((longlong)puVar8 + 0x12) == s_session_conflict_00183af0[0xb]);
      auVar61[0xc] = -(*(char *)((longlong)puVar8 + 0x13) == s_session_conflict_00183af0[0xc]);
      auVar61[0xd] = -(*(char *)((longlong)puVar8 + 0x14) == s_session_conflict_00183af0[0xd]);
      auVar61[0xe] = -(*(char *)((longlong)puVar8 + 0x15) == s_session_conflict_00183af0[0xe]);
      auVar61[0xf] = -(*(char *)((longlong)puVar8 + 0x16) == s_session_conflict_00183af0[0xf]);
      auVar24[0] = -((char)*puVar8 == DAT_00182fa0);
      auVar24[1] = -(*(char *)((longlong)puVar8 + 1) == UNK_00182fa1);
      auVar24[2] = -(*(char *)((longlong)puVar8 + 2) == UNK_00182fa2);
      auVar24[3] = -(*(char *)((longlong)puVar8 + 3) == UNK_00182fa3);
      auVar24[4] = -(*(char *)((longlong)puVar8 + 4) == UNK_00182fa4);
      auVar24[5] = -(*(char *)((longlong)puVar8 + 5) == UNK_00182fa5);
      auVar24[6] = -(*(char *)((longlong)puVar8 + 6) == UNK_00182fa6);
      auVar24[7] = -(*(char *)((longlong)puVar8 + 7) == UNK_00182fa7);
      auVar24[8] = -((char)puVar8[1] == UNK_00182fa8);
      auVar24[9] = -(*(char *)((longlong)puVar8 + 9) == UNK_00182fa9);
      auVar24[10] = -(*(char *)((longlong)puVar8 + 10) == UNK_00182faa);
      auVar24[0xb] = -(*(char *)((longlong)puVar8 + 0xb) == UNK_00182fab);
      auVar24[0xc] = -(*(char *)((longlong)puVar8 + 0xc) == UNK_00182fac);
      auVar24[0xd] = -(*(char *)((longlong)puVar8 + 0xd) == UNK_00182fad);
      auVar24[0xe] = -(*(char *)((longlong)puVar8 + 0xe) == UNK_00182fae);
      auVar24[0xf] = -(*(char *)((longlong)puVar8 + 0xf) == UNK_00182faf);
      auVar24 = auVar24 & auVar61;
      bVar14 = true;
      if ((ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar24[0xf] >> 7) << 0xf) == 0xffff) {
        return 1;
      }
      bVar10 = false;
      goto LAB_004f7874;
    }
    bVar13 = false;
    bVar14 = false;
    bVar12 = false;
    bVar10 = false;
    if (7 < uVar3) goto LAB_004f7876;
  }
  if (lVar4 == 0) {
    bVar1 = *(byte *)(param_1 + 0x3b);
    if (bVar1 == 7) {
      return 0;
    }
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x3b);
    if (bVar1 == 7 || *(char *)(lVar4 + 0x174) != '\0') {
      return 0;
    }
  }
  if (uVar3 == 9) {
    bVar11 = false;
    bVar10 = false;
    if ((char)puVar8[1] == 'd' && *puVar8 == 0x656c6c65636e6163) {
      return 0;
    }
  }
  else if (uVar3 == 0xf) {
    bVar10 = false;
    bVar11 = true;
    if (*(longlong *)((longlong)puVar8 + 7) == 0x747365757165725f && *puVar8 == 0x5f64696c61766e69)
    {
      return 0;
    }
  }
  else if (uVar3 == 0x13) {
    auVar27[0] = -(*(char *)((longlong)puVar8 + 3) == DAT_00183630);
    auVar27[1] = -(*(char *)((longlong)puVar8 + 4) == UNK_00183631);
    auVar27[2] = -(*(char *)((longlong)puVar8 + 5) == UNK_00183632);
    auVar27[3] = -(*(char *)((longlong)puVar8 + 6) == UNK_00183633);
    auVar27[4] = -(*(char *)((longlong)puVar8 + 7) == UNK_00183634);
    auVar27[5] = -((char)puVar8[1] == UNK_00183635);
    auVar27[6] = -(*(char *)((longlong)puVar8 + 9) == UNK_00183636);
    auVar27[7] = -(*(char *)((longlong)puVar8 + 10) == UNK_00183637);
    auVar27[8] = -(*(char *)((longlong)puVar8 + 0xb) == UNK_00183638);
    auVar27[9] = -(*(char *)((longlong)puVar8 + 0xc) == UNK_00183639);
    auVar27[10] = -(*(char *)((longlong)puVar8 + 0xd) == UNK_0018363a);
    auVar27[0xb] = -(*(char *)((longlong)puVar8 + 0xe) == UNK_0018363b);
    auVar27[0xc] = -(*(char *)((longlong)puVar8 + 0xf) == UNK_0018363c);
    auVar27[0xd] = -((char)puVar8[2] == UNK_0018363d);
    auVar27[0xe] = -(*(char *)((longlong)puVar8 + 0x11) == UNK_0018363e);
    auVar27[0xf] = -(*(char *)((longlong)puVar8 + 0x12) == UNK_0018363f);
    auVar63[0] = -((char)*puVar8 == DAT_00183a60);
    auVar63[1] = -(*(char *)((longlong)puVar8 + 1) == UNK_00183a61);
    auVar63[2] = -(*(char *)((longlong)puVar8 + 2) == UNK_00183a62);
    auVar63[3] = -(*(char *)((longlong)puVar8 + 3) == UNK_00183a63);
    auVar63[4] = -(*(char *)((longlong)puVar8 + 4) == UNK_00183a64);
    auVar63[5] = -(*(char *)((longlong)puVar8 + 5) == UNK_00183a65);
    auVar63[6] = -(*(char *)((longlong)puVar8 + 6) == UNK_00183a66);
    auVar63[7] = -(*(char *)((longlong)puVar8 + 7) == UNK_00183a67);
    auVar63[8] = -((char)puVar8[1] == UNK_00183a68);
    auVar63[9] = -(*(char *)((longlong)puVar8 + 9) == UNK_00183a69);
    auVar63[10] = -(*(char *)((longlong)puVar8 + 10) == UNK_00183a6a);
    auVar63[0xb] = -(*(char *)((longlong)puVar8 + 0xb) == UNK_00183a6b);
    auVar63[0xc] = -(*(char *)((longlong)puVar8 + 0xc) == UNK_00183a6c);
    auVar63[0xd] = -(*(char *)((longlong)puVar8 + 0xd) == UNK_00183a6d);
    auVar63[0xe] = -(*(char *)((longlong)puVar8 + 0xe) == UNK_00183a6e);
    auVar63[0xf] = -(*(char *)((longlong)puVar8 + 0xf) == UNK_00183a6f);
    auVar63 = auVar63 & auVar27;
    bVar10 = true;
    bVar11 = false;
    if ((ushort)((ushort)(SUB161(auVar63 >> 7,0) & 1) | (ushort)(SUB161(auVar63 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar63 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar63 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar63 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar63 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar63 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar63 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar63 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar63 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar63 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar63 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar63 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar63 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar63 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar63[0xf] >> 7) << 0xf) == 0xffff) {
      return 0;
    }
  }
  else {
    bVar11 = false;
    bVar10 = false;
  }
  if ((bVar13) &&
     (auVar28[0] = -((char)*puVar8 == s_invalid_envelope_001826c0[0]),
     auVar28[1] = -(*(char *)((longlong)puVar8 + 1) == s_invalid_envelope_001826c0[1]),
     auVar28[2] = -(*(char *)((longlong)puVar8 + 2) == s_invalid_envelope_001826c0[2]),
     auVar28[3] = -(*(char *)((longlong)puVar8 + 3) == s_invalid_envelope_001826c0[3]),
     auVar28[4] = -(*(char *)((longlong)puVar8 + 4) == s_invalid_envelope_001826c0[4]),
     auVar28[5] = -(*(char *)((longlong)puVar8 + 5) == s_invalid_envelope_001826c0[5]),
     auVar28[6] = -(*(char *)((longlong)puVar8 + 6) == s_invalid_envelope_001826c0[6]),
     auVar28[7] = -(*(char *)((longlong)puVar8 + 7) == s_invalid_envelope_001826c0[7]),
     auVar28[8] = -((char)puVar8[1] == s_invalid_envelope_001826c0[8]),
     auVar28[9] = -(*(char *)((longlong)puVar8 + 9) == s_invalid_envelope_001826c0[9]),
     auVar28[10] = -(*(char *)((longlong)puVar8 + 10) == s_invalid_envelope_001826c0[10]),
     auVar28[0xb] = -(*(char *)((longlong)puVar8 + 0xb) == s_invalid_envelope_001826c0[0xb]),
     auVar28[0xc] = -(*(char *)((longlong)puVar8 + 0xc) == s_invalid_envelope_001826c0[0xc]),
     auVar28[0xd] = -(*(char *)((longlong)puVar8 + 0xd) == s_invalid_envelope_001826c0[0xd]),
     auVar28[0xe] = -(*(char *)((longlong)puVar8 + 0xe) == s_invalid_envelope_001826c0[0xe]),
     auVar28[0xf] = -(*(char *)((longlong)puVar8 + 0xf) == s_invalid_envelope_001826c0[0xf]),
     (ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe | (ushort)(auVar28[0xf] >> 7) << 0xf)
     == 0xffff)) {
    return 0;
  }
  if ((uVar3 == 0xc) && ((int)puVar8[1] == 0x6e6f736a && *puVar8 == 0x5f64696c61766e69)) {
    return 0;
  }
  if ((bVar13) &&
     (auVar29[0] = -((char)*puVar8 == s_unsupported_turn_001826d0[0]),
     auVar29[1] = -(*(char *)((longlong)puVar8 + 1) == s_unsupported_turn_001826d0[1]),
     auVar29[2] = -(*(char *)((longlong)puVar8 + 2) == s_unsupported_turn_001826d0[2]),
     auVar29[3] = -(*(char *)((longlong)puVar8 + 3) == s_unsupported_turn_001826d0[3]),
     auVar29[4] = -(*(char *)((longlong)puVar8 + 4) == s_unsupported_turn_001826d0[4]),
     auVar29[5] = -(*(char *)((longlong)puVar8 + 5) == s_unsupported_turn_001826d0[5]),
     auVar29[6] = -(*(char *)((longlong)puVar8 + 6) == s_unsupported_turn_001826d0[6]),
     auVar29[7] = -(*(char *)((longlong)puVar8 + 7) == s_unsupported_turn_001826d0[7]),
     auVar29[8] = -((char)puVar8[1] == s_unsupported_turn_001826d0[8]),
     auVar29[9] = -(*(char *)((longlong)puVar8 + 9) == s_unsupported_turn_001826d0[9]),
     auVar29[10] = -(*(char *)((longlong)puVar8 + 10) == s_unsupported_turn_001826d0[10]),
     auVar29[0xb] = -(*(char *)((longlong)puVar8 + 0xb) == s_unsupported_turn_001826d0[0xb]),
     auVar29[0xc] = -(*(char *)((longlong)puVar8 + 0xc) == s_unsupported_turn_001826d0[0xc]),
     auVar29[0xd] = -(*(char *)((longlong)puVar8 + 0xd) == s_unsupported_turn_001826d0[0xd]),
     auVar29[0xe] = -(*(char *)((longlong)puVar8 + 0xe) == s_unsupported_turn_001826d0[0xe]),
     auVar29[0xf] = -(*(char *)((longlong)puVar8 + 0xf) == s_unsupported_turn_001826d0[0xf]),
     (ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe | (ushort)(auVar29[0xf] >> 7) << 0xf)
     == 0xffff)) {
    return 0;
  }
  if ((bVar12) &&
     (auVar64[0] = -(*(char *)((longlong)puVar8 + 6) == s__invalid_request_00183480[0]),
     auVar64[1] = -(*(char *)((longlong)puVar8 + 7) == s__invalid_request_00183480[1]),
     auVar64[2] = -((char)puVar8[1] == s__invalid_request_00183480[2]),
     auVar64[3] = -(*(char *)((longlong)puVar8 + 9) == s__invalid_request_00183480[3]),
     auVar64[4] = -(*(char *)((longlong)puVar8 + 10) == s__invalid_request_00183480[4]),
     auVar64[5] = -(*(char *)((longlong)puVar8 + 0xb) == s__invalid_request_00183480[5]),
     auVar64[6] = -(*(char *)((longlong)puVar8 + 0xc) == s__invalid_request_00183480[6]),
     auVar64[7] = -(*(char *)((longlong)puVar8 + 0xd) == s__invalid_request_00183480[7]),
     auVar64[8] = -(*(char *)((longlong)puVar8 + 0xe) == s__invalid_request_00183480[8]),
     auVar64[9] = -(*(char *)((longlong)puVar8 + 0xf) == s__invalid_request_00183480[9]),
     auVar64[10] = -((char)puVar8[2] == s__invalid_request_00183480[10]),
     auVar64[0xb] = -(*(char *)((longlong)puVar8 + 0x11) == s__invalid_request_00183480[0xb]),
     auVar64[0xc] = -(*(char *)((longlong)puVar8 + 0x12) == s__invalid_request_00183480[0xc]),
     auVar64[0xd] = -(*(char *)((longlong)puVar8 + 0x13) == s__invalid_request_00183480[0xd]),
     auVar64[0xe] = -(*(char *)((longlong)puVar8 + 0x14) == s__invalid_request_00183480[0xe]),
     auVar64[0xf] = -(*(char *)((longlong)puVar8 + 0x15) == s__invalid_request_00183480[0xf]),
     auVar30[0] = -((char)*puVar8 == s_gemini_invalid_r_00183b00[0]),
     auVar30[1] = -(*(char *)((longlong)puVar8 + 1) == s_gemini_invalid_r_00183b00[1]),
     auVar30[2] = -(*(char *)((longlong)puVar8 + 2) == s_gemini_invalid_r_00183b00[2]),
     auVar30[3] = -(*(char *)((longlong)puVar8 + 3) == s_gemini_invalid_r_00183b00[3]),
     auVar30[4] = -(*(char *)((longlong)puVar8 + 4) == s_gemini_invalid_r_00183b00[4]),
     auVar30[5] = -(*(char *)((longlong)puVar8 + 5) == s_gemini_invalid_r_00183b00[5]),
     auVar30[6] = -(*(char *)((longlong)puVar8 + 6) == s_gemini_invalid_r_00183b00[6]),
     auVar30[7] = -(*(char *)((longlong)puVar8 + 7) == s_gemini_invalid_r_00183b00[7]),
     auVar30[8] = -((char)puVar8[1] == s_gemini_invalid_r_00183b00[8]),
     auVar30[9] = -(*(char *)((longlong)puVar8 + 9) == s_gemini_invalid_r_00183b00[9]),
     auVar30[10] = -(*(char *)((longlong)puVar8 + 10) == s_gemini_invalid_r_00183b00[10]),
     auVar30[0xb] = -(*(char *)((longlong)puVar8 + 0xb) == s_gemini_invalid_r_00183b00[0xb]),
     auVar30[0xc] = -(*(char *)((longlong)puVar8 + 0xc) == s_gemini_invalid_r_00183b00[0xc]),
     auVar30[0xd] = -(*(char *)((longlong)puVar8 + 0xd) == s_gemini_invalid_r_00183b00[0xd]),
     auVar30[0xe] = -(*(char *)((longlong)puVar8 + 0xe) == s_gemini_invalid_r_00183b00[0xe]),
     auVar30[0xf] = -(*(char *)((longlong)puVar8 + 0xf) == s_gemini_invalid_r_00183b00[0xf]),
     auVar30 = auVar30 & auVar64,
     (ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
             (ushort)(byte)(auVar30[0xf] >> 7) << 0xf) == 0xffff)) {
    return 0;
  }
  if ((bVar14) &&
     (auVar65[0] = -(*(char *)((longlong)puVar8 + 7) == DAT_00182570),
     auVar65[1] = -((char)puVar8[1] == UNK_00182571),
     auVar65[2] = -(*(char *)((longlong)puVar8 + 9) == UNK_00182572),
     auVar65[3] = -(*(char *)((longlong)puVar8 + 10) == UNK_00182573),
     auVar65[4] = -(*(char *)((longlong)puVar8 + 0xb) == UNK_00182574),
     auVar65[5] = -(*(char *)((longlong)puVar8 + 0xc) == UNK_00182575),
     auVar65[6] = -(*(char *)((longlong)puVar8 + 0xd) == UNK_00182576),
     auVar65[7] = -(*(char *)((longlong)puVar8 + 0xe) == UNK_00182577),
     auVar65[8] = -(*(char *)((longlong)puVar8 + 0xf) == UNK_00182578),
     auVar65[9] = -((char)puVar8[2] == UNK_00182579),
     auVar65[10] = -(*(char *)((longlong)puVar8 + 0x11) == UNK_0018257a),
     auVar65[0xb] = -(*(char *)((longlong)puVar8 + 0x12) == UNK_0018257b),
     auVar65[0xc] = -(*(char *)((longlong)puVar8 + 0x13) == UNK_0018257c),
     auVar65[0xd] = -(*(char *)((longlong)puVar8 + 0x14) == UNK_0018257d),
     auVar65[0xe] = -(*(char *)((longlong)puVar8 + 0x15) == UNK_0018257e),
     auVar65[0xf] = -(*(char *)((longlong)puVar8 + 0x16) == UNK_0018257f),
     auVar31[0] = -((char)*puVar8 == DAT_00183870),
     auVar31[1] = -(*(char *)((longlong)puVar8 + 1) == UNK_00183871),
     auVar31[2] = -(*(char *)((longlong)puVar8 + 2) == UNK_00183872),
     auVar31[3] = -(*(char *)((longlong)puVar8 + 3) == UNK_00183873),
     auVar31[4] = -(*(char *)((longlong)puVar8 + 4) == UNK_00183874),
     auVar31[5] = -(*(char *)((longlong)puVar8 + 5) == UNK_00183875),
     auVar31[6] = -(*(char *)((longlong)puVar8 + 6) == UNK_00183876),
     auVar31[7] = -(*(char *)((longlong)puVar8 + 7) == UNK_00183877),
     auVar31[8] = -((char)puVar8[1] == UNK_00183878),
     auVar31[9] = -(*(char *)((longlong)puVar8 + 9) == UNK_00183879),
     auVar31[10] = -(*(char *)((longlong)puVar8 + 10) == UNK_0018387a),
     auVar31[0xb] = -(*(char *)((longlong)puVar8 + 0xb) == UNK_0018387b),
     auVar31[0xc] = -(*(char *)((longlong)puVar8 + 0xc) == UNK_0018387c),
     auVar31[0xd] = -(*(char *)((longlong)puVar8 + 0xd) == UNK_0018387d),
     auVar31[0xe] = -(*(char *)((longlong)puVar8 + 0xe) == UNK_0018387e),
     auVar31[0xf] = -(*(char *)((longlong)puVar8 + 0xf) == UNK_0018387f),
     auVar31 = auVar31 & auVar65,
     (ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
             (ushort)(byte)(auVar31[0xf] >> 7) << 0xf) == 0xffff)) {
    return 0;
  }
  if (uVar3 == 0x18) {
    uVar17 = puVar8[2];
    auVar66[0] = -((char)uVar17 == s_vailable_00183b10[0]);
    auVar66[1] = -((char)(uVar17 >> 8) == s_vailable_00183b10[1]);
    auVar66[2] = -((char)(uVar17 >> 0x10) == s_vailable_00183b10[2]);
    auVar66[3] = -((char)(uVar17 >> 0x18) == s_vailable_00183b10[3]);
    auVar66[4] = -((char)(uVar17 >> 0x20) == s_vailable_00183b10[4]);
    auVar66[5] = -((char)(uVar17 >> 0x28) == s_vailable_00183b10[5]);
    auVar66[6] = -((char)(uVar17 >> 0x30) == s_vailable_00183b10[6]);
    auVar66[7] = -((char)(uVar17 >> 0x38) == s_vailable_00183b10[7]);
    auVar66[8] = -(s_vailable_00183b10[8] == '\0');
    auVar66[9] = -(s_vailable_00183b10[9] == '\0');
    auVar66[10] = -(s_vailable_00183b10[10] == '\0');
    auVar66[0xb] = -(s_vailable_00183b10[0xb] == '\0');
    auVar66[0xc] = -(UNK_00183b1c == '\0');
    auVar66[0xd] = -(UNK_00183b1d == '\0');
    auVar66[0xe] = -(UNK_00183b1e == '\0');
    auVar66[0xf] = -(UNK_00183b1f == '\0');
    auVar32[0] = -((char)*puVar8 == s_gemini_model_una_001836a0[0]);
    auVar32[1] = -(*(char *)((longlong)puVar8 + 1) == s_gemini_model_una_001836a0[1]);
    auVar32[2] = -(*(char *)((longlong)puVar8 + 2) == s_gemini_model_una_001836a0[2]);
    auVar32[3] = -(*(char *)((longlong)puVar8 + 3) == s_gemini_model_una_001836a0[3]);
    auVar32[4] = -(*(char *)((longlong)puVar8 + 4) == s_gemini_model_una_001836a0[4]);
    auVar32[5] = -(*(char *)((longlong)puVar8 + 5) == s_gemini_model_una_001836a0[5]);
    auVar32[6] = -(*(char *)((longlong)puVar8 + 6) == s_gemini_model_una_001836a0[6]);
    auVar32[7] = -(*(char *)((longlong)puVar8 + 7) == s_gemini_model_una_001836a0[7]);
    auVar32[8] = -((char)puVar8[1] == s_gemini_model_una_001836a0[8]);
    auVar32[9] = -(*(char *)((longlong)puVar8 + 9) == s_gemini_model_una_001836a0[9]);
    auVar32[10] = -(*(char *)((longlong)puVar8 + 10) == s_gemini_model_una_001836a0[10]);
    auVar32[0xb] = -(*(char *)((longlong)puVar8 + 0xb) == s_gemini_model_una_001836a0[0xb]);
    auVar32[0xc] = -(*(char *)((longlong)puVar8 + 0xc) == s_gemini_model_una_001836a0[0xc]);
    auVar32[0xd] = -(*(char *)((longlong)puVar8 + 0xd) == s_gemini_model_una_001836a0[0xd]);
    auVar32[0xe] = -(*(char *)((longlong)puVar8 + 0xe) == s_gemini_model_una_001836a0[0xe]);
    auVar32[0xf] = -(*(char *)((longlong)puVar8 + 0xf) == s_gemini_model_una_001836a0[0xf]);
    auVar32 = auVar32 & auVar66;
    if ((ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar32[0xf] >> 7) << 0xf) == 0xffff) {
      return 0;
    }
  }
  if ((bVar11) &&
     (*(longlong *)((longlong)puVar8 + 7) == 0x646e756f665f746f && *puVar8 == 0x6f6e5f6c65646f6d)) {
    return 0;
  }
  if (uVar3 == 9) {
    uVar17 = *puVar8 ^ 0x6e756f665f746f6e;
    uVar19 = (byte)puVar8[1] ^ 100;
LAB_004f7bc7:
    bVar14 = false;
    if (uVar19 == 0 && uVar17 == 0) {
      return 0;
    }
  }
  else {
    if (uVar3 == 0xc) {
      uVar17 = *puVar8 ^ 0x5f74736575716572;
      uVar19 = (uint)puVar8[1] ^ 0x657a6973;
      goto LAB_004f7bc7;
    }
    if (uVar3 == 0x12) {
      auVar33[0] = -((char)*puVar8 == DAT_001825c0);
      auVar33[1] = -(*(char *)((longlong)puVar8 + 1) == UNK_001825c1);
      auVar33[2] = -(*(char *)((longlong)puVar8 + 2) == UNK_001825c2);
      auVar33[3] = -(*(char *)((longlong)puVar8 + 3) == UNK_001825c3);
      auVar33[4] = -(*(char *)((longlong)puVar8 + 4) == UNK_001825c4);
      auVar33[5] = -(*(char *)((longlong)puVar8 + 5) == UNK_001825c5);
      auVar33[6] = -(*(char *)((longlong)puVar8 + 6) == UNK_001825c6);
      auVar33[7] = -(*(char *)((longlong)puVar8 + 7) == UNK_001825c7);
      auVar33[8] = -((char)puVar8[1] == UNK_001825c8);
      auVar33[9] = -(*(char *)((longlong)puVar8 + 9) == UNK_001825c9);
      auVar33[10] = -(*(char *)((longlong)puVar8 + 10) == UNK_001825ca);
      auVar33[0xb] = -(*(char *)((longlong)puVar8 + 0xb) == UNK_001825cb);
      auVar33[0xc] = -(*(char *)((longlong)puVar8 + 0xc) == UNK_001825cc);
      auVar33[0xd] = -(*(char *)((longlong)puVar8 + 0xd) == UNK_001825cd);
      auVar33[0xe] = -(*(char *)((longlong)puVar8 + 0xe) == UNK_001825ce);
      auVar33[0xf] = -(*(char *)((longlong)puVar8 + 0xf) == UNK_001825cf);
      auVar67[0] = -((char)puVar8[2] == s_de_00182cb0[0]);
      auVar67[1] = -((char)(puVar8[2] >> 8) == s_de_00182cb0[1]);
      auVar67[2] = -(s_de_00182cb0[2] == '\0');
      auVar67[3] = -(s_de_00182cb0[3] == '\0');
      auVar67[4] = -(UNK_00182cb4 == '\0');
      auVar67[5] = -(UNK_00182cb5 == '\0');
      auVar67[6] = -(UNK_00182cb6 == '\0');
      auVar67[7] = -(UNK_00182cb7 == '\0');
      auVar67[8] = -(UNK_00182cb8 == '\0');
      auVar67[9] = -(UNK_00182cb9 == '\0');
      auVar67[10] = -(UNK_00182cba == '\0');
      auVar67[0xb] = -(UNK_00182cbb == '\0');
      auVar67[0xc] = -(UNK_00182cbc == '\0');
      auVar67[0xd] = -(UNK_00182cbd == '\0');
      auVar67[0xe] = -(UNK_00182cbe == '\0');
      auVar67[0xf] = -(UNK_00182cbf == '\0');
      auVar67 = auVar67 & auVar33;
      bVar14 = true;
      if ((ushort)((ushort)(SUB161(auVar67 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar67 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar67 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar67 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar67 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar67 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar67 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar67 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar67 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar67 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar67 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar67 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar67 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar67 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar67 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar67[0xf] >> 7) << 0xf) == 0xffff) {
        return 0;
      }
    }
    else {
      bVar14 = false;
    }
  }
  if ((bVar10) &&
     (auVar68[0] = -(*(char *)((longlong)puVar8 + 3) == DAT_00183b20),
     auVar68[1] = -(*(char *)((longlong)puVar8 + 4) == UNK_00183b21),
     auVar68[2] = -(*(char *)((longlong)puVar8 + 5) == UNK_00183b22),
     auVar68[3] = -(*(char *)((longlong)puVar8 + 6) == UNK_00183b23),
     auVar68[4] = -(*(char *)((longlong)puVar8 + 7) == UNK_00183b24),
     auVar68[5] = -((char)puVar8[1] == UNK_00183b25),
     auVar68[6] = -(*(char *)((longlong)puVar8 + 9) == UNK_00183b26),
     auVar68[7] = -(*(char *)((longlong)puVar8 + 10) == UNK_00183b27),
     auVar68[8] = -(*(char *)((longlong)puVar8 + 0xb) == UNK_00183b28),
     auVar68[9] = -(*(char *)((longlong)puVar8 + 0xc) == UNK_00183b29),
     auVar68[10] = -(*(char *)((longlong)puVar8 + 0xd) == UNK_00183b2a),
     auVar68[0xb] = -(*(char *)((longlong)puVar8 + 0xe) == UNK_00183b2b),
     auVar68[0xc] = -(*(char *)((longlong)puVar8 + 0xf) == UNK_00183b2c),
     auVar68[0xd] = -((char)puVar8[2] == UNK_00183b2d),
     auVar68[0xe] = -(*(char *)((longlong)puVar8 + 0x11) == UNK_00183b2e),
     auVar68[0xf] = -(*(char *)((longlong)puVar8 + 0x12) == UNK_00183b2f),
     auVar34[0] = -((char)*puVar8 == s_bridge_disconnec_001830f0[0]),
     auVar34[1] = -(*(char *)((longlong)puVar8 + 1) == s_bridge_disconnec_001830f0[1]),
     auVar34[2] = -(*(char *)((longlong)puVar8 + 2) == s_bridge_disconnec_001830f0[2]),
     auVar34[3] = -(*(char *)((longlong)puVar8 + 3) == s_bridge_disconnec_001830f0[3]),
     auVar34[4] = -(*(char *)((longlong)puVar8 + 4) == s_bridge_disconnec_001830f0[4]),
     auVar34[5] = -(*(char *)((longlong)puVar8 + 5) == s_bridge_disconnec_001830f0[5]),
     auVar34[6] = -(*(char *)((longlong)puVar8 + 6) == s_bridge_disconnec_001830f0[6]),
     auVar34[7] = -(*(char *)((longlong)puVar8 + 7) == s_bridge_disconnec_001830f0[7]),
     auVar34[8] = -((char)puVar8[1] == s_bridge_disconnec_001830f0[8]),
     auVar34[9] = -(*(char *)((longlong)puVar8 + 9) == s_bridge_disconnec_001830f0[9]),
     auVar34[10] = -(*(char *)((longlong)puVar8 + 10) == s_bridge_disconnec_001830f0[10]),
     auVar34[0xb] = -(*(char *)((longlong)puVar8 + 0xb) == s_bridge_disconnec_001830f0[0xb]),
     auVar34[0xc] = -(*(char *)((longlong)puVar8 + 0xc) == s_bridge_disconnec_001830f0[0xc]),
     auVar34[0xd] = -(*(char *)((longlong)puVar8 + 0xd) == s_bridge_disconnec_001830f0[0xd]),
     auVar34[0xe] = -(*(char *)((longlong)puVar8 + 0xe) == s_bridge_disconnec_001830f0[0xe]),
     auVar34[0xf] = -(*(char *)((longlong)puVar8 + 0xf) == s_bridge_disconnec_001830f0[0xf]),
     auVar34 = auVar34 & auVar68,
     (ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
             (ushort)(byte)(auVar34[0xf] >> 7) << 0xf) == 0xffff)) {
    return 4;
  }
  switch(uVar3) {
  case 10:
    uVar17 = (ulonglong)(ushort)puVar8[1] ^ 0x6873 | *puVar8 ^ 0x6172635f746f6c73;
    if (uVar17 == 0) {
      return 4;
    }
    uVar17 = CONCAT71((int7)(uVar17 >> 8),1);
    bVar10 = false;
    goto LAB_004f7e08;
  case 0xb:
    if (*(longlong *)((longlong)puVar8 + 3) == 0x74707572726f635f && *puVar8 == 0x72726f635f6d6873)
    {
      return 4;
    }
    break;
  default:
    if (uVar3 == 0xc) {
      if ((int)puVar8[1] == 0x64656c69 && *puVar8 == 0x61665f6472617567) {
        return 4;
      }
      break;
    }
    if (uVar3 != 0x15) break;
    auVar71[0] = -(*(char *)((longlong)puVar8 + 5) == DAT_00182960);
    auVar71[1] = -(*(char *)((longlong)puVar8 + 6) == UNK_00182961);
    auVar71[2] = -(*(char *)((longlong)puVar8 + 7) == UNK_00182962);
    auVar71[3] = -((char)puVar8[1] == UNK_00182963);
    auVar71[4] = -(*(char *)((longlong)puVar8 + 9) == UNK_00182964);
    auVar71[5] = -(*(char *)((longlong)puVar8 + 10) == UNK_00182965);
    auVar71[6] = -(*(char *)((longlong)puVar8 + 0xb) == UNK_00182966);
    auVar71[7] = -(*(char *)((longlong)puVar8 + 0xc) == UNK_00182967);
    auVar71[8] = -(*(char *)((longlong)puVar8 + 0xd) == UNK_00182968);
    auVar71[9] = -(*(char *)((longlong)puVar8 + 0xe) == UNK_00182969);
    auVar71[10] = -(*(char *)((longlong)puVar8 + 0xf) == UNK_0018296a);
    auVar71[0xb] = -((char)puVar8[2] == UNK_0018296b);
    auVar71[0xc] = -(*(char *)((longlong)puVar8 + 0x11) == UNK_0018296c);
    auVar71[0xd] = -(*(char *)((longlong)puVar8 + 0x12) == UNK_0018296d);
    auVar71[0xe] = -(*(char *)((longlong)puVar8 + 0x13) == UNK_0018296e);
    auVar71[0xf] = -(*(char *)((longlong)puVar8 + 0x14) == UNK_0018296f);
    auVar37[0] = -((char)*puVar8 == s_slot_handshake_f_001847a0[0]);
    auVar37[1] = -(*(char *)((longlong)puVar8 + 1) == s_slot_handshake_f_001847a0[1]);
    auVar37[2] = -(*(char *)((longlong)puVar8 + 2) == s_slot_handshake_f_001847a0[2]);
    auVar37[3] = -(*(char *)((longlong)puVar8 + 3) == s_slot_handshake_f_001847a0[3]);
    auVar37[4] = -(*(char *)((longlong)puVar8 + 4) == s_slot_handshake_f_001847a0[4]);
    auVar37[5] = -(*(char *)((longlong)puVar8 + 5) == s_slot_handshake_f_001847a0[5]);
    auVar37[6] = -(*(char *)((longlong)puVar8 + 6) == s_slot_handshake_f_001847a0[6]);
    auVar37[7] = -(*(char *)((longlong)puVar8 + 7) == s_slot_handshake_f_001847a0[7]);
    auVar37[8] = -((char)puVar8[1] == s_slot_handshake_f_001847a0[8]);
    auVar37[9] = -(*(char *)((longlong)puVar8 + 9) == s_slot_handshake_f_001847a0[9]);
    auVar37[10] = -(*(char *)((longlong)puVar8 + 10) == s_slot_handshake_f_001847a0[10]);
    auVar37[0xb] = -(*(char *)((longlong)puVar8 + 0xb) == s_slot_handshake_f_001847a0[0xb]);
    auVar37[0xc] = -(*(char *)((longlong)puVar8 + 0xc) == s_slot_handshake_f_001847a0[0xc]);
    auVar37[0xd] = -(*(char *)((longlong)puVar8 + 0xd) == s_slot_handshake_f_001847a0[0xd]);
    auVar37[0xe] = -(*(char *)((longlong)puVar8 + 0xe) == s_slot_handshake_f_001847a0[0xe]);
    auVar37[0xf] = -(*(char *)((longlong)puVar8 + 0xf) == s_slot_handshake_f_001847a0[0xf]);
    auVar37 = auVar37 & auVar71;
    if ((ushort)((ushort)(SUB161(auVar37 >> 7,0) & 1) | (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar37[0xf] >> 7) << 0xf) == 0xffff) {
      return 4;
    }
    bVar10 = true;
    goto LAB_004f7e06;
  case 0xe:
    if (*(longlong *)((longlong)puVar8 + 6) == 0x64696c61766e695f && *puVar8 == 0x695f656764697262)
    {
      return 4;
    }
    if (*(longlong *)((longlong)puVar8 + 6) == 0x726f7272655f7974 && *puVar8 == 0x7974705f746f6c73)
    {
      return 4;
    }
    if (*(longlong *)((longlong)puVar8 + 6) == 0x726f7272655f6d68 && *puVar8 == 0x6d68735f746f6c73)
    {
      return 4;
    }
    break;
  case 0x11:
    auVar35[0] = -((char)*puVar8 == DAT_00183350);
    auVar35[1] = -(*(char *)((longlong)puVar8 + 1) == UNK_00183351);
    auVar35[2] = -(*(char *)((longlong)puVar8 + 2) == UNK_00183352);
    auVar35[3] = -(*(char *)((longlong)puVar8 + 3) == UNK_00183353);
    auVar35[4] = -(*(char *)((longlong)puVar8 + 4) == UNK_00183354);
    auVar35[5] = -(*(char *)((longlong)puVar8 + 5) == UNK_00183355);
    auVar35[6] = -(*(char *)((longlong)puVar8 + 6) == UNK_00183356);
    auVar35[7] = -(*(char *)((longlong)puVar8 + 7) == UNK_00183357);
    auVar35[8] = -((char)puVar8[1] == UNK_00183358);
    auVar35[9] = -(*(char *)((longlong)puVar8 + 9) == UNK_00183359);
    auVar35[10] = -(*(char *)((longlong)puVar8 + 10) == UNK_0018335a);
    auVar35[0xb] = -(*(char *)((longlong)puVar8 + 0xb) == UNK_0018335b);
    auVar35[0xc] = -(*(char *)((longlong)puVar8 + 0xc) == UNK_0018335c);
    auVar35[0xd] = -(*(char *)((longlong)puVar8 + 0xd) == UNK_0018335d);
    auVar35[0xe] = -(*(char *)((longlong)puVar8 + 0xe) == UNK_0018335e);
    auVar35[0xf] = -(*(char *)((longlong)puVar8 + 0xf) == UNK_0018335f);
    auVar69[0] = -((char)puVar8[2] == s_d_00182a90[0]);
    auVar69[1] = -(s_d_00182a90[1] == '\0');
    auVar69[2] = -(s_d_00182a90[2] == '\0');
    auVar69[3] = -(s_d_00182a90[3] == '\0');
    auVar69[4] = -(UNK_00182a94 == '\0');
    auVar69[5] = -(UNK_00182a95 == '\0');
    auVar69[6] = -(UNK_00182a96 == '\0');
    auVar69[7] = -(UNK_00182a97 == '\0');
    auVar69[8] = -(UNK_00182a98 == '\0');
    auVar69[9] = -(UNK_00182a99 == '\0');
    auVar69[10] = -(UNK_00182a9a == '\0');
    auVar69[0xb] = -(UNK_00182a9b == '\0');
    auVar69[0xc] = -(UNK_00182a9c == '\0');
    auVar69[0xd] = -(UNK_00182a9d == '\0');
    auVar69[0xe] = -(UNK_00182a9e == '\0');
    auVar69[0xf] = -(UNK_00182a9f == '\0');
    auVar69 = auVar69 & auVar35;
    if ((ushort)((ushort)(SUB161(auVar69 >> 7,0) & 1) | (ushort)(SUB161(auVar69 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar69 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar69 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar69 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar69 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar69 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar69 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar69 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar69 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar69 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar69 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar69 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar69 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar69 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar69[0xf] >> 7) << 0xf) == 0xffff) {
      return 4;
    }
    auVar36[0] = -((char)*puVar8 == s_slot_spawn_faile_001839b0[0]);
    auVar36[1] = -(*(char *)((longlong)puVar8 + 1) == s_slot_spawn_faile_001839b0[1]);
    auVar36[2] = -(*(char *)((longlong)puVar8 + 2) == s_slot_spawn_faile_001839b0[2]);
    auVar36[3] = -(*(char *)((longlong)puVar8 + 3) == s_slot_spawn_faile_001839b0[3]);
    auVar36[4] = -(*(char *)((longlong)puVar8 + 4) == s_slot_spawn_faile_001839b0[4]);
    auVar36[5] = -(*(char *)((longlong)puVar8 + 5) == s_slot_spawn_faile_001839b0[5]);
    auVar36[6] = -(*(char *)((longlong)puVar8 + 6) == s_slot_spawn_faile_001839b0[6]);
    auVar36[7] = -(*(char *)((longlong)puVar8 + 7) == s_slot_spawn_faile_001839b0[7]);
    auVar36[8] = -((char)puVar8[1] == s_slot_spawn_faile_001839b0[8]);
    auVar36[9] = -(*(char *)((longlong)puVar8 + 9) == s_slot_spawn_faile_001839b0[9]);
    auVar36[10] = -(*(char *)((longlong)puVar8 + 10) == s_slot_spawn_faile_001839b0[10]);
    auVar36[0xb] = -(*(char *)((longlong)puVar8 + 0xb) == s_slot_spawn_faile_001839b0[0xb]);
    auVar36[0xc] = -(*(char *)((longlong)puVar8 + 0xc) == s_slot_spawn_faile_001839b0[0xc]);
    auVar36[0xd] = -(*(char *)((longlong)puVar8 + 0xd) == s_slot_spawn_faile_001839b0[0xd]);
    auVar36[0xe] = -(*(char *)((longlong)puVar8 + 0xe) == s_slot_spawn_faile_001839b0[0xe]);
    auVar36[0xf] = -(*(char *)((longlong)puVar8 + 0xf) == s_slot_spawn_faile_001839b0[0xf]);
    auVar70[0] = -((char)puVar8[2] == s_d_00182a90[0]);
    auVar70[1] = -(s_d_00182a90[1] == '\0');
    auVar70[2] = -(s_d_00182a90[2] == '\0');
    auVar70[3] = -(s_d_00182a90[3] == '\0');
    auVar70[4] = -(UNK_00182a94 == '\0');
    auVar70[5] = -(UNK_00182a95 == '\0');
    auVar70[6] = -(UNK_00182a96 == '\0');
    auVar70[7] = -(UNK_00182a97 == '\0');
    auVar70[8] = -(UNK_00182a98 == '\0');
    auVar70[9] = -(UNK_00182a99 == '\0');
    auVar70[10] = -(UNK_00182a9a == '\0');
    auVar70[0xb] = -(UNK_00182a9b == '\0');
    auVar70[0xc] = -(UNK_00182a9c == '\0');
    auVar70[0xd] = -(UNK_00182a9d == '\0');
    auVar70[0xe] = -(UNK_00182a9e == '\0');
    auVar70[0xf] = -(UNK_00182a9f == '\0');
    auVar70 = auVar70 & auVar36;
    if ((ushort)((ushort)(SUB161(auVar70 >> 7,0) & 1) | (ushort)(SUB161(auVar70 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar70 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar70 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar70 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar70 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar70 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar70 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar70 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar70 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar70 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar70 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar70 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar70 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar70 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar70[0xf] >> 7) << 0xf) == 0xffff) {
      return 4;
    }
  }
  bVar10 = false;
LAB_004f7e06:
  uVar17 = 0;
LAB_004f7e08:
  if ((bVar11) &&
     (*(longlong *)((longlong)puVar8 + 7) == 0x726f7272655f676e && *puVar8 == 0x6e69725f746f6c73)) {
    return 4;
  }
  if (uVar3 == 0xd) {
    if (*(longlong *)((longlong)puVar8 + 5) == 0x746c7561665f6c61 && *puVar8 == 0x5f6c616e72756f6a)
    {
      return 4;
    }
    uVar18 = (ulonglong)bVar1;
    if (*(longlong *)((longlong)puVar8 + 5) == 0x64656c6961665f65 && *puVar8 == 0x665f65766974616e)
    {
      return 4;
    }
  }
  else {
    uVar18 = uVar17;
    if (uVar3 == 0xc) {
      if ((int)puVar8[1] == 0x74756f65 && *puVar8 == 0x6d69745f6e727574) {
        return 4;
      }
      if ((int)puVar8[1] == 0x74756f65 && *puVar8 == 0x6d69745f656c6469) {
        return 4;
      }
    }
  }
  if ((bVar10) &&
     (auVar72[0] = -(*(char *)((longlong)puVar8 + 5) == DAT_00184880),
     auVar72[1] = -(*(char *)((longlong)puVar8 + 6) == UNK_00184881),
     auVar72[2] = -(*(char *)((longlong)puVar8 + 7) == UNK_00184882),
     auVar72[3] = -((char)puVar8[1] == UNK_00184883),
     auVar72[4] = -(*(char *)((longlong)puVar8 + 9) == UNK_00184884),
     auVar72[5] = -(*(char *)((longlong)puVar8 + 10) == UNK_00184885),
     auVar72[6] = -(*(char *)((longlong)puVar8 + 0xb) == UNK_00184886),
     auVar72[7] = -(*(char *)((longlong)puVar8 + 0xc) == UNK_00184887),
     auVar72[8] = -(*(char *)((longlong)puVar8 + 0xd) == UNK_00184888),
     auVar72[9] = -(*(char *)((longlong)puVar8 + 0xe) == UNK_00184889),
     auVar72[10] = -(*(char *)((longlong)puVar8 + 0xf) == UNK_0018488a),
     auVar72[0xb] = -((char)puVar8[2] == UNK_0018488b),
     auVar72[0xc] = -(*(char *)((longlong)puVar8 + 0x11) == UNK_0018488c),
     auVar72[0xd] = -(*(char *)((longlong)puVar8 + 0x12) == UNK_0018488d),
     auVar72[0xe] = -(*(char *)((longlong)puVar8 + 0x13) == UNK_0018488e),
     auVar72[0xf] = -(*(char *)((longlong)puVar8 + 0x14) == UNK_0018488f),
     auVar38[0] = -((char)*puVar8 == s_gemini_oauth_req_00182870[0]),
     auVar38[1] = -(*(char *)((longlong)puVar8 + 1) == s_gemini_oauth_req_00182870[1]),
     auVar38[2] = -(*(char *)((longlong)puVar8 + 2) == s_gemini_oauth_req_00182870[2]),
     auVar38[3] = -(*(char *)((longlong)puVar8 + 3) == s_gemini_oauth_req_00182870[3]),
     auVar38[4] = -(*(char *)((longlong)puVar8 + 4) == s_gemini_oauth_req_00182870[4]),
     auVar38[5] = -(*(char *)((longlong)puVar8 + 5) == s_gemini_oauth_req_00182870[5]),
     auVar38[6] = -(*(char *)((longlong)puVar8 + 6) == s_gemini_oauth_req_00182870[6]),
     auVar38[7] = -(*(char *)((longlong)puVar8 + 7) == s_gemini_oauth_req_00182870[7]),
     auVar38[8] = -((char)puVar8[1] == s_gemini_oauth_req_00182870[8]),
     auVar38[9] = -(*(char *)((longlong)puVar8 + 9) == s_gemini_oauth_req_00182870[9]),
     auVar38[10] = -(*(char *)((longlong)puVar8 + 10) == s_gemini_oauth_req_00182870[10]),
     auVar38[0xb] = -(*(char *)((longlong)puVar8 + 0xb) == s_gemini_oauth_req_00182870[0xb]),
     auVar38[0xc] = -(*(char *)((longlong)puVar8 + 0xc) == s_gemini_oauth_req_00182870[0xc]),
     auVar38[0xd] = -(*(char *)((longlong)puVar8 + 0xd) == s_gemini_oauth_req_00182870[0xd]),
     auVar38[0xe] = -(*(char *)((longlong)puVar8 + 0xe) == s_gemini_oauth_req_00182870[0xe]),
     auVar38[0xf] = -(*(char *)((longlong)puVar8 + 0xf) == s_gemini_oauth_req_00182870[0xf]),
     auVar38 = auVar38 & auVar72,
     (ushort)((ushort)(SUB161(auVar38 >> 7,0) & 1) | (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
             (ushort)(byte)(auVar38[0xf] >> 7) << 0xf) == 0xffff)) {
    return 3;
  }
  if (uVar3 == 0x14) {
    uVar18 = puVar8[2];
    auVar73[0] = -((char)uVar18 == DAT_00182aa0);
    auVar73[1] = -((char)(uVar18 >> 8) == UNK_00182aa1);
    auVar73[2] = -((char)(uVar18 >> 0x10) == UNK_00182aa2);
    auVar73[3] = -((char)(uVar18 >> 0x18) == UNK_00182aa3);
    auVar73[4] = -(UNK_00182aa4 == '\0');
    auVar73[5] = -(UNK_00182aa5 == '\0');
    auVar73[6] = -(UNK_00182aa6 == '\0');
    auVar73[7] = -(UNK_00182aa7 == '\0');
    auVar73[8] = -(UNK_00182aa8 == '\0');
    auVar73[9] = -(UNK_00182aa9 == '\0');
    auVar73[10] = -(UNK_00182aaa == '\0');
    auVar73[0xb] = -(UNK_00182aab == '\0');
    auVar73[0xc] = -(UNK_00182aac == '\0');
    auVar73[0xd] = -(UNK_00182aad == '\0');
    auVar73[0xe] = -(UNK_00182aae == '\0');
    auVar73[0xf] = -(UNK_00182aaf == '\0');
    auVar39[0] = -((char)*puVar8 == s_oauth_refresh_fa_00183fd0[0]);
    auVar39[1] = -(*(char *)((longlong)puVar8 + 1) == s_oauth_refresh_fa_00183fd0[1]);
    auVar39[2] = -(*(char *)((longlong)puVar8 + 2) == s_oauth_refresh_fa_00183fd0[2]);
    auVar39[3] = -(*(char *)((longlong)puVar8 + 3) == s_oauth_refresh_fa_00183fd0[3]);
    auVar39[4] = -(*(char *)((longlong)puVar8 + 4) == s_oauth_refresh_fa_00183fd0[4]);
    auVar39[5] = -(*(char *)((longlong)puVar8 + 5) == s_oauth_refresh_fa_00183fd0[5]);
    auVar39[6] = -(*(char *)((longlong)puVar8 + 6) == s_oauth_refresh_fa_00183fd0[6]);
    auVar39[7] = -(*(char *)((longlong)puVar8 + 7) == s_oauth_refresh_fa_00183fd0[7]);
    auVar39[8] = -((char)puVar8[1] == s_oauth_refresh_fa_00183fd0[8]);
    auVar39[9] = -(*(char *)((longlong)puVar8 + 9) == s_oauth_refresh_fa_00183fd0[9]);
    auVar39[10] = -(*(char *)((longlong)puVar8 + 10) == s_oauth_refresh_fa_00183fd0[10]);
    auVar39[0xb] = -(*(char *)((longlong)puVar8 + 0xb) == s_oauth_refresh_fa_00183fd0[0xb]);
    auVar39[0xc] = -(*(char *)((longlong)puVar8 + 0xc) == s_oauth_refresh_fa_00183fd0[0xc]);
    auVar39[0xd] = -(*(char *)((longlong)puVar8 + 0xd) == s_oauth_refresh_fa_00183fd0[0xd]);
    auVar39[0xe] = -(*(char *)((longlong)puVar8 + 0xe) == s_oauth_refresh_fa_00183fd0[0xe]);
    auVar39[0xf] = -(*(char *)((longlong)puVar8 + 0xf) == s_oauth_refresh_fa_00183fd0[0xf]);
    auVar39 = auVar39 & auVar73;
    uVar9 = (ushort)(SUB161(auVar39 >> 7,0) & 1) | (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe |
            (ushort)(byte)(auVar39[0xf] >> 7) << 0xf;
joined_r0x004f7fcc:
    if (uVar9 == 0xffff) {
      return 3;
    }
  }
  else {
    if (uVar3 == 0x1b) {
      auVar74[0] = -(*(char *)((longlong)puVar8 + 0xb) == s_tion_unsupported_001837a0[0]);
      auVar74[1] = -(*(char *)((longlong)puVar8 + 0xc) == s_tion_unsupported_001837a0[1]);
      auVar74[2] = -(*(char *)((longlong)puVar8 + 0xd) == s_tion_unsupported_001837a0[2]);
      auVar74[3] = -(*(char *)((longlong)puVar8 + 0xe) == s_tion_unsupported_001837a0[3]);
      auVar74[4] = -(*(char *)((longlong)puVar8 + 0xf) == s_tion_unsupported_001837a0[4]);
      auVar74[5] = -((char)puVar8[2] == s_tion_unsupported_001837a0[5]);
      auVar74[6] = -(*(char *)((longlong)puVar8 + 0x11) == s_tion_unsupported_001837a0[6]);
      auVar74[7] = -(*(char *)((longlong)puVar8 + 0x12) == s_tion_unsupported_001837a0[7]);
      auVar74[8] = -(*(char *)((longlong)puVar8 + 0x13) == s_tion_unsupported_001837a0[8]);
      auVar74[9] = -(*(char *)((longlong)puVar8 + 0x14) == s_tion_unsupported_001837a0[9]);
      auVar74[10] = -(*(char *)((longlong)puVar8 + 0x15) == s_tion_unsupported_001837a0[10]);
      auVar74[0xb] = -(*(char *)((longlong)puVar8 + 0x16) == s_tion_unsupported_001837a0[0xb]);
      auVar74[0xc] = -(*(char *)((longlong)puVar8 + 0x17) == s_tion_unsupported_001837a0[0xc]);
      auVar74[0xd] = -((char)puVar8[3] == s_tion_unsupported_001837a0[0xd]);
      auVar74[0xe] = -(*(char *)((longlong)puVar8 + 0x19) == s_tion_unsupported_001837a0[0xe]);
      auVar74[0xf] = -(*(char *)((longlong)puVar8 + 0x1a) == s_tion_unsupported_001837a0[0xf]);
      auVar40[0] = -((char)*puVar8 == DAT_00182b90);
      auVar40[1] = -(*(char *)((longlong)puVar8 + 1) == UNK_00182b91);
      auVar40[2] = -(*(char *)((longlong)puVar8 + 2) == UNK_00182b92);
      auVar40[3] = -(*(char *)((longlong)puVar8 + 3) == UNK_00182b93);
      auVar40[4] = -(*(char *)((longlong)puVar8 + 4) == UNK_00182b94);
      auVar40[5] = -(*(char *)((longlong)puVar8 + 5) == UNK_00182b95);
      auVar40[6] = -(*(char *)((longlong)puVar8 + 6) == UNK_00182b96);
      auVar40[7] = -(*(char *)((longlong)puVar8 + 7) == UNK_00182b97);
      auVar40[8] = -((char)puVar8[1] == UNK_00182b98);
      auVar40[9] = -(*(char *)((longlong)puVar8 + 9) == UNK_00182b99);
      auVar40[10] = -(*(char *)((longlong)puVar8 + 10) == UNK_00182b9a);
      auVar40[0xb] = -(*(char *)((longlong)puVar8 + 0xb) == UNK_00182b9b);
      auVar40[0xc] = -(*(char *)((longlong)puVar8 + 0xc) == UNK_00182b9c);
      auVar40[0xd] = -(*(char *)((longlong)puVar8 + 0xd) == UNK_00182b9d);
      auVar40[0xe] = -(*(char *)((longlong)puVar8 + 0xe) == UNK_00182b9e);
      auVar40[0xf] = -(*(char *)((longlong)puVar8 + 0xf) == UNK_00182b9f);
      auVar40 = auVar40 & auVar74;
      uVar9 = (ushort)(SUB161(auVar40 >> 7,0) & 1) | (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar40[0xf] >> 7) << 0xf;
      goto joined_r0x004f7fcc;
    }
    if (uVar3 == 0x24) {
      iVar15 = (*(code *)PTR_bcmp_00799020)(uVar18,0x24);
      if (iVar15 == 0) {
        return 3;
      }
    }
    else if (uVar3 == 0x19) {
      auVar75[0] = -(*(char *)((longlong)puVar8 + 9) == DAT_001846c0);
      auVar75[1] = -(*(char *)((longlong)puVar8 + 10) == UNK_001846c1);
      auVar75[2] = -(*(char *)((longlong)puVar8 + 0xb) == UNK_001846c2);
      auVar75[3] = -(*(char *)((longlong)puVar8 + 0xc) == UNK_001846c3);
      auVar75[4] = -(*(char *)((longlong)puVar8 + 0xd) == UNK_001846c4);
      auVar75[5] = -(*(char *)((longlong)puVar8 + 0xe) == UNK_001846c5);
      auVar75[6] = -(*(char *)((longlong)puVar8 + 0xf) == UNK_001846c6);
      auVar75[7] = -((char)puVar8[2] == UNK_001846c7);
      auVar75[8] = -(*(char *)((longlong)puVar8 + 0x11) == UNK_001846c8);
      auVar75[9] = -(*(char *)((longlong)puVar8 + 0x12) == UNK_001846c9);
      auVar75[10] = -(*(char *)((longlong)puVar8 + 0x13) == UNK_001846ca);
      auVar75[0xb] = -(*(char *)((longlong)puVar8 + 0x14) == UNK_001846cb);
      auVar75[0xc] = -(*(char *)((longlong)puVar8 + 0x15) == UNK_001846cc);
      auVar75[0xd] = -(*(char *)((longlong)puVar8 + 0x16) == UNK_001846cd);
      auVar75[0xe] = -(*(char *)((longlong)puVar8 + 0x17) == UNK_001846ce);
      auVar75[0xf] = -((char)puVar8[3] == UNK_001846cf);
      auVar41[0] = -((char)*puVar8 == DAT_001825d0);
      auVar41[1] = -(*(char *)((longlong)puVar8 + 1) == UNK_001825d1);
      auVar41[2] = -(*(char *)((longlong)puVar8 + 2) == UNK_001825d2);
      auVar41[3] = -(*(char *)((longlong)puVar8 + 3) == UNK_001825d3);
      auVar41[4] = -(*(char *)((longlong)puVar8 + 4) == UNK_001825d4);
      auVar41[5] = -(*(char *)((longlong)puVar8 + 5) == UNK_001825d5);
      auVar41[6] = -(*(char *)((longlong)puVar8 + 6) == UNK_001825d6);
      auVar41[7] = -(*(char *)((longlong)puVar8 + 7) == UNK_001825d7);
      auVar41[8] = -((char)puVar8[1] == UNK_001825d8);
      auVar41[9] = -(*(char *)((longlong)puVar8 + 9) == UNK_001825d9);
      auVar41[10] = -(*(char *)((longlong)puVar8 + 10) == UNK_001825da);
      auVar41[0xb] = -(*(char *)((longlong)puVar8 + 0xb) == UNK_001825db);
      auVar41[0xc] = -(*(char *)((longlong)puVar8 + 0xc) == UNK_001825dc);
      auVar41[0xd] = -(*(char *)((longlong)puVar8 + 0xd) == UNK_001825dd);
      auVar41[0xe] = -(*(char *)((longlong)puVar8 + 0xe) == UNK_001825de);
      auVar41[0xf] = -(*(char *)((longlong)puVar8 + 0xf) == UNK_001825df);
      auVar41 = auVar41 & auVar75;
      if ((ushort)((ushort)(SUB161(auVar41 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar41[0xf] >> 7) << 0xf) == 0xffff) {
        return 3;
      }
      auVar76[0] = -(*(char *)((longlong)puVar8 + 9) == s_count_ineligible_00183e90[0]);
      auVar76[1] = -(*(char *)((longlong)puVar8 + 10) == s_count_ineligible_00183e90[1]);
      auVar76[2] = -(*(char *)((longlong)puVar8 + 0xb) == s_count_ineligible_00183e90[2]);
      auVar76[3] = -(*(char *)((longlong)puVar8 + 0xc) == s_count_ineligible_00183e90[3]);
      auVar76[4] = -(*(char *)((longlong)puVar8 + 0xd) == s_count_ineligible_00183e90[4]);
      auVar76[5] = -(*(char *)((longlong)puVar8 + 0xe) == s_count_ineligible_00183e90[5]);
      auVar76[6] = -(*(char *)((longlong)puVar8 + 0xf) == s_count_ineligible_00183e90[6]);
      auVar76[7] = -((char)puVar8[2] == s_count_ineligible_00183e90[7]);
      auVar76[8] = -(*(char *)((longlong)puVar8 + 0x11) == s_count_ineligible_00183e90[8]);
      auVar76[9] = -(*(char *)((longlong)puVar8 + 0x12) == s_count_ineligible_00183e90[9]);
      auVar76[10] = -(*(char *)((longlong)puVar8 + 0x13) == s_count_ineligible_00183e90[10]);
      auVar76[0xb] = -(*(char *)((longlong)puVar8 + 0x14) == s_count_ineligible_00183e90[0xb]);
      auVar76[0xc] = -(*(char *)((longlong)puVar8 + 0x15) == s_count_ineligible_00183e90[0xc]);
      auVar76[0xd] = -(*(char *)((longlong)puVar8 + 0x16) == s_count_ineligible_00183e90[0xd]);
      auVar76[0xe] = -(*(char *)((longlong)puVar8 + 0x17) == s_count_ineligible_00183e90[0xe]);
      auVar76[0xf] = -((char)puVar8[3] == s_count_ineligible_00183e90[0xf]);
      auVar42[0] = -((char)*puVar8 == s_gemini_account_i_00183570[0]);
      auVar42[1] = -(*(char *)((longlong)puVar8 + 1) == s_gemini_account_i_00183570[1]);
      auVar42[2] = -(*(char *)((longlong)puVar8 + 2) == s_gemini_account_i_00183570[2]);
      auVar42[3] = -(*(char *)((longlong)puVar8 + 3) == s_gemini_account_i_00183570[3]);
      auVar42[4] = -(*(char *)((longlong)puVar8 + 4) == s_gemini_account_i_00183570[4]);
      auVar42[5] = -(*(char *)((longlong)puVar8 + 5) == s_gemini_account_i_00183570[5]);
      auVar42[6] = -(*(char *)((longlong)puVar8 + 6) == s_gemini_account_i_00183570[6]);
      auVar42[7] = -(*(char *)((longlong)puVar8 + 7) == s_gemini_account_i_00183570[7]);
      auVar42[8] = -((char)puVar8[1] == s_gemini_account_i_00183570[8]);
      auVar42[9] = -(*(char *)((longlong)puVar8 + 9) == s_gemini_account_i_00183570[9]);
      auVar42[10] = -(*(char *)((longlong)puVar8 + 10) == s_gemini_account_i_00183570[10]);
      auVar42[0xb] = -(*(char *)((longlong)puVar8 + 0xb) == s_gemini_account_i_00183570[0xb]);
      auVar42[0xc] = -(*(char *)((longlong)puVar8 + 0xc) == s_gemini_account_i_00183570[0xc]);
      auVar42[0xd] = -(*(char *)((longlong)puVar8 + 0xd) == s_gemini_account_i_00183570[0xd]);
      auVar42[0xe] = -(*(char *)((longlong)puVar8 + 0xe) == s_gemini_account_i_00183570[0xe]);
      auVar42[0xf] = -(*(char *)((longlong)puVar8 + 0xf) == s_gemini_account_i_00183570[0xf]);
      auVar42 = auVar42 & auVar76;
      if ((ushort)((ushort)(SUB161(auVar42 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar42[0xf] >> 7) << 0xf) == 0xffff) {
        return 3;
      }
    }
  }
  switch(uVar7) {
  case 0xd:
    if (*(longlong *)((longlong)plVar6 + 5) == 0x4e4f4954414c4f49 && *plVar6 == 0x4c4f49565f534f54)
    {
      return 3;
    }
    break;
  case 0xf:
    if (*(longlong *)((longlong)plVar6 + 7) == 0x44494c41564e495f && *plVar6 == 0x5f59454b5f495041)
    {
      return 3;
    }
    break;
  case 0x11:
    auVar45[0] = -((char)*plVar6 == s_ACCOUNT_SUSPENDE_00182db0[0]);
    auVar45[1] = -(*(char *)((longlong)plVar6 + 1) == s_ACCOUNT_SUSPENDE_00182db0[1]);
    auVar45[2] = -(*(char *)((longlong)plVar6 + 2) == s_ACCOUNT_SUSPENDE_00182db0[2]);
    auVar45[3] = -(*(char *)((longlong)plVar6 + 3) == s_ACCOUNT_SUSPENDE_00182db0[3]);
    auVar45[4] = -(*(char *)((longlong)plVar6 + 4) == s_ACCOUNT_SUSPENDE_00182db0[4]);
    auVar45[5] = -(*(char *)((longlong)plVar6 + 5) == s_ACCOUNT_SUSPENDE_00182db0[5]);
    auVar45[6] = -(*(char *)((longlong)plVar6 + 6) == s_ACCOUNT_SUSPENDE_00182db0[6]);
    auVar45[7] = -(*(char *)((longlong)plVar6 + 7) == s_ACCOUNT_SUSPENDE_00182db0[7]);
    auVar45[8] = -((char)plVar6[1] == s_ACCOUNT_SUSPENDE_00182db0[8]);
    auVar45[9] = -(*(char *)((longlong)plVar6 + 9) == s_ACCOUNT_SUSPENDE_00182db0[9]);
    auVar45[10] = -(*(char *)((longlong)plVar6 + 10) == s_ACCOUNT_SUSPENDE_00182db0[10]);
    auVar45[0xb] = -(*(char *)((longlong)plVar6 + 0xb) == s_ACCOUNT_SUSPENDE_00182db0[0xb]);
    auVar45[0xc] = -(*(char *)((longlong)plVar6 + 0xc) == s_ACCOUNT_SUSPENDE_00182db0[0xc]);
    auVar45[0xd] = -(*(char *)((longlong)plVar6 + 0xd) == s_ACCOUNT_SUSPENDE_00182db0[0xd]);
    auVar45[0xe] = -(*(char *)((longlong)plVar6 + 0xe) == s_ACCOUNT_SUSPENDE_00182db0[0xe]);
    auVar45[0xf] = -(*(char *)((longlong)plVar6 + 0xf) == s_ACCOUNT_SUSPENDE_00182db0[0xf]);
    auVar79[0] = -((char)plVar6[2] == s_D_001839a0[0]);
    auVar79[1] = -(s_D_001839a0[1] == '\0');
    auVar79[2] = -(s_D_001839a0[2] == '\0');
    auVar79[3] = -(s_D_001839a0[3] == '\0');
    auVar79[4] = -(UNK_001839a4 == '\0');
    auVar79[5] = -(UNK_001839a5 == '\0');
    auVar79[6] = -(UNK_001839a6 == '\0');
    auVar79[7] = -(UNK_001839a7 == '\0');
    auVar79[8] = -(UNK_001839a8 == '\0');
    auVar79[9] = -(UNK_001839a9 == '\0');
    auVar79[10] = -(UNK_001839aa == '\0');
    auVar79[0xb] = -(UNK_001839ab == '\0');
    auVar79[0xc] = -(UNK_001839ac == '\0');
    auVar79[0xd] = -(UNK_001839ad == '\0');
    auVar79[0xe] = -(UNK_001839ae == '\0');
    auVar79[0xf] = -(UNK_001839af == '\0');
    auVar79 = auVar79 & auVar45;
    uVar9 = (ushort)(SUB161(auVar79 >> 7,0) & 1) | (ushort)(SUB161(auVar79 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar79 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar79 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar79 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar79 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar79 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar79 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar79 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar79 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar79 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar79 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar79 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar79 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar79 >> 0x77,0) & 1) << 0xe |
            (ushort)(byte)(auVar79[0xf] >> 7) << 0xf;
    goto joined_r0x004f8100;
  case 0x12:
    auVar46[0] = -((char)*plVar6 == s_UNSUPPORTED_REGI_001842c0[0]);
    auVar46[1] = -(*(char *)((longlong)plVar6 + 1) == s_UNSUPPORTED_REGI_001842c0[1]);
    auVar46[2] = -(*(char *)((longlong)plVar6 + 2) == s_UNSUPPORTED_REGI_001842c0[2]);
    auVar46[3] = -(*(char *)((longlong)plVar6 + 3) == s_UNSUPPORTED_REGI_001842c0[3]);
    auVar46[4] = -(*(char *)((longlong)plVar6 + 4) == s_UNSUPPORTED_REGI_001842c0[4]);
    auVar46[5] = -(*(char *)((longlong)plVar6 + 5) == s_UNSUPPORTED_REGI_001842c0[5]);
    auVar46[6] = -(*(char *)((longlong)plVar6 + 6) == s_UNSUPPORTED_REGI_001842c0[6]);
    auVar46[7] = -(*(char *)((longlong)plVar6 + 7) == s_UNSUPPORTED_REGI_001842c0[7]);
    auVar46[8] = -((char)plVar6[1] == s_UNSUPPORTED_REGI_001842c0[8]);
    auVar46[9] = -(*(char *)((longlong)plVar6 + 9) == s_UNSUPPORTED_REGI_001842c0[9]);
    auVar46[10] = -(*(char *)((longlong)plVar6 + 10) == s_UNSUPPORTED_REGI_001842c0[10]);
    auVar46[0xb] = -(*(char *)((longlong)plVar6 + 0xb) == s_UNSUPPORTED_REGI_001842c0[0xb]);
    auVar46[0xc] = -(*(char *)((longlong)plVar6 + 0xc) == s_UNSUPPORTED_REGI_001842c0[0xc]);
    auVar46[0xd] = -(*(char *)((longlong)plVar6 + 0xd) == s_UNSUPPORTED_REGI_001842c0[0xd]);
    auVar46[0xe] = -(*(char *)((longlong)plVar6 + 0xe) == s_UNSUPPORTED_REGI_001842c0[0xe]);
    auVar46[0xf] = -(*(char *)((longlong)plVar6 + 0xf) == s_UNSUPPORTED_REGI_001842c0[0xf]);
    auVar80[0] = -((char)plVar6[2] == s_ON_001837b0[0]);
    auVar80[1] = -((char)((ulonglong)plVar6[2] >> 8) == s_ON_001837b0[1]);
    auVar80[2] = -(s_ON_001837b0[2] == '\0');
    auVar80[3] = -(s_ON_001837b0[3] == '\0');
    auVar80[4] = -(UNK_001837b4 == '\0');
    auVar80[5] = -(UNK_001837b5 == '\0');
    auVar80[6] = -(UNK_001837b6 == '\0');
    auVar80[7] = -(UNK_001837b7 == '\0');
    auVar80[8] = -(UNK_001837b8 == '\0');
    auVar80[9] = -(UNK_001837b9 == '\0');
    auVar80[10] = -(UNK_001837ba == '\0');
    auVar80[0xb] = -(UNK_001837bb == '\0');
    auVar80[0xc] = -(UNK_001837bc == '\0');
    auVar80[0xd] = -(UNK_001837bd == '\0');
    auVar80[0xe] = -(UNK_001837be == '\0');
    auVar80[0xf] = -(UNK_001837bf == '\0');
    auVar80 = auVar80 & auVar46;
    if ((ushort)((ushort)(SUB161(auVar80 >> 7,0) & 1) | (ushort)(SUB161(auVar80 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar80 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar80 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar80 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar80 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar80 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar80 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar80 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar80 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar80 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar80 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar80 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar80 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar80 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar80[0xf] >> 7) << 0xf) == 0xffff) {
      return 3;
    }
    auVar47[0] = -((char)*plVar6 == DAT_00182fb0);
    auVar47[1] = -(*(char *)((longlong)plVar6 + 1) == UNK_00182fb1);
    auVar47[2] = -(*(char *)((longlong)plVar6 + 2) == UNK_00182fb2);
    auVar47[3] = -(*(char *)((longlong)plVar6 + 3) == UNK_00182fb3);
    auVar47[4] = -(*(char *)((longlong)plVar6 + 4) == UNK_00182fb4);
    auVar47[5] = -(*(char *)((longlong)plVar6 + 5) == UNK_00182fb5);
    auVar47[6] = -(*(char *)((longlong)plVar6 + 6) == UNK_00182fb6);
    auVar47[7] = -(*(char *)((longlong)plVar6 + 7) == UNK_00182fb7);
    auVar47[8] = -((char)plVar6[1] == UNK_00182fb8);
    auVar47[9] = -(*(char *)((longlong)plVar6 + 9) == UNK_00182fb9);
    auVar47[10] = -(*(char *)((longlong)plVar6 + 10) == UNK_00182fba);
    auVar47[0xb] = -(*(char *)((longlong)plVar6 + 0xb) == UNK_00182fbb);
    auVar47[0xc] = -(*(char *)((longlong)plVar6 + 0xc) == UNK_00182fbc);
    auVar47[0xd] = -(*(char *)((longlong)plVar6 + 0xd) == UNK_00182fbd);
    auVar47[0xe] = -(*(char *)((longlong)plVar6 + 0xe) == UNK_00182fbe);
    auVar47[0xf] = -(*(char *)((longlong)plVar6 + 0xf) == UNK_00182fbf);
    auVar81[0] = -((char)plVar6[2] == s_NT_001842d0[0]);
    auVar81[1] = -((char)((ulonglong)plVar6[2] >> 8) == s_NT_001842d0[1]);
    auVar81[2] = -(s_NT_001842d0[2] == '\0');
    auVar81[3] = -(s_NT_001842d0[3] == '\0');
    auVar81[4] = -(UNK_001842d4 == '\0');
    auVar81[5] = -(UNK_001842d5 == '\0');
    auVar81[6] = -(UNK_001842d6 == '\0');
    auVar81[7] = -(UNK_001842d7 == '\0');
    auVar81[8] = -(UNK_001842d8 == '\0');
    auVar81[9] = -(UNK_001842d9 == '\0');
    auVar81[10] = -(UNK_001842da == '\0');
    auVar81[0xb] = -(UNK_001842db == '\0');
    auVar81[0xc] = -(UNK_001842dc == '\0');
    auVar81[0xd] = -(UNK_001842dd == '\0');
    auVar81[0xe] = -(UNK_001842de == '\0');
    auVar81[0xf] = -(UNK_001842df == '\0');
    auVar81 = auVar81 & auVar47;
    if ((ushort)((ushort)(SUB161(auVar81 >> 7,0) & 1) | (ushort)(SUB161(auVar81 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar81 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar81 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar81 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar81 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar81 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar81 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar81 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar81 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar81 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar81 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar81 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar81 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar81 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar81[0xf] >> 7) << 0xf) == 0xffff) {
      return 3;
    }
    auVar48[0] = -((char)*plVar6 == s_CLIENT_NOT_ALLOW_001840e0[0]);
    auVar48[1] = -(*(char *)((longlong)plVar6 + 1) == s_CLIENT_NOT_ALLOW_001840e0[1]);
    auVar48[2] = -(*(char *)((longlong)plVar6 + 2) == s_CLIENT_NOT_ALLOW_001840e0[2]);
    auVar48[3] = -(*(char *)((longlong)plVar6 + 3) == s_CLIENT_NOT_ALLOW_001840e0[3]);
    auVar48[4] = -(*(char *)((longlong)plVar6 + 4) == s_CLIENT_NOT_ALLOW_001840e0[4]);
    auVar48[5] = -(*(char *)((longlong)plVar6 + 5) == s_CLIENT_NOT_ALLOW_001840e0[5]);
    auVar48[6] = -(*(char *)((longlong)plVar6 + 6) == s_CLIENT_NOT_ALLOW_001840e0[6]);
    auVar48[7] = -(*(char *)((longlong)plVar6 + 7) == s_CLIENT_NOT_ALLOW_001840e0[7]);
    auVar48[8] = -((char)plVar6[1] == s_CLIENT_NOT_ALLOW_001840e0[8]);
    auVar48[9] = -(*(char *)((longlong)plVar6 + 9) == s_CLIENT_NOT_ALLOW_001840e0[9]);
    auVar48[10] = -(*(char *)((longlong)plVar6 + 10) == s_CLIENT_NOT_ALLOW_001840e0[10]);
    auVar48[0xb] = -(*(char *)((longlong)plVar6 + 0xb) == s_CLIENT_NOT_ALLOW_001840e0[0xb]);
    auVar48[0xc] = -(*(char *)((longlong)plVar6 + 0xc) == s_CLIENT_NOT_ALLOW_001840e0[0xc]);
    auVar48[0xd] = -(*(char *)((longlong)plVar6 + 0xd) == s_CLIENT_NOT_ALLOW_001840e0[0xd]);
    auVar48[0xe] = -(*(char *)((longlong)plVar6 + 0xe) == s_CLIENT_NOT_ALLOW_001840e0[0xe]);
    auVar48[0xf] = -(*(char *)((longlong)plVar6 + 0xf) == s_CLIENT_NOT_ALLOW_001840e0[0xf]);
    auVar82[0] = -((char)plVar6[2] == s_ED_001826f0[0]);
    auVar82[1] = -((char)((ulonglong)plVar6[2] >> 8) == s_ED_001826f0[1]);
    auVar82[2] = -(s_ED_001826f0[2] == '\0');
    auVar82[3] = -(s_ED_001826f0[3] == '\0');
    auVar82[4] = -(UNK_001826f4 == '\0');
    auVar82[5] = -(UNK_001826f5 == '\0');
    auVar82[6] = -(UNK_001826f6 == '\0');
    auVar82[7] = -(UNK_001826f7 == '\0');
    auVar82[8] = -(UNK_001826f8 == '\0');
    auVar82[9] = -(UNK_001826f9 == '\0');
    auVar82[10] = -(UNK_001826fa == '\0');
    auVar82[0xb] = -(UNK_001826fb == '\0');
    auVar82[0xc] = -(UNK_001826fc == '\0');
    auVar82[0xd] = -(UNK_001826fd == '\0');
    auVar82[0xe] = -(UNK_001826fe == '\0');
    auVar82[0xf] = -(UNK_001826ff == '\0');
    auVar82 = auVar82 & auVar48;
    if ((ushort)((ushort)(SUB161(auVar82 >> 7,0) & 1) | (ushort)(SUB161(auVar82 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar82 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar82 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar82 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar82 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar82 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar82 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar82 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar82 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar82 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar82 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar82 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar82 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar82 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar82[0xf] >> 7) << 0xf) == 0xffff) {
      return 3;
    }
    auVar49[0] = -((char)*plVar6 == s_ACCOUNT_INELIGIB_00182710[0]);
    auVar49[1] = -(*(char *)((longlong)plVar6 + 1) == s_ACCOUNT_INELIGIB_00182710[1]);
    auVar49[2] = -(*(char *)((longlong)plVar6 + 2) == s_ACCOUNT_INELIGIB_00182710[2]);
    auVar49[3] = -(*(char *)((longlong)plVar6 + 3) == s_ACCOUNT_INELIGIB_00182710[3]);
    auVar49[4] = -(*(char *)((longlong)plVar6 + 4) == s_ACCOUNT_INELIGIB_00182710[4]);
    auVar49[5] = -(*(char *)((longlong)plVar6 + 5) == s_ACCOUNT_INELIGIB_00182710[5]);
    auVar49[6] = -(*(char *)((longlong)plVar6 + 6) == s_ACCOUNT_INELIGIB_00182710[6]);
    auVar49[7] = -(*(char *)((longlong)plVar6 + 7) == s_ACCOUNT_INELIGIB_00182710[7]);
    auVar49[8] = -((char)plVar6[1] == s_ACCOUNT_INELIGIB_00182710[8]);
    auVar49[9] = -(*(char *)((longlong)plVar6 + 9) == s_ACCOUNT_INELIGIB_00182710[9]);
    auVar49[10] = -(*(char *)((longlong)plVar6 + 10) == s_ACCOUNT_INELIGIB_00182710[10]);
    auVar49[0xb] = -(*(char *)((longlong)plVar6 + 0xb) == s_ACCOUNT_INELIGIB_00182710[0xb]);
    auVar49[0xc] = -(*(char *)((longlong)plVar6 + 0xc) == s_ACCOUNT_INELIGIB_00182710[0xc]);
    auVar49[0xd] = -(*(char *)((longlong)plVar6 + 0xd) == s_ACCOUNT_INELIGIB_00182710[0xd]);
    auVar49[0xe] = -(*(char *)((longlong)plVar6 + 0xe) == s_ACCOUNT_INELIGIB_00182710[0xe]);
    auVar49[0xf] = -(*(char *)((longlong)plVar6 + 0xf) == s_ACCOUNT_INELIGIB_00182710[0xf]);
    auVar83[0] = -((char)plVar6[2] == s_LE_00183490[0]);
    auVar83[1] = -((char)((ulonglong)plVar6[2] >> 8) == s_LE_00183490[1]);
    auVar83[2] = -(s_LE_00183490[2] == '\0');
    auVar83[3] = -(s_LE_00183490[3] == '\0');
    auVar83[4] = -(UNK_00183494 == '\0');
    auVar83[5] = -(UNK_00183495 == '\0');
    auVar83[6] = -(UNK_00183496 == '\0');
    auVar83[7] = -(UNK_00183497 == '\0');
    auVar83[8] = -(UNK_00183498 == '\0');
    auVar83[9] = -(UNK_00183499 == '\0');
    auVar83[10] = -(UNK_0018349a == '\0');
    auVar83[0xb] = -(UNK_0018349b == '\0');
    auVar83[0xc] = -(UNK_0018349c == '\0');
    auVar83[0xd] = -(UNK_0018349d == '\0');
    auVar83[0xe] = -(UNK_0018349e == '\0');
    auVar83[0xf] = -(UNK_0018349f == '\0');
    auVar83 = auVar83 & auVar49;
    if ((ushort)((ushort)(SUB161(auVar83 >> 7,0) & 1) | (ushort)(SUB161(auVar83 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar83 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar83 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar83 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar83 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar83 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar83 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar83 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar83 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar83 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar83 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar83 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar83 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar83 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar83[0xf] >> 7) << 0xf) == 0xffff) {
      return 3;
    }
    break;
  case 0x13:
    auVar84[0] = -(*(char *)((longlong)plVar6 + 3) == s_IDATION_REQUIRED_00182850[0]);
    auVar84[1] = -(*(char *)((longlong)plVar6 + 4) == s_IDATION_REQUIRED_00182850[1]);
    auVar84[2] = -(*(char *)((longlong)plVar6 + 5) == s_IDATION_REQUIRED_00182850[2]);
    auVar84[3] = -(*(char *)((longlong)plVar6 + 6) == s_IDATION_REQUIRED_00182850[3]);
    auVar84[4] = -(*(char *)((longlong)plVar6 + 7) == s_IDATION_REQUIRED_00182850[4]);
    auVar84[5] = -((char)plVar6[1] == s_IDATION_REQUIRED_00182850[5]);
    auVar84[6] = -(*(char *)((longlong)plVar6 + 9) == s_IDATION_REQUIRED_00182850[6]);
    auVar84[7] = -(*(char *)((longlong)plVar6 + 10) == s_IDATION_REQUIRED_00182850[7]);
    auVar84[8] = -(*(char *)((longlong)plVar6 + 0xb) == s_IDATION_REQUIRED_00182850[8]);
    auVar84[9] = -(*(char *)((longlong)plVar6 + 0xc) == s_IDATION_REQUIRED_00182850[9]);
    auVar84[10] = -(*(char *)((longlong)plVar6 + 0xd) == s_IDATION_REQUIRED_00182850[10]);
    auVar84[0xb] = -(*(char *)((longlong)plVar6 + 0xe) == s_IDATION_REQUIRED_00182850[0xb]);
    auVar84[0xc] = -(*(char *)((longlong)plVar6 + 0xf) == s_IDATION_REQUIRED_00182850[0xc]);
    auVar84[0xd] = -((char)plVar6[2] == s_IDATION_REQUIRED_00182850[0xd]);
    auVar84[0xe] = -(*(char *)((longlong)plVar6 + 0x11) == s_IDATION_REQUIRED_00182850[0xe]);
    auVar84[0xf] = -(*(char *)((longlong)plVar6 + 0x12) == s_IDATION_REQUIRED_00182850[0xf]);
    auVar50[0] = -((char)*plVar6 == s_VALIDATION_REQUI_00183680[0]);
    auVar50[1] = -(*(char *)((longlong)plVar6 + 1) == s_VALIDATION_REQUI_00183680[1]);
    auVar50[2] = -(*(char *)((longlong)plVar6 + 2) == s_VALIDATION_REQUI_00183680[2]);
    auVar50[3] = -(*(char *)((longlong)plVar6 + 3) == s_VALIDATION_REQUI_00183680[3]);
    auVar50[4] = -(*(char *)((longlong)plVar6 + 4) == s_VALIDATION_REQUI_00183680[4]);
    auVar50[5] = -(*(char *)((longlong)plVar6 + 5) == s_VALIDATION_REQUI_00183680[5]);
    auVar50[6] = -(*(char *)((longlong)plVar6 + 6) == s_VALIDATION_REQUI_00183680[6]);
    auVar50[7] = -(*(char *)((longlong)plVar6 + 7) == s_VALIDATION_REQUI_00183680[7]);
    auVar50[8] = -((char)plVar6[1] == s_VALIDATION_REQUI_00183680[8]);
    auVar50[9] = -(*(char *)((longlong)plVar6 + 9) == s_VALIDATION_REQUI_00183680[9]);
    auVar50[10] = -(*(char *)((longlong)plVar6 + 10) == s_VALIDATION_REQUI_00183680[10]);
    auVar50[0xb] = -(*(char *)((longlong)plVar6 + 0xb) == s_VALIDATION_REQUI_00183680[0xb]);
    auVar50[0xc] = -(*(char *)((longlong)plVar6 + 0xc) == s_VALIDATION_REQUI_00183680[0xc]);
    auVar50[0xd] = -(*(char *)((longlong)plVar6 + 0xd) == s_VALIDATION_REQUI_00183680[0xd]);
    auVar50[0xe] = -(*(char *)((longlong)plVar6 + 0xe) == s_VALIDATION_REQUI_00183680[0xe]);
    auVar50[0xf] = -(*(char *)((longlong)plVar6 + 0xf) == s_VALIDATION_REQUI_00183680[0xf]);
    auVar50 = auVar50 & auVar84;
    uVar9 = (ushort)(SUB161(auVar50 >> 7,0) & 1) | (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar50 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar50 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar50 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar50 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar50 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar50 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar50 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar50 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar50 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar50 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar50 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe |
            (ushort)(byte)(auVar50[0xf] >> 7) << 0xf;
    goto joined_r0x004f8100;
  case 0x16:
    auVar77[0] = -(*(char *)((longlong)plVar6 + 6) == s_ON_NOT_SUPPORTED_001840d0[0]);
    auVar77[1] = -(*(char *)((longlong)plVar6 + 7) == s_ON_NOT_SUPPORTED_001840d0[1]);
    auVar77[2] = -((char)plVar6[1] == s_ON_NOT_SUPPORTED_001840d0[2]);
    auVar77[3] = -(*(char *)((longlong)plVar6 + 9) == s_ON_NOT_SUPPORTED_001840d0[3]);
    auVar77[4] = -(*(char *)((longlong)plVar6 + 10) == s_ON_NOT_SUPPORTED_001840d0[4]);
    auVar77[5] = -(*(char *)((longlong)plVar6 + 0xb) == s_ON_NOT_SUPPORTED_001840d0[5]);
    auVar77[6] = -(*(char *)((longlong)plVar6 + 0xc) == s_ON_NOT_SUPPORTED_001840d0[6]);
    auVar77[7] = -(*(char *)((longlong)plVar6 + 0xd) == s_ON_NOT_SUPPORTED_001840d0[7]);
    auVar77[8] = -(*(char *)((longlong)plVar6 + 0xe) == s_ON_NOT_SUPPORTED_001840d0[8]);
    auVar77[9] = -(*(char *)((longlong)plVar6 + 0xf) == s_ON_NOT_SUPPORTED_001840d0[9]);
    auVar77[10] = -((char)plVar6[2] == s_ON_NOT_SUPPORTED_001840d0[10]);
    auVar77[0xb] = -(*(char *)((longlong)plVar6 + 0x11) == s_ON_NOT_SUPPORTED_001840d0[0xb]);
    auVar77[0xc] = -(*(char *)((longlong)plVar6 + 0x12) == s_ON_NOT_SUPPORTED_001840d0[0xc]);
    auVar77[0xd] = -(*(char *)((longlong)plVar6 + 0x13) == s_ON_NOT_SUPPORTED_001840d0[0xd]);
    auVar77[0xe] = -(*(char *)((longlong)plVar6 + 0x14) == s_ON_NOT_SUPPORTED_001840d0[0xe]);
    auVar77[0xf] = -(*(char *)((longlong)plVar6 + 0x15) == s_ON_NOT_SUPPORTED_001840d0[0xf]);
    auVar43[0] = -((char)*plVar6 == s_LOCATION_NOT_SUP_001836b0[0]);
    auVar43[1] = -(*(char *)((longlong)plVar6 + 1) == s_LOCATION_NOT_SUP_001836b0[1]);
    auVar43[2] = -(*(char *)((longlong)plVar6 + 2) == s_LOCATION_NOT_SUP_001836b0[2]);
    auVar43[3] = -(*(char *)((longlong)plVar6 + 3) == s_LOCATION_NOT_SUP_001836b0[3]);
    auVar43[4] = -(*(char *)((longlong)plVar6 + 4) == s_LOCATION_NOT_SUP_001836b0[4]);
    auVar43[5] = -(*(char *)((longlong)plVar6 + 5) == s_LOCATION_NOT_SUP_001836b0[5]);
    auVar43[6] = -(*(char *)((longlong)plVar6 + 6) == s_LOCATION_NOT_SUP_001836b0[6]);
    auVar43[7] = -(*(char *)((longlong)plVar6 + 7) == s_LOCATION_NOT_SUP_001836b0[7]);
    auVar43[8] = -((char)plVar6[1] == s_LOCATION_NOT_SUP_001836b0[8]);
    auVar43[9] = -(*(char *)((longlong)plVar6 + 9) == s_LOCATION_NOT_SUP_001836b0[9]);
    auVar43[10] = -(*(char *)((longlong)plVar6 + 10) == s_LOCATION_NOT_SUP_001836b0[10]);
    auVar43[0xb] = -(*(char *)((longlong)plVar6 + 0xb) == s_LOCATION_NOT_SUP_001836b0[0xb]);
    auVar43[0xc] = -(*(char *)((longlong)plVar6 + 0xc) == s_LOCATION_NOT_SUP_001836b0[0xc]);
    auVar43[0xd] = -(*(char *)((longlong)plVar6 + 0xd) == s_LOCATION_NOT_SUP_001836b0[0xd]);
    auVar43[0xe] = -(*(char *)((longlong)plVar6 + 0xe) == s_LOCATION_NOT_SUP_001836b0[0xe]);
    auVar43[0xf] = -(*(char *)((longlong)plVar6 + 0xf) == s_LOCATION_NOT_SUP_001836b0[0xf]);
    auVar43 = auVar43 & auVar77;
    uVar9 = (ushort)(SUB161(auVar43 >> 7,0) & 1) | (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
            (ushort)(byte)(auVar43[0xf] >> 7) << 0xf;
    goto joined_r0x004f8100;
  case 0x19:
    auVar78[0] = -(*(char *)((longlong)plVar6 + 9) == DAT_00182ba0);
    auVar78[1] = -(*(char *)((longlong)plVar6 + 10) == UNK_00182ba1);
    auVar78[2] = -(*(char *)((longlong)plVar6 + 0xb) == UNK_00182ba2);
    auVar78[3] = -(*(char *)((longlong)plVar6 + 0xc) == UNK_00182ba3);
    auVar78[4] = -(*(char *)((longlong)plVar6 + 0xd) == UNK_00182ba4);
    auVar78[5] = -(*(char *)((longlong)plVar6 + 0xe) == UNK_00182ba5);
    auVar78[6] = -(*(char *)((longlong)plVar6 + 0xf) == UNK_00182ba6);
    auVar78[7] = -((char)plVar6[2] == UNK_00182ba7);
    auVar78[8] = -(*(char *)((longlong)plVar6 + 0x11) == UNK_00182ba8);
    auVar78[9] = -(*(char *)((longlong)plVar6 + 0x12) == UNK_00182ba9);
    auVar78[10] = -(*(char *)((longlong)plVar6 + 0x13) == UNK_00182baa);
    auVar78[0xb] = -(*(char *)((longlong)plVar6 + 0x14) == UNK_00182bab);
    auVar78[0xc] = -(*(char *)((longlong)plVar6 + 0x15) == UNK_00182bac);
    auVar78[0xd] = -(*(char *)((longlong)plVar6 + 0x16) == UNK_00182bad);
    auVar78[0xe] = -(*(char *)((longlong)plVar6 + 0x17) == UNK_00182bae);
    auVar78[0xf] = -((char)plVar6[3] == UNK_00182baf);
    auVar44[0] = -((char)*plVar6 == s_USER_LOCATION_UN_00182dd0[0]);
    auVar44[1] = -(*(char *)((longlong)plVar6 + 1) == s_USER_LOCATION_UN_00182dd0[1]);
    auVar44[2] = -(*(char *)((longlong)plVar6 + 2) == s_USER_LOCATION_UN_00182dd0[2]);
    auVar44[3] = -(*(char *)((longlong)plVar6 + 3) == s_USER_LOCATION_UN_00182dd0[3]);
    auVar44[4] = -(*(char *)((longlong)plVar6 + 4) == s_USER_LOCATION_UN_00182dd0[4]);
    auVar44[5] = -(*(char *)((longlong)plVar6 + 5) == s_USER_LOCATION_UN_00182dd0[5]);
    auVar44[6] = -(*(char *)((longlong)plVar6 + 6) == s_USER_LOCATION_UN_00182dd0[6]);
    auVar44[7] = -(*(char *)((longlong)plVar6 + 7) == s_USER_LOCATION_UN_00182dd0[7]);
    auVar44[8] = -((char)plVar6[1] == s_USER_LOCATION_UN_00182dd0[8]);
    auVar44[9] = -(*(char *)((longlong)plVar6 + 9) == s_USER_LOCATION_UN_00182dd0[9]);
    auVar44[10] = -(*(char *)((longlong)plVar6 + 10) == s_USER_LOCATION_UN_00182dd0[10]);
    auVar44[0xb] = -(*(char *)((longlong)plVar6 + 0xb) == s_USER_LOCATION_UN_00182dd0[0xb]);
    auVar44[0xc] = -(*(char *)((longlong)plVar6 + 0xc) == s_USER_LOCATION_UN_00182dd0[0xc]);
    auVar44[0xd] = -(*(char *)((longlong)plVar6 + 0xd) == s_USER_LOCATION_UN_00182dd0[0xd]);
    auVar44[0xe] = -(*(char *)((longlong)plVar6 + 0xe) == s_USER_LOCATION_UN_00182dd0[0xe]);
    auVar44[0xf] = -(*(char *)((longlong)plVar6 + 0xf) == s_USER_LOCATION_UN_00182dd0[0xf]);
    auVar44 = auVar44 & auVar78;
    uVar9 = (ushort)(SUB161(auVar44 >> 7,0) & 1) | (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
            (ushort)(byte)(auVar44[0xf] >> 7) << 0xf;
joined_r0x004f8100:
    if (uVar9 == 0xffff) {
      return 3;
    }
  }
  if ((bVar1 < 2) || ((lVar4 != 0 && (*(short *)(lVar4 + 0x170) != 0)))) {
    if ((uVar2 | 2) == 0x193) {
      return 3;
    }
    if (lVar21 == 0x11) {
      auVar51[0] = -((char)*plVar20 == s_PERMISSION_DENIE_001842e0[0]);
      auVar51[1] = -(*(char *)((longlong)plVar20 + 1) == s_PERMISSION_DENIE_001842e0[1]);
      auVar51[2] = -(*(char *)((longlong)plVar20 + 2) == s_PERMISSION_DENIE_001842e0[2]);
      auVar51[3] = -(*(char *)((longlong)plVar20 + 3) == s_PERMISSION_DENIE_001842e0[3]);
      auVar51[4] = -(*(char *)((longlong)plVar20 + 4) == s_PERMISSION_DENIE_001842e0[4]);
      auVar51[5] = -(*(char *)((longlong)plVar20 + 5) == s_PERMISSION_DENIE_001842e0[5]);
      auVar51[6] = -(*(char *)((longlong)plVar20 + 6) == s_PERMISSION_DENIE_001842e0[6]);
      auVar51[7] = -(*(char *)((longlong)plVar20 + 7) == s_PERMISSION_DENIE_001842e0[7]);
      auVar51[8] = -((char)plVar20[1] == s_PERMISSION_DENIE_001842e0[8]);
      auVar51[9] = -(*(char *)((longlong)plVar20 + 9) == s_PERMISSION_DENIE_001842e0[9]);
      auVar51[10] = -(*(char *)((longlong)plVar20 + 10) == s_PERMISSION_DENIE_001842e0[10]);
      auVar51[0xb] = -(*(char *)((longlong)plVar20 + 0xb) == s_PERMISSION_DENIE_001842e0[0xb]);
      auVar51[0xc] = -(*(char *)((longlong)plVar20 + 0xc) == s_PERMISSION_DENIE_001842e0[0xc]);
      auVar51[0xd] = -(*(char *)((longlong)plVar20 + 0xd) == s_PERMISSION_DENIE_001842e0[0xd]);
      auVar51[0xe] = -(*(char *)((longlong)plVar20 + 0xe) == s_PERMISSION_DENIE_001842e0[0xe]);
      auVar51[0xf] = -(*(char *)((longlong)plVar20 + 0xf) == s_PERMISSION_DENIE_001842e0[0xf]);
      auVar85[0] = -((char)plVar20[2] == s_D_001839a0[0]);
      auVar85[1] = -(s_D_001839a0[1] == '\0');
      auVar85[2] = -(s_D_001839a0[2] == '\0');
      auVar85[3] = -(s_D_001839a0[3] == '\0');
      auVar85[4] = -(UNK_001839a4 == '\0');
      auVar85[5] = -(UNK_001839a5 == '\0');
      auVar85[6] = -(UNK_001839a6 == '\0');
      auVar85[7] = -(UNK_001839a7 == '\0');
      auVar85[8] = -(UNK_001839a8 == '\0');
      auVar85[9] = -(UNK_001839a9 == '\0');
      auVar85[10] = -(UNK_001839aa == '\0');
      auVar85[0xb] = -(UNK_001839ab == '\0');
      auVar85[0xc] = -(UNK_001839ac == '\0');
      auVar85[0xd] = -(UNK_001839ad == '\0');
      auVar85[0xe] = -(UNK_001839ae == '\0');
      auVar85[0xf] = -(UNK_001839af == '\0');
      auVar85 = auVar85 & auVar51;
      if ((ushort)((ushort)(SUB161(auVar85 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar85 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar85 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar85 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar85 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar85 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar85 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar85 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar85 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar85 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar85 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar85 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar85 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar85 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar85 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar85[0xf] >> 7) << 0xf) == 0xffff) {
        return 3;
      }
    }
    else if ((lVar21 == 0xf) &&
            (*(longlong *)((longlong)plVar20 + 7) == 0x444554414349544e &&
             *plVar20 == 0x4e45485455414e55)) {
      return 3;
    }
  }
  switch(uVar2) {
  case 400:
  case 0x191:
  case 0x193:
  case 0x194:
  case 0x199:
  case 0x19d:
  case 0x1a6:
  case 499:
    goto LAB_004f7bd0;
  case 0x1ad:
  case 500:
  case 0x1f6:
  case 0x1f7:
  case 0x1f8:
  case 0x211:
    goto LAB_004f7bd0;
  }
  switch(lVar21) {
  case 8:
    if (*plVar20 == 0x4c414e5245544e49) {
      return 2;
    }
    break;
  case 0xb:
    if (*(longlong *)((longlong)plVar20 + 3) == 0x454c42414c494156 && *plVar20 == 0x414c494156414e55
       ) {
      return 2;
    }
    break;
  case 0x11:
    auVar52[0] = -((char)*plVar20 == DAT_00183b30);
    auVar52[1] = -(*(char *)((longlong)plVar20 + 1) == UNK_00183b31);
    auVar52[2] = -(*(char *)((longlong)plVar20 + 2) == UNK_00183b32);
    auVar52[3] = -(*(char *)((longlong)plVar20 + 3) == UNK_00183b33);
    auVar52[4] = -(*(char *)((longlong)plVar20 + 4) == UNK_00183b34);
    auVar52[5] = -(*(char *)((longlong)plVar20 + 5) == UNK_00183b35);
    auVar52[6] = -(*(char *)((longlong)plVar20 + 6) == UNK_00183b36);
    auVar52[7] = -(*(char *)((longlong)plVar20 + 7) == UNK_00183b37);
    auVar52[8] = -((char)plVar20[1] == UNK_00183b38);
    auVar52[9] = -(*(char *)((longlong)plVar20 + 9) == UNK_00183b39);
    auVar52[10] = -(*(char *)((longlong)plVar20 + 10) == UNK_00183b3a);
    auVar52[0xb] = -(*(char *)((longlong)plVar20 + 0xb) == UNK_00183b3b);
    auVar52[0xc] = -(*(char *)((longlong)plVar20 + 0xc) == UNK_00183b3c);
    auVar52[0xd] = -(*(char *)((longlong)plVar20 + 0xd) == UNK_00183b3d);
    auVar52[0xe] = -(*(char *)((longlong)plVar20 + 0xe) == UNK_00183b3e);
    auVar52[0xf] = -(*(char *)((longlong)plVar20 + 0xf) == UNK_00183b3f);
    auVar86[0] = -((char)plVar20[2] == s_D_001839a0[0]);
    auVar86[1] = -(s_D_001839a0[1] == '\0');
    auVar86[2] = -(s_D_001839a0[2] == '\0');
    auVar86[3] = -(s_D_001839a0[3] == '\0');
    auVar86[4] = -(UNK_001839a4 == '\0');
    auVar86[5] = -(UNK_001839a5 == '\0');
    auVar86[6] = -(UNK_001839a6 == '\0');
    auVar86[7] = -(UNK_001839a7 == '\0');
    auVar86[8] = -(UNK_001839a8 == '\0');
    auVar86[9] = -(UNK_001839a9 == '\0');
    auVar86[10] = -(UNK_001839aa == '\0');
    auVar86[0xb] = -(UNK_001839ab == '\0');
    auVar86[0xc] = -(UNK_001839ac == '\0');
    auVar86[0xd] = -(UNK_001839ad == '\0');
    auVar86[0xe] = -(UNK_001839ae == '\0');
    auVar86[0xf] = -(UNK_001839af == '\0');
    goto LAB_004f838c;
  case 0x12:
    auVar52[0] = -((char)*plVar20 == s_RESOURCE_EXHAUST_00182860[0]);
    auVar52[1] = -(*(char *)((longlong)plVar20 + 1) == s_RESOURCE_EXHAUST_00182860[1]);
    auVar52[2] = -(*(char *)((longlong)plVar20 + 2) == s_RESOURCE_EXHAUST_00182860[2]);
    auVar52[3] = -(*(char *)((longlong)plVar20 + 3) == s_RESOURCE_EXHAUST_00182860[3]);
    auVar52[4] = -(*(char *)((longlong)plVar20 + 4) == s_RESOURCE_EXHAUST_00182860[4]);
    auVar52[5] = -(*(char *)((longlong)plVar20 + 5) == s_RESOURCE_EXHAUST_00182860[5]);
    auVar52[6] = -(*(char *)((longlong)plVar20 + 6) == s_RESOURCE_EXHAUST_00182860[6]);
    auVar52[7] = -(*(char *)((longlong)plVar20 + 7) == s_RESOURCE_EXHAUST_00182860[7]);
    auVar52[8] = -((char)plVar20[1] == s_RESOURCE_EXHAUST_00182860[8]);
    auVar52[9] = -(*(char *)((longlong)plVar20 + 9) == s_RESOURCE_EXHAUST_00182860[9]);
    auVar52[10] = -(*(char *)((longlong)plVar20 + 10) == s_RESOURCE_EXHAUST_00182860[10]);
    auVar52[0xb] = -(*(char *)((longlong)plVar20 + 0xb) == s_RESOURCE_EXHAUST_00182860[0xb]);
    auVar52[0xc] = -(*(char *)((longlong)plVar20 + 0xc) == s_RESOURCE_EXHAUST_00182860[0xc]);
    auVar52[0xd] = -(*(char *)((longlong)plVar20 + 0xd) == s_RESOURCE_EXHAUST_00182860[0xd]);
    auVar52[0xe] = -(*(char *)((longlong)plVar20 + 0xe) == s_RESOURCE_EXHAUST_00182860[0xe]);
    auVar52[0xf] = -(*(char *)((longlong)plVar20 + 0xf) == s_RESOURCE_EXHAUST_00182860[0xf]);
    auVar86[0] = -((char)plVar20[2] == s_ED_001826f0[0]);
    auVar86[1] = -((char)((ulonglong)plVar20[2] >> 8) == s_ED_001826f0[1]);
    auVar86[2] = -(s_ED_001826f0[2] == '\0');
    auVar86[3] = -(s_ED_001826f0[3] == '\0');
    auVar86[4] = -(UNK_001826f4 == '\0');
    auVar86[5] = -(UNK_001826f5 == '\0');
    auVar86[6] = -(UNK_001826f6 == '\0');
    auVar86[7] = -(UNK_001826f7 == '\0');
    auVar86[8] = -(UNK_001826f8 == '\0');
    auVar86[9] = -(UNK_001826f9 == '\0');
    auVar86[10] = -(UNK_001826fa == '\0');
    auVar86[0xb] = -(UNK_001826fb == '\0');
    auVar86[0xc] = -(UNK_001826fc == '\0');
    auVar86[0xd] = -(UNK_001826fd == '\0');
    auVar86[0xe] = -(UNK_001826fe == '\0');
    auVar86[0xf] = -(UNK_001826ff == '\0');
LAB_004f838c:
    auVar86 = auVar86 & auVar52;
    if ((ushort)((ushort)(SUB161(auVar86 >> 7,0) & 1) | (ushort)(SUB161(auVar86 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar86 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar86 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar86 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar86 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar86 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar86 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar86 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar86 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar86 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar86 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar86 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar86 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar86 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar86[0xf] >> 7) << 0xf) == 0xffff) {
      return 2;
    }
  }
  if ((!bVar12) ||
     (auVar87[0] = -(*(char *)((longlong)puVar8 + 6) == s__quota_exhausted_001842f0[0]),
     auVar87[1] = -(*(char *)((longlong)puVar8 + 7) == s__quota_exhausted_001842f0[1]),
     auVar87[2] = -((char)puVar8[1] == s__quota_exhausted_001842f0[2]),
     auVar87[3] = -(*(char *)((longlong)puVar8 + 9) == s__quota_exhausted_001842f0[3]),
     auVar87[4] = -(*(char *)((longlong)puVar8 + 10) == s__quota_exhausted_001842f0[4]),
     auVar87[5] = -(*(char *)((longlong)puVar8 + 0xb) == s__quota_exhausted_001842f0[5]),
     auVar87[6] = -(*(char *)((longlong)puVar8 + 0xc) == s__quota_exhausted_001842f0[6]),
     auVar87[7] = -(*(char *)((longlong)puVar8 + 0xd) == s__quota_exhausted_001842f0[7]),
     auVar87[8] = -(*(char *)((longlong)puVar8 + 0xe) == s__quota_exhausted_001842f0[8]),
     auVar87[9] = -(*(char *)((longlong)puVar8 + 0xf) == s__quota_exhausted_001842f0[9]),
     auVar87[10] = -((char)puVar8[2] == s__quota_exhausted_001842f0[10]),
     auVar87[0xb] = -(*(char *)((longlong)puVar8 + 0x11) == s__quota_exhausted_001842f0[0xb]),
     auVar87[0xc] = -(*(char *)((longlong)puVar8 + 0x12) == s__quota_exhausted_001842f0[0xc]),
     auVar87[0xd] = -(*(char *)((longlong)puVar8 + 0x13) == s__quota_exhausted_001842f0[0xd]),
     auVar87[0xe] = -(*(char *)((longlong)puVar8 + 0x14) == s__quota_exhausted_001842f0[0xe]),
     auVar87[0xf] = -(*(char *)((longlong)puVar8 + 0x15) == s__quota_exhausted_001842f0[0xf]),
     auVar53[0] = -((char)*puVar8 == DAT_00184180),
     auVar53[1] = -(*(char *)((longlong)puVar8 + 1) == UNK_00184181),
     auVar53[2] = -(*(char *)((longlong)puVar8 + 2) == UNK_00184182),
     auVar53[3] = -(*(char *)((longlong)puVar8 + 3) == UNK_00184183),
     auVar53[4] = -(*(char *)((longlong)puVar8 + 4) == UNK_00184184),
     auVar53[5] = -(*(char *)((longlong)puVar8 + 5) == UNK_00184185),
     auVar53[6] = -(*(char *)((longlong)puVar8 + 6) == UNK_00184186),
     auVar53[7] = -(*(char *)((longlong)puVar8 + 7) == UNK_00184187),
     auVar53[8] = -((char)puVar8[1] == UNK_00184188),
     auVar53[9] = -(*(char *)((longlong)puVar8 + 9) == UNK_00184189),
     auVar53[10] = -(*(char *)((longlong)puVar8 + 10) == UNK_0018418a),
     auVar53[0xb] = -(*(char *)((longlong)puVar8 + 0xb) == UNK_0018418b),
     auVar53[0xc] = -(*(char *)((longlong)puVar8 + 0xc) == UNK_0018418c),
     auVar53[0xd] = -(*(char *)((longlong)puVar8 + 0xd) == UNK_0018418d),
     auVar53[0xe] = -(*(char *)((longlong)puVar8 + 0xe) == UNK_0018418e),
     auVar53[0xf] = -(*(char *)((longlong)puVar8 + 0xf) == UNK_0018418f),
     auVar53 = auVar53 & auVar87,
     (ushort)((ushort)(SUB161(auVar53 >> 7,0) & 1) | (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar53 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar53 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar53 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar53 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar53 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar53 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar53 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar53 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar53 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar53 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar53 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar53 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar53 >> 0x77,0) & 1) << 0xe |
             (ushort)(byte)(auVar53[0xf] >> 7) << 0xf) != 0xffff)) {
    if (uVar3 == 0x14) {
      uVar18 = puVar8[2];
      auVar88[0] = -((char)uVar18 == DAT_00183810);
      auVar88[1] = -((char)(uVar18 >> 8) == UNK_00183811);
      auVar88[2] = -((char)(uVar18 >> 0x10) == UNK_00183812);
      auVar88[3] = -((char)(uVar18 >> 0x18) == UNK_00183813);
      auVar88[4] = -(UNK_00183814 == '\0');
      auVar88[5] = -(UNK_00183815 == '\0');
      auVar88[6] = -(UNK_00183816 == '\0');
      auVar88[7] = -(UNK_00183817 == '\0');
      auVar88[8] = -(UNK_00183818 == '\0');
      auVar88[9] = -(UNK_00183819 == '\0');
      auVar88[10] = -(UNK_0018381a == '\0');
      auVar88[0xb] = -(UNK_0018381b == '\0');
      auVar88[0xc] = -(UNK_0018381c == '\0');
      auVar88[0xd] = -(UNK_0018381d == '\0');
      auVar88[0xe] = -(UNK_0018381e == '\0');
      auVar88[0xf] = -(UNK_0018381f == '\0');
      auVar54[0] = -((char)*puVar8 == DAT_00183bc0);
      auVar54[1] = -(*(char *)((longlong)puVar8 + 1) == UNK_00183bc1);
      auVar54[2] = -(*(char *)((longlong)puVar8 + 2) == UNK_00183bc2);
      auVar54[3] = -(*(char *)((longlong)puVar8 + 3) == UNK_00183bc3);
      auVar54[4] = -(*(char *)((longlong)puVar8 + 4) == UNK_00183bc4);
      auVar54[5] = -(*(char *)((longlong)puVar8 + 5) == UNK_00183bc5);
      auVar54[6] = -(*(char *)((longlong)puVar8 + 6) == UNK_00183bc6);
      auVar54[7] = -(*(char *)((longlong)puVar8 + 7) == UNK_00183bc7);
      auVar54[8] = -((char)puVar8[1] == UNK_00183bc8);
      auVar54[9] = -(*(char *)((longlong)puVar8 + 9) == UNK_00183bc9);
      auVar54[10] = -(*(char *)((longlong)puVar8 + 10) == UNK_00183bca);
      auVar54[0xb] = -(*(char *)((longlong)puVar8 + 0xb) == UNK_00183bcb);
      auVar54[0xc] = -(*(char *)((longlong)puVar8 + 0xc) == UNK_00183bcc);
      auVar54[0xd] = -(*(char *)((longlong)puVar8 + 0xd) == UNK_00183bcd);
      auVar54[0xe] = -(*(char *)((longlong)puVar8 + 0xe) == UNK_00183bce);
      auVar54[0xf] = -(*(char *)((longlong)puVar8 + 0xf) == UNK_00183bcf);
      auVar54 = auVar54 & auVar88;
      if ((ushort)((ushort)(SUB161(auVar54 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar54 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar54 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar54 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar54 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar54 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar54 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar54 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar54 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar54 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar54 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar54 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar54 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar54[0xf] >> 7) << 0xf) == 0xffff) {
        return 2;
      }
    }
    if ((((((!bVar13) ||
           (auVar55[0] = -((char)*puVar8 == DAT_00184430),
           auVar55[1] = -(*(char *)((longlong)puVar8 + 1) == UNK_00184431),
           auVar55[2] = -(*(char *)((longlong)puVar8 + 2) == UNK_00184432),
           auVar55[3] = -(*(char *)((longlong)puVar8 + 3) == UNK_00184433),
           auVar55[4] = -(*(char *)((longlong)puVar8 + 4) == UNK_00184434),
           auVar55[5] = -(*(char *)((longlong)puVar8 + 5) == UNK_00184435),
           auVar55[6] = -(*(char *)((longlong)puVar8 + 6) == UNK_00184436),
           auVar55[7] = -(*(char *)((longlong)puVar8 + 7) == UNK_00184437),
           auVar55[8] = -((char)puVar8[1] == UNK_00184438),
           auVar55[9] = -(*(char *)((longlong)puVar8 + 9) == UNK_00184439),
           auVar55[10] = -(*(char *)((longlong)puVar8 + 10) == UNK_0018443a),
           auVar55[0xb] = -(*(char *)((longlong)puVar8 + 0xb) == UNK_0018443b),
           auVar55[0xc] = -(*(char *)((longlong)puVar8 + 0xc) == UNK_0018443c),
           auVar55[0xd] = -(*(char *)((longlong)puVar8 + 0xd) == UNK_0018443d),
           auVar55[0xe] = -(*(char *)((longlong)puVar8 + 0xe) == UNK_0018443e),
           auVar55[0xf] = -(*(char *)((longlong)puVar8 + 0xf) == UNK_0018443f),
           (ushort)((ushort)(SUB161(auVar55 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar55 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar55 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar55 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar55 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar55 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar55 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar55 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar55 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar55 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar55 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar55 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar55 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar55 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar55 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar55[0xf] >> 7) << 0xf) != 0xffff)) &&
          ((!bVar14 ||
           (auVar56[0] = -((char)*puVar8 == s_native_unavailab_00183100[0]),
           auVar56[1] = -(*(char *)((longlong)puVar8 + 1) == s_native_unavailab_00183100[1]),
           auVar56[2] = -(*(char *)((longlong)puVar8 + 2) == s_native_unavailab_00183100[2]),
           auVar56[3] = -(*(char *)((longlong)puVar8 + 3) == s_native_unavailab_00183100[3]),
           auVar56[4] = -(*(char *)((longlong)puVar8 + 4) == s_native_unavailab_00183100[4]),
           auVar56[5] = -(*(char *)((longlong)puVar8 + 5) == s_native_unavailab_00183100[5]),
           auVar56[6] = -(*(char *)((longlong)puVar8 + 6) == s_native_unavailab_00183100[6]),
           auVar56[7] = -(*(char *)((longlong)puVar8 + 7) == s_native_unavailab_00183100[7]),
           auVar56[8] = -((char)puVar8[1] == s_native_unavailab_00183100[8]),
           auVar56[9] = -(*(char *)((longlong)puVar8 + 9) == s_native_unavailab_00183100[9]),
           auVar56[10] = -(*(char *)((longlong)puVar8 + 10) == s_native_unavailab_00183100[10]),
           auVar56[0xb] = -(*(char *)((longlong)puVar8 + 0xb) == s_native_unavailab_00183100[0xb]),
           auVar56[0xc] = -(*(char *)((longlong)puVar8 + 0xc) == s_native_unavailab_00183100[0xc]),
           auVar56[0xd] = -(*(char *)((longlong)puVar8 + 0xd) == s_native_unavailab_00183100[0xd]),
           auVar56[0xe] = -(*(char *)((longlong)puVar8 + 0xe) == s_native_unavailab_00183100[0xe]),
           auVar56[0xf] = -(*(char *)((longlong)puVar8 + 0xf) == s_native_unavailab_00183100[0xf]),
           auVar89[0] = -((char)puVar8[2] == s_le_00183580[0]),
           auVar89[1] = -((char)(puVar8[2] >> 8) == s_le_00183580[1]),
           auVar89[2] = -(s_le_00183580[2] == '\0'), auVar89[3] = -(s_le_00183580[3] == '\0'),
           auVar89[4] = -(UNK_00183584 == '\0'), auVar89[5] = -(UNK_00183585 == '\0'),
           auVar89[6] = -(UNK_00183586 == '\0'), auVar89[7] = -(UNK_00183587 == '\0'),
           auVar89[8] = -(UNK_00183588 == '\0'), auVar89[9] = -(UNK_00183589 == '\0'),
           auVar89[10] = -(UNK_0018358a == '\0'), auVar89[0xb] = -(UNK_0018358b == '\0'),
           auVar89[0xc] = -(UNK_0018358c == '\0'), auVar89[0xd] = -(UNK_0018358d == '\0'),
           auVar89[0xe] = -(UNK_0018358e == '\0'), auVar89[0xf] = -(UNK_0018358f == '\0'),
           auVar89 = auVar89 & auVar56,
           (ushort)((ushort)(SUB161(auVar89 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar89 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar89 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar89 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar89 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar89 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar89 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar89 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar89 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar89 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar89 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar89 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar89 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar89 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar89 >> 0x77,0) & 1) << 0xe |
                   (ushort)(byte)(auVar89[0xf] >> 7) << 0xf) != 0xffff)))) &&
         ((local_44 = (char)uVar17, local_44 == '\0' ||
          ((short)puVar8[1] != 0x6c6c || *puVar8 != 0x75665f6575657571)))) &&
        ((uVar3 != 0xd ||
         (*(longlong *)((longlong)puVar8 + 5) != 0x74756f656d69745f || *puVar8 != 0x69745f6575657571
         )))) && (((!bVar14 ||
                   (auVar57[0] = -((char)*puVar8 == DAT_00183620),
                   auVar57[1] = -(*(char *)((longlong)puVar8 + 1) == UNK_00183621),
                   auVar57[2] = -(*(char *)((longlong)puVar8 + 2) == UNK_00183622),
                   auVar57[3] = -(*(char *)((longlong)puVar8 + 3) == UNK_00183623),
                   auVar57[4] = -(*(char *)((longlong)puVar8 + 4) == UNK_00183624),
                   auVar57[5] = -(*(char *)((longlong)puVar8 + 5) == UNK_00183625),
                   auVar57[6] = -(*(char *)((longlong)puVar8 + 6) == UNK_00183626),
                   auVar57[7] = -(*(char *)((longlong)puVar8 + 7) == UNK_00183627),
                   auVar57[8] = -((char)puVar8[1] == UNK_00183628),
                   auVar57[9] = -(*(char *)((longlong)puVar8 + 9) == UNK_00183629),
                   auVar57[10] = -(*(char *)((longlong)puVar8 + 10) == UNK_0018362a),
                   auVar57[0xb] = -(*(char *)((longlong)puVar8 + 0xb) == UNK_0018362b),
                   auVar57[0xc] = -(*(char *)((longlong)puVar8 + 0xc) == UNK_0018362c),
                   auVar57[0xd] = -(*(char *)((longlong)puVar8 + 0xd) == UNK_0018362d),
                   auVar57[0xe] = -(*(char *)((longlong)puVar8 + 0xe) == UNK_0018362e),
                   auVar57[0xf] = -(*(char *)((longlong)puVar8 + 0xf) == UNK_0018362f),
                   auVar90[0] = -((char)puVar8[2] == DAT_00182910),
                   auVar90[1] = -((char)(puVar8[2] >> 8) == UNK_00182911),
                   auVar90[2] = -(UNK_00182912 == '\0'), auVar90[3] = -(UNK_00182913 == '\0'),
                   auVar90[4] = -(UNK_00182914 == '\0'), auVar90[5] = -(UNK_00182915 == '\0'),
                   auVar90[6] = -(UNK_00182916 == '\0'), auVar90[7] = -(UNK_00182917 == '\0'),
                   auVar90[8] = -(UNK_00182918 == '\0'), auVar90[9] = -(UNK_00182919 == '\0'),
                   auVar90[10] = -(UNK_0018291a == '\0'), auVar90[0xb] = -(UNK_0018291b == '\0'),
                   auVar90[0xc] = -(UNK_0018291c == '\0'), auVar90[0xd] = -(UNK_0018291d == '\0'),
                   auVar90[0xe] = -(UNK_0018291e == '\0'), auVar90[0xf] = -(UNK_0018291f == '\0'),
                   auVar90 = auVar90 & auVar57,
                   (ushort)((ushort)(SUB161(auVar90 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar90 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar90 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar90 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar90 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar90 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar90 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar90 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar90 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar90 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar90 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar90 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar90 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar90 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar90 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar90[0xf] >> 7) << 0xf) != 0xffff)) &&
                  ((!bVar11 ||
                   (*(longlong *)((longlong)puVar8 + 7) != 0x676e6970706f7473 ||
                    *puVar8 != 0x735f6c656e72656b)))))) {
      if (uVar3 == 0x14) {
        uVar3 = puVar8[2];
        auVar91[0] = -((char)uVar3 == DAT_00183590);
        auVar91[1] = -((char)(uVar3 >> 8) == UNK_00183591);
        auVar91[2] = -((char)(uVar3 >> 0x10) == UNK_00183592);
        auVar91[3] = -((char)(uVar3 >> 0x18) == UNK_00183593);
        auVar91[4] = -(UNK_00183594 == '\0');
        auVar91[5] = -(UNK_00183595 == '\0');
        auVar91[6] = -(UNK_00183596 == '\0');
        auVar91[7] = -(UNK_00183597 == '\0');
        auVar91[8] = -(UNK_00183598 == '\0');
        auVar91[9] = -(UNK_00183599 == '\0');
        auVar91[10] = -(UNK_0018359a == '\0');
        auVar91[0xb] = -(UNK_0018359b == '\0');
        auVar91[0xc] = -(UNK_0018359c == '\0');
        auVar91[0xd] = -(UNK_0018359d == '\0');
        auVar91[0xe] = -(UNK_0018359e == '\0');
        auVar91[0xf] = -(UNK_0018359f == '\0');
        auVar58[0] = -((char)*puVar8 == DAT_00183230);
        auVar58[1] = -(*(char *)((longlong)puVar8 + 1) == UNK_00183231);
        auVar58[2] = -(*(char *)((longlong)puVar8 + 2) == UNK_00183232);
        auVar58[3] = -(*(char *)((longlong)puVar8 + 3) == UNK_00183233);
        auVar58[4] = -(*(char *)((longlong)puVar8 + 4) == UNK_00183234);
        auVar58[5] = -(*(char *)((longlong)puVar8 + 5) == UNK_00183235);
        auVar58[6] = -(*(char *)((longlong)puVar8 + 6) == UNK_00183236);
        auVar58[7] = -(*(char *)((longlong)puVar8 + 7) == UNK_00183237);
        auVar58[8] = -((char)puVar8[1] == UNK_00183238);
        auVar58[9] = -(*(char *)((longlong)puVar8 + 9) == UNK_00183239);
        auVar58[10] = -(*(char *)((longlong)puVar8 + 10) == UNK_0018323a);
        auVar58[0xb] = -(*(char *)((longlong)puVar8 + 0xb) == UNK_0018323b);
        auVar58[0xc] = -(*(char *)((longlong)puVar8 + 0xc) == UNK_0018323c);
        auVar58[0xd] = -(*(char *)((longlong)puVar8 + 0xd) == UNK_0018323d);
        auVar58[0xe] = -(*(char *)((longlong)puVar8 + 0xe) == UNK_0018323e);
        auVar58[0xf] = -(*(char *)((longlong)puVar8 + 0xf) == UNK_0018323f);
        auVar58 = auVar58 & auVar91;
        if ((ushort)((ushort)(SUB161(auVar58 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar58 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar58 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar58 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar58 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar58 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar58 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar58 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar58 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar58 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar58 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar58 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar58 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar58[0xf] >> 7) << 0xf) == 0xffff) {
          return 2;
        }
      }
      if ((!bVar11) ||
         (*(longlong *)((longlong)puVar8 + 7) != 0x6572757373657270 || *puVar8 != 0x705f79726f6d656d
         )) {
LAB_004f7bd0:
        return 0;
      }
    }
  }
LAB_004f7bd0:
  return 2;
}


