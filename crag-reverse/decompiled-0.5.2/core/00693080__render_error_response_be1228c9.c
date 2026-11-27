// 00693080 render_error_response

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* craggemini_core[66f3c71560d70857]::multiprotocol::render_error_response */

undefined8 * __rustcall
craggemini_core[66f3c71560d70857]::multiprotocol::render_error_response
          (undefined8 *param_1,undefined4 *param_2,longlong param_3)

{
  byte *pbVar1;
  char *pcVar2;
  code *pcVar3;
  byte bVar4;
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
  byte bVar41;
  byte bVar42;
  byte bVar43;
  char cVar44;
  byte *pbVar45;
  uint uVar46;
  ulonglong uVar47;
  byte *pbVar48;
  ulonglong uVar49;
  byte bVar50;
  undefined2 uVar51;
  uint uVar52;
  ulonglong uVar53;
  bool bVar54;
  undefined8 uVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar69 [16];
  undefined1 auVar68 [16];
  undefined1 auVar67 [16];
  undefined1 auVar66 [16];
  undefined1 auVar65 [16];
  undefined1 auVar64 [16];
  undefined1 auVar63 [16];
  undefined1 auVar62 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar79 [16];
  undefined1 auVar78 [16];
  undefined1 auVar77 [16];
  undefined1 auVar76 [16];
  undefined1 auVar75 [16];
  undefined1 auVar74 [16];
  undefined1 auVar73 [16];
  undefined1 auVar72 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar90 [16];
  undefined1 auVar89 [16];
  undefined1 auVar88 [16];
  undefined1 auVar87 [16];
  undefined1 auVar86 [16];
  undefined1 auVar85 [16];
  undefined1 auVar84 [16];
  undefined1 auVar83 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar100 [16];
  undefined1 auVar99 [16];
  undefined1 auVar98 [16];
  undefined1 auVar97 [16];
  undefined1 auVar96 [16];
  undefined1 auVar95 [16];
  undefined1 auVar94 [16];
  undefined1 auVar93 [16];
  byte bVar101;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 local_1e1;
  longlong local_1e0 [2];
  undefined8 local_1d0;
  char local_1c0;
  undefined8 *local_1b8;
  undefined **ppuStack_1b0;
  char *local_1a8;
  undefined1 auStack_1a0 [16];
  ulonglong local_190;
  undefined2 local_188;
  undefined1 local_180 [40];
  longlong local_158;
  undefined **local_150;
  char *pcStack_148;
  undefined1 local_140 [16];
  undefined1 local_130;
  uint7 uStack_12f;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [32];
  undefined1 local_88;
  undefined1 local_80 [32];
  undefined1 local_60;
  undefined1 local_58 [32];
  undefined1 local_38;
  
  uVar51 = 500;
  if ((*(int *)(param_3 + 0x38) - 100U & 0xffff) < 900) {
    uVar51 = (short)*(int *)(param_3 + 0x38);
  }
  format_protocol_error_body(local_180,*param_2);
  local_1b8 = (undefined8 *)
              anon_1b4a85c95499e1b671cf4fa96a1b6d0f_639_llvm_10049508496007902178._0_8_;
  ppuStack_1b0 = (undefined **)
                 anon_1b4a85c95499e1b671cf4fa96a1b6d0f_639_llvm_10049508496007902178._8_8_;
  local_1a8 = (char *)anon_1b4a85c95499e1b671cf4fa96a1b6d0f_639_llvm_10049508496007902178._16_8_;
  auStack_1a0._8_8_ = &anon_1b4a85c95499e1b671cf4fa96a1b6d0f_640_llvm_10049508496007902178;
  auStack_1a0._0_8_ = anon_1b4a85c95499e1b671cf4fa96a1b6d0f_639_llvm_10049508496007902178._24_8_;
  local_190 = 8;
  local_188 = uVar51;
  <(http[56314f485c23ccf6]::status::StatusCode,[(http[56314f485c23ccf6]::header::name::HeaderName,&str);1:usize],axum[743f01f147681d98]::json::Json<serde_json[dc3825464c436029]::value::Value>)as_axum_core[61c49771464cda0a]::response::into_response::IntoResponse>
  ::into_response(&local_128,&local_1b8);
  pcVar2 = *(char **)(param_3 + 0x30);
  if (pcVar2 != (char *)0x0) {
    if (*pcVar2 == '\0') {
      if (*(longlong *)(pcVar2 + 0x70) != -1) {
        pbVar48 = *(byte **)(pcVar2 + 0x78);
        pbVar45 = pbVar48 + *(longlong *)(pcVar2 + 0x80);
        do {
          if (pbVar48 == pbVar45) {
            auVar56 = ::<str>::trim_matches::<<char>::is_whitespace>();
            uVar47 = auVar56._8_8_;
            pbVar45 = auVar56._0_8_;
            if (uVar47 == 0) goto LAB_00693f8b;
            if (uVar47 < 8) {
              bVar54 = false;
              pbVar48 = pbVar45;
              goto LAB_00693f42;
            }
            if (uVar47 < 0x20) {
              uVar49 = 0;
              bVar54 = false;
              goto LAB_00693eb9;
            }
            uVar49 = uVar47 & 0xffffffffffffffe0;
            auVar56 = (undefined1  [16])0x0;
            uVar53 = 0;
            auVar82 = (undefined1  [16])0x0;
            do {
              pbVar48 = pbVar45 + uVar53;
              bVar12 = *pbVar48;
              bVar13 = pbVar48[1];
              bVar14 = pbVar48[2];
              bVar15 = pbVar48[3];
              bVar16 = pbVar48[4];
              bVar17 = pbVar48[5];
              bVar18 = pbVar48[6];
              bVar19 = pbVar48[7];
              bVar20 = pbVar48[8];
              bVar21 = pbVar48[9];
              bVar22 = pbVar48[10];
              bVar23 = pbVar48[0xb];
              bVar24 = pbVar48[0xc];
              bVar25 = pbVar48[0xd];
              bVar26 = pbVar48[0xe];
              bVar27 = pbVar48[0xf];
              pbVar48 = pbVar45 + uVar53 + 0x10;
              bVar28 = *pbVar48;
              bVar29 = pbVar48[1];
              bVar30 = pbVar48[2];
              bVar31 = pbVar48[3];
              bVar32 = pbVar48[4];
              bVar33 = pbVar48[5];
              bVar34 = pbVar48[6];
              bVar35 = pbVar48[7];
              bVar36 = pbVar48[8];
              bVar37 = pbVar48[9];
              bVar38 = pbVar48[10];
              bVar39 = pbVar48[0xb];
              bVar40 = pbVar48[0xc];
              bVar41 = pbVar48[0xd];
              bVar42 = pbVar48[0xe];
              bVar43 = pbVar48[0xf];
              bVar50 = DAT_00184700;
              bVar4 = DAT_00184700._1_1_;
              bVar5 = DAT_00184700._2_1_;
              bVar6 = DAT_00184700._3_1_;
              bVar7 = DAT_00184700._4_1_;
              bVar8 = DAT_00184700._5_1_;
              bVar9 = DAT_00184700._6_1_;
              bVar10 = DAT_00184700._7_1_;
              bVar11 = DAT_00184700._8_1_;
              bVar101 = DAT_00184700._9_1_;
              bVar110 = DAT_00184700._10_1_;
              bVar111 = DAT_00184700._11_1_;
              bVar112 = DAT_00184700._12_1_;
              bVar113 = DAT_00184700._13_1_;
              bVar114 = DAT_00184700._14_1_;
              bVar115 = DAT_00184700._15_1_;
              auVar125[0] = -((byte)((bVar50 < bVar12) * bVar50 | (bVar50 >= bVar12) * bVar12) ==
                             bVar12);
              auVar125[1] = -((byte)((bVar4 < bVar13) * bVar4 | (bVar4 >= bVar13) * bVar13) ==
                             bVar13);
              auVar125[2] = -((byte)((bVar5 < bVar14) * bVar5 | (bVar5 >= bVar14) * bVar14) ==
                             bVar14);
              auVar125[3] = -((byte)((bVar6 < bVar15) * bVar6 | (bVar6 >= bVar15) * bVar15) ==
                             bVar15);
              auVar125[4] = -((byte)((bVar7 < bVar16) * bVar7 | (bVar7 >= bVar16) * bVar16) ==
                             bVar16);
              auVar125[5] = -((byte)((bVar8 < bVar17) * bVar8 | (bVar8 >= bVar17) * bVar17) ==
                             bVar17);
              auVar125[6] = -((byte)((bVar9 < bVar18) * bVar9 | (bVar9 >= bVar18) * bVar18) ==
                             bVar18);
              auVar125[7] = -((byte)((bVar10 < bVar19) * bVar10 | (bVar10 >= bVar19) * bVar19) ==
                             bVar19);
              auVar125[8] = -((byte)((bVar11 < bVar20) * bVar11 | (bVar11 >= bVar20) * bVar20) ==
                             bVar20);
              auVar125[9] = -((byte)((bVar101 < bVar21) * bVar101 | (bVar101 >= bVar21) * bVar21) ==
                             bVar21);
              auVar125[10] = -((byte)((bVar110 < bVar22) * bVar110 | (bVar110 >= bVar22) * bVar22)
                              == bVar22);
              auVar125[0xb] =
                   -((byte)((bVar111 < bVar23) * bVar111 | (bVar111 >= bVar23) * bVar23) == bVar23);
              auVar125[0xc] =
                   -((byte)((bVar112 < bVar24) * bVar112 | (bVar112 >= bVar24) * bVar24) == bVar24);
              auVar125[0xd] =
                   -((byte)((bVar113 < bVar25) * bVar113 | (bVar113 >= bVar25) * bVar25) == bVar25);
              auVar125[0xe] =
                   -((byte)((bVar114 < bVar26) * bVar114 | (bVar114 >= bVar26) * bVar26) == bVar26);
              auVar125[0xf] =
                   -((byte)((bVar115 < bVar27) * bVar115 | (bVar115 >= bVar27) * bVar27) == bVar27);
              auVar131[0] = -((byte)((bVar50 < bVar28) * bVar50 | (bVar50 >= bVar28) * bVar28) ==
                             bVar28);
              auVar131[1] = -((byte)((bVar4 < bVar29) * bVar4 | (bVar4 >= bVar29) * bVar29) ==
                             bVar29);
              auVar131[2] = -((byte)((bVar5 < bVar30) * bVar5 | (bVar5 >= bVar30) * bVar30) ==
                             bVar30);
              auVar131[3] = -((byte)((bVar6 < bVar31) * bVar6 | (bVar6 >= bVar31) * bVar31) ==
                             bVar31);
              auVar131[4] = -((byte)((bVar7 < bVar32) * bVar7 | (bVar7 >= bVar32) * bVar32) ==
                             bVar32);
              auVar131[5] = -((byte)((bVar8 < bVar33) * bVar8 | (bVar8 >= bVar33) * bVar33) ==
                             bVar33);
              auVar131[6] = -((byte)((bVar9 < bVar34) * bVar9 | (bVar9 >= bVar34) * bVar34) ==
                             bVar34);
              auVar131[7] = -((byte)((bVar10 < bVar35) * bVar10 | (bVar10 >= bVar35) * bVar35) ==
                             bVar35);
              auVar131[8] = -((byte)((bVar11 < bVar36) * bVar11 | (bVar11 >= bVar36) * bVar36) ==
                             bVar36);
              auVar131[9] = -((byte)((bVar101 < bVar37) * bVar101 | (bVar101 >= bVar37) * bVar37) ==
                             bVar37);
              auVar131[10] = -((byte)((bVar110 < bVar38) * bVar110 | (bVar110 >= bVar38) * bVar38)
                              == bVar38);
              auVar131[0xb] =
                   -((byte)((bVar111 < bVar39) * bVar111 | (bVar111 >= bVar39) * bVar39) == bVar39);
              auVar131[0xc] =
                   -((byte)((bVar112 < bVar40) * bVar112 | (bVar112 >= bVar40) * bVar40) == bVar40);
              auVar131[0xd] =
                   -((byte)((bVar113 < bVar41) * bVar113 | (bVar113 >= bVar41) * bVar41) == bVar41);
              auVar131[0xe] =
                   -((byte)((bVar114 < bVar42) * bVar114 | (bVar114 >= bVar42) * bVar42) == bVar42);
              auVar131[0xf] =
                   -((byte)((bVar115 < bVar43) * bVar115 | (bVar115 >= bVar43) * bVar43) == bVar43);
              auVar135[0] = -(bVar12 == DAT_00182620);
              auVar135[1] = -(bVar13 == DAT_00182620._1_1_);
              auVar135[2] = -(bVar14 == DAT_00182620._2_1_);
              auVar135[3] = -(bVar15 == DAT_00182620._3_1_);
              auVar135[4] = -(bVar16 == DAT_00182620._4_1_);
              auVar135[5] = -(bVar17 == DAT_00182620._5_1_);
              auVar135[6] = -(bVar18 == DAT_00182620._6_1_);
              auVar135[7] = -(bVar19 == DAT_00182620._7_1_);
              auVar135[8] = -(bVar20 == DAT_00182620._8_1_);
              auVar135[9] = -(bVar21 == DAT_00182620._9_1_);
              auVar135[10] = -(bVar22 == DAT_00182620._10_1_);
              auVar135[0xb] = -(bVar23 == DAT_00182620._11_1_);
              auVar135[0xc] = -(bVar24 == DAT_00182620._12_1_);
              auVar135[0xd] = -(bVar25 == DAT_00182620._13_1_);
              auVar135[0xe] = -(bVar26 == DAT_00182620._14_1_);
              auVar135[0xf] = -(bVar27 == DAT_00182620._15_1_);
              auVar126[0] = -(bVar28 == DAT_00182620);
              auVar126[1] = -(bVar29 == DAT_00182620._1_1_);
              auVar126[2] = -(bVar30 == DAT_00182620._2_1_);
              auVar126[3] = -(bVar31 == DAT_00182620._3_1_);
              auVar126[4] = -(bVar32 == DAT_00182620._4_1_);
              auVar126[5] = -(bVar33 == DAT_00182620._5_1_);
              auVar126[6] = -(bVar34 == DAT_00182620._6_1_);
              auVar126[7] = -(bVar35 == DAT_00182620._7_1_);
              auVar126[8] = -(bVar36 == DAT_00182620._8_1_);
              auVar126[9] = -(bVar37 == DAT_00182620._9_1_);
              auVar126[10] = -(bVar38 == DAT_00182620._10_1_);
              auVar126[0xb] = -(bVar39 == DAT_00182620._11_1_);
              auVar126[0xc] = -(bVar40 == DAT_00182620._12_1_);
              auVar126[0xd] = -(bVar41 == DAT_00182620._13_1_);
              auVar126[0xe] = -(bVar42 == DAT_00182620._14_1_);
              auVar126[0xf] = -(bVar43 == DAT_00182620._15_1_);
              auVar92[0] = -(bVar12 == DAT_00183900);
              auVar92[1] = -(bVar13 == UNK_00183901);
              auVar92[2] = -(bVar14 == UNK_00183902);
              auVar92[3] = -(bVar15 == UNK_00183903);
              auVar92[4] = -(bVar16 == UNK_00183904);
              auVar92[5] = -(bVar17 == UNK_00183905);
              auVar92[6] = -(bVar18 == UNK_00183906);
              auVar92[7] = -(bVar19 == UNK_00183907);
              auVar92[8] = -(bVar20 == UNK_00183908);
              auVar92[9] = -(bVar21 == UNK_00183909);
              auVar92[10] = -(bVar22 == UNK_0018390a);
              auVar92[0xb] = -(bVar23 == UNK_0018390b);
              auVar92[0xc] = -(bVar24 == UNK_0018390c);
              auVar92[0xd] = -(bVar25 == UNK_0018390d);
              auVar92[0xe] = -(bVar26 == UNK_0018390e);
              auVar92[0xf] = -(bVar27 == UNK_0018390f);
              auVar82 = auVar82 | ~auVar92 & (auVar135 | auVar125);
              auVar108[0] = -(bVar28 == DAT_00183900);
              auVar108[1] = -(bVar29 == UNK_00183901);
              auVar108[2] = -(bVar30 == UNK_00183902);
              auVar108[3] = -(bVar31 == UNK_00183903);
              auVar108[4] = -(bVar32 == UNK_00183904);
              auVar108[5] = -(bVar33 == UNK_00183905);
              auVar108[6] = -(bVar34 == UNK_00183906);
              auVar108[7] = -(bVar35 == UNK_00183907);
              auVar108[8] = -(bVar36 == UNK_00183908);
              auVar108[9] = -(bVar37 == UNK_00183909);
              auVar108[10] = -(bVar38 == UNK_0018390a);
              auVar108[0xb] = -(bVar39 == UNK_0018390b);
              auVar108[0xc] = -(bVar40 == UNK_0018390c);
              auVar108[0xd] = -(bVar41 == UNK_0018390d);
              auVar108[0xe] = -(bVar42 == UNK_0018390e);
              auVar108[0xf] = -(bVar43 == UNK_0018390f);
              auVar56 = auVar56 | ~auVar108 & (auVar126 | auVar131);
              uVar53 = uVar53 + 0x20;
            } while (uVar49 != uVar53);
            auVar56 = psllw(auVar56 | auVar82,7);
            bVar54 = (((((((((((((((SUB161(auVar56 >> 7,0) & 1) != 0 ||
                                  (SUB161(auVar56 >> 0xf,0) & 1) != 0) ||
                                 (SUB161(auVar56 >> 0x17,0) & 1) != 0) ||
                                (SUB161(auVar56 >> 0x1f,0) & 1) != 0) ||
                               (SUB161(auVar56 >> 0x27,0) & 1) != 0) ||
                              (SUB161(auVar56 >> 0x2f,0) & 1) != 0) ||
                             (SUB161(auVar56 >> 0x37,0) & 1) != 0) ||
                            (SUB161(auVar56 >> 0x3f,0) & 1) != 0) ||
                           (SUB161(auVar56 >> 0x47,0) & 1) != 0) ||
                          (SUB161(auVar56 >> 0x4f,0) & 1) != 0) ||
                         (SUB161(auVar56 >> 0x57,0) & 1) != 0) ||
                        (SUB161(auVar56 >> 0x5f,0) & 1) != 0) ||
                       (SUB161(auVar56 >> 0x67,0) & 1) != 0) || (SUB161(auVar56 >> 0x6f,0) & 1) != 0
                      ) || (SUB161(auVar56 >> 0x77,0) & 1) != 0) || auVar56[0xf] < '\0';
            if (uVar47 != uVar49) {
              if ((uVar47 & 0x18) == 0) {
                pbVar48 = pbVar45 + uVar49;
              }
              else {
LAB_00693eb9:
                uVar53 = uVar47 & 0xfffffffffffffff8;
                pbVar48 = pbVar45 + uVar53;
                auVar56 = ZEXT116(bVar54);
                auVar82._8_4_ = 0xffffffff;
                auVar82._0_8_ = 0xffffffffffffffff;
                auVar82._12_4_ = 0xffffffff;
                do {
                  uVar55 = *(undefined8 *)(pbVar45 + uVar49);
                  bVar50 = s__001846a0[0];
                  bVar101 = (byte)uVar55;
                  bVar4 = s__001846a0[1];
                  bVar110 = (byte)((ulonglong)uVar55 >> 8);
                  bVar5 = s__001846a0[2];
                  bVar111 = (byte)((ulonglong)uVar55 >> 0x10);
                  bVar6 = s__001846a0[3];
                  bVar112 = (byte)((ulonglong)uVar55 >> 0x18);
                  bVar7 = s__001846a0[4];
                  bVar113 = (byte)((ulonglong)uVar55 >> 0x20);
                  bVar8 = s__001846a0[5];
                  bVar114 = (byte)((ulonglong)uVar55 >> 0x28);
                  bVar9 = s__001846a0[6];
                  bVar115 = (byte)((ulonglong)uVar55 >> 0x30);
                  bVar11 = (byte)((ulonglong)uVar55 >> 0x38);
                  bVar10 = s__001846a0[7];
                  auVar109[0] = -((byte)((bVar101 < bVar50) * bVar50 | (bVar101 >= bVar50) * bVar101
                                        ) == bVar101);
                  auVar109[1] = -((byte)((bVar110 < bVar4) * bVar4 | (bVar110 >= bVar4) * bVar110)
                                 == bVar110);
                  auVar109[2] = -((byte)((bVar111 < bVar5) * bVar5 | (bVar111 >= bVar5) * bVar111)
                                 == bVar111);
                  auVar109[3] = -((byte)((bVar112 < bVar6) * bVar6 | (bVar112 >= bVar6) * bVar112)
                                 == bVar112);
                  auVar109[4] = -((byte)((bVar113 < bVar7) * bVar7 | (bVar113 >= bVar7) * bVar113)
                                 == bVar113);
                  auVar109[5] = -((byte)((bVar114 < bVar8) * bVar8 | (bVar114 >= bVar8) * bVar114)
                                 == bVar114);
                  auVar109[6] = -((byte)((bVar115 < bVar9) * bVar9 | (bVar115 >= bVar9) * bVar115)
                                 == bVar115);
                  auVar109[7] = -((byte)((bVar11 < bVar10) * bVar10 | (bVar11 >= bVar10) * bVar11)
                                 == bVar11);
                  auVar109[8] = -((char)((s__001846a0[8] != '\0') * s__001846a0[8]) == '\0');
                  auVar109[9] = -((char)((s__001846a0[9] != '\0') * s__001846a0[9]) == '\0');
                  auVar109[10] = -((char)((s__001846a0[10] != '\0') * s__001846a0[10]) == '\0');
                  auVar109[0xb] = -((char)((s__001846a0[0xb] != '\0') * s__001846a0[0xb]) == '\0');
                  auVar109[0xc] = -((char)((s__001846a0[0xc] != '\0') * s__001846a0[0xc]) == '\0');
                  auVar109[0xd] = -((char)((s__001846a0[0xd] != '\0') * s__001846a0[0xd]) == '\0');
                  auVar109[0xe] = -((char)((s__001846a0[0xe] != '\0') * s__001846a0[0xe]) == '\0');
                  auVar109[0xf] = -((char)((s__001846a0[0xf] != '\0') * s__001846a0[0xf]) == '\0');
                  auVar127[0] = -(bVar101 == DAT_00182630);
                  auVar127[1] = -(bVar110 == DAT_00182630._1_1_);
                  auVar127[2] = -(bVar111 == DAT_00182630._2_1_);
                  auVar127[3] = -(bVar112 == DAT_00182630._3_1_);
                  auVar127[4] = -(bVar113 == DAT_00182630._4_1_);
                  auVar127[5] = -(bVar114 == DAT_00182630._5_1_);
                  auVar127[6] = -(bVar115 == DAT_00182630._6_1_);
                  auVar127[7] = -(bVar11 == DAT_00182630._7_1_);
                  auVar127[8] = -(DAT_00182630._8_1_ == '\0');
                  auVar127[9] = -(DAT_00182630._9_1_ == '\0');
                  auVar127[10] = -(DAT_00182630._10_1_ == '\0');
                  auVar127[0xb] = -(DAT_00182630._11_1_ == '\0');
                  auVar127[0xc] = -(DAT_00182630._12_1_ == '\0');
                  auVar127[0xd] = -(DAT_00182630._13_1_ == '\0');
                  auVar127[0xe] = -(DAT_00182630._14_1_ == '\0');
                  auVar127[0xf] = -(DAT_00182630._15_1_ == '\0');
                  auVar91[0] = -(bVar101 == s__00184760[0]);
                  auVar91[1] = -(bVar110 == s__00184760[1]);
                  auVar91[2] = -(bVar111 == s__00184760[2]);
                  auVar91[3] = -(bVar112 == s__00184760[3]);
                  auVar91[4] = -(bVar113 == s__00184760[4]);
                  auVar91[5] = -(bVar114 == s__00184760[5]);
                  auVar91[6] = -(bVar115 == s__00184760[6]);
                  auVar91[7] = -(bVar11 == s__00184760[7]);
                  auVar91[8] = -(s__00184760[8] == '\0');
                  auVar91[9] = -(UNK_00184769 == '\0');
                  auVar91[10] = -(UNK_0018476a == '\0');
                  auVar91[0xb] = -(UNK_0018476b == '\0');
                  auVar91[0xc] = -(UNK_0018476c == '\0');
                  auVar91[0xd] = -(UNK_0018476d == '\0');
                  auVar91[0xe] = -(UNK_0018476e == '\0');
                  auVar91[0xf] = -(UNK_0018476f == '\0');
                  auVar92 = ~auVar91 & (auVar127 | auVar109 ^ auVar82);
                  auVar100._0_14_ = auVar92._0_14_;
                  auVar100[0xe] = auVar92[7];
                  auVar100[0xf] = auVar92[7];
                  auVar99._14_2_ = auVar100._14_2_;
                  auVar99._0_13_ = auVar92._0_13_;
                  auVar99[0xd] = auVar92[6];
                  auVar98._13_3_ = auVar99._13_3_;
                  auVar98._0_12_ = auVar92._0_12_;
                  auVar98[0xc] = auVar92[6];
                  auVar97._12_4_ = auVar98._12_4_;
                  auVar97._0_11_ = auVar92._0_11_;
                  auVar97[0xb] = auVar92[5];
                  auVar96._11_5_ = auVar97._11_5_;
                  auVar96._0_10_ = auVar92._0_10_;
                  auVar96[10] = auVar92[5];
                  auVar95._10_6_ = auVar96._10_6_;
                  auVar95._0_9_ = auVar92._0_9_;
                  auVar95[9] = auVar92[4];
                  auVar94._9_7_ = auVar95._9_7_;
                  auVar94._0_8_ = auVar92._0_8_;
                  auVar94[8] = auVar92[4];
                  auVar93._8_8_ = auVar94._8_8_;
                  auVar93[7] = auVar92[3];
                  auVar93[6] = auVar92[3];
                  auVar93[5] = auVar92[2];
                  auVar93[4] = auVar92[2];
                  auVar93[3] = auVar92[1];
                  auVar93[2] = auVar92[1];
                  auVar93[0] = auVar92[0];
                  auVar93[1] = auVar93[0];
                  auVar56 = auVar56 | auVar93;
                  uVar49 = uVar49 + 8;
                } while (uVar53 != uVar49);
                auVar56 = psllw(auVar56,7);
                bVar54 = (((((((SUB161(auVar56 >> 7,0) & 1) != 0 ||
                              (SUB161(auVar56 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar56 >> 0x27,0) & 1) != 0) ||
                            (SUB161(auVar56 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar56 >> 0x47,0) & 1) != 0) ||
                          (SUB161(auVar56 >> 0x57,0) & 1) != 0) ||
                         (SUB161(auVar56 >> 0x67,0) & 1) != 0) ||
                         (SUB161(auVar56 >> 0x77,0) & 1) != 0;
                if (uVar47 == uVar53) goto LAB_00693f78;
              }
LAB_00693f42:
              do {
                bVar50 = *pbVar48;
                pbVar48 = pbVar48 + 1;
                bVar54 = (bool)(bVar54 | (bVar50 != 9 && (bVar50 == 0x7f || bVar50 < 0x20)));
              } while (pbVar48 != pbVar45 + uVar47);
            }
LAB_00693f78:
            if (bVar54) {
              local_60 = 2;
              break;
            }
LAB_00693f8b:
            (*(code *)PTR_copy_from_slice_0079a118)();
            local_60 = 0;
            uVar55 = <http[56314f485c23ccf6]::header::map::HeaderMap>::try_insert2::
                     <http[56314f485c23ccf6]::header::name::HeaderName>
                               (&local_1b8,&local_128,&DAT_0018ce00,local_80);
            if (auStack_1a0[8] != -1) {
              if (auStack_1a0[8] != '\x02') {
                (*(code *)local_1b8[4])(uVar55,local_1a8);
              }
              break;
            }
            goto LAB_00694036;
          }
          bVar50 = *pbVar48;
          uVar52 = (uint)bVar50;
          uVar46 = (uint)bVar50;
          if (-1 < (char)bVar50) {
            pbVar48 = pbVar48 + 1;
            if (uVar46 != 10) goto LAB_00693260;
            break;
          }
          pbVar1 = pbVar48 + 1;
          if (bVar50 < 0xe0) {
            pbVar48 = pbVar48 + 2;
            uVar52 = (uVar46 & 0x1f) << 6 | *pbVar1 & 0x3f;
          }
          else {
            uVar52 = pbVar48[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
            if (bVar50 < 0xf0) {
              pbVar48 = pbVar48 + 3;
              uVar52 = uVar52 | (uVar46 & 0x1f) << 0xc;
            }
            else {
              pbVar1 = pbVar48 + 3;
              pbVar48 = pbVar48 + 4;
              uVar52 = *pbVar1 & 0x3f | uVar52 << 6 | (uVar46 & 7) << 0x12;
            }
          }
          if (uVar52 == 10) break;
LAB_00693260:
        } while (uVar52 != 0xd);
      }
    }
    else {
      uVar47 = 0x14;
      uVar55 = (*(code *)PTR__fmt_00799d88)();
      if ((longlong)uVar47 < 0) {
LAB_0069317e:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_00694082;
      }
      if (uVar47 == 0) {
LAB_006934a4:
        (*(code *)PTR_copy_from_slice_0079a118)(uVar55,uVar47);
        local_88 = 0;
        uVar55 = <http[56314f485c23ccf6]::header::map::HeaderMap>::try_insert2::
                 <http[56314f485c23ccf6]::header::name::HeaderName>
                           (&local_1b8,&local_128,&DAT_0018ce00,local_a8);
        if (auStack_1a0[8] == -1) {
          (*(code *)PTR_unwrap_failed_00799028)
                    (anon_d3057478e380898db632effa827bd31f_348_llvm_2674179329317868992,&local_1e1,
                     &anon_d3057478e380898db632effa827bd31f_16_llvm_2674179329317868992);
          goto LAB_00694082;
        }
        if (auStack_1a0[8] != '\x02') {
          uVar55 = (*(code *)local_1b8[4])(uVar55,local_1a8);
        }
        if (uVar47 == 0) goto LAB_0069351f;
      }
      else {
        local_158 = param_3;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pbVar45 = (byte *)(*(code *)PTR___rust_alloc_00799000)();
        if (pbVar45 == (byte *)0x0) goto LAB_0069317e;
        uVar55 = (*(code *)PTR_memcpy_00799008)();
        if (uVar47 < 8) {
          bVar54 = false;
          pbVar48 = pbVar45;
LAB_00693454:
          do {
            bVar50 = *pbVar48;
            pbVar48 = pbVar48 + 1;
            bVar54 = (bool)(bVar54 | (bVar50 != 9 && (bVar50 == 0x7f || bVar50 < 0x20)));
          } while (pbVar48 != pbVar45 + uVar47);
        }
        else if (uVar47 < 0x20) {
          uVar49 = 0;
          bVar54 = false;
LAB_006933cd:
          uVar53 = uVar47 & 0x7ffffffffffffff8;
          pbVar48 = pbVar45 + uVar53;
          auVar56 = ZEXT116(bVar54);
          auVar57._8_4_ = 0xffffffff;
          auVar57._0_8_ = 0xffffffffffffffff;
          auVar57._12_4_ = 0xffffffff;
          do {
            uVar55 = *(undefined8 *)(pbVar45 + uVar49);
            bVar50 = s__001846a0[0];
            bVar101 = (byte)uVar55;
            bVar4 = s__001846a0[1];
            bVar110 = (byte)((ulonglong)uVar55 >> 8);
            bVar5 = s__001846a0[2];
            bVar111 = (byte)((ulonglong)uVar55 >> 0x10);
            bVar6 = s__001846a0[3];
            bVar112 = (byte)((ulonglong)uVar55 >> 0x18);
            bVar7 = s__001846a0[4];
            bVar113 = (byte)((ulonglong)uVar55 >> 0x20);
            bVar8 = s__001846a0[5];
            bVar114 = (byte)((ulonglong)uVar55 >> 0x28);
            bVar9 = s__001846a0[6];
            bVar115 = (byte)((ulonglong)uVar55 >> 0x30);
            bVar11 = (byte)((ulonglong)uVar55 >> 0x38);
            bVar10 = s__001846a0[7];
            auVar103[0] = -((byte)((bVar101 < bVar50) * bVar50 | (bVar101 >= bVar50) * bVar101) ==
                           bVar101);
            auVar103[1] = -((byte)((bVar110 < bVar4) * bVar4 | (bVar110 >= bVar4) * bVar110) ==
                           bVar110);
            auVar103[2] = -((byte)((bVar111 < bVar5) * bVar5 | (bVar111 >= bVar5) * bVar111) ==
                           bVar111);
            auVar103[3] = -((byte)((bVar112 < bVar6) * bVar6 | (bVar112 >= bVar6) * bVar112) ==
                           bVar112);
            auVar103[4] = -((byte)((bVar113 < bVar7) * bVar7 | (bVar113 >= bVar7) * bVar113) ==
                           bVar113);
            auVar103[5] = -((byte)((bVar114 < bVar8) * bVar8 | (bVar114 >= bVar8) * bVar114) ==
                           bVar114);
            auVar103[6] = -((byte)((bVar115 < bVar9) * bVar9 | (bVar115 >= bVar9) * bVar115) ==
                           bVar115);
            auVar103[7] = -((byte)((bVar11 < bVar10) * bVar10 | (bVar11 >= bVar10) * bVar11) ==
                           bVar11);
            auVar103[8] = -((char)((s__001846a0[8] != '\0') * s__001846a0[8]) == '\0');
            auVar103[9] = -((char)((s__001846a0[9] != '\0') * s__001846a0[9]) == '\0');
            auVar103[10] = -((char)((s__001846a0[10] != '\0') * s__001846a0[10]) == '\0');
            auVar103[0xb] = -((char)((s__001846a0[0xb] != '\0') * s__001846a0[0xb]) == '\0');
            auVar103[0xc] = -((char)((s__001846a0[0xc] != '\0') * s__001846a0[0xc]) == '\0');
            auVar103[0xd] = -((char)((s__001846a0[0xd] != '\0') * s__001846a0[0xd]) == '\0');
            auVar103[0xe] = -((char)((s__001846a0[0xe] != '\0') * s__001846a0[0xe]) == '\0');
            auVar103[0xf] = -((char)((s__001846a0[0xf] != '\0') * s__001846a0[0xf]) == '\0');
            auVar118[0] = -(bVar101 == DAT_00182630);
            auVar118[1] = -(bVar110 == DAT_00182630._1_1_);
            auVar118[2] = -(bVar111 == DAT_00182630._2_1_);
            auVar118[3] = -(bVar112 == DAT_00182630._3_1_);
            auVar118[4] = -(bVar113 == DAT_00182630._4_1_);
            auVar118[5] = -(bVar114 == DAT_00182630._5_1_);
            auVar118[6] = -(bVar115 == DAT_00182630._6_1_);
            auVar118[7] = -(bVar11 == DAT_00182630._7_1_);
            auVar118[8] = -(DAT_00182630._8_1_ == '\0');
            auVar118[9] = -(DAT_00182630._9_1_ == '\0');
            auVar118[10] = -(DAT_00182630._10_1_ == '\0');
            auVar118[0xb] = -(DAT_00182630._11_1_ == '\0');
            auVar118[0xc] = -(DAT_00182630._12_1_ == '\0');
            auVar118[0xd] = -(DAT_00182630._13_1_ == '\0');
            auVar118[0xe] = -(DAT_00182630._14_1_ == '\0');
            auVar118[0xf] = -(DAT_00182630._15_1_ == '\0');
            auVar61[0] = -(bVar101 == s__00184760[0]);
            auVar61[1] = -(bVar110 == s__00184760[1]);
            auVar61[2] = -(bVar111 == s__00184760[2]);
            auVar61[3] = -(bVar112 == s__00184760[3]);
            auVar61[4] = -(bVar113 == s__00184760[4]);
            auVar61[5] = -(bVar114 == s__00184760[5]);
            auVar61[6] = -(bVar115 == s__00184760[6]);
            auVar61[7] = -(bVar11 == s__00184760[7]);
            auVar61[8] = -(s__00184760[8] == '\0');
            auVar61[9] = -(UNK_00184769 == '\0');
            auVar61[10] = -(UNK_0018476a == '\0');
            auVar61[0xb] = -(UNK_0018476b == '\0');
            auVar61[0xc] = -(UNK_0018476c == '\0');
            auVar61[0xd] = -(UNK_0018476d == '\0');
            auVar61[0xe] = -(UNK_0018476e == '\0');
            auVar61[0xf] = -(UNK_0018476f == '\0');
            auVar82 = ~auVar61 & (auVar118 | auVar103 ^ auVar57);
            auVar69._0_14_ = auVar82._0_14_;
            auVar69[0xe] = auVar82[7];
            auVar69[0xf] = auVar82[7];
            auVar68._14_2_ = auVar69._14_2_;
            auVar68._0_13_ = auVar82._0_13_;
            auVar68[0xd] = auVar82[6];
            auVar67._13_3_ = auVar68._13_3_;
            auVar67._0_12_ = auVar82._0_12_;
            auVar67[0xc] = auVar82[6];
            auVar66._12_4_ = auVar67._12_4_;
            auVar66._0_11_ = auVar82._0_11_;
            auVar66[0xb] = auVar82[5];
            auVar65._11_5_ = auVar66._11_5_;
            auVar65._0_10_ = auVar82._0_10_;
            auVar65[10] = auVar82[5];
            auVar64._10_6_ = auVar65._10_6_;
            auVar64._0_9_ = auVar82._0_9_;
            auVar64[9] = auVar82[4];
            auVar63._9_7_ = auVar64._9_7_;
            auVar63._0_8_ = auVar82._0_8_;
            auVar63[8] = auVar82[4];
            auVar62._8_8_ = auVar63._8_8_;
            auVar62[7] = auVar82[3];
            auVar62[6] = auVar82[3];
            auVar62[5] = auVar82[2];
            auVar62[4] = auVar82[2];
            auVar62[3] = auVar82[1];
            auVar62[2] = auVar82[1];
            auVar62[0] = auVar82[0];
            auVar62[1] = auVar62[0];
            auVar56 = auVar56 | auVar62;
            uVar49 = uVar49 + 8;
          } while (uVar53 != uVar49);
          auVar56 = psllw(auVar56,7);
          uVar55 = auVar56._0_8_;
          bVar54 = (((((((SUB161(auVar56 >> 7,0) & 1) != 0 || (SUB161(auVar56 >> 0x17,0) & 1) != 0)
                       || (SUB161(auVar56 >> 0x27,0) & 1) != 0) ||
                      (SUB161(auVar56 >> 0x37,0) & 1) != 0) || (SUB161(auVar56 >> 0x47,0) & 1) != 0)
                    || (SUB161(auVar56 >> 0x57,0) & 1) != 0) || (SUB161(auVar56 >> 0x67,0) & 1) != 0
                   ) || (SUB161(auVar56 >> 0x77,0) & 1) != 0;
          if (uVar47 != uVar53) goto LAB_00693454;
        }
        else {
          uVar49 = uVar47 & 0x7fffffffffffffe0;
          auVar56 = (undefined1  [16])0x0;
          uVar53 = 0;
          auVar82 = (undefined1  [16])0x0;
          do {
            pbVar48 = pbVar45 + uVar53;
            bVar12 = *pbVar48;
            bVar13 = pbVar48[1];
            bVar14 = pbVar48[2];
            bVar15 = pbVar48[3];
            bVar16 = pbVar48[4];
            bVar17 = pbVar48[5];
            bVar18 = pbVar48[6];
            bVar19 = pbVar48[7];
            bVar20 = pbVar48[8];
            bVar21 = pbVar48[9];
            bVar22 = pbVar48[10];
            bVar23 = pbVar48[0xb];
            bVar24 = pbVar48[0xc];
            bVar25 = pbVar48[0xd];
            bVar26 = pbVar48[0xe];
            bVar27 = pbVar48[0xf];
            pbVar48 = pbVar45 + uVar53 + 0x10;
            bVar28 = *pbVar48;
            bVar29 = pbVar48[1];
            bVar30 = pbVar48[2];
            bVar31 = pbVar48[3];
            bVar32 = pbVar48[4];
            bVar33 = pbVar48[5];
            bVar34 = pbVar48[6];
            bVar35 = pbVar48[7];
            bVar36 = pbVar48[8];
            bVar37 = pbVar48[9];
            bVar38 = pbVar48[10];
            bVar39 = pbVar48[0xb];
            bVar40 = pbVar48[0xc];
            bVar41 = pbVar48[0xd];
            bVar42 = pbVar48[0xe];
            bVar43 = pbVar48[0xf];
            bVar50 = DAT_00184700;
            bVar4 = DAT_00184700._1_1_;
            bVar5 = DAT_00184700._2_1_;
            bVar6 = DAT_00184700._3_1_;
            bVar7 = DAT_00184700._4_1_;
            bVar8 = DAT_00184700._5_1_;
            bVar9 = DAT_00184700._6_1_;
            bVar10 = DAT_00184700._7_1_;
            bVar11 = DAT_00184700._8_1_;
            bVar101 = DAT_00184700._9_1_;
            bVar110 = DAT_00184700._10_1_;
            bVar111 = DAT_00184700._11_1_;
            bVar112 = DAT_00184700._12_1_;
            bVar113 = DAT_00184700._13_1_;
            bVar114 = DAT_00184700._14_1_;
            bVar115 = DAT_00184700._15_1_;
            auVar116[0] = -((byte)((bVar50 < bVar12) * bVar50 | (bVar50 >= bVar12) * bVar12) ==
                           bVar12);
            auVar116[1] = -((byte)((bVar4 < bVar13) * bVar4 | (bVar4 >= bVar13) * bVar13) == bVar13)
            ;
            auVar116[2] = -((byte)((bVar5 < bVar14) * bVar5 | (bVar5 >= bVar14) * bVar14) == bVar14)
            ;
            auVar116[3] = -((byte)((bVar6 < bVar15) * bVar6 | (bVar6 >= bVar15) * bVar15) == bVar15)
            ;
            auVar116[4] = -((byte)((bVar7 < bVar16) * bVar7 | (bVar7 >= bVar16) * bVar16) == bVar16)
            ;
            auVar116[5] = -((byte)((bVar8 < bVar17) * bVar8 | (bVar8 >= bVar17) * bVar17) == bVar17)
            ;
            auVar116[6] = -((byte)((bVar9 < bVar18) * bVar9 | (bVar9 >= bVar18) * bVar18) == bVar18)
            ;
            auVar116[7] = -((byte)((bVar10 < bVar19) * bVar10 | (bVar10 >= bVar19) * bVar19) ==
                           bVar19);
            auVar116[8] = -((byte)((bVar11 < bVar20) * bVar11 | (bVar11 >= bVar20) * bVar20) ==
                           bVar20);
            auVar116[9] = -((byte)((bVar101 < bVar21) * bVar101 | (bVar101 >= bVar21) * bVar21) ==
                           bVar21);
            auVar116[10] = -((byte)((bVar110 < bVar22) * bVar110 | (bVar110 >= bVar22) * bVar22) ==
                            bVar22);
            auVar116[0xb] =
                 -((byte)((bVar111 < bVar23) * bVar111 | (bVar111 >= bVar23) * bVar23) == bVar23);
            auVar116[0xc] =
                 -((byte)((bVar112 < bVar24) * bVar112 | (bVar112 >= bVar24) * bVar24) == bVar24);
            auVar116[0xd] =
                 -((byte)((bVar113 < bVar25) * bVar113 | (bVar113 >= bVar25) * bVar25) == bVar25);
            auVar116[0xe] =
                 -((byte)((bVar114 < bVar26) * bVar114 | (bVar114 >= bVar26) * bVar26) == bVar26);
            auVar116[0xf] =
                 -((byte)((bVar115 < bVar27) * bVar115 | (bVar115 >= bVar27) * bVar27) == bVar27);
            auVar128[0] = -((byte)((bVar50 < bVar28) * bVar50 | (bVar50 >= bVar28) * bVar28) ==
                           bVar28);
            auVar128[1] = -((byte)((bVar4 < bVar29) * bVar4 | (bVar4 >= bVar29) * bVar29) == bVar29)
            ;
            auVar128[2] = -((byte)((bVar5 < bVar30) * bVar5 | (bVar5 >= bVar30) * bVar30) == bVar30)
            ;
            auVar128[3] = -((byte)((bVar6 < bVar31) * bVar6 | (bVar6 >= bVar31) * bVar31) == bVar31)
            ;
            auVar128[4] = -((byte)((bVar7 < bVar32) * bVar7 | (bVar7 >= bVar32) * bVar32) == bVar32)
            ;
            auVar128[5] = -((byte)((bVar8 < bVar33) * bVar8 | (bVar8 >= bVar33) * bVar33) == bVar33)
            ;
            auVar128[6] = -((byte)((bVar9 < bVar34) * bVar9 | (bVar9 >= bVar34) * bVar34) == bVar34)
            ;
            auVar128[7] = -((byte)((bVar10 < bVar35) * bVar10 | (bVar10 >= bVar35) * bVar35) ==
                           bVar35);
            auVar128[8] = -((byte)((bVar11 < bVar36) * bVar11 | (bVar11 >= bVar36) * bVar36) ==
                           bVar36);
            auVar128[9] = -((byte)((bVar101 < bVar37) * bVar101 | (bVar101 >= bVar37) * bVar37) ==
                           bVar37);
            auVar128[10] = -((byte)((bVar110 < bVar38) * bVar110 | (bVar110 >= bVar38) * bVar38) ==
                            bVar38);
            auVar128[0xb] =
                 -((byte)((bVar111 < bVar39) * bVar111 | (bVar111 >= bVar39) * bVar39) == bVar39);
            auVar128[0xc] =
                 -((byte)((bVar112 < bVar40) * bVar112 | (bVar112 >= bVar40) * bVar40) == bVar40);
            auVar128[0xd] =
                 -((byte)((bVar113 < bVar41) * bVar113 | (bVar113 >= bVar41) * bVar41) == bVar41);
            auVar128[0xe] =
                 -((byte)((bVar114 < bVar42) * bVar114 | (bVar114 >= bVar42) * bVar42) == bVar42);
            auVar128[0xf] =
                 -((byte)((bVar115 < bVar43) * bVar115 | (bVar115 >= bVar43) * bVar43) == bVar43);
            auVar132[0] = -(bVar12 == DAT_00182620);
            auVar132[1] = -(bVar13 == DAT_00182620._1_1_);
            auVar132[2] = -(bVar14 == DAT_00182620._2_1_);
            auVar132[3] = -(bVar15 == DAT_00182620._3_1_);
            auVar132[4] = -(bVar16 == DAT_00182620._4_1_);
            auVar132[5] = -(bVar17 == DAT_00182620._5_1_);
            auVar132[6] = -(bVar18 == DAT_00182620._6_1_);
            auVar132[7] = -(bVar19 == DAT_00182620._7_1_);
            auVar132[8] = -(bVar20 == DAT_00182620._8_1_);
            auVar132[9] = -(bVar21 == DAT_00182620._9_1_);
            auVar132[10] = -(bVar22 == DAT_00182620._10_1_);
            auVar132[0xb] = -(bVar23 == DAT_00182620._11_1_);
            auVar132[0xc] = -(bVar24 == DAT_00182620._12_1_);
            auVar132[0xd] = -(bVar25 == DAT_00182620._13_1_);
            auVar132[0xe] = -(bVar26 == DAT_00182620._14_1_);
            auVar132[0xf] = -(bVar27 == DAT_00182620._15_1_);
            auVar117[0] = -(bVar28 == DAT_00182620);
            auVar117[1] = -(bVar29 == DAT_00182620._1_1_);
            auVar117[2] = -(bVar30 == DAT_00182620._2_1_);
            auVar117[3] = -(bVar31 == DAT_00182620._3_1_);
            auVar117[4] = -(bVar32 == DAT_00182620._4_1_);
            auVar117[5] = -(bVar33 == DAT_00182620._5_1_);
            auVar117[6] = -(bVar34 == DAT_00182620._6_1_);
            auVar117[7] = -(bVar35 == DAT_00182620._7_1_);
            auVar117[8] = -(bVar36 == DAT_00182620._8_1_);
            auVar117[9] = -(bVar37 == DAT_00182620._9_1_);
            auVar117[10] = -(bVar38 == DAT_00182620._10_1_);
            auVar117[0xb] = -(bVar39 == DAT_00182620._11_1_);
            auVar117[0xc] = -(bVar40 == DAT_00182620._12_1_);
            auVar117[0xd] = -(bVar41 == DAT_00182620._13_1_);
            auVar117[0xe] = -(bVar42 == DAT_00182620._14_1_);
            auVar117[0xf] = -(bVar43 == DAT_00182620._15_1_);
            auVar60[0] = -(bVar12 == DAT_00183900);
            auVar60[1] = -(bVar13 == UNK_00183901);
            auVar60[2] = -(bVar14 == UNK_00183902);
            auVar60[3] = -(bVar15 == UNK_00183903);
            auVar60[4] = -(bVar16 == UNK_00183904);
            auVar60[5] = -(bVar17 == UNK_00183905);
            auVar60[6] = -(bVar18 == UNK_00183906);
            auVar60[7] = -(bVar19 == UNK_00183907);
            auVar60[8] = -(bVar20 == UNK_00183908);
            auVar60[9] = -(bVar21 == UNK_00183909);
            auVar60[10] = -(bVar22 == UNK_0018390a);
            auVar60[0xb] = -(bVar23 == UNK_0018390b);
            auVar60[0xc] = -(bVar24 == UNK_0018390c);
            auVar60[0xd] = -(bVar25 == UNK_0018390d);
            auVar60[0xe] = -(bVar26 == UNK_0018390e);
            auVar60[0xf] = -(bVar27 == UNK_0018390f);
            auVar82 = auVar82 | ~auVar60 & (auVar132 | auVar116);
            auVar102[0] = -(bVar28 == DAT_00183900);
            auVar102[1] = -(bVar29 == UNK_00183901);
            auVar102[2] = -(bVar30 == UNK_00183902);
            auVar102[3] = -(bVar31 == UNK_00183903);
            auVar102[4] = -(bVar32 == UNK_00183904);
            auVar102[5] = -(bVar33 == UNK_00183905);
            auVar102[6] = -(bVar34 == UNK_00183906);
            auVar102[7] = -(bVar35 == UNK_00183907);
            auVar102[8] = -(bVar36 == UNK_00183908);
            auVar102[9] = -(bVar37 == UNK_00183909);
            auVar102[10] = -(bVar38 == UNK_0018390a);
            auVar102[0xb] = -(bVar39 == UNK_0018390b);
            auVar102[0xc] = -(bVar40 == UNK_0018390c);
            auVar102[0xd] = -(bVar41 == UNK_0018390d);
            auVar102[0xe] = -(bVar42 == UNK_0018390e);
            auVar102[0xf] = -(bVar43 == UNK_0018390f);
            auVar56 = auVar56 | ~auVar102 & (auVar117 | auVar128);
            uVar53 = uVar53 + 0x20;
          } while (uVar49 != uVar53);
          auVar56 = psllw(auVar56 | auVar82,7);
          uVar55 = auVar56._0_8_;
          bVar54 = (((((((((((((((SUB161(auVar56 >> 7,0) & 1) != 0 ||
                                (SUB161(auVar56 >> 0xf,0) & 1) != 0) ||
                               (SUB161(auVar56 >> 0x17,0) & 1) != 0) ||
                              (SUB161(auVar56 >> 0x1f,0) & 1) != 0) ||
                             (SUB161(auVar56 >> 0x27,0) & 1) != 0) ||
                            (SUB161(auVar56 >> 0x2f,0) & 1) != 0) ||
                           (SUB161(auVar56 >> 0x37,0) & 1) != 0) ||
                          (SUB161(auVar56 >> 0x3f,0) & 1) != 0) ||
                         (SUB161(auVar56 >> 0x47,0) & 1) != 0) ||
                        (SUB161(auVar56 >> 0x4f,0) & 1) != 0) ||
                       (SUB161(auVar56 >> 0x57,0) & 1) != 0) || (SUB161(auVar56 >> 0x5f,0) & 1) != 0
                      ) || (SUB161(auVar56 >> 0x67,0) & 1) != 0) ||
                    (SUB161(auVar56 >> 0x6f,0) & 1) != 0) || (SUB161(auVar56 >> 0x77,0) & 1) != 0)
                   || auVar56[0xf] < '\0';
          if (uVar47 != uVar49) {
            if ((uVar47 & 0x18) == 0) {
              pbVar48 = pbVar45 + uVar49;
              goto LAB_00693454;
            }
            goto LAB_006933cd;
          }
        }
        param_3 = local_158;
        if (!bVar54) goto LAB_006934a4;
        local_88 = 2;
      }
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar55,1);
    }
  }
LAB_0069351f:
  cVar44 = <craggemini_core[66f3c71560d70857]::protocol::Failure>::effective_retryable();
  if (cVar44 == '\0') {
    local_1b8 = &local_128;
    ppuStack_1b0 = &PTR_static_clone_007913d8;
    local_1a8 = "false";
    auStack_1a0 = ZEXT816(5);
    local_190 = local_190 & 0xffffffffffffff00;
    uVar55 = <http[56314f485c23ccf6]::header::name::HdrName>::from_static::
             <<&str_as_http[56314f485c23ccf6]::header::map::into_header_name::Sealed>::try_insert<http[56314f485c23ccf6]::header::value::HeaderValue>::_closure_0_,core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::option::Option<http[56314f485c23ccf6]::header::value::HeaderValue>,http[56314f485c23ccf6]::header::map::MaxSizeReached>>
                       (local_1e0,"x-should-retry",0xe,&local_1b8);
    if (local_1c0 != -1) {
      if (local_1c0 != '\x02') {
        (**(code **)(local_1e0[0] + 0x20))(uVar55,local_1d0);
      }
      goto LAB_006935aa;
    }
  }
  else {
LAB_006935aa:
    if (pcVar2 == (char *)0x0) {
      bVar50 = *(byte *)(param_3 + 0x3b);
      if (bVar50 < 2) goto LAB_00693941;
    }
    else {
      if (*(longlong *)(pcVar2 + 0xe8) != -1) {
        pbVar45 = *(byte **)(pcVar2 + 0xf0);
        uVar47 = *(ulonglong *)(pcVar2 + 0xf8);
        pbVar48 = pbVar45;
        while (pbVar48 != pbVar45 + uVar47) {
          bVar50 = *pbVar48;
          uVar52 = (uint)bVar50;
          uVar46 = (uint)bVar50;
          if (-1 < (char)bVar50) {
            pbVar48 = pbVar48 + 1;
            if (uVar46 != 10) goto LAB_006936a0;
            goto LAB_0069392c;
          }
          pbVar1 = pbVar48 + 1;
          if (bVar50 < 0xe0) {
            pbVar48 = pbVar48 + 2;
            uVar52 = (uVar46 & 0x1f) << 6 | *pbVar1 & 0x3f;
          }
          else {
            uVar52 = pbVar48[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
            if (bVar50 < 0xf0) {
              pbVar48 = pbVar48 + 3;
              uVar52 = uVar52 | (uVar46 & 0x1f) << 0xc;
            }
            else {
              pbVar1 = pbVar48 + 3;
              pbVar48 = pbVar48 + 4;
              uVar52 = *pbVar1 & 0x3f | uVar52 << 6 | (uVar46 & 7) << 0x12;
            }
          }
          if (uVar52 == 10) goto LAB_0069392c;
LAB_006936a0:
          if (uVar52 == 0xd) goto LAB_0069392c;
        }
        if (uVar47 == 0) goto LAB_0069389b;
        if (uVar47 < 8) {
          bVar54 = false;
          pbVar48 = pbVar45;
          goto LAB_00693860;
        }
        if (uVar47 < 0x20) {
          uVar49 = 0;
          bVar54 = false;
          goto LAB_006937c9;
        }
        uVar49 = uVar47 & 0xffffffffffffffe0;
        auVar56 = (undefined1  [16])0x0;
        uVar53 = 0;
        auVar82 = (undefined1  [16])0x0;
        do {
          pbVar48 = pbVar45 + uVar53;
          bVar12 = *pbVar48;
          bVar13 = pbVar48[1];
          bVar14 = pbVar48[2];
          bVar15 = pbVar48[3];
          bVar16 = pbVar48[4];
          bVar17 = pbVar48[5];
          bVar18 = pbVar48[6];
          bVar19 = pbVar48[7];
          bVar20 = pbVar48[8];
          bVar21 = pbVar48[9];
          bVar22 = pbVar48[10];
          bVar23 = pbVar48[0xb];
          bVar24 = pbVar48[0xc];
          bVar25 = pbVar48[0xd];
          bVar26 = pbVar48[0xe];
          bVar27 = pbVar48[0xf];
          pbVar48 = pbVar45 + uVar53 + 0x10;
          bVar28 = *pbVar48;
          bVar29 = pbVar48[1];
          bVar30 = pbVar48[2];
          bVar31 = pbVar48[3];
          bVar32 = pbVar48[4];
          bVar33 = pbVar48[5];
          bVar34 = pbVar48[6];
          bVar35 = pbVar48[7];
          bVar36 = pbVar48[8];
          bVar37 = pbVar48[9];
          bVar38 = pbVar48[10];
          bVar39 = pbVar48[0xb];
          bVar40 = pbVar48[0xc];
          bVar41 = pbVar48[0xd];
          bVar42 = pbVar48[0xe];
          bVar43 = pbVar48[0xf];
          bVar50 = DAT_00184700;
          bVar4 = DAT_00184700._1_1_;
          bVar5 = DAT_00184700._2_1_;
          bVar6 = DAT_00184700._3_1_;
          bVar7 = DAT_00184700._4_1_;
          bVar8 = DAT_00184700._5_1_;
          bVar9 = DAT_00184700._6_1_;
          bVar10 = DAT_00184700._7_1_;
          bVar11 = DAT_00184700._8_1_;
          bVar101 = DAT_00184700._9_1_;
          bVar110 = DAT_00184700._10_1_;
          bVar111 = DAT_00184700._11_1_;
          bVar112 = DAT_00184700._12_1_;
          bVar113 = DAT_00184700._13_1_;
          bVar114 = DAT_00184700._14_1_;
          bVar115 = DAT_00184700._15_1_;
          auVar119[0] = -((byte)((bVar50 < bVar12) * bVar50 | (bVar50 >= bVar12) * bVar12) == bVar12
                         );
          auVar119[1] = -((byte)((bVar4 < bVar13) * bVar4 | (bVar4 >= bVar13) * bVar13) == bVar13);
          auVar119[2] = -((byte)((bVar5 < bVar14) * bVar5 | (bVar5 >= bVar14) * bVar14) == bVar14);
          auVar119[3] = -((byte)((bVar6 < bVar15) * bVar6 | (bVar6 >= bVar15) * bVar15) == bVar15);
          auVar119[4] = -((byte)((bVar7 < bVar16) * bVar7 | (bVar7 >= bVar16) * bVar16) == bVar16);
          auVar119[5] = -((byte)((bVar8 < bVar17) * bVar8 | (bVar8 >= bVar17) * bVar17) == bVar17);
          auVar119[6] = -((byte)((bVar9 < bVar18) * bVar9 | (bVar9 >= bVar18) * bVar18) == bVar18);
          auVar119[7] = -((byte)((bVar10 < bVar19) * bVar10 | (bVar10 >= bVar19) * bVar19) == bVar19
                         );
          auVar119[8] = -((byte)((bVar11 < bVar20) * bVar11 | (bVar11 >= bVar20) * bVar20) == bVar20
                         );
          auVar119[9] = -((byte)((bVar101 < bVar21) * bVar101 | (bVar101 >= bVar21) * bVar21) ==
                         bVar21);
          auVar119[10] = -((byte)((bVar110 < bVar22) * bVar110 | (bVar110 >= bVar22) * bVar22) ==
                          bVar22);
          auVar119[0xb] =
               -((byte)((bVar111 < bVar23) * bVar111 | (bVar111 >= bVar23) * bVar23) == bVar23);
          auVar119[0xc] =
               -((byte)((bVar112 < bVar24) * bVar112 | (bVar112 >= bVar24) * bVar24) == bVar24);
          auVar119[0xd] =
               -((byte)((bVar113 < bVar25) * bVar113 | (bVar113 >= bVar25) * bVar25) == bVar25);
          auVar119[0xe] =
               -((byte)((bVar114 < bVar26) * bVar114 | (bVar114 >= bVar26) * bVar26) == bVar26);
          auVar119[0xf] =
               -((byte)((bVar115 < bVar27) * bVar115 | (bVar115 >= bVar27) * bVar27) == bVar27);
          auVar129[0] = -((byte)((bVar50 < bVar28) * bVar50 | (bVar50 >= bVar28) * bVar28) == bVar28
                         );
          auVar129[1] = -((byte)((bVar4 < bVar29) * bVar4 | (bVar4 >= bVar29) * bVar29) == bVar29);
          auVar129[2] = -((byte)((bVar5 < bVar30) * bVar5 | (bVar5 >= bVar30) * bVar30) == bVar30);
          auVar129[3] = -((byte)((bVar6 < bVar31) * bVar6 | (bVar6 >= bVar31) * bVar31) == bVar31);
          auVar129[4] = -((byte)((bVar7 < bVar32) * bVar7 | (bVar7 >= bVar32) * bVar32) == bVar32);
          auVar129[5] = -((byte)((bVar8 < bVar33) * bVar8 | (bVar8 >= bVar33) * bVar33) == bVar33);
          auVar129[6] = -((byte)((bVar9 < bVar34) * bVar9 | (bVar9 >= bVar34) * bVar34) == bVar34);
          auVar129[7] = -((byte)((bVar10 < bVar35) * bVar10 | (bVar10 >= bVar35) * bVar35) == bVar35
                         );
          auVar129[8] = -((byte)((bVar11 < bVar36) * bVar11 | (bVar11 >= bVar36) * bVar36) == bVar36
                         );
          auVar129[9] = -((byte)((bVar101 < bVar37) * bVar101 | (bVar101 >= bVar37) * bVar37) ==
                         bVar37);
          auVar129[10] = -((byte)((bVar110 < bVar38) * bVar110 | (bVar110 >= bVar38) * bVar38) ==
                          bVar38);
          auVar129[0xb] =
               -((byte)((bVar111 < bVar39) * bVar111 | (bVar111 >= bVar39) * bVar39) == bVar39);
          auVar129[0xc] =
               -((byte)((bVar112 < bVar40) * bVar112 | (bVar112 >= bVar40) * bVar40) == bVar40);
          auVar129[0xd] =
               -((byte)((bVar113 < bVar41) * bVar113 | (bVar113 >= bVar41) * bVar41) == bVar41);
          auVar129[0xe] =
               -((byte)((bVar114 < bVar42) * bVar114 | (bVar114 >= bVar42) * bVar42) == bVar42);
          auVar129[0xf] =
               -((byte)((bVar115 < bVar43) * bVar115 | (bVar115 >= bVar43) * bVar43) == bVar43);
          auVar133[0] = -(bVar12 == DAT_00182620);
          auVar133[1] = -(bVar13 == DAT_00182620._1_1_);
          auVar133[2] = -(bVar14 == DAT_00182620._2_1_);
          auVar133[3] = -(bVar15 == DAT_00182620._3_1_);
          auVar133[4] = -(bVar16 == DAT_00182620._4_1_);
          auVar133[5] = -(bVar17 == DAT_00182620._5_1_);
          auVar133[6] = -(bVar18 == DAT_00182620._6_1_);
          auVar133[7] = -(bVar19 == DAT_00182620._7_1_);
          auVar133[8] = -(bVar20 == DAT_00182620._8_1_);
          auVar133[9] = -(bVar21 == DAT_00182620._9_1_);
          auVar133[10] = -(bVar22 == DAT_00182620._10_1_);
          auVar133[0xb] = -(bVar23 == DAT_00182620._11_1_);
          auVar133[0xc] = -(bVar24 == DAT_00182620._12_1_);
          auVar133[0xd] = -(bVar25 == DAT_00182620._13_1_);
          auVar133[0xe] = -(bVar26 == DAT_00182620._14_1_);
          auVar133[0xf] = -(bVar27 == DAT_00182620._15_1_);
          auVar120[0] = -(bVar28 == DAT_00182620);
          auVar120[1] = -(bVar29 == DAT_00182620._1_1_);
          auVar120[2] = -(bVar30 == DAT_00182620._2_1_);
          auVar120[3] = -(bVar31 == DAT_00182620._3_1_);
          auVar120[4] = -(bVar32 == DAT_00182620._4_1_);
          auVar120[5] = -(bVar33 == DAT_00182620._5_1_);
          auVar120[6] = -(bVar34 == DAT_00182620._6_1_);
          auVar120[7] = -(bVar35 == DAT_00182620._7_1_);
          auVar120[8] = -(bVar36 == DAT_00182620._8_1_);
          auVar120[9] = -(bVar37 == DAT_00182620._9_1_);
          auVar120[10] = -(bVar38 == DAT_00182620._10_1_);
          auVar120[0xb] = -(bVar39 == DAT_00182620._11_1_);
          auVar120[0xc] = -(bVar40 == DAT_00182620._12_1_);
          auVar120[0xd] = -(bVar41 == DAT_00182620._13_1_);
          auVar120[0xe] = -(bVar42 == DAT_00182620._14_1_);
          auVar120[0xf] = -(bVar43 == DAT_00182620._15_1_);
          auVar70[0] = -(bVar12 == DAT_00183900);
          auVar70[1] = -(bVar13 == UNK_00183901);
          auVar70[2] = -(bVar14 == UNK_00183902);
          auVar70[3] = -(bVar15 == UNK_00183903);
          auVar70[4] = -(bVar16 == UNK_00183904);
          auVar70[5] = -(bVar17 == UNK_00183905);
          auVar70[6] = -(bVar18 == UNK_00183906);
          auVar70[7] = -(bVar19 == UNK_00183907);
          auVar70[8] = -(bVar20 == UNK_00183908);
          auVar70[9] = -(bVar21 == UNK_00183909);
          auVar70[10] = -(bVar22 == UNK_0018390a);
          auVar70[0xb] = -(bVar23 == UNK_0018390b);
          auVar70[0xc] = -(bVar24 == UNK_0018390c);
          auVar70[0xd] = -(bVar25 == UNK_0018390d);
          auVar70[0xe] = -(bVar26 == UNK_0018390e);
          auVar70[0xf] = -(bVar27 == UNK_0018390f);
          auVar82 = auVar82 | ~auVar70 & (auVar133 | auVar119);
          auVar104[0] = -(bVar28 == DAT_00183900);
          auVar104[1] = -(bVar29 == UNK_00183901);
          auVar104[2] = -(bVar30 == UNK_00183902);
          auVar104[3] = -(bVar31 == UNK_00183903);
          auVar104[4] = -(bVar32 == UNK_00183904);
          auVar104[5] = -(bVar33 == UNK_00183905);
          auVar104[6] = -(bVar34 == UNK_00183906);
          auVar104[7] = -(bVar35 == UNK_00183907);
          auVar104[8] = -(bVar36 == UNK_00183908);
          auVar104[9] = -(bVar37 == UNK_00183909);
          auVar104[10] = -(bVar38 == UNK_0018390a);
          auVar104[0xb] = -(bVar39 == UNK_0018390b);
          auVar104[0xc] = -(bVar40 == UNK_0018390c);
          auVar104[0xd] = -(bVar41 == UNK_0018390d);
          auVar104[0xe] = -(bVar42 == UNK_0018390e);
          auVar104[0xf] = -(bVar43 == UNK_0018390f);
          auVar56 = auVar56 | ~auVar104 & (auVar120 | auVar129);
          uVar53 = uVar53 + 0x20;
        } while (uVar49 != uVar53);
        auVar56 = psllw(auVar56 | auVar82,7);
        bVar54 = (((((((((((((((SUB161(auVar56 >> 7,0) & 1) != 0 ||
                              (SUB161(auVar56 >> 0xf,0) & 1) != 0) ||
                             (SUB161(auVar56 >> 0x17,0) & 1) != 0) ||
                            (SUB161(auVar56 >> 0x1f,0) & 1) != 0) ||
                           (SUB161(auVar56 >> 0x27,0) & 1) != 0) ||
                          (SUB161(auVar56 >> 0x2f,0) & 1) != 0) ||
                         (SUB161(auVar56 >> 0x37,0) & 1) != 0) ||
                        (SUB161(auVar56 >> 0x3f,0) & 1) != 0) ||
                       (SUB161(auVar56 >> 0x47,0) & 1) != 0) || (SUB161(auVar56 >> 0x4f,0) & 1) != 0
                      ) || (SUB161(auVar56 >> 0x57,0) & 1) != 0) ||
                    (SUB161(auVar56 >> 0x5f,0) & 1) != 0) || (SUB161(auVar56 >> 0x67,0) & 1) != 0)
                  || (SUB161(auVar56 >> 0x6f,0) & 1) != 0) || (SUB161(auVar56 >> 0x77,0) & 1) != 0)
                 || auVar56[0xf] < '\0';
        if (uVar47 != uVar49) {
          if ((uVar47 & 0x18) == 0) {
            pbVar48 = pbVar45 + uVar49;
          }
          else {
LAB_006937c9:
            uVar53 = uVar47 & 0xfffffffffffffff8;
            pbVar48 = pbVar45 + uVar53;
            auVar56 = ZEXT116(bVar54);
            auVar58._8_4_ = 0xffffffff;
            auVar58._0_8_ = 0xffffffffffffffff;
            auVar58._12_4_ = 0xffffffff;
            do {
              uVar55 = *(undefined8 *)(pbVar45 + uVar49);
              bVar50 = s__001846a0[0];
              bVar101 = (byte)uVar55;
              bVar4 = s__001846a0[1];
              bVar110 = (byte)((ulonglong)uVar55 >> 8);
              bVar5 = s__001846a0[2];
              bVar111 = (byte)((ulonglong)uVar55 >> 0x10);
              bVar6 = s__001846a0[3];
              bVar112 = (byte)((ulonglong)uVar55 >> 0x18);
              bVar7 = s__001846a0[4];
              bVar113 = (byte)((ulonglong)uVar55 >> 0x20);
              bVar8 = s__001846a0[5];
              bVar114 = (byte)((ulonglong)uVar55 >> 0x28);
              bVar9 = s__001846a0[6];
              bVar115 = (byte)((ulonglong)uVar55 >> 0x30);
              bVar11 = (byte)((ulonglong)uVar55 >> 0x38);
              bVar10 = s__001846a0[7];
              auVar105[0] = -((byte)((bVar101 < bVar50) * bVar50 | (bVar101 >= bVar50) * bVar101) ==
                             bVar101);
              auVar105[1] = -((byte)((bVar110 < bVar4) * bVar4 | (bVar110 >= bVar4) * bVar110) ==
                             bVar110);
              auVar105[2] = -((byte)((bVar111 < bVar5) * bVar5 | (bVar111 >= bVar5) * bVar111) ==
                             bVar111);
              auVar105[3] = -((byte)((bVar112 < bVar6) * bVar6 | (bVar112 >= bVar6) * bVar112) ==
                             bVar112);
              auVar105[4] = -((byte)((bVar113 < bVar7) * bVar7 | (bVar113 >= bVar7) * bVar113) ==
                             bVar113);
              auVar105[5] = -((byte)((bVar114 < bVar8) * bVar8 | (bVar114 >= bVar8) * bVar114) ==
                             bVar114);
              auVar105[6] = -((byte)((bVar115 < bVar9) * bVar9 | (bVar115 >= bVar9) * bVar115) ==
                             bVar115);
              auVar105[7] = -((byte)((bVar11 < bVar10) * bVar10 | (bVar11 >= bVar10) * bVar11) ==
                             bVar11);
              auVar105[8] = -((char)((s__001846a0[8] != '\0') * s__001846a0[8]) == '\0');
              auVar105[9] = -((char)((s__001846a0[9] != '\0') * s__001846a0[9]) == '\0');
              auVar105[10] = -((char)((s__001846a0[10] != '\0') * s__001846a0[10]) == '\0');
              auVar105[0xb] = -((char)((s__001846a0[0xb] != '\0') * s__001846a0[0xb]) == '\0');
              auVar105[0xc] = -((char)((s__001846a0[0xc] != '\0') * s__001846a0[0xc]) == '\0');
              auVar105[0xd] = -((char)((s__001846a0[0xd] != '\0') * s__001846a0[0xd]) == '\0');
              auVar105[0xe] = -((char)((s__001846a0[0xe] != '\0') * s__001846a0[0xe]) == '\0');
              auVar105[0xf] = -((char)((s__001846a0[0xf] != '\0') * s__001846a0[0xf]) == '\0');
              auVar121[0] = -(bVar101 == DAT_00182630);
              auVar121[1] = -(bVar110 == DAT_00182630._1_1_);
              auVar121[2] = -(bVar111 == DAT_00182630._2_1_);
              auVar121[3] = -(bVar112 == DAT_00182630._3_1_);
              auVar121[4] = -(bVar113 == DAT_00182630._4_1_);
              auVar121[5] = -(bVar114 == DAT_00182630._5_1_);
              auVar121[6] = -(bVar115 == DAT_00182630._6_1_);
              auVar121[7] = -(bVar11 == DAT_00182630._7_1_);
              auVar121[8] = -(DAT_00182630._8_1_ == '\0');
              auVar121[9] = -(DAT_00182630._9_1_ == '\0');
              auVar121[10] = -(DAT_00182630._10_1_ == '\0');
              auVar121[0xb] = -(DAT_00182630._11_1_ == '\0');
              auVar121[0xc] = -(DAT_00182630._12_1_ == '\0');
              auVar121[0xd] = -(DAT_00182630._13_1_ == '\0');
              auVar121[0xe] = -(DAT_00182630._14_1_ == '\0');
              auVar121[0xf] = -(DAT_00182630._15_1_ == '\0');
              auVar71[0] = -(bVar101 == s__00184760[0]);
              auVar71[1] = -(bVar110 == s__00184760[1]);
              auVar71[2] = -(bVar111 == s__00184760[2]);
              auVar71[3] = -(bVar112 == s__00184760[3]);
              auVar71[4] = -(bVar113 == s__00184760[4]);
              auVar71[5] = -(bVar114 == s__00184760[5]);
              auVar71[6] = -(bVar115 == s__00184760[6]);
              auVar71[7] = -(bVar11 == s__00184760[7]);
              auVar71[8] = -(s__00184760[8] == '\0');
              auVar71[9] = -(UNK_00184769 == '\0');
              auVar71[10] = -(UNK_0018476a == '\0');
              auVar71[0xb] = -(UNK_0018476b == '\0');
              auVar71[0xc] = -(UNK_0018476c == '\0');
              auVar71[0xd] = -(UNK_0018476d == '\0');
              auVar71[0xe] = -(UNK_0018476e == '\0');
              auVar71[0xf] = -(UNK_0018476f == '\0');
              auVar82 = ~auVar71 & (auVar121 | auVar105 ^ auVar58);
              auVar79._0_14_ = auVar82._0_14_;
              auVar79[0xe] = auVar82[7];
              auVar79[0xf] = auVar82[7];
              auVar78._14_2_ = auVar79._14_2_;
              auVar78._0_13_ = auVar82._0_13_;
              auVar78[0xd] = auVar82[6];
              auVar77._13_3_ = auVar78._13_3_;
              auVar77._0_12_ = auVar82._0_12_;
              auVar77[0xc] = auVar82[6];
              auVar76._12_4_ = auVar77._12_4_;
              auVar76._0_11_ = auVar82._0_11_;
              auVar76[0xb] = auVar82[5];
              auVar75._11_5_ = auVar76._11_5_;
              auVar75._0_10_ = auVar82._0_10_;
              auVar75[10] = auVar82[5];
              auVar74._10_6_ = auVar75._10_6_;
              auVar74._0_9_ = auVar82._0_9_;
              auVar74[9] = auVar82[4];
              auVar73._9_7_ = auVar74._9_7_;
              auVar73._0_8_ = auVar82._0_8_;
              auVar73[8] = auVar82[4];
              auVar72._8_8_ = auVar73._8_8_;
              auVar72[7] = auVar82[3];
              auVar72[6] = auVar82[3];
              auVar72[5] = auVar82[2];
              auVar72[4] = auVar82[2];
              auVar72[3] = auVar82[1];
              auVar72[2] = auVar82[1];
              auVar72[0] = auVar82[0];
              auVar72[1] = auVar72[0];
              auVar56 = auVar56 | auVar72;
              uVar49 = uVar49 + 8;
            } while (uVar53 != uVar49);
            auVar56 = psllw(auVar56,7);
            bVar54 = (((((((SUB161(auVar56 >> 7,0) & 1) != 0 || (SUB161(auVar56 >> 0x17,0) & 1) != 0
                          ) || (SUB161(auVar56 >> 0x27,0) & 1) != 0) ||
                        (SUB161(auVar56 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar56 >> 0x47,0) & 1) != 0) || (SUB161(auVar56 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar56 >> 0x67,0) & 1) != 0) ||
                     (SUB161(auVar56 >> 0x77,0) & 1) != 0;
            if (uVar47 == uVar53) goto LAB_00693888;
          }
LAB_00693860:
          do {
            bVar50 = *pbVar48;
            pbVar48 = pbVar48 + 1;
            bVar54 = (bool)(bVar54 | (bVar50 != 9 && (bVar50 == 0x7f || bVar50 < 0x20)));
          } while (pbVar48 != pbVar45 + uVar47);
        }
LAB_00693888:
        if (!bVar54) {
LAB_0069389b:
          (*(code *)PTR_copy_from_slice_0079a118)();
          local_130 = 0;
          local_190 = (ulonglong)uStack_12f << 8;
          auStack_1a0 = local_140;
          ppuStack_1b0 = local_150;
          local_1a8 = pcStack_148;
          local_1b8 = &local_128;
          uVar55 = <http[56314f485c23ccf6]::header::name::HdrName>::from_static::
                   <<&str_as_http[56314f485c23ccf6]::header::map::into_header_name::Sealed>::try_insert<http[56314f485c23ccf6]::header::value::HeaderValue>::_closure_0_,core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::option::Option<http[56314f485c23ccf6]::header::value::HeaderValue>,http[56314f485c23ccf6]::header::map::MaxSizeReached>>
                             (local_1e0,"x-request-id",0xc,&local_1b8);
          if (local_1c0 != -1) {
            if (local_1c0 != '\x02') {
              (**(code **)(local_1e0[0] + 0x20))(uVar55,local_1d0);
            }
            goto LAB_0069392c;
          }
          goto LAB_00694036;
        }
        local_130 = 2;
LAB_0069392c:
        bVar50 = *(byte *)(param_3 + 0x3b);
        goto joined_r0x00693934;
      }
      bVar50 = *(byte *)(param_3 + 0x3b);
joined_r0x00693934:
      if ((bVar50 < 2) || (*(short *)(pcVar2 + 0x170) != 0)) {
LAB_00693941:
        local_1b8 = &local_128;
        ppuStack_1b0 = &PTR_static_clone_007913d8;
        local_1a8 = "1";
        auStack_1a0 = ZEXT816(1);
        local_190 = local_190 & 0xffffffffffffff00;
        uVar55 = <http[56314f485c23ccf6]::header::name::HdrName>::from_static::
                 <<&str_as_http[56314f485c23ccf6]::header::map::into_header_name::Sealed>::try_insert<http[56314f485c23ccf6]::header::value::HeaderValue>::_closure_0_,core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::option::Option<http[56314f485c23ccf6]::header::value::HeaderValue>,http[56314f485c23ccf6]::header::map::MaxSizeReached>>
                           (local_1e0,"x-craggemini-upstream-error",0x1b,&local_1b8);
        if (local_1c0 == -1) goto LAB_00694036;
        if (local_1c0 != '\x02') {
          (**(code **)(local_1e0[0] + 0x20))(uVar55,local_1d0);
        }
      }
    }
    uVar47 = *(ulonglong *)(&DAT_001a5520 + (ulonglong)bVar50 * 8);
    uVar49 = 0;
    do {
      cVar44 = (&PTR_s_upstream_http_00791880)[bVar50][uVar49];
      if (cVar44 != '\t' && 0x5e < (byte)(cVar44 - 0x20U)) {
        (*(code *)PTR_panic_fmt_007991a8)
                  (uVar47,&
                          PTR_anon_8020c0704285a2d1289b183da7bc254f_0_llvm_553902125068371515_00791400
                  );
        goto LAB_00694082;
      }
      uVar49 = uVar49 + 1;
    } while (uVar47 != uVar49);
    local_1b8 = &local_128;
    ppuStack_1b0 = &PTR_static_clone_007913d8;
    auStack_1a0._8_8_ = 0;
    auStack_1a0._0_8_ = uVar47;
    local_190 = local_190 & 0xffffffffffffff00;
    local_1a8 = (&PTR_s_upstream_http_00791880)[bVar50];
    uVar55 = <http[56314f485c23ccf6]::header::name::HdrName>::from_static::
             <<&str_as_http[56314f485c23ccf6]::header::map::into_header_name::Sealed>::try_insert<http[56314f485c23ccf6]::header::value::HeaderValue>::_closure_0_,core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::option::Option<http[56314f485c23ccf6]::header::value::HeaderValue>,http[56314f485c23ccf6]::header::map::MaxSizeReached>>
                       (local_1e0,"x-craggemini-error-sourceresp_errorparam",0x19,&local_1b8);
    if (local_1c0 != -1) {
      if (local_1c0 != '\x02') {
        (**(code **)(local_1e0[0] + 0x20))(uVar55,local_1d0);
      }
      if ((pcVar2 != (char *)0x0) && (*(longlong *)(pcVar2 + 0x100) != -1)) {
        pbVar45 = *(byte **)(pcVar2 + 0x108);
        uVar47 = *(ulonglong *)(pcVar2 + 0x110);
        pbVar48 = pbVar45;
        do {
          if (pbVar48 == pbVar45 + uVar47) {
            if (uVar47 == 0) goto LAB_00693d2e;
            if (uVar47 < 8) {
              bVar54 = false;
              pbVar48 = pbVar45;
              goto LAB_00693d00;
            }
            if (uVar47 < 0x20) {
              uVar49 = 0;
              bVar54 = false;
              goto LAB_00693c69;
            }
            uVar49 = uVar47 & 0xffffffffffffffe0;
            auVar56 = (undefined1  [16])0x0;
            uVar53 = 0;
            auVar82 = (undefined1  [16])0x0;
            do {
              pbVar48 = pbVar45 + uVar53;
              bVar12 = *pbVar48;
              bVar13 = pbVar48[1];
              bVar14 = pbVar48[2];
              bVar15 = pbVar48[3];
              bVar16 = pbVar48[4];
              bVar17 = pbVar48[5];
              bVar18 = pbVar48[6];
              bVar19 = pbVar48[7];
              bVar20 = pbVar48[8];
              bVar21 = pbVar48[9];
              bVar22 = pbVar48[10];
              bVar23 = pbVar48[0xb];
              bVar24 = pbVar48[0xc];
              bVar25 = pbVar48[0xd];
              bVar26 = pbVar48[0xe];
              bVar27 = pbVar48[0xf];
              pbVar48 = pbVar45 + uVar53 + 0x10;
              bVar28 = *pbVar48;
              bVar29 = pbVar48[1];
              bVar30 = pbVar48[2];
              bVar31 = pbVar48[3];
              bVar32 = pbVar48[4];
              bVar33 = pbVar48[5];
              bVar34 = pbVar48[6];
              bVar35 = pbVar48[7];
              bVar36 = pbVar48[8];
              bVar37 = pbVar48[9];
              bVar38 = pbVar48[10];
              bVar39 = pbVar48[0xb];
              bVar40 = pbVar48[0xc];
              bVar41 = pbVar48[0xd];
              bVar42 = pbVar48[0xe];
              bVar43 = pbVar48[0xf];
              bVar50 = DAT_00184700;
              bVar4 = DAT_00184700._1_1_;
              bVar5 = DAT_00184700._2_1_;
              bVar6 = DAT_00184700._3_1_;
              bVar7 = DAT_00184700._4_1_;
              bVar8 = DAT_00184700._5_1_;
              bVar9 = DAT_00184700._6_1_;
              bVar10 = DAT_00184700._7_1_;
              bVar11 = DAT_00184700._8_1_;
              bVar101 = DAT_00184700._9_1_;
              bVar110 = DAT_00184700._10_1_;
              bVar111 = DAT_00184700._11_1_;
              bVar112 = DAT_00184700._12_1_;
              bVar113 = DAT_00184700._13_1_;
              bVar114 = DAT_00184700._14_1_;
              bVar115 = DAT_00184700._15_1_;
              auVar122[0] = -((byte)((bVar50 < bVar12) * bVar50 | (bVar50 >= bVar12) * bVar12) ==
                             bVar12);
              auVar122[1] = -((byte)((bVar4 < bVar13) * bVar4 | (bVar4 >= bVar13) * bVar13) ==
                             bVar13);
              auVar122[2] = -((byte)((bVar5 < bVar14) * bVar5 | (bVar5 >= bVar14) * bVar14) ==
                             bVar14);
              auVar122[3] = -((byte)((bVar6 < bVar15) * bVar6 | (bVar6 >= bVar15) * bVar15) ==
                             bVar15);
              auVar122[4] = -((byte)((bVar7 < bVar16) * bVar7 | (bVar7 >= bVar16) * bVar16) ==
                             bVar16);
              auVar122[5] = -((byte)((bVar8 < bVar17) * bVar8 | (bVar8 >= bVar17) * bVar17) ==
                             bVar17);
              auVar122[6] = -((byte)((bVar9 < bVar18) * bVar9 | (bVar9 >= bVar18) * bVar18) ==
                             bVar18);
              auVar122[7] = -((byte)((bVar10 < bVar19) * bVar10 | (bVar10 >= bVar19) * bVar19) ==
                             bVar19);
              auVar122[8] = -((byte)((bVar11 < bVar20) * bVar11 | (bVar11 >= bVar20) * bVar20) ==
                             bVar20);
              auVar122[9] = -((byte)((bVar101 < bVar21) * bVar101 | (bVar101 >= bVar21) * bVar21) ==
                             bVar21);
              auVar122[10] = -((byte)((bVar110 < bVar22) * bVar110 | (bVar110 >= bVar22) * bVar22)
                              == bVar22);
              auVar122[0xb] =
                   -((byte)((bVar111 < bVar23) * bVar111 | (bVar111 >= bVar23) * bVar23) == bVar23);
              auVar122[0xc] =
                   -((byte)((bVar112 < bVar24) * bVar112 | (bVar112 >= bVar24) * bVar24) == bVar24);
              auVar122[0xd] =
                   -((byte)((bVar113 < bVar25) * bVar113 | (bVar113 >= bVar25) * bVar25) == bVar25);
              auVar122[0xe] =
                   -((byte)((bVar114 < bVar26) * bVar114 | (bVar114 >= bVar26) * bVar26) == bVar26);
              auVar122[0xf] =
                   -((byte)((bVar115 < bVar27) * bVar115 | (bVar115 >= bVar27) * bVar27) == bVar27);
              auVar130[0] = -((byte)((bVar50 < bVar28) * bVar50 | (bVar50 >= bVar28) * bVar28) ==
                             bVar28);
              auVar130[1] = -((byte)((bVar4 < bVar29) * bVar4 | (bVar4 >= bVar29) * bVar29) ==
                             bVar29);
              auVar130[2] = -((byte)((bVar5 < bVar30) * bVar5 | (bVar5 >= bVar30) * bVar30) ==
                             bVar30);
              auVar130[3] = -((byte)((bVar6 < bVar31) * bVar6 | (bVar6 >= bVar31) * bVar31) ==
                             bVar31);
              auVar130[4] = -((byte)((bVar7 < bVar32) * bVar7 | (bVar7 >= bVar32) * bVar32) ==
                             bVar32);
              auVar130[5] = -((byte)((bVar8 < bVar33) * bVar8 | (bVar8 >= bVar33) * bVar33) ==
                             bVar33);
              auVar130[6] = -((byte)((bVar9 < bVar34) * bVar9 | (bVar9 >= bVar34) * bVar34) ==
                             bVar34);
              auVar130[7] = -((byte)((bVar10 < bVar35) * bVar10 | (bVar10 >= bVar35) * bVar35) ==
                             bVar35);
              auVar130[8] = -((byte)((bVar11 < bVar36) * bVar11 | (bVar11 >= bVar36) * bVar36) ==
                             bVar36);
              auVar130[9] = -((byte)((bVar101 < bVar37) * bVar101 | (bVar101 >= bVar37) * bVar37) ==
                             bVar37);
              auVar130[10] = -((byte)((bVar110 < bVar38) * bVar110 | (bVar110 >= bVar38) * bVar38)
                              == bVar38);
              auVar130[0xb] =
                   -((byte)((bVar111 < bVar39) * bVar111 | (bVar111 >= bVar39) * bVar39) == bVar39);
              auVar130[0xc] =
                   -((byte)((bVar112 < bVar40) * bVar112 | (bVar112 >= bVar40) * bVar40) == bVar40);
              auVar130[0xd] =
                   -((byte)((bVar113 < bVar41) * bVar113 | (bVar113 >= bVar41) * bVar41) == bVar41);
              auVar130[0xe] =
                   -((byte)((bVar114 < bVar42) * bVar114 | (bVar114 >= bVar42) * bVar42) == bVar42);
              auVar130[0xf] =
                   -((byte)((bVar115 < bVar43) * bVar115 | (bVar115 >= bVar43) * bVar43) == bVar43);
              auVar134[0] = -(bVar12 == DAT_00182620);
              auVar134[1] = -(bVar13 == DAT_00182620._1_1_);
              auVar134[2] = -(bVar14 == DAT_00182620._2_1_);
              auVar134[3] = -(bVar15 == DAT_00182620._3_1_);
              auVar134[4] = -(bVar16 == DAT_00182620._4_1_);
              auVar134[5] = -(bVar17 == DAT_00182620._5_1_);
              auVar134[6] = -(bVar18 == DAT_00182620._6_1_);
              auVar134[7] = -(bVar19 == DAT_00182620._7_1_);
              auVar134[8] = -(bVar20 == DAT_00182620._8_1_);
              auVar134[9] = -(bVar21 == DAT_00182620._9_1_);
              auVar134[10] = -(bVar22 == DAT_00182620._10_1_);
              auVar134[0xb] = -(bVar23 == DAT_00182620._11_1_);
              auVar134[0xc] = -(bVar24 == DAT_00182620._12_1_);
              auVar134[0xd] = -(bVar25 == DAT_00182620._13_1_);
              auVar134[0xe] = -(bVar26 == DAT_00182620._14_1_);
              auVar134[0xf] = -(bVar27 == DAT_00182620._15_1_);
              auVar123[0] = -(bVar28 == DAT_00182620);
              auVar123[1] = -(bVar29 == DAT_00182620._1_1_);
              auVar123[2] = -(bVar30 == DAT_00182620._2_1_);
              auVar123[3] = -(bVar31 == DAT_00182620._3_1_);
              auVar123[4] = -(bVar32 == DAT_00182620._4_1_);
              auVar123[5] = -(bVar33 == DAT_00182620._5_1_);
              auVar123[6] = -(bVar34 == DAT_00182620._6_1_);
              auVar123[7] = -(bVar35 == DAT_00182620._7_1_);
              auVar123[8] = -(bVar36 == DAT_00182620._8_1_);
              auVar123[9] = -(bVar37 == DAT_00182620._9_1_);
              auVar123[10] = -(bVar38 == DAT_00182620._10_1_);
              auVar123[0xb] = -(bVar39 == DAT_00182620._11_1_);
              auVar123[0xc] = -(bVar40 == DAT_00182620._12_1_);
              auVar123[0xd] = -(bVar41 == DAT_00182620._13_1_);
              auVar123[0xe] = -(bVar42 == DAT_00182620._14_1_);
              auVar123[0xf] = -(bVar43 == DAT_00182620._15_1_);
              auVar80[0] = -(bVar12 == DAT_00183900);
              auVar80[1] = -(bVar13 == UNK_00183901);
              auVar80[2] = -(bVar14 == UNK_00183902);
              auVar80[3] = -(bVar15 == UNK_00183903);
              auVar80[4] = -(bVar16 == UNK_00183904);
              auVar80[5] = -(bVar17 == UNK_00183905);
              auVar80[6] = -(bVar18 == UNK_00183906);
              auVar80[7] = -(bVar19 == UNK_00183907);
              auVar80[8] = -(bVar20 == UNK_00183908);
              auVar80[9] = -(bVar21 == UNK_00183909);
              auVar80[10] = -(bVar22 == UNK_0018390a);
              auVar80[0xb] = -(bVar23 == UNK_0018390b);
              auVar80[0xc] = -(bVar24 == UNK_0018390c);
              auVar80[0xd] = -(bVar25 == UNK_0018390d);
              auVar80[0xe] = -(bVar26 == UNK_0018390e);
              auVar80[0xf] = -(bVar27 == UNK_0018390f);
              auVar82 = auVar82 | ~auVar80 & (auVar134 | auVar122);
              auVar106[0] = -(bVar28 == DAT_00183900);
              auVar106[1] = -(bVar29 == UNK_00183901);
              auVar106[2] = -(bVar30 == UNK_00183902);
              auVar106[3] = -(bVar31 == UNK_00183903);
              auVar106[4] = -(bVar32 == UNK_00183904);
              auVar106[5] = -(bVar33 == UNK_00183905);
              auVar106[6] = -(bVar34 == UNK_00183906);
              auVar106[7] = -(bVar35 == UNK_00183907);
              auVar106[8] = -(bVar36 == UNK_00183908);
              auVar106[9] = -(bVar37 == UNK_00183909);
              auVar106[10] = -(bVar38 == UNK_0018390a);
              auVar106[0xb] = -(bVar39 == UNK_0018390b);
              auVar106[0xc] = -(bVar40 == UNK_0018390c);
              auVar106[0xd] = -(bVar41 == UNK_0018390d);
              auVar106[0xe] = -(bVar42 == UNK_0018390e);
              auVar106[0xf] = -(bVar43 == UNK_0018390f);
              auVar56 = auVar56 | ~auVar106 & (auVar123 | auVar130);
              uVar53 = uVar53 + 0x20;
            } while (uVar49 != uVar53);
            auVar56 = psllw(auVar56 | auVar82,7);
            bVar54 = (((((((((((((((SUB161(auVar56 >> 7,0) & 1) != 0 ||
                                  (SUB161(auVar56 >> 0xf,0) & 1) != 0) ||
                                 (SUB161(auVar56 >> 0x17,0) & 1) != 0) ||
                                (SUB161(auVar56 >> 0x1f,0) & 1) != 0) ||
                               (SUB161(auVar56 >> 0x27,0) & 1) != 0) ||
                              (SUB161(auVar56 >> 0x2f,0) & 1) != 0) ||
                             (SUB161(auVar56 >> 0x37,0) & 1) != 0) ||
                            (SUB161(auVar56 >> 0x3f,0) & 1) != 0) ||
                           (SUB161(auVar56 >> 0x47,0) & 1) != 0) ||
                          (SUB161(auVar56 >> 0x4f,0) & 1) != 0) ||
                         (SUB161(auVar56 >> 0x57,0) & 1) != 0) ||
                        (SUB161(auVar56 >> 0x5f,0) & 1) != 0) ||
                       (SUB161(auVar56 >> 0x67,0) & 1) != 0) || (SUB161(auVar56 >> 0x6f,0) & 1) != 0
                      ) || (SUB161(auVar56 >> 0x77,0) & 1) != 0) || auVar56[0xf] < '\0';
            if (uVar47 != uVar49) {
              if ((uVar47 & 0x18) == 0) {
                pbVar48 = pbVar45 + uVar49;
              }
              else {
LAB_00693c69:
                uVar53 = uVar47 & 0xfffffffffffffff8;
                pbVar48 = pbVar45 + uVar53;
                auVar56 = ZEXT116(bVar54);
                auVar59._8_4_ = 0xffffffff;
                auVar59._0_8_ = 0xffffffffffffffff;
                auVar59._12_4_ = 0xffffffff;
                do {
                  uVar55 = *(undefined8 *)(pbVar45 + uVar49);
                  bVar50 = s__001846a0[0];
                  bVar101 = (byte)uVar55;
                  bVar4 = s__001846a0[1];
                  bVar110 = (byte)((ulonglong)uVar55 >> 8);
                  bVar5 = s__001846a0[2];
                  bVar111 = (byte)((ulonglong)uVar55 >> 0x10);
                  bVar6 = s__001846a0[3];
                  bVar112 = (byte)((ulonglong)uVar55 >> 0x18);
                  bVar7 = s__001846a0[4];
                  bVar113 = (byte)((ulonglong)uVar55 >> 0x20);
                  bVar8 = s__001846a0[5];
                  bVar114 = (byte)((ulonglong)uVar55 >> 0x28);
                  bVar9 = s__001846a0[6];
                  bVar115 = (byte)((ulonglong)uVar55 >> 0x30);
                  bVar11 = (byte)((ulonglong)uVar55 >> 0x38);
                  bVar10 = s__001846a0[7];
                  auVar107[0] = -((byte)((bVar101 < bVar50) * bVar50 | (bVar101 >= bVar50) * bVar101
                                        ) == bVar101);
                  auVar107[1] = -((byte)((bVar110 < bVar4) * bVar4 | (bVar110 >= bVar4) * bVar110)
                                 == bVar110);
                  auVar107[2] = -((byte)((bVar111 < bVar5) * bVar5 | (bVar111 >= bVar5) * bVar111)
                                 == bVar111);
                  auVar107[3] = -((byte)((bVar112 < bVar6) * bVar6 | (bVar112 >= bVar6) * bVar112)
                                 == bVar112);
                  auVar107[4] = -((byte)((bVar113 < bVar7) * bVar7 | (bVar113 >= bVar7) * bVar113)
                                 == bVar113);
                  auVar107[5] = -((byte)((bVar114 < bVar8) * bVar8 | (bVar114 >= bVar8) * bVar114)
                                 == bVar114);
                  auVar107[6] = -((byte)((bVar115 < bVar9) * bVar9 | (bVar115 >= bVar9) * bVar115)
                                 == bVar115);
                  auVar107[7] = -((byte)((bVar11 < bVar10) * bVar10 | (bVar11 >= bVar10) * bVar11)
                                 == bVar11);
                  auVar107[8] = -((char)((s__001846a0[8] != '\0') * s__001846a0[8]) == '\0');
                  auVar107[9] = -((char)((s__001846a0[9] != '\0') * s__001846a0[9]) == '\0');
                  auVar107[10] = -((char)((s__001846a0[10] != '\0') * s__001846a0[10]) == '\0');
                  auVar107[0xb] = -((char)((s__001846a0[0xb] != '\0') * s__001846a0[0xb]) == '\0');
                  auVar107[0xc] = -((char)((s__001846a0[0xc] != '\0') * s__001846a0[0xc]) == '\0');
                  auVar107[0xd] = -((char)((s__001846a0[0xd] != '\0') * s__001846a0[0xd]) == '\0');
                  auVar107[0xe] = -((char)((s__001846a0[0xe] != '\0') * s__001846a0[0xe]) == '\0');
                  auVar107[0xf] = -((char)((s__001846a0[0xf] != '\0') * s__001846a0[0xf]) == '\0');
                  auVar124[0] = -(bVar101 == DAT_00182630);
                  auVar124[1] = -(bVar110 == DAT_00182630._1_1_);
                  auVar124[2] = -(bVar111 == DAT_00182630._2_1_);
                  auVar124[3] = -(bVar112 == DAT_00182630._3_1_);
                  auVar124[4] = -(bVar113 == DAT_00182630._4_1_);
                  auVar124[5] = -(bVar114 == DAT_00182630._5_1_);
                  auVar124[6] = -(bVar115 == DAT_00182630._6_1_);
                  auVar124[7] = -(bVar11 == DAT_00182630._7_1_);
                  auVar124[8] = -(DAT_00182630._8_1_ == '\0');
                  auVar124[9] = -(DAT_00182630._9_1_ == '\0');
                  auVar124[10] = -(DAT_00182630._10_1_ == '\0');
                  auVar124[0xb] = -(DAT_00182630._11_1_ == '\0');
                  auVar124[0xc] = -(DAT_00182630._12_1_ == '\0');
                  auVar124[0xd] = -(DAT_00182630._13_1_ == '\0');
                  auVar124[0xe] = -(DAT_00182630._14_1_ == '\0');
                  auVar124[0xf] = -(DAT_00182630._15_1_ == '\0');
                  auVar81[0] = -(bVar101 == s__00184760[0]);
                  auVar81[1] = -(bVar110 == s__00184760[1]);
                  auVar81[2] = -(bVar111 == s__00184760[2]);
                  auVar81[3] = -(bVar112 == s__00184760[3]);
                  auVar81[4] = -(bVar113 == s__00184760[4]);
                  auVar81[5] = -(bVar114 == s__00184760[5]);
                  auVar81[6] = -(bVar115 == s__00184760[6]);
                  auVar81[7] = -(bVar11 == s__00184760[7]);
                  auVar81[8] = -(s__00184760[8] == '\0');
                  auVar81[9] = -(UNK_00184769 == '\0');
                  auVar81[10] = -(UNK_0018476a == '\0');
                  auVar81[0xb] = -(UNK_0018476b == '\0');
                  auVar81[0xc] = -(UNK_0018476c == '\0');
                  auVar81[0xd] = -(UNK_0018476d == '\0');
                  auVar81[0xe] = -(UNK_0018476e == '\0');
                  auVar81[0xf] = -(UNK_0018476f == '\0');
                  auVar82 = ~auVar81 & (auVar124 | auVar107 ^ auVar59);
                  auVar90._0_14_ = auVar82._0_14_;
                  auVar90[0xe] = auVar82[7];
                  auVar90[0xf] = auVar82[7];
                  auVar89._14_2_ = auVar90._14_2_;
                  auVar89._0_13_ = auVar82._0_13_;
                  auVar89[0xd] = auVar82[6];
                  auVar88._13_3_ = auVar89._13_3_;
                  auVar88._0_12_ = auVar82._0_12_;
                  auVar88[0xc] = auVar82[6];
                  auVar87._12_4_ = auVar88._12_4_;
                  auVar87._0_11_ = auVar82._0_11_;
                  auVar87[0xb] = auVar82[5];
                  auVar86._11_5_ = auVar87._11_5_;
                  auVar86._0_10_ = auVar82._0_10_;
                  auVar86[10] = auVar82[5];
                  auVar85._10_6_ = auVar86._10_6_;
                  auVar85._0_9_ = auVar82._0_9_;
                  auVar85[9] = auVar82[4];
                  auVar84._9_7_ = auVar85._9_7_;
                  auVar84._0_8_ = auVar82._0_8_;
                  auVar84[8] = auVar82[4];
                  auVar83._8_8_ = auVar84._8_8_;
                  auVar83[7] = auVar82[3];
                  auVar83[6] = auVar82[3];
                  auVar83[5] = auVar82[2];
                  auVar83[4] = auVar82[2];
                  auVar83[3] = auVar82[1];
                  auVar83[2] = auVar82[1];
                  auVar83[0] = auVar82[0];
                  auVar83[1] = auVar83[0];
                  auVar56 = auVar56 | auVar83;
                  uVar49 = uVar49 + 8;
                } while (uVar53 != uVar49);
                auVar56 = psllw(auVar56,7);
                bVar54 = (((((((SUB161(auVar56 >> 7,0) & 1) != 0 ||
                              (SUB161(auVar56 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar56 >> 0x27,0) & 1) != 0) ||
                            (SUB161(auVar56 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar56 >> 0x47,0) & 1) != 0) ||
                          (SUB161(auVar56 >> 0x57,0) & 1) != 0) ||
                         (SUB161(auVar56 >> 0x67,0) & 1) != 0) ||
                         (SUB161(auVar56 >> 0x77,0) & 1) != 0;
                if (uVar47 == uVar53) goto LAB_00693d28;
              }
LAB_00693d00:
              do {
                bVar50 = *pbVar48;
                pbVar48 = pbVar48 + 1;
                bVar54 = (bool)(bVar54 | (bVar50 != 9 && (bVar50 == 0x7f || bVar50 < 0x20)));
              } while (pbVar48 != pbVar45 + uVar47);
            }
LAB_00693d28:
            if (bVar54) break;
LAB_00693d2e:
            (*(code *)PTR_copy_from_slice_0079a118)();
            local_38 = 0;
            uVar55 = <http[56314f485c23ccf6]::header::map::HeaderMap>::try_insert2::
                     <http[56314f485c23ccf6]::header::name::HeaderName>
                               (&local_1b8,&local_128,"",local_58);
            if (auStack_1a0[8] != -1) {
              if (auStack_1a0[8] != '\x02') {
                (*(code *)local_1b8[4])(uVar55,local_1a8);
              }
              break;
            }
            goto LAB_00694036;
          }
          bVar50 = *pbVar48;
          uVar52 = (uint)bVar50;
          uVar46 = (uint)bVar50;
          if (-1 < (char)bVar50) {
            pbVar48 = pbVar48 + 1;
            if (uVar46 != 10) goto LAB_00693b70;
            break;
          }
          pbVar1 = pbVar48 + 1;
          if (bVar50 < 0xe0) {
            pbVar48 = pbVar48 + 2;
            uVar52 = (uVar46 & 0x1f) << 6 | *pbVar1 & 0x3f;
          }
          else {
            uVar52 = pbVar48[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
            if (bVar50 < 0xf0) {
              pbVar48 = pbVar48 + 3;
              uVar52 = uVar52 | (uVar46 & 0x1f) << 0xc;
            }
            else {
              pbVar1 = pbVar48 + 3;
              pbVar48 = pbVar48 + 4;
              uVar52 = *pbVar1 & 0x3f | uVar52 << 6 | (uVar46 & 7) << 0x12;
            }
          }
          if (uVar52 == 10) break;
LAB_00693b70:
        } while (uVar52 != 0xd);
      }
      param_1[0xe] = local_b8;
      param_1[0xf] = uStack_b0;
      param_1[0xc] = local_c8;
      param_1[0xd] = uStack_c0;
      param_1[10] = local_d8;
      param_1[0xb] = uStack_d0;
      param_1[8] = local_e8;
      param_1[9] = uStack_e0;
      param_1[6] = local_f8;
      param_1[7] = uStack_f0;
      param_1[4] = local_108;
      param_1[5] = uStack_100;
      param_1[2] = local_118;
      param_1[3] = uStack_110;
      *param_1 = local_128;
      param_1[1] = uStack_120;
      return param_1;
    }
  }
LAB_00694036:
  (*(code *)PTR_unwrap_failed_00799028)
            (anon_d3057478e380898db632effa827bd31f_348_llvm_2674179329317868992,&local_1e1,
             &anon_d3057478e380898db632effa827bd31f_16_llvm_2674179329317868992);
LAB_00694082:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}


