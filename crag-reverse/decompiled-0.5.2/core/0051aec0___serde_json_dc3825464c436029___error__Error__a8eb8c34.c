// 0051aec0 <serde_json[dc3825464c436029]::error::Error>

/* <<craggemini_core[66f3c71560d70857]::license::WrappedKey as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_str::<serde_json[dc3825464c436029]::error::Error>
    */

void __rustcall
<<craggemini_core[66f3c71560d70857]::license::WrappedKey_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_str::<serde_json[dc3825464c436029]::error::Error>
          (undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  switch(param_3) {
  case 3:
    if (*(char *)((longlong)param_2 + 2) == 'g' && (short)*param_2 == 0x6174) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    break;
  case 5:
    if (*(char *)((longlong)param_2 + 4) == 'e' && (int)*param_2 == 0x636e6f6e) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    break;
  case 10:
    if ((short)param_2[1] == 0x7478 && *param_2 == 0x6574726568706963) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    break;
  case 0x14:
    lVar1 = param_2[2];
    auVar4[0] = -((char)lVar1 == s__key_00184010[0]);
    auVar4[1] = -((char)((ulonglong)lVar1 >> 8) == s__key_00184010[1]);
    auVar4[2] = -((char)((ulonglong)lVar1 >> 0x10) == s__key_00184010[2]);
    auVar4[3] = -((char)((ulonglong)lVar1 >> 0x18) == s__key_00184010[3]);
    auVar4[4] = -(s__key_00184010[4] == '\0');
    auVar4[5] = -(s__key_00184010[5] == '\0');
    auVar4[6] = -(s__key_00184010[6] == '\0');
    auVar4[7] = -(s__key_00184010[7] == '\0');
    auVar4[8] = -(UNK_00184018 == '\0');
    auVar4[9] = -(UNK_00184019 == '\0');
    auVar4[10] = -(UNK_0018401a == '\0');
    auVar4[0xb] = -(UNK_0018401b == '\0');
    auVar4[0xc] = -(UNK_0018401c == '\0');
    auVar4[0xd] = -(UNK_0018401d == '\0');
    auVar4[0xe] = -(UNK_0018401e == '\0');
    auVar4[0xf] = -(UNK_0018401f == '\0');
    auVar3[0] = -((char)*param_2 == DAT_00182750);
    auVar3[1] = -(*(char *)((longlong)param_2 + 1) == UNK_00182751);
    auVar3[2] = -(*(char *)((longlong)param_2 + 2) == UNK_00182752);
    auVar3[3] = -(*(char *)((longlong)param_2 + 3) == UNK_00182753);
    auVar3[4] = -(*(char *)((longlong)param_2 + 4) == UNK_00182754);
    auVar3[5] = -(*(char *)((longlong)param_2 + 5) == UNK_00182755);
    auVar3[6] = -(*(char *)((longlong)param_2 + 6) == UNK_00182756);
    auVar3[7] = -(*(char *)((longlong)param_2 + 7) == UNK_00182757);
    auVar3[8] = -((char)param_2[1] == UNK_00182758);
    auVar3[9] = -(*(char *)((longlong)param_2 + 9) == UNK_00182759);
    auVar3[10] = -(*(char *)((longlong)param_2 + 10) == UNK_0018275a);
    auVar3[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_0018275b);
    auVar3[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_0018275c);
    auVar3[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_0018275d);
    auVar3[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_0018275e);
    auVar3[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_0018275f);
    auVar3 = auVar3 & auVar4;
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
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
  }
  uVar2 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>::
          unknown_field(param_2,param_3,
                        &anon_ec7f14c74815bf4c93b295cfd0665412_139_llvm_7806621557641746444,4);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *param_1 = 1;
  return;
}


