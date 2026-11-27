// 00628770 normalize_thought_level

/* WARNING: Switch with 1 destination removed at 0x0062abbc */
/* craggemini_core[66f3c71560d70857]::server::normalize_thought_level */

ulonglong * __rustcall
craggemini_core[66f3c71560d70857]::server::normalize_thought_level
          (ulonglong *param_1,ulonglong param_2,char *param_3,longlong param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  ushort uVar3;
  code *pcVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  char cVar44;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar48;
  char cVar49;
  char cVar50;
  char cVar51;
  char cVar52;
  char cVar53;
  char cVar54;
  char cVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  longlong *plVar72;
  undefined8 *puVar73;
  int iVar74;
  ulonglong *puVar75;
  char **ppcVar76;
  char **ppcVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  char cVar81;
  ulonglong uVar82;
  longlong *plVar83;
  char **ppcVar84;
  ulonglong uVar85;
  longlong lVar86;
  undefined8 *puVar87;
  ulonglong *puVar88;
  ulonglong uVar89;
  longlong lVar90;
  ulonglong uVar91;
  longlong lVar92;
  longlong lVar93;
  longlong lVar94;
  char *pcVar95;
  longlong lVar96;
  longlong lVar97;
  longlong lVar98;
  ulonglong uVar99;
  char *pcVar100;
  bool bVar101;
  bool bVar102;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar103;
  undefined8 extraout_XMM0_Qa_01;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  byte bVar126;
  byte bVar127;
  byte bVar128;
  byte bVar129;
  byte bVar130;
  byte bVar131;
  byte bVar132;
  byte bVar133;
  byte bVar134;
  byte bVar135;
  byte bVar136;
  byte bVar137;
  byte bVar138;
  byte bVar139;
  byte bVar140;
  byte bVar141;
  byte bVar142;
  byte bVar143;
  char *local_110;
  char *local_108;
  char *local_100;
  longlong local_f8;
  ulonglong local_f0;
  longlong local_e8;
  ulonglong local_e0;
  char *local_d8;
  char *local_c8;
  char *local_c0;
  longlong local_90;
  char *local_88;
  ulonglong local_80;
  ulonglong local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_48;
  
  if (param_2 != 0) {
    local_e8 = 0;
    uVar99 = param_2;
    local_100 = param_3;
    do {
      uVar91 = (ulonglong)*(ushort *)(uVar99 + 0x272);
      uVar85 = (ulonglong)((uint)*(ushort *)(uVar99 + 0x272) * 8);
      lVar93 = uVar85 * 3;
      uVar89 = 0xffffffffffffffff;
      lVar94 = uVar99 + 0x168;
      plVar72 = (longlong *)(uVar99 - 0x10);
      do {
        plVar83 = plVar72;
        if (lVar93 == 0) goto LAB_00628855;
        uVar82 = *(ulonglong *)(lVar94 + 0x10);
        lVar96 = uVar82 - 10;
        if (9 < uVar82) {
          uVar82 = 10;
        }
        iVar74 = (*(code *)PTR_memcmp_00799528)(uVar85,uVar82);
        lVar96 = -lVar96;
        if (iVar74 != 0) {
          lVar96 = (longlong)iVar74;
        }
        bVar78 = (0 < lVar96) - (lVar96 < 0);
        uVar85 = (ulonglong)bVar78;
        uVar89 = uVar89 + 1;
        lVar93 = lVar93 + -0x18;
        lVar94 = lVar94 + 0x18;
        plVar72 = plVar83 + 4;
      } while (bVar78 == 1);
      uVar91 = uVar89;
      if (bVar78 == 0) {
        if (((char)plVar83[2] != '\x05') || (lVar93 = plVar83[3], lVar93 == 0)) goto LAB_00628d08;
        local_f8 = plVar83[4];
        lVar94 = lVar93;
        local_e8 = local_f8;
        goto LAB_006288c0;
      }
LAB_00628855:
      bVar101 = local_100 == (char *)0x0;
      local_100 = local_100 + -1;
      if (bVar101) goto LAB_00628d11;
      uVar99 = *(ulonglong *)(uVar99 + 0x278 + uVar91 * 8);
    } while( true );
  }
  local_e8 = 0;
LAB_0062897e:
  local_c0 = (char *)0x0;
LAB_00629074:
  local_90 = local_e8;
  local_88 = local_c0;
  local_80 = 0;
  local_70 = 0;
  bVar80 = 0;
  bVar78 = 0;
  lVar93 = 0;
LAB_006290ee:
  pcVar95 = (char *)(&local_90)[lVar93];
  lVar94 = lVar93 + 1;
  if ((pcVar95 == (char *)0x0) || (*pcVar95 != '\x05')) {
    if ((lVar94 == 2) || (local_c0 == (char *)0x0)) goto LAB_006296c8;
    lVar94 = 2;
    pcVar95 = local_c0;
    if (*local_c0 != '\x05') goto LAB_006296c8;
  }
  lVar93 = *(longlong *)(pcVar95 + 8);
  if (lVar93 != 0) {
    local_e0 = *(ulonglong *)(pcVar95 + 0x10);
    lVar96 = lVar93;
    local_110 = (char *)local_e0;
    do {
      uVar3 = *(ushort *)(lVar96 + 0x272);
      pcVar95 = (char *)(lVar96 + -0x20);
      uVar99 = (ulonglong)((uint)uVar3 * 8);
      lVar90 = uVar99 * 3;
      uVar91 = 0xffffffffffffffff;
      lVar98 = lVar96 + 0x168;
      do {
        uVar85 = (ulonglong)uVar3;
        if (lVar90 == 0) goto joined_r0x006291fe;
        uVar85 = *(ulonglong *)(lVar98 + 0x10);
        lVar92 = uVar85 - 0xf;
        if (0xe < uVar85) {
          uVar85 = 0xf;
        }
        iVar74 = (*(code *)PTR_memcmp_00799528)(uVar99,uVar85);
        lVar92 = -lVar92;
        if (iVar74 != 0) {
          lVar92 = (longlong)iVar74;
        }
        bVar79 = (0 < lVar92) - (lVar92 < 0);
        uVar99 = (ulonglong)bVar79;
        pcVar95 = pcVar95 + 0x20;
        uVar91 = uVar91 + 1;
        lVar90 = lVar90 + -0x18;
        lVar98 = lVar98 + 0x18;
      } while (bVar79 == 1);
      uVar85 = uVar91;
      if (bVar79 == 0) goto LAB_006292e0;
joined_r0x006291fe:
      if (local_110 == (char *)0x0) goto LAB_00629212;
      local_110 = (char *)((longlong)local_110 + -1);
      lVar96 = *(longlong *)(lVar96 + 0x278 + uVar85 * 8);
    } while( true );
  }
  goto LAB_006290df;
LAB_006288c0:
  uVar99 = (ulonglong)*(ushort *)(lVar94 + 0x272);
  uVar91 = (ulonglong)((uint)*(ushort *)(lVar94 + 0x272) * 8);
  lVar96 = uVar91 * 3;
  uVar85 = 0xffffffffffffffff;
  lVar90 = lVar94 + 0x168;
  plVar72 = (longlong *)(lVar94 + -0x10);
  do {
    plVar83 = plVar72;
    lVar98 = local_f8;
    lVar92 = lVar93;
    if (lVar96 == 0) goto LAB_00628951;
    uVar89 = *(ulonglong *)(lVar90 + 0x10);
    lVar97 = uVar89 - 6;
    if (5 < uVar89) {
      uVar89 = 6;
    }
    iVar74 = (*(code *)PTR_memcmp_00799528)(uVar91,uVar89);
    lVar97 = -lVar97;
    if (iVar74 != 0) {
      lVar97 = (longlong)iVar74;
    }
    bVar78 = (0 < lVar97) - (lVar97 < 0);
    uVar91 = (ulonglong)bVar78;
    uVar85 = uVar85 + 1;
    lVar96 = lVar96 + -0x18;
    lVar90 = lVar90 + 0x18;
    plVar72 = plVar83 + 4;
  } while (bVar78 == 1);
  uVar99 = uVar85;
  if (bVar78 == 0) {
    if (((char)plVar83[2] == '\x05') && (lVar94 = plVar83[3], lVar94 != 0)) {
      local_c0 = (char *)plVar83[4];
      lVar96 = lVar94;
      local_100 = local_c0;
      goto LAB_006289d4;
    }
    goto LAB_00628ba0;
  }
LAB_00628951:
  bVar101 = local_e8 == 0;
  local_e8 = local_e8 + -1;
  if (bVar101) goto LAB_00628ba0;
  lVar94 = *(longlong *)(lVar94 + 0x278 + uVar99 * 8);
  goto LAB_006288c0;
LAB_006289d4:
  uVar3 = *(ushort *)(lVar96 + 0x272);
  local_e8 = lVar96 + -0x20;
  uVar91 = (ulonglong)((uint)uVar3 * 8);
  lVar90 = uVar91 * 3;
  uVar99 = 0xffffffffffffffff;
  lVar97 = lVar96 + 0x168;
  do {
    if (lVar90 == 0) {
      uVar99 = (ulonglong)uVar3;
      goto LAB_00628a7c;
    }
    uVar85 = *(ulonglong *)(lVar97 + 0x10);
    lVar86 = uVar85 - 0xf;
    if (0xe < uVar85) {
      uVar85 = 0xf;
    }
    iVar74 = (*(code *)PTR_memcmp_00799528)(uVar91,uVar85);
    lVar86 = -lVar86;
    if (iVar74 != 0) {
      lVar86 = (longlong)iVar74;
    }
    bVar78 = (0 < lVar86) - (lVar86 < 0);
    uVar91 = (ulonglong)bVar78;
    local_e8 = local_e8 + 0x20;
    uVar99 = uVar99 + 1;
    lVar90 = lVar90 + -0x18;
    lVar97 = lVar97 + 0x18;
  } while (bVar78 == 1);
  if (bVar78 == 0) goto LAB_00628d11;
LAB_00628a7c:
  bVar101 = local_100 == (char *)0x0;
  local_100 = (char *)((longlong)local_100 + -1);
  if (bVar101) goto LAB_00628ab4;
  lVar96 = *(longlong *)(lVar96 + 0x278 + uVar99 * 8);
  goto LAB_006289d4;
LAB_00628ab4:
  uVar3 = *(ushort *)(lVar94 + 0x272);
  local_e8 = lVar94 + -0x20;
  uVar91 = (ulonglong)((uint)uVar3 * 8);
  lVar96 = uVar91 * 3;
  uVar99 = 0xffffffffffffffff;
  lVar90 = lVar94 + 0x168;
  do {
    if (lVar96 == 0) {
      uVar99 = (ulonglong)uVar3;
      goto LAB_00628b56;
    }
    uVar85 = *(ulonglong *)(lVar90 + 0x10);
    lVar97 = uVar85 - 0xe;
    if (0xd < uVar85) {
      uVar85 = 0xe;
    }
    iVar74 = (*(code *)PTR_memcmp_00799528)(uVar91,uVar85);
    lVar97 = -lVar97;
    if (iVar74 != 0) {
      lVar97 = (longlong)iVar74;
    }
    bVar78 = (0 < lVar97) - (lVar97 < 0);
    uVar91 = (ulonglong)bVar78;
    local_e8 = local_e8 + 0x20;
    uVar99 = uVar99 + 1;
    lVar96 = lVar96 + -0x18;
    lVar90 = lVar90 + 0x18;
  } while (bVar78 == 1);
  if (bVar78 == 0) goto LAB_00628d11;
LAB_00628b56:
  bVar101 = local_c0 == (char *)0x0;
  local_c0 = (char *)((longlong)local_c0 + -1);
  if (bVar101) goto LAB_00628ba0;
  lVar94 = *(longlong *)(lVar94 + 0x278 + uVar99 * 8);
  goto LAB_00628ab4;
LAB_00628ba0:
  uVar99 = (ulonglong)*(ushort *)(lVar92 + 0x272);
  local_e8 = lVar92 + -0x20;
  uVar91 = (ulonglong)((uint)*(ushort *)(lVar92 + 0x272) * 8);
  lVar94 = uVar91 * 3;
  uVar85 = 0xffffffffffffffff;
  lVar96 = lVar92 + 0x168;
  do {
    if (lVar94 == 0) goto LAB_00628b89;
    uVar89 = *(ulonglong *)(lVar96 + 0x10);
    uVar82 = 0xf;
    if (uVar89 < 0xf) {
      uVar82 = uVar89;
    }
    iVar74 = (*(code *)PTR_memcmp_00799528)(uVar91,uVar82);
    lVar90 = -(uVar89 - 0xf);
    if (iVar74 != 0) {
      lVar90 = (longlong)iVar74;
    }
    bVar78 = (0 < lVar90) - (lVar90 < 0);
    uVar91 = (ulonglong)bVar78;
    local_e8 = local_e8 + 0x20;
    uVar85 = uVar85 + 1;
    lVar94 = lVar94 + -0x18;
    lVar96 = lVar96 + 0x18;
  } while (bVar78 == 1);
  uVar99 = uVar85;
  if (bVar78 == 0) goto LAB_00628d11;
LAB_00628b89:
  if (lVar98 == 0) goto LAB_00628c52;
  lVar98 = lVar98 + -1;
  lVar92 = *(longlong *)(lVar92 + 0x278 + uVar99 * 8);
  goto LAB_00628ba0;
LAB_00628c52:
  uVar99 = (ulonglong)*(ushort *)(lVar93 + 0x272);
  local_e8 = lVar93 + -0x20;
  uVar91 = (ulonglong)((uint)*(ushort *)(lVar93 + 0x272) * 8);
  lVar94 = uVar91 * 3;
  uVar85 = 0xffffffffffffffff;
  lVar96 = lVar93 + 0x168;
  do {
    if (lVar94 == 0) goto LAB_00628ce4;
    uVar89 = *(ulonglong *)(lVar96 + 0x10);
    lVar90 = uVar89 - 0xe;
    if (0xd < uVar89) {
      uVar89 = 0xe;
    }
    iVar74 = (*(code *)PTR_memcmp_00799528)(uVar91,uVar89);
    lVar90 = -lVar90;
    if (iVar74 != 0) {
      lVar90 = (longlong)iVar74;
    }
    bVar78 = (0 < lVar90) - (lVar90 < 0);
    uVar91 = (ulonglong)bVar78;
    local_e8 = local_e8 + 0x20;
    uVar85 = uVar85 + 1;
    lVar94 = lVar94 + -0x18;
    lVar96 = lVar96 + 0x18;
  } while (bVar78 == 1);
  uVar99 = uVar85;
  if (bVar78 == 0) goto LAB_00628d11;
LAB_00628ce4:
  bVar101 = local_f8 == 0;
  local_f8 = local_f8 + -1;
  if (bVar101) goto LAB_00628d08;
  lVar93 = *(longlong *)(lVar93 + 0x278 + uVar99 * 8);
  goto LAB_00628c52;
LAB_00628d08:
  local_e8 = 0;
LAB_00628d11:
  uVar99 = param_2;
  local_100 = param_3;
  do {
    local_f0 = (ulonglong)*(ushort *)(uVar99 + 0x272);
    pcVar95 = (char *)(uVar99 - 0x20);
    lVar93 = (ulonglong)((uint)*(ushort *)(uVar99 + 0x272) * 8) * 3;
    uVar91 = 0xffffffffffffffff;
    lVar94 = uVar99 + 0x168;
    do {
      if (lVar93 == 0) {
        uVar91 = local_f0;
        goto LAB_00628db5;
      }
      lVar96 = *(longlong *)(lVar94 + 0x10);
      iVar74 = (*(code *)PTR_memcmp_00799528)();
      lVar96 = -(lVar96 + -0x10);
      if (iVar74 != 0) {
        lVar96 = (longlong)iVar74;
      }
      pcVar95 = pcVar95 + 0x20;
      uVar91 = uVar91 + 1;
      lVar93 = lVar93 + -0x18;
      lVar94 = lVar94 + 0x18;
    } while ((char)((0 < lVar96) - (lVar96 < 0)) == '\x01');
    if (0 < lVar96 == lVar96 < 0) goto LAB_00628ea7;
LAB_00628db5:
    bVar101 = local_100 == (char *)0x0;
    local_100 = local_100 + -1;
    if (bVar101) break;
    uVar99 = *(ulonglong *)(uVar99 + 0x278 + uVar91 * 8);
  } while( true );
  uVar99 = param_2;
  local_100 = param_3;
  do {
    local_f0 = (ulonglong)*(ushort *)(uVar99 + 0x272);
    pcVar95 = (char *)(uVar99 - 0x20);
    lVar93 = (ulonglong)((uint)*(ushort *)(uVar99 + 0x272) * 8) * 3;
    uVar91 = 0xffffffffffffffff;
    lVar94 = uVar99 + 0x168;
    do {
      if (lVar93 == 0) {
        uVar91 = local_f0;
        goto LAB_00628e81;
      }
      lVar96 = *(longlong *)(lVar94 + 0x10);
      iVar74 = (*(code *)PTR_memcmp_00799528)();
      lVar96 = -(lVar96 + -0x11);
      if (iVar74 != 0) {
        lVar96 = (longlong)iVar74;
      }
      pcVar95 = pcVar95 + 0x20;
      uVar91 = uVar91 + 1;
      lVar93 = lVar93 + -0x18;
      lVar94 = lVar94 + 0x18;
    } while ((char)((0 < lVar96) - (lVar96 < 0)) == '\x01');
    if (0 < lVar96 == lVar96 < 0) break;
LAB_00628e81:
    bVar101 = local_100 == (char *)0x0;
    local_100 = local_100 + -1;
    if (bVar101) goto LAB_00628f97;
    uVar99 = *(ulonglong *)(uVar99 + 0x278 + uVar91 * 8);
  } while( true );
LAB_00628ea7:
  if ((*pcVar95 == '\x05') && (lVar93 = *(longlong *)(pcVar95 + 8), lVar93 != 0)) {
    local_e0 = *(ulonglong *)(pcVar95 + 0x10);
    lVar94 = lVar93;
    local_100 = (char *)local_e0;
    do {
      local_f0 = (ulonglong)*(ushort *)(lVar94 + 0x272);
      local_c0 = (char *)(lVar94 + -0x20);
      uVar91 = (ulonglong)((uint)*(ushort *)(lVar94 + 0x272) * 8);
      lVar96 = uVar91 * 3;
      uVar99 = 0xffffffffffffffff;
      lVar90 = lVar94 + 0x168;
      do {
        if (lVar96 == 0) {
          uVar99 = local_f0;
          goto LAB_00628f75;
        }
        uVar85 = *(ulonglong *)(lVar90 + 0x10);
        lVar98 = uVar85 - 0xe;
        if (0xd < uVar85) {
          uVar85 = 0xe;
        }
        iVar74 = (*(code *)PTR_memcmp_00799528)(uVar91,uVar85);
        lVar98 = -lVar98;
        if (iVar74 != 0) {
          lVar98 = (longlong)iVar74;
        }
        bVar78 = (0 < lVar98) - (lVar98 < 0);
        uVar91 = (ulonglong)bVar78;
        local_c0 = local_c0 + 0x20;
        uVar99 = uVar99 + 1;
        lVar96 = lVar96 + -0x18;
        lVar90 = lVar90 + 0x18;
      } while (bVar78 == 1);
      if (bVar78 == 0) goto LAB_00629074;
LAB_00628f75:
      bVar101 = local_100 == (char *)0x0;
      local_100 = (char *)((longlong)local_100 + -1);
      if (bVar101) goto LAB_00628faa;
      lVar94 = *(longlong *)(lVar94 + 0x278 + uVar99 * 8);
    } while( true );
  }
LAB_00628f97:
  local_c0 = (char *)0x0;
  goto LAB_00629074;
LAB_00628faa:
  uVar99 = (ulonglong)*(ushort *)(lVar93 + 0x272);
  local_c0 = (char *)(lVar93 + -0x20);
  uVar91 = (ulonglong)((uint)*(ushort *)(lVar93 + 0x272) * 8);
  lVar94 = uVar91 * 3;
  uVar85 = 0xffffffffffffffff;
  lVar96 = lVar93 + 0x168;
  do {
    if (lVar94 == 0) goto LAB_00629041;
    uVar89 = *(ulonglong *)(lVar96 + 0x10);
    lVar90 = uVar89 - 0xf;
    if (0xe < uVar89) {
      uVar89 = 0xf;
    }
    iVar74 = (*(code *)PTR_memcmp_00799528)(uVar91,uVar89);
    lVar90 = -lVar90;
    if (iVar74 != 0) {
      lVar90 = (longlong)iVar74;
    }
    bVar78 = (0 < lVar90) - (lVar90 < 0);
    uVar91 = (ulonglong)bVar78;
    local_c0 = local_c0 + 0x20;
    uVar85 = uVar85 + 1;
    lVar94 = lVar94 + -0x18;
    lVar96 = lVar96 + 0x18;
  } while (bVar78 == 1);
  uVar99 = uVar85;
  if (bVar78 == 0) goto LAB_00629074;
LAB_00629041:
  bVar101 = local_e0 == 0;
  local_e0 = local_e0 + -1;
  if (bVar101) goto LAB_0062897e;
  lVar93 = *(longlong *)(lVar93 + 0x278 + uVar99 * 8);
  goto LAB_00628faa;
LAB_00629212:
  lVar96 = lVar93;
  local_110 = (char *)local_e0;
  do {
    uVar99 = (ulonglong)*(ushort *)(lVar96 + 0x272);
    pcVar95 = (char *)(lVar96 + -0x20);
    uVar91 = (ulonglong)((uint)*(ushort *)(lVar96 + 0x272) * 8);
    lVar90 = uVar91 * 3;
    uVar85 = 0xffffffffffffffff;
    lVar98 = lVar96 + 0x168;
    do {
      if (lVar90 == 0) goto LAB_006292b5;
      uVar89 = *(ulonglong *)(lVar98 + 0x10);
      lVar92 = uVar89 - 0x10;
      if (0xf < uVar89) {
        uVar89 = 0x10;
      }
      iVar74 = (*(code *)PTR_memcmp_00799528)(uVar91,uVar89);
      lVar92 = -lVar92;
      if (iVar74 != 0) {
        lVar92 = (longlong)iVar74;
      }
      bVar79 = (0 < lVar92) - (lVar92 < 0);
      uVar91 = (ulonglong)bVar79;
      pcVar95 = pcVar95 + 0x20;
      uVar85 = uVar85 + 1;
      lVar90 = lVar90 + -0x18;
      lVar98 = lVar98 + 0x18;
    } while (bVar79 == 1);
    uVar99 = uVar85;
    if (bVar79 == 0) break;
LAB_006292b5:
    bVar101 = local_110 == (char *)0x0;
    local_110 = (char *)((longlong)local_110 + -1);
    if (bVar101) goto LAB_006292f9;
    lVar96 = *(longlong *)(lVar96 + 0x278 + uVar99 * 8);
  } while( true );
LAB_006292e0:
  if (*pcVar95 == '\x01') {
    bVar80 = bVar80 | pcVar95[1] ^ 1U;
  }
LAB_006292f9:
  lVar96 = lVar93;
  local_110 = (char *)local_e0;
  do {
    uVar3 = *(ushort *)(lVar96 + 0x272);
    pcVar95 = (char *)(lVar96 + -0x20);
    uVar99 = (ulonglong)((uint)uVar3 * 8);
    lVar90 = uVar99 * 3;
    uVar91 = 0xffffffffffffffff;
    lVar98 = lVar96 + 0x168;
    do {
      uVar85 = (ulonglong)uVar3;
      if (lVar90 == 0) goto joined_r0x006293be;
      uVar85 = *(ulonglong *)(lVar98 + 0x10);
      lVar92 = uVar85 - 0xe;
      if (0xd < uVar85) {
        uVar85 = 0xe;
      }
      iVar74 = (*(code *)PTR_memcmp_00799528)(uVar99,uVar85);
      lVar92 = -lVar92;
      if (iVar74 != 0) {
        lVar92 = (longlong)iVar74;
      }
      bVar79 = (0 < lVar92) - (lVar92 < 0);
      uVar99 = (ulonglong)bVar79;
      pcVar95 = pcVar95 + 0x20;
      uVar91 = uVar91 + 1;
      lVar90 = lVar90 + -0x18;
      lVar98 = lVar98 + 0x18;
    } while (bVar79 == 1);
    uVar85 = uVar91;
    if (bVar79 == 0) goto LAB_006294a0;
joined_r0x006293be:
    if (local_110 == (char *)0x0) break;
    local_110 = (char *)((longlong)local_110 + -1);
    lVar96 = *(longlong *)(lVar96 + 0x278 + uVar85 * 8);
  } while( true );
  lVar96 = lVar93;
  local_110 = (char *)local_e0;
  do {
    uVar99 = (ulonglong)*(ushort *)(lVar96 + 0x272);
    pcVar95 = (char *)(lVar96 + -0x20);
    uVar91 = (ulonglong)((uint)*(ushort *)(lVar96 + 0x272) * 8);
    lVar90 = uVar91 * 3;
    uVar85 = 0xffffffffffffffff;
    lVar98 = lVar96 + 0x168;
    do {
      if (lVar90 == 0) goto LAB_00629475;
      uVar89 = *(ulonglong *)(lVar98 + 0x10);
      lVar92 = uVar89 - 0xf;
      if (0xe < uVar89) {
        uVar89 = 0xf;
      }
      iVar74 = (*(code *)PTR_memcmp_00799528)(uVar91,uVar89);
      lVar92 = -lVar92;
      if (iVar74 != 0) {
        lVar92 = (longlong)iVar74;
      }
      bVar79 = (0 < lVar92) - (lVar92 < 0);
      uVar91 = (ulonglong)bVar79;
      pcVar95 = pcVar95 + 0x20;
      uVar85 = uVar85 + 1;
      lVar90 = lVar90 + -0x18;
      lVar98 = lVar98 + 0x18;
    } while (bVar79 == 1);
    uVar99 = uVar85;
    if (bVar79 == 0) break;
LAB_00629475:
    bVar101 = local_110 == (char *)0x0;
    local_110 = (char *)((longlong)local_110 + -1);
    if (bVar101) goto LAB_00629509;
    lVar96 = *(longlong *)(lVar96 + 0x278 + uVar99 * 8);
  } while( true );
LAB_006294a0:
  if ((*pcVar95 == '\x02') && (*(longlong *)(pcVar95 + 8) != 2)) {
    if ((int)*(longlong *)(pcVar95 + 8) == 1) {
      pcVar95 = *(char **)(pcVar95 + 0x10);
    }
    else {
      pcVar95 = *(char **)(pcVar95 + 0x10);
      if ((longlong)pcVar95 < 0) goto LAB_00629509;
    }
    bVar80 = pcVar95 == (char *)0x0;
    if (!(bool)bVar80) {
      local_c8 = pcVar95;
    }
    bVar78 = bVar78 | !(bool)bVar80;
  }
LAB_00629509:
  lVar96 = lVar93;
  local_110 = (char *)local_e0;
  do {
    local_f0 = (ulonglong)*(ushort *)(lVar96 + 0x272);
    pcVar95 = (char *)(lVar96 + -0x20);
    uVar99 = (ulonglong)((uint)*(ushort *)(lVar96 + 0x272) * 8);
    lVar90 = uVar99 * 3;
    uVar91 = 0xffffffffffffffff;
    lVar98 = lVar96 + 0x168;
    do {
      uVar85 = local_f0;
      if (lVar90 == 0) goto joined_r0x006295be;
      uVar85 = *(ulonglong *)(lVar98 + 0x10);
      lVar92 = uVar85 - 0xd;
      if (0xc < uVar85) {
        uVar85 = 0xd;
      }
      iVar74 = (*(code *)PTR_memcmp_00799528)(uVar99,uVar85);
      lVar92 = -lVar92;
      if (iVar74 != 0) {
        lVar92 = (longlong)iVar74;
      }
      bVar79 = (0 < lVar92) - (lVar92 < 0);
      uVar99 = (ulonglong)bVar79;
      pcVar95 = pcVar95 + 0x20;
      uVar91 = uVar91 + 1;
      lVar90 = lVar90 + -0x18;
      lVar98 = lVar98 + 0x18;
    } while (bVar79 == 1);
    uVar85 = uVar91;
    if (bVar79 == 0) goto LAB_006296a0;
joined_r0x006295be:
    if (local_110 == (char *)0x0) break;
    local_110 = (char *)((longlong)local_110 + -1);
    lVar96 = *(longlong *)(lVar96 + 0x278 + uVar85 * 8);
  } while( true );
LAB_006295d7:
  uVar99 = (ulonglong)*(ushort *)(lVar93 + 0x272);
  pcVar95 = (char *)(lVar93 + -0x20);
  uVar91 = (ulonglong)((uint)*(ushort *)(lVar93 + 0x272) * 8);
  lVar96 = uVar91 * 3;
  uVar85 = 0xffffffffffffffff;
  lVar90 = lVar93 + 0x168;
  do {
    if (lVar96 == 0) goto LAB_00629673;
    uVar89 = *(ulonglong *)(lVar90 + 0x10);
    lVar98 = uVar89 - 0xe;
    if (0xd < uVar89) {
      uVar89 = 0xe;
    }
    iVar74 = (*(code *)PTR_memcmp_00799528)(uVar91,uVar89);
    lVar98 = -lVar98;
    if (iVar74 != 0) {
      lVar98 = (longlong)iVar74;
    }
    bVar79 = (0 < lVar98) - (lVar98 < 0);
    uVar91 = (ulonglong)bVar79;
    pcVar95 = pcVar95 + 0x20;
    uVar85 = uVar85 + 1;
    lVar96 = lVar96 + -0x18;
    lVar90 = lVar90 + 0x18;
  } while (bVar79 == 1);
  uVar99 = uVar85;
  if (bVar79 == 0) goto LAB_006296a0;
LAB_00629673:
  bVar101 = local_e0 == 0;
  local_e0 = local_e0 + -1;
  if (bVar101) goto LAB_006290df;
  lVar93 = *(longlong *)(lVar93 + 0x278 + uVar99 * 8);
  goto LAB_006295d7;
LAB_006296a0:
  if (*pcVar95 == '\x03') {
    bVar79 = normalize_thought_level::_closure_0_
                       (*(undefined8 *)(pcVar95 + 0x10),*(undefined8 *)(pcVar95 + 0x18));
    bVar80 = bVar80 | bVar79;
  }
LAB_006290df:
  lVar93 = 1;
  if (lVar94 == 2) goto LAB_006296c8;
  goto LAB_006290ee;
LAB_006296c8:
  if (param_2 != 0) {
    lVar93 = 0;
    uVar99 = param_2;
    local_110 = param_3;
    do {
      uVar91 = (ulonglong)*(ushort *)(uVar99 + 0x272);
      uVar85 = (ulonglong)((uint)*(ushort *)(uVar99 + 0x272) * 8);
      lVar94 = uVar85 * 3;
      uVar89 = 0xffffffffffffffff;
      lVar96 = uVar99 + 0x168;
      plVar72 = (longlong *)(uVar99 - 0x10);
      do {
        plVar83 = plVar72;
        if (lVar94 == 0) goto LAB_00629785;
        uVar82 = *(ulonglong *)(lVar96 + 0x10);
        lVar90 = uVar82 - 10;
        if (9 < uVar82) {
          uVar82 = 10;
        }
        iVar74 = (*(code *)PTR_memcmp_00799528)(uVar85,uVar82);
        lVar90 = -lVar90;
        if (iVar74 != 0) {
          lVar90 = (longlong)iVar74;
        }
        bVar79 = (0 < lVar90) - (lVar90 < 0);
        uVar85 = (ulonglong)bVar79;
        uVar89 = uVar89 + 1;
        lVar94 = lVar94 + -0x18;
        lVar96 = lVar96 + 0x18;
        plVar72 = plVar83 + 4;
      } while (bVar79 == 1);
      uVar91 = uVar89;
      if (bVar79 == 0) {
        if (((char)plVar83[2] != '\x05') || (lVar94 = plVar83[3], lVar94 == 0)) goto LAB_006298ad;
        local_f0 = plVar83[4];
        goto LAB_006297e9;
      }
LAB_00629785:
      bVar101 = local_110 == (char *)0x0;
      local_110 = local_110 + -1;
      if (bVar101) goto LAB_006298cc;
      uVar99 = *(ulonglong *)(uVar99 + 0x278 + uVar91 * 8);
    } while( true );
  }
  lVar93 = 0;
  local_d8 = (char *)0x0;
LAB_006299aa:
  local_90 = lVar93;
  local_88 = local_d8;
  local_80 = 0;
  local_70 = 0;
  lVar93 = 0;
LAB_00629a11:
  lVar94 = lVar93 + 1;
  pcVar95 = (char *)(&local_90)[lVar93];
  if ((char *)(&local_90)[lVar93] == (char *)0x0) {
    if (lVar94 == 2) goto LAB_00629ff8;
    lVar94 = 2;
    pcVar95 = local_d8;
    if (local_d8 == (char *)0x0) goto LAB_00629ff8;
  }
  if (*pcVar95 == '\x01') {
    bVar80 = bVar80 | pcVar95[1] ^ 1U;
  }
  else if ((*pcVar95 == '\x05') && (lVar93 = *(longlong *)(pcVar95 + 8), lVar93 != 0)) {
    local_110 = *(char **)(pcVar95 + 0x10);
    while( true ) {
      uVar3 = *(ushort *)(lVar93 + 0x272);
      local_f0 = (ulonglong)uVar3;
      uVar99 = (ulonglong)((uint)uVar3 * 8);
      lVar96 = uVar99 * 3;
      uVar91 = 0xffffffffffffffff;
      lVar90 = lVar93 + 0x168;
      plVar72 = (longlong *)(lVar93 + -8);
      do {
        plVar83 = plVar72;
        uVar85 = local_f0;
        if (lVar96 == 0) goto joined_r0x00629b33;
        uVar85 = *(ulonglong *)(lVar90 + 0x10);
        lVar98 = uVar85 - 4;
        if (3 < uVar85) {
          uVar85 = 4;
        }
        iVar74 = (*(code *)PTR_memcmp_00799528)(uVar99,uVar85);
        lVar98 = -lVar98;
        if (iVar74 != 0) {
          lVar98 = (longlong)iVar74;
        }
        bVar79 = (0 < lVar98) - (lVar98 < 0);
        uVar99 = (ulonglong)bVar79;
        uVar91 = uVar91 + 1;
        lVar96 = lVar96 + -0x18;
        lVar90 = lVar90 + 0x18;
        plVar72 = plVar83 + 4;
      } while (bVar79 == 1);
      uVar85 = uVar91;
      if (bVar79 == 0) break;
joined_r0x00629b33:
      if (local_110 == (char *)0x0) goto LAB_00629c62;
      local_110 = (char *)((longlong)local_110 + -1);
      lVar93 = *(longlong *)(lVar93 + 0x278 + uVar85 * 8);
    }
    if ((char)plVar83[1] == '\x03') {
      pbVar1 = (byte *)plVar83[3];
      lVar93 = plVar83[4];
      cVar81 = normalize_thought_level::_closure_0_(pbVar1,lVar93);
      bVar79 = 1;
      if (cVar81 == '\0') {
        bVar79 = bVar80;
        if (lVar93 == 8) {
          if ((((((byte)(((byte)(*pbVar1 + 0xbf) < 0x1a) << 5 | *pbVar1) == 0x61) &&
                ((byte)(((byte)(pbVar1[1] + 0xbf) < 0x1a) << 5 | pbVar1[1]) == 100)) &&
               ((byte)(((byte)(pbVar1[2] + 0xbf) < 0x1a) << 5 | pbVar1[2]) == 0x61)) &&
              (((byte)(((byte)(pbVar1[3] + 0xbf) < 0x1a) << 5 | pbVar1[3]) == 0x70 &&
               ((byte)(((byte)(pbVar1[4] + 0xbf) < 0x1a) << 5 | pbVar1[4]) == 0x74)))) &&
             (((byte)(((byte)(pbVar1[5] + 0xbf) < 0x1a) << 5 | pbVar1[5]) == 0x69 &&
              ((byte)(((byte)(pbVar1[6] + 0xbf) < 0x1a) << 5 | pbVar1[6]) == 0x76)))) {
            bVar79 = 0x65;
            lVar93 = 7;
LAB_00629d3f:
            bVar79 = (byte)(((byte)(pbVar1[lVar93] + 0xbf) < 0x1a) << 5 | pbVar1[lVar93]) != bVar79
                     & bVar80;
          }
        }
        else {
          if (lVar93 != 7) {
            lVar93 = *(longlong *)(pcVar95 + 8);
            goto joined_r0x00629e60;
          }
          if ((((byte)(((byte)(*pbVar1 + 0xbf) < 0x1a) << 5 | *pbVar1) == 0x65) &&
              ((byte)(((byte)(pbVar1[1] + 0xbf) < 0x1a) << 5 | pbVar1[1]) == 0x6e)) &&
             (((byte)(((byte)(pbVar1[2] + 0xbf) < 0x1a) << 5 | pbVar1[2]) == 0x61 &&
              ((((byte)(((byte)(pbVar1[3] + 0xbf) < 0x1a) << 5 | pbVar1[3]) == 0x62 &&
                ((byte)(((byte)(pbVar1[4] + 0xbf) < 0x1a) << 5 | pbVar1[4]) == 0x6c)) &&
               ((byte)(((byte)(pbVar1[5] + 0xbf) < 0x1a) << 5 | pbVar1[5]) == 0x65)))))) {
            bVar79 = 100;
            lVar93 = 6;
            goto LAB_00629d3f;
          }
        }
      }
      lVar93 = *(longlong *)(pcVar95 + 8);
      bVar80 = bVar79;
      goto joined_r0x00629e60;
    }
LAB_00629c62:
    lVar93 = *(longlong *)(pcVar95 + 8);
joined_r0x00629e60:
    if (lVar93 != 0) {
      local_f0 = (ulonglong)CONCAT11((char)(uVar3 >> 8),bVar80);
      local_c0 = *(char **)(pcVar95 + 0x10);
      lVar96 = lVar93;
      local_100 = local_c0;
      do {
        uVar3 = *(ushort *)(lVar96 + 0x272);
        pcVar95 = (char *)(lVar96 + -0x20);
        lVar90 = (ulonglong)((uint)uVar3 * 8) * 3;
        uVar99 = 0xffffffffffffffff;
        lVar98 = lVar96 + 0x168;
        do {
          uVar91 = (ulonglong)uVar3;
          if (lVar90 == 0) goto joined_r0x00629e3e;
          lVar92 = *(longlong *)(lVar98 + 0x10);
          iVar74 = (*(code *)PTR_memcmp_00799528)();
          lVar92 = -(lVar92 + -0xd);
          if (iVar74 != 0) {
            lVar92 = (longlong)iVar74;
          }
          pcVar95 = pcVar95 + 0x20;
          uVar99 = uVar99 + 1;
          lVar90 = lVar90 + -0x18;
          lVar98 = lVar98 + 0x18;
        } while ((char)((0 < lVar92) - (lVar92 < 0)) == '\x01');
        uVar91 = uVar99;
        if (0 < lVar92 == lVar92 < 0) goto LAB_00629f4e;
joined_r0x00629e3e:
        if (local_100 == (char *)0x0) goto LAB_00629e81;
        local_100 = local_100 + -1;
        lVar96 = *(longlong *)(lVar96 + 0x278 + uVar91 * 8);
      } while( true );
    }
  }
  goto LAB_00629a02;
LAB_006297e9:
  uVar99 = (ulonglong)*(ushort *)(lVar94 + 0x272);
  lVar93 = lVar94 + -0x20;
  uVar91 = (ulonglong)((uint)*(ushort *)(lVar94 + 0x272) * 8);
  lVar96 = uVar91 * 3;
  uVar85 = 0xffffffffffffffff;
  lVar90 = lVar94 + 0x168;
  do {
    if (lVar96 == 0) goto LAB_00629881;
    uVar89 = *(ulonglong *)(lVar90 + 0x10);
    lVar98 = uVar89 - 8;
    if (7 < uVar89) {
      uVar89 = 8;
    }
    iVar74 = (*(code *)PTR_memcmp_00799528)(uVar91,uVar89);
    lVar98 = -lVar98;
    if (iVar74 != 0) {
      lVar98 = (longlong)iVar74;
    }
    bVar79 = (0 < lVar98) - (lVar98 < 0);
    uVar91 = (ulonglong)bVar79;
    lVar93 = lVar93 + 0x20;
    uVar85 = uVar85 + 1;
    lVar96 = lVar96 + -0x18;
    lVar90 = lVar90 + 0x18;
  } while (bVar79 == 1);
  uVar99 = uVar85;
  if (bVar79 == 0) goto LAB_006298cc;
LAB_00629881:
  bVar101 = local_f0 == 0;
  local_f0 = local_f0 + -1;
  if (bVar101) goto LAB_006298ad;
  lVar94 = *(longlong *)(lVar94 + 0x278 + uVar99 * 8);
  goto LAB_006297e9;
LAB_006298ad:
  lVar93 = 0;
LAB_006298cc:
  local_f0 = param_2;
  local_110 = param_3;
  do {
    uVar99 = (ulonglong)*(ushort *)(local_f0 + 0x272);
    local_d8 = (char *)(local_f0 - 0x20);
    uVar91 = (ulonglong)((uint)*(ushort *)(local_f0 + 0x272) * 8);
    lVar94 = uVar91 * 3;
    uVar85 = 0xffffffffffffffff;
    lVar96 = local_f0 + 0x168;
    do {
      if (lVar94 == 0) goto LAB_00629975;
      uVar89 = *(ulonglong *)(lVar96 + 0x10);
      lVar90 = uVar89 - 8;
      if (7 < uVar89) {
        uVar89 = 8;
      }
      iVar74 = (*(code *)PTR_memcmp_00799528)(uVar91,uVar89);
      lVar90 = -lVar90;
      if (iVar74 != 0) {
        lVar90 = (longlong)iVar74;
      }
      bVar79 = (0 < lVar90) - (lVar90 < 0);
      uVar91 = (ulonglong)bVar79;
      local_d8 = local_d8 + 0x20;
      uVar85 = uVar85 + 1;
      lVar94 = lVar94 + -0x18;
      lVar96 = lVar96 + 0x18;
    } while (bVar79 == 1);
    uVar99 = uVar85;
    if (bVar79 == 0) goto LAB_006299aa;
LAB_00629975:
    bVar101 = local_110 == (char *)0x0;
    local_110 = local_110 + -1;
    if (bVar101) break;
    local_f0 = *(ulonglong *)(local_f0 + 0x278 + uVar99 * 8);
  } while( true );
  local_d8 = (char *)0x0;
  goto LAB_006299aa;
LAB_00629e81:
  do {
    uVar99 = (ulonglong)*(ushort *)(lVar93 + 0x272);
    pcVar95 = (char *)(lVar93 + -0x20);
    lVar96 = (ulonglong)((uint)*(ushort *)(lVar93 + 0x272) * 8) * 3;
    uVar91 = 0xffffffffffffffff;
    lVar90 = lVar93 + 0x168;
    do {
      if (lVar96 == 0) goto LAB_00629f23;
      lVar98 = *(longlong *)(lVar90 + 0x10);
      iVar74 = (*(code *)PTR_memcmp_00799528)();
      lVar98 = -(lVar98 + -0xc);
      if (iVar74 != 0) {
        lVar98 = (longlong)iVar74;
      }
      pcVar95 = pcVar95 + 0x20;
      uVar91 = uVar91 + 1;
      lVar96 = lVar96 + -0x18;
      lVar90 = lVar90 + 0x18;
    } while ((char)((0 < lVar98) - (lVar98 < 0)) == '\x01');
    uVar99 = uVar91;
    if (0 < lVar98 == lVar98 < 0) break;
LAB_00629f23:
    if (local_c0 == (char *)0x0) goto LAB_00629a02;
    lVar93 = *(longlong *)(lVar93 + 0x278 + uVar99 * 8);
    local_c0 = local_c0 + -1;
  } while( true );
LAB_00629f4e:
  if ((*pcVar95 == '\x02') && (*(longlong *)(pcVar95 + 8) != 2)) {
    if ((int)*(longlong *)(pcVar95 + 8) == 1) {
      pcVar95 = *(char **)(pcVar95 + 0x10);
    }
    else {
      pcVar95 = *(char **)(pcVar95 + 0x10);
      if ((longlong)pcVar95 < 0) goto LAB_00629a02;
    }
    bVar80 = pcVar95 == (char *)0x0;
    if (!(bool)bVar80) {
      local_c8 = pcVar95;
    }
    bVar78 = bVar78 | !(bool)bVar80;
  }
LAB_00629a02:
  lVar93 = 1;
  if (lVar94 == 2) goto LAB_00629ff8;
  goto LAB_00629a11;
LAB_00629ff8:
  if (param_2 == 0) {
    bVar101 = false;
    bVar102 = false;
    pcVar95 = param_3;
    goto LAB_0062a1ea;
  }
  uVar99 = param_2;
  local_110 = param_3;
  while( true ) {
    uVar91 = (ulonglong)*(ushort *)(uVar99 + 0x272);
    uVar85 = (ulonglong)((uint)*(ushort *)(uVar99 + 0x272) * 8);
    lVar93 = uVar85 * 3;
    uVar89 = 0xffffffffffffffff;
    lVar94 = uVar99 + 0x168;
    puVar73 = (undefined8 *)(uVar99 - 0x10);
    do {
      puVar87 = puVar73;
      if (lVar93 == 0) goto LAB_0062a0b5;
      uVar82 = *(ulonglong *)(lVar94 + 0x10);
      lVar96 = uVar82 - 10;
      if (9 < uVar82) {
        uVar82 = 10;
      }
      iVar74 = (*(code *)PTR_memcmp_00799528)(uVar85,uVar82);
      lVar96 = -lVar96;
      if (iVar74 != 0) {
        lVar96 = (longlong)iVar74;
      }
      bVar79 = (0 < lVar96) - (lVar96 < 0);
      uVar85 = (ulonglong)bVar79;
      uVar89 = uVar89 + 1;
      lVar93 = lVar93 + -0x18;
      lVar94 = lVar94 + 0x18;
      puVar73 = puVar87 + 4;
    } while (bVar79 == 1);
    uVar91 = uVar89;
    if (bVar79 == 0) break;
LAB_0062a0b5:
    bVar101 = local_110 == (char *)0x0;
    local_110 = local_110 + -1;
    if (bVar101) goto LAB_0062a2f8;
    uVar99 = *(ulonglong *)(uVar99 + 0x278 + uVar91 * 8);
  }
  if ((*(char *)(puVar87 + 2) == '\x05') && (lVar93 = puVar87[3], lVar93 != 0)) {
    local_d8 = (char *)puVar87[4];
    lVar94 = lVar93;
    local_110 = local_d8;
    goto LAB_0062a119;
  }
  goto LAB_0062a2f8;
LAB_0062a119:
  uVar3 = *(ushort *)(lVar94 + 0x272);
  pcVar95 = (char *)(lVar94 + -0x20);
  uVar91 = (ulonglong)((uint)uVar3 * 8);
  lVar96 = uVar91 * 3;
  uVar99 = 0xffffffffffffffff;
  lVar90 = lVar94 + 0x168;
  do {
    if (lVar96 == 0) {
      uVar99 = (ulonglong)uVar3;
      goto LAB_0062a1ba;
    }
    uVar85 = *(ulonglong *)(lVar90 + 0x10);
    lVar98 = uVar85 - 0xf;
    if (0xe < uVar85) {
      uVar85 = 0xf;
    }
    iVar74 = (*(code *)PTR_memcmp_00799528)(uVar91,uVar85);
    lVar98 = -lVar98;
    if (iVar74 != 0) {
      lVar98 = (longlong)iVar74;
    }
    bVar79 = (0 < lVar98) - (lVar98 < 0);
    uVar91 = (ulonglong)bVar79;
    pcVar95 = pcVar95 + 0x20;
    uVar99 = uVar99 + 1;
    lVar96 = lVar96 + -0x18;
    lVar90 = lVar90 + 0x18;
  } while (bVar79 == 1);
  if (bVar79 == 0) goto LAB_0062a2cd;
LAB_0062a1ba:
  bVar101 = local_110 == (char *)0x0;
  local_110 = local_110 + -1;
  if (bVar101) goto LAB_0062a206;
  lVar94 = *(longlong *)(lVar94 + 0x278 + uVar99 * 8);
  goto LAB_0062a119;
LAB_0062a206:
  do {
    uVar99 = (ulonglong)*(ushort *)(lVar93 + 0x272);
    pcVar95 = (char *)(lVar93 + -0x20);
    uVar91 = (ulonglong)((uint)*(ushort *)(lVar93 + 0x272) * 8);
    lVar94 = uVar91 * 3;
    uVar85 = 0xffffffffffffffff;
    lVar96 = lVar93 + 0x168;
    do {
      if (lVar94 == 0) goto LAB_0062a2a1;
      uVar89 = *(ulonglong *)(lVar96 + 0x10);
      lVar90 = uVar89 - 0xe;
      if (0xd < uVar89) {
        uVar89 = 0xe;
      }
      iVar74 = (*(code *)PTR_memcmp_00799528)(uVar91,uVar89);
      lVar90 = -lVar90;
      if (iVar74 != 0) {
        lVar90 = (longlong)iVar74;
      }
      bVar79 = (0 < lVar90) - (lVar90 < 0);
      uVar91 = (ulonglong)bVar79;
      pcVar95 = pcVar95 + 0x20;
      uVar85 = uVar85 + 1;
      lVar94 = lVar94 + -0x18;
      lVar96 = lVar96 + 0x18;
    } while (bVar79 == 1);
    uVar99 = uVar85;
    if (bVar79 == 0) break;
LAB_0062a2a1:
    if (local_d8 == (char *)0x0) goto LAB_0062a2f8;
    lVar93 = *(longlong *)(lVar93 + 0x278 + uVar99 * 8);
    local_d8 = local_d8 + -1;
  } while( true );
LAB_0062a2cd:
  if (*pcVar95 == '\x02') {
    if (*(longlong *)(pcVar95 + 8) == 0) {
      local_d8 = *(char **)(pcVar95 + 0x10);
      bVar101 = -1 < (longlong)local_d8;
      goto LAB_0062a300;
    }
    if ((int)*(longlong *)(pcVar95 + 8) == 1) {
      local_d8 = *(char **)(pcVar95 + 0x10);
      bVar101 = true;
      goto LAB_0062a300;
    }
  }
LAB_0062a2f8:
  bVar101 = false;
LAB_0062a300:
  local_f0 = param_2;
  local_110 = param_3;
  do {
    uVar99 = (ulonglong)*(ushort *)(local_f0 + 0x272);
    pcVar100 = (char *)(local_f0 - 0x20);
    pcVar95 = (char *)(ulonglong)((uint)*(ushort *)(local_f0 + 0x272) * 8);
    lVar93 = (longlong)pcVar95 * 3;
    uVar91 = 0xffffffffffffffff;
    lVar94 = local_f0 + 0x168;
    do {
      if (lVar93 == 0) goto LAB_0062a3a5;
      lVar96 = *(longlong *)(lVar94 + 0x10);
      iVar74 = (*(code *)PTR_memcmp_00799528)();
      lVar96 = -(lVar96 + -0xf);
      if (iVar74 != 0) {
        lVar96 = (longlong)iVar74;
      }
      cVar81 = (0 < lVar96) - (lVar96 < 0);
      pcVar95 = (char *)CONCAT71((int7)((ulonglong)pcVar95 >> 8),cVar81);
      pcVar100 = pcVar100 + 0x20;
      uVar91 = uVar91 + 1;
      lVar93 = lVar93 + -0x18;
      lVar94 = lVar94 + 0x18;
    } while (cVar81 == '\x01');
    uVar99 = uVar91;
    if (cVar81 == '\0') goto LAB_0062a493;
LAB_0062a3a5:
    bVar102 = local_110 == (char *)0x0;
    local_110 = local_110 + -1;
    if (bVar102) break;
    local_f0 = *(ulonglong *)(local_f0 + 0x278 + uVar99 * 8);
  } while( true );
  local_f0 = param_2;
  local_110 = param_3;
  do {
    uVar3 = *(ushort *)(local_f0 + 0x272);
    pcVar100 = (char *)(local_f0 - 0x20);
    pcVar95 = (char *)(ulonglong)((uint)uVar3 * 8);
    lVar93 = (longlong)pcVar95 * 3;
    uVar99 = 0xffffffffffffffff;
    lVar94 = local_f0 + 0x168;
    do {
      if (lVar93 == 0) {
        uVar99 = (ulonglong)uVar3;
        goto LAB_0062a471;
      }
      lVar96 = *(longlong *)(lVar94 + 0x10);
      iVar74 = (*(code *)PTR_memcmp_00799528)();
      lVar96 = -(lVar96 + -0xe);
      if (iVar74 != 0) {
        lVar96 = (longlong)iVar74;
      }
      cVar81 = (0 < lVar96) - (lVar96 < 0);
      pcVar95 = (char *)CONCAT71((int7)((ulonglong)pcVar95 >> 8),cVar81);
      pcVar100 = pcVar100 + 0x20;
      uVar99 = uVar99 + 1;
      lVar93 = lVar93 + -0x18;
      lVar94 = lVar94 + 0x18;
    } while (cVar81 == '\x01');
    if (cVar81 == '\0') goto LAB_0062a493;
LAB_0062a471:
    bVar102 = local_110 == (char *)0x0;
    local_110 = local_110 + -1;
    if (bVar102) goto LAB_0062a4c7;
    local_f0 = *(ulonglong *)(local_f0 + 0x278 + uVar99 * 8);
  } while( true );
LAB_0062a69f:
  uVar99 = (ulonglong)*(ushort *)(lVar93 + 0x272);
  uVar91 = (ulonglong)((uint)*(ushort *)(lVar93 + 0x272) * 8);
  lVar94 = uVar91 * 3;
  uVar85 = 0xffffffffffffffff;
  lVar96 = lVar93 + 0x168;
  puVar73 = (undefined8 *)(lVar93 + -8);
  do {
    puVar87 = puVar73;
    if (lVar94 == 0) goto LAB_0062a731;
    uVar89 = *(ulonglong *)(lVar96 + 0x10);
    lVar90 = uVar89 - 0x10;
    if (0xf < uVar89) {
      uVar89 = 0x10;
    }
    iVar74 = (*(code *)PTR_memcmp_00799528)(uVar91,uVar89);
    lVar90 = -lVar90;
    if (iVar74 != 0) {
      lVar90 = (longlong)iVar74;
    }
    bVar79 = (0 < lVar90) - (lVar90 < 0);
    uVar91 = (ulonglong)bVar79;
    uVar85 = uVar85 + 1;
    lVar94 = lVar94 + -0x18;
    lVar96 = lVar96 + 0x18;
    puVar73 = puVar87 + 4;
  } while (bVar79 == 1);
  uVar99 = uVar85;
  if (bVar79 != 0) {
LAB_0062a731:
    bVar101 = local_110 == (char *)0x0;
    local_110 = (char *)((longlong)local_110 + -1);
    if (bVar101) goto LAB_0062a795;
    lVar93 = *(longlong *)(lVar93 + 0x278 + uVar99 * 8);
    goto LAB_0062a69f;
  }
  if (*(char *)(puVar87 + 1) == '\x03') {
    local_d8 = (char *)puVar87[3];
    local_c0 = (char *)puVar87[4];
  }
  else {
LAB_0062a78c:
    local_d8 = (char *)0x0;
  }
LAB_0062a795:
  local_e0 = 0;
  local_f0 = param_2;
  local_110 = param_3;
  while( true ) {
    uVar99 = (ulonglong)*(ushort *)(local_f0 + 0x272);
    uVar91 = (ulonglong)((uint)*(ushort *)(local_f0 + 0x272) * 8);
    lVar93 = uVar91 * 3;
    uVar85 = 0xffffffffffffffff;
    lVar94 = local_f0 + 0x168;
    puVar75 = (ulonglong *)(local_f0 - 8);
    do {
      puVar88 = puVar75;
      local_108 = param_3;
      if (lVar93 == 0) goto LAB_0062a845;
      uVar89 = *(ulonglong *)(lVar94 + 0x10);
      lVar96 = uVar89 - 0x10;
      if (0xf < uVar89) {
        uVar89 = 0x10;
      }
      iVar74 = (*(code *)PTR_memcmp_00799528)(uVar91,uVar89);
      lVar96 = -lVar96;
      if (iVar74 != 0) {
        lVar96 = (longlong)iVar74;
      }
      bVar79 = (0 < lVar96) - (lVar96 < 0);
      uVar91 = (ulonglong)bVar79;
      uVar85 = uVar85 + 1;
      lVar93 = lVar93 + -0x18;
      lVar94 = lVar94 + 0x18;
      puVar75 = puVar88 + 4;
    } while (bVar79 == 1);
    uVar99 = uVar85;
    if (bVar79 == 0) break;
LAB_0062a845:
    bVar101 = local_110 == (char *)0x0;
    local_110 = local_110 + -1;
    if (bVar101) goto LAB_0062a89b;
    local_f0 = *(ulonglong *)(local_f0 + 0x278 + uVar99 * 8);
  }
  if ((char)puVar88[1] == '\x03') {
    local_e0 = puVar88[3];
    local_f0 = puVar88[4];
  }
  else {
    local_e0 = 0;
  }
LAB_0062a89b:
  do {
    uVar99 = (ulonglong)*(ushort *)(param_2 + 0x272);
    uVar91 = (ulonglong)((uint)*(ushort *)(param_2 + 0x272) * 8);
    lVar93 = uVar91 * 3;
    uVar85 = 0xffffffffffffffff;
    lVar94 = param_2 + 0x168;
    plVar72 = (longlong *)(param_2 - 0x10);
    do {
      plVar83 = plVar72;
      if (lVar93 == 0) goto LAB_0062a935;
      uVar89 = *(ulonglong *)(lVar94 + 0x10);
      lVar96 = uVar89 - 9;
      if (8 < uVar89) {
        uVar89 = 9;
      }
      iVar74 = (*(code *)PTR_memcmp_00799528)(uVar91,uVar89);
      lVar96 = -lVar96;
      if (iVar74 != 0) {
        lVar96 = (longlong)iVar74;
      }
      bVar79 = (0 < lVar96) - (lVar96 < 0);
      uVar91 = (ulonglong)bVar79;
      uVar85 = uVar85 + 1;
      lVar93 = lVar93 + -0x18;
      lVar94 = lVar94 + 0x18;
      plVar72 = plVar83 + 4;
    } while (bVar79 == 1);
    uVar99 = uVar85;
    if (bVar79 == 0) {
      param_3 = (char *)0x0;
      if ((char)plVar83[2] != '\x05') goto LAB_0062aa61;
      lVar93 = plVar83[3];
      if (lVar93 == 0) {
        uVar103 = 0;
        goto LAB_0062aa6d;
      }
      local_110 = (char *)plVar83[4];
      break;
    }
LAB_0062a935:
    bVar101 = local_108 == (char *)0x0;
    local_108 = local_108 + -1;
    if (bVar101) goto LAB_0062ac48;
    param_2 = *(ulonglong *)(param_2 + 0x278 + uVar99 * 8);
  } while( true );
LAB_0062a98a:
  uVar99 = (ulonglong)*(ushort *)(lVar93 + 0x272);
  uVar91 = (ulonglong)((uint)*(ushort *)(lVar93 + 0x272) * 8);
  lVar94 = uVar91 * 3;
  uVar85 = 0xffffffffffffffff;
  lVar96 = lVar93 + 0x168;
  puVar73 = (undefined8 *)(lVar93 + -8);
  do {
    puVar87 = puVar73;
    if (lVar94 == 0) goto LAB_0062aa21;
    uVar89 = *(ulonglong *)(lVar96 + 0x10);
    lVar90 = uVar89 - 6;
    if (5 < uVar89) {
      uVar89 = 6;
    }
    iVar74 = (*(code *)PTR_memcmp_00799528)(uVar91,uVar89);
    lVar90 = -lVar90;
    if (iVar74 != 0) {
      lVar90 = (longlong)iVar74;
    }
    bVar79 = (0 < lVar90) - (lVar90 < 0);
    uVar91 = (ulonglong)bVar79;
    uVar85 = uVar85 + 1;
    lVar94 = lVar94 + -0x18;
    lVar96 = lVar96 + 0x18;
    puVar73 = puVar87 + 4;
  } while (bVar79 == 1);
  uVar99 = uVar85;
  if (bVar79 == 0) {
    if (*(char *)(puVar87 + 1) == '\x03') {
      uVar103 = puVar87[3];
      param_3 = (char *)puVar87[4];
    }
    else {
LAB_0062aa61:
      param_3 = (char *)0x0;
      uVar103 = 0;
    }
    goto LAB_0062aa6d;
  }
LAB_0062aa21:
  bVar101 = local_110 == (char *)0x0;
  local_110 = (char *)((longlong)local_110 + -1);
  uVar103 = 0;
  if (bVar101) goto LAB_0062ad93;
  lVar93 = *(longlong *)(lVar93 + 0x278 + uVar99 * 8);
  goto LAB_0062a98a;
LAB_0062ad93:
  param_3 = (char *)0xffffffffffffffff;
  goto LAB_0062aa6d;
LAB_0062ac48:
  uVar103 = 0;
  param_3 = (char *)0xffffffffffffffff;
  goto LAB_0062aa6d;
LAB_0062a493:
  if (*pcVar100 == '\x02') {
    if (*(longlong *)(pcVar100 + 8) == 2) {
      bVar102 = false;
    }
    else if ((int)*(longlong *)(pcVar100 + 8) == 1) {
      pcVar95 = *(char **)(pcVar100 + 0x10);
      bVar102 = true;
    }
    else {
      pcVar95 = *(char **)(pcVar100 + 0x10);
      bVar102 = -1 < (longlong)pcVar95;
    }
  }
  else {
LAB_0062a4c7:
    bVar102 = false;
  }
  if (bVar101) {
    bVar80 = local_d8 == (char *)0x0;
    if (!(bool)bVar80) {
      local_c8 = local_d8;
    }
    bVar78 = bVar78 | !(bool)bVar80;
    if (bVar102) {
      bVar80 = pcVar95 == (char *)0x0;
      if (!(bool)bVar80) {
        local_c8 = pcVar95;
      }
      goto LAB_0062a564;
    }
  }
  else {
LAB_0062a1ea:
    if ((bool)(bVar102 & (bVar101 ^ 1U))) {
      bVar80 = pcVar95 == (char *)0x0;
      if (!(bool)bVar80) {
        local_c8 = pcVar95;
      }
LAB_0062a564:
      bVar78 = !(bool)bVar80 | bVar78;
    }
  }
  if (param_2 != 0) {
    local_d8 = (char *)0x0;
    uVar99 = param_2;
    local_110 = param_3;
    do {
      uVar91 = (ulonglong)*(ushort *)(uVar99 + 0x272);
      uVar85 = (ulonglong)((uint)*(ushort *)(uVar99 + 0x272) * 8);
      lVar93 = uVar85 * 3;
      uVar89 = 0xffffffffffffffff;
      lVar94 = uVar99 + 0x168;
      plVar72 = (longlong *)(uVar99 - 0x10);
      do {
        plVar83 = plVar72;
        if (lVar93 == 0) goto LAB_0062a635;
        uVar82 = *(ulonglong *)(lVar94 + 0x10);
        lVar96 = uVar82 - 10;
        if (9 < uVar82) {
          uVar82 = 10;
        }
        iVar74 = (*(code *)PTR_memcmp_00799528)(uVar85,uVar82);
        lVar96 = -lVar96;
        if (iVar74 != 0) {
          lVar96 = (longlong)iVar74;
        }
        bVar79 = (0 < lVar96) - (lVar96 < 0);
        uVar85 = (ulonglong)bVar79;
        uVar89 = uVar89 + 1;
        lVar93 = lVar93 + -0x18;
        lVar94 = lVar94 + 0x18;
        plVar72 = plVar83 + 4;
      } while (bVar79 == 1);
      uVar91 = uVar89;
      if (bVar79 == 0) {
        if (((char)plVar83[2] != '\x05') || (lVar93 = plVar83[3], lVar93 == 0)) goto LAB_0062a78c;
        local_110 = (char *)plVar83[4];
        local_d8 = (char *)0x0;
        goto LAB_0062a69f;
      }
LAB_0062a635:
      bVar101 = local_110 == (char *)0x0;
      local_110 = local_110 + -1;
      if (bVar101) goto LAB_0062a795;
      uVar99 = *(ulonglong *)(uVar99 + 0x278 + uVar91 * 8);
    } while( true );
  }
  local_e0 = 0;
  local_d8 = (char *)0x0;
  uVar103 = 0;
LAB_0062aa6d:
  local_90 = (longlong)local_d8;
  ppcVar84 = &local_88;
  local_88 = local_c0;
  local_80 = local_e0;
  local_78 = local_f0;
  local_70 = uVar103;
  local_68 = param_3;
  local_60 = 0;
  local_48 = 0;
  lVar93 = 0;
  do {
    ppcVar77 = ppcVar84 + lVar93 * 2;
    lVar93 = lVar93 + 1;
    while (ppcVar77[-1] == (char *)0x0) {
      ppcVar77 = ppcVar77 + 2;
      lVar93 = lVar93 + 1;
      if (lVar93 == 4) goto LAB_0062ab21;
    }
    bVar80 = normalize_thought_level::_closure_0_(ppcVar77[-1],*ppcVar77);
    bVar78 = bVar78 & bVar80;
  } while (lVar93 != 3);
LAB_0062ab21:
  if ((bVar80 & 1) != 0) {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar75 = (ulonglong *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar75 != (ulonglong *)0x0) {
      *(undefined4 *)puVar75 = 0x656e6f6e;
      *param_1 = 4;
      param_1[1] = (ulonglong)puVar75;
      param_1[2] = 4;
      return puVar75;
    }
    ppcVar77 = (char **)(*(code *)PTR_handle_error_00798ff0)();
    goto LAB_0062adc1;
  }
  if (bVar78 == 0) {
LAB_0062ab96:
    if (*(longlong *)(param_4 + 0x48) != -1) {
      uVar99 = *(ulonglong *)(param_4 + 0x58);
      if (uVar99 == 0) {
        uVar91 = 1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        uVar91 = (*(code *)PTR___rust_alloc_00799000)();
        if (uVar91 == 0) {
          (*(code *)PTR_handle_error_00798ff0)();
          pcVar4 = (code *)swi(3);
          puVar75 = (ulonglong *)(*pcVar4)();
          return puVar75;
        }
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_01,uVar99);
      }
      *param_1 = uVar99;
      param_1[1] = uVar91;
      param_1[2] = uVar99;
      return param_1;
    }
    *param_1 = 0xffffffffffffffff;
  }
  else {
    if ((longlong)local_c8 < 1) {
      uVar99 = (ulonglong)(local_c8 == (char *)0x0) | 6;
    }
    else {
      ppcVar84 = *(char ***)(param_4 + 0x40);
      if ((longlong)ppcVar84 < 0) {
LAB_0062ab8a:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_0062ab96;
      }
      if (ppcVar84 == (char **)0x0) {
        lVar93 = 1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar93 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar93 == 0) goto LAB_0062ab8a;
        (*(code *)PTR_memcpy_00799008)();
        bVar71 = UNK_0018483f;
        bVar70 = UNK_0018483e;
        bVar69 = UNK_0018483d;
        bVar68 = UNK_0018483c;
        bVar67 = UNK_0018483b;
        bVar66 = UNK_0018483a;
        bVar65 = UNK_00184839;
        bVar64 = UNK_00184838;
        bVar63 = UNK_00184837;
        bVar62 = UNK_00184836;
        bVar61 = UNK_00184835;
        bVar60 = UNK_00184834;
        bVar59 = UNK_00184833;
        bVar58 = UNK_00184832;
        bVar57 = UNK_00184831;
        bVar56 = DAT_00184830;
        cVar55 = UNK_00183f6f;
        cVar54 = UNK_00183f6e;
        cVar53 = UNK_00183f6d;
        cVar52 = UNK_00183f6c;
        cVar51 = UNK_00183f6b;
        cVar50 = UNK_00183f6a;
        cVar49 = UNK_00183f69;
        cVar48 = UNK_00183f68;
        cVar47 = UNK_00183f67;
        cVar46 = UNK_00183f66;
        cVar45 = UNK_00183f65;
        cVar44 = UNK_00183f64;
        cVar43 = UNK_00183f63;
        cVar42 = UNK_00183f62;
        cVar41 = UNK_00183f61;
        cVar81 = DAT_00183f60;
        bVar111 = UNK_0018303f;
        bVar110 = UNK_0018303e;
        bVar109 = UNK_0018303d;
        bVar108 = UNK_0018303c;
        bVar107 = UNK_0018303b;
        bVar106 = UNK_0018303a;
        bVar105 = UNK_00183039;
        bVar104 = UNK_00183038;
        bVar40 = UNK_00183037;
        bVar39 = UNK_00183036;
        bVar38 = UNK_00183035;
        bVar37 = UNK_00183034;
        bVar36 = UNK_00183033;
        bVar79 = UNK_00183032;
        bVar80 = UNK_00183031;
        bVar78 = DAT_00183030;
        if (&DAT_00000007 < ppcVar84) {
          if (ppcVar84 < &DAT_00000020) {
            ppcVar76 = (char **)0x0;
LAB_0062ad2d:
            uVar103 = s__001846a0._0_8_;
            cVar47 = UNK_00184167;
            cVar46 = UNK_00184166;
            cVar45 = UNK_00184165;
            cVar44 = UNK_00184164;
            cVar43 = UNK_00184163;
            cVar42 = UNK_00184162;
            cVar41 = UNK_00184161;
            cVar81 = DAT_00184160;
            bVar40 = UNK_001840c7;
            bVar39 = UNK_001840c6;
            bVar38 = UNK_001840c5;
            bVar37 = UNK_001840c4;
            bVar36 = UNK_001840c3;
            bVar79 = UNK_001840c2;
            bVar80 = UNK_001840c1;
            bVar78 = DAT_001840c0;
            ppcVar77 = (char **)((ulonglong)ppcVar84 & 0x7ffffffffffffff8);
            do {
              uVar99 = *(ulonglong *)(lVar93 + (longlong)ppcVar76);
              bVar104 = (char)uVar99 + cVar81;
              bVar105 = (char)(uVar99 >> 8) + cVar41;
              bVar106 = (char)(uVar99 >> 0x10) + cVar42;
              bVar107 = (char)(uVar99 >> 0x18) + cVar43;
              bVar108 = (char)(uVar99 >> 0x20) + cVar44;
              bVar109 = (char)(uVar99 >> 0x28) + cVar45;
              bVar110 = (char)(uVar99 >> 0x30) + cVar46;
              bVar111 = (char)(uVar99 >> 0x38) + cVar47;
              *(ulonglong *)(lVar93 + (longlong)ppcVar76) =
                   ~CONCAT17(-((byte)((bVar111 < bVar40) * bVar40 | (bVar111 >= bVar40) * bVar111)
                              == bVar111),
                             CONCAT16(-((byte)((bVar110 < bVar39) * bVar39 |
                                              (bVar110 >= bVar39) * bVar110) == bVar110),
                                      CONCAT15(-((byte)((bVar109 < bVar38) * bVar38 |
                                                       (bVar109 >= bVar38) * bVar109) == bVar109),
                                               CONCAT14(-((byte)((bVar108 < bVar37) * bVar37 |
                                                                (bVar108 >= bVar37) * bVar108) ==
                                                         bVar108),
                                                        CONCAT13(-((byte)((bVar107 < bVar36) *
                                                                          bVar36 | (bVar107 >=
                                                                                   bVar36) * bVar107
                                                                         ) == bVar107),
                                                                 CONCAT12(-((byte)((bVar106 < bVar79
                                                                                   ) * bVar79 |
                                                                                  (bVar106 >= bVar79
                                                                                  ) * bVar106) ==
                                                                           bVar106),
                                                                          CONCAT11(-((byte)((bVar105
                                                                                            < bVar80
                                                  ) * bVar80 | (bVar105 >= bVar80) * bVar105) ==
                                                  bVar105),-((byte)((bVar104 < bVar78) * bVar78 |
                                                                   (bVar104 >= bVar78) * bVar104) ==
                                                            bVar104)))))))) & uVar103 | uVar99;
              ppcVar76 = ppcVar76 + 1;
              if (ppcVar77 == ppcVar76) goto LAB_0062addb;
            } while( true );
          }
          ppcVar77 = (char **)((ulonglong)ppcVar84 & 0x7fffffffffffffe0);
          ppcVar76 = (char **)0x0;
          do {
            pbVar1 = (byte *)(lVar93 + (longlong)ppcVar76);
            bVar5 = pbVar1[1];
            bVar6 = pbVar1[2];
            bVar7 = pbVar1[3];
            bVar8 = pbVar1[4];
            bVar9 = pbVar1[5];
            bVar10 = pbVar1[6];
            bVar11 = pbVar1[7];
            bVar12 = pbVar1[8];
            bVar13 = pbVar1[9];
            bVar14 = pbVar1[10];
            bVar15 = pbVar1[0xb];
            bVar16 = pbVar1[0xc];
            bVar17 = pbVar1[0xd];
            bVar18 = pbVar1[0xe];
            bVar19 = pbVar1[0xf];
            pbVar2 = (byte *)(lVar93 + 0x10 + (longlong)ppcVar76);
            bVar20 = *pbVar2;
            bVar21 = pbVar2[1];
            bVar22 = pbVar2[2];
            bVar23 = pbVar2[3];
            bVar24 = pbVar2[4];
            bVar25 = pbVar2[5];
            bVar26 = pbVar2[6];
            bVar27 = pbVar2[7];
            bVar28 = pbVar2[8];
            bVar29 = pbVar2[9];
            bVar30 = pbVar2[10];
            bVar31 = pbVar2[0xb];
            bVar32 = pbVar2[0xc];
            bVar33 = pbVar2[0xd];
            bVar34 = pbVar2[0xe];
            bVar35 = pbVar2[0xf];
            bVar112 = *pbVar1 + cVar81;
            bVar113 = bVar5 + cVar41;
            bVar114 = bVar6 + cVar42;
            bVar115 = bVar7 + cVar43;
            bVar116 = bVar8 + cVar44;
            bVar117 = bVar9 + cVar45;
            bVar118 = bVar10 + cVar46;
            bVar119 = bVar11 + cVar47;
            bVar120 = bVar12 + cVar48;
            bVar121 = bVar13 + cVar49;
            bVar122 = bVar14 + cVar50;
            bVar123 = bVar15 + cVar51;
            bVar124 = bVar16 + cVar52;
            bVar125 = bVar17 + cVar53;
            bVar126 = bVar18 + cVar54;
            bVar127 = bVar19 + cVar55;
            bVar128 = bVar20 + cVar81;
            bVar129 = bVar21 + cVar41;
            bVar130 = bVar22 + cVar42;
            bVar131 = bVar23 + cVar43;
            bVar132 = bVar24 + cVar44;
            bVar133 = bVar25 + cVar45;
            bVar134 = bVar26 + cVar46;
            bVar135 = bVar27 + cVar47;
            bVar136 = bVar28 + cVar48;
            bVar137 = bVar29 + cVar49;
            bVar138 = bVar30 + cVar50;
            bVar139 = bVar31 + cVar51;
            bVar140 = bVar32 + cVar52;
            bVar141 = bVar33 + cVar53;
            bVar142 = bVar34 + cVar54;
            bVar143 = bVar35 + cVar55;
            pbVar2 = (byte *)(lVar93 + (longlong)ppcVar76);
            *pbVar2 = -((byte)((bVar78 < bVar112) * bVar78 | (bVar78 >= bVar112) * bVar112) ==
                       bVar112) & bVar56 | *pbVar1;
            pbVar2[1] = -((byte)((bVar80 < bVar113) * bVar80 | (bVar80 >= bVar113) * bVar113) ==
                         bVar113) & bVar57 | bVar5;
            pbVar2[2] = -((byte)((bVar79 < bVar114) * bVar79 | (bVar79 >= bVar114) * bVar114) ==
                         bVar114) & bVar58 | bVar6;
            pbVar2[3] = -((byte)((bVar36 < bVar115) * bVar36 | (bVar36 >= bVar115) * bVar115) ==
                         bVar115) & bVar59 | bVar7;
            pbVar2[4] = -((byte)((bVar37 < bVar116) * bVar37 | (bVar37 >= bVar116) * bVar116) ==
                         bVar116) & bVar60 | bVar8;
            pbVar2[5] = -((byte)((bVar38 < bVar117) * bVar38 | (bVar38 >= bVar117) * bVar117) ==
                         bVar117) & bVar61 | bVar9;
            pbVar2[6] = -((byte)((bVar39 < bVar118) * bVar39 | (bVar39 >= bVar118) * bVar118) ==
                         bVar118) & bVar62 | bVar10;
            pbVar2[7] = -((byte)((bVar40 < bVar119) * bVar40 | (bVar40 >= bVar119) * bVar119) ==
                         bVar119) & bVar63 | bVar11;
            pbVar2[8] = -((byte)((bVar104 < bVar120) * bVar104 | (bVar104 >= bVar120) * bVar120) ==
                         bVar120) & bVar64 | bVar12;
            pbVar2[9] = -((byte)((bVar105 < bVar121) * bVar105 | (bVar105 >= bVar121) * bVar121) ==
                         bVar121) & bVar65 | bVar13;
            pbVar2[10] = -((byte)((bVar106 < bVar122) * bVar106 | (bVar106 >= bVar122) * bVar122) ==
                          bVar122) & bVar66 | bVar14;
            pbVar2[0xb] = -((byte)((bVar107 < bVar123) * bVar107 | (bVar107 >= bVar123) * bVar123)
                           == bVar123) & bVar67 | bVar15;
            pbVar2[0xc] = -((byte)((bVar108 < bVar124) * bVar108 | (bVar108 >= bVar124) * bVar124)
                           == bVar124) & bVar68 | bVar16;
            pbVar2[0xd] = -((byte)((bVar109 < bVar125) * bVar109 | (bVar109 >= bVar125) * bVar125)
                           == bVar125) & bVar69 | bVar17;
            pbVar2[0xe] = -((byte)((bVar110 < bVar126) * bVar110 | (bVar110 >= bVar126) * bVar126)
                           == bVar126) & bVar70 | bVar18;
            pbVar2[0xf] = -((byte)((bVar111 < bVar127) * bVar111 | (bVar111 >= bVar127) * bVar127)
                           == bVar127) & bVar71 | bVar19;
            pbVar1 = (byte *)(lVar93 + 0x10 + (longlong)ppcVar76);
            *pbVar1 = -((byte)((bVar78 < bVar128) * bVar78 | (bVar78 >= bVar128) * bVar128) ==
                       bVar128) & bVar56 | bVar20;
            pbVar1[1] = -((byte)((bVar80 < bVar129) * bVar80 | (bVar80 >= bVar129) * bVar129) ==
                         bVar129) & bVar57 | bVar21;
            pbVar1[2] = -((byte)((bVar79 < bVar130) * bVar79 | (bVar79 >= bVar130) * bVar130) ==
                         bVar130) & bVar58 | bVar22;
            pbVar1[3] = -((byte)((bVar36 < bVar131) * bVar36 | (bVar36 >= bVar131) * bVar131) ==
                         bVar131) & bVar59 | bVar23;
            pbVar1[4] = -((byte)((bVar37 < bVar132) * bVar37 | (bVar37 >= bVar132) * bVar132) ==
                         bVar132) & bVar60 | bVar24;
            pbVar1[5] = -((byte)((bVar38 < bVar133) * bVar38 | (bVar38 >= bVar133) * bVar133) ==
                         bVar133) & bVar61 | bVar25;
            pbVar1[6] = -((byte)((bVar39 < bVar134) * bVar39 | (bVar39 >= bVar134) * bVar134) ==
                         bVar134) & bVar62 | bVar26;
            pbVar1[7] = -((byte)((bVar40 < bVar135) * bVar40 | (bVar40 >= bVar135) * bVar135) ==
                         bVar135) & bVar63 | bVar27;
            pbVar1[8] = -((byte)((bVar104 < bVar136) * bVar104 | (bVar104 >= bVar136) * bVar136) ==
                         bVar136) & bVar64 | bVar28;
            pbVar1[9] = -((byte)((bVar105 < bVar137) * bVar105 | (bVar105 >= bVar137) * bVar137) ==
                         bVar137) & bVar65 | bVar29;
            pbVar1[10] = -((byte)((bVar106 < bVar138) * bVar106 | (bVar106 >= bVar138) * bVar138) ==
                          bVar138) & bVar66 | bVar30;
            pbVar1[0xb] = -((byte)((bVar107 < bVar139) * bVar107 | (bVar107 >= bVar139) * bVar139)
                           == bVar139) & bVar67 | bVar31;
            pbVar1[0xc] = -((byte)((bVar108 < bVar140) * bVar108 | (bVar108 >= bVar140) * bVar140)
                           == bVar140) & bVar68 | bVar32;
            pbVar1[0xd] = -((byte)((bVar109 < bVar141) * bVar109 | (bVar109 >= bVar141) * bVar141)
                           == bVar141) & bVar69 | bVar33;
            pbVar1[0xe] = -((byte)((bVar110 < bVar142) * bVar110 | (bVar110 >= bVar142) * bVar142)
                           == bVar142) & bVar70 | bVar34;
            pbVar1[0xf] = -((byte)((bVar111 < bVar143) * bVar111 | (bVar111 >= bVar143) * bVar143)
                           == bVar143) & bVar71 | bVar35;
            ppcVar76 = ppcVar76 + 4;
          } while (ppcVar77 != ppcVar76);
          if (ppcVar84 == ppcVar77) goto LAB_0062ade0;
          ppcVar76 = ppcVar77;
          if (((ulonglong)ppcVar84 & 0x18) != 0) goto LAB_0062ad2d;
        }
        else {
          ppcVar77 = (char **)0x0;
        }
LAB_0062adc1:
        do {
          *(byte *)(lVar93 + (longlong)ppcVar77) =
               ((byte)(*(byte *)(lVar93 + (longlong)ppcVar77) + 0xbf) < 0x1a) << 5 |
               *(byte *)(lVar93 + (longlong)ppcVar77);
          ppcVar77 = (char **)((longlong)ppcVar77 + 1);
LAB_0062addb:
        } while (ppcVar84 != ppcVar77);
      }
LAB_0062ade0:
      cVar81 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                         ("gemini-2.5",10,lVar93,ppcVar84);
      pcVar95 = (char *)0x1f400;
      if (cVar81 != '\0') {
        pcVar95 = (char *)0x6000;
      }
      if (local_c8 <= pcVar95) {
        pcVar95 = local_c8;
      }
      if (ppcVar84 != (char **)0x0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Qa,1);
      }
      if (local_c8 < (char *)0x401) {
        uVar99 = 7;
      }
      else if (local_c8 < (char *)0x1001) {
        uVar99 = 3;
      }
      else if (local_c8 < (char *)0x3001) {
        uVar99 = 6;
      }
      else {
        uVar99 = 5 - (ulonglong)(pcVar95 < (char *)0x6001);
      }
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    uVar91 = (*(code *)PTR___rust_alloc_00799000)();
    if (uVar91 == 0) {
      uVar103 = (*(code *)PTR_handle_error_00798ff0)();
      if (uVar99 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar103,1);
      }
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
    (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_00,uVar99);
    *param_1 = uVar99;
    param_1[1] = uVar91;
    param_1[2] = uVar99;
  }
  return param_1;
}


