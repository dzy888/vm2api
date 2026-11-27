// 005f34b0 restore_original_tool_name

/* craggemini_core[66f3c71560d70857]::tools::restore_original_tool_name */

longlong * __rustcall
craggemini_core[66f3c71560d70857]::tools::restore_original_tool_name
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          longlong param_5,longlong *param_6)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 uVar11;
  byte bVar12;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  undefined1 local_48 [16];
  
  auVar18 = schema::strip_mcp_prefix(param_4,param_5);
  lVar9 = auVar18._8_8_;
  if ((param_6 != (longlong *)0x0) && (param_6[3] != 0)) {
    uVar7 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
            ::hash_one::<&str>(param_6 + 4,param_4,param_5);
    lVar8 = *param_6;
    uVar1 = param_6[1];
    bVar12 = (byte)(uVar7 >> 0x39);
    auVar13 = ZEXT216(CONCAT11(bVar12,bVar12));
    auVar13 = pshuflw(auVar13,auVar13,0);
    lVar10 = 0;
    while( true ) {
      uVar7 = uVar7 & uVar1;
      auVar15 = *(undefined1 (*) [16])(lVar8 + uVar7);
      auVar14[0] = -(auVar15[0] == auVar13[0]);
      auVar14[1] = -(auVar15[1] == auVar13[1]);
      auVar14[2] = -(auVar15[2] == auVar13[2]);
      auVar14[3] = -(auVar15[3] == auVar13[3]);
      auVar14[4] = -(auVar15[4] == auVar13[4]);
      auVar14[5] = -(auVar15[5] == auVar13[5]);
      auVar14[6] = -(auVar15[6] == auVar13[6]);
      auVar14[7] = -(auVar15[7] == auVar13[7]);
      auVar14[8] = -(auVar15[8] == auVar13[0]);
      auVar14[9] = -(auVar15[9] == auVar13[1]);
      auVar14[10] = -(auVar15[10] == auVar13[2]);
      auVar14[0xb] = -(auVar15[0xb] == auVar13[3]);
      auVar14[0xc] = -(auVar15[0xc] == auVar13[4]);
      auVar14[0xd] = -(auVar15[0xd] == auVar13[5]);
      auVar14[0xe] = -(auVar15[0xe] == auVar13[6]);
      auVar14[0xf] = -(auVar15[0xf] == auVar13[7]);
      uVar4 = (ushort)(SUB161(auVar14 >> 7,0) & 1) | (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe | (ushort)(auVar14[0xf] >> 7) << 0xf;
      uVar5 = (uint)uVar4;
      if (uVar4 != 0) {
        local_48 = auVar15;
        do {
          uVar2 = 0;
          for (uVar3 = uVar5; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
            uVar2 = uVar2 + 1;
          }
          if ((param_5 == *(longlong *)(lVar8 + -0x20 + (uVar2 + uVar7 & uVar1) * -0x30)) &&
             (iVar6 = (*(code *)PTR_bcmp_00799020)(uVar1,param_5), iVar6 == 0)) goto LAB_005f3764;
          uVar4 = (ushort)(uVar5 - 1) & (ushort)uVar5;
          uVar5 = CONCAT22((short)(uVar5 - 1 >> 0x10),uVar4);
          auVar15 = local_48;
        } while (uVar4 != 0);
      }
      auVar16[0] = -(auVar15[0] == -1);
      auVar16[1] = -(auVar15[1] == -1);
      auVar16[2] = -(auVar15[2] == -1);
      auVar16[3] = -(auVar15[3] == -1);
      auVar16[4] = -(auVar15[4] == -1);
      auVar16[5] = -(auVar15[5] == -1);
      auVar16[6] = -(auVar15[6] == -1);
      auVar16[7] = -(auVar15[7] == -1);
      auVar16[8] = -(auVar15[8] == -1);
      auVar16[9] = -(auVar15[9] == -1);
      auVar16[10] = -(auVar15[10] == -1);
      auVar16[0xb] = -(auVar15[0xb] == -1);
      auVar16[0xc] = -(auVar15[0xc] == -1);
      auVar16[0xd] = -(auVar15[0xd] == -1);
      auVar16[0xe] = -(auVar15[0xe] == -1);
      auVar16[0xf] = -(auVar15[0xf] == -1);
      if ((((((((((((((((SUB161(auVar16 >> 7,0) & 1) != 0 || (SUB161(auVar16 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar16 >> 0x17,0) & 1) != 0) || (SUB161(auVar16 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar16 >> 0x27,0) & 1) != 0) || (SUB161(auVar16 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar16 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar16 >> 0x3f,0) & 1) != 0) || (SUB161(auVar16 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar16 >> 0x4f,0) & 1) != 0) || (SUB161(auVar16 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar16 >> 0x5f,0) & 1) != 0) || (SUB161(auVar16 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar16 >> 0x6f,0) & 1) != 0) || (SUB161(auVar16 >> 0x77,0) & 1) != 0) ||
          auVar16[0xf] < '\0') break;
      uVar7 = uVar7 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
    uVar7 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
            ::hash_one::<&str>(param_6 + 4,auVar18._0_8_,lVar9);
    bVar12 = (byte)(uVar7 >> 0x39);
    auVar18 = ZEXT216(CONCAT11(bVar12,bVar12));
    auVar18 = pshuflw(auVar18,auVar18,0);
    lVar10 = 0;
    do {
      uVar7 = uVar7 & uVar1;
      auVar13 = *(undefined1 (*) [16])(lVar8 + uVar7);
      auVar15[0] = -(auVar13[0] == auVar18[0]);
      auVar15[1] = -(auVar13[1] == auVar18[1]);
      auVar15[2] = -(auVar13[2] == auVar18[2]);
      auVar15[3] = -(auVar13[3] == auVar18[3]);
      auVar15[4] = -(auVar13[4] == auVar18[4]);
      auVar15[5] = -(auVar13[5] == auVar18[5]);
      auVar15[6] = -(auVar13[6] == auVar18[6]);
      auVar15[7] = -(auVar13[7] == auVar18[7]);
      auVar15[8] = -(auVar13[8] == auVar18[0]);
      auVar15[9] = -(auVar13[9] == auVar18[1]);
      auVar15[10] = -(auVar13[10] == auVar18[2]);
      auVar15[0xb] = -(auVar13[0xb] == auVar18[3]);
      auVar15[0xc] = -(auVar13[0xc] == auVar18[4]);
      auVar15[0xd] = -(auVar13[0xd] == auVar18[5]);
      auVar15[0xe] = -(auVar13[0xe] == auVar18[6]);
      auVar15[0xf] = -(auVar13[0xf] == auVar18[7]);
      uVar4 = (ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
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
              (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe | (ushort)(auVar15[0xf] >> 7) << 0xf;
      uVar5 = (uint)uVar4;
      if (uVar4 != 0) {
        do {
          uVar2 = 0;
          for (uVar3 = uVar5; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
            uVar2 = uVar2 + 1;
          }
          if ((lVar9 == *(longlong *)(lVar8 + -0x20 + (uVar2 + uVar7 & uVar1) * -0x30)) &&
             (iVar6 = (*(code *)PTR_bcmp_00799020)(lVar9,lVar9), iVar6 == 0)) {
LAB_005f3764:
            (*(code *)PTR_clone_00798fd0)();
            return param_1;
          }
          uVar4 = (ushort)(uVar5 - 1) & (ushort)uVar5;
          uVar5 = CONCAT22((short)(uVar5 - 1 >> 0x10),uVar4);
        } while (uVar4 != 0);
      }
      auVar17[0] = -(auVar13[0] == -1);
      auVar17[1] = -(auVar13[1] == -1);
      auVar17[2] = -(auVar13[2] == -1);
      auVar17[3] = -(auVar13[3] == -1);
      auVar17[4] = -(auVar13[4] == -1);
      auVar17[5] = -(auVar13[5] == -1);
      auVar17[6] = -(auVar13[6] == -1);
      auVar17[7] = -(auVar13[7] == -1);
      auVar17[8] = -(auVar13[8] == -1);
      auVar17[9] = -(auVar13[9] == -1);
      auVar17[10] = -(auVar13[10] == -1);
      auVar17[0xb] = -(auVar13[0xb] == -1);
      auVar17[0xc] = -(auVar13[0xc] == -1);
      auVar17[0xd] = -(auVar13[0xd] == -1);
      auVar17[0xe] = -(auVar13[0xe] == -1);
      auVar17[0xf] = -(auVar13[0xf] == -1);
      if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 || (SUB161(auVar17 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar17 >> 0x17,0) & 1) != 0) || (SUB161(auVar17 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar17 >> 0x27,0) & 1) != 0) || (SUB161(auVar17 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar17 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar17 >> 0x3f,0) & 1) != 0) || (SUB161(auVar17 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar17 >> 0x4f,0) & 1) != 0) || (SUB161(auVar17 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar17 >> 0x5f,0) & 1) != 0) || (SUB161(auVar17 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar17 >> 0x6f,0) & 1) != 0) || (SUB161(auVar17 >> 0x77,0) & 1) != 0) ||
          auVar17[0xf] < '\0') break;
      uVar7 = uVar7 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    } while( true );
  }
  if (schema::global_tool_name_cache::CACHE._112_4_ != 0) {
    <std[6c98fd8553dbae28]::sync::once_lock::OnceLock<craggemini_core[66f3c71560d70857]::schema::ToolNameCache>>
    ::initialize::
    <<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<craggemini_core[66f3c71560d70857]::schema::ToolNameCache>>::get_or_init<<craggemini_core[66f3c71560d70857]::schema::ToolNameCache>::new>::_closure_0_,_>
              (schema::global_tool_name_cache::CACHE);
  }
  <craggemini_core[66f3c71560d70857]::schema::ToolNameCache>::resolve
            (&local_60,schema::global_tool_name_cache::CACHE,param_2,param_3,param_4,param_5);
  if (local_60 == -1) {
    uVar11 = lVar9 == 0;
    if (-1 < lVar9) goto LAB_005f3793;
    do {
      uVar11 = 1;
      (*(code *)PTR_handle_error_00798ff0)();
LAB_005f3793:
      if ((bool)uVar11) {
        lVar8 = 1;
        goto LAB_005f37d1;
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar8 = (*(code *)PTR___rust_alloc_00799000)();
    } while (lVar8 == 0);
    (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa,lVar9);
LAB_005f37d1:
    *param_1 = lVar9;
    param_1[1] = lVar8;
    param_1[2] = lVar9;
  }
  else {
    param_1[2] = local_50;
    *param_1 = local_60;
    param_1[1] = lStack_58;
  }
  return param_1;
}


