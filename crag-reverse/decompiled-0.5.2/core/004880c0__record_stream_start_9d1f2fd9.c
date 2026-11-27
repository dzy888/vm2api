// 004880c0 record_stream_start

/* <craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>::record_stream_start */

void __rustcall
<craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>::record_stream_start
          (longlong *param_1,longlong *param_2,undefined8 param_3,longlong param_4,int param_5,
          longlong param_6,longlong param_7)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined1 (*pauVar3) [16];
  code *pcVar4;
  ushort uVar5;
  short sVar6;
  uint uVar7;
  bool bVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  ushort uVar11;
  int iVar12;
  ulonglong uVar13;
  byte bVar14;
  uint uVar15;
  int *piVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 uVar19;
  longlong lVar20;
  undefined8 *puVar21;
  uint uVar22;
  longlong lVar23;
  longlong *plVar24;
  longlong *plVar25;
  longlong lVar26;
  ulonglong uVar27;
  undefined1 (*pauVar28) [16];
  byte bVar29;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  int local_184;
  longlong local_180;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  ulonglong local_158;
  ulonglong local_148;
  longlong local_140;
  longlong lStack_138;
  longlong local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  int *local_110;
  undefined8 local_108;
  longlong *local_100;
  undefined1 local_f8 [24];
  int local_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined1 local_c8 [16];
  longlong local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  undefined8 uStack_60;
  int *local_58;
  undefined1 local_48 [16];
  
  local_184 = param_5;
  local_a8 = param_3;
  local_a0 = param_4;
  if (param_6 != 0) {
    if (-1 < param_7) {
      local_180 = param_4;
      local_100 = param_1;
      if (param_7 == 0) {
        lVar26 = 1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        param_1 = (longlong *)0x1;
        lVar26 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar26 == 0) goto LAB_00488101;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa,param_7);
      }
      local_140 = param_7;
      local_130 = param_7;
      lStack_138 = lVar26;
      goto LAB_004881c0;
    }
    param_1 = (longlong *)0x0;
LAB_00488101:
    (*(code *)PTR_handle_error_00798ff0)();
  }
  local_178 = &local_a8;
  uStack_170 = 0x635460;
  uStack_16c = 0;
  local_168 = &local_184;
  local_160 = SUB84(PTR_fmt_00799470,0);
  uStack_15c = (undefined4)((ulonglong)PTR_fmt_00799470 >> 0x20);
  local_180 = param_4;
  local_100 = param_1;
  (*(code *)PTR_format_inner_00799048)();
LAB_004881c0:
  local_108 = param_3;
  (*(code *)PTR_now_00799478)();
  <chrono[1cd233408897ab2f]::datetime::DateTime<chrono[1cd233408897ab2f]::offset::utc::Utc>>::
  to_rfc3339(local_f8,&local_178);
  puVar9 = local_178;
  if (param_2[6] != 0) {
    uVar13 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
             ::hash_one::<&alloc[12e961f32105355]::string::String>(param_2 + 7);
    lVar23 = local_130;
    puVar10 = PTR_bcmp_00799020;
    lVar26 = param_2[3];
    uVar17 = param_2[4];
    bVar14 = (byte)(uVar13 >> 0x39);
    auVar33 = ZEXT216(CONCAT11(bVar14,bVar14));
    auVar30 = pshuflw(auVar33,auVar33,0);
    auVar33._0_8_ = auVar30._0_8_;
    auVar33._8_4_ = auVar30._0_4_;
    auVar33._12_4_ = auVar30._4_4_;
    lVar20 = 0;
    while( true ) {
      uVar13 = uVar13 & uVar17;
      auVar30 = *(undefined1 (*) [16])(lVar26 + uVar13);
      auVar31[0] = -(auVar30[0] == auVar33[0]);
      auVar31[1] = -(auVar30[1] == auVar33[1]);
      auVar31[2] = -(auVar30[2] == auVar33[2]);
      auVar31[3] = -(auVar30[3] == auVar33[3]);
      auVar31[4] = -(auVar30[4] == auVar33[4]);
      auVar31[5] = -(auVar30[5] == auVar33[5]);
      auVar31[6] = -(auVar30[6] == auVar33[6]);
      auVar31[7] = -(auVar30[7] == auVar33[7]);
      auVar31[8] = -(auVar30[8] == auVar33[8]);
      auVar31[9] = -(auVar30[9] == auVar33[9]);
      auVar31[10] = -(auVar30[10] == auVar33[10]);
      auVar31[0xb] = -(auVar30[0xb] == auVar33[0xb]);
      auVar31[0xc] = -(auVar30[0xc] == auVar33[0xc]);
      auVar31[0xd] = -(auVar30[0xd] == auVar33[0xd]);
      auVar31[0xe] = -(auVar30[0xe] == auVar33[0xe]);
      auVar31[0xf] = -(auVar30[0xf] == auVar33[0xf]);
      uVar11 = (ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe | (ushort)(auVar31[0xf] >> 7) << 0xf;
      piVar16 = (int *)(ulonglong)uVar11;
      if (uVar11 != 0) {
        local_148 = uVar13;
        local_c8 = auVar33;
        local_b8 = lVar20;
        local_b0 = uVar17;
        local_48 = auVar30;
        do {
          uVar22 = 0;
          for (uVar15 = (uint)piVar16; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
            uVar22 = uVar22 + 1;
          }
          uVar17 = uVar22 + local_148 & local_b0;
          lVar20 = uVar17 * -0xe0;
          local_110 = piVar16;
          if (lVar23 == *(longlong *)(lVar26 + -0xd0 + lVar20)) {
            lVar20 = lVar20 + lVar26;
            iVar12 = (*(code *)puVar10)(-uVar17,lVar23);
            if (iVar12 == 0) {
              puVar9 = local_178;
              if (*(char *)(lVar20 + -0x20) == '\0') goto LAB_00488443;
              iVar12 = *(int *)(lVar20 + -0x1c);
              puVar9 = (undefined8 *)CONCAT44(local_178._4_4_,iVar12);
              if (iVar12 == local_184) goto LAB_00488443;
              local_178._0_4_ = iVar12;
              uVar13 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                       ::hash_one::<&u32>(param_2 + 0xd,&local_178);
              lVar26 = param_2[9];
              uVar17 = param_2[10];
              bVar14 = (byte)(uVar13 >> 0x39);
              auVar33 = ZEXT216(CONCAT11(bVar14,bVar14));
              auVar33 = pshuflw(auVar33,auVar33,0);
              lVar23 = 0;
              goto LAB_0048836a;
            }
          }
          iVar12 = (int)local_110 + -1;
          uVar11 = (ushort)iVar12 & (ushort)local_110;
          piVar16 = (int *)(ulonglong)CONCAT22((short)((uint)iVar12 >> 0x10),uVar11);
          uVar13 = local_148;
          uVar17 = local_b0;
          lVar20 = local_b8;
          auVar33 = local_c8;
          auVar30 = local_48;
        } while (uVar11 != 0);
      }
      auVar36[0] = -(auVar30[0] == -1);
      auVar36[1] = -(auVar30[1] == -1);
      auVar36[2] = -(auVar30[2] == -1);
      auVar36[3] = -(auVar30[3] == -1);
      auVar36[4] = -(auVar30[4] == -1);
      auVar36[5] = -(auVar30[5] == -1);
      auVar36[6] = -(auVar30[6] == -1);
      auVar36[7] = -(auVar30[7] == -1);
      auVar36[8] = -(auVar30[8] == -1);
      auVar36[9] = -(auVar30[9] == -1);
      auVar36[10] = -(auVar30[10] == -1);
      auVar36[0xb] = -(auVar30[0xb] == -1);
      auVar36[0xc] = -(auVar30[0xc] == -1);
      auVar36[0xd] = -(auVar30[0xd] == -1);
      auVar36[0xe] = -(auVar30[0xe] == -1);
      auVar36[0xf] = -(auVar30[0xf] == -1);
      puVar9 = local_178;
      if ((((((((((((((((SUB161(auVar36 >> 7,0) & 1) != 0 || (SUB161(auVar36 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar36 >> 0x17,0) & 1) != 0) || (SUB161(auVar36 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar36 >> 0x27,0) & 1) != 0) || (SUB161(auVar36 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar36 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar36 >> 0x3f,0) & 1) != 0) || (SUB161(auVar36 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar36 >> 0x4f,0) & 1) != 0) || (SUB161(auVar36 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar36 >> 0x5f,0) & 1) != 0) || (SUB161(auVar36 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar36 >> 0x6f,0) & 1) != 0) || (SUB161(auVar36 >> 0x77,0) & 1) != 0) ||
          auVar36[0xf] < '\0') break;
      uVar13 = uVar13 + lVar20 + 0x10;
      lVar20 = lVar20 + 0x10;
    }
  }
LAB_00488443:
  local_178 = puVar9;
  (*(code *)PTR_clone_00798fd0)();
  iVar12 = local_184;
  local_e0 = local_184;
  plVar25 = param_2 + 0xd;
  plVar24 = (longlong *)&local_e0;
  uVar17 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
           ::hash_one::<&u32>();
  if (param_2[0xb] == 0) {
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(u32,alloc[12e961f32105355]::string::String)>>::
    reserve_rehash::
    <hashbrown[b5c94476ffc33875]::map::make_hasher<u32,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::hash::random::RandomState>::_closure_0_>
              ();
    plVar24 = plVar25;
  }
  pauVar28 = (undefined1 (*) [16])param_2[9];
  uVar13 = param_2[10];
  uVar18 = uVar17 >> 0x39;
  bVar14 = (byte)(uVar17 >> 0x38);
  bVar29 = bVar14 >> 1;
  auVar33 = ZEXT216(CONCAT11(bVar29,bVar29));
  auVar33 = pshuflw(auVar33,auVar33,0);
  bVar8 = false;
  lVar26 = 0;
  do {
    uVar17 = uVar17 & uVar13;
    auVar30 = *(undefined1 (*) [16])(*pauVar28 + uVar17);
    auVar38[0] = -(auVar30[0] == auVar33[0]);
    auVar38[1] = -(auVar30[1] == auVar33[1]);
    auVar38[2] = -(auVar30[2] == auVar33[2]);
    auVar38[3] = -(auVar30[3] == auVar33[3]);
    auVar38[4] = -(auVar30[4] == auVar33[4]);
    auVar38[5] = -(auVar30[5] == auVar33[5]);
    auVar38[6] = -(auVar30[6] == auVar33[6]);
    auVar38[7] = -(auVar30[7] == auVar33[7]);
    auVar38[8] = -(auVar30[8] == auVar33[0]);
    auVar38[9] = -(auVar30[9] == auVar33[1]);
    auVar38[10] = -(auVar30[10] == auVar33[2]);
    auVar38[0xb] = -(auVar30[0xb] == auVar33[3]);
    auVar38[0xc] = -(auVar30[0xc] == auVar33[4]);
    auVar38[0xd] = -(auVar30[0xd] == auVar33[5]);
    bVar29 = auVar30[0xf];
    auVar38[0xe] = -(auVar30[0xe] == auVar33[6]);
    auVar38[0xf] = -(bVar29 == auVar33[7]);
    uVar11 = (ushort)(SUB161(auVar38 >> 7,0) & 1) | (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
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
             (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe | (ushort)(auVar38[0xf] >> 7) << 0xf;
    uVar22 = (uint)uVar11;
    while (uVar11 != 0) {
      uVar15 = 0;
      for (uVar7 = uVar22; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar15 = uVar15 + 1;
      }
      uVar27 = uVar15 + uVar17 & uVar13;
      if (iVar12 == *(int *)pauVar28[uVar27 * -2 + -2]) {
        lVar26 = *(longlong *)(pauVar28[uVar27 * -2 + -2] + 8);
        *(undefined8 *)(pauVar28[uVar27 * -2 + -1] + 8) = local_118;
        *(undefined8 *)(pauVar28[uVar27 * -2 + -2] + 8) = local_128;
        *(undefined8 *)pauVar28[uVar27 * -2 + -1] = uStack_120;
        if (lVar26 - 1U < 0xfffffffffffffffe) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar18,1);
        }
        goto LAB_004885e5;
      }
      uVar11 = (ushort)(uVar22 - 1) & (ushort)uVar22;
      uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar11);
    }
    if (bVar8) {
LAB_00488508:
      auVar35[0] = -(auVar30[0] == -1);
      auVar35[1] = -(auVar30[1] == -1);
      auVar35[2] = -(auVar30[2] == -1);
      auVar35[3] = -(auVar30[3] == -1);
      auVar35[4] = -(auVar30[4] == -1);
      auVar35[5] = -(auVar30[5] == -1);
      auVar35[6] = -(auVar30[6] == -1);
      auVar35[7] = -(auVar30[7] == 0xff);
      auVar35[8] = -(auVar30[8] == -1);
      auVar35[9] = -(auVar30[9] == -1);
      auVar35[10] = -(auVar30[10] == -1);
      auVar35[0xb] = -(auVar30[0xb] == -1);
      auVar35[0xc] = -(auVar30[0xc] == -1);
      auVar35[0xd] = -(auVar30[0xd] == -1);
      auVar35[0xe] = -(auVar30[0xe] == -1);
      auVar35[0xf] = -(bVar29 == 0xff);
      if ((((((((((((((((SUB161(auVar35 >> 7,0) & 1) != 0 || (SUB161(auVar35 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar35 >> 0x17,0) & 1) != 0) || (SUB161(auVar35 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar35 >> 0x27,0) & 1) != 0) || (SUB161(auVar35 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar35 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar35 >> 0x3f,0) & 1) != 0) || (SUB161(auVar35 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar35 >> 0x4f,0) & 1) != 0) || (SUB161(auVar35 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar35 >> 0x5f,0) & 1) != 0) || (SUB161(auVar35 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar35 >> 0x6f,0) & 1) != 0) || (SUB161(auVar35 >> 0x77,0) & 1) != 0) ||
          auVar35[0xf] < '\0') goto LAB_00488569;
      bVar8 = true;
    }
    else {
      uVar11 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe | (ushort)(bVar29 >> 7) << 0xf;
      if (uVar11 != 0) {
        uVar22 = 0;
        for (uVar15 = (uint)uVar11; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
          uVar22 = uVar22 + 1;
        }
        plVar24 = (longlong *)(uVar22 + uVar17 & uVar13);
        goto LAB_00488508;
      }
      bVar8 = false;
      plVar24 = (longlong *)0x0;
    }
    uVar17 = uVar17 + lVar26 + 0x10;
    lVar26 = lVar26 + 0x10;
  } while( true );
LAB_0048836a:
  uVar13 = uVar13 & uVar17;
  auVar30 = *(undefined1 (*) [16])(lVar26 + uVar13);
  auVar37[0] = -(auVar30[0] == auVar33[0]);
  auVar37[1] = -(auVar30[1] == auVar33[1]);
  auVar37[2] = -(auVar30[2] == auVar33[2]);
  auVar37[3] = -(auVar30[3] == auVar33[3]);
  auVar37[4] = -(auVar30[4] == auVar33[4]);
  auVar37[5] = -(auVar30[5] == auVar33[5]);
  auVar37[6] = -(auVar30[6] == auVar33[6]);
  auVar37[7] = -(auVar30[7] == auVar33[7]);
  auVar37[8] = -(auVar30[8] == auVar33[0]);
  auVar37[9] = -(auVar30[9] == auVar33[1]);
  auVar37[10] = -(auVar30[10] == auVar33[2]);
  auVar37[0xb] = -(auVar30[0xb] == auVar33[3]);
  auVar37[0xc] = -(auVar30[0xc] == auVar33[4]);
  auVar37[0xd] = -(auVar30[0xd] == auVar33[5]);
  auVar37[0xe] = -(auVar30[0xe] == auVar33[6]);
  auVar37[0xf] = -(auVar30[0xf] == auVar33[7]);
  uVar11 = (ushort)(SUB161(auVar37 >> 7,0) & 1) | (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
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
           (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe | (ushort)(auVar37[0xf] >> 7) << 0xf;
  uVar22 = (uint)uVar11;
  if (uVar11 != 0) {
LAB_00488384:
    uVar15 = 0;
    for (uVar7 = uVar22; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar15 = uVar15 + 1;
    }
    uVar18 = uVar15 + uVar13 & uVar17;
    lVar20 = lVar26 + uVar18 * -0x20;
    if (iVar12 != *(int *)(lVar20 + -0x20)) goto code_r0x004883a1;
    uVar17 = uVar18 - 0x10 & uVar17;
    pcVar1 = (char *)(lVar26 + uVar17);
    auVar30[0] = -(*pcVar1 == -1);
    auVar30[1] = -(pcVar1[1] == -1);
    auVar30[2] = -(pcVar1[2] == -1);
    auVar30[3] = -(pcVar1[3] == -1);
    auVar30[4] = -(pcVar1[4] == -1);
    auVar30[5] = -(pcVar1[5] == -1);
    auVar30[6] = -(pcVar1[6] == -1);
    auVar30[7] = -(pcVar1[7] == -1);
    auVar30[8] = -(pcVar1[8] == -1);
    auVar30[9] = -(pcVar1[9] == -1);
    auVar30[10] = -(pcVar1[10] == -1);
    auVar30[0xb] = -(pcVar1[0xb] == -1);
    auVar30[0xc] = -(pcVar1[0xc] == -1);
    auVar30[0xd] = -(pcVar1[0xd] == -1);
    auVar30[0xe] = -(pcVar1[0xe] == -1);
    auVar30[0xf] = -(pcVar1[0xf] == -1);
    uVar5 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
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
            (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe | (ushort)(auVar30[0xf] >> 7) << 0xf;
    pcVar1 = (char *)(lVar26 + uVar18);
    auVar32[0] = -(*pcVar1 == -1);
    auVar32[1] = -(pcVar1[1] == -1);
    auVar32[2] = -(pcVar1[2] == -1);
    auVar32[3] = -(pcVar1[3] == -1);
    auVar32[4] = -(pcVar1[4] == -1);
    auVar32[5] = -(pcVar1[5] == -1);
    auVar32[6] = -(pcVar1[6] == -1);
    auVar32[7] = -(pcVar1[7] == -1);
    auVar32[8] = -(pcVar1[8] == -1);
    auVar32[9] = -(pcVar1[9] == -1);
    auVar32[10] = -(pcVar1[10] == -1);
    auVar32[0xb] = -(pcVar1[0xb] == -1);
    auVar32[0xc] = -(pcVar1[0xc] == -1);
    auVar32[0xd] = -(pcVar1[0xd] == -1);
    auVar32[0xe] = -(pcVar1[0xe] == -1);
    auVar32[0xf] = -(pcVar1[0xf] == -1);
    uVar11 = 0xf;
    if (uVar5 != 0) {
      for (; uVar5 >> uVar11 == 0; uVar11 = uVar11 - 1) {
      }
    }
    sVar6 = 0;
    for (uVar22 = (ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
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
                          (ushort)(auVar32[0xf] >> 7) << 0xf) | 0x10000; (uVar22 & 1) == 0;
        uVar22 = uVar22 >> 1 | 0x80000000) {
      sVar6 = sVar6 + 1;
    }
    uVar19 = 0x80;
    if ((ushort)(sVar6 + (uVar11 ^ 0xf)) < 0x10) {
      param_2[0xb] = param_2[0xb] + 1;
      uVar19 = 0xff;
    }
    *(undefined1 *)(lVar26 + uVar18) = uVar19;
    *(undefined1 *)(lVar26 + 0x10 + uVar17) = uVar19;
    param_2[0xc] = param_2[0xc] + -1;
    puVar9 = (undefined8 *)CONCAT44(local_178._4_4_,(int)local_178);
    if (*(longlong *)(lVar20 + -0x18) - 1U < 0xfffffffffffffffe) {
      (*(code *)PTR___rust_dealloc_00798fc8)(lVar26,1);
      puVar9 = (undefined8 *)CONCAT44(local_178._4_4_,(int)local_178);
    }
    goto LAB_00488443;
  }
LAB_004883ae:
  auVar34[0] = -(auVar30[0] == -1);
  auVar34[1] = -(auVar30[1] == -1);
  auVar34[2] = -(auVar30[2] == -1);
  auVar34[3] = -(auVar30[3] == -1);
  auVar34[4] = -(auVar30[4] == -1);
  auVar34[5] = -(auVar30[5] == -1);
  auVar34[6] = -(auVar30[6] == -1);
  auVar34[7] = -(auVar30[7] == -1);
  auVar34[8] = -(auVar30[8] == -1);
  auVar34[9] = -(auVar30[9] == -1);
  auVar34[10] = -(auVar30[10] == -1);
  auVar34[0xb] = -(auVar30[0xb] == -1);
  auVar34[0xc] = -(auVar30[0xc] == -1);
  auVar34[0xd] = -(auVar30[0xd] == -1);
  auVar34[0xe] = -(auVar30[0xe] == -1);
  auVar34[0xf] = -(auVar30[0xf] == -1);
  puVar9 = (undefined8 *)CONCAT44(local_178._4_4_,(int)local_178);
  if ((((((((((((((((SUB161(auVar34 >> 7,0) & 1) != 0 || (SUB161(auVar34 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar34 >> 0x17,0) & 1) != 0) || (SUB161(auVar34 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar34 >> 0x27,0) & 1) != 0) || (SUB161(auVar34 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar34 >> 0x37,0) & 1) != 0) || (SUB161(auVar34 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar34 >> 0x47,0) & 1) != 0) || (SUB161(auVar34 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar34 >> 0x57,0) & 1) != 0) || (SUB161(auVar34 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar34 >> 0x67,0) & 1) != 0) || (SUB161(auVar34 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar34 >> 0x77,0) & 1) != 0) || auVar34[0xf] < '\0') goto LAB_00488443;
  uVar13 = uVar13 + lVar23 + 0x10;
  lVar23 = lVar23 + 0x10;
  goto LAB_0048836a;
code_r0x004883a1:
  uVar11 = (ushort)(uVar22 - 1) & (ushort)uVar22;
  uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar11);
  if (uVar11 == 0) goto LAB_004883ae;
  goto LAB_00488384;
LAB_00488569:
  bVar29 = (*pauVar28)[(longlong)plVar24];
  if (-1 < (char)bVar29) {
    auVar33 = *pauVar28;
    uVar22 = 0;
    for (uVar15 = (uint)(ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar33[0xf] >> 7) << 0xf); (uVar15 & 1) == 0;
        uVar15 = uVar15 >> 1 | 0x80000000) {
      uVar22 = uVar22 + 1;
    }
    plVar24 = (longlong *)(ulonglong)uVar22;
    bVar29 = (*pauVar28)[(longlong)plVar24];
  }
  local_168._4_4_ = (undefined4)local_118;
  local_160 = (undefined4)((ulonglong)local_118 >> 0x20);
  local_178._4_4_ = (undefined4)local_128;
  uStack_170 = (undefined4)((ulonglong)local_128 >> 0x20);
  uStack_16c = (undefined4)uStack_120;
  local_168._0_4_ = (undefined4)((ulonglong)uStack_120 >> 0x20);
  bVar14 = bVar14 >> 1;
  (*pauVar28)[(longlong)plVar24] = bVar14;
  pauVar28[1][(ulonglong)(plVar24 + -2) & uVar13] = bVar14;
  lVar26 = param_2[0xc] - DAT_001827f8;
  param_2[0xb] = param_2[0xb] - (ulonglong)(bVar29 & 1);
  param_2[0xc] = lVar26;
  *(int *)pauVar28[(longlong)plVar24 * -2 + -2] = iVar12;
  *(ulonglong *)(pauVar28[(longlong)plVar24 * -2 + -2] + 4) =
       CONCAT44(local_178._4_4_,(int)local_178);
  *(ulonglong *)((longlong)(pauVar28[(longlong)plVar24 * -2 + -2] + 4) + 8) =
       CONCAT44(uStack_16c,uStack_170);
  *(undefined8 *)pauVar28[(longlong)plVar24 * -2 + -1] = uStack_120;
  *(undefined8 *)(pauVar28[(longlong)plVar24 * -2 + -1] + 8) = local_118;
LAB_004885e5:
  (*(code *)PTR_clone_00798fd0)();
  <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,std[6c98fd8553dbae28]::hash::random::RandomState>>
  ::rustc_entry(&local_178,param_2 + 3,&local_128);
  puVar9 = local_178;
  pauVar28 = (undefined1 (*) [16])CONCAT44(uStack_16c,uStack_170);
  if (local_178 != (undefined8 *)0xffffffffffffffff) {
    local_110 = local_168;
    puVar21 = (undefined8 *)CONCAT44(uStack_15c,local_160);
    (*(code *)PTR_clone_00798fd0)();
    lVar26 = param_2[2];
    if (lVar26 == *param_2) {
      (*(code *)PTR_grow_one_00799328)();
    }
    lVar23 = param_2[1];
    *(int **)(lVar23 + 0x10 + lVar26 * 0x18) = local_168;
    puVar2 = (undefined8 *)(lVar23 + lVar26 * 0x18);
    *puVar2 = local_178;
    puVar2[1] = CONCAT44(uStack_16c,uStack_170);
    param_2[2] = lVar26 + 1;
    (*(code *)PTR_clone_00798fd0)();
    if (local_180 < 0) {
LAB_00488695:
      (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if (local_180 == 0) {
      local_148 = 1;
    }
    else {
      local_c8._0_8_ = puVar21;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar26 = local_180;
      uVar17 = (*(code *)PTR___rust_alloc_00799000)();
      if (uVar17 == 0) goto LAB_00488695;
      local_148 = uVar17;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_00,lVar26);
      puVar21 = (undefined8 *)local_c8._0_8_;
    }
    local_108 = CONCAT44(local_108._4_4_,local_184);
    (*(code *)PTR_clone_00798fd0)();
    (*(code *)PTR_clone_00798fd0)();
    local_88 = local_d0;
    local_98 = CONCAT44(uStack_dc,local_e0);
    uStack_90 = uStack_d8;
    uStack_80 = local_128;
    uStack_78 = uStack_120;
    uStack_70 = local_118;
    local_68 = local_178;
    uStack_60 = CONCAT44(uStack_16c,uStack_170);
    local_58 = local_168;
    pauVar3 = (undefined1 (*) [16])*puVar21;
    uVar17 = puVar21[1];
    uVar13 = uVar17 & local_158;
    auVar33 = *(undefined1 (*) [16])(*pauVar3 + uVar13);
    uVar11 = (ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
             (ushort)(byte)(auVar33[0xf] >> 7) << 0xf;
    uVar22 = (uint)uVar11;
    if (uVar11 == 0) {
      lVar26 = 0x10;
      do {
        uVar13 = uVar13 + lVar26 & uVar17;
        auVar33 = *(undefined1 (*) [16])(*pauVar3 + uVar13);
        lVar26 = lVar26 + 0x10;
        uVar22 = (uint)(ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar33[0xf] >> 7) << 0xf);
      } while (uVar22 == 0);
    }
    uVar15 = 0;
    for (; (uVar22 & 1) == 0; uVar22 = uVar22 >> 1 | 0x80000000) {
      uVar15 = uVar15 + 1;
    }
    uVar13 = uVar15 + uVar13 & uVar17;
    bVar14 = (*pauVar3)[uVar13];
    if (-1 < (char)bVar14) {
      auVar33 = *pauVar3;
      uVar22 = 0;
      for (uVar15 = (uint)(ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar33[0xf] >> 7) << 0xf); (uVar15 & 1) == 0;
          uVar15 = uVar15 >> 1 | 0x80000000) {
        uVar22 = uVar22 + 1;
      }
      uVar13 = (ulonglong)uVar22;
      bVar14 = (*pauVar3)[uVar13];
    }
    bVar29 = (byte)(local_158 >> 0x39);
    (*pauVar3)[uVar13] = bVar29;
    pauVar3[1][uVar13 - 0x10 & uVar17] = bVar29;
    puVar21[2] = puVar21[2] - (ulonglong)(bVar14 & 1);
    *(undefined8 **)pauVar3[uVar13 * -0xe + -0xe] = puVar9;
    *(undefined1 (**) [16])(pauVar3[uVar13 * -0xe + -0xe] + 8) = pauVar28;
    pauVar28 = pauVar3 + uVar13 * -0xe;
    *(int **)pauVar3[uVar13 * -0xe + -0xd] = local_110;
    *(undefined8 *)(pauVar3[uVar13 * -0xe + -0xd] + 8) = local_98;
    *(undefined8 *)((longlong)(pauVar3[uVar13 * -0xe + -0xd] + 8) + 8) = uStack_d8;
    *(undefined8 *)(pauVar3[uVar13 * -0xe + -0xc] + 8) = local_d0;
    *(undefined8 *)((longlong)(pauVar3[uVar13 * -0xe + -0xc] + 8) + 8) = local_128;
    *(undefined8 *)(pauVar3[uVar13 * -0xe + -0xb] + 8) = uStack_120;
    *(undefined8 *)((longlong)(pauVar3[uVar13 * -0xe + -0xb] + 8) + 8) = local_118;
    *(undefined8 **)(pauVar3[uVar13 * -0xe + -10] + 8) = local_178;
    *(undefined8 *)((longlong)(pauVar3[uVar13 * -0xe + -10] + 8) + 8) = uStack_60;
    *(int **)(pauVar3[uVar13 * -0xe + -9] + 8) = local_168;
    *(undefined8 *)pauVar3[uVar13 * -0xe + -8] = 0xffffffffffffffff;
    *(longlong *)(pauVar3[uVar13 * -0xe + -7] + 8) = local_180;
    *(ulonglong *)pauVar3[uVar13 * -0xe + -6] = local_148;
    *(longlong *)(pauVar3[uVar13 * -0xe + -6] + 8) = local_180;
    *(undefined8 *)pauVar3[uVar13 * -0xe + -5] = 0xffffffffffffffff;
    *(undefined8 *)(pauVar3[uVar13 * -0xe + -4] + 8) = 0xffffffffffffffff;
    *(undefined4 *)pauVar3[uVar13 * -0xe + -2] = 1;
    *(undefined4 *)(pauVar3[uVar13 * -0xe + -2] + 4) = (undefined4)local_108;
    *(undefined1 (*) [16])(pauVar3[uVar13 * -0xe + -2] + 8) = (undefined1  [16])0x0;
    pauVar3[uVar13 * -0xe + -1][8] = 0;
    puVar21[3] = puVar21[3] + 1;
  }
  *(undefined4 *)pauVar28[-2] = 1;
  *(int *)(pauVar28[-2] + 4) = local_184;
  pauVar28[-1][8] = 0;
  local_168._0_4_ = local_f8._16_4_;
  local_168._4_4_ = local_f8._20_4_;
  local_178._0_4_ = local_f8._0_4_;
  local_178._4_4_ = local_f8._4_4_;
  uStack_170 = local_f8._8_4_;
  uStack_16c = local_f8._12_4_;
  if (*(longlong *)(pauVar28[-10] + 8) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(ulonglong *)(pauVar28[-9] + 8) = CONCAT44(local_168._4_4_,(undefined4)local_168);
  *(ulonglong *)(pauVar28[-10] + 8) = CONCAT44(local_178._4_4_,(int)local_178);
  *(ulonglong *)pauVar28[-9] = CONCAT44(uStack_16c,uStack_170);
  evict_if_needed(param_2);
  local_100[2] = local_130;
  *local_100 = local_140;
  local_100[1] = lStack_138;
  return;
}


