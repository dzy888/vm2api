// 005e3c40 map_image_size

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* craggemini_core[66f3c71560d70857]::tools::map_image_size */

void __rustcall
craggemini_core[66f3c71560d70857]::tools::map_image_size
          (undefined8 *param_1,longlong param_2,undefined2 *param_3,longlong param_4,
          undefined8 param_5,longlong param_6,undefined8 param_7,longlong param_8,undefined8 param_9
          )

{
  byte *pbVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  code *pcVar5;
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
  bool bVar37;
  bool bVar38;
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
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  uint uVar79;
  ulonglong uVar80;
  ulonglong uVar81;
  longlong lVar82;
  uint *puVar83;
  undefined1 *puVar84;
  undefined1 *puVar85;
  ushort uVar86;
  ulonglong uVar87;
  undefined2 *puVar88;
  ulonglong uVar89;
  uint *puVar90;
  undefined2 *extraout_RDX;
  undefined1 *puVar91;
  ulonglong uVar92;
  int iVar93;
  char *pcVar94;
  uint uVar95;
  undefined2 *puVar96;
  undefined2 *puVar97;
  undefined2 *unaff_R14;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 uVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
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
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined8 local_110;
  undefined2 *local_100;
  longlong local_f8;
  undefined1 local_e8 [16];
  longlong local_d8;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined2 *local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (param_4 == 0) {
    local_100 = (undefined2 *)0xffffffffffffffff;
    if (param_2 != 0) goto LAB_005e3e09;
LAB_005e3dea:
    bVar38 = true;
    local_110 = 0xffffffffffffffff;
    goto joined_r0x005e3df6;
  }
  auVar139 = ::<str>::trim_matches::<<char>::is_whitespace>(param_4,param_5);
  puVar96 = auVar139._8_8_;
  auVar139._0_8_ = auVar139._0_8_;
  local_100 = (undefined2 *)0xffffffffffffffff;
  if ((auVar139._0_8_ != (int *)0x0) && (unaff_R14 = puVar96, puVar96 != (undefined2 *)0x0)) {
    local_e8 = auVar139;
    if (puVar96 == (undefined2 *)&DAT_00000004) {
      if (((*auVar139._0_8_ != 0x36313a39) && (*auVar139._0_8_ != 0x393a3631)) &&
         (*auVar139._0_8_ != 0x393a3132)) goto LAB_005e3fa3;
    }
    else if ((puVar96 != (undefined2 *)0x3) ||
            (((((*(char *)((longlong)auVar139._0_8_ + 2) != '1' || (short)*auVar139._0_8_ != 0x3a31
                && (*(char *)((longlong)auVar139._0_8_ + 2) != '3' ||
                    (short)*auVar139._0_8_ != 0x3a32)) &&
               ((*(char *)((longlong)auVar139._0_8_ + 2) != '2' || (short)*auVar139._0_8_ != 0x3a33
                && ((*(char *)((longlong)auVar139._0_8_ + 2) != '4' ||
                     (short)*auVar139._0_8_ != 0x3a33 &&
                    (*(char *)((longlong)auVar139._0_8_ + 2) != '3' ||
                     (short)*auVar139._0_8_ != 0x3a34)))))) &&
              (*(char *)((longlong)auVar139._0_8_ + 2) != '5' || (short)*auVar139._0_8_ != 0x3a34))
             && ((((*(char *)((longlong)auVar139._0_8_ + 2) != '4' ||
                    (short)*auVar139._0_8_ != 0x3a35 &&
                   (*(char *)((longlong)auVar139._0_8_ + 2) != '4' ||
                    (short)*auVar139._0_8_ != 0x3a31)) &&
                  (*(char *)((longlong)auVar139._0_8_ + 2) != '1' ||
                   (short)*auVar139._0_8_ != 0x3a34)) &&
                 ((*(char *)((longlong)auVar139._0_8_ + 2) != '8' ||
                   (short)*auVar139._0_8_ != 0x3a31 &&
                  (*(char *)((longlong)auVar139._0_8_ + 2) != '1' ||
                   (short)*auVar139._0_8_ != 0x3a38)))))))) {
LAB_005e3fa3:
      local_d0._0_8_ = local_e8;
      local_d0._8_8_ = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      (*(code *)PTR_format_inner_00799048)(extraout_XMM0_Qa,local_d0);
      param_1[3] = local_80;
      param_1[1] = local_90;
      param_1[2] = uStack_88;
      *param_1 = 0xfffffffffffffffe;
      return;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    local_f8 = (*(code *)PTR___rust_alloc_00799000)();
    if (local_f8 != 0) {
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_00,puVar96);
      local_100 = puVar96;
      goto joined_r0x005e405a;
    }
    goto LAB_005e474a;
  }
joined_r0x005e405a:
  if (param_2 == 0) goto LAB_005e3dea;
LAB_005e3e09:
  bVar38 = true;
  auVar140 = ::<str>::trim_matches::<<char>::is_whitespace>(param_2,param_3);
  auVar55._8_8_ = local_d0._8_8_;
  auVar55._0_8_ = local_d0._0_8_;
  auVar54._8_8_ = local_d0._8_8_;
  auVar54._0_8_ = local_d0._0_8_;
  auVar53._8_8_ = local_d0._8_8_;
  auVar53._0_8_ = local_d0._0_8_;
  auVar52._8_8_ = local_d0._8_8_;
  auVar52._0_8_ = local_d0._0_8_;
  auVar51._8_8_ = local_d0._8_8_;
  auVar51._0_8_ = local_d0._0_8_;
  auVar50._8_8_ = local_d0._8_8_;
  auVar50._0_8_ = local_d0._0_8_;
  auVar49._8_8_ = local_d0._8_8_;
  auVar49._0_8_ = local_d0._0_8_;
  auVar48._8_8_ = local_d0._8_8_;
  auVar48._0_8_ = local_d0._0_8_;
  auVar47._8_8_ = local_d0._8_8_;
  auVar47._0_8_ = local_d0._0_8_;
  auVar46._8_8_ = local_a0._8_8_;
  auVar46._0_8_ = local_a0._0_8_;
  auVar45._8_8_ = local_a0._8_8_;
  auVar45._0_8_ = local_a0._0_8_;
  auVar44._8_8_ = local_a0._8_8_;
  auVar44._0_8_ = local_a0._0_8_;
  auVar43._8_8_ = local_a0._8_8_;
  auVar43._0_8_ = local_a0._0_8_;
  auVar42._8_8_ = local_a0._8_8_;
  auVar42._0_8_ = local_a0._0_8_;
  auVar41._8_8_ = local_a0._8_8_;
  auVar41._0_8_ = local_a0._0_8_;
  auVar40._8_8_ = local_a0._8_8_;
  auVar40._0_8_ = local_a0._0_8_;
  auVar39._8_8_ = local_a0._8_8_;
  auVar39._0_8_ = local_a0._0_8_;
  auVar139._8_8_ = local_a0._8_8_;
  auVar139._0_8_ = local_a0._0_8_;
  param_3 = auVar140._8_8_;
  auVar140._0_8_ = auVar140._0_8_;
  local_110 = 0xffffffffffffffff;
  local_a0 = auVar46;
  local_d0 = auVar55;
  if (param_3 == (undefined2 *)0x0 || auVar140._0_8_ == (longlong *)0x0) goto joined_r0x005e3df6;
  switch(param_3) {
  case (undefined2 *)0x3:
    if ((((*(char *)((longlong)auVar140._0_8_ + 2) != '1' || (short)*auVar140._0_8_ != 0x3a31) &&
         (*(char *)((longlong)auVar140._0_8_ + 2) != '3' || (short)*auVar140._0_8_ != 0x3a32)) &&
        ((*(char *)((longlong)auVar140._0_8_ + 2) != '2' || (short)*auVar140._0_8_ != 0x3a33 &&
         ((*(char *)((longlong)auVar140._0_8_ + 2) != '4' || (short)*auVar140._0_8_ != 0x3a33 &&
          (*(char *)((longlong)auVar140._0_8_ + 2) != '3' || (short)*auVar140._0_8_ != 0x3a34))))))
       && ((*(char *)((longlong)auVar140._0_8_ + 2) != '5' || (short)*auVar140._0_8_ != 0x3a34 &&
           ((((*(char *)((longlong)auVar140._0_8_ + 2) != '4' || (short)*auVar140._0_8_ != 0x3a35 &&
              (*(char *)((longlong)auVar140._0_8_ + 2) != '4' || (short)*auVar140._0_8_ != 0x3a31))
             && (*(char *)((longlong)auVar140._0_8_ + 2) != '1' || (short)*auVar140._0_8_ != 0x3a34)
             ) && ((*(char *)((longlong)auVar140._0_8_ + 2) != '8' ||
                    (short)*auVar140._0_8_ != 0x3a31 &&
                   (*(char *)((longlong)auVar140._0_8_ + 2) != '1' ||
                    (short)*auVar140._0_8_ != 0x3a38)))))))) goto switchD_005e3e5f_caseD_5;
LAB_005e4192:
    puVar96 = param_3;
    puVar97 = (undefined2 *)&DAT_0019ecd5;
    local_a0 = auVar43;
    local_d0 = auVar52;
    break;
  case (undefined2 *)0x4:
    if ((int)*auVar140._0_8_ == 0x6f747561) goto joined_r0x005e3df6;
    if ((((int)*auVar140._0_8_ == 0x36313a39) || ((int)*auVar140._0_8_ == 0x393a3631)) ||
       ((int)*auVar140._0_8_ == 0x393a3132)) goto LAB_005e4192;
  default:
switchD_005e3e5f_caseD_5:
    local_c0 = 0;
    local_a8 = 1;
    local_b0 = 0x7800000078;
    local_b8 = param_3;
    local_a0 = auVar140;
    local_d0 = auVar140;
    uVar98 = <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
             ::next_match(local_e8,local_d0);
    if (local_e8[0] != '\0') {
      uVar89 = (longlong)param_3 - local_d8;
      if (local_e8._8_8_ == 0) {
        uVar81 = 0;
        bVar38 = true;
      }
      else {
        if (local_e8._8_8_ == 1) {
          cVar3 = (char)*auVar140._0_8_;
          uVar81 = 0;
          bVar38 = true;
          if ((cVar3 == '+') || (cVar3 == '-')) goto joined_r0x005e4a1a;
        }
        else {
          cVar3 = (char)*auVar140._0_8_;
        }
        uVar81 = (ulonglong)(cVar3 == '+');
        uVar87 = local_e8._8_8_ - uVar81;
        pbVar1 = (byte *)((longlong)auVar140._0_8_ + uVar81);
        if (uVar87 < 9) {
          if (local_e8._8_8_ == uVar81) {
            uVar80 = 0;
          }
          else {
            uVar79 = *pbVar1 - 0x30;
            uVar80 = (ulonglong)uVar79;
            uVar81 = 0;
            bVar38 = true;
            if (9 < uVar79) goto joined_r0x005e4a1a;
            if (uVar87 != 1) {
              if (9 < pbVar1[1] - 0x30) goto joined_r0x005e4a1a;
              uVar79 = (pbVar1[1] - 0x30) + uVar79 * 10;
              uVar80 = (ulonglong)uVar79;
              if (uVar87 != 2) {
                if (9 < pbVar1[2] - 0x30) goto joined_r0x005e4a1a;
                uVar79 = (pbVar1[2] - 0x30) + uVar79 * 10;
                uVar80 = (ulonglong)uVar79;
                if (uVar87 != 3) {
                  if (9 < pbVar1[3] - 0x30) goto joined_r0x005e4a1a;
                  uVar79 = (pbVar1[3] - 0x30) + uVar79 * 10;
                  uVar80 = (ulonglong)uVar79;
                  if (uVar87 != 4) {
                    if (9 < pbVar1[4] - 0x30) goto joined_r0x005e4a1a;
                    uVar79 = (pbVar1[4] - 0x30) + uVar79 * 10;
                    uVar80 = (ulonglong)uVar79;
                    if (uVar87 != 5) {
                      if (9 < pbVar1[5] - 0x30) goto joined_r0x005e4a1a;
                      uVar79 = (pbVar1[5] - 0x30) + uVar79 * 10;
                      uVar80 = (ulonglong)uVar79;
                      if (uVar87 != 6) {
                        if (9 < pbVar1[6] - 0x30) goto joined_r0x005e4a1a;
                        uVar79 = (pbVar1[6] - 0x30) + uVar79 * 10;
                        uVar80 = (ulonglong)uVar79;
                        if (uVar87 != 7) {
                          if (9 < pbVar1[7] - 0x30) goto joined_r0x005e4a1a;
                          uVar80 = (ulonglong)((pbVar1[7] - 0x30) + uVar79 * 10);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LAB_005e4453:
          uVar81 = uVar80 << 0x20;
          bVar38 = false;
        }
        else {
          uVar80 = 0;
          lVar82 = 0;
          do {
            if (lVar82 == local_e8._8_8_ - uVar81) goto LAB_005e4453;
            uVar79 = (uint)(uVar80 * 10);
            if (((int)(uVar80 * 10 >> 0x20) != 0) || (uVar95 = pbVar1[lVar82] - 0x30, 9 < uVar95)) {
              uVar81 = 0;
              bVar38 = true;
              goto joined_r0x005e4a1a;
            }
            lVar82 = lVar82 + 1;
            uVar80 = (ulonglong)(uVar95 + uVar79);
          } while (!CARRY4(uVar95,uVar79));
          uVar81 = 0;
          bVar38 = true;
        }
      }
joined_r0x005e4a1a:
      if (uVar89 != 0) {
        pcVar94 = (char *)(local_d8 + (longlong)auVar140._0_8_);
        if (uVar89 == 1) {
          cVar3 = *pcVar94;
          if ((cVar3 == '+') || (cVar3 == '-')) goto LAB_005e455d;
        }
        else {
          cVar3 = *pcVar94;
        }
        uVar80 = (ulonglong)(cVar3 == '+');
        uVar92 = uVar89 - uVar80;
        uVar87 = 0;
        if (uVar92 < 9) {
          if (uVar89 != uVar80) {
            uVar89 = 0;
            do {
              if (9 < (byte)pcVar94[uVar89 + uVar80] - 0x30) goto LAB_005e455d;
              uVar87 = (ulonglong)(((byte)pcVar94[uVar89 + uVar80] - 0x30) + (int)uVar87 * 10);
              uVar89 = uVar89 + 1;
            } while (uVar92 != uVar89);
          }
LAB_005e44c4:
          lVar82 = uVar87 << 0x20;
          bVar37 = false;
joined_r0x005e4a41:
          if ((((!bVar38) && (!bVar37)) && (uVar81 >> 0x20 != 0)) && (lVar82 != 0)) {
            uVar79 = (uint)(uVar81 >> 0x20);
            uVar95 = (uint)((ulonglong)lVar82 >> 0x20);
            nearest_aspect_ratio(uVar81 >> 0x20,uVar95);
            if (uVar79 < uVar95) {
              uVar79 = uVar95;
            }
            puVar88 = (undefined2 *)&DAT_0019ecd5;
            if (0x5ff < uVar79) {
              puVar88 = (undefined2 *)&DAT_0019ecd7;
            }
            puVar96 = extraout_RDX;
            puVar97 = &DAT_0019ecd9;
            if (uVar79 < 0xc00) {
              puVar97 = puVar88;
            }
            break;
          }
        }
        else {
          uVar89 = 0;
          do {
            if (uVar92 == uVar89) goto LAB_005e44c4;
            uVar79 = (uint)(uVar87 * 10);
            if ((int)(uVar87 * 10 >> 0x20) != 0) {
              lVar82 = 0;
              bVar37 = true;
              goto joined_r0x005e4a41;
            }
            uVar95 = (byte)pcVar94[uVar89 + uVar80] - 0x30;
            uVar87 = (ulonglong)(uVar79 + uVar95);
          } while ((uVar95 < 10) && (uVar89 = uVar89 + 1, !CARRY4(uVar79,uVar95)));
        }
      }
    }
LAB_005e455d:
    local_d0._0_8_ = local_a0;
    local_d0._8_8_ = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
    (*(code *)PTR_format_inner_00799048)(uVar98,local_d0);
    param_1[3] = local_68;
    param_1[1] = local_78;
    param_1[2] = uStack_70;
    *param_1 = 0xfffffffffffffffe;
    auVar140 = local_e8;
    goto LAB_005e4ccd;
  case (undefined2 *)0x7:
    puVar96 = (undefined2 *)0x3;
    puVar97 = (undefined2 *)&DAT_0019ecd5;
    local_a0 = auVar42;
    local_d0 = auVar51;
    if (*(int *)((longlong)auVar140._0_8_ + 3) != 0x36353278 || (int)*auVar140._0_8_ != 0x78363532)
    {
      local_a0 = auVar46;
      local_d0 = auVar55;
      if (*(int *)((longlong)auVar140._0_8_ + 3) != 0x32313578 || (int)*auVar140._0_8_ != 0x78323135
         ) goto switchD_005e3e5f_caseD_5;
    }
    break;
  case (undefined2 *)0x9:
    puVar96 = (undefined2 *)0x3;
    if ((char)auVar140._0_8_[1] == '4' && *auVar140._0_8_ == 0x3230317834323031) {
      puVar97 = (undefined2 *)&DAT_0019ecd5;
      local_a0 = auVar41;
      local_d0 = auVar50;
    }
    else {
      puVar97 = (undefined2 *)&DAT_0019ecd7;
      local_a0 = auVar44;
      local_d0 = auVar53;
      if ((char)auVar140._0_8_[1] != '4' || *auVar140._0_8_ != 0x3230317836333531) {
        local_a0 = auVar45;
        local_d0 = auVar54;
        if ((char)auVar140._0_8_[1] != '6' || *auVar140._0_8_ != 0x3335317834323031) {
          if (((char)auVar140._0_8_[1] == '4' && *auVar140._0_8_ == 0x3230317832393731) ||
             ((char)auVar140._0_8_[1] == '2' && *auVar140._0_8_ == 0x3937317834323031)) {
            puVar96 = (undefined2 *)&DAT_00000004;
            local_a0 = auVar40;
            local_d0 = auVar49;
          }
          else {
            local_a0 = auVar139;
            local_d0 = auVar47;
            if ((char)auVar140._0_8_[1] != '8' || *auVar140._0_8_ != 0x3430327838343032) {
              if ((char)auVar140._0_8_[1] != '6' || *auVar140._0_8_ != 0x3930347836393034)
              goto switchD_005e3e5f_caseD_5;
              puVar97 = &DAT_0019ecd9;
              local_a0 = auVar39;
              local_d0 = auVar48;
            }
          }
        }
      }
    }
  }
  if (local_100 == (undefined2 *)0xffffffffffffffff) {
    if (-1 < (longlong)puVar96) {
      if (puVar96 == (undefined2 *)0x0) {
        local_f8 = 1;
        puVar96 = (undefined2 *)0x0;
        local_100 = (undefined2 *)0x0;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        local_f8 = (*(code *)PTR___rust_alloc_00799000)();
        if (local_f8 == 0) goto LAB_005e474a;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_01,puVar96);
        local_100 = puVar96;
      }
      goto LAB_005e45d7;
    }
  }
  else {
    puVar96 = unaff_R14;
LAB_005e45d7:
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    param_3 = (undefined2 *)(*(code *)PTR___rust_alloc_00799000)();
    if (param_3 != (undefined2 *)0x0) {
      *param_3 = *puVar97;
      local_110 = 2;
      bVar38 = false;
      unaff_R14 = puVar96;
joined_r0x005e3df6:
      if (param_6 != 0) {
        auVar139 = ::<str>::trim_matches::<<char>::is_whitespace>(param_6,param_7);
        puVar91 = auVar139._8_8_;
        if ((auVar139._0_8_ == 0) || (puVar91 == (undefined1 *)0x0)) goto joined_r0x005e4d57;
        if ((longlong)puVar91 < 0) goto LAB_005e474a;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar83 = (uint *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar83 == (uint *)0x0) goto LAB_005e474a;
        (*(code *)PTR_memcpy_00799008)();
        bVar78 = UNK_0018483f;
        bVar77 = UNK_0018483e;
        bVar76 = UNK_0018483d;
        bVar75 = UNK_0018483c;
        bVar74 = UNK_0018483b;
        bVar73 = UNK_0018483a;
        bVar72 = UNK_00184839;
        bVar71 = UNK_00184838;
        bVar70 = UNK_00184837;
        bVar69 = UNK_00184836;
        bVar68 = UNK_00184835;
        bVar67 = UNK_00184834;
        bVar66 = UNK_00184833;
        bVar65 = UNK_00184832;
        bVar64 = UNK_00184831;
        bVar63 = DAT_00184830;
        auVar139 = _DAT_00183f60;
        bVar106 = UNK_0018303f;
        bVar105 = UNK_0018303e;
        bVar104 = UNK_0018303d;
        bVar103 = UNK_0018303c;
        bVar102 = UNK_0018303b;
        bVar101 = UNK_0018303a;
        bVar100 = UNK_00183039;
        bVar99 = UNK_00183038;
        bVar62 = UNK_00183037;
        bVar61 = UNK_00183036;
        bVar60 = UNK_00183035;
        bVar59 = UNK_00183034;
        bVar58 = UNK_00183033;
        bVar57 = UNK_00183032;
        bVar56 = UNK_00183031;
        bVar4 = DAT_00183030;
        if (&DAT_00000007 < puVar91) {
          if (puVar91 < &DAT_00000020) {
            puVar84 = (undefined1 *)0x0;
LAB_005e487e:
            uVar98 = s__001846a0._0_8_;
            auVar139 = _DAT_00184160;
            bVar62 = UNK_001840c7;
            bVar61 = UNK_001840c6;
            bVar60 = UNK_001840c5;
            bVar59 = UNK_001840c4;
            bVar58 = UNK_001840c3;
            bVar57 = UNK_001840c2;
            bVar56 = UNK_001840c1;
            bVar4 = DAT_001840c0;
            puVar85 = (undefined1 *)((ulonglong)puVar91 & 0x7ffffffffffffff8);
            do {
              uVar89 = *(ulonglong *)((longlong)puVar83 + (longlong)puVar84);
              bVar99 = (char)uVar89 + auVar139[0];
              bVar100 = (char)(uVar89 >> 8) + auVar139[1];
              bVar101 = (char)(uVar89 >> 0x10) + auVar139[2];
              bVar102 = (char)(uVar89 >> 0x18) + auVar139[3];
              bVar103 = (char)(uVar89 >> 0x20) + auVar139[4];
              bVar104 = (char)(uVar89 >> 0x28) + auVar139[5];
              bVar105 = (char)(uVar89 >> 0x30) + auVar139[6];
              bVar106 = (char)(uVar89 >> 0x38) + auVar139[7];
              *(ulonglong *)((longlong)puVar83 + (longlong)puVar84) =
                   ~CONCAT17(-((byte)((bVar106 < bVar62) * bVar62 | (bVar106 >= bVar62) * bVar106)
                              == bVar106),
                             CONCAT16(-((byte)((bVar105 < bVar61) * bVar61 |
                                              (bVar105 >= bVar61) * bVar105) == bVar105),
                                      CONCAT15(-((byte)((bVar104 < bVar60) * bVar60 |
                                                       (bVar104 >= bVar60) * bVar104) == bVar104),
                                               CONCAT14(-((byte)((bVar103 < bVar59) * bVar59 |
                                                                (bVar103 >= bVar59) * bVar103) ==
                                                         bVar103),
                                                        CONCAT13(-((byte)((bVar102 < bVar58) *
                                                                          bVar58 | (bVar102 >=
                                                                                   bVar58) * bVar102
                                                                         ) == bVar102),
                                                                 CONCAT12(-((byte)((bVar101 < bVar57
                                                                                   ) * bVar57 |
                                                                                  (bVar101 >= bVar57
                                                                                  ) * bVar101) ==
                                                                           bVar101),
                                                                          CONCAT11(-((byte)((bVar100
                                                                                            < bVar56
                                                  ) * bVar56 | (bVar100 >= bVar56) * bVar100) ==
                                                  bVar100),-((byte)((bVar99 < bVar4) * bVar4 |
                                                                   (bVar99 >= bVar4) * bVar99) ==
                                                            bVar99)))))))) & uVar98 | uVar89;
              puVar84 = puVar84 + 8;
              if (puVar85 == puVar84) goto LAB_005e4b0e;
            } while( true );
          }
          puVar85 = (undefined1 *)((ulonglong)puVar91 & 0x7fffffffffffffe0);
          puVar84 = (undefined1 *)0x0;
          do {
            pbVar1 = (byte *)((longlong)puVar83 + (longlong)puVar84);
            bVar6 = pbVar1[1];
            bVar7 = pbVar1[2];
            bVar8 = pbVar1[3];
            bVar9 = pbVar1[4];
            bVar10 = pbVar1[5];
            bVar11 = pbVar1[6];
            bVar12 = pbVar1[7];
            bVar13 = pbVar1[8];
            bVar14 = pbVar1[9];
            bVar15 = pbVar1[10];
            bVar16 = pbVar1[0xb];
            bVar17 = pbVar1[0xc];
            bVar18 = pbVar1[0xd];
            bVar19 = pbVar1[0xe];
            bVar20 = pbVar1[0xf];
            pbVar2 = (byte *)((longlong)(puVar83 + 4) + (longlong)puVar84);
            bVar21 = *pbVar2;
            bVar22 = pbVar2[1];
            bVar23 = pbVar2[2];
            bVar24 = pbVar2[3];
            bVar25 = pbVar2[4];
            bVar26 = pbVar2[5];
            bVar27 = pbVar2[6];
            bVar28 = pbVar2[7];
            bVar29 = pbVar2[8];
            bVar30 = pbVar2[9];
            bVar31 = pbVar2[10];
            bVar32 = pbVar2[0xb];
            bVar33 = pbVar2[0xc];
            bVar34 = pbVar2[0xd];
            bVar35 = pbVar2[0xe];
            bVar36 = pbVar2[0xf];
            bVar107 = *pbVar1 + auVar139[0];
            bVar108 = bVar6 + auVar139[1];
            bVar109 = bVar7 + auVar139[2];
            bVar110 = bVar8 + auVar139[3];
            bVar111 = bVar9 + auVar139[4];
            bVar112 = bVar10 + auVar139[5];
            bVar113 = bVar11 + auVar139[6];
            bVar114 = bVar12 + auVar139[7];
            bVar115 = bVar13 + auVar139[8];
            bVar116 = bVar14 + auVar139[9];
            bVar117 = bVar15 + auVar139[10];
            bVar118 = bVar16 + auVar139[0xb];
            bVar119 = bVar17 + auVar139[0xc];
            bVar120 = bVar18 + auVar139[0xd];
            bVar121 = bVar19 + auVar139[0xe];
            bVar122 = bVar20 + auVar139[0xf];
            bVar123 = bVar21 + auVar139[0];
            bVar124 = bVar22 + auVar139[1];
            bVar125 = bVar23 + auVar139[2];
            bVar126 = bVar24 + auVar139[3];
            bVar127 = bVar25 + auVar139[4];
            bVar128 = bVar26 + auVar139[5];
            bVar129 = bVar27 + auVar139[6];
            bVar130 = bVar28 + auVar139[7];
            bVar131 = bVar29 + auVar139[8];
            bVar132 = bVar30 + auVar139[9];
            bVar133 = bVar31 + auVar139[10];
            bVar134 = bVar32 + auVar139[0xb];
            bVar135 = bVar33 + auVar139[0xc];
            bVar136 = bVar34 + auVar139[0xd];
            bVar137 = bVar35 + auVar139[0xe];
            bVar138 = bVar36 + auVar139[0xf];
            pbVar2 = (byte *)((longlong)puVar83 + (longlong)puVar84);
            *pbVar2 = -((byte)((bVar4 < bVar107) * bVar4 | (bVar4 >= bVar107) * bVar107) == bVar107)
                      & bVar63 | *pbVar1;
            pbVar2[1] = -((byte)((bVar56 < bVar108) * bVar56 | (bVar56 >= bVar108) * bVar108) ==
                         bVar108) & bVar64 | bVar6;
            pbVar2[2] = -((byte)((bVar57 < bVar109) * bVar57 | (bVar57 >= bVar109) * bVar109) ==
                         bVar109) & bVar65 | bVar7;
            pbVar2[3] = -((byte)((bVar58 < bVar110) * bVar58 | (bVar58 >= bVar110) * bVar110) ==
                         bVar110) & bVar66 | bVar8;
            pbVar2[4] = -((byte)((bVar59 < bVar111) * bVar59 | (bVar59 >= bVar111) * bVar111) ==
                         bVar111) & bVar67 | bVar9;
            pbVar2[5] = -((byte)((bVar60 < bVar112) * bVar60 | (bVar60 >= bVar112) * bVar112) ==
                         bVar112) & bVar68 | bVar10;
            pbVar2[6] = -((byte)((bVar61 < bVar113) * bVar61 | (bVar61 >= bVar113) * bVar113) ==
                         bVar113) & bVar69 | bVar11;
            pbVar2[7] = -((byte)((bVar62 < bVar114) * bVar62 | (bVar62 >= bVar114) * bVar114) ==
                         bVar114) & bVar70 | bVar12;
            pbVar2[8] = -((byte)((bVar99 < bVar115) * bVar99 | (bVar99 >= bVar115) * bVar115) ==
                         bVar115) & bVar71 | bVar13;
            pbVar2[9] = -((byte)((bVar100 < bVar116) * bVar100 | (bVar100 >= bVar116) * bVar116) ==
                         bVar116) & bVar72 | bVar14;
            pbVar2[10] = -((byte)((bVar101 < bVar117) * bVar101 | (bVar101 >= bVar117) * bVar117) ==
                          bVar117) & bVar73 | bVar15;
            pbVar2[0xb] = -((byte)((bVar102 < bVar118) * bVar102 | (bVar102 >= bVar118) * bVar118)
                           == bVar118) & bVar74 | bVar16;
            pbVar2[0xc] = -((byte)((bVar103 < bVar119) * bVar103 | (bVar103 >= bVar119) * bVar119)
                           == bVar119) & bVar75 | bVar17;
            pbVar2[0xd] = -((byte)((bVar104 < bVar120) * bVar104 | (bVar104 >= bVar120) * bVar120)
                           == bVar120) & bVar76 | bVar18;
            pbVar2[0xe] = -((byte)((bVar105 < bVar121) * bVar105 | (bVar105 >= bVar121) * bVar121)
                           == bVar121) & bVar77 | bVar19;
            pbVar2[0xf] = -((byte)((bVar106 < bVar122) * bVar106 | (bVar106 >= bVar122) * bVar122)
                           == bVar122) & bVar78 | bVar20;
            pbVar1 = (byte *)((longlong)(puVar83 + 4) + (longlong)puVar84);
            *pbVar1 = -((byte)((bVar4 < bVar123) * bVar4 | (bVar4 >= bVar123) * bVar123) == bVar123)
                      & bVar63 | bVar21;
            pbVar1[1] = -((byte)((bVar56 < bVar124) * bVar56 | (bVar56 >= bVar124) * bVar124) ==
                         bVar124) & bVar64 | bVar22;
            pbVar1[2] = -((byte)((bVar57 < bVar125) * bVar57 | (bVar57 >= bVar125) * bVar125) ==
                         bVar125) & bVar65 | bVar23;
            pbVar1[3] = -((byte)((bVar58 < bVar126) * bVar58 | (bVar58 >= bVar126) * bVar126) ==
                         bVar126) & bVar66 | bVar24;
            pbVar1[4] = -((byte)((bVar59 < bVar127) * bVar59 | (bVar59 >= bVar127) * bVar127) ==
                         bVar127) & bVar67 | bVar25;
            pbVar1[5] = -((byte)((bVar60 < bVar128) * bVar60 | (bVar60 >= bVar128) * bVar128) ==
                         bVar128) & bVar68 | bVar26;
            pbVar1[6] = -((byte)((bVar61 < bVar129) * bVar61 | (bVar61 >= bVar129) * bVar129) ==
                         bVar129) & bVar69 | bVar27;
            pbVar1[7] = -((byte)((bVar62 < bVar130) * bVar62 | (bVar62 >= bVar130) * bVar130) ==
                         bVar130) & bVar70 | bVar28;
            pbVar1[8] = -((byte)((bVar99 < bVar131) * bVar99 | (bVar99 >= bVar131) * bVar131) ==
                         bVar131) & bVar71 | bVar29;
            pbVar1[9] = -((byte)((bVar100 < bVar132) * bVar100 | (bVar100 >= bVar132) * bVar132) ==
                         bVar132) & bVar72 | bVar30;
            pbVar1[10] = -((byte)((bVar101 < bVar133) * bVar101 | (bVar101 >= bVar133) * bVar133) ==
                          bVar133) & bVar73 | bVar31;
            pbVar1[0xb] = -((byte)((bVar102 < bVar134) * bVar102 | (bVar102 >= bVar134) * bVar134)
                           == bVar134) & bVar74 | bVar32;
            pbVar1[0xc] = -((byte)((bVar103 < bVar135) * bVar103 | (bVar103 >= bVar135) * bVar135)
                           == bVar135) & bVar75 | bVar33;
            pbVar1[0xd] = -((byte)((bVar104 < bVar136) * bVar104 | (bVar104 >= bVar136) * bVar136)
                           == bVar136) & bVar76 | bVar34;
            pbVar1[0xe] = -((byte)((bVar105 < bVar137) * bVar105 | (bVar105 >= bVar137) * bVar137)
                           == bVar137) & bVar77 | bVar35;
            pbVar1[0xf] = -((byte)((bVar106 < bVar138) * bVar106 | (bVar106 >= bVar138) * bVar138)
                           == bVar138) & bVar78 | bVar36;
            puVar84 = puVar84 + 0x20;
          } while (puVar85 != puVar84);
          if (puVar91 != puVar85) {
            puVar84 = puVar85;
            if (((ulonglong)puVar91 & 0x18) != 0) goto LAB_005e487e;
            goto LAB_005e4af4;
          }
        }
        else {
          puVar85 = (undefined1 *)0x0;
LAB_005e4af4:
          do {
            *(byte *)((longlong)puVar83 + (longlong)puVar85) =
                 ((byte)(*(byte *)((longlong)puVar83 + (longlong)puVar85) + 0xbf) < 0x1a) << 5 |
                 *(byte *)((longlong)puVar83 + (longlong)puVar85);
            puVar85 = puVar85 + 1;
LAB_005e4b0e:
          } while (puVar91 != puVar85);
        }
        puVar90 = &switchD_005e4b2f::switchdataD_0019d9b8;
        switch(puVar91) {
        case (undefined1 *)0x2:
          if ((ushort)*puVar83 == 0x6b31) {
LAB_005e4bb9:
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            param_3 = (undefined2 *)(*(code *)PTR___rust_alloc_00799000)();
            if (param_3 == (undefined2 *)0x0) goto LAB_005e4d9e;
            *param_3 = 0x4b31;
            uVar98 = extraout_XMM0_Qa_02;
LAB_005e4d17:
            if (!bVar38) {
              uVar98 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar98,1);
            }
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar98,1);
            local_110 = 2;
            goto joined_r0x005e4d57;
          }
          if (((ushort)*puVar83 == 0x6468) || ((ushort)*puVar83 == 0x6b32)) goto LAB_005e4cf0;
          if ((ushort)*puVar83 == 0x6b34) goto LAB_005e4bfb;
          break;
        case (undefined1 *)0x3:
          uVar86 = *(byte *)((longlong)puVar83 + 2) ^ 0x77 | (ushort)*puVar83 ^ 0x6f6c;
          puVar90 = (uint *)(ulonglong)uVar86;
          if (uVar86 == 0) goto LAB_005e4bb9;
          break;
        case (undefined1 *)0x4:
          if ((*puVar83 == 0x68676968) || (*puVar83 == 0x6f747561)) {
LAB_005e4cf0:
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            param_3 = (undefined2 *)(*(code *)PTR___rust_alloc_00799000)();
            if (param_3 == (undefined2 *)0x0) goto LAB_005e4d9e;
            *param_3 = 0x4b32;
            uVar98 = extraout_XMM0_Qa_04;
            goto LAB_005e4d17;
          }
          break;
        case (undefined1 *)0x5:
          uVar79 = (byte)puVar83[1] ^ 0x61 | *puVar83 ^ 0x72746c75;
          puVar90 = (uint *)(ulonglong)uVar79;
          if (uVar79 == 0) {
LAB_005e4bfb:
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            param_3 = (undefined2 *)(*(code *)PTR___rust_alloc_00799000)();
            if (param_3 != (undefined2 *)0x0) {
              *param_3 = 0x4b34;
              uVar98 = extraout_XMM0_Qa_03;
              goto LAB_005e4d17;
            }
LAB_005e4d9e:
            (*(code *)PTR_handle_error_00798ff0)();
            goto LAB_005e4f54;
          }
          break;
        case (undefined1 *)0x6:
          uVar79 = (ushort)puVar83[1] ^ 0x6d75 | *puVar83 ^ 0x6964656d;
          puVar90 = (uint *)(ulonglong)uVar79;
          if (uVar79 == 0) goto LAB_005e4cf0;
          break;
        case (undefined1 *)0x8:
          if (*(longlong *)puVar83 == 0x647261646e617473) goto LAB_005e4bb9;
        }
        local_d0._0_8_ = local_e8;
        local_d0._8_8_ = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
        local_e8._0_8_ = puVar83;
        local_e8._8_8_ = puVar91;
        (*(code *)PTR_format_inner_00799048)(puVar90,local_d0);
        param_1[3] = local_50;
        param_1[1] = local_60;
        param_1[2] = uStack_58;
        *param_1 = 0xfffffffffffffffe;
        local_78 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
        auVar140._8_8_ = local_e8._8_8_;
        auVar140._0_8_ = local_e8._0_8_;
        iVar93 = (int)local_110;
joined_r0x005e4cbd:
        if (iVar93 != -1) {
          local_78 = (*(code *)PTR___rust_dealloc_00798fc8)(local_78,1);
          auVar140._8_8_ = local_e8._8_8_;
          auVar140._0_8_ = local_e8._0_8_;
        }
LAB_005e4ccd:
        if ((longlong)local_100 < 1) {
          return;
        }
        local_e8 = auVar140;
        (*(code *)PTR___rust_dealloc_00798fc8)(local_78,1);
        return;
      }
joined_r0x005e4d57:
      if (param_8 == 0) goto LAB_005e4d65;
      auVar139 = ::<str>::trim_matches::<<char>::is_whitespace>(param_8,param_9);
      puVar91 = auVar139._8_8_;
      if ((auVar139._0_8_ == 0) || (puVar91 == (undefined1 *)0x0)) goto LAB_005e4d65;
      if (-1 < (longlong)puVar91) {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar83 = (uint *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar83 != (uint *)0x0) {
          (*(code *)PTR_memcpy_00799008)();
          bVar78 = UNK_0018483f;
          bVar77 = UNK_0018483e;
          bVar76 = UNK_0018483d;
          bVar75 = UNK_0018483c;
          bVar74 = UNK_0018483b;
          bVar73 = UNK_0018483a;
          bVar72 = UNK_00184839;
          bVar71 = UNK_00184838;
          bVar70 = UNK_00184837;
          bVar69 = UNK_00184836;
          bVar68 = UNK_00184835;
          bVar67 = UNK_00184834;
          bVar66 = UNK_00184833;
          bVar65 = UNK_00184832;
          bVar64 = UNK_00184831;
          bVar63 = DAT_00184830;
          bVar106 = UNK_0018303f;
          bVar105 = UNK_0018303e;
          bVar104 = UNK_0018303d;
          bVar103 = UNK_0018303c;
          bVar102 = UNK_0018303b;
          bVar101 = UNK_0018303a;
          bVar100 = UNK_00183039;
          bVar99 = UNK_00183038;
          bVar62 = UNK_00183037;
          bVar61 = UNK_00183036;
          bVar60 = UNK_00183035;
          bVar59 = UNK_00183034;
          bVar58 = UNK_00183033;
          bVar57 = UNK_00183032;
          bVar56 = UNK_00183031;
          bVar4 = DAT_00183030;
          auVar139 = _DAT_00182cc0;
          if (&DAT_00000007 < puVar91) {
            uVar89 = 0x7fffffffffffffe0;
            if (puVar91 < &DAT_00000020) {
              puVar84 = (undefined1 *)0x0;
LAB_005e497e:
              uVar98 = s__001846a0._0_8_;
              bVar62 = UNK_001840c7;
              bVar61 = UNK_001840c6;
              bVar60 = UNK_001840c5;
              bVar59 = UNK_001840c4;
              bVar58 = UNK_001840c3;
              bVar57 = UNK_001840c2;
              bVar56 = UNK_001840c1;
              bVar4 = DAT_001840c0;
              auVar139 = _DAT_001830d0;
              uVar89 = 0x7ffffffffffffff8;
              puVar85 = (undefined1 *)((ulonglong)puVar91 & 0x7ffffffffffffff8);
              do {
                uVar81 = *(ulonglong *)((longlong)puVar83 + (longlong)puVar84);
                bVar99 = (char)uVar81 + auVar139[0];
                bVar100 = (char)(uVar81 >> 8) + auVar139[1];
                bVar101 = (char)(uVar81 >> 0x10) + auVar139[2];
                bVar102 = (char)(uVar81 >> 0x18) + auVar139[3];
                bVar103 = (char)(uVar81 >> 0x20) + auVar139[4];
                bVar104 = (char)(uVar81 >> 0x28) + auVar139[5];
                bVar105 = (char)(uVar81 >> 0x30) + auVar139[6];
                bVar106 = (char)(uVar81 >> 0x38) + auVar139[7];
                *(ulonglong *)((longlong)puVar83 + (longlong)puVar84) =
                     ~CONCAT17(-((byte)((bVar106 < bVar62) * bVar62 | (bVar106 >= bVar62) * bVar106)
                                == bVar106),
                               CONCAT16(-((byte)((bVar105 < bVar61) * bVar61 |
                                                (bVar105 >= bVar61) * bVar105) == bVar105),
                                        CONCAT15(-((byte)((bVar104 < bVar60) * bVar60 |
                                                         (bVar104 >= bVar60) * bVar104) == bVar104),
                                                 CONCAT14(-((byte)((bVar103 < bVar59) * bVar59 |
                                                                  (bVar103 >= bVar59) * bVar103) ==
                                                           bVar103),
                                                          CONCAT13(-((byte)((bVar102 < bVar58) *
                                                                            bVar58 | (bVar102 >=
                                                                                     bVar58) * 
                                                  bVar102) == bVar102),
                                                  CONCAT12(-((byte)((bVar101 < bVar57) * bVar57 |
                                                                   (bVar101 >= bVar57) * bVar101) ==
                                                            bVar101),
                                                           CONCAT11(-((byte)((bVar100 < bVar56) *
                                                                             bVar56 | (bVar100 >=
                                                                                      bVar56) * 
                                                  bVar100) == bVar100),
                                                  -((byte)((bVar99 < bVar4) * bVar4 |
                                                          (bVar99 >= bVar4) * bVar99) == bVar99)))))
                                                ))) & uVar98 ^ uVar81;
                puVar84 = puVar84 + 8;
                if (puVar85 == puVar84) goto LAB_005e4de6;
              } while( true );
            }
            puVar85 = (undefined1 *)((ulonglong)puVar91 & 0x7fffffffffffffe0);
            puVar84 = (undefined1 *)0x0;
            do {
              pbVar1 = (byte *)((longlong)puVar83 + (longlong)puVar84);
              bVar6 = pbVar1[1];
              bVar7 = pbVar1[2];
              bVar8 = pbVar1[3];
              bVar9 = pbVar1[4];
              bVar10 = pbVar1[5];
              bVar11 = pbVar1[6];
              bVar12 = pbVar1[7];
              bVar13 = pbVar1[8];
              bVar14 = pbVar1[9];
              bVar15 = pbVar1[10];
              bVar16 = pbVar1[0xb];
              bVar17 = pbVar1[0xc];
              bVar18 = pbVar1[0xd];
              bVar19 = pbVar1[0xe];
              bVar20 = pbVar1[0xf];
              pbVar2 = (byte *)((longlong)(puVar83 + 4) + (longlong)puVar84);
              bVar21 = *pbVar2;
              bVar22 = pbVar2[1];
              bVar23 = pbVar2[2];
              bVar24 = pbVar2[3];
              bVar25 = pbVar2[4];
              bVar26 = pbVar2[5];
              bVar27 = pbVar2[6];
              bVar28 = pbVar2[7];
              bVar29 = pbVar2[8];
              bVar30 = pbVar2[9];
              bVar31 = pbVar2[10];
              bVar32 = pbVar2[0xb];
              bVar33 = pbVar2[0xc];
              bVar34 = pbVar2[0xd];
              bVar35 = pbVar2[0xe];
              bVar36 = pbVar2[0xf];
              bVar107 = *pbVar1 + auVar139[0];
              bVar108 = bVar6 + auVar139[1];
              bVar109 = bVar7 + auVar139[2];
              bVar110 = bVar8 + auVar139[3];
              bVar111 = bVar9 + auVar139[4];
              bVar112 = bVar10 + auVar139[5];
              bVar113 = bVar11 + auVar139[6];
              bVar114 = bVar12 + auVar139[7];
              bVar115 = bVar13 + auVar139[8];
              bVar116 = bVar14 + auVar139[9];
              bVar117 = bVar15 + auVar139[10];
              bVar118 = bVar16 + auVar139[0xb];
              bVar119 = bVar17 + auVar139[0xc];
              bVar120 = bVar18 + auVar139[0xd];
              bVar121 = bVar19 + auVar139[0xe];
              bVar122 = bVar20 + auVar139[0xf];
              bVar123 = bVar21 + auVar139[0];
              bVar124 = bVar22 + auVar139[1];
              bVar125 = bVar23 + auVar139[2];
              bVar126 = bVar24 + auVar139[3];
              bVar127 = bVar25 + auVar139[4];
              bVar128 = bVar26 + auVar139[5];
              bVar129 = bVar27 + auVar139[6];
              bVar130 = bVar28 + auVar139[7];
              bVar131 = bVar29 + auVar139[8];
              bVar132 = bVar30 + auVar139[9];
              bVar133 = bVar31 + auVar139[10];
              bVar134 = bVar32 + auVar139[0xb];
              bVar135 = bVar33 + auVar139[0xc];
              bVar136 = bVar34 + auVar139[0xd];
              bVar137 = bVar35 + auVar139[0xe];
              bVar138 = bVar36 + auVar139[0xf];
              pbVar2 = (byte *)((longlong)puVar83 + (longlong)puVar84);
              *pbVar2 = -((byte)((bVar4 < bVar107) * bVar4 | (bVar4 >= bVar107) * bVar107) ==
                         bVar107) & bVar63 ^ *pbVar1;
              pbVar2[1] = -((byte)((bVar56 < bVar108) * bVar56 | (bVar56 >= bVar108) * bVar108) ==
                           bVar108) & bVar64 ^ bVar6;
              pbVar2[2] = -((byte)((bVar57 < bVar109) * bVar57 | (bVar57 >= bVar109) * bVar109) ==
                           bVar109) & bVar65 ^ bVar7;
              pbVar2[3] = -((byte)((bVar58 < bVar110) * bVar58 | (bVar58 >= bVar110) * bVar110) ==
                           bVar110) & bVar66 ^ bVar8;
              pbVar2[4] = -((byte)((bVar59 < bVar111) * bVar59 | (bVar59 >= bVar111) * bVar111) ==
                           bVar111) & bVar67 ^ bVar9;
              pbVar2[5] = -((byte)((bVar60 < bVar112) * bVar60 | (bVar60 >= bVar112) * bVar112) ==
                           bVar112) & bVar68 ^ bVar10;
              pbVar2[6] = -((byte)((bVar61 < bVar113) * bVar61 | (bVar61 >= bVar113) * bVar113) ==
                           bVar113) & bVar69 ^ bVar11;
              pbVar2[7] = -((byte)((bVar62 < bVar114) * bVar62 | (bVar62 >= bVar114) * bVar114) ==
                           bVar114) & bVar70 ^ bVar12;
              pbVar2[8] = -((byte)((bVar99 < bVar115) * bVar99 | (bVar99 >= bVar115) * bVar115) ==
                           bVar115) & bVar71 ^ bVar13;
              pbVar2[9] = -((byte)((bVar100 < bVar116) * bVar100 | (bVar100 >= bVar116) * bVar116)
                           == bVar116) & bVar72 ^ bVar14;
              pbVar2[10] = -((byte)((bVar101 < bVar117) * bVar101 | (bVar101 >= bVar117) * bVar117)
                            == bVar117) & bVar73 ^ bVar15;
              pbVar2[0xb] = -((byte)((bVar102 < bVar118) * bVar102 | (bVar102 >= bVar118) * bVar118)
                             == bVar118) & bVar74 ^ bVar16;
              pbVar2[0xc] = -((byte)((bVar103 < bVar119) * bVar103 | (bVar103 >= bVar119) * bVar119)
                             == bVar119) & bVar75 ^ bVar17;
              pbVar2[0xd] = -((byte)((bVar104 < bVar120) * bVar104 | (bVar104 >= bVar120) * bVar120)
                             == bVar120) & bVar76 ^ bVar18;
              pbVar2[0xe] = -((byte)((bVar105 < bVar121) * bVar105 | (bVar105 >= bVar121) * bVar121)
                             == bVar121) & bVar77 ^ bVar19;
              pbVar2[0xf] = -((byte)((bVar106 < bVar122) * bVar106 | (bVar106 >= bVar122) * bVar122)
                             == bVar122) & bVar78 ^ bVar20;
              pbVar1 = (byte *)((longlong)(puVar83 + 4) + (longlong)puVar84);
              *pbVar1 = -((byte)((bVar4 < bVar123) * bVar4 | (bVar4 >= bVar123) * bVar123) ==
                         bVar123) & bVar63 ^ bVar21;
              pbVar1[1] = -((byte)((bVar56 < bVar124) * bVar56 | (bVar56 >= bVar124) * bVar124) ==
                           bVar124) & bVar64 ^ bVar22;
              pbVar1[2] = -((byte)((bVar57 < bVar125) * bVar57 | (bVar57 >= bVar125) * bVar125) ==
                           bVar125) & bVar65 ^ bVar23;
              pbVar1[3] = -((byte)((bVar58 < bVar126) * bVar58 | (bVar58 >= bVar126) * bVar126) ==
                           bVar126) & bVar66 ^ bVar24;
              pbVar1[4] = -((byte)((bVar59 < bVar127) * bVar59 | (bVar59 >= bVar127) * bVar127) ==
                           bVar127) & bVar67 ^ bVar25;
              pbVar1[5] = -((byte)((bVar60 < bVar128) * bVar60 | (bVar60 >= bVar128) * bVar128) ==
                           bVar128) & bVar68 ^ bVar26;
              pbVar1[6] = -((byte)((bVar61 < bVar129) * bVar61 | (bVar61 >= bVar129) * bVar129) ==
                           bVar129) & bVar69 ^ bVar27;
              pbVar1[7] = -((byte)((bVar62 < bVar130) * bVar62 | (bVar62 >= bVar130) * bVar130) ==
                           bVar130) & bVar70 ^ bVar28;
              pbVar1[8] = -((byte)((bVar99 < bVar131) * bVar99 | (bVar99 >= bVar131) * bVar131) ==
                           bVar131) & bVar71 ^ bVar29;
              pbVar1[9] = -((byte)((bVar100 < bVar132) * bVar100 | (bVar100 >= bVar132) * bVar132)
                           == bVar132) & bVar72 ^ bVar30;
              pbVar1[10] = -((byte)((bVar101 < bVar133) * bVar101 | (bVar101 >= bVar133) * bVar133)
                            == bVar133) & bVar73 ^ bVar31;
              pbVar1[0xb] = -((byte)((bVar102 < bVar134) * bVar102 | (bVar102 >= bVar134) * bVar134)
                             == bVar134) & bVar74 ^ bVar32;
              pbVar1[0xc] = -((byte)((bVar103 < bVar135) * bVar103 | (bVar103 >= bVar135) * bVar135)
                             == bVar135) & bVar75 ^ bVar33;
              pbVar1[0xd] = -((byte)((bVar104 < bVar136) * bVar104 | (bVar104 >= bVar136) * bVar136)
                             == bVar136) & bVar76 ^ bVar34;
              pbVar1[0xe] = -((byte)((bVar105 < bVar137) * bVar105 | (bVar105 >= bVar137) * bVar137)
                             == bVar137) & bVar77 ^ bVar35;
              pbVar1[0xf] = -((byte)((bVar106 < bVar138) * bVar106 | (bVar106 >= bVar138) * bVar138)
                             == bVar138) & bVar78 ^ bVar36;
              puVar84 = puVar84 + 0x20;
            } while (puVar85 != puVar84);
            if (puVar91 != puVar85) {
              puVar84 = puVar85;
              if (((ulonglong)puVar91 & 0x18) != 0) goto LAB_005e497e;
              goto LAB_005e4dcc;
            }
          }
          else {
            puVar85 = (undefined1 *)0x0;
LAB_005e4dcc:
            do {
              bVar4 = *(byte *)((longlong)puVar83 + (longlong)puVar85);
              uVar89 = (ulonglong)bVar4;
              *(byte *)((longlong)puVar83 + (longlong)puVar85) =
                   ((byte)(bVar4 + 0x9f) < 0x1a) << 5 ^ bVar4;
              puVar85 = puVar85 + 1;
LAB_005e4de6:
            } while (puVar91 != puVar85);
          }
          iVar93 = (int)local_110;
          if (puVar91 != (undefined1 *)0x2) {
LAB_005e4e15:
            local_d0._0_8_ = local_e8;
            local_d0._8_8_ = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
            local_e8._0_8_ = puVar83;
            local_e8._8_8_ = puVar91;
            (*(code *)PTR_format_inner_00799048)(uVar89,local_d0);
            param_1[3] = local_38;
            param_1[1] = local_48;
            param_1[2] = uStack_40;
            *param_1 = 0xfffffffffffffffe;
            local_78 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
            auVar140._8_8_ = local_e8._8_8_;
            auVar140._0_8_ = local_e8._0_8_;
            goto joined_r0x005e4cbd;
          }
          if ((ushort)*puVar83 == 0x4b31) {
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            param_3 = (undefined2 *)(*(code *)PTR___rust_alloc_00799000)();
            if (param_3 == (undefined2 *)0x0) {
LAB_005e4f44:
              (*(code *)PTR_handle_error_00798ff0)();
              goto LAB_005e4f54;
            }
            *param_3 = 0x4b31;
            uVar98 = extraout_XMM0_Qa_05;
          }
          else if ((ushort)*puVar83 == 0x4b32) {
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            param_3 = (undefined2 *)(*(code *)PTR___rust_alloc_00799000)();
            if (param_3 == (undefined2 *)0x0) goto LAB_005e4f44;
            *param_3 = 0x4b32;
            uVar98 = extraout_XMM0_Qa_06;
          }
          else {
            if ((ushort)*puVar83 != 0x4b34) goto LAB_005e4e15;
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            param_3 = (undefined2 *)(*(code *)PTR___rust_alloc_00799000)();
            if (param_3 == (undefined2 *)0x0) goto LAB_005e4f44;
            *param_3 = 0x4b34;
            uVar98 = extraout_XMM0_Qa_07;
          }
          if (iVar93 != -1) {
            uVar98 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar98,1);
          }
          local_110 = 2;
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar98,1);
LAB_005e4d65:
          *param_1 = local_100;
          param_1[1] = local_f8;
          param_1[2] = unaff_R14;
          param_1[3] = local_110;
          param_1[4] = param_3;
          param_1[5] = 2;
          return;
        }
      }
    }
  }
LAB_005e474a:
  (*(code *)PTR_handle_error_00798ff0)();
LAB_005e4f54:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}


