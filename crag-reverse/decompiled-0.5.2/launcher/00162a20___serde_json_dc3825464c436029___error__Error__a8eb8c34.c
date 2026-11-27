// 00162a20 <serde_json[dc3825464c436029]::error::Error>

/* <<craggemini[b21da2d71f2da7a3]::license::WrappedKey as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_str::<serde_json[dc3825464c436029]::error::Error>
    */

void __rustcall
<<craggemini[b21da2d71f2da7a3]::license::WrappedKey_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
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
    auVar4[0] = -((char)lVar1 == DAT_00113eb0);
    auVar4[1] = -((char)((ulonglong)lVar1 >> 8) == UNK_00113eb1);
    auVar4[2] = -((char)((ulonglong)lVar1 >> 0x10) == UNK_00113eb2);
    auVar4[3] = -((char)((ulonglong)lVar1 >> 0x18) == UNK_00113eb3);
    auVar4[4] = -(UNK_00113eb4 == '\0');
    auVar4[5] = -(UNK_00113eb5 == '\0');
    auVar4[6] = -(UNK_00113eb6 == '\0');
    auVar4[7] = -(UNK_00113eb7 == '\0');
    auVar4[8] = -(UNK_00113eb8 == '\0');
    auVar4[9] = -(UNK_00113eb9 == '\0');
    auVar4[10] = -(UNK_00113eba == '\0');
    auVar4[0xb] = -(UNK_00113ebb == '\0');
    auVar4[0xc] = -(UNK_00113ebc == '\0');
    auVar4[0xd] = -(UNK_00113ebd == '\0');
    auVar4[0xe] = -(UNK_00113ebe == '\0');
    auVar4[0xf] = -(UNK_00113ebf == '\0');
    auVar3[0] = -((char)*param_2 == DAT_001138c0);
    auVar3[1] = -(*(char *)((longlong)param_2 + 1) == UNK_001138c1);
    auVar3[2] = -(*(char *)((longlong)param_2 + 2) == UNK_001138c2);
    auVar3[3] = -(*(char *)((longlong)param_2 + 3) == UNK_001138c3);
    auVar3[4] = -(*(char *)((longlong)param_2 + 4) == UNK_001138c4);
    auVar3[5] = -(*(char *)((longlong)param_2 + 5) == UNK_001138c5);
    auVar3[6] = -(*(char *)((longlong)param_2 + 6) == UNK_001138c6);
    auVar3[7] = -(*(char *)((longlong)param_2 + 7) == UNK_001138c7);
    auVar3[8] = -((char)param_2[1] == UNK_001138c8);
    auVar3[9] = -(*(char *)((longlong)param_2 + 9) == UNK_001138c9);
    auVar3[10] = -(*(char *)((longlong)param_2 + 10) == UNK_001138ca);
    auVar3[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_001138cb);
    auVar3[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_001138cc);
    auVar3[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_001138cd);
    auVar3[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_001138ce);
    auVar3[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_001138cf);
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
                        &anon_c9247e0b0208fc9c8c019285c3882aec_34_llvm_5798562142159169407,4);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *param_1 = 1;
  return;
}


