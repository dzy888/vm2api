// 006ae340 encode

/* WARNING: Removing unreachable block (ram,0x006ae8bc) */
/* WARNING: Removing unreachable block (ram,0x006b0b51) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <hyper[c4782d5b5c5e3493]::proto::h1::role::Server as
   hyper[c4782d5b5c5e3493]::proto::h1::Http1Transaction>::encode */

undefined8 * __rustcall
<hyper[c4782d5b5c5e3493]::proto::h1::role::Server_as_hyper[c4782d5b5c5e3493]::proto::h1::Http1Transaction>
::encode(undefined8 *param_1,ulonglong *param_2,longlong *param_3,undefined8 param_4,
        ushort *******param_5)

{
  char *pcVar1;
  short sVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  code *pcVar8;
  uint uVar9;
  undefined1 uVar10;
  bool bVar11;
  undefined4 uVar12;
  char cVar13;
  char cVar14;
  uint uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  undefined1 (*pauVar21) [16];
  ushort *******pppppppuVar22;
  ushort *******pppppppuVar23;
  ulonglong uVar24;
  longlong lVar25;
  undefined4 *puVar26;
  ushort *******extraout_RDX;
  ushort *******extraout_RDX_00;
  ulonglong extraout_RDX_01;
  ushort *******pppppppuVar27;
  ushort *******pppppppuVar28;
  char *pcVar29;
  ulonglong uVar30;
  ushort uVar31;
  int iVar32;
  ushort *******pppppppuVar33;
  byte unaff_R15B;
  bool bVar34;
  ushort *******pppppppuVar35;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  ushort *******extraout_XMM0_Qa_06;
  undefined8 uVar36;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined8 extraout_XMM0_Qb_07;
  undefined8 extraout_XMM0_Qb_08;
  undefined8 extraout_XMM0_Qb_09;
  undefined8 extraout_XMM0_Qb_10;
  undefined1 auVar37 [16];
  undefined8 extraout_XMM0_Qb_11;
  undefined8 extraout_XMM0_Qb_12;
  undefined8 extraout_XMM0_Qb_13;
  undefined8 extraout_XMM0_Qb_14;
  undefined8 extraout_XMM0_Qb_15;
  undefined8 extraout_XMM0_Qb_16;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar47 [16];
  undefined1 auVar46 [16];
  undefined1 auVar45 [16];
  undefined1 auVar44 [16];
  undefined1 auVar43 [16];
  undefined1 auVar42 [16];
  undefined1 auVar41 [16];
  undefined1 auVar40 [16];
  byte bVar48;
  char cVar53;
  byte bVar52;
  char cVar55;
  byte bVar54;
  char cVar57;
  byte bVar56;
  char cVar59;
  byte bVar58;
  char cVar61;
  byte bVar60;
  char cVar63;
  byte bVar62;
  byte bVar64;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  undefined1 auVar68 [16];
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  byte local_289;
  longlong local_288;
  ushort *******local_268;
  ushort *******pppppppuStack_260;
  ushort *******local_258;
  undefined8 uStack_250;
  ushort *******local_240;
  undefined8 local_238;
  ulonglong local_230;
  undefined1 local_228 [16];
  ushort *******local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  ushort *******local_200;
  longlong local_1f8;
  char *local_1f0;
  undefined1 local_1e8 [16];
  ushort *******local_1d8;
  ulonglong *local_1c8;
  undefined8 *local_1c0;
  undefined4 local_1b8;
  undefined3 uStack_1b4;
  ushort *******local_1b0;
  undefined8 *local_1a8;
  ushort *******local_1a0;
  ushort *******pppppppuStack_198;
  ushort *******local_190;
  ushort *******pppppppuStack_188;
  longlong local_180;
  ushort *******local_178;
  undefined8 *local_170;
  ushort *******local_168;
  undefined8 *local_160;
  ulonglong local_158;
  undefined4 local_150;
  undefined3 uStack_14c;
  ushort *******local_148;
  ushort *******pppppppuStack_140;
  ushort *******local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  ushort *******pppppppuStack_120;
  ushort *******local_118;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined2 local_108;
  undefined6 uStack_106;
  ulonglong local_100;
  longlong *local_f8;
  ulonglong local_f0;
  undefined1 local_e8 [16];
  ushort *******local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ushort *******local_b8;
  ushort *******local_b0;
  ushort *******pppppppuStack_a8;
  ushort *******local_a0;
  undefined8 *******local_98;
  undefined *local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined2 local_40;
  
  puVar3 = (undefined8 *)param_2[2];
  sVar2 = *(short *)(puVar3 + 0xd);
  local_1c8 = param_2;
  local_160 = param_1;
  if (sVar2 == 0x65) {
    local_289 = 1;
LAB_006ae377:
    local_1c0 = (undefined8 *)0x0;
LAB_006ae383:
    cVar14 = '\0';
LAB_006ae3cb:
    local_230 = param_3[2];
    uVar24 = (puVar3[8] + puVar3[5]) * 0x1e + 0x1e;
    if (*param_3 - local_230 < uVar24) {
      param_5 = (ushort *******)0x1;
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(param_3,local_230,uVar24,1);
    }
    plVar4 = (longlong *)puVar3[0xc];
    if ((plVar4 == (longlong *)0x0) || (plVar4[3] == 0)) {
      lVar18 = 0;
      cVar13 = *(char *)((longlong)puVar3 + 0x6a);
      if (cVar13 != '\x02') goto LAB_006ae4c5;
LAB_006ae655:
      pppppppuVar27 = (ushort *******)param_3[2];
      if ((lVar18 != 0) || (*(short *)(puVar3 + 0xd) != 200)) {
        if ((ulonglong)(*param_3 - (longlong)pppppppuVar27) < 9) {
          param_5 = (ushort *******)0x1;
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(param_3,pppppppuVar27,9,1);
LAB_006b0c80:
          pppppppuVar27 = (ushort *******)param_3[2];
        }
LAB_006ae6a8:
        lVar25 = param_3[1];
        uVar36 = 0x312e312f50545448;
        goto LAB_006ae6b7;
      }
      if ((ulonglong)(*param_3 - (longlong)pppppppuVar27) < 0x11) {
        param_5 = (ushort *******)0x1;
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(param_3,pppppppuVar27,0x11,1);
        pppppppuVar27 = (ushort *******)param_3[2];
      }
      uVar36 = _UNK_001a5cbd;
      lVar18 = param_3[1];
      pcVar29 = (char *)(lVar18 + (longlong)pppppppuVar27);
      *(undefined8 *)pcVar29 = _DAT_001a5cb5;
      *(undefined8 *)(pcVar29 + 8) = uVar36;
      *(char *)(lVar18 + 0x10 + (longlong)pppppppuVar27) = '\n';
      lVar18 = 0x11;
    }
    else {
      lVar25 = 0;
      uVar24 = 0xc7c61d7cb2ae9e0b;
      while( true ) {
        uVar24 = uVar24 & plVar4[1];
        auVar37 = *(undefined1 (*) [16])(*plVar4 + uVar24);
        auVar38[0] = -(auVar37[0] == DAT_001847e0);
        auVar38[1] = -(auVar37[1] == DAT_001847e0._1_1_);
        auVar38[2] = -(auVar37[2] == DAT_001847e0._2_1_);
        auVar38[3] = -(auVar37[3] == DAT_001847e0._3_1_);
        auVar38[4] = -(auVar37[4] == DAT_001847e0._4_1_);
        auVar38[5] = -(auVar37[5] == DAT_001847e0._5_1_);
        auVar38[6] = -(auVar37[6] == DAT_001847e0._6_1_);
        auVar38[7] = -(auVar37[7] == DAT_001847e0._7_1_);
        auVar38[8] = -(auVar37[8] == DAT_001847e0._8_1_);
        auVar38[9] = -(auVar37[9] == DAT_001847e0._9_1_);
        auVar38[10] = -(auVar37[10] == DAT_001847e0._10_1_);
        auVar38[0xb] = -(auVar37[0xb] == DAT_001847e0._11_1_);
        auVar38[0xc] = -(auVar37[0xc] == DAT_001847e0._12_1_);
        auVar38[0xd] = -(auVar37[0xd] == DAT_001847e0._13_1_);
        auVar38[0xe] = -(auVar37[0xe] == DAT_001847e0._14_1_);
        auVar38[0xf] = -(auVar37[0xf] == DAT_001847e0._15_1_);
        uVar31 = (ushort)(SUB161(auVar38 >> 7,0) & 1) | (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe | (ushort)(auVar38[0xf] >> 7) << 0xf
        ;
        uVar20 = (uint)uVar31;
        while (uVar31 != 0) {
          uVar15 = 0;
          for (uVar9 = uVar20; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
            uVar15 = uVar15 + 1;
          }
          param_5 = (ushort *******)(*plVar4 + (uVar15 + uVar24 & plVar4[1]) * -0x20);
          if (param_5[-4] == (ushort ******)0x90f29d91ee136174 &&
              param_5[-3] == (ushort ******)0xc7c61d7cb2ae9e0b) {
            lVar17 = (*(code *)param_5[-1][5])();
            (**(code **)(lVar25 + 0x18))();
            lVar18 = 0;
            if (local_90 == (undefined *)0xc7c61d7cb2ae9e0b &&
                local_98 == (undefined8 *******)0x90f29d91ee136174) {
              lVar18 = lVar17;
            }
            goto LAB_006ae644;
          }
          uVar31 = (ushort)(uVar20 - 1) & (ushort)uVar20;
          uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar31);
          param_5 = (ushort *******)(ulonglong)uVar20;
        }
        auVar49[0] = -(auVar37[0] == -1);
        auVar49[1] = -(auVar37[1] == -1);
        auVar49[2] = -(auVar37[2] == -1);
        auVar49[3] = -(auVar37[3] == -1);
        auVar49[4] = -(auVar37[4] == -1);
        auVar49[5] = -(auVar37[5] == -1);
        auVar49[6] = -(auVar37[6] == -1);
        auVar49[7] = -(auVar37[7] == -1);
        auVar49[8] = -(auVar37[8] == -1);
        auVar49[9] = -(auVar37[9] == -1);
        auVar49[10] = -(auVar37[10] == -1);
        auVar49[0xb] = -(auVar37[0xb] == -1);
        auVar49[0xc] = -(auVar37[0xc] == -1);
        auVar49[0xd] = -(auVar37[0xd] == -1);
        auVar49[0xe] = -(auVar37[0xe] == -1);
        auVar49[0xf] = -(auVar37[0xf] == -1);
        lVar18 = 0;
        if ((((((((((((((((SUB161(auVar49 >> 7,0) & 1) != 0 || (SUB161(auVar49 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar49 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar49 >> 0x1f,0) & 1) != 0) || (SUB161(auVar49 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar49 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar49 >> 0x37,0) & 1) != 0) || (SUB161(auVar49 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar49 >> 0x47,0) & 1) != 0) || (SUB161(auVar49 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar49 >> 0x57,0) & 1) != 0) || (SUB161(auVar49 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar49 >> 0x67,0) & 1) != 0) || (SUB161(auVar49 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar49 >> 0x77,0) & 1) != 0) || auVar49[0xf] < '\0') break;
        uVar24 = uVar24 + lVar25 + 0x10;
        lVar25 = lVar25 + 0x10;
      }
LAB_006ae644:
      cVar13 = *(char *)((longlong)puVar3 + 0x6a);
      if (cVar13 == '\x02') goto LAB_006ae655;
LAB_006ae4c5:
      if (cVar13 != '\x01') {
        if (cVar13 != '\x03') {
          local_148 = (ushort *******)CONCAT71(local_148._1_7_,cVar13);
          local_98 = &local_148;
          local_90 = PTR_fmt_0079a480;
          (*(code *)PTR_panic_fmt_007991a8)();
LAB_006b0ea7:
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        pppppppuVar27 = (ushort *******)param_3[2];
        if ((ulonglong)(*param_3 - (longlong)pppppppuVar27) < 9) {
          param_5 = (ushort *******)0x1;
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(param_3,pppppppuVar27,9,1);
          goto LAB_006b0c80;
        }
        goto LAB_006ae6a8;
      }
      pppppppuVar27 = (ushort *******)param_3[2];
      if ((ulonglong)(*param_3 - (longlong)pppppppuVar27) < 9) {
        param_5 = (ushort *******)0x1;
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(param_3,pppppppuVar27,9,1);
        pppppppuVar27 = (ushort *******)param_3[2];
      }
      lVar25 = param_3[1];
      uVar36 = 0x302e312f50545448;
LAB_006ae6b7:
      *(undefined8 *)(lVar25 + (longlong)pppppppuVar27) = uVar36;
      *(char *)(lVar25 + 8 + (longlong)pppppppuVar27) = ' ';
      lVar25 = param_3[2] + 9;
      param_3[2] = lVar25;
      sVar2 = *(short *)(puVar3 + 0xd);
      if ((ulonglong)(*param_3 - lVar25) < 3) {
        param_5 = (ushort *******)0x1;
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(param_3,lVar25,3,1);
        lVar25 = param_3[2];
      }
      lVar17 = (ulonglong)(ushort)(sVar2 - 100) * 3;
      uVar24 = param_3[1];
      *(undefined *)(uVar24 + 2 + lVar25) = (&DAT_001a5cc8)[lVar17];
      *(undefined2 *)(uVar24 + lVar25) = *(undefined2 *)(&DAT_001a5cc6 + lVar17);
      lVar25 = param_3[2] + 3;
      param_3[2] = lVar25;
      if (*param_3 == lVar25) {
        param_5 = (ushort *******)0x1;
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(param_3,lVar25,1,1);
        lVar25 = param_3[2];
        uVar24 = extraout_RDX_01;
      }
      *(undefined1 *)(param_3[1] + lVar25) = 0x20;
      lVar25 = param_3[2] + 1;
      param_3[2] = lVar25;
      if (lVar18 == 0) {
        lVar18 = (*(code *)PTR_canonical_reason_0079a478)();
        if (lVar18 == 0) {
          uVar24 = 6;
        }
        lVar25 = param_3[2];
        if (uVar24 <= (ulonglong)(*param_3 - lVar25)) goto LAB_006ae7a9;
        param_5 = (ushort *******)0x1;
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(param_3,lVar25,uVar24,1);
LAB_006ae7ae:
        (*(code *)PTR_memcpy_00799008)();
        lVar25 = param_3[2];
      }
      else {
        uVar24 = *(ulonglong *)(lVar18 + 0x10);
        if ((ulonglong)(*param_3 - lVar25) < uVar24) {
          param_5 = (ushort *******)0x1;
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(param_3,lVar25,uVar24,1);
          goto LAB_006ae7ae;
        }
LAB_006ae7a9:
        if (uVar24 != 0) goto LAB_006ae7ae;
      }
      pppppppuVar27 = (ushort *******)(lVar25 + uVar24);
      param_3[2] = (longlong)pppppppuVar27;
      if ((ulonglong)(*param_3 - (longlong)pppppppuVar27) < 2) {
        param_5 = (ushort *******)0x1;
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(param_3,pppppppuVar27,2,1);
        pppppppuVar27 = (ushort *******)param_3[2];
      }
      lVar18 = param_3[1];
      ((char *)(lVar18 + (longlong)pppppppuVar27))[0] = '\r';
      ((char *)(lVar18 + (longlong)pppppppuVar27))[1] = '\n';
      lVar18 = 2;
    }
    pppppppuVar33 = (ushort *******)(puVar3 + 0xd);
    param_3[2] = param_3[2] + lVar18;
    local_f8 = (longlong *)puVar3[0xc];
    puVar3[0xc] = 0;
    if ((local_f8 == (longlong *)0x0) || (local_f8[3] == 0)) {
      pppppppuVar35 = (ushort *******)0x0;
LAB_006ae90f:
      if (*(char *)((longlong)local_1c8 + 0x21) == '\0') goto LAB_006ae9e9;
      local_70 = (undefined1  [16])0x0;
      local_98 = (undefined8 *******)0x0;
      local_80 = 0;
      local_78 = 8;
      local_60 = 8;
      local_58 = 0;
      local_50 = 2;
      local_48 = 0;
      local_40 = 0;
      pppppppuVar35 = (ushort *******)&local_98;
      uVar10 = true;
    }
    else {
      uVar24 = local_f8[1];
      pppppppuVar27 = (ushort *******)0x0;
      pcVar29 = (char *)0x58ca4e7e8c5508c3;
      while( true ) {
        uVar30 = (ulonglong)pcVar29 & uVar24;
        auVar37 = *(undefined1 (*) [16])(*local_f8 + uVar30);
        auVar65[0] = -(auVar37[0] == DAT_00183ef0);
        auVar65[1] = -(auVar37[1] == DAT_00183ef0._1_1_);
        auVar65[2] = -(auVar37[2] == DAT_00183ef0._2_1_);
        auVar65[3] = -(auVar37[3] == DAT_00183ef0._3_1_);
        auVar65[4] = -(auVar37[4] == DAT_00183ef0._4_1_);
        auVar65[5] = -(auVar37[5] == DAT_00183ef0._5_1_);
        auVar65[6] = -(auVar37[6] == DAT_00183ef0._6_1_);
        auVar65[7] = -(auVar37[7] == DAT_00183ef0._7_1_);
        auVar65[8] = -(auVar37[8] == DAT_00183ef0._8_1_);
        auVar65[9] = -(auVar37[9] == DAT_00183ef0._9_1_);
        auVar65[10] = -(auVar37[10] == DAT_00183ef0._10_1_);
        auVar65[0xb] = -(auVar37[0xb] == DAT_00183ef0._11_1_);
        auVar65[0xc] = -(auVar37[0xc] == DAT_00183ef0._12_1_);
        auVar65[0xd] = -(auVar37[0xd] == DAT_00183ef0._13_1_);
        auVar65[0xe] = -(auVar37[0xe] == DAT_00183ef0._14_1_);
        auVar65[0xf] = -(auVar37[0xf] == DAT_00183ef0._15_1_);
        uVar31 = (ushort)(SUB161(auVar65 >> 7,0) & 1) | (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar65 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar65 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar65 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar65 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar65 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar65 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar65 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar65 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar65 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar65 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar65 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar65 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe | (ushort)(auVar65[0xf] >> 7) << 0xf
        ;
        param_5 = (ushort *******)(ulonglong)uVar31;
        while (uVar31 != 0) {
          uVar20 = 0;
          for (uVar15 = (uint)param_5; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
            uVar20 = uVar20 + 1;
          }
          lVar18 = *local_f8 + (uVar20 + uVar30 & uVar24) * -0x20;
          if (*(longlong *)(lVar18 + -0x20) == 0x6b4ed4c9e9772fff &&
              *(longlong *)(lVar18 + -0x18) == 0x58ca4e7e8c5508c3) {
            pppppppuVar27 = (ushort *******)(**(code **)(*(longlong *)(lVar18 + -8) + 0x28))();
            (**(code **)(uVar24 + 0x18))();
            pppppppuVar35 = (ushort *******)0x0;
            if (pppppppuStack_140 == (ushort *******)0x58ca4e7e8c5508c3 &&
                local_148 == (ushort *******)0x6b4ed4c9e9772fff) {
              pppppppuVar35 = pppppppuVar27;
            }
            goto LAB_006ae906;
          }
          iVar32 = (uint)param_5 - 1;
          uVar31 = (ushort)iVar32 & (ushort)param_5;
          param_5 = (ushort *******)(ulonglong)CONCAT22((short)((uint)iVar32 >> 0x10),uVar31);
        }
        auVar50[0] = -(auVar37[0] == -1);
        auVar50[1] = -(auVar37[1] == -1);
        auVar50[2] = -(auVar37[2] == -1);
        auVar50[3] = -(auVar37[3] == -1);
        auVar50[4] = -(auVar37[4] == -1);
        auVar50[5] = -(auVar37[5] == -1);
        auVar50[6] = -(auVar37[6] == -1);
        auVar50[7] = -(auVar37[7] == -1);
        auVar50[8] = -(auVar37[8] == -1);
        auVar50[9] = -(auVar37[9] == -1);
        auVar50[10] = -(auVar37[10] == -1);
        auVar50[0xb] = -(auVar37[0xb] == -1);
        auVar50[0xc] = -(auVar37[0xc] == -1);
        auVar50[0xd] = -(auVar37[0xd] == -1);
        auVar50[0xe] = -(auVar37[0xe] == -1);
        auVar50[0xf] = -(auVar37[0xf] == -1);
        uVar31 = (ushort)(SUB161(auVar50 >> 7,0) & 1) | (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe | (ushort)(auVar50[0xf] >> 7) << 0xf
        ;
        param_5 = (ushort *******)(ulonglong)uVar31;
        pppppppuVar35 = (ushort *******)0x0;
        if (uVar31 != 0) break;
        pcVar29 = (char *)((longlong)pppppppuVar27 + uVar30 + 0x10);
        pppppppuVar27 = pppppppuVar27 + 2;
      }
LAB_006ae906:
      if (pppppppuVar35 == (ushort *******)0x0) goto LAB_006ae90f;
LAB_006ae9e9:
      uVar6 = _UNK_00182648;
      uVar36 = _DAT_00182640;
      if (pppppppuVar35 == (ushort *******)0x0) {
        local_268 = (ushort *******)0x8000000000000000;
        pppppppuStack_260 = (ushort *******)0x0;
        uStack_250 = (ushort *******)((ulonglong)uStack_250 & 0xffffffffffffff00);
        local_1e8._0_8_ = 0xffffffffffffffff;
        lVar18 = puVar3[10];
        if (lVar18 != 0) {
          puVar5 = (undefined4 *)puVar3[9];
          pppppppuVar27 = (ushort *******)(lVar18 * 4 + -4);
          puVar26 = puVar5;
          if (&DAT_0000001b < pppppppuVar27) {
            pppppppuVar27 = (ushort *******)(((ulonglong)pppppppuVar27 >> 2) + 1);
            pppppppuVar35 = (ushort *******)((ulonglong)pppppppuVar27 & 0x7ffffffffffffff8);
            puVar26 = puVar5 + (longlong)pppppppuVar35;
            param_5 = (ushort *******)0x0;
            do {
              *(undefined8 *)(puVar5 + (longlong)param_5) = uVar36;
              *(undefined8 *)((longlong)(puVar5 + (longlong)param_5) + 8) = uVar6;
              *(undefined8 *)(puVar5 + (longlong)((longlong)param_5 + 4)) = uVar36;
              *(undefined8 *)((longlong)(puVar5 + (longlong)((longlong)param_5 + 4)) + 8) = uVar6;
              param_5 = param_5 + 1;
            } while (pppppppuVar35 != param_5);
            if (pppppppuVar27 == pppppppuVar35) goto LAB_006aea9f;
          }
          do {
            *puVar26 = 0xffff;
            puVar26 = puVar26 + 1;
          } while (puVar26 != puVar5 + lVar18);
        }
LAB_006aea9f:
        local_180 = puVar3[4];
        pppppppuStack_188 = (ushort *******)puVar3[5];
        local_170 = puVar3 + 6;
        puVar3[5] = 0;
        local_1a0 = (ushort *******)0x0;
        local_190 = (ushort *******)0x0;
        local_158 = *local_1c8;
        local_1b0 = (ushort *******)local_1c8[1];
        local_1f0 = (char *)local_1c8[3];
        unaff_R15B = 1;
        local_100 = 0;
        local_200 = (ushort *******)0x0;
        bVar11 = false;
        local_f0 = 0;
        local_1a8 = puVar3;
        local_178 = pppppppuStack_188;
        local_168 = pppppppuVar33;
LAB_006aeb63:
        if (local_190 != pppppppuStack_188) {
          pppppppuVar27 = (ushort *******)((longlong)local_190 + 1);
          if (local_190 < local_178) {
            lVar25 = (longlong)local_190 * 0x68;
            lVar18 = local_180 + lVar25;
            bVar34 = (*(byte *)(local_180 + lVar25) & 1) == 0;
            if (bVar34) {
              pppppppuStack_198 = local_178;
            }
            else {
              pppppppuStack_198 = *(ushort ********)(lVar18 + 8);
            }
            local_1a0 = (ushort *******)(ulonglong)!bVar34;
            lVar25 = local_180 + lVar25;
            local_288 = *(longlong *)(lVar18 + 0x40);
            uVar24 = *(ulonglong *)(lVar18 + 0x48);
            local_240 = *(ushort ********)(lVar18 + 0x50);
            local_238 = *(undefined8 *)(lVar18 + 0x58);
            local_c8 = *(undefined8 *)(lVar25 + 0x38);
            local_e8 = *(undefined1 (*) [16])(lVar25 + 0x18);
            local_d8 = *(ushort ********)(lVar25 + 0x28);
            uStack_d0 = *(undefined8 *)(lVar25 + 0x30);
            local_208 = *(undefined8 *)(lVar25 + 0x38);
            auVar37 = *(undefined1 (*) [16])(lVar25 + 0x18);
            local_218 = *(ushort ********)(lVar25 + 0x28);
            uStack_210 = *(undefined8 *)(lVar25 + 0x30);
            local_228 = auVar37;
            local_190 = pppppppuVar27;
            if (bVar11) {
              lVar18 = param_3[2];
              if (((ulonglong)local_200 & 1) == 0) {
                if ((ulonglong)(*param_3 - lVar18) < 2) {
                  param_5 = (ushort *******)0x1;
                  auVar37._0_8_ =
                       <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                       do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                                 (param_3,lVar18,2,1);
                  auVar37._8_8_ = extraout_XMM0_Qb_00;
                  lVar18 = param_3[2];
                }
                *(undefined2 *)(param_3[1] + lVar18) = 0xa0d;
                lVar18 = 2;
              }
              else {
                if ((ulonglong)(*param_3 - lVar18) < 0xb) {
                  param_5 = (ushort *******)0x1;
                  auVar37._0_8_ =
                       <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                       do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                                 (param_3,lVar18,0xb,1);
                  auVar37._8_8_ = extraout_XMM0_Qb;
                  lVar18 = param_3[2];
                }
                lVar25 = param_3[1];
                *(undefined8 *)(lVar25 + lVar18) = 0x656b6e756863202c;
                *(undefined4 *)(lVar25 + 7 + lVar18) = 0xa0d6465;
                lVar18 = 0xb;
              }
              param_3[2] = param_3[2] + lVar18;
            }
            bVar11 = false;
            if (local_288 == 0) goto LAB_006aedb9;
            pppppppuVar27 = local_240;
            cVar13 = cVar14;
LAB_006aeee9:
            uVar36 = auVar37._0_8_;
            lVar18 = *param_3;
            lVar25 = param_3[2];
            if ((ushort *******)(lVar18 - lVar25) < pppppppuVar27) {
              param_5 = (ushort *******)0x1;
              uVar36 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                       do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                                 (param_3,lVar25,pppppppuVar27,1);
LAB_006aef06:
              uVar36 = (*(code *)PTR_memcpy_00799008)(uVar36,pppppppuVar27);
              lVar18 = *param_3;
              lVar25 = param_3[2];
            }
            else if (pppppppuVar27 != (ushort *******)0x0) goto LAB_006aef06;
            pcVar29 = (char *)(lVar25 + (longlong)pppppppuVar27);
            param_3[2] = (longlong)pcVar29;
            if ((ulonglong)(lVar18 - (longlong)pcVar29) < 2) {
              param_5 = (ushort *******)0x1;
              uVar36 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                       do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                                 (param_3,pcVar29,2,1);
              pcVar29 = (char *)param_3[2];
            }
            pppppppuVar35 = local_218;
            lVar18 = param_3[1];
            (pcVar29 + lVar18)[0] = ':';
            (pcVar29 + lVar18)[1] = ' ';
            lVar18 = *param_3;
            lVar25 = param_3[2] + 2;
            param_3[2] = lVar25;
            pppppppuVar27 = (ushort *******)local_228._8_8_;
            if ((ushort *******)(lVar18 - lVar25) < local_218) {
              param_5 = (ushort *******)0x1;
              uVar36 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                       do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                                 (param_3,lVar25,local_218,1);
LAB_006aef76:
              uVar36 = (*(code *)PTR_memcpy_00799008)(uVar36,pppppppuVar35);
              lVar18 = *param_3;
              lVar25 = param_3[2];
            }
            else if (local_218 != (ushort *******)0x0) goto LAB_006aef76;
            pcVar29 = (char *)(lVar25 + (longlong)pppppppuVar35);
            param_3[2] = (longlong)pcVar29;
            if ((ulonglong)(lVar18 - (longlong)pcVar29) < 2) {
              param_5 = (ushort *******)0x1;
              uVar36 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                       do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                                 (param_3,pcVar29,2,1);
              pcVar29 = (char *)param_3[2];
            }
            lVar18 = param_3[1];
            (pcVar29 + lVar18)[0] = '\r';
            (pcVar29 + lVar18)[1] = '\n';
            param_3[2] = param_3[2] + 2;
            pppppppuVar35 =
                 (ushort *******)(**(code **)(local_228._0_8_ + 0x20))(uVar36,pppppppuVar35);
            uVar36 = extraout_XMM0_Qa_00;
            cVar14 = cVar13;
LAB_006aefe0:
            if ((int)local_1a0 == 1) {
              param_5 = pppppppuStack_198;
              http[56314f485c23ccf6]::header::map::remove_extra_value::
              <http[56314f485c23ccf6]::header::value::HeaderValue>
                        (&local_148,local_180,local_178,local_170);
              if ((char)local_138 != '\0') {
                pppppppuStack_198 = uStack_130;
              }
              local_1a0 = (ushort *******)(ulonglong)((char)local_138 != '\0');
              auVar37._8_8_ = pppppppuStack_120;
              auVar37._0_8_ = local_128;
              uStack_210 = CONCAT71(uStack_10f,uStack_110);
              local_d8 = local_118;
              local_208 = CONCAT62(uStack_106,local_108);
              local_218 = local_118;
              uVar36 = local_128;
              local_228 = auVar37;
              local_e8 = auVar37;
              uStack_d0 = uStack_210;
              local_c8 = local_208;
              if (local_288 == 0) goto LAB_006af225;
LAB_006af103:
              pppppppuVar27 = local_240;
LAB_006af29c:
              pppppppuVar35 = local_240;
              lVar18 = *param_3;
              lVar25 = param_3[2];
              if ((ushort *******)(lVar18 - lVar25) < pppppppuVar27) {
                param_5 = (ushort *******)0x1;
                local_1f8 = local_288;
                uVar36 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                         do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                                   (param_3,lVar25,pppppppuVar27,1);
LAB_006af2b9:
                uVar36 = (*(code *)PTR_memcpy_00799008)(uVar36,pppppppuVar27);
                lVar18 = *param_3;
                lVar25 = param_3[2];
              }
              else {
                pppppppuVar35 = pppppppuVar33;
                if (pppppppuVar27 != (ushort *******)0x0) goto LAB_006af2b9;
              }
              pppppppuVar33 = local_240;
              pcVar29 = (char *)(lVar25 + (longlong)pppppppuVar27);
              param_3[2] = (longlong)pcVar29;
              if ((ulonglong)(lVar18 - (longlong)pcVar29) < 2) {
                param_5 = (ushort *******)0x1;
                local_1f8 = local_288;
                uVar36 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                         do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                                   (param_3,pcVar29,2,1);
                pcVar29 = (char *)param_3[2];
                pppppppuVar35 = pppppppuVar33;
              }
              pppppppuVar23 = local_218;
              pppppppuVar33 = local_240;
              lVar18 = param_3[1];
              (pcVar29 + lVar18)[0] = ':';
              (pcVar29 + lVar18)[1] = ' ';
              lVar18 = *param_3;
              lVar25 = param_3[2] + 2;
              param_3[2] = lVar25;
              pppppppuVar27 = (ushort *******)local_228._8_8_;
              if ((ushort *******)(lVar18 - lVar25) < local_218) {
                param_5 = (ushort *******)0x1;
                local_1f8 = local_288;
                uVar36 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                         do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                                   (param_3,lVar25,local_218,1);
LAB_006af329:
                uVar36 = (*(code *)PTR_memcpy_00799008)(uVar36,pppppppuVar23);
                lVar18 = *param_3;
                lVar25 = param_3[2];
              }
              else {
                pppppppuVar33 = pppppppuVar35;
                if (local_218 != (ushort *******)0x0) goto LAB_006af329;
              }
              pppppppuVar35 = local_240;
              pcVar29 = (char *)(lVar25 + (longlong)pppppppuVar23);
              param_3[2] = (longlong)pcVar29;
              if ((ulonglong)(lVar18 - (longlong)pcVar29) < 2) {
                param_5 = (ushort *******)0x1;
                local_1f8 = local_288;
                uVar36 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                         do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                                   (param_3,pcVar29,2,1);
                pcVar29 = (char *)param_3[2];
                pppppppuVar33 = pppppppuVar35;
              }
              lVar18 = param_3[1];
              (pcVar29 + lVar18)[0] = '\r';
              (pcVar29 + lVar18)[1] = '\n';
              param_3[2] = param_3[2] + 2;
              pppppppuVar35 =
                   (ushort *******)(**(code **)(local_228._0_8_ + 0x20))(uVar36,pppppppuVar23);
              uVar36 = extraout_XMM0_Qa_01;
              goto LAB_006aefe0;
            }
            if (local_190 == pppppppuStack_188) {
              unaff_R15B = 0;
              goto LAB_006b000d;
            }
            pppppppuVar27 = (ushort *******)((longlong)local_190 + 1);
            if (local_178 <= local_190) {
              local_190 = pppppppuVar27;
              (*(code *)PTR_panic_bounds_check_00799520)
                        (uVar36,&anon_9036e64db263aa0aa2a972d6d60b9936_32_llvm_9907365231172608471);
              goto LAB_006b0ea7;
            }
            lVar25 = (longlong)local_190 * 0x68;
            lVar18 = local_180 + lVar25;
            bVar34 = (*(byte *)(local_180 + lVar25) & 1) == 0;
            if (!bVar34) {
              param_5 = *(ushort ********)(lVar18 + 8);
            }
            local_1a0 = (ushort *******)(ulonglong)!bVar34;
            lVar25 = local_180 + lVar25;
            pauVar21 = (undefined1 (*) [16])(lVar25 + 0x18);
            lVar17 = *(longlong *)(lVar18 + 0x40);
            uVar24 = *(ulonglong *)(lVar18 + 0x48);
            pppppppuVar33 = *(ushort ********)(lVar18 + 0x50);
            uVar6 = *(undefined8 *)(lVar18 + 0x58);
            local_c8 = *(undefined8 *)(lVar25 + 0x38);
            local_e8 = *pauVar21;
            local_d8 = *(ushort ********)(lVar25 + 0x28);
            uStack_d0 = *(undefined8 *)(lVar25 + 0x30);
            local_208 = *(undefined8 *)(lVar25 + 0x38);
            auVar37 = *pauVar21;
            local_218 = *(ushort ********)(lVar25 + 0x28);
            uStack_210 = *(undefined8 *)(lVar25 + 0x30);
            local_228 = auVar37;
            pppppppuStack_198 = param_5;
            local_190 = pppppppuVar27;
            if (local_288 != 0) {
              auVar37._0_8_ = (**(code **)(local_288 + 0x20))(pauVar21,local_240);
              auVar37._8_8_ = extraout_XMM0_Qb_03;
            }
            if (bVar11) {
              lVar18 = param_3[2];
              if (((ulonglong)local_200 & 1) == 0) {
                if ((ulonglong)(*param_3 - lVar18) < 2) {
                  param_5 = (ushort *******)0x1;
                  local_1f8 = lVar17;
                  auVar37._0_8_ =
                       <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                       do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                                 (param_3,lVar18,2,1);
                  auVar37._8_8_ = extraout_XMM0_Qb_05;
                  lVar18 = param_3[2];
                  lVar17 = local_1f8;
                }
                *(undefined2 *)(param_3[1] + lVar18) = 0xa0d;
                lVar18 = 2;
              }
              else {
                if ((ulonglong)(*param_3 - lVar18) < 0xb) {
                  param_5 = (ushort *******)0x1;
                  local_1f8 = lVar17;
                  auVar37._0_8_ =
                       <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                       do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                                 (param_3,lVar18,0xb,1);
                  auVar37._8_8_ = extraout_XMM0_Qb_04;
                  lVar18 = param_3[2];
                  lVar17 = local_1f8;
                }
                lVar25 = param_3[1];
                *(undefined8 *)(lVar25 + lVar18) = 0x656b6e756863202c;
                *(undefined4 *)(lVar25 + 7 + lVar18) = 0xa0d6465;
                lVar18 = 0xb;
              }
              param_3[2] = param_3[2] + lVar18;
            }
            uVar36 = auVar37._0_8_;
            bVar11 = false;
            local_288 = lVar17;
            local_240 = pppppppuVar33;
            local_238 = uVar6;
            if (lVar17 != 0) goto LAB_006af103;
LAB_006af225:
            uVar20 = (uint)uVar24 & 0xff;
            uVar15 = uVar20 - 0x14;
            if (0x31 < uVar15) goto switchD_006af23f_caseD_15;
            switch(uVar20) {
            case 0x14:
              goto switchD_006af23f_caseD_14;
            case 0x18:
              goto switchD_006af23f_caseD_18;
            case 0x20:
              local_f0 = CONCAT71((int7)((ulonglong)
                                         ((longlong)&switchD_006af23f::switchdataD_001a57a0 +
                                         (longlong)
                                         (int)(&switchD_006af23f::switchdataD_001a57a0)[uVar15]) >>
                                        8),1);
            default:
switchD_006af23f_caseD_15:
              cVar13 = cVar14;
LAB_006af286:
              uVar36 = <http[56314f485c23ccf6]::header::name::StandardHeader>::as_str(uVar24 & 0xff)
              ;
              pppppppuVar27 = extraout_RDX_00;
              cVar14 = cVar13;
              goto LAB_006af29c;
            case 0x44:
              goto switchD_006af23f_caseD_44;
            case 0x45:
              goto switchD_006af23f_caseD_45;
            }
          }
          local_190 = pppppppuVar27;
          (*(code *)PTR_panic_bounds_check_00799520)();
          goto LAB_006b0ea7;
        }
        local_288 = 0;
        pppppppuVar35 = local_1a0;
LAB_006b000d:
        local_230 = CONCAT44(local_230._4_4_,(int)CONCAT71((int7)((ulonglong)pppppppuVar35 >> 8),1))
        ;
        pppppppuVar35 =
             (ushort *******)
             <http[56314f485c23ccf6]::header::map::Drain<http[56314f485c23ccf6]::header::value::HeaderValue>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
             ::drop(&local_1a0,pppppppuVar27);
        if (bVar11) {
          lVar18 = param_3[2];
          if (((ulonglong)local_200 & 1) == 0) {
            if ((ulonglong)(*param_3 - lVar18) < 2) {
              pppppppuVar35 =
                   (ushort *******)
                   <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle
                   ::<alloc[12e961f32105355]::alloc::Global>(param_3,lVar18,2,1,1);
              lVar18 = param_3[2];
            }
            *(undefined2 *)(param_3[1] + lVar18) = 0xa0d;
            lVar18 = 2;
          }
          else {
            if ((ulonglong)(*param_3 - lVar18) < 0xb) {
              pppppppuVar35 =
                   (ushort *******)
                   <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle
                   ::<alloc[12e961f32105355]::alloc::Global>(param_3,lVar18,0xb,1,1);
              lVar18 = param_3[2];
            }
            lVar25 = param_3[1];
            *(undefined8 *)(lVar25 + lVar18) = 0x656b6e756863202c;
            *(undefined4 *)(lVar25 + 7 + lVar18) = 0xa0d6465;
            lVar18 = 0xb;
          }
          param_3[2] = param_3[2] + lVar18;
        }
        if (cVar14 == '\0') {
          if (local_158 == 0) {
            if (local_1b0 == (ushort *******)0x0) goto LAB_006b04d2;
            uVar31 = *(ushort *)local_168;
            if (((ushort)(uVar31 - 100) < 100) ||
               ((*local_1f0 != -1 && ((ushort)(uVar31 - 200) < 100 && *local_1f0 == '\a'))))
            goto LAB_006b0517;
            pppppppuVar33 = (ushort *******)0x0;
            pppppppuVar27 = (ushort *******)0x8000000000000000;
            if ((uVar31 == 0xcc) || (uVar31 == 0x130)) goto LAB_006b0524;
            lVar18 = param_3[2];
            if ((ulonglong)(*param_3 - lVar18) < 0x10) {
              <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[12e961f32105355]::alloc::Global>(param_3,lVar18,0x10,1,1);
              lVar18 = param_3[2];
            }
            uVar36 = _UNK_001833d8;
            lVar25 = param_3[1];
            *(undefined8 *)(lVar25 + lVar18) = _DAT_001833d0;
            ((undefined8 *)(lVar25 + lVar18))[1] = uVar36;
            param_3[2] = param_3[2] + 0x10;
            lVar25 = (*(code *)PTR_fmt_00799cd0)();
            uVar24 = 0x14 - lVar25;
            lVar18 = param_3[2];
            pppppppuVar35 = extraout_XMM0_Qa_06;
            if ((ulonglong)(*param_3 - lVar18) < uVar24) {
              pppppppuVar35 =
                   (ushort *******)
                   <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle
                   ::<alloc[12e961f32105355]::alloc::Global>(param_3,lVar18,uVar24,1,1);
              lVar18 = param_3[2];
            }
            if (lVar25 != 0x14) {
              pppppppuVar35 = (ushort *******)(*(code *)PTR_memcpy_00799008)(pppppppuVar35,uVar24);
              lVar18 = param_3[2];
            }
            lVar18 = lVar18 + uVar24;
            param_3[2] = lVar18;
            if ((ulonglong)(*param_3 - lVar18) < 2) {
              pppppppuVar35 =
                   (ushort *******)
                   <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle
                   ::<alloc[12e961f32105355]::alloc::Global>(param_3,lVar18,2,1,1);
              lVar18 = param_3[2];
            }
            *(undefined2 *)(param_3[1] + lVar18) = 0xa0d;
            lVar18 = 2;
            pppppppuVar27 = (ushort *******)0x8000000000000000;
            pppppppuVar33 = local_1b0;
LAB_006b0b44:
            param_3[2] = param_3[2] + lVar18;
          }
          else if ((int)local_158 == 2) {
LAB_006b04d2:
            uVar31 = *(ushort *)local_168;
            if ((ushort)(uVar31 - 100) < 100) {
LAB_006b0517:
              pppppppuVar33 = (ushort *******)0x0;
              pppppppuVar27 = (ushort *******)0x8000000000000000;
            }
            else {
              cVar14 = *local_1f0;
              if (cVar14 == -1) {
                pppppppuVar33 = (ushort *******)0x0;
                pppppppuVar27 = (ushort *******)0x8000000000000000;
                if ((uVar31 != 0xcc) && (uVar31 != 0x130)) {
LAB_006b0b03:
                  lVar18 = param_3[2];
                  if ((ulonglong)(*param_3 - lVar18) < 0x13) {
                    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                    do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                              (param_3,lVar18,0x13,1,1);
                    lVar18 = param_3[2];
                  }
                  uVar36 = _UNK_001a5870;
                  pppppppuVar35 = _DAT_001a5868;
                  lVar25 = param_3[1];
                  puVar3 = (undefined8 *)(lVar25 + lVar18);
                  *puVar3 = _DAT_001a5868;
                  puVar3[1] = uVar36;
                  *(undefined4 *)(lVar25 + 0xf + lVar18) = 0xa0d3020;
                  lVar18 = 0x13;
                  pppppppuVar27 = (ushort *******)0x8000000000000000;
                  pppppppuVar33 = (ushort *******)0x0;
                  goto LAB_006b0b44;
                }
              }
              else {
                if ((ushort)(uVar31 - 200) < 100 && cVar14 == '\a') goto LAB_006b0517;
                pppppppuVar33 = (ushort *******)0x0;
                pppppppuVar27 = (ushort *******)0x8000000000000000;
                if ((uVar31 != 0xcc) && (uVar31 != 0x130)) {
                  if (cVar14 != '\x05') goto LAB_006b0b03;
                  pppppppuVar33 = (ushort *******)0x0;
                }
              }
            }
          }
          else {
            pppppppuVar27 = (ushort *******)0x8000000000000001;
            if ((*(char *)((longlong)local_1a8 + 0x6a) != '\x01') && (*local_1f0 != '\x05')) {
              uVar31 = *(ushort *)local_168;
              if (*local_1f0 == '\a') {
                uVar20 = uVar31 - 100 & 0xffff;
                if (199 < uVar20) goto LAB_006b0a8b;
              }
              else {
                uVar20 = uVar31 - 100;
                if (99 < (ushort)uVar20) {
LAB_006b0a8b:
                  pppppppuVar23 = (ushort *******)(ulonglong)uVar20;
                  if ((uVar31 != 0xcc) && (uVar31 != 0x130)) {
                    lVar18 = param_3[2];
                    if ((ulonglong)(*param_3 - lVar18) < 0x1c) {
                      pppppppuVar23 = (ushort *******)0x1;
                      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                      do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                                (param_3,lVar18,0x1c,1,1);
                      lVar18 = param_3[2];
                    }
                    uVar36 = _UNK_001a588f;
                    lVar25 = param_3[1];
                    puVar3 = (undefined8 *)(lVar25 + 0xc + lVar18);
                    *puVar3 = CONCAT44(_UNK_001a588b,_DAT_001a5887);
                    puVar3[1] = uVar36;
                    pppppppuVar35 = _DAT_001a587b;
                    uVar36 = CONCAT44(_DAT_001a5887,_UNK_001a5883);
                    puVar3 = (undefined8 *)(lVar25 + lVar18);
                    *puVar3 = _DAT_001a587b;
                    puVar3[1] = uVar36;
                    pppppppuVar27 = (ushort *******)0xffffffffffffffff;
                    lVar18 = 0x1c;
                    pppppppuVar33 = pppppppuVar23;
                    goto LAB_006b0b44;
                  }
                }
              }
            }
          }
LAB_006b0524:
          pppppppuVar23 = local_268;
          if ((-0x7fffffffffffffff < (longlong)local_268) &&
             (local_268 != (ushort *******)0xffffffffffffffff)) {
            local_200 = pppppppuVar33;
            if (local_258 != (ushort *******)0x0) {
              pppppppuVar33 = pppppppuStack_260 + 7;
              lVar18 = 1 - (longlong)local_258;
              do {
                if (pppppppuVar33[-7] != (ushort ******)0x0) {
                  pppppppuVar35 =
                       (ushort *******)
                       (*(code *)pppppppuVar33[-7][4])(pppppppuVar35,pppppppuVar33[-5]);
                }
                pppppppuVar33 = pppppppuVar33 + 4;
                lVar18 = lVar18 + 1;
              } while (lVar18 != 1);
            }
            pppppppuVar33 = local_200;
            if (pppppppuVar23 != (ushort *******)0x0) {
              pppppppuVar35 =
                   (ushort *******)(*(code *)PTR___rust_dealloc_00798fc8)(pppppppuVar35,8);
            }
          }
          uStack_250 = (ushort *******)((ulonglong)uStack_250 & 0xffffffffffffff00);
          local_268 = pppppppuVar27;
          pppppppuStack_260 = pppppppuVar33;
        }
        pppppppuVar27 = local_268;
        if (*local_1f0 == '\x05') {
LAB_006b062f:
          if ((-0x7fffffffffffffff < (longlong)local_268) &&
             (local_268 != (ushort *******)0xffffffffffffffff)) {
            if (local_258 != (ushort *******)0x0) {
              pppppppuVar33 = pppppppuStack_260 + 7;
              lVar18 = 1 - (longlong)local_258;
              do {
                if (pppppppuVar33[-7] != (ushort ******)0x0) {
                  pppppppuVar35 =
                       (ushort *******)
                       (*(code *)pppppppuVar33[-7][4])(pppppppuVar35,pppppppuVar33[-5]);
                }
                pppppppuVar33 = pppppppuVar33 + 4;
                lVar18 = lVar18 + 1;
              } while (lVar18 != 1);
            }
            if (pppppppuVar27 != (ushort *******)0x0) {
              pppppppuVar35 =
                   (ushort *******)(*(code *)PTR___rust_dealloc_00798fc8)(pppppppuVar35,8);
            }
          }
          local_268 = (ushort *******)0x8000000000000000;
          pppppppuStack_260 = (ushort *******)0x0;
          uStack_250 = (ushort *******)((ulonglong)uStack_250 & 0xffffffffffffff00);
        }
        else {
          uVar31 = *(ushort *)local_168;
          if (*local_1f0 != '\a') {
            if (99 < (ushort)(uVar31 - 100)) goto LAB_006b061d;
            goto LAB_006b062f;
          }
          if ((ushort)(uVar31 - 100) < 200) goto LAB_006b062f;
LAB_006b061d:
          if ((uVar31 == 0x130) || (uVar31 == 0xcc)) goto LAB_006b062f;
        }
        lVar18 = param_3[2];
        if (((local_f0 & 1) != 0) || (*(char *)((longlong)local_1c8 + 0x22) == '\0')) {
          if ((ulonglong)(*param_3 - lVar18) < 2) goto LAB_006b0cde;
          goto LAB_006b075a;
        }
        if ((ulonglong)(*param_3 - lVar18) < 0x25) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(param_3,lVar18,0x25,1,1);
          lVar18 = param_3[2];
          if ((ulonglong)(*param_3 - lVar18) < 6) {
            <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[12e961f32105355]::alloc::Global>(param_3,lVar18,6,1,1);
            lVar18 = param_3[2];
          }
        }
        lVar25 = param_3[1];
        *(undefined2 *)(lVar25 + 4 + lVar18) = 0x203a;
        *(undefined4 *)(lVar25 + lVar18) = 0x65746164;
        param_3[2] = param_3[2] + 6;
        pppppppuVar35 = (ushort *******)hyper[c4782d5b5c5e3493]::common::date::extend(param_3);
        lVar18 = param_3[2];
        if ((ulonglong)(*param_3 - lVar18) < 4) {
          pppppppuVar35 =
               (ushort *******)
               <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
               <alloc[12e961f32105355]::alloc::Global>(param_3,lVar18,4,1,1);
          lVar18 = param_3[2];
        }
        *(undefined4 *)(param_3[1] + lVar18) = 0xa0d0a0d;
        lVar18 = 4;
        goto LAB_006b076a;
      }
      uVar10 = false;
    }
    pppppppuVar35 =
         (ushort *******)
         <hyper[c4782d5b5c5e3493]::proto::h1::role::Server>::encode_headers_with_original_case
                   (&local_148,local_1c8,param_3,local_289,local_230,cVar14,pppppppuVar35);
    pppppppuVar27 = pppppppuStack_140;
    if (local_148 == (ushort *******)0xfffffffffffffffe) goto LAB_006b0903;
    uStack_1b4 = (undefined3)((ulonglong)uStack_130 >> 0x28);
    uVar12 = uStack_130._1_4_;
    local_289 = (byte)uStack_130;
    pppppppuVar33 = local_148;
    pppppppuVar23 = local_138;
  }
  else {
    local_289 = 1;
    if (((ushort)(sVar2 - 200U) < 100) && (*(char *)param_2[3] == '\a')) {
      local_1c0 = (undefined8 *)0x0;
      cVar14 = '\x01';
      goto LAB_006ae3cb;
    }
    if (99 < (ushort)(sVar2 - 100U)) {
      local_289 = (byte)param_2[4] ^ 1;
      goto LAB_006ae377;
    }
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<http[56314f485c23ccf6]::header::map::HeaderMap>(puVar3)
    ;
    if (puVar3[0xc] != 0) {
      uVar36 = <hashbrown[b5c94476ffc33875]::raw::RawTable<(core[c0acaeba6ab4c2e0]::any::TypeId,alloc[12e961f32105355]::boxed::Box<dyn_http[56314f485c23ccf6]::extensions::AnyClone+core[c0acaeba6ab4c2e0]::marker::Send+core[c0acaeba6ab4c2e0]::marker::Sync>)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
               ::drop(puVar3[0xc]);
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar36,8);
    }
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[4] = 8;
    *(undefined1 (*) [16])(puVar3 + 5) = (undefined1  [16])0x0;
    puVar3[7] = 8;
    puVar3[8] = 0;
    puVar3[9] = 2;
    puVar3[10] = 0;
    *(undefined2 *)(puVar3 + 0xb) = 0;
    puVar3[0xc] = 0;
    *(undefined1 *)((longlong)puVar3 + 0x6a) = 2;
    *(undefined2 *)(puVar3 + 0xd) = 500;
    *local_1c8 = 2;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar16 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar16 != (undefined8 *)0x0) {
      *puVar16 = 0;
      *(undefined2 *)(puVar16 + 2) = 0x401;
      local_1c0 = puVar16;
      goto LAB_006ae383;
    }
    lVar18 = 0x18;
    (*(code *)PTR_handle_alloc_error_007991d8)();
LAB_006b0cde:
    pppppppuVar35 =
         (ushort *******)
         <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
         <alloc[12e961f32105355]::alloc::Global>(param_3,lVar18,2,1,1);
    lVar18 = param_3[2];
LAB_006b075a:
    *(undefined2 *)(param_3[1] + lVar18) = 0xa0d;
    lVar18 = 2;
LAB_006b076a:
    param_3[2] = param_3[2] + lVar18;
    bVar48 = 1;
    if (-0x7fffffffffffffff < (longlong)local_268) {
      if (local_1e8._0_8_ != -1) {
        local_218 = local_1d8;
        local_228 = local_1e8;
        local_138 = local_258;
        uStack_130 = uStack_250;
        local_148 = local_268;
        pppppppuStack_140 = pppppppuStack_260;
        local_230 = local_230 & 0xffffffff00000000;
        <hyper[c4782d5b5c5e3493]::proto::h1::encode::Encoder>::into_chunked_with_trailing_fields
                  (&local_1a0,&local_148,local_228);
        local_268 = local_1a0;
        pppppppuStack_260 = pppppppuStack_198;
        local_258 = local_190;
        uStack_250 = pppppppuStack_188;
        bVar48 = 0;
        pppppppuVar35 = local_1a0;
      }
    }
    pppppppuVar23 = local_258;
    pppppppuVar27 = pppppppuStack_260;
    pppppppuVar33 = local_268;
    uStack_14c = (undefined3)((ulonglong)uStack_250 >> 0x28);
    local_150 = uStack_250._1_4_;
    if ((unaff_R15B & 1) == 0 && local_288 != 0) {
      pppppppuVar35 = (ushort *******)(**(code **)(local_288 + 0x20))(local_288,local_240);
    }
    if ((bool)(local_1e8._0_8_ != -1 & bVar48)) {
      if (local_1d8 != (ushort *******)0x0) {
        lVar25 = local_1e8._8_8_ + 0x38;
        lVar18 = 1 - (longlong)local_1d8;
        do {
          if (*(longlong *)(lVar25 + -0x38) != 0) {
            pppppppuVar35 =
                 (ushort *******)
                 (**(code **)(*(longlong *)(lVar25 + -0x38) + 0x20))
                           (pppppppuVar35,*(undefined8 *)(lVar25 + -0x28));
          }
          lVar25 = lVar25 + 0x20;
          lVar18 = lVar18 + 1;
        } while (lVar18 != 1);
      }
      if (local_1e8._0_8_ != 0) {
        pppppppuVar35 = (ushort *******)(*(code *)PTR___rust_dealloc_00798fc8)(pppppppuVar35,8);
      }
    }
    if (pppppppuVar33 == (ushort *******)0xfffffffffffffffe) {
LAB_006b0901:
      uVar10 = false;
LAB_006b0903:
      local_160[1] = pppppppuVar27;
      *local_160 = 0xfffffffffffffffe;
      if (local_f8 != (longlong *)0x0) {
        uVar36 = <hashbrown[b5c94476ffc33875]::raw::RawTable<(core[c0acaeba6ab4c2e0]::any::TypeId,alloc[12e961f32105355]::boxed::Box<dyn_http[56314f485c23ccf6]::extensions::AnyClone+core[c0acaeba6ab4c2e0]::marker::Send+core[c0acaeba6ab4c2e0]::marker::Sync>)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
                 ::drop(local_f8);
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar36,8);
      }
      if ((bool)uVar10) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<hyper[c4782d5b5c5e3493]::ext::HeaderCaseMap>
                  (&local_98);
      }
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <core[c0acaeba6ab4c2e0]::result::Result<(),hyper[c4782d5b5c5e3493]::error::Error>>(local_1c0);
      return local_160;
    }
    uVar10 = false;
    uVar12 = local_150;
    uStack_1b4 = uStack_14c;
  }
  local_1b8 = uVar12;
  if (local_1c0 == (undefined8 *)0x0) {
    *local_160 = pppppppuVar33;
    *(ushort ********)((longlong)local_160 + 8) = pppppppuVar27;
    *(ushort ********)((longlong)local_160 + 0x10) = pppppppuVar23;
    *(byte *)((longlong)local_160 + 0x18) = local_289;
    local_1b8._3_1_ = (undefined1)((uint)uVar12 >> 0x18);
    *(undefined4 *)((longlong)local_160 + 0x19) = uVar12;
    *(uint *)((longlong)local_160 + 0x1c) = CONCAT31(uStack_1b4,local_1b8._3_1_);
  }
  else {
    *(undefined8 **)((longlong)local_160 + 8) = local_1c0;
    *local_160 = 0xfffffffffffffffe;
    if ((-0x7fffffffffffffff < (longlong)pppppppuVar33) &&
       (pppppppuVar33 != (ushort *******)0xffffffffffffffff)) {
      if (pppppppuVar23 != (ushort *******)0x0) {
        pppppppuVar27 = (ushort *******)((longlong)pppppppuVar27 + 0x38);
        lVar18 = 1 - (longlong)pppppppuVar23;
        do {
          if (pppppppuVar27[-7] != (ushort ******)0x0) {
            pppppppuVar35 =
                 (ushort *******)(*(code *)pppppppuVar27[-7][4])(pppppppuVar35,pppppppuVar27[-5]);
          }
          pppppppuVar27 = pppppppuVar27 + 4;
          lVar18 = lVar18 + 1;
        } while (lVar18 != 1);
      }
      if (pppppppuVar33 != (ushort *******)0x0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(pppppppuVar35,8);
      }
    }
  }
  if (local_f8 != (longlong *)0x0) {
    uVar36 = <hashbrown[b5c94476ffc33875]::raw::RawTable<(core[c0acaeba6ab4c2e0]::any::TypeId,alloc[12e961f32105355]::boxed::Box<dyn_http[56314f485c23ccf6]::extensions::AnyClone+core[c0acaeba6ab4c2e0]::marker::Send+core[c0acaeba6ab4c2e0]::marker::Sync>)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
             ::drop(local_f8);
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar36,8);
  }
  if (!(bool)uVar10) {
    return local_160;
  }
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<hyper[c4782d5b5c5e3493]::ext::HeaderCaseMap>(&local_98);
  return local_160;
switchD_006af23f_caseD_18:
  if ((cVar14 != '\x01') || (bVar11)) {
    if ((int)local_158 != 2) {
      uVar30 = (longlong)&switchD_006af23f::switchdataD_001a57a0 +
               (longlong)(int)(&switchD_006af23f::switchdataD_001a57a0)[uVar15];
      if (local_158 != 0) goto LAB_006af6b5;
      goto LAB_006af5c4;
    }
    cVar13 = '\x01';
    if (*local_1f0 != '\x05') goto LAB_006af9f0;
    goto LAB_006af286;
  }
LAB_006b01f2:
  if (local_230 <= (ulonglong)param_3[2]) {
    param_3[2] = local_230;
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  pppppppuVar27 = (ushort *******)(*(code *)PTR___rust_alloc_00799000)();
  if (pppppppuVar27 != (ushort *******)0x0) {
    *pppppppuVar27 = (ushort ******)0x0;
    *(ushort *)(pppppppuVar27 + 2) = 0x301;
    uVar36 = extraout_XMM0_Qa_04;
LAB_006b0252:
    uVar6 = local_228._8_8_;
    uVar36 = (**(code **)(local_228._0_8_ + 0x20))(uVar36,local_218);
    local_230 = CONCAT44(local_230._4_4_,(int)CONCAT71((int7)((ulonglong)uVar36 >> 8),1));
    uVar36 = <http[56314f485c23ccf6]::header::map::Drain<http[56314f485c23ccf6]::header::value::HeaderValue>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
             ::drop(&local_1a0,uVar6);
    lVar18 = local_1e8._0_8_;
    if (local_1e8._0_8_ != -1) {
      if (local_1d8 != (ushort *******)0x0) {
        lVar18 = local_1e8._8_8_ + 0x38;
        lVar25 = 1 - (longlong)local_1d8;
        do {
          if (*(longlong *)(lVar18 + -0x38) != 0) {
            uVar36 = (**(code **)(*(longlong *)(lVar18 + -0x38) + 0x20))
                               (uVar36,*(undefined8 *)(lVar18 + -0x28));
          }
          lVar18 = lVar18 + 0x20;
          lVar25 = lVar25 + 1;
        } while (lVar25 != 1);
      }
      lVar18 = 0;
      if (local_1e8._0_8_ != 0) {
        lVar18 = local_1e8._0_8_ << 5;
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar36,8);
      }
    }
    pppppppuVar33 = local_268;
    if (((-0x7fffffffffffffff < (longlong)local_268) &&
        (local_268 != (ushort *******)0xffffffffffffffff)) &&
       (uVar36 = <alloc[12e961f32105355]::vec::Vec<http[56314f485c23ccf6]::header::name::HeaderName>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
                 ::drop(&local_268,lVar18), pppppppuVar33 != (ushort *******)0x0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar36,8);
    }
    goto LAB_006b0901;
  }
  (*(code *)PTR_handle_alloc_error_007991d8)();
  goto LAB_006b0ea7;
switchD_006af23f_caseD_14:
  bVar48 = local_289 & 1;
  local_289 = 1;
  if (bVar48 == 0) {
    local_289 = hyper[c4782d5b5c5e3493]::headers::connection_has
                          (local_228._8_8_,local_218,"close",5);
    auVar37._8_8_ = extraout_XMM0_Qb_01;
    auVar37._0_8_ = extraout_XMM0_Qa;
  }
  lVar18 = param_3[2];
  if (bVar11) {
    if ((ulonglong)(*param_3 - lVar18) < 2) {
      param_5 = (ushort *******)0x1;
      auVar37._0_8_ =
           <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
           <alloc[12e961f32105355]::alloc::Global>(param_3,lVar18,2,1);
      auVar37._8_8_ = extraout_XMM0_Qb_12;
      lVar18 = param_3[2];
    }
    pppppppuVar27 = local_218;
    *(undefined2 *)(param_3[1] + lVar18) = 0x202c;
    lVar18 = param_3[2] + 2;
    param_3[2] = lVar18;
    if ((ushort *******)(*param_3 - lVar18) < local_218) {
      param_5 = (ushort *******)0x1;
      uVar36 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
               <alloc[12e961f32105355]::alloc::Global>(param_3,lVar18,local_218,1);
      goto LAB_006afecf;
    }
LAB_006af761:
    uVar36 = auVar37._0_8_;
    pppppppuVar27 = local_218;
    if (local_218 == (ushort *******)0x0) goto LAB_006af77f;
  }
  else {
    if ((ulonglong)(*param_3 - lVar18) < 0xc) {
      param_5 = (ushort *******)0x1;
      auVar37._0_8_ =
           <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
           <alloc[12e961f32105355]::alloc::Global>(param_3,lVar18,0xc,1);
      auVar37._8_8_ = extraout_XMM0_Qb_13;
      lVar18 = param_3[2];
    }
    pppppppuVar27 = local_218;
    lVar25 = param_3[1];
    *(undefined8 *)(lVar25 + lVar18) = 0x697463656e6e6f63;
    *(undefined4 *)(lVar25 + 8 + lVar18) = 0x203a6e6f;
    lVar18 = param_3[2] + 0xc;
    param_3[2] = lVar18;
    if (local_218 <= (ushort *******)(*param_3 - lVar18)) goto LAB_006af761;
    param_5 = (ushort *******)0x1;
    uVar36 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
             <alloc[12e961f32105355]::alloc::Global>(param_3,lVar18,local_218,1);
LAB_006afecf:
  }
  auVar37._0_8_ = (*(code *)PTR_memcpy_00799008)(uVar36,pppppppuVar27);
  auVar37._8_8_ = extraout_XMM0_Qb_07;
  lVar18 = param_3[2];
LAB_006af77f:
  param_3[2] = (longlong)(lVar18 + (longlong)pppppppuVar27);
  do {
    bVar11 = true;
LAB_006af9f0:
    pppppppuVar27 = (ushort *******)local_228._8_8_;
    (**(code **)(local_228._0_8_ + 0x20))(auVar37._0_8_,local_218);
    unaff_R15B = 0;
    if (local_1a0 != (ushort *******)0x1) goto LAB_006aeb63;
    param_5 = pppppppuStack_198;
    http[56314f485c23ccf6]::header::map::remove_extra_value::
    <http[56314f485c23ccf6]::header::value::HeaderValue>(&local_148,local_180,local_178,local_170);
    if ((char)local_138 != '\0') {
      pppppppuStack_198 = uStack_130;
    }
    local_1a0 = (ushort *******)(ulonglong)((char)local_138 != '\0');
    auVar37._8_8_ = pppppppuStack_120;
    auVar37._0_8_ = local_128;
    uStack_210 = CONCAT71(uStack_10f,uStack_110);
    local_d8 = local_118;
    local_208 = CONCAT62(uStack_106,local_108);
    local_218 = local_118;
    local_228 = auVar37;
    local_e8 = auVar37;
    uStack_d0 = uStack_210;
    local_c8 = local_208;
LAB_006aedb9:
    uVar20 = (uint)uVar24 & 0xff;
    uVar15 = uVar20 - 0x14;
    if (0x31 < uVar15) goto switchD_006aedd7_caseD_15;
    switch(uVar20) {
    case 0x14:
      goto switchD_006af23f_caseD_14;
    case 0x18:
      if ((cVar14 == '\x01') && (!bVar11)) goto LAB_006b01f2;
      if (local_158 == 0) {
LAB_006af5c4:
        pppppppuVar27 = local_268;
        bVar34 = !bVar11;
        bVar11 = true;
        if (bVar34) {
          if (((-0x7fffffffffffffff < (longlong)local_268) &&
              (local_268 != (ushort *******)0xffffffffffffffff)) &&
             (uVar36 = <alloc[12e961f32105355]::vec::Vec<http[56314f485c23ccf6]::header::name::HeaderName>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
                       ::drop(&local_268), pppppppuVar27 != (ushort *******)0x0)) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar36,8);
          }
          local_268 = (ushort *******)0x8000000000000000;
          pppppppuStack_260 = local_1b0;
          uStack_250 = (ushort *******)((ulonglong)uStack_250 & 0xffffffffffffff00);
          lVar18 = param_3[2];
          if ((ulonglong)(*param_3 - lVar18) < 0x10) {
            param_5 = (ushort *******)0x1;
            <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[12e961f32105355]::alloc::Global>(param_3,lVar18,0x10,1);
            lVar18 = param_3[2];
          }
          pppppppuVar27 = local_218;
          auVar37._8_8_ = _UNK_001833d8;
          auVar37._0_8_ = _DAT_001833d0;
          *(undefined1 (*) [16])(param_3[1] + lVar18) = auVar37;
          lVar18 = param_3[2] + 0x10;
          param_3[2] = lVar18;
          if ((ushort *******)(*param_3 - lVar18) < local_218) {
            param_5 = (ushort *******)0x1;
            uVar36 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                     do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                               (param_3,lVar18,local_218,1);
            goto LAB_006aff11;
          }
          goto LAB_006af68a;
        }
      }
      else {
        uVar30 = local_158;
        if ((int)local_158 == 2) {
          cVar13 = '\x01';
          if (*local_1f0 == '\x05') goto LAB_006aeeca;
        }
        else {
LAB_006af6b5:
          pppppppuVar35 = local_218;
          pppppppuVar27 = local_268;
          if (local_218 == (ushort *******)0x0) {
LAB_006b0234:
            if (local_230 <= (ulonglong)param_3[2]) {
              param_3[2] = local_230;
            }
            pppppppuVar27 =
                 (ushort *******)<hyper[c4782d5b5c5e3493]::error::Error>::new_user_header();
            uVar36 = extraout_XMM0_Qa_05;
            goto LAB_006b0252;
          }
          pppppppuVar23 = (ushort *******)0x0;
          pppppppuVar33 = (ushort *******)0x0;
          while (local_218 != pppppppuVar23) {
            bVar48 = *(char *)(local_228._8_8_ + (longlong)pppppppuVar23) - 0x30;
            if ((9 < bVar48) ||
               (auVar7._8_8_ = 0, auVar7._0_8_ = pppppppuVar33,
               uVar19 = SUB168(auVar7 * ZEXT816(10),0), SUB168(auVar7 * ZEXT816(10),8) != 0))
            goto LAB_006b0234;
            uVar30 = (ulonglong)bVar48;
            pppppppuVar23 = (ushort *******)((longlong)pppppppuVar23 + 1);
            pppppppuVar33 = (ushort *******)(uVar19 + uVar30);
            if (CARRY8(uVar19,uVar30)) goto LAB_006b0234;
          }
          if ((local_100 & 1) == 0) {
            if (((-0x7fffffffffffffff < (longlong)local_268) &&
                (local_268 != (ushort *******)0xffffffffffffffff)) &&
               (uVar36 = <alloc[12e961f32105355]::vec::Vec<http[56314f485c23ccf6]::header::name::HeaderName>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
                         ::drop(&local_268), pppppppuVar27 != (ushort *******)0x0)) {
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar36,8);
            }
            local_268 = (ushort *******)0x8000000000000000;
            uStack_250 = (ushort *******)((ulonglong)uStack_250 & 0xffffffffffffff00);
            lVar18 = param_3[2];
            pppppppuStack_260 = pppppppuVar33;
            if ((ulonglong)(*param_3 - lVar18) < 0x10) {
              param_5 = (ushort *******)0x1;
              <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[12e961f32105355]::alloc::Global>(param_3,lVar18,0x10,1);
              lVar18 = param_3[2];
            }
            uVar6 = _UNK_001833d8;
            uVar36 = _DAT_001833d0;
            lVar25 = param_3[1];
            *(undefined8 *)(lVar25 + lVar18) = _DAT_001833d0;
            ((undefined8 *)(lVar25 + lVar18))[1] = uVar6;
            lVar18 = param_3[2] + 0x10;
            param_3[2] = lVar18;
            if ((ushort *******)(*param_3 - lVar18) < pppppppuVar35) {
              param_5 = (ushort *******)0x1;
              uVar36 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                       do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                                 (param_3,lVar18,pppppppuVar35,1);
            }
            uVar36 = (*(code *)PTR_memcpy_00799008)(uVar36,pppppppuVar35);
            auVar37._8_8_ = extraout_XMM0_Qb_09;
            auVar37._0_8_ = extraout_XMM0_Qa_03;
            param_3[2] = (longlong)(param_3[2] + (longlong)pppppppuVar35);
            local_100 = CONCAT71((int7)((ulonglong)uVar36 >> 8),1);
            local_b8 = pppppppuVar33;
            goto LAB_006af9d5;
          }
          if (local_b8 != pppppppuVar33) goto LAB_006b0234;
          local_100 = CONCAT71((int7)(uVar30 >> 8),1);
        }
      }
      goto LAB_006af9f0;
    case 0x20:
      local_f0 = CONCAT71((int7)((ulonglong)
                                 ((longlong)&switchD_006aedd7::switchdataD_001a56d8 +
                                 (longlong)(int)(&switchD_006aedd7::switchdataD_001a56d8)[uVar15])
                                >> 8),1);
    default:
switchD_006aedd7_caseD_15:
      cVar13 = cVar14;
LAB_006aeeca:
      auVar37._0_8_ = <http[56314f485c23ccf6]::header::name::StandardHeader>::as_str(uVar24 & 0xff);
      auVar37._8_8_ = extraout_XMM0_Qb_02;
      local_288 = 0;
      pppppppuVar27 = extraout_RDX;
      goto LAB_006aeee9;
    case 0x44:
switchD_006af23f_caseD_44:
      if (*(char *)((longlong)local_1a8 + 0x6a) == '\x01') goto LAB_006af9f0;
      if (*local_1f0 == '\x05') goto LAB_006af9f0;
      sVar2 = *(short *)(local_1a8 + 0xd);
      if (*local_1f0 == '\a') {
        if ((ushort)(sVar2 - 100U) < 200) goto LAB_006af9f0;
      }
      else if ((ushort)(sVar2 - 100U) < 100) goto LAB_006af9f0;
      if ((sVar2 == 0xcc) || (sVar2 == 0x130)) goto LAB_006af9f0;
      lVar18 = param_3[2];
      if (bVar11) {
        if ((ulonglong)(*param_3 - lVar18) < 2) {
          param_5 = (ushort *******)0x1;
          auVar37._0_8_ =
               <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
               <alloc[12e961f32105355]::alloc::Global>(param_3,lVar18,2);
          auVar37._8_8_ = extraout_XMM0_Qb_14;
          lVar18 = param_3[2];
        }
        pppppppuVar35 = local_218;
        *(undefined2 *)(param_3[1] + lVar18) = 0x202c;
        lVar18 = param_3[2] + 2;
        param_3[2] = lVar18;
        pppppppuVar27 = (ushort *******)local_228._8_8_;
        if (local_218 <= (ushort *******)(*param_3 - lVar18)) goto LAB_006afa79;
        param_5 = (ushort *******)0x1;
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(param_3,lVar18,local_218);
LAB_006afa7e:
        auVar37._0_8_ = (*(code *)PTR_memcpy_00799008)();
        auVar37._8_8_ = extraout_XMM0_Qb_10;
        lVar18 = param_3[2];
      }
      else {
        if ((ulonglong)(*param_3 - lVar18) < 9) {
          param_5 = (ushort *******)0x1;
          auVar37._0_8_ =
               <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
               <alloc[12e961f32105355]::alloc::Global>(param_3,lVar18,9,1);
          auVar37._8_8_ = extraout_XMM0_Qb_15;
          lVar18 = param_3[2];
        }
        pppppppuVar35 = local_218;
        lVar25 = param_3[1];
        *(undefined8 *)(lVar25 + lVar18) = 0x3a72656c69617274;
        *(undefined1 *)(lVar25 + 8 + lVar18) = 0x20;
        lVar18 = param_3[2] + 9;
        param_3[2] = lVar18;
        pppppppuVar27 = (ushort *******)local_228._8_8_;
        if ((ushort *******)(*param_3 - lVar18) < local_218) {
          param_5 = (ushort *******)0x1;
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(param_3,lVar18,local_218);
          goto LAB_006afa7e;
        }
LAB_006afa79:
        pppppppuVar35 = local_218;
        pppppppuVar27 = (ushort *******)local_228._8_8_;
        if (local_218 != (ushort *******)0x0) goto LAB_006afa7e;
      }
      param_3[2] = (longlong)(lVar18 + (longlong)pppppppuVar35);
      if (pppppppuVar35 == (ushort *******)0x0) goto LAB_006afcea;
      if (&DAT_00000007 < pppppppuVar35) {
        if (&DAT_0000001f < pppppppuVar35) {
          pppppppuVar23 = (ushort *******)((ulonglong)pppppppuVar35 & 0xffffffffffffffe0);
          auVar37 = (undefined1  [16])0x0;
          pppppppuVar22 = (ushort *******)0x0;
          auVar38 = (undefined1  [16])0x0;
          do {
            pcVar29 = (char *)((longlong)pppppppuVar27 + (longlong)pppppppuVar22);
            pcVar1 = (char *)((longlong)(pppppppuVar27 + 2) + (longlong)pppppppuVar22);
            bVar48 = *pcVar29 + DAT_001831d0;
            bVar52 = pcVar29[1] + DAT_001831d0._1_1_;
            bVar54 = pcVar29[2] + DAT_001831d0._2_1_;
            bVar56 = pcVar29[3] + DAT_001831d0._3_1_;
            bVar58 = pcVar29[4] + DAT_001831d0._4_1_;
            bVar60 = pcVar29[5] + DAT_001831d0._5_1_;
            bVar62 = pcVar29[6] + DAT_001831d0._6_1_;
            bVar64 = pcVar29[7] + DAT_001831d0._7_1_;
            bVar69 = pcVar29[8] + DAT_001831d0._8_1_;
            bVar70 = pcVar29[9] + DAT_001831d0._9_1_;
            bVar71 = pcVar29[10] + DAT_001831d0._10_1_;
            bVar72 = pcVar29[0xb] + DAT_001831d0._11_1_;
            bVar73 = pcVar29[0xc] + DAT_001831d0._12_1_;
            bVar74 = pcVar29[0xd] + DAT_001831d0._13_1_;
            bVar75 = pcVar29[0xe] + DAT_001831d0._14_1_;
            bVar76 = pcVar29[0xf] + DAT_001831d0._15_1_;
            bVar77 = *pcVar1 + DAT_001831d0;
            bVar78 = pcVar1[1] + DAT_001831d0._1_1_;
            bVar79 = pcVar1[2] + DAT_001831d0._2_1_;
            bVar80 = pcVar1[3] + DAT_001831d0._3_1_;
            bVar81 = pcVar1[4] + DAT_001831d0._4_1_;
            bVar82 = pcVar1[5] + DAT_001831d0._5_1_;
            bVar83 = pcVar1[6] + DAT_001831d0._6_1_;
            bVar84 = pcVar1[7] + DAT_001831d0._7_1_;
            bVar85 = pcVar1[8] + DAT_001831d0._8_1_;
            bVar86 = pcVar1[9] + DAT_001831d0._9_1_;
            bVar87 = pcVar1[10] + DAT_001831d0._10_1_;
            bVar88 = pcVar1[0xb] + DAT_001831d0._11_1_;
            bVar89 = pcVar1[0xc] + DAT_001831d0._12_1_;
            bVar90 = pcVar1[0xd] + DAT_001831d0._13_1_;
            bVar91 = pcVar1[0xe] + DAT_001831d0._14_1_;
            bVar92 = pcVar1[0xf] + DAT_001831d0._15_1_;
            auVar93[0] = -((byte)((DAT_00182f40 < bVar48) * DAT_00182f40 |
                                 (DAT_00182f40 >= bVar48) * bVar48) == bVar48);
            auVar93[1] = -((byte)((UNK_00182f41 < bVar52) * UNK_00182f41 |
                                 (UNK_00182f41 >= bVar52) * bVar52) == bVar52);
            auVar93[2] = -((byte)((UNK_00182f42 < bVar54) * UNK_00182f42 |
                                 (UNK_00182f42 >= bVar54) * bVar54) == bVar54);
            auVar93[3] = -((byte)((UNK_00182f43 < bVar56) * UNK_00182f43 |
                                 (UNK_00182f43 >= bVar56) * bVar56) == bVar56);
            auVar93[4] = -((byte)((UNK_00182f44 < bVar58) * UNK_00182f44 |
                                 (UNK_00182f44 >= bVar58) * bVar58) == bVar58);
            auVar93[5] = -((byte)((UNK_00182f45 < bVar60) * UNK_00182f45 |
                                 (UNK_00182f45 >= bVar60) * bVar60) == bVar60);
            auVar93[6] = -((byte)((UNK_00182f46 < bVar62) * UNK_00182f46 |
                                 (UNK_00182f46 >= bVar62) * bVar62) == bVar62);
            auVar93[7] = -((byte)((UNK_00182f47 < bVar64) * UNK_00182f47 |
                                 (UNK_00182f47 >= bVar64) * bVar64) == bVar64);
            auVar93[8] = -((byte)((UNK_00182f48 < bVar69) * UNK_00182f48 |
                                 (UNK_00182f48 >= bVar69) * bVar69) == bVar69);
            auVar93[9] = -((byte)((UNK_00182f49 < bVar70) * UNK_00182f49 |
                                 (UNK_00182f49 >= bVar70) * bVar70) == bVar70);
            auVar93[10] = -((byte)((UNK_00182f4a < bVar71) * UNK_00182f4a |
                                  (UNK_00182f4a >= bVar71) * bVar71) == bVar71);
            auVar93[0xb] = -((byte)((UNK_00182f4b < bVar72) * UNK_00182f4b |
                                   (UNK_00182f4b >= bVar72) * bVar72) == bVar72);
            auVar93[0xc] = -((byte)((UNK_00182f4c < bVar73) * UNK_00182f4c |
                                   (UNK_00182f4c >= bVar73) * bVar73) == bVar73);
            auVar93[0xd] = -((byte)((UNK_00182f4d < bVar74) * UNK_00182f4d |
                                   (UNK_00182f4d >= bVar74) * bVar74) == bVar74);
            auVar93[0xe] = -((byte)((UNK_00182f4e < bVar75) * UNK_00182f4e |
                                   (UNK_00182f4e >= bVar75) * bVar75) == bVar75);
            auVar93[0xf] = -((byte)((UNK_00182f4f < bVar76) * UNK_00182f4f |
                                   (UNK_00182f4f >= bVar76) * bVar76) == bVar76);
            auVar68[0] = -((byte)((DAT_00182f40 < bVar77) * DAT_00182f40 |
                                 (DAT_00182f40 >= bVar77) * bVar77) == bVar77);
            auVar68[1] = -((byte)((UNK_00182f41 < bVar78) * UNK_00182f41 |
                                 (UNK_00182f41 >= bVar78) * bVar78) == bVar78);
            auVar68[2] = -((byte)((UNK_00182f42 < bVar79) * UNK_00182f42 |
                                 (UNK_00182f42 >= bVar79) * bVar79) == bVar79);
            auVar68[3] = -((byte)((UNK_00182f43 < bVar80) * UNK_00182f43 |
                                 (UNK_00182f43 >= bVar80) * bVar80) == bVar80);
            auVar68[4] = -((byte)((UNK_00182f44 < bVar81) * UNK_00182f44 |
                                 (UNK_00182f44 >= bVar81) * bVar81) == bVar81);
            auVar68[5] = -((byte)((UNK_00182f45 < bVar82) * UNK_00182f45 |
                                 (UNK_00182f45 >= bVar82) * bVar82) == bVar82);
            auVar68[6] = -((byte)((UNK_00182f46 < bVar83) * UNK_00182f46 |
                                 (UNK_00182f46 >= bVar83) * bVar83) == bVar83);
            auVar68[7] = -((byte)((UNK_00182f47 < bVar84) * UNK_00182f47 |
                                 (UNK_00182f47 >= bVar84) * bVar84) == bVar84);
            auVar68[8] = -((byte)((UNK_00182f48 < bVar85) * UNK_00182f48 |
                                 (UNK_00182f48 >= bVar85) * bVar85) == bVar85);
            auVar68[9] = -((byte)((UNK_00182f49 < bVar86) * UNK_00182f49 |
                                 (UNK_00182f49 >= bVar86) * bVar86) == bVar86);
            auVar68[10] = -((byte)((UNK_00182f4a < bVar87) * UNK_00182f4a |
                                  (UNK_00182f4a >= bVar87) * bVar87) == bVar87);
            auVar68[0xb] = -((byte)((UNK_00182f4b < bVar88) * UNK_00182f4b |
                                   (UNK_00182f4b >= bVar88) * bVar88) == bVar88);
            auVar68[0xc] = -((byte)((UNK_00182f4c < bVar89) * UNK_00182f4c |
                                   (UNK_00182f4c >= bVar89) * bVar89) == bVar89);
            auVar68[0xd] = -((byte)((UNK_00182f4d < bVar90) * UNK_00182f4d |
                                   (UNK_00182f4d >= bVar90) * bVar90) == bVar90);
            auVar68[0xe] = -((byte)((UNK_00182f4e < bVar91) * UNK_00182f4e |
                                   (UNK_00182f4e >= bVar91) * bVar91) == bVar91);
            auVar68[0xf] = -((byte)((UNK_00182f4f < bVar92) * UNK_00182f4f |
                                   (UNK_00182f4f >= bVar92) * bVar92) == bVar92);
            auVar51[0] = -(*pcVar29 == DAT_00183900);
            auVar51[1] = -(pcVar29[1] == UNK_00183901);
            auVar51[2] = -(pcVar29[2] == UNK_00183902);
            auVar51[3] = -(pcVar29[3] == UNK_00183903);
            auVar51[4] = -(pcVar29[4] == UNK_00183904);
            auVar51[5] = -(pcVar29[5] == UNK_00183905);
            auVar51[6] = -(pcVar29[6] == UNK_00183906);
            auVar51[7] = -(pcVar29[7] == UNK_00183907);
            auVar51[8] = -(pcVar29[8] == UNK_00183908);
            auVar51[9] = -(pcVar29[9] == UNK_00183909);
            auVar51[10] = -(pcVar29[10] == UNK_0018390a);
            auVar51[0xb] = -(pcVar29[0xb] == UNK_0018390b);
            auVar51[0xc] = -(pcVar29[0xc] == UNK_0018390c);
            auVar51[0xd] = -(pcVar29[0xd] == UNK_0018390d);
            auVar51[0xe] = -(pcVar29[0xe] == UNK_0018390e);
            auVar51[0xf] = -(pcVar29[0xf] == UNK_0018390f);
            auVar38 = auVar38 | ~auVar51 & auVar93;
            auVar66[0] = -(*pcVar1 == DAT_00183900);
            auVar66[1] = -(pcVar1[1] == UNK_00183901);
            auVar66[2] = -(pcVar1[2] == UNK_00183902);
            auVar66[3] = -(pcVar1[3] == UNK_00183903);
            auVar66[4] = -(pcVar1[4] == UNK_00183904);
            auVar66[5] = -(pcVar1[5] == UNK_00183905);
            auVar66[6] = -(pcVar1[6] == UNK_00183906);
            auVar66[7] = -(pcVar1[7] == UNK_00183907);
            auVar66[8] = -(pcVar1[8] == UNK_00183908);
            auVar66[9] = -(pcVar1[9] == UNK_00183909);
            auVar66[10] = -(pcVar1[10] == UNK_0018390a);
            auVar66[0xb] = -(pcVar1[0xb] == UNK_0018390b);
            auVar66[0xc] = -(pcVar1[0xc] == UNK_0018390c);
            auVar66[0xd] = -(pcVar1[0xd] == UNK_0018390d);
            auVar66[0xe] = -(pcVar1[0xe] == UNK_0018390e);
            auVar66[0xf] = -(pcVar1[0xf] == UNK_0018390f);
            auVar37 = auVar37 | ~auVar66 & auVar68;
            pppppppuVar22 = pppppppuVar22 + 4;
          } while (pppppppuVar23 != pppppppuVar22);
          auVar37 = psllw(auVar37 | auVar38,7);
          bVar34 = (((((((((((((((SUB161(auVar37 >> 7,0) & 1) != 0 ||
                                (SUB161(auVar37 >> 0xf,0) & 1) != 0) ||
                               (SUB161(auVar37 >> 0x17,0) & 1) != 0) ||
                              (SUB161(auVar37 >> 0x1f,0) & 1) != 0) ||
                             (SUB161(auVar37 >> 0x27,0) & 1) != 0) ||
                            (SUB161(auVar37 >> 0x2f,0) & 1) != 0) ||
                           (SUB161(auVar37 >> 0x37,0) & 1) != 0) ||
                          (SUB161(auVar37 >> 0x3f,0) & 1) != 0) ||
                         (SUB161(auVar37 >> 0x47,0) & 1) != 0) ||
                        (SUB161(auVar37 >> 0x4f,0) & 1) != 0) ||
                       (SUB161(auVar37 >> 0x57,0) & 1) != 0) || (SUB161(auVar37 >> 0x5f,0) & 1) != 0
                      ) || (SUB161(auVar37 >> 0x67,0) & 1) != 0) ||
                    (SUB161(auVar37 >> 0x6f,0) & 1) != 0) || (SUB161(auVar37 >> 0x77,0) & 1) != 0)
                   || auVar37[0xf] < '\0';
          if (pppppppuVar35 != pppppppuVar23) {
            if (((ulonglong)pppppppuVar35 & 0x18) == 0) {
              pppppppuVar22 = (ushort *******)((longlong)pppppppuVar23 + (longlong)pppppppuVar27);
              goto LAB_006afcb3;
            }
            goto LAB_006afc38;
          }
        }
        else {
          pppppppuVar23 = (ushort *******)0x0;
          bVar34 = false;
LAB_006afc38:
          pppppppuVar28 = (ushort *******)((ulonglong)pppppppuVar35 & 0xfffffffffffffff8);
          pppppppuVar22 = (ushort *******)((longlong)pppppppuVar27 + (longlong)pppppppuVar28);
          auVar37 = ZEXT116(bVar34);
          auVar94._8_4_ = 0xffffffff;
          auVar94._0_8_ = 0xffffffffffffffff;
          auVar94._12_4_ = 0xffffffff;
          do {
            uVar36 = *(undefined8 *)((longlong)pppppppuVar27 + (longlong)pppppppuVar23);
            bVar48 = (char)uVar36 + DAT_00183cf0;
            cVar53 = (char)((ulonglong)uVar36 >> 8);
            bVar52 = cVar53 + UNK_00183cf1;
            cVar55 = (char)((ulonglong)uVar36 >> 0x10);
            bVar54 = cVar55 + UNK_00183cf2;
            cVar57 = (char)((ulonglong)uVar36 >> 0x18);
            bVar56 = cVar57 + UNK_00183cf3;
            cVar59 = (char)((ulonglong)uVar36 >> 0x20);
            bVar58 = cVar59 + UNK_00183cf4;
            cVar61 = (char)((ulonglong)uVar36 >> 0x28);
            bVar60 = cVar61 + UNK_00183cf5;
            cVar63 = (char)((ulonglong)uVar36 >> 0x30);
            cVar13 = (char)((ulonglong)uVar36 >> 0x38);
            bVar62 = cVar63 + UNK_00183cf6;
            bVar64 = cVar13 + UNK_00183cf7;
            auVar67[0] = -((byte)((bVar48 < DAT_00183660) * DAT_00183660 |
                                 (bVar48 >= DAT_00183660) * bVar48) == bVar48);
            auVar67[1] = -((byte)((bVar52 < UNK_00183661) * UNK_00183661 |
                                 (bVar52 >= UNK_00183661) * bVar52) == bVar52);
            auVar67[2] = -((byte)((bVar54 < UNK_00183662) * UNK_00183662 |
                                 (bVar54 >= UNK_00183662) * bVar54) == bVar54);
            auVar67[3] = -((byte)((bVar56 < UNK_00183663) * UNK_00183663 |
                                 (bVar56 >= UNK_00183663) * bVar56) == bVar56);
            auVar67[4] = -((byte)((bVar58 < UNK_00183664) * UNK_00183664 |
                                 (bVar58 >= UNK_00183664) * bVar58) == bVar58);
            auVar67[5] = -((byte)((bVar60 < UNK_00183665) * UNK_00183665 |
                                 (bVar60 >= UNK_00183665) * bVar60) == bVar60);
            auVar67[6] = -((byte)((bVar62 < UNK_00183666) * UNK_00183666 |
                                 (bVar62 >= UNK_00183666) * bVar62) == bVar62);
            auVar67[7] = -((byte)((bVar64 < UNK_00183667) * UNK_00183667 |
                                 (bVar64 >= UNK_00183667) * bVar64) == bVar64);
            auVar67[8] = -((byte)((UNK_00183cf8 < UNK_00183668) * UNK_00183668 |
                                 (UNK_00183cf8 >= UNK_00183668) * UNK_00183cf8) == UNK_00183cf8);
            auVar67[9] = -((byte)((UNK_00183cf9 < UNK_00183669) * UNK_00183669 |
                                 (UNK_00183cf9 >= UNK_00183669) * UNK_00183cf9) == UNK_00183cf9);
            auVar67[10] = -((byte)((UNK_00183cfa < UNK_0018366a) * UNK_0018366a |
                                  (UNK_00183cfa >= UNK_0018366a) * UNK_00183cfa) == UNK_00183cfa);
            auVar67[0xb] = -((byte)((UNK_00183cfb < UNK_0018366b) * UNK_0018366b |
                                   (UNK_00183cfb >= UNK_0018366b) * UNK_00183cfb) == UNK_00183cfb);
            auVar67[0xc] = -((byte)((UNK_00183cfc < UNK_0018366c) * UNK_0018366c |
                                   (UNK_00183cfc >= UNK_0018366c) * UNK_00183cfc) == UNK_00183cfc);
            auVar67[0xd] = -((byte)((UNK_00183cfd < UNK_0018366d) * UNK_0018366d |
                                   (UNK_00183cfd >= UNK_0018366d) * UNK_00183cfd) == UNK_00183cfd);
            auVar67[0xe] = -((byte)((UNK_00183cfe < UNK_0018366e) * UNK_0018366e |
                                   (UNK_00183cfe >= UNK_0018366e) * UNK_00183cfe) == UNK_00183cfe);
            auVar67[0xf] = -((byte)((UNK_00183cff < UNK_0018366f) * UNK_0018366f |
                                   (UNK_00183cff >= UNK_0018366f) * UNK_00183cff) == UNK_00183cff);
            auVar39[0] = -((char)uVar36 == s__00184760[0]);
            auVar39[1] = -(cVar53 == s__00184760[1]);
            auVar39[2] = -(cVar55 == s__00184760[2]);
            auVar39[3] = -(cVar57 == s__00184760[3]);
            auVar39[4] = -(cVar59 == s__00184760[4]);
            auVar39[5] = -(cVar61 == s__00184760[5]);
            auVar39[6] = -(cVar63 == s__00184760[6]);
            auVar39[7] = -(cVar13 == s__00184760[7]);
            auVar39[8] = -(s__00184760[8] == '\0');
            auVar39[9] = -(UNK_00184769 == '\0');
            auVar39[10] = -(UNK_0018476a == '\0');
            auVar39[0xb] = -(UNK_0018476b == '\0');
            auVar39[0xc] = -(UNK_0018476c == '\0');
            auVar39[0xd] = -(UNK_0018476d == '\0');
            auVar39[0xe] = -(UNK_0018476e == '\0');
            auVar39[0xf] = -(UNK_0018476f == '\0');
            auVar39 = auVar39 | auVar67;
            auVar47._0_14_ = auVar39._0_14_;
            auVar47[0xe] = auVar39[7];
            auVar47[0xf] = auVar39[7];
            auVar46._14_2_ = auVar47._14_2_;
            auVar46._0_13_ = auVar39._0_13_;
            auVar46[0xd] = auVar39[6];
            auVar45._13_3_ = auVar46._13_3_;
            auVar45._0_12_ = auVar39._0_12_;
            auVar45[0xc] = auVar39[6];
            auVar44._12_4_ = auVar45._12_4_;
            auVar44._0_11_ = auVar39._0_11_;
            auVar44[0xb] = auVar39[5];
            auVar43._11_5_ = auVar44._11_5_;
            auVar43._0_10_ = auVar39._0_10_;
            auVar43[10] = auVar39[5];
            auVar42._10_6_ = auVar43._10_6_;
            auVar42._0_9_ = auVar39._0_9_;
            auVar42[9] = auVar39[4];
            auVar41._9_7_ = auVar42._9_7_;
            auVar41._0_8_ = auVar39._0_8_;
            auVar41[8] = auVar39[4];
            auVar40._8_8_ = auVar41._8_8_;
            auVar40[7] = auVar39[3];
            auVar40[6] = auVar39[3];
            auVar40[5] = auVar39[2];
            auVar40[4] = auVar39[2];
            auVar40[3] = auVar39[1];
            auVar40[2] = auVar39[1];
            auVar40[0] = auVar39[0];
            auVar40[1] = auVar40[0];
            auVar37 = auVar37 | auVar40 ^ auVar94;
            pppppppuVar23 = pppppppuVar23 + 1;
          } while (pppppppuVar28 != pppppppuVar23);
          auVar37 = psllw(auVar37,7);
          bVar34 = (((((((SUB161(auVar37 >> 7,0) & 1) != 0 || (SUB161(auVar37 >> 0x17,0) & 1) != 0)
                       || (SUB161(auVar37 >> 0x27,0) & 1) != 0) ||
                      (SUB161(auVar37 >> 0x37,0) & 1) != 0) || (SUB161(auVar37 >> 0x47,0) & 1) != 0)
                    || (SUB161(auVar37 >> 0x57,0) & 1) != 0) || (SUB161(auVar37 >> 0x67,0) & 1) != 0
                   ) || (SUB161(auVar37 >> 0x77,0) & 1) != 0;
          if (pppppppuVar35 != pppppppuVar28) goto LAB_006afcb3;
        }
      }
      else {
        bVar34 = false;
        pppppppuVar22 = pppppppuVar27;
LAB_006afcb3:
        do {
          cVar13 = *(char *)pppppppuVar22;
          pppppppuVar22 = (ushort *******)((longlong)pppppppuVar22 + 1);
          bVar34 = (bool)(bVar34 | (cVar13 != '\t' && (byte)(cVar13 + 0x81U) < 0xa1));
        } while (pppppppuVar22 !=
                 (ushort *******)((longlong)pppppppuVar27 + (longlong)pppppppuVar35));
      }
      bVar11 = true;
      if (bVar34) goto LAB_006af9f0;
LAB_006afcea:
      local_148 = (ushort *******)0x0;
      local_128 = 0;
      local_118 = (ushort *******)0x2c0000002c;
      uStack_110 = 1;
      local_108 = 1;
      pppppppuStack_140 = pppppppuVar35;
      local_138 = pppppppuVar27;
      uStack_130 = pppppppuVar35;
      pppppppuStack_120 = pppppppuVar35;
      <alloc[12e961f32105355]::vec::Vec<http[56314f485c23ccf6]::header::name::HeaderName>as_alloc[12e961f32105355]::vec::spec_from_iter::SpecFromIter<http[56314f485c23ccf6]::header::name::HeaderName,core[c0acaeba6ab4c2e0]::iter::adapters::filter_map::FilterMap<core[c0acaeba6ab4c2e0]::str::iter::Split<char>,<hyper[c4782d5b5c5e3493]::proto::h1::role::Server>::encode_headers<<hyper[c4782d5b5c5e3493]::proto::h1::role::Server>::encode_headers_with_lower_case::LowercaseWriter>::{closure#1}>>>
      ::from_iter(&local_b0,&local_148);
      if (local_1e8._0_8_ == -1) {
        local_1d8 = local_a0;
        auVar37._8_8_ = pppppppuStack_a8;
        auVar37._0_8_ = local_b0;
        local_1e8 = auVar37;
      }
      else {
        uStack_130 = pppppppuStack_a8 + (longlong)local_a0 * 4;
        local_148 = pppppppuStack_a8;
        local_138 = local_b0;
        pppppppuStack_140 = pppppppuStack_a8;
        auVar37._0_8_ =
             <alloc[12e961f32105355]::vec::Vec<http[56314f485c23ccf6]::header::name::HeaderName>as_alloc[12e961f32105355]::vec::spec_extend::SpecExtend<http[56314f485c23ccf6]::header::name::HeaderName,alloc[12e961f32105355]::vec::into_iter::IntoIter<http[56314f485c23ccf6]::header::name::HeaderName>>>
             ::spec_extend(local_1e8,&local_148);
        auVar37._8_8_ = extraout_XMM0_Qb_11;
      }
      break;
    case 0x45:
switchD_006af23f_caseD_45:
      if ((cVar14 == '\x01') && (!bVar11)) {
        if (local_230 <= (ulonglong)param_3[2]) {
          param_3[2] = local_230;
        }
        pppppppuVar27 = (ushort *******)<hyper[c4782d5b5c5e3493]::error::Error>::new_user_header();
        uVar36 = extraout_XMM0_Qa_07;
        goto LAB_006b0252;
      }
      if (*(char *)((longlong)local_1a8 + 0x6a) == '\x01') goto LAB_006af9f0;
      if (*local_1f0 != '\x05') {
        sVar2 = *(short *)(local_1a8 + 0xd);
        if (*local_1f0 == '\a') {
          if ((ushort)(sVar2 - 100U) < 200) goto LAB_006af9f0;
        }
        else if ((ushort)(sVar2 - 100U) < 100) goto LAB_006af9f0;
        if ((sVar2 != 0xcc) && (sVar2 != 0x130)) {
          uVar30 = hyper[c4782d5b5c5e3493]::headers::is_chunked_(local_228);
          pppppppuVar27 = local_268;
          auVar37._8_8_ = extraout_XMM0_Qb_08;
          auVar37._0_8_ = extraout_XMM0_Qa_02;
          local_200 = (ushort *******)(uVar30 ^ 1);
          if (bVar11) {
            lVar18 = param_3[2];
            if ((ulonglong)(*param_3 - lVar18) < 2) {
              param_5 = (ushort *******)0x1;
              auVar37._0_8_ =
                   <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle
                   ::<alloc[12e961f32105355]::alloc::Global>(param_3,lVar18,2,1);
              auVar37._8_8_ = extraout_XMM0_Qb_16;
              lVar18 = param_3[2];
            }
            pppppppuVar27 = local_218;
            *(undefined2 *)(param_3[1] + lVar18) = 0x202c;
            lVar18 = param_3[2] + 2;
            param_3[2] = lVar18;
            if ((ushort *******)(*param_3 - lVar18) < local_218) {
              param_5 = (ushort *******)0x1;
              uVar36 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                       do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                                 (param_3,lVar18,local_218,1);
              goto LAB_006aff11;
            }
LAB_006af68a:
            uVar36 = auVar37._0_8_;
            pppppppuVar27 = local_218;
            if (local_218 != (ushort *******)0x0) goto LAB_006af68f;
          }
          else {
            if (((-0x7fffffffffffffff < (longlong)local_268) &&
                (local_268 != (ushort *******)0xffffffffffffffff)) &&
               (uVar36 = <alloc[12e961f32105355]::vec::Vec<http[56314f485c23ccf6]::header::name::HeaderName>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
                         ::drop(&local_268), pppppppuVar27 != (ushort *******)0x0)) {
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar36,8);
            }
            local_268 = (ushort *******)0xffffffffffffffff;
            uStack_250 = (ushort *******)((ulonglong)uStack_250 & 0xffffffffffffff00);
            lVar18 = param_3[2];
            if ((ulonglong)(*param_3 - lVar18) < 0x13) {
              param_5 = (ushort *******)0x1;
              <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[12e961f32105355]::alloc::Global>(param_3,lVar18,0x13,1);
              lVar18 = param_3[2];
            }
            pppppppuVar27 = local_218;
            auVar37 = _DAT_001a58aa;
            lVar25 = param_3[1];
            *(undefined1 (*) [16])(lVar25 + lVar18) = _DAT_001a58aa;
            *(undefined4 *)(lVar25 + 0xf + lVar18) = 0x203a676e;
            lVar18 = param_3[2] + 0x13;
            param_3[2] = lVar18;
            if (local_218 <= (ushort *******)(*param_3 - lVar18)) goto LAB_006af68a;
            param_5 = (ushort *******)0x1;
            uVar36 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                     do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                               (param_3,lVar18,local_218,1);
LAB_006aff11:
LAB_006af68f:
            auVar37._0_8_ = (*(code *)PTR_memcpy_00799008)(uVar36,pppppppuVar27);
            auVar37._8_8_ = extraout_XMM0_Qb_06;
            lVar18 = param_3[2];
          }
          param_3[2] = (longlong)(lVar18 + (longlong)pppppppuVar27);
LAB_006af9d5:
          cVar14 = '\x01';
          bVar11 = true;
        }
      }
      goto LAB_006af9f0;
    }
  } while( true );
}


