// 0051aa50 <serde_json[dc3825464c436029]::error::Error>

/* <<craggemini_core[66f3c71560d70857]::resume::ContinuationReceiptState as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_str::<serde_json[dc3825464c436029]::error::Error>
    */

void __rustcall
<<craggemini_core[66f3c71560d70857]::resume::ContinuationReceiptState_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_str::<serde_json[dc3825464c436029]::error::Error>
          (undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  switch(param_3) {
  case 7:
    if (*(int *)((longlong)param_2 + 3) == 0x676e6964 && (int)*param_2 == 0x646e6570) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    break;
  case 10:
    if ((short)param_2[1] == 0x6b6f && *param_2 == 0x5f64656c74746573) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    break;
  case 0xd:
    if (*(longlong *)((longlong)param_2 + 5) == 0x726f7272655f6465 && *param_2 == 0x5f64656c74746573
       ) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    break;
  case 0x15:
    auVar3[0] = -(*(char *)((longlong)param_2 + 5) == DAT_001845a0);
    auVar3[1] = -(*(char *)((longlong)param_2 + 6) == UNK_001845a1);
    auVar3[2] = -(*(char *)((longlong)param_2 + 7) == UNK_001845a2);
    auVar3[3] = -((char)param_2[1] == UNK_001845a3);
    auVar3[4] = -(*(char *)((longlong)param_2 + 9) == UNK_001845a4);
    auVar3[5] = -(*(char *)((longlong)param_2 + 10) == UNK_001845a5);
    auVar3[6] = -(*(char *)((longlong)param_2 + 0xb) == UNK_001845a6);
    auVar3[7] = -(*(char *)((longlong)param_2 + 0xc) == UNK_001845a7);
    auVar3[8] = -(*(char *)((longlong)param_2 + 0xd) == UNK_001845a8);
    auVar3[9] = -(*(char *)((longlong)param_2 + 0xe) == UNK_001845a9);
    auVar3[10] = -(*(char *)((longlong)param_2 + 0xf) == UNK_001845aa);
    auVar3[0xb] = -((char)param_2[2] == UNK_001845ab);
    auVar3[0xc] = -(*(char *)((longlong)param_2 + 0x11) == UNK_001845ac);
    auVar3[0xd] = -(*(char *)((longlong)param_2 + 0x12) == UNK_001845ad);
    auVar3[0xe] = -(*(char *)((longlong)param_2 + 0x13) == UNK_001845ae);
    auVar3[0xf] = -(*(char *)((longlong)param_2 + 0x14) == UNK_001845af);
    auVar2[0] = -((char)*param_2 == s_partial_non_retr_001836d0[0]);
    auVar2[1] = -(*(char *)((longlong)param_2 + 1) == s_partial_non_retr_001836d0[1]);
    auVar2[2] = -(*(char *)((longlong)param_2 + 2) == s_partial_non_retr_001836d0[2]);
    auVar2[3] = -(*(char *)((longlong)param_2 + 3) == s_partial_non_retr_001836d0[3]);
    auVar2[4] = -(*(char *)((longlong)param_2 + 4) == s_partial_non_retr_001836d0[4]);
    auVar2[5] = -(*(char *)((longlong)param_2 + 5) == s_partial_non_retr_001836d0[5]);
    auVar2[6] = -(*(char *)((longlong)param_2 + 6) == s_partial_non_retr_001836d0[6]);
    auVar2[7] = -(*(char *)((longlong)param_2 + 7) == s_partial_non_retr_001836d0[7]);
    auVar2[8] = -((char)param_2[1] == s_partial_non_retr_001836d0[8]);
    auVar2[9] = -(*(char *)((longlong)param_2 + 9) == s_partial_non_retr_001836d0[9]);
    auVar2[10] = -(*(char *)((longlong)param_2 + 10) == s_partial_non_retr_001836d0[10]);
    auVar2[0xb] = -(*(char *)((longlong)param_2 + 0xb) == s_partial_non_retr_001836d0[0xb]);
    auVar2[0xc] = -(*(char *)((longlong)param_2 + 0xc) == s_partial_non_retr_001836d0[0xc]);
    auVar2[0xd] = -(*(char *)((longlong)param_2 + 0xd) == s_partial_non_retr_001836d0[0xd]);
    auVar2[0xe] = -(*(char *)((longlong)param_2 + 0xe) == s_partial_non_retr_001836d0[0xe]);
    auVar2[0xf] = -(*(char *)((longlong)param_2 + 0xf) == s_partial_non_retr_001836d0[0xf]);
    auVar2 = auVar2 & auVar3;
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
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
  }
  uVar1 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>::
          unknown_variant(param_2,param_3,
                          &anon_ec7f14c74815bf4c93b295cfd0665412_87_llvm_7806621557641746444,4);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *param_1 = 1;
  return;
}


