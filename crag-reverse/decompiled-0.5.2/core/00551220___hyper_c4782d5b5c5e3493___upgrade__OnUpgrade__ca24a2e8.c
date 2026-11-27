// 00551220 <hyper[c4782d5b5c5e3493]::upgrade::OnUpgrade>

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <http[56314f485c23ccf6]::extensions::Extensions>::insert::<hyper[c4782d5b5c5e3493]::upgrade::OnUpgrade>
    */

undefined1  [16] __rustcall
<http[56314f485c23ccf6]::extensions::Extensions>::insert::
<hyper[c4782d5b5c5e3493]::upgrade::OnUpgrade>(longlong *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 *local_20;
  
  puVar2 = (undefined8 *)*param_1;
  local_20 = param_2;
  if (puVar2 == (undefined8 *)0x0) {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar2 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    uVar4 = _UNK_0078dea8;
    if (puVar2 == (undefined8 *)0x0) {
      (*(code *)PTR_handle_alloc_error_007991d8)();
      goto LAB_0055136d;
    }
    puVar2[2] = _DAT_0078dea0;
    puVar2[3] = uVar4;
    uVar4 = _UNK_0078de98;
    *puVar2 = PTR_anon_48246b2c7bc3818a1cbc30620defa29e_19_llvm_17816610714767121267_0078de90;
    puVar2[1] = uVar4;
    *param_1 = (longlong)puVar2;
  }
  local_38 = param_2;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar3 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar3 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
LAB_0055136d:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  *puVar3 = param_2;
  local_38 = (undefined8 *)
             CONCAT17(UNK_00183db7,
                      CONCAT16(UNK_00183db6,
                               CONCAT15(UNK_00183db5,
                                        CONCAT14(UNK_00183db4,
                                                 CONCAT13(UNK_00183db3,
                                                          CONCAT12(UNK_00183db2,
                                                                   CONCAT11(UNK_00183db1,
                                                                            DAT_00183db0)))))));
  uStack_30 = CONCAT17(UNK_00183dbf,
                       CONCAT16(UNK_00183dbe,
                                CONCAT15(UNK_00183dbd,
                                         CONCAT14(UNK_00183dbc,
                                                  CONCAT13(UNK_00183dbb,
                                                           CONCAT12(UNK_00183dba,
                                                                    CONCAT11(UNK_00183db9,
                                                                             UNK_00183db8)))))));
  auVar5 = <hashbrown[b5c94476ffc33875]::map::HashMap<core[c0acaeba6ab4c2e0]::any::TypeId,alloc[12e961f32105355]::boxed::Box<dyn_http[56314f485c23ccf6]::extensions::AnyClone+core[c0acaeba6ab4c2e0]::marker::Send+core[c0acaeba6ab4c2e0]::marker::Sync>,core[c0acaeba6ab4c2e0]::hash::BuildHasherDefault<http[56314f485c23ccf6]::extensions::IdHasher>>>
           ::insert(puVar2,&local_38,puVar3,
                    &PTR_<hyper[c4782d5b5c5e3493]::upgrade::OnUpgrade>_0078db20);
  puVar2 = auVar5._8_8_;
  if (auVar5._0_8_ != 0) {
    param_2 = (undefined8 *)(*(code *)puVar2[7])();
    (*(code *)puVar2[3])();
    auVar5[0] = -((char)local_38 == DAT_00183db0);
    auVar5[1] = -(local_38._1_1_ == UNK_00183db1);
    auVar5[2] = -(local_38._2_1_ == UNK_00183db2);
    auVar5[3] = -(local_38._3_1_ == UNK_00183db3);
    auVar5[4] = -(local_38._4_1_ == UNK_00183db4);
    auVar5[5] = -(local_38._5_1_ == UNK_00183db5);
    auVar5[6] = -(local_38._6_1_ == UNK_00183db6);
    auVar5[7] = -(local_38._7_1_ == UNK_00183db7);
    auVar5[8] = -((char)uStack_30 == UNK_00183db8);
    auVar5[9] = -(uStack_30._1_1_ == UNK_00183db9);
    auVar5[10] = -(uStack_30._2_1_ == UNK_00183dba);
    auVar5[0xb] = -(uStack_30._3_1_ == UNK_00183dbb);
    auVar5[0xc] = -(uStack_30._4_1_ == UNK_00183dbc);
    auVar5[0xd] = -(uStack_30._5_1_ == UNK_00183dbd);
    auVar5[0xe] = -(uStack_30._6_1_ == UNK_00183dbe);
    auVar5[0xf] = -(uStack_30._7_1_ == UNK_00183dbf);
    puVar3 = param_2;
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
                 (ushort)(SUB161(auVar5 >> 0x77,0) & 1) << 0xe | (ushort)(auVar5[0xf] >> 7) << 0xf)
        != 0xffff) {
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)();
      }
      puVar3 = (undefined8 *)0x0;
      if (puVar2[1] != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
    }
    if (puVar3 != (undefined8 *)0x0) {
      param_2 = (undefined8 *)*param_2;
      (*(code *)PTR___rust_dealloc_00798fc8)();
      uVar4 = 1;
      goto LAB_0055133e;
    }
  }
  uVar4 = 0;
LAB_0055133e:
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = uVar4;
  return auVar6;
}


