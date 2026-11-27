// 006008b0 <core[c0acaeba6ab4c2e0]::marker::PhantomData<<craggemini_core[66f3c71560d70857]::protocol::GatewayPolicy_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>>

/* <serde_json[dc3825464c436029]::value::de::MapDeserializer as
   serde_core[48776c27239fa21f]::de::MapAccess>::next_key_seed::<core[c0acaeba6ab4c2e0]::marker::PhantomData<<craggemini_core[66f3c71560d70857]::protocol::GatewayPolicy
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>> */

undefined1 * __rustcall
<serde_json[dc3825464c436029]::value::de::MapDeserializer_as_serde_core[48776c27239fa21f]::de::MapAccess>
::next_key_seed::
<core[c0acaeba6ab4c2e0]::marker::PhantomData<<craggemini_core[66f3c71560d70857]::protocol::GatewayPolicy_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>>
          (undefined1 *param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  longlong local_48 [2];
  longlong local_38;
  
  <alloc[12e961f32105355]::collections::btree::map::IntoIter<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
  ::dying_next(local_48);
  if (local_48[0] == 0) {
LAB_0060099b:
    param_1[1] = 0xff;
  }
  else {
    lVar2 = *(longlong *)(local_48[0] + 0x168 + local_38 * 0x18);
    plVar3 = *(longlong **)(local_48[0] + 0x170 + local_38 * 0x18);
    lVar10 = *(longlong *)(local_48[0] + 0x178 + local_38 * 0x18);
    puVar11 = (undefined8 *)(local_48[0] + local_38 * 0x20);
    uVar12 = *puVar11;
    uVar4 = puVar11[1];
    puVar11 = (undefined8 *)(local_48[0] + 0x10 + local_38 * 0x20);
    uVar5 = *puVar11;
    uVar6 = puVar11[1];
    if (lVar2 == -1) goto LAB_0060099b;
    puVar11 = (undefined8 *)(param_2 + 0x48);
    if (*(char *)(param_2 + 0x48) != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(puVar11);
    }
    *(undefined8 *)(param_2 + 0x58) = uVar5;
    *(undefined8 *)(param_2 + 0x60) = uVar6;
    *puVar11 = uVar12;
    *(undefined8 *)(param_2 + 0x50) = uVar4;
    if (lVar10 == 0xd) {
      if (*(longlong *)((longlong)plVar3 + 5) !=
          CONCAT53(s__wait_ms_0019955e._3_5_,s__wait_ms_0019955e._0_3_) ||
          *plVar3 !=
          CONCAT35(s__wait_ms_0019955e._0_3_,
                   anon_2c3f00c6db51fc4e52b1607637b553f4_15_llvm_6489901693990513673))
      goto LAB_006009c2;
      uVar9 = 0;
      bVar8 = false;
      bVar7 = false;
    }
    else {
      if (lVar10 == 0x15) {
        auVar13[0] = -((char)*plVar3 ==
                      anon_2c3f00c6db51fc4e52b1607637b553f4_16_llvm_6489901693990513673[0]);
        auVar13[1] = -(*(char *)((longlong)plVar3 + 1) ==
                      anon_2c3f00c6db51fc4e52b1607637b553f4_16_llvm_6489901693990513673[1]);
        auVar13[2] = -(*(char *)((longlong)plVar3 + 2) ==
                      anon_2c3f00c6db51fc4e52b1607637b553f4_16_llvm_6489901693990513673[2]);
        auVar13[3] = -(*(char *)((longlong)plVar3 + 3) ==
                      anon_2c3f00c6db51fc4e52b1607637b553f4_16_llvm_6489901693990513673[3]);
        auVar13[4] = -(*(char *)((longlong)plVar3 + 4) ==
                      anon_2c3f00c6db51fc4e52b1607637b553f4_16_llvm_6489901693990513673[4]);
        auVar13[5] = -(*(char *)((longlong)plVar3 + 5) == s__byte_timeout_ms_0019956b[0]);
        auVar13[6] = -(*(char *)((longlong)plVar3 + 6) == s__byte_timeout_ms_0019956b[1]);
        auVar13[7] = -(*(char *)((longlong)plVar3 + 7) == s__byte_timeout_ms_0019956b[2]);
        auVar13[8] = -((char)plVar3[1] == s__byte_timeout_ms_0019956b[3]);
        auVar13[9] = -(*(char *)((longlong)plVar3 + 9) == s__byte_timeout_ms_0019956b[4]);
        auVar13[10] = -(*(char *)((longlong)plVar3 + 10) == s__byte_timeout_ms_0019956b[5]);
        auVar13[0xb] = -(*(char *)((longlong)plVar3 + 0xb) == s__byte_timeout_ms_0019956b[6]);
        auVar13[0xc] = -(*(char *)((longlong)plVar3 + 0xc) == s__byte_timeout_ms_0019956b[7]);
        auVar13[0xd] = -(*(char *)((longlong)plVar3 + 0xd) == s__byte_timeout_ms_0019956b[8]);
        auVar13[0xe] = -(*(char *)((longlong)plVar3 + 0xe) == s__byte_timeout_ms_0019956b[9]);
        auVar13[0xf] = -(*(char *)((longlong)plVar3 + 0xf) == s__byte_timeout_ms_0019956b[10]);
        auVar1 = *(undefined1 (*) [16])((longlong)plVar3 + 5);
        uVar12 = auVar1._0_8_;
        auVar15[0] = -(s__byte_timeout_ms_0019956b[0] == auVar1[0]);
        auVar15[1] = -(s__byte_timeout_ms_0019956b[1] == auVar1[1]);
        auVar15[2] = -(s__byte_timeout_ms_0019956b[2] == auVar1[2]);
        auVar15[3] = -(s__byte_timeout_ms_0019956b[3] == auVar1[3]);
        auVar15[4] = -(s__byte_timeout_ms_0019956b[4] == auVar1[4]);
        auVar15[5] = -(s__byte_timeout_ms_0019956b[5] == auVar1[5]);
        auVar15[6] = -(s__byte_timeout_ms_0019956b[6] == auVar1[6]);
        auVar15[7] = -(s__byte_timeout_ms_0019956b[7] == auVar1[7]);
        auVar15[8] = -(s__byte_timeout_ms_0019956b[8] == auVar1[8]);
        auVar15[9] = -(s__byte_timeout_ms_0019956b[9] == auVar1[9]);
        auVar15[10] = -(s__byte_timeout_ms_0019956b[10] == auVar1[10]);
        auVar15[0xb] = -(s__byte_timeout_ms_0019956b[0xb] == auVar1[0xb]);
        auVar15[0xc] = -(s__byte_timeout_ms_0019956b[0xc] == auVar1[0xc]);
        auVar15[0xd] = -(s__byte_timeout_ms_0019956b[0xd] == auVar1[0xd]);
        auVar15[0xe] = -(s__byte_timeout_ms_0019956b[0xe] == auVar1[0xe]);
        auVar15[0xf] = -(s__byte_timeout_ms_0019956b[0xf] == auVar1[0xf]);
        auVar15 = auVar15 & auVar13;
        if ((ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar15[0xf] >> 7) << 0xf) != 0xffff) goto LAB_006009c2;
        puVar11 = (undefined8 *)0x1;
joined_r0x00600a27:
        bVar8 = false;
        bVar7 = false;
      }
      else {
        if (lVar10 == 0x16) {
          auVar14[0] = -((char)*plVar3 ==
                        anon_2c3f00c6db51fc4e52b1607637b553f4_17_llvm_6489901693990513673[0]);
          auVar14[1] = -(*(char *)((longlong)plVar3 + 1) ==
                        anon_2c3f00c6db51fc4e52b1607637b553f4_17_llvm_6489901693990513673[1]);
          auVar14[2] = -(*(char *)((longlong)plVar3 + 2) ==
                        anon_2c3f00c6db51fc4e52b1607637b553f4_17_llvm_6489901693990513673[2]);
          auVar14[3] = -(*(char *)((longlong)plVar3 + 3) ==
                        anon_2c3f00c6db51fc4e52b1607637b553f4_17_llvm_6489901693990513673[3]);
          auVar14[4] = -(*(char *)((longlong)plVar3 + 4) ==
                        anon_2c3f00c6db51fc4e52b1607637b553f4_17_llvm_6489901693990513673[4]);
          auVar14[5] = -(*(char *)((longlong)plVar3 + 5) ==
                        anon_2c3f00c6db51fc4e52b1607637b553f4_17_llvm_6489901693990513673[5]);
          auVar14[6] = -(*(char *)((longlong)plVar3 + 6) == s__idle_timeout_ms_00199581[0]);
          auVar14[7] = -(*(char *)((longlong)plVar3 + 7) == s__idle_timeout_ms_00199581[1]);
          auVar14[8] = -((char)plVar3[1] == s__idle_timeout_ms_00199581[2]);
          auVar14[9] = -(*(char *)((longlong)plVar3 + 9) == s__idle_timeout_ms_00199581[3]);
          auVar14[10] = -(*(char *)((longlong)plVar3 + 10) == s__idle_timeout_ms_00199581[4]);
          auVar14[0xb] = -(*(char *)((longlong)plVar3 + 0xb) == s__idle_timeout_ms_00199581[5]);
          auVar14[0xc] = -(*(char *)((longlong)plVar3 + 0xc) == s__idle_timeout_ms_00199581[6]);
          auVar14[0xd] = -(*(char *)((longlong)plVar3 + 0xd) == s__idle_timeout_ms_00199581[7]);
          auVar14[0xe] = -(*(char *)((longlong)plVar3 + 0xe) == s__idle_timeout_ms_00199581[8]);
          auVar14[0xf] = -(*(char *)((longlong)plVar3 + 0xf) == s__idle_timeout_ms_00199581[9]);
          auVar1 = *(undefined1 (*) [16])((longlong)plVar3 + 6);
          uVar12 = auVar1._0_8_;
          auVar16[0] = -(s__idle_timeout_ms_00199581[0] == auVar1[0]);
          auVar16[1] = -(s__idle_timeout_ms_00199581[1] == auVar1[1]);
          auVar16[2] = -(s__idle_timeout_ms_00199581[2] == auVar1[2]);
          auVar16[3] = -(s__idle_timeout_ms_00199581[3] == auVar1[3]);
          auVar16[4] = -(s__idle_timeout_ms_00199581[4] == auVar1[4]);
          auVar16[5] = -(s__idle_timeout_ms_00199581[5] == auVar1[5]);
          auVar16[6] = -(s__idle_timeout_ms_00199581[6] == auVar1[6]);
          auVar16[7] = -(s__idle_timeout_ms_00199581[7] == auVar1[7]);
          auVar16[8] = -(s__idle_timeout_ms_00199581[8] == auVar1[8]);
          auVar16[9] = -(s__idle_timeout_ms_00199581[9] == auVar1[9]);
          auVar16[10] = -(s__idle_timeout_ms_00199581[10] == auVar1[10]);
          auVar16[0xb] = -(s__idle_timeout_ms_00199581[0xb] == auVar1[0xb]);
          auVar16[0xc] = -(s__idle_timeout_ms_00199581[0xc] == auVar1[0xc]);
          auVar16[0xd] = -(s__idle_timeout_ms_00199581[0xd] == auVar1[0xd]);
          auVar16[0xe] = -(s__idle_timeout_ms_00199581[0xe] == auVar1[0xe]);
          auVar16[0xf] = -(s__idle_timeout_ms_00199581[0xf] == auVar1[0xf]);
          auVar16 = auVar16 & auVar14;
          if ((ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar16[0xf] >> 7) << 0xf) == 0xffff) {
            puVar11 = (undefined8 *)0x2;
            goto joined_r0x00600a27;
          }
        }
LAB_006009c2:
        lVar10 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                 ::unknown_field(plVar3,lVar10,
                                 &anon_2c3f00c6db51fc4e52b1607637b553f4_18_llvm_6489901693990513673,
                                 3);
        bVar8 = true;
        bVar7 = true;
        uVar12 = extraout_XMM0_Qa;
      }
      uVar9 = SUB81(puVar11,0);
    }
    if (lVar2 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
      bVar7 = bVar8;
    }
    if (bVar7) {
      *(longlong *)(param_1 + 8) = lVar10;
      uVar9 = 1;
      goto LAB_00600a4d;
    }
    param_1[1] = uVar9;
  }
  uVar9 = 0;
LAB_00600a4d:
  *param_1 = uVar9;
  return param_1;
}


