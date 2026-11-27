// 0051a520 <serde_json[dc3825464c436029]::error::Error>

/* <<craggemini_core[66f3c71560d70857]::resume::ConversationRecordV2 as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_str::<serde_json[dc3825464c436029]::error::Error>
    */

void __rustcall
<<craggemini_core[66f3c71560d70857]::resume::ConversationRecordV2_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_str::<serde_json[dc3825464c436029]::error::Error>
          (undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  switch(param_3) {
  case 5:
    if (*(char *)((longlong)param_2 + 4) == 'l' && (int)*param_2 == 0x65646f6d) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    if (*(char *)((longlong)param_2 + 4) == 'n' && (int)*param_2 == 0x69616863) {
      param_1[1] = 0xe;
      *param_1 = 0;
      return;
    }
    break;
  case 6:
    if (*(short *)((longlong)param_2 + 4) == 0x7375 && (int)*param_2 == 0x74617473) {
      param_1[1] = 10;
      *param_1 = 0;
      return;
    }
    break;
  case 7:
    if (*(int *)((longlong)param_2 + 3) == 0x73747365 && (int)*param_2 == 0x65676964) {
      param_1[1] = 0xd;
      *param_1 = 0;
      return;
    }
    if (*(int *)((longlong)param_2 + 3) == 0x73726f68 && (int)*param_2 == 0x68636e61) {
      param_1[1] = 0xf;
      *param_1 = 0;
      return;
    }
    break;
  case 9:
    if ((char)param_2[1] == 's' && *param_2 == 0x746e656761627573) {
      param_1[1] = 0x13;
      *param_1 = 0;
      return;
    }
    break;
  case 10:
    if ((short)param_2[1] == 0x6469 && *param_2 == 0x5f746e756f636361) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    if ((short)param_2[1] == 0x7461 && *param_2 == 0x5f64657461657263) {
      param_1[1] = 6;
      *param_1 = 0;
      return;
    }
    if ((short)param_2[1] == 0x7461 && *param_2 == 0x5f64657461647075) {
      param_1[1] = 7;
      *param_1 = 0;
      return;
    }
    if ((short)param_2[1] == 0x746e && *param_2 == 0x756f635f6e727574) {
      param_1[1] = 9;
      *param_1 = 0;
      return;
    }
    if ((short)param_2[1] == 0x6573 && *param_2 == 0x61625f6e69616863) {
      param_1[1] = 0xc;
      *param_1 = 0;
      return;
    }
    if ((short)param_2[1] == 0x7475 && *param_2 == 0x635f656d75736572) {
      param_1[1] = 0x11;
      *param_1 = 0;
      return;
    }
    break;
  case 0xb:
    if (*(longlong *)((longlong)param_2 + 3) == 0x746e65735f74706d && *param_2 == 0x735f74706d6f7270
       ) {
      param_1[1] = 0x15;
      *param_1 = 0;
      return;
    }
    break;
  case 0xc:
    if ((int)param_2[1] == 0x736d5f64 && *param_2 == 0x6573755f7473616c) {
      param_1[1] = 8;
      *param_1 = 0;
      return;
    }
    if ((int)param_2[1] == 0x6e6f6974 && *param_2 == 0x7075727265746e69) {
      param_1[1] = 0x17;
      *param_1 = 0;
      return;
    }
    break;
  case 0xd:
    if (*(longlong *)((longlong)param_2 + 5) == 0x74657366666f5f74 && *param_2 == 0x6f5f747365676964
       ) {
      param_1[1] = 0xb;
      *param_1 = 0;
      return;
    }
    break;
  case 0xe:
    if (*(longlong *)((longlong)param_2 + 6) == 0x7473656769645f67 && *param_2 == 0x5f676e69646e6962
       ) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
    if (*(longlong *)((longlong)param_2 + 6) == 0x64695f6e7275745f && *param_2 == 0x745f657669746361
       ) {
      param_1[1] = 0x14;
      *param_1 = 0;
      return;
    }
    break;
  case 0xf:
    if (*(longlong *)((longlong)param_2 + 7) == 0x64695f6e6f697461 && *param_2 == 0x61737265766e6f63
       ) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    break;
  case 0x11:
    auVar2[0] = -((char)*param_2 == DAT_00182bc0);
    auVar2[1] = -(*(char *)((longlong)param_2 + 1) == UNK_00182bc1);
    auVar2[2] = -(*(char *)((longlong)param_2 + 2) == UNK_00182bc2);
    auVar2[3] = -(*(char *)((longlong)param_2 + 3) == UNK_00182bc3);
    auVar2[4] = -(*(char *)((longlong)param_2 + 4) == UNK_00182bc4);
    auVar2[5] = -(*(char *)((longlong)param_2 + 5) == UNK_00182bc5);
    auVar2[6] = -(*(char *)((longlong)param_2 + 6) == UNK_00182bc6);
    auVar2[7] = -(*(char *)((longlong)param_2 + 7) == UNK_00182bc7);
    auVar2[8] = -((char)param_2[1] == UNK_00182bc8);
    auVar2[9] = -(*(char *)((longlong)param_2 + 9) == UNK_00182bc9);
    auVar2[10] = -(*(char *)((longlong)param_2 + 10) == UNK_00182bca);
    auVar2[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_00182bcb);
    auVar2[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_00182bcc);
    auVar2[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_00182bcd);
    auVar2[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_00182bce);
    auVar2[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_00182bcf);
    auVar8[0] = -((char)param_2[2] == s_d_00182a90[0]);
    auVar8[1] = -(s_d_00182a90[1] == '\0');
    auVar8[2] = -(s_d_00182a90[2] == '\0');
    auVar8[3] = -(s_d_00182a90[3] == '\0');
    auVar8[4] = -(UNK_00182a94 == '\0');
    auVar8[5] = -(UNK_00182a95 == '\0');
    auVar8[6] = -(UNK_00182a96 == '\0');
    auVar8[7] = -(UNK_00182a97 == '\0');
    auVar8[8] = -(UNK_00182a98 == '\0');
    auVar8[9] = -(UNK_00182a99 == '\0');
    auVar8[10] = -(UNK_00182a9a == '\0');
    auVar8[0xb] = -(UNK_00182a9b == '\0');
    auVar8[0xc] = -(UNK_00182a9c == '\0');
    auVar8[0xd] = -(UNK_00182a9d == '\0');
    auVar8[0xe] = -(UNK_00182a9e == '\0');
    auVar8[0xf] = -(UNK_00182a9f == '\0');
    auVar8 = auVar8 & auVar2;
    if ((ushort)((ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar8[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
    auVar3[0] = -((char)*param_2 == DAT_001835d0);
    auVar3[1] = -(*(char *)((longlong)param_2 + 1) == UNK_001835d1);
    auVar3[2] = -(*(char *)((longlong)param_2 + 2) == UNK_001835d2);
    auVar3[3] = -(*(char *)((longlong)param_2 + 3) == UNK_001835d3);
    auVar3[4] = -(*(char *)((longlong)param_2 + 4) == UNK_001835d4);
    auVar3[5] = -(*(char *)((longlong)param_2 + 5) == UNK_001835d5);
    auVar3[6] = -(*(char *)((longlong)param_2 + 6) == UNK_001835d6);
    auVar3[7] = -(*(char *)((longlong)param_2 + 7) == UNK_001835d7);
    auVar3[8] = -((char)param_2[1] == UNK_001835d8);
    auVar3[9] = -(*(char *)((longlong)param_2 + 9) == UNK_001835d9);
    auVar3[10] = -(*(char *)((longlong)param_2 + 10) == UNK_001835da);
    auVar3[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_001835db);
    auVar3[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_001835dc);
    auVar3[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_001835dd);
    auVar3[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_001835de);
    auVar3[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_001835df);
    auVar9[0] = -((char)param_2[2] == DAT_00184770);
    auVar9[1] = -(UNK_00184771 == '\0');
    auVar9[2] = -(UNK_00184772 == '\0');
    auVar9[3] = -(UNK_00184773 == '\0');
    auVar9[4] = -(UNK_00184774 == '\0');
    auVar9[5] = -(UNK_00184775 == '\0');
    auVar9[6] = -(UNK_00184776 == '\0');
    auVar9[7] = -(UNK_00184777 == '\0');
    auVar9[8] = -(UNK_00184778 == '\0');
    auVar9[9] = -(UNK_00184779 == '\0');
    auVar9[10] = -(UNK_0018477a == '\0');
    auVar9[0xb] = -(UNK_0018477b == '\0');
    auVar9[0xc] = -(UNK_0018477c == '\0');
    auVar9[0xd] = -(UNK_0018477d == '\0');
    auVar9[0xe] = -(UNK_0018477e == '\0');
    auVar9[0xf] = -(UNK_0018477f == '\0');
    auVar9 = auVar9 & auVar3;
    if ((ushort)((ushort)(SUB161(auVar9 >> 7,0) & 1) | (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar9[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 0x12;
      *param_1 = 0;
      return;
    }
    auVar4[0] = -((char)*param_2 == s_deterministic_ke_00184460[0]);
    auVar4[1] = -(*(char *)((longlong)param_2 + 1) == s_deterministic_ke_00184460[1]);
    auVar4[2] = -(*(char *)((longlong)param_2 + 2) == s_deterministic_ke_00184460[2]);
    auVar4[3] = -(*(char *)((longlong)param_2 + 3) == s_deterministic_ke_00184460[3]);
    auVar4[4] = -(*(char *)((longlong)param_2 + 4) == s_deterministic_ke_00184460[4]);
    auVar4[5] = -(*(char *)((longlong)param_2 + 5) == s_deterministic_ke_00184460[5]);
    auVar4[6] = -(*(char *)((longlong)param_2 + 6) == s_deterministic_ke_00184460[6]);
    auVar4[7] = -(*(char *)((longlong)param_2 + 7) == s_deterministic_ke_00184460[7]);
    auVar4[8] = -((char)param_2[1] == s_deterministic_ke_00184460[8]);
    auVar4[9] = -(*(char *)((longlong)param_2 + 9) == s_deterministic_ke_00184460[9]);
    auVar4[10] = -(*(char *)((longlong)param_2 + 10) == s_deterministic_ke_00184460[10]);
    auVar4[0xb] = -(*(char *)((longlong)param_2 + 0xb) == s_deterministic_ke_00184460[0xb]);
    auVar4[0xc] = -(*(char *)((longlong)param_2 + 0xc) == s_deterministic_ke_00184460[0xc]);
    auVar4[0xd] = -(*(char *)((longlong)param_2 + 0xd) == s_deterministic_ke_00184460[0xd]);
    auVar4[0xe] = -(*(char *)((longlong)param_2 + 0xe) == s_deterministic_ke_00184460[0xe]);
    auVar4[0xf] = -(*(char *)((longlong)param_2 + 0xf) == s_deterministic_ke_00184460[0xf]);
    auVar10[0] = -((char)param_2[2] == s_y_00183130[0]);
    auVar10[1] = -(s_y_00183130[1] == '\0');
    auVar10[2] = -(s_y_00183130[2] == '\0');
    auVar10[3] = -(s_y_00183130[3] == '\0');
    auVar10[4] = -(UNK_00183134 == '\0');
    auVar10[5] = -(UNK_00183135 == '\0');
    auVar10[6] = -(UNK_00183136 == '\0');
    auVar10[7] = -(UNK_00183137 == '\0');
    auVar10[8] = -(UNK_00183138 == '\0');
    auVar10[9] = -(UNK_00183139 == '\0');
    auVar10[10] = -(UNK_0018313a == '\0');
    auVar10[0xb] = -(UNK_0018313b == '\0');
    auVar10[0xc] = -(UNK_0018313c == '\0');
    auVar10[0xd] = -(UNK_0018313d == '\0');
    auVar10[0xe] = -(UNK_0018313e == '\0');
    auVar10[0xf] = -(UNK_0018313f == '\0');
    auVar10 = auVar10 & auVar4;
    if ((ushort)((ushort)(SUB161(auVar10 >> 7,0) & 1) | (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar10[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 0x18;
      *param_1 = 0;
      return;
    }
    break;
  case 0x12:
    auVar6[0] = -((char)*param_2 == DAT_00182bb0);
    auVar6[1] = -(*(char *)((longlong)param_2 + 1) == UNK_00182bb1);
    auVar6[2] = -(*(char *)((longlong)param_2 + 2) == UNK_00182bb2);
    auVar6[3] = -(*(char *)((longlong)param_2 + 3) == UNK_00182bb3);
    auVar6[4] = -(*(char *)((longlong)param_2 + 4) == UNK_00182bb4);
    auVar6[5] = -(*(char *)((longlong)param_2 + 5) == UNK_00182bb5);
    auVar6[6] = -(*(char *)((longlong)param_2 + 6) == UNK_00182bb6);
    auVar6[7] = -(*(char *)((longlong)param_2 + 7) == UNK_00182bb7);
    auVar6[8] = -((char)param_2[1] == UNK_00182bb8);
    auVar6[9] = -(*(char *)((longlong)param_2 + 9) == UNK_00182bb9);
    auVar6[10] = -(*(char *)((longlong)param_2 + 10) == UNK_00182bba);
    auVar6[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_00182bbb);
    auVar6[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_00182bbc);
    auVar6[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_00182bbd);
    auVar6[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_00182bbe);
    auVar6[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_00182bbf);
    auVar12[0] = -((char)param_2[2] == s_ls_00183ec0[0]);
    auVar12[1] = -((char)((ulonglong)param_2[2] >> 8) == s_ls_00183ec0[1]);
    auVar12[2] = -(s_ls_00183ec0[2] == '\0');
    auVar12[3] = -(s_ls_00183ec0[3] == '\0');
    auVar12[4] = -(UNK_00183ec4 == '\0');
    auVar12[5] = -(UNK_00183ec5 == '\0');
    auVar12[6] = -(UNK_00183ec6 == '\0');
    auVar12[7] = -(UNK_00183ec7 == '\0');
    auVar12[8] = -(UNK_00183ec8 == '\0');
    auVar12[9] = -(UNK_00183ec9 == '\0');
    auVar12[10] = -(UNK_00183eca == '\0');
    auVar12[0xb] = -(UNK_00183ecb == '\0');
    auVar12[0xc] = -(UNK_00183ecc == '\0');
    auVar12[0xd] = -(UNK_00183ecd == '\0');
    auVar12[0xe] = -(UNK_00183ece == '\0');
    auVar12[0xf] = -(UNK_00183ecf == '\0');
    auVar12 = auVar12 & auVar6;
    if ((ushort)((ushort)(SUB161(auVar12 >> 7,0) & 1) | (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar12[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 0x10;
      *param_1 = 0;
      return;
    }
    break;
  case 0x16:
    auVar11[0] = -(*(char *)((longlong)param_2 + 6) == DAT_001830b0);
    auVar11[1] = -(*(char *)((longlong)param_2 + 7) == UNK_001830b1);
    auVar11[2] = -((char)param_2[1] == UNK_001830b2);
    auVar11[3] = -(*(char *)((longlong)param_2 + 9) == UNK_001830b3);
    auVar11[4] = -(*(char *)((longlong)param_2 + 10) == UNK_001830b4);
    auVar11[5] = -(*(char *)((longlong)param_2 + 0xb) == UNK_001830b5);
    auVar11[6] = -(*(char *)((longlong)param_2 + 0xc) == UNK_001830b6);
    auVar11[7] = -(*(char *)((longlong)param_2 + 0xd) == UNK_001830b7);
    auVar11[8] = -(*(char *)((longlong)param_2 + 0xe) == UNK_001830b8);
    auVar11[9] = -(*(char *)((longlong)param_2 + 0xf) == UNK_001830b9);
    auVar11[10] = -((char)param_2[2] == UNK_001830ba);
    auVar11[0xb] = -(*(char *)((longlong)param_2 + 0x11) == UNK_001830bb);
    auVar11[0xc] = -(*(char *)((longlong)param_2 + 0x12) == UNK_001830bc);
    auVar11[0xd] = -(*(char *)((longlong)param_2 + 0x13) == UNK_001830bd);
    auVar11[0xe] = -(*(char *)((longlong)param_2 + 0x14) == UNK_001830be);
    auVar11[0xf] = -(*(char *)((longlong)param_2 + 0x15) == UNK_001830bf);
    auVar5[0] = -((char)*param_2 == s_native_conversat_00182dc0[0]);
    auVar5[1] = -(*(char *)((longlong)param_2 + 1) == s_native_conversat_00182dc0[1]);
    auVar5[2] = -(*(char *)((longlong)param_2 + 2) == s_native_conversat_00182dc0[2]);
    auVar5[3] = -(*(char *)((longlong)param_2 + 3) == s_native_conversat_00182dc0[3]);
    auVar5[4] = -(*(char *)((longlong)param_2 + 4) == s_native_conversat_00182dc0[4]);
    auVar5[5] = -(*(char *)((longlong)param_2 + 5) == s_native_conversat_00182dc0[5]);
    auVar5[6] = -(*(char *)((longlong)param_2 + 6) == s_native_conversat_00182dc0[6]);
    auVar5[7] = -(*(char *)((longlong)param_2 + 7) == s_native_conversat_00182dc0[7]);
    auVar5[8] = -((char)param_2[1] == s_native_conversat_00182dc0[8]);
    auVar5[9] = -(*(char *)((longlong)param_2 + 9) == s_native_conversat_00182dc0[9]);
    auVar5[10] = -(*(char *)((longlong)param_2 + 10) == s_native_conversat_00182dc0[10]);
    auVar5[0xb] = -(*(char *)((longlong)param_2 + 0xb) == s_native_conversat_00182dc0[0xb]);
    auVar5[0xc] = -(*(char *)((longlong)param_2 + 0xc) == s_native_conversat_00182dc0[0xc]);
    auVar5[0xd] = -(*(char *)((longlong)param_2 + 0xd) == s_native_conversat_00182dc0[0xd]);
    auVar5[0xe] = -(*(char *)((longlong)param_2 + 0xe) == s_native_conversat_00182dc0[0xe]);
    auVar5[0xf] = -(*(char *)((longlong)param_2 + 0xf) == s_native_conversat_00182dc0[0xf]);
    auVar5 = auVar5 & auVar11;
    if ((ushort)((ushort)(SUB161(auVar5 >> 7,0) & 1) | (ushort)(SUB161(auVar5 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar5 >> 0x17,0) & 1) << 2 |
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
                (ushort)(byte)(auVar5[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    break;
  case 0x17:
    auVar7[0] = -(*(char *)((longlong)param_2 + 7) == DAT_001825f0);
    auVar7[1] = -((char)param_2[1] == UNK_001825f1);
    auVar7[2] = -(*(char *)((longlong)param_2 + 9) == UNK_001825f2);
    auVar7[3] = -(*(char *)((longlong)param_2 + 10) == UNK_001825f3);
    auVar7[4] = -(*(char *)((longlong)param_2 + 0xb) == UNK_001825f4);
    auVar7[5] = -(*(char *)((longlong)param_2 + 0xc) == UNK_001825f5);
    auVar7[6] = -(*(char *)((longlong)param_2 + 0xd) == UNK_001825f6);
    auVar7[7] = -(*(char *)((longlong)param_2 + 0xe) == UNK_001825f7);
    auVar7[8] = -(*(char *)((longlong)param_2 + 0xf) == UNK_001825f8);
    auVar7[9] = -((char)param_2[2] == UNK_001825f9);
    auVar7[10] = -(*(char *)((longlong)param_2 + 0x11) == UNK_001825fa);
    auVar7[0xb] = -(*(char *)((longlong)param_2 + 0x12) == UNK_001825fb);
    auVar7[0xc] = -(*(char *)((longlong)param_2 + 0x13) == UNK_001825fc);
    auVar7[0xd] = -(*(char *)((longlong)param_2 + 0x14) == UNK_001825fd);
    auVar7[0xe] = -(*(char *)((longlong)param_2 + 0x15) == UNK_001825fe);
    auVar7[0xf] = -(*(char *)((longlong)param_2 + 0x16) == UNK_001825ff);
    auVar1[0] = -((char)*param_2 == s_partial_output_o_001828b0[0]);
    auVar1[1] = -(*(char *)((longlong)param_2 + 1) == s_partial_output_o_001828b0[1]);
    auVar1[2] = -(*(char *)((longlong)param_2 + 2) == s_partial_output_o_001828b0[2]);
    auVar1[3] = -(*(char *)((longlong)param_2 + 3) == s_partial_output_o_001828b0[3]);
    auVar1[4] = -(*(char *)((longlong)param_2 + 4) == s_partial_output_o_001828b0[4]);
    auVar1[5] = -(*(char *)((longlong)param_2 + 5) == s_partial_output_o_001828b0[5]);
    auVar1[6] = -(*(char *)((longlong)param_2 + 6) == s_partial_output_o_001828b0[6]);
    auVar1[7] = -(*(char *)((longlong)param_2 + 7) == s_partial_output_o_001828b0[7]);
    auVar1[8] = -((char)param_2[1] == s_partial_output_o_001828b0[8]);
    auVar1[9] = -(*(char *)((longlong)param_2 + 9) == s_partial_output_o_001828b0[9]);
    auVar1[10] = -(*(char *)((longlong)param_2 + 10) == s_partial_output_o_001828b0[10]);
    auVar1[0xb] = -(*(char *)((longlong)param_2 + 0xb) == s_partial_output_o_001828b0[0xb]);
    auVar1[0xc] = -(*(char *)((longlong)param_2 + 0xc) == s_partial_output_o_001828b0[0xc]);
    auVar1[0xd] = -(*(char *)((longlong)param_2 + 0xd) == s_partial_output_o_001828b0[0xd]);
    auVar1[0xe] = -(*(char *)((longlong)param_2 + 0xe) == s_partial_output_o_001828b0[0xe]);
    auVar1[0xf] = -(*(char *)((longlong)param_2 + 0xf) == s_partial_output_o_001828b0[0xf]);
    auVar1 = auVar1 & auVar7;
    if ((ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 0x16;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 0x19;
  *param_1 = 0;
  return;
}


