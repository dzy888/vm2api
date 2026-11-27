// 0051ab40 <serde_json[dc3825464c436029]::error::Error>

/* <<craggemini_core[66f3c71560d70857]::resume::ContinuationReceipt as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_str::<serde_json[dc3825464c436029]::error::Error>
    */

void __rustcall
<<craggemini_core[66f3c71560d70857]::resume::ContinuationReceipt_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_str::<serde_json[dc3825464c436029]::error::Error>
          (undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  switch(param_3) {
  case 3:
    if (*(char *)((longlong)param_2 + 2) == 'y' && (short)*param_2 == 0x656b) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    break;
  case 5:
    if (*(char *)((longlong)param_2 + 4) == 'e' && (int)*param_2 == 0x74617473) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
    break;
  case 7:
    if (*(int *)((longlong)param_2 + 3) == 0x64695f6e && (int)*param_2 == 0x6e727574) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    break;
  case 8:
    if (*param_2 == 0x7364695f6c6c6163) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    break;
  case 10:
    if ((short)param_2[1] == 0x6564 && *param_2 == 0x6f635f726f727265) {
      param_1[1] = 7;
      *param_1 = 0;
      return;
    }
    break;
  case 0xc:
    if ((int)param_2[1] == 0x73757461 && *param_2 == 0x74735f726f727265) {
      param_1[1] = 8;
      *param_1 = 0;
      return;
    }
    break;
  case 0xd:
    if (*(longlong *)((longlong)param_2 + 5) == 0x736d5f74615f6465 && *param_2 == 0x5f64657461657263
       ) {
      param_1[1] = 0xb;
      *param_1 = 0;
      return;
    }
    if (*(longlong *)((longlong)param_2 + 5) == 0x736d5f74615f6465 && *param_2 == 0x5f64657461647075
       ) {
      param_1[1] = 0xc;
      *param_1 = 0;
      return;
    }
    break;
  case 0xf:
    if (*(longlong *)((longlong)param_2 + 7) == 0x64695f6e6f697461 && *param_2 == 0x61737265766e6f63
       ) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    break;
  case 0x13:
    auVar9[0] = -(*(char *)((longlong)param_2 + 3) == DAT_00183290);
    auVar9[1] = -(*(char *)((longlong)param_2 + 4) == UNK_00183291);
    auVar9[2] = -(*(char *)((longlong)param_2 + 5) == UNK_00183292);
    auVar9[3] = -(*(char *)((longlong)param_2 + 6) == UNK_00183293);
    auVar9[4] = -(*(char *)((longlong)param_2 + 7) == UNK_00183294);
    auVar9[5] = -((char)param_2[1] == UNK_00183295);
    auVar9[6] = -(*(char *)((longlong)param_2 + 9) == UNK_00183296);
    auVar9[7] = -(*(char *)((longlong)param_2 + 10) == UNK_00183297);
    auVar9[8] = -(*(char *)((longlong)param_2 + 0xb) == UNK_00183298);
    auVar9[9] = -(*(char *)((longlong)param_2 + 0xc) == UNK_00183299);
    auVar9[10] = -(*(char *)((longlong)param_2 + 0xd) == UNK_0018329a);
    auVar9[0xb] = -(*(char *)((longlong)param_2 + 0xe) == UNK_0018329b);
    auVar9[0xc] = -(*(char *)((longlong)param_2 + 0xf) == UNK_0018329c);
    auVar9[0xd] = -((char)param_2[2] == UNK_0018329d);
    auVar9[0xe] = -(*(char *)((longlong)param_2 + 0x11) == UNK_0018329e);
    auVar9[0xf] = -(*(char *)((longlong)param_2 + 0x12) == UNK_0018329f);
    auVar5[0] = -((char)*param_2 == DAT_001834c0);
    auVar5[1] = -(*(char *)((longlong)param_2 + 1) == UNK_001834c1);
    auVar5[2] = -(*(char *)((longlong)param_2 + 2) == UNK_001834c2);
    auVar5[3] = -(*(char *)((longlong)param_2 + 3) == UNK_001834c3);
    auVar5[4] = -(*(char *)((longlong)param_2 + 4) == UNK_001834c4);
    auVar5[5] = -(*(char *)((longlong)param_2 + 5) == UNK_001834c5);
    auVar5[6] = -(*(char *)((longlong)param_2 + 6) == UNK_001834c6);
    auVar5[7] = -(*(char *)((longlong)param_2 + 7) == UNK_001834c7);
    auVar5[8] = -((char)param_2[1] == UNK_001834c8);
    auVar5[9] = -(*(char *)((longlong)param_2 + 9) == UNK_001834c9);
    auVar5[10] = -(*(char *)((longlong)param_2 + 10) == UNK_001834ca);
    auVar5[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_001834cb);
    auVar5[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_001834cc);
    auVar5[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_001834cd);
    auVar5[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_001834ce);
    auVar5[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_001834cf);
    auVar5 = auVar5 & auVar9;
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
      param_1[1] = 9;
      *param_1 = 0;
      return;
    }
    break;
  case 0x16:
    auVar8[0] = -(*(char *)((longlong)param_2 + 6) == s_sion_fingerprintread_url_content_001836f0[0]
                 );
    auVar8[1] = -(*(char *)((longlong)param_2 + 7) == s_sion_fingerprintread_url_content_001836f0[1]
                 );
    auVar8[2] = -((char)param_2[1] == s_sion_fingerprintread_url_content_001836f0[2]);
    auVar8[3] = -(*(char *)((longlong)param_2 + 9) == s_sion_fingerprintread_url_content_001836f0[3]
                 );
    auVar8[4] = -(*(char *)((longlong)param_2 + 10) ==
                 s_sion_fingerprintread_url_content_001836f0[4]);
    auVar8[5] = -(*(char *)((longlong)param_2 + 0xb) ==
                 s_sion_fingerprintread_url_content_001836f0[5]);
    auVar8[6] = -(*(char *)((longlong)param_2 + 0xc) ==
                 s_sion_fingerprintread_url_content_001836f0[6]);
    auVar8[7] = -(*(char *)((longlong)param_2 + 0xd) ==
                 s_sion_fingerprintread_url_content_001836f0[7]);
    auVar8[8] = -(*(char *)((longlong)param_2 + 0xe) ==
                 s_sion_fingerprintread_url_content_001836f0[8]);
    auVar8[9] = -(*(char *)((longlong)param_2 + 0xf) ==
                 s_sion_fingerprintread_url_content_001836f0[9]);
    auVar8[10] = -((char)param_2[2] == s_sion_fingerprintread_url_content_001836f0[10]);
    auVar8[0xb] = -(*(char *)((longlong)param_2 + 0x11) ==
                   s_sion_fingerprintread_url_content_001836f0[0xb]);
    auVar8[0xc] = -(*(char *)((longlong)param_2 + 0x12) ==
                   s_sion_fingerprintread_url_content_001836f0[0xc]);
    auVar8[0xd] = -(*(char *)((longlong)param_2 + 0x13) ==
                   s_sion_fingerprintread_url_content_001836f0[0xd]);
    auVar8[0xe] = -(*(char *)((longlong)param_2 + 0x14) ==
                   s_sion_fingerprintread_url_content_001836f0[0xe]);
    auVar8[0xf] = -(*(char *)((longlong)param_2 + 0x15) ==
                   s_sion_fingerprintread_url_content_001836f0[0xf]);
    auVar4[0] = -((char)*param_2 == DAT_00182ec0);
    auVar4[1] = -(*(char *)((longlong)param_2 + 1) == UNK_00182ec1);
    auVar4[2] = -(*(char *)((longlong)param_2 + 2) == UNK_00182ec2);
    auVar4[3] = -(*(char *)((longlong)param_2 + 3) == UNK_00182ec3);
    auVar4[4] = -(*(char *)((longlong)param_2 + 4) == UNK_00182ec4);
    auVar4[5] = -(*(char *)((longlong)param_2 + 5) == UNK_00182ec5);
    auVar4[6] = -(*(char *)((longlong)param_2 + 6) == UNK_00182ec6);
    auVar4[7] = -(*(char *)((longlong)param_2 + 7) == UNK_00182ec7);
    auVar4[8] = -((char)param_2[1] == UNK_00182ec8);
    auVar4[9] = -(*(char *)((longlong)param_2 + 9) == UNK_00182ec9);
    auVar4[10] = -(*(char *)((longlong)param_2 + 10) == UNK_00182eca);
    auVar4[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_00182ecb);
    auVar4[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_00182ecc);
    auVar4[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_00182ecd);
    auVar4[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_00182ece);
    auVar4[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_00182ecf);
    auVar4 = auVar4 & auVar8;
    if ((ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) | (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar4[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
    break;
  case 0x18:
    lVar1 = param_2[2];
    auVar6[0] = -((char)lVar1 == s_observed_00182ad0[0]);
    auVar6[1] = -((char)((ulonglong)lVar1 >> 8) == s_observed_00182ad0[1]);
    auVar6[2] = -((char)((ulonglong)lVar1 >> 0x10) == s_observed_00182ad0[2]);
    auVar6[3] = -((char)((ulonglong)lVar1 >> 0x18) == s_observed_00182ad0[3]);
    auVar6[4] = -((char)((ulonglong)lVar1 >> 0x20) == s_observed_00182ad0[4]);
    auVar6[5] = -((char)((ulonglong)lVar1 >> 0x28) == s_observed_00182ad0[5]);
    auVar6[6] = -((char)((ulonglong)lVar1 >> 0x30) == s_observed_00182ad0[6]);
    auVar6[7] = -((char)((ulonglong)lVar1 >> 0x38) == s_observed_00182ad0[7]);
    auVar6[8] = -(s_observed_00182ad0[8] == '\0');
    auVar6[9] = -(s_observed_00182ad0[9] == '\0');
    auVar6[10] = -(s_observed_00182ad0[10] == '\0');
    auVar6[0xb] = -(s_observed_00182ad0[0xb] == '\0');
    auVar6[0xc] = -(UNK_00182adc == '\0');
    auVar6[0xd] = -(UNK_00182add == '\0');
    auVar6[0xe] = -(UNK_00182ade == '\0');
    auVar6[0xf] = -(UNK_00182adf == '\0');
    auVar2[0] = -((char)*param_2 == DAT_00183c50);
    auVar2[1] = -(*(char *)((longlong)param_2 + 1) == UNK_00183c51);
    auVar2[2] = -(*(char *)((longlong)param_2 + 2) == UNK_00183c52);
    auVar2[3] = -(*(char *)((longlong)param_2 + 3) == UNK_00183c53);
    auVar2[4] = -(*(char *)((longlong)param_2 + 4) == UNK_00183c54);
    auVar2[5] = -(*(char *)((longlong)param_2 + 5) == UNK_00183c55);
    auVar2[6] = -(*(char *)((longlong)param_2 + 6) == UNK_00183c56);
    auVar2[7] = -(*(char *)((longlong)param_2 + 7) == UNK_00183c57);
    auVar2[8] = -((char)param_2[1] == UNK_00183c58);
    auVar2[9] = -(*(char *)((longlong)param_2 + 9) == UNK_00183c59);
    auVar2[10] = -(*(char *)((longlong)param_2 + 10) == UNK_00183c5a);
    auVar2[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_00183c5b);
    auVar2[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_00183c5c);
    auVar2[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_00183c5d);
    auVar2[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_00183c5e);
    auVar2[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_00183c5f);
    auVar2 = auVar2 & auVar6;
    if ((ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar2[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 6;
      *param_1 = 0;
      return;
    }
    lVar1 = param_2[2];
    auVar7[0] = -((char)lVar1 == s_t_digest_001847c0[0]);
    auVar7[1] = -((char)((ulonglong)lVar1 >> 8) == s_t_digest_001847c0[1]);
    auVar7[2] = -((char)((ulonglong)lVar1 >> 0x10) == s_t_digest_001847c0[2]);
    auVar7[3] = -((char)((ulonglong)lVar1 >> 0x18) == s_t_digest_001847c0[3]);
    auVar7[4] = -((char)((ulonglong)lVar1 >> 0x20) == s_t_digest_001847c0[4]);
    auVar7[5] = -((char)((ulonglong)lVar1 >> 0x28) == s_t_digest_001847c0[5]);
    auVar7[6] = -((char)((ulonglong)lVar1 >> 0x30) == s_t_digest_001847c0[6]);
    auVar7[7] = -((char)((ulonglong)lVar1 >> 0x38) == s_t_digest_001847c0[7]);
    auVar7[8] = -(s_t_digest_001847c0[8] == '\0');
    auVar7[9] = -(s_t_digest_001847c0[9] == '\0');
    auVar7[10] = -(s_t_digest_001847c0[10] == '\0');
    auVar7[0xb] = -(s_t_digest_001847c0[0xb] == '\0');
    auVar7[0xc] = -(UNK_001847cc == '\0');
    auVar7[0xd] = -(UNK_001847cd == '\0');
    auVar7[0xe] = -(UNK_001847ce == '\0');
    auVar7[0xf] = -(UNK_001847cf == '\0');
    auVar3[0] = -((char)*param_2 == s_settled_assistan_001836e0[0]);
    auVar3[1] = -(*(char *)((longlong)param_2 + 1) == s_settled_assistan_001836e0[1]);
    auVar3[2] = -(*(char *)((longlong)param_2 + 2) == s_settled_assistan_001836e0[2]);
    auVar3[3] = -(*(char *)((longlong)param_2 + 3) == s_settled_assistan_001836e0[3]);
    auVar3[4] = -(*(char *)((longlong)param_2 + 4) == s_settled_assistan_001836e0[4]);
    auVar3[5] = -(*(char *)((longlong)param_2 + 5) == s_settled_assistan_001836e0[5]);
    auVar3[6] = -(*(char *)((longlong)param_2 + 6) == s_settled_assistan_001836e0[6]);
    auVar3[7] = -(*(char *)((longlong)param_2 + 7) == s_settled_assistan_001836e0[7]);
    auVar3[8] = -((char)param_2[1] == s_settled_assistan_001836e0[8]);
    auVar3[9] = -(*(char *)((longlong)param_2 + 9) == s_settled_assistan_001836e0[9]);
    auVar3[10] = -(*(char *)((longlong)param_2 + 10) == s_settled_assistan_001836e0[10]);
    auVar3[0xb] = -(*(char *)((longlong)param_2 + 0xb) == s_settled_assistan_001836e0[0xb]);
    auVar3[0xc] = -(*(char *)((longlong)param_2 + 0xc) == s_settled_assistan_001836e0[0xc]);
    auVar3[0xd] = -(*(char *)((longlong)param_2 + 0xd) == s_settled_assistan_001836e0[0xd]);
    auVar3[0xe] = -(*(char *)((longlong)param_2 + 0xe) == s_settled_assistan_001836e0[0xe]);
    auVar3[0xf] = -(*(char *)((longlong)param_2 + 0xf) == s_settled_assistan_001836e0[0xf]);
    auVar3 = auVar3 & auVar7;
    if ((ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 10;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 0xd;
  *param_1 = 0;
  return;
}


