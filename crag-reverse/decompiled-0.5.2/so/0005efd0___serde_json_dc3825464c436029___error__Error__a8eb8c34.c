// 0005efd0 <serde_json[dc3825464c436029]::error::Error>

/* <<agy_bridge[64a9e9deac6c45ce]::protocol::BridgeToolFilter as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_str::<serde_json[dc3825464c436029]::error::Error>
    */

void __rustcall
<<agy_bridge[64a9e9deac6c45ce]::protocol::BridgeToolFilter_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_str::<serde_json[dc3825464c436029]::error::Error>
          (undefined1 *param_1,longlong *param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if (param_3 == 0xf) {
    if (*(longlong *)((longlong)param_2 + 7) == 0x656c69665f646165 && *param_2 == 0x65725f776f6c6c61
       ) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    if (*(longlong *)((longlong)param_2 + 7) == 0x68637465665f6265 && *param_2 == 0x65775f776f6c6c61
       ) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    if (*(longlong *)((longlong)param_2 + 7) == 0x6e65675f6567616d && *param_2 == 0x6d695f776f6c6c61
       ) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
    if (*(longlong *)((longlong)param_2 + 7) == 0x73746e6567616275 && *param_2 == 0x75735f776f6c6c61
       ) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
    if (*(longlong *)((longlong)param_2 + 7) == 0x6c6f6f745f70636d && *param_2 == 0x6d5f646563726f66
       ) {
      param_1[1] = 6;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0x10) {
    auVar1[0] = -((char)*param_2 ==
                 anon_34149b187fc8a78ca9bac708ccea6bb6_15_llvm_9637358227933645321[0]);
    auVar1[1] = -(*(char *)((longlong)param_2 + 1) ==
                 anon_34149b187fc8a78ca9bac708ccea6bb6_15_llvm_9637358227933645321[1]);
    auVar1[2] = -(*(char *)((longlong)param_2 + 2) ==
                 anon_34149b187fc8a78ca9bac708ccea6bb6_15_llvm_9637358227933645321[2]);
    auVar1[3] = -(*(char *)((longlong)param_2 + 3) ==
                 anon_34149b187fc8a78ca9bac708ccea6bb6_15_llvm_9637358227933645321[3]);
    auVar1[4] = -(*(char *)((longlong)param_2 + 4) ==
                 anon_34149b187fc8a78ca9bac708ccea6bb6_15_llvm_9637358227933645321[4]);
    auVar1[5] = -(*(char *)((longlong)param_2 + 5) ==
                 anon_34149b187fc8a78ca9bac708ccea6bb6_15_llvm_9637358227933645321[5]);
    auVar1[6] = -(*(char *)((longlong)param_2 + 6) ==
                 anon_34149b187fc8a78ca9bac708ccea6bb6_15_llvm_9637358227933645321[6]);
    auVar1[7] = -(*(char *)((longlong)param_2 + 7) ==
                 anon_34149b187fc8a78ca9bac708ccea6bb6_15_llvm_9637358227933645321[7]);
    auVar1[8] = -((char)param_2[1] ==
                 anon_34149b187fc8a78ca9bac708ccea6bb6_15_llvm_9637358227933645321[8]);
    auVar1[9] = -(*(char *)((longlong)param_2 + 9) ==
                 anon_34149b187fc8a78ca9bac708ccea6bb6_15_llvm_9637358227933645321[9]);
    auVar1[10] = -(*(char *)((longlong)param_2 + 10) ==
                  anon_34149b187fc8a78ca9bac708ccea6bb6_15_llvm_9637358227933645321[10]);
    auVar1[0xb] = -(*(char *)((longlong)param_2 + 0xb) ==
                   anon_34149b187fc8a78ca9bac708ccea6bb6_15_llvm_9637358227933645321[0xb]);
    auVar1[0xc] = -(*(char *)((longlong)param_2 + 0xc) ==
                   anon_34149b187fc8a78ca9bac708ccea6bb6_15_llvm_9637358227933645321[0xc]);
    auVar1[0xd] = -(*(char *)((longlong)param_2 + 0xd) ==
                   anon_34149b187fc8a78ca9bac708ccea6bb6_15_llvm_9637358227933645321[0xd]);
    auVar1[0xe] = -(*(char *)((longlong)param_2 + 0xe) ==
                   anon_34149b187fc8a78ca9bac708ccea6bb6_15_llvm_9637358227933645321[0xe]);
    auVar1[0xf] = -(*(char *)((longlong)param_2 + 0xf) ==
                   anon_34149b187fc8a78ca9bac708ccea6bb6_15_llvm_9637358227933645321[0xf]);
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
                 (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe | (ushort)(auVar1[0xf] >> 7) << 0xf)
        == 0xffff) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    auVar2[0] = -((char)*param_2 ==
                 anon_34149b187fc8a78ca9bac708ccea6bb6_17_llvm_9637358227933645321[0]);
    auVar2[1] = -(*(char *)((longlong)param_2 + 1) ==
                 anon_34149b187fc8a78ca9bac708ccea6bb6_17_llvm_9637358227933645321[1]);
    auVar2[2] = -(*(char *)((longlong)param_2 + 2) ==
                 anon_34149b187fc8a78ca9bac708ccea6bb6_17_llvm_9637358227933645321[2]);
    auVar2[3] = -(*(char *)((longlong)param_2 + 3) ==
                 anon_34149b187fc8a78ca9bac708ccea6bb6_17_llvm_9637358227933645321[3]);
    auVar2[4] = -(*(char *)((longlong)param_2 + 4) ==
                 anon_34149b187fc8a78ca9bac708ccea6bb6_17_llvm_9637358227933645321[4]);
    auVar2[5] = -(*(char *)((longlong)param_2 + 5) ==
                 anon_34149b187fc8a78ca9bac708ccea6bb6_17_llvm_9637358227933645321[5]);
    auVar2[6] = -(*(char *)((longlong)param_2 + 6) ==
                 anon_34149b187fc8a78ca9bac708ccea6bb6_17_llvm_9637358227933645321[6]);
    auVar2[7] = -(*(char *)((longlong)param_2 + 7) ==
                 anon_34149b187fc8a78ca9bac708ccea6bb6_17_llvm_9637358227933645321[7]);
    auVar2[8] = -((char)param_2[1] ==
                 anon_34149b187fc8a78ca9bac708ccea6bb6_17_llvm_9637358227933645321[8]);
    auVar2[9] = -(*(char *)((longlong)param_2 + 9) ==
                 anon_34149b187fc8a78ca9bac708ccea6bb6_17_llvm_9637358227933645321[9]);
    auVar2[10] = -(*(char *)((longlong)param_2 + 10) ==
                  anon_34149b187fc8a78ca9bac708ccea6bb6_17_llvm_9637358227933645321[10]);
    auVar2[0xb] = -(*(char *)((longlong)param_2 + 0xb) ==
                   anon_34149b187fc8a78ca9bac708ccea6bb6_17_llvm_9637358227933645321[0xb]);
    auVar2[0xc] = -(*(char *)((longlong)param_2 + 0xc) ==
                   anon_34149b187fc8a78ca9bac708ccea6bb6_17_llvm_9637358227933645321[0xc]);
    auVar2[0xd] = -(*(char *)((longlong)param_2 + 0xd) ==
                   anon_34149b187fc8a78ca9bac708ccea6bb6_17_llvm_9637358227933645321[0xd]);
    auVar2[0xe] = -(*(char *)((longlong)param_2 + 0xe) ==
                   anon_34149b187fc8a78ca9bac708ccea6bb6_17_llvm_9637358227933645321[0xe]);
    auVar2[0xf] = -(*(char *)((longlong)param_2 + 0xf) ==
                   anon_34149b187fc8a78ca9bac708ccea6bb6_17_llvm_9637358227933645321[0xf]);
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
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 7;
  *param_1 = 0;
  return;
}


