// 004ef260 <serde_json[dc3825464c436029]::error::Error>

/* <<craggemini_core[66f3c71560d70857]::protocol::Envelope as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_str::<serde_json[dc3825464c436029]::error::Error>
    */

void __rustcall
<<craggemini_core[66f3c71560d70857]::protocol::Envelope_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_str::<serde_json[dc3825464c436029]::error::Error>
          (undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  switch(param_3) {
  case 4:
    if ((int)*param_2 == 0x79646f62) {
      param_1[1] = 9;
      *param_1 = 0;
      return;
    }
    break;
  case 6:
    if (*(short *)((longlong)param_2 + 4) == 0x6d61 && (int)*param_2 == 0x65727473) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    if (*(short *)((longlong)param_2 + 4) == 0x6469 && (int)*param_2 == 0x5f766e65) {
      param_1[1] = 7;
      *param_1 = 0;
      return;
    }
    break;
  case 10:
    if ((short)param_2[1] == 0x6469 && *param_2 == 0x5f74736575716572) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    if ((short)param_2[1] == 0x6469 && *param_2 == 0x5f746e756f636361) {
      param_1[1] = 6;
      *param_1 = 0;
      return;
    }
    break;
  case 0xe:
    if (*(longlong *)((longlong)param_2 + 6) == 0x7963696c6f705f79 && *param_2 == 0x5f79617765746167
       ) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    if (*(longlong *)((longlong)param_2 + 6) == 0x656d757365725f74 && *param_2 == 0x5f74726174736572
       ) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
    break;
  case 0xf:
    if (*(longlong *)((longlong)param_2 + 7) == 0x64695f6e6f697461 && *param_2 == 0x61737265766e6f63
       ) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    break;
  case 0x10:
    auVar2[0] = -((char)*param_2 ==
                 anon_2c3f00c6db51fc4e52b1607637b553f4_35_llvm_6489901693990513673[0]);
    auVar2[1] = -(*(char *)((longlong)param_2 + 1) ==
                 anon_2c3f00c6db51fc4e52b1607637b553f4_35_llvm_6489901693990513673[1]);
    auVar2[2] = -(*(char *)((longlong)param_2 + 2) ==
                 anon_2c3f00c6db51fc4e52b1607637b553f4_35_llvm_6489901693990513673[2]);
    auVar2[3] = -(*(char *)((longlong)param_2 + 3) ==
                 anon_2c3f00c6db51fc4e52b1607637b553f4_35_llvm_6489901693990513673[3]);
    auVar2[4] = -(*(char *)((longlong)param_2 + 4) ==
                 anon_2c3f00c6db51fc4e52b1607637b553f4_35_llvm_6489901693990513673[4]);
    auVar2[5] = -(*(char *)((longlong)param_2 + 5) ==
                 anon_2c3f00c6db51fc4e52b1607637b553f4_35_llvm_6489901693990513673[5]);
    auVar2[6] = -(*(char *)((longlong)param_2 + 6) ==
                 anon_2c3f00c6db51fc4e52b1607637b553f4_35_llvm_6489901693990513673[6]);
    auVar2[7] = -(*(char *)((longlong)param_2 + 7) ==
                 anon_2c3f00c6db51fc4e52b1607637b553f4_35_llvm_6489901693990513673[7]);
    auVar2[8] = -((char)param_2[1] ==
                 anon_2c3f00c6db51fc4e52b1607637b553f4_35_llvm_6489901693990513673[8]);
    auVar2[9] = -(*(char *)((longlong)param_2 + 9) ==
                 anon_2c3f00c6db51fc4e52b1607637b553f4_35_llvm_6489901693990513673[9]);
    auVar2[10] = -(*(char *)((longlong)param_2 + 10) ==
                  anon_2c3f00c6db51fc4e52b1607637b553f4_35_llvm_6489901693990513673[10]);
    auVar2[0xb] = -(*(char *)((longlong)param_2 + 0xb) ==
                   anon_2c3f00c6db51fc4e52b1607637b553f4_35_llvm_6489901693990513673[0xb]);
    auVar2[0xc] = -(*(char *)((longlong)param_2 + 0xc) ==
                   anon_2c3f00c6db51fc4e52b1607637b553f4_35_llvm_6489901693990513673[0xc]);
    auVar2[0xd] = -(*(char *)((longlong)param_2 + 0xd) ==
                   anon_2c3f00c6db51fc4e52b1607637b553f4_35_llvm_6489901693990513673[0xd]);
    auVar2[0xe] = -(*(char *)((longlong)param_2 + 0xe) ==
                   anon_2c3f00c6db51fc4e52b1607637b553f4_35_llvm_6489901693990513673[0xe]);
    auVar2[0xf] = -(*(char *)((longlong)param_2 + 0xf) ==
                   anon_2c3f00c6db51fc4e52b1607637b553f4_35_llvm_6489901693990513673[0xf]);
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
                 (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe | (ushort)(auVar2[0xf] >> 7) << 0xf)
        == 0xffff) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
    break;
  case 0x12:
    auVar3[0] = -((char)*param_2 == s_system_prompt_mo_QUOTA_EXHAUSTED_00182b60[0]);
    auVar3[1] = -(*(char *)((longlong)param_2 + 1) == s_system_prompt_mo_QUOTA_EXHAUSTED_00182b60[1]
                 );
    auVar3[2] = -(*(char *)((longlong)param_2 + 2) == s_system_prompt_mo_QUOTA_EXHAUSTED_00182b60[2]
                 );
    auVar3[3] = -(*(char *)((longlong)param_2 + 3) == s_system_prompt_mo_QUOTA_EXHAUSTED_00182b60[3]
                 );
    auVar3[4] = -(*(char *)((longlong)param_2 + 4) == s_system_prompt_mo_QUOTA_EXHAUSTED_00182b60[4]
                 );
    auVar3[5] = -(*(char *)((longlong)param_2 + 5) == s_system_prompt_mo_QUOTA_EXHAUSTED_00182b60[5]
                 );
    auVar3[6] = -(*(char *)((longlong)param_2 + 6) == s_system_prompt_mo_QUOTA_EXHAUSTED_00182b60[6]
                 );
    auVar3[7] = -(*(char *)((longlong)param_2 + 7) == s_system_prompt_mo_QUOTA_EXHAUSTED_00182b60[7]
                 );
    auVar3[8] = -((char)param_2[1] == s_system_prompt_mo_QUOTA_EXHAUSTED_00182b60[8]);
    auVar3[9] = -(*(char *)((longlong)param_2 + 9) == s_system_prompt_mo_QUOTA_EXHAUSTED_00182b60[9]
                 );
    auVar3[10] = -(*(char *)((longlong)param_2 + 10) ==
                  s_system_prompt_mo_QUOTA_EXHAUSTED_00182b60[10]);
    auVar3[0xb] = -(*(char *)((longlong)param_2 + 0xb) ==
                   s_system_prompt_mo_QUOTA_EXHAUSTED_00182b60[0xb]);
    auVar3[0xc] = -(*(char *)((longlong)param_2 + 0xc) ==
                   s_system_prompt_mo_QUOTA_EXHAUSTED_00182b60[0xc]);
    auVar3[0xd] = -(*(char *)((longlong)param_2 + 0xd) ==
                   s_system_prompt_mo_QUOTA_EXHAUSTED_00182b60[0xd]);
    auVar3[0xe] = -(*(char *)((longlong)param_2 + 0xe) ==
                   s_system_prompt_mo_QUOTA_EXHAUSTED_00182b60[0xe]);
    auVar3[0xf] = -(*(char *)((longlong)param_2 + 0xf) ==
                   s_system_prompt_mo_QUOTA_EXHAUSTED_00182b60[0xf]);
    auVar4[0] = -((char)param_2[2] == s_de_00182cb0[0]);
    auVar4[1] = -((char)((ulonglong)param_2[2] >> 8) == s_de_00182cb0[1]);
    auVar4[2] = -(s_de_00182cb0[2] == '\0');
    auVar4[3] = -(s_de_00182cb0[3] == '\0');
    auVar4[4] = -(UNK_00182cb4 == '\0');
    auVar4[5] = -(UNK_00182cb5 == '\0');
    auVar4[6] = -(UNK_00182cb6 == '\0');
    auVar4[7] = -(UNK_00182cb7 == '\0');
    auVar4[8] = -(UNK_00182cb8 == '\0');
    auVar4[9] = -(UNK_00182cb9 == '\0');
    auVar4[10] = -(UNK_00182cba == '\0');
    auVar4[0xb] = -(UNK_00182cbb == '\0');
    auVar4[0xc] = -(UNK_00182cbc == '\0');
    auVar4[0xd] = -(UNK_00182cbd == '\0');
    auVar4[0xe] = -(UNK_00182cbe == '\0');
    auVar4[0xf] = -(UNK_00182cbf == '\0');
    auVar4 = auVar4 & auVar3;
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
      param_1[1] = 8;
      *param_1 = 0;
      return;
    }
  }
  uVar1 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>::
          unknown_field(param_2,param_3,
                        &anon_2c3f00c6db51fc4e52b1607637b553f4_41_llvm_6489901693990513673,10);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *param_1 = 1;
  return;
}


