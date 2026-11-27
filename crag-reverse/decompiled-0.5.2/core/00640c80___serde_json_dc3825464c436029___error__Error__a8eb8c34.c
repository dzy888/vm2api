// 00640c80 <serde_json[dc3825464c436029]::error::Error>

/* <<craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_str::<serde_json[dc3825464c436029]::error::Error>
    */

void __rustcall
<<craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_str::<serde_json[dc3825464c436029]::error::Error>
          (undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
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
      param_1[1] = 0xc;
      *param_1 = 0;
      return;
    }
    if (*(char *)((longlong)param_2 + 4) == 's' && (int)*param_2 == 0x6e74656e) {
      param_1[1] = 0x10;
      *param_1 = 0;
      return;
    }
    if (*(char *)((longlong)param_2 + 4) == 'd' && (int)*param_2 == 0x695f6d76) {
      param_1[1] = 0x14;
      *param_1 = 0;
      return;
    }
    break;
  case 6:
    if (*(short *)((longlong)param_2 + 4) == 0x6469 && (int)*param_2 == 0x5f766e65) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    break;
  case 7:
    if (*(int *)((longlong)param_2 + 3) == 0x7269645f && (int)*param_2 == 0x5f6e7572) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
    if (*(int *)((longlong)param_2 + 3) == 0x6e69625f && (int)*param_2 == 0x5f796761) {
      param_1[1] = 0xd;
      *param_1 = 0;
      return;
    }
    if (*(int *)((longlong)param_2 + 3) == 0x64656c62 && (int)*param_2 == 0x62616e65) {
      param_1[1] = 0x16;
      *param_1 = 0;
      return;
    }
    break;
  case 8:
    if (*param_2 == 0x656d6f685f796761) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x7269645f6b726f77) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x64695f79786f7270) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x736772615f796761) {
      param_1[1] = 0xf;
      *param_1 = 0;
      return;
    }
    break;
  case 9:
    if ((char)param_2[1] == 'l' && *param_2 == 0x72755f79786f7270) {
      param_1[1] = 6;
      *param_1 = 0;
      return;
    }
    if ((char)param_2[1] == 'o' && *param_2 == 0x735f656764697262) {
      param_1[1] = 0xe;
      *param_1 = 0;
      return;
    }
    break;
  case 10:
    if ((short)param_2[1] == 0x6469 && *param_2 == 0x5f746e756f636361) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    break;
  case 0xb:
    if (*(longlong *)((longlong)param_2 + 3) == 0x7269645f65736e65 && *param_2 == 0x5f65736e6563696c
       ) {
      param_1[1] = 0x15;
      *param_1 = 0;
      return;
    }
    break;
  case 0xc:
    if ((int)param_2[1] == 0x36353261 && *param_2 == 0x68735f79786f7270) {
      param_1[1] = 7;
      *param_1 = 0;
      return;
    }
    break;
  case 0xe:
    if (*(longlong *)((longlong)param_2 + 6) == 0x73746f6c735f6d72 && *param_2 == 0x6d7261775f6e696d
       ) {
      param_1[1] = 10;
      *param_1 = 0;
      return;
    }
    break;
  case 0xf:
    if (*(longlong *)((longlong)param_2 + 7) == 0x79636e6572727563 && *param_2 == 0x636e6f635f78616d
       ) {
      param_1[1] = 9;
      *param_1 = 0;
      return;
    }
    break;
  case 0x12:
    auVar4[0] = -((char)*param_2 == DAT_001834e0);
    auVar4[1] = -(*(char *)((longlong)param_2 + 1) == UNK_001834e1);
    auVar4[2] = -(*(char *)((longlong)param_2 + 2) == UNK_001834e2);
    auVar4[3] = -(*(char *)((longlong)param_2 + 3) == UNK_001834e3);
    auVar4[4] = -(*(char *)((longlong)param_2 + 4) == UNK_001834e4);
    auVar4[5] = -(*(char *)((longlong)param_2 + 5) == UNK_001834e5);
    auVar4[6] = -(*(char *)((longlong)param_2 + 6) == UNK_001834e6);
    auVar4[7] = -(*(char *)((longlong)param_2 + 7) == UNK_001834e7);
    auVar4[8] = -((char)param_2[1] == UNK_001834e8);
    auVar4[9] = -(*(char *)((longlong)param_2 + 9) == UNK_001834e9);
    auVar4[10] = -(*(char *)((longlong)param_2 + 10) == UNK_001834ea);
    auVar4[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_001834eb);
    auVar4[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_001834ec);
    auVar4[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_001834ed);
    auVar4[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_001834ee);
    auVar4[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_001834ef);
    auVar9[0] = -((char)param_2[2] == s_et_00182d00[0]);
    auVar9[1] = -((char)((ulonglong)param_2[2] >> 8) == s_et_00182d00[1]);
    auVar9[2] = -(s_et_00182d00[2] == '\0');
    auVar9[3] = -(s_et_00182d00[3] == '\0');
    auVar9[4] = -(UNK_00182d04 == '\0');
    auVar9[5] = -(UNK_00182d05 == '\0');
    auVar9[6] = -(UNK_00182d06 == '\0');
    auVar9[7] = -(UNK_00182d07 == '\0');
    auVar9[8] = -(UNK_00182d08 == '\0');
    auVar9[9] = -(UNK_00182d09 == '\0');
    auVar9[10] = -(UNK_00182d0a == '\0');
    auVar9[0xb] = -(UNK_00182d0b == '\0');
    auVar9[0xc] = -(UNK_00182d0c == '\0');
    auVar9[0xd] = -(UNK_00182d0d == '\0');
    auVar9[0xe] = -(UNK_00182d0e == '\0');
    auVar9[0xf] = -(UNK_00182d0f == '\0');
    auVar9 = auVar9 & auVar4;
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
      param_1[1] = 0x13;
      *param_1 = 0;
      return;
    }
    break;
  case 0x14:
    lVar1 = param_2[2];
    auVar11[0] = -((char)lVar1 == s_ired_00183ee0[0]);
    auVar11[1] = -((char)((ulonglong)lVar1 >> 8) == s_ired_00183ee0[1]);
    auVar11[2] = -((char)((ulonglong)lVar1 >> 0x10) == s_ired_00183ee0[2]);
    auVar11[3] = -((char)((ulonglong)lVar1 >> 0x18) == s_ired_00183ee0[3]);
    auVar11[4] = -(s_ired_00183ee0[4] == '\0');
    auVar11[5] = -(s_ired_00183ee0[5] == '\0');
    auVar11[6] = -(s_ired_00183ee0[6] == '\0');
    auVar11[7] = -(s_ired_00183ee0[7] == '\0');
    auVar11[8] = -(UNK_00183ee8 == '\0');
    auVar11[9] = -(UNK_00183ee9 == '\0');
    auVar11[10] = -(UNK_00183eea == '\0');
    auVar11[0xb] = -(UNK_00183eeb == '\0');
    auVar11[0xc] = -(UNK_00183eec == '\0');
    auVar11[0xd] = -(UNK_00183eed == '\0');
    auVar11[0xe] = -(UNK_00183eee == '\0');
    auVar11[0xf] = -(UNK_00183eef == '\0');
    auVar6[0] = -((char)*param_2 == s_oauth_proxy_requ_00183a00[0]);
    auVar6[1] = -(*(char *)((longlong)param_2 + 1) == s_oauth_proxy_requ_00183a00[1]);
    auVar6[2] = -(*(char *)((longlong)param_2 + 2) == s_oauth_proxy_requ_00183a00[2]);
    auVar6[3] = -(*(char *)((longlong)param_2 + 3) == s_oauth_proxy_requ_00183a00[3]);
    auVar6[4] = -(*(char *)((longlong)param_2 + 4) == s_oauth_proxy_requ_00183a00[4]);
    auVar6[5] = -(*(char *)((longlong)param_2 + 5) == s_oauth_proxy_requ_00183a00[5]);
    auVar6[6] = -(*(char *)((longlong)param_2 + 6) == s_oauth_proxy_requ_00183a00[6]);
    auVar6[7] = -(*(char *)((longlong)param_2 + 7) == s_oauth_proxy_requ_00183a00[7]);
    auVar6[8] = -((char)param_2[1] == s_oauth_proxy_requ_00183a00[8]);
    auVar6[9] = -(*(char *)((longlong)param_2 + 9) == s_oauth_proxy_requ_00183a00[9]);
    auVar6[10] = -(*(char *)((longlong)param_2 + 10) == s_oauth_proxy_requ_00183a00[10]);
    auVar6[0xb] = -(*(char *)((longlong)param_2 + 0xb) == s_oauth_proxy_requ_00183a00[0xb]);
    auVar6[0xc] = -(*(char *)((longlong)param_2 + 0xc) == s_oauth_proxy_requ_00183a00[0xc]);
    auVar6[0xd] = -(*(char *)((longlong)param_2 + 0xd) == s_oauth_proxy_requ_00183a00[0xd]);
    auVar6[0xe] = -(*(char *)((longlong)param_2 + 0xe) == s_oauth_proxy_requ_00183a00[0xe]);
    auVar6[0xf] = -(*(char *)((longlong)param_2 + 0xf) == s_oauth_proxy_requ_00183a00[0xf]);
    auVar6 = auVar6 & auVar11;
    if ((ushort)((ushort)(SUB161(auVar6 >> 7,0) & 1) | (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
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
                (ushort)(byte)(auVar6[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 0x11;
      *param_1 = 0;
      return;
    }
    lVar1 = param_2[2];
    auVar12[0] = -((char)lVar1 == s_roxy_001828e0[0]);
    auVar12[1] = -((char)((ulonglong)lVar1 >> 8) == s_roxy_001828e0[1]);
    auVar12[2] = -((char)((ulonglong)lVar1 >> 0x10) == s_roxy_001828e0[2]);
    auVar12[3] = -((char)((ulonglong)lVar1 >> 0x18) == s_roxy_001828e0[3]);
    auVar12[4] = -(s_roxy_001828e0[4] == '\0');
    auVar12[5] = -(s_roxy_001828e0[5] == '\0');
    auVar12[6] = -(s_roxy_001828e0[6] == '\0');
    auVar12[7] = -(s_roxy_001828e0[7] == '\0');
    auVar12[8] = -(UNK_001828e8 == '\0');
    auVar12[9] = -(UNK_001828e9 == '\0');
    auVar12[10] = -(UNK_001828ea == '\0');
    auVar12[0xb] = -(UNK_001828eb == '\0');
    auVar12[0xc] = -(UNK_001828ec == '\0');
    auVar12[0xd] = -(UNK_001828ed == '\0');
    auVar12[0xe] = -(UNK_001828ee == '\0');
    auVar12[0xf] = -(UNK_001828ef == '\0');
    auVar7[0] = -((char)*param_2 == DAT_00183de0);
    auVar7[1] = -(*(char *)((longlong)param_2 + 1) == UNK_00183de1);
    auVar7[2] = -(*(char *)((longlong)param_2 + 2) == UNK_00183de2);
    auVar7[3] = -(*(char *)((longlong)param_2 + 3) == UNK_00183de3);
    auVar7[4] = -(*(char *)((longlong)param_2 + 4) == UNK_00183de4);
    auVar7[5] = -(*(char *)((longlong)param_2 + 5) == UNK_00183de5);
    auVar7[6] = -(*(char *)((longlong)param_2 + 6) == UNK_00183de6);
    auVar7[7] = -(*(char *)((longlong)param_2 + 7) == UNK_00183de7);
    auVar7[8] = -((char)param_2[1] == UNK_00183de8);
    auVar7[9] = -(*(char *)((longlong)param_2 + 9) == UNK_00183de9);
    auVar7[10] = -(*(char *)((longlong)param_2 + 10) == UNK_00183dea);
    auVar7[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_00183deb);
    auVar7[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_00183dec);
    auVar7[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_00183ded);
    auVar7[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_00183dee);
    auVar7[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_00183def);
    auVar7 = auVar7 & auVar12;
    if ((ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar7[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 0x12;
      *param_1 = 0;
      return;
    }
    break;
  case 0x15:
    auVar10[0] = -(*(char *)((longlong)param_2 + 5) == s_on_idle_ttl_secs_001826e0[0]);
    auVar10[1] = -(*(char *)((longlong)param_2 + 6) == s_on_idle_ttl_secs_001826e0[1]);
    auVar10[2] = -(*(char *)((longlong)param_2 + 7) == s_on_idle_ttl_secs_001826e0[2]);
    auVar10[3] = -((char)param_2[1] == s_on_idle_ttl_secs_001826e0[3]);
    auVar10[4] = -(*(char *)((longlong)param_2 + 9) == s_on_idle_ttl_secs_001826e0[4]);
    auVar10[5] = -(*(char *)((longlong)param_2 + 10) == s_on_idle_ttl_secs_001826e0[5]);
    auVar10[6] = -(*(char *)((longlong)param_2 + 0xb) == s_on_idle_ttl_secs_001826e0[6]);
    auVar10[7] = -(*(char *)((longlong)param_2 + 0xc) == s_on_idle_ttl_secs_001826e0[7]);
    auVar10[8] = -(*(char *)((longlong)param_2 + 0xd) == s_on_idle_ttl_secs_001826e0[8]);
    auVar10[9] = -(*(char *)((longlong)param_2 + 0xe) == s_on_idle_ttl_secs_001826e0[9]);
    auVar10[10] = -(*(char *)((longlong)param_2 + 0xf) == s_on_idle_ttl_secs_001826e0[10]);
    auVar10[0xb] = -((char)param_2[2] == s_on_idle_ttl_secs_001826e0[0xb]);
    auVar10[0xc] = -(*(char *)((longlong)param_2 + 0x11) == s_on_idle_ttl_secs_001826e0[0xc]);
    auVar10[0xd] = -(*(char *)((longlong)param_2 + 0x12) == s_on_idle_ttl_secs_001826e0[0xd]);
    auVar10[0xe] = -(*(char *)((longlong)param_2 + 0x13) == s_on_idle_ttl_secs_001826e0[0xe]);
    auVar10[0xf] = -(*(char *)((longlong)param_2 + 0x14) == s_on_idle_ttl_secs_001826e0[0xf]);
    auVar5[0] = -((char)*param_2 == s_session_idle_ttlDAILY_QUOTA_EXHA_00183980[0]);
    auVar5[1] = -(*(char *)((longlong)param_2 + 1) == s_session_idle_ttlDAILY_QUOTA_EXHA_00183980[1]
                 );
    auVar5[2] = -(*(char *)((longlong)param_2 + 2) == s_session_idle_ttlDAILY_QUOTA_EXHA_00183980[2]
                 );
    auVar5[3] = -(*(char *)((longlong)param_2 + 3) == s_session_idle_ttlDAILY_QUOTA_EXHA_00183980[3]
                 );
    auVar5[4] = -(*(char *)((longlong)param_2 + 4) == s_session_idle_ttlDAILY_QUOTA_EXHA_00183980[4]
                 );
    auVar5[5] = -(*(char *)((longlong)param_2 + 5) == s_session_idle_ttlDAILY_QUOTA_EXHA_00183980[5]
                 );
    auVar5[6] = -(*(char *)((longlong)param_2 + 6) == s_session_idle_ttlDAILY_QUOTA_EXHA_00183980[6]
                 );
    auVar5[7] = -(*(char *)((longlong)param_2 + 7) == s_session_idle_ttlDAILY_QUOTA_EXHA_00183980[7]
                 );
    auVar5[8] = -((char)param_2[1] == s_session_idle_ttlDAILY_QUOTA_EXHA_00183980[8]);
    auVar5[9] = -(*(char *)((longlong)param_2 + 9) == s_session_idle_ttlDAILY_QUOTA_EXHA_00183980[9]
                 );
    auVar5[10] = -(*(char *)((longlong)param_2 + 10) ==
                  s_session_idle_ttlDAILY_QUOTA_EXHA_00183980[10]);
    auVar5[0xb] = -(*(char *)((longlong)param_2 + 0xb) ==
                   s_session_idle_ttlDAILY_QUOTA_EXHA_00183980[0xb]);
    auVar5[0xc] = -(*(char *)((longlong)param_2 + 0xc) ==
                   s_session_idle_ttlDAILY_QUOTA_EXHA_00183980[0xc]);
    auVar5[0xd] = -(*(char *)((longlong)param_2 + 0xd) ==
                   s_session_idle_ttlDAILY_QUOTA_EXHA_00183980[0xd]);
    auVar5[0xe] = -(*(char *)((longlong)param_2 + 0xe) ==
                   s_session_idle_ttlDAILY_QUOTA_EXHA_00183980[0xe]);
    auVar5[0xf] = -(*(char *)((longlong)param_2 + 0xf) ==
                   s_session_idle_ttlDAILY_QUOTA_EXHA_00183980[0xf]);
    auVar5 = auVar5 & auVar10;
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
      param_1[1] = 0xb;
      *param_1 = 0;
      return;
    }
    break;
  case 0x18:
    lVar1 = param_2[2];
    auVar8[0] = -((char)lVar1 == s_t_egress_00183150[0]);
    auVar8[1] = -((char)((ulonglong)lVar1 >> 8) == s_t_egress_00183150[1]);
    auVar8[2] = -((char)((ulonglong)lVar1 >> 0x10) == s_t_egress_00183150[2]);
    auVar8[3] = -((char)((ulonglong)lVar1 >> 0x18) == s_t_egress_00183150[3]);
    auVar8[4] = -((char)((ulonglong)lVar1 >> 0x20) == s_t_egress_00183150[4]);
    auVar8[5] = -((char)((ulonglong)lVar1 >> 0x28) == s_t_egress_00183150[5]);
    auVar8[6] = -((char)((ulonglong)lVar1 >> 0x30) == s_t_egress_00183150[6]);
    auVar8[7] = -((char)((ulonglong)lVar1 >> 0x38) == s_t_egress_00183150[7]);
    auVar8[8] = -(s_t_egress_00183150[8] == '\0');
    auVar8[9] = -(s_t_egress_00183150[9] == '\0');
    auVar8[10] = -(s_t_egress_00183150[10] == '\0');
    auVar8[0xb] = -(s_t_egress_00183150[0xb] == '\0');
    auVar8[0xc] = -(UNK_0018315c == '\0');
    auVar8[0xd] = -(UNK_0018315d == '\0');
    auVar8[0xe] = -(UNK_0018315e == '\0');
    auVar8[0xf] = -(UNK_0018315f == '\0');
    auVar3[0] = -((char)*param_2 == DAT_00183b70);
    auVar3[1] = -(*(char *)((longlong)param_2 + 1) == UNK_00183b71);
    auVar3[2] = -(*(char *)((longlong)param_2 + 2) == UNK_00183b72);
    auVar3[3] = -(*(char *)((longlong)param_2 + 3) == UNK_00183b73);
    auVar3[4] = -(*(char *)((longlong)param_2 + 4) == UNK_00183b74);
    auVar3[5] = -(*(char *)((longlong)param_2 + 5) == UNK_00183b75);
    auVar3[6] = -(*(char *)((longlong)param_2 + 6) == UNK_00183b76);
    auVar3[7] = -(*(char *)((longlong)param_2 + 7) == UNK_00183b77);
    auVar3[8] = -((char)param_2[1] == UNK_00183b78);
    auVar3[9] = -(*(char *)((longlong)param_2 + 9) == UNK_00183b79);
    auVar3[10] = -(*(char *)((longlong)param_2 + 10) == UNK_00183b7a);
    auVar3[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_00183b7b);
    auVar3[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_00183b7c);
    auVar3[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_00183b7d);
    auVar3[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_00183b7e);
    auVar3[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_00183b7f);
    auVar3 = auVar3 & auVar8;
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
      param_1[1] = 8;
      *param_1 = 0;
      return;
    }
  }
  uVar2 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>::
          unknown_field(param_2,param_3,
                        &anon_63b06cc94833867f683611f039574387_59_llvm_6903579140370050947,0x17);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *param_1 = 1;
  return;
}


