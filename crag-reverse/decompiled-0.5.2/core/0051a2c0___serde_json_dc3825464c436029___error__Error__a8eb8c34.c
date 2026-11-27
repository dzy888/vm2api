// 0051a2c0 <serde_json[dc3825464c436029]::error::Error>

/* <<craggemini_core[66f3c71560d70857]::resume::ConversationStatus as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_str::<serde_json[dc3825464c436029]::error::Error>
    */

void __rustcall
<<craggemini_core[66f3c71560d70857]::resume::ConversationStatus_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_str::<serde_json[dc3825464c436029]::error::Error>
          (undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  switch(param_3) {
  case 4:
    if ((int)*param_2 == 0x656c6469) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    break;
  case 7:
    if (*(int *)((longlong)param_2 + 3) == 0x676e696e && (int)*param_2 == 0x6e6e7572) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    break;
  case 9:
    if ((char)param_2[1] == 'd' && *param_2 == 0x65646e6570737573) {
LAB_0051a33b:
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    break;
  case 0xb:
    if (*(longlong *)((longlong)param_2 + 3) == 0x6465747075727265 && *param_2 == 0x7075727265746e69
       ) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    break;
  case 0x15:
    auVar3[0] = -(*(char *)((longlong)param_2 + 5) == DAT_00182740);
    auVar3[1] = -(*(char *)((longlong)param_2 + 6) == UNK_00182741);
    auVar3[2] = -(*(char *)((longlong)param_2 + 7) == UNK_00182742);
    auVar3[3] = -((char)param_2[1] == UNK_00182743);
    auVar3[4] = -(*(char *)((longlong)param_2 + 9) == UNK_00182744);
    auVar3[5] = -(*(char *)((longlong)param_2 + 10) == UNK_00182745);
    auVar3[6] = -(*(char *)((longlong)param_2 + 0xb) == UNK_00182746);
    auVar3[7] = -(*(char *)((longlong)param_2 + 0xc) == UNK_00182747);
    auVar3[8] = -(*(char *)((longlong)param_2 + 0xd) == UNK_00182748);
    auVar3[9] = -(*(char *)((longlong)param_2 + 0xe) == UNK_00182749);
    auVar3[10] = -(*(char *)((longlong)param_2 + 0xf) == UNK_0018274a);
    auVar3[0xb] = -((char)param_2[2] == UNK_0018274b);
    auVar3[0xc] = -(*(char *)((longlong)param_2 + 0x11) == UNK_0018274c);
    auVar3[0xd] = -(*(char *)((longlong)param_2 + 0x12) == UNK_0018274d);
    auVar3[0xe] = -(*(char *)((longlong)param_2 + 0x13) == UNK_0018274e);
    auVar3[0xf] = -(*(char *)((longlong)param_2 + 0x14) == UNK_0018274f);
    auVar2[0] = -((char)*param_2 == s_awaiting_tool_re_001828a0[0]);
    auVar2[1] = -(*(char *)((longlong)param_2 + 1) == s_awaiting_tool_re_001828a0[1]);
    auVar2[2] = -(*(char *)((longlong)param_2 + 2) == s_awaiting_tool_re_001828a0[2]);
    auVar2[3] = -(*(char *)((longlong)param_2 + 3) == s_awaiting_tool_re_001828a0[3]);
    auVar2[4] = -(*(char *)((longlong)param_2 + 4) == s_awaiting_tool_re_001828a0[4]);
    auVar2[5] = -(*(char *)((longlong)param_2 + 5) == s_awaiting_tool_re_001828a0[5]);
    auVar2[6] = -(*(char *)((longlong)param_2 + 6) == s_awaiting_tool_re_001828a0[6]);
    auVar2[7] = -(*(char *)((longlong)param_2 + 7) == s_awaiting_tool_re_001828a0[7]);
    auVar2[8] = -((char)param_2[1] == s_awaiting_tool_re_001828a0[8]);
    auVar2[9] = -(*(char *)((longlong)param_2 + 9) == s_awaiting_tool_re_001828a0[9]);
    auVar2[10] = -(*(char *)((longlong)param_2 + 10) == s_awaiting_tool_re_001828a0[10]);
    auVar2[0xb] = -(*(char *)((longlong)param_2 + 0xb) == s_awaiting_tool_re_001828a0[0xb]);
    auVar2[0xc] = -(*(char *)((longlong)param_2 + 0xc) == s_awaiting_tool_re_001828a0[0xc]);
    auVar2[0xd] = -(*(char *)((longlong)param_2 + 0xd) == s_awaiting_tool_re_001828a0[0xd]);
    auVar2[0xe] = -(*(char *)((longlong)param_2 + 0xe) == s_awaiting_tool_re_001828a0[0xe]);
    auVar2[0xf] = -(*(char *)((longlong)param_2 + 0xf) == s_awaiting_tool_re_001828a0[0xf]);
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
                (ushort)(byte)(auVar2[0xf] >> 7) << 0xf) == 0xffff) goto LAB_0051a33b;
  }
  uVar1 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>::
          unknown_variant(param_2,param_3,
                          &anon_ec7f14c74815bf4c93b295cfd0665412_35_llvm_7806621557641746444,5);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *param_1 = 1;
  return;
}


