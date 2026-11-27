// 006b5e40 <hyper[c4782d5b5c5e3493]::ext::HeaderCaseMap>

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <http[56314f485c23ccf6]::extensions::Extensions>::insert::<hyper[c4782d5b5c5e3493]::ext::HeaderCaseMap>
    */

undefined8 * __rustcall
<http[56314f485c23ccf6]::extensions::Extensions>::insert::
<hyper[c4782d5b5c5e3493]::ext::HeaderCaseMap>
          (undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined1 auVar18 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  
  puVar15 = (undefined8 *)*param_2;
  if (puVar15 == (undefined8 *)0x0) {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar15 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    uVar13 = _UNK_00792830;
    if (puVar15 == (undefined8 *)0x0) {
      (*(code *)PTR_handle_alloc_error_007991d8)();
      goto LAB_006b5ff6;
    }
    puVar15[2] = _DAT_00792828;
    puVar15[3] = uVar13;
    uVar13 = _UNK_00792820;
    *puVar15 = PTR_anon_48246b2c7bc3818a1cbc30620defa29e_19_llvm_17816610714767121267_00792818;
    puVar15[1] = uVar13;
    *param_2 = (longlong)puVar15;
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar16 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar16 != (undefined8 *)0x0) {
    uVar13 = param_3[0xb];
    puVar16[10] = param_3[10];
    puVar16[0xb] = uVar13;
    uVar13 = param_3[9];
    puVar16[8] = param_3[8];
    puVar16[9] = uVar13;
    uVar13 = *param_3;
    uVar14 = param_3[1];
    uVar2 = *(undefined4 *)(param_3 + 2);
    uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
    uVar4 = *(undefined4 *)(param_3 + 3);
    uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
    uVar6 = *(undefined4 *)(param_3 + 4);
    uVar7 = *(undefined4 *)((longlong)param_3 + 0x24);
    uVar8 = *(undefined4 *)(param_3 + 5);
    uVar9 = *(undefined4 *)((longlong)param_3 + 0x2c);
    uVar10 = *(undefined4 *)((longlong)param_3 + 0x34);
    uVar11 = *(undefined4 *)(param_3 + 7);
    uVar12 = *(undefined4 *)((longlong)param_3 + 0x3c);
    *(undefined4 *)(puVar16 + 6) = *(undefined4 *)(param_3 + 6);
    *(undefined4 *)((longlong)puVar16 + 0x34) = uVar10;
    *(undefined4 *)(puVar16 + 7) = uVar11;
    *(undefined4 *)((longlong)puVar16 + 0x3c) = uVar12;
    *(undefined4 *)(puVar16 + 4) = uVar6;
    *(undefined4 *)((longlong)puVar16 + 0x24) = uVar7;
    *(undefined4 *)(puVar16 + 5) = uVar8;
    *(undefined4 *)((longlong)puVar16 + 0x2c) = uVar9;
    *(undefined4 *)(puVar16 + 2) = uVar2;
    *(undefined4 *)((longlong)puVar16 + 0x14) = uVar3;
    *(undefined4 *)(puVar16 + 3) = uVar4;
    *(undefined4 *)((longlong)puVar16 + 0x1c) = uVar5;
    *puVar16 = uVar13;
    puVar16[1] = uVar14;
    local_38 = CONCAT17(anon_90eb8c4c6a9d98b55047fd32358d1202_3_llvm_244432372481192921[7],
                        CONCAT16(anon_90eb8c4c6a9d98b55047fd32358d1202_3_llvm_244432372481192921[6],
                                 CONCAT15(anon_90eb8c4c6a9d98b55047fd32358d1202_3_llvm_244432372481192921
                                          [5],CONCAT14(
                                                  anon_90eb8c4c6a9d98b55047fd32358d1202_3_llvm_244432372481192921
                                                  [4],CONCAT13(
                                                  anon_90eb8c4c6a9d98b55047fd32358d1202_3_llvm_244432372481192921
                                                  [3],CONCAT12(
                                                  anon_90eb8c4c6a9d98b55047fd32358d1202_3_llvm_244432372481192921
                                                  [2],CONCAT11(
                                                  anon_90eb8c4c6a9d98b55047fd32358d1202_3_llvm_244432372481192921
                                                  [1],
                                                  anon_90eb8c4c6a9d98b55047fd32358d1202_3_llvm_244432372481192921
                                                  [0])))))));
    uStack_30 = CONCAT17(anon_90eb8c4c6a9d98b55047fd32358d1202_3_llvm_244432372481192921[0xf],
                         CONCAT16(anon_90eb8c4c6a9d98b55047fd32358d1202_3_llvm_244432372481192921
                                  [0xe],CONCAT15(anon_90eb8c4c6a9d98b55047fd32358d1202_3_llvm_244432372481192921
                                                 [0xd],CONCAT14(
                                                  anon_90eb8c4c6a9d98b55047fd32358d1202_3_llvm_244432372481192921
                                                  [0xc],CONCAT13(
                                                  anon_90eb8c4c6a9d98b55047fd32358d1202_3_llvm_244432372481192921
                                                  [0xb],CONCAT12(
                                                  anon_90eb8c4c6a9d98b55047fd32358d1202_3_llvm_244432372481192921
                                                  [10],CONCAT11(
                                                  anon_90eb8c4c6a9d98b55047fd32358d1202_3_llvm_244432372481192921
                                                  [9],
                                                  anon_90eb8c4c6a9d98b55047fd32358d1202_3_llvm_244432372481192921
                                                  [8])))))));
    auVar18 = <hashbrown[b5c94476ffc33875]::map::HashMap<core[c0acaeba6ab4c2e0]::any::TypeId,alloc[12e961f32105355]::boxed::Box<dyn_http[56314f485c23ccf6]::extensions::AnyClone+core[c0acaeba6ab4c2e0]::marker::Send+core[c0acaeba6ab4c2e0]::marker::Sync>,core[c0acaeba6ab4c2e0]::hash::BuildHasherDefault<http[56314f485c23ccf6]::extensions::IdHasher>>>
              ::insert(puVar15,&local_38,puVar16,
                       &PTR_<hyper[c4782d5b5c5e3493]::ext::HeaderCaseMap>_007925f0);
    puVar15 = auVar18._8_8_;
    if (auVar18._0_8_ != 0) {
      puVar17 = (undefined8 *)(*(code *)puVar15[7])();
      (*(code *)puVar15[3])();
      auVar18[0] = -((char)local_38 ==
                    anon_90eb8c4c6a9d98b55047fd32358d1202_3_llvm_244432372481192921[0]);
      auVar18[1] = -(local_38._1_1_ ==
                    anon_90eb8c4c6a9d98b55047fd32358d1202_3_llvm_244432372481192921[1]);
      auVar18[2] = -(local_38._2_1_ ==
                    anon_90eb8c4c6a9d98b55047fd32358d1202_3_llvm_244432372481192921[2]);
      auVar18[3] = -(local_38._3_1_ ==
                    anon_90eb8c4c6a9d98b55047fd32358d1202_3_llvm_244432372481192921[3]);
      auVar18[4] = -(local_38._4_1_ ==
                    anon_90eb8c4c6a9d98b55047fd32358d1202_3_llvm_244432372481192921[4]);
      auVar18[5] = -(local_38._5_1_ ==
                    anon_90eb8c4c6a9d98b55047fd32358d1202_3_llvm_244432372481192921[5]);
      auVar18[6] = -(local_38._6_1_ ==
                    anon_90eb8c4c6a9d98b55047fd32358d1202_3_llvm_244432372481192921[6]);
      auVar18[7] = -(local_38._7_1_ ==
                    anon_90eb8c4c6a9d98b55047fd32358d1202_3_llvm_244432372481192921[7]);
      auVar18[8] = -((char)uStack_30 ==
                    anon_90eb8c4c6a9d98b55047fd32358d1202_3_llvm_244432372481192921[8]);
      auVar18[9] = -(uStack_30._1_1_ ==
                    anon_90eb8c4c6a9d98b55047fd32358d1202_3_llvm_244432372481192921[9]);
      auVar18[10] = -(uStack_30._2_1_ ==
                     anon_90eb8c4c6a9d98b55047fd32358d1202_3_llvm_244432372481192921[10]);
      auVar18[0xb] = -(uStack_30._3_1_ ==
                      anon_90eb8c4c6a9d98b55047fd32358d1202_3_llvm_244432372481192921[0xb]);
      auVar18[0xc] = -(uStack_30._4_1_ ==
                      anon_90eb8c4c6a9d98b55047fd32358d1202_3_llvm_244432372481192921[0xc]);
      auVar18[0xd] = -(uStack_30._5_1_ ==
                      anon_90eb8c4c6a9d98b55047fd32358d1202_3_llvm_244432372481192921[0xd]);
      auVar18[0xe] = -(uStack_30._6_1_ ==
                      anon_90eb8c4c6a9d98b55047fd32358d1202_3_llvm_244432372481192921[0xe]);
      auVar18[0xf] = -(uStack_30._7_1_ ==
                      anon_90eb8c4c6a9d98b55047fd32358d1202_3_llvm_244432372481192921[0xf]);
      puVar16 = puVar17;
      if ((ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar18[0xf] >> 7) << 0xf) != 0xffff) {
        if ((code *)*puVar15 != (code *)0x0) {
          (*(code *)*puVar15)();
        }
        puVar16 = (undefined8 *)0x0;
        if (puVar15[1] != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
      }
      if (puVar16 != (undefined8 *)0x0) {
        uVar13 = puVar17[0xb];
        param_1[10] = puVar17[10];
        param_1[0xb] = uVar13;
        uVar13 = puVar17[9];
        param_1[8] = puVar17[8];
        param_1[9] = uVar13;
        uVar13 = *puVar17;
        uVar14 = puVar17[1];
        uVar2 = *(undefined4 *)(puVar17 + 2);
        uVar3 = *(undefined4 *)((longlong)puVar17 + 0x14);
        uVar4 = *(undefined4 *)(puVar17 + 3);
        uVar5 = *(undefined4 *)((longlong)puVar17 + 0x1c);
        uVar6 = *(undefined4 *)(puVar17 + 4);
        uVar7 = *(undefined4 *)((longlong)puVar17 + 0x24);
        uVar8 = *(undefined4 *)(puVar17 + 5);
        uVar9 = *(undefined4 *)((longlong)puVar17 + 0x2c);
        uVar10 = *(undefined4 *)((longlong)puVar17 + 0x34);
        uVar11 = *(undefined4 *)(puVar17 + 7);
        uVar12 = *(undefined4 *)((longlong)puVar17 + 0x3c);
        *(undefined4 *)(param_1 + 6) = *(undefined4 *)(puVar17 + 6);
        *(undefined4 *)((longlong)param_1 + 0x34) = uVar10;
        *(undefined4 *)(param_1 + 7) = uVar11;
        *(undefined4 *)((longlong)param_1 + 0x3c) = uVar12;
        *(undefined4 *)(param_1 + 4) = uVar6;
        *(undefined4 *)((longlong)param_1 + 0x24) = uVar7;
        *(undefined4 *)(param_1 + 5) = uVar8;
        *(undefined4 *)((longlong)param_1 + 0x2c) = uVar9;
        *(undefined4 *)(param_1 + 2) = uVar2;
        *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
        *(undefined4 *)(param_1 + 3) = uVar4;
        *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
        *param_1 = uVar13;
        param_1[1] = uVar14;
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,8);
        return param_1;
      }
    }
    *param_1 = 0xffffffffffffffff;
    return param_1;
  }
  (*(code *)PTR_handle_alloc_error_007991d8)();
LAB_006b5ff6:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


